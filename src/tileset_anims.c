#include "global.h"
#include "graphics.h"
#include "palette.h"
#include "util.h"
#include "battle_transition.h"
#include "task.h"
#include "battle_transition.h"
#include "fieldmap.h"

static EWRAM_DATA struct {
    const u16 *src;
    u16 *dest;
    u16 size;
} sTilesetDMA3TransferBuffer[20] = {0};

static u8 sTilesetDMA3TransferBufferSize;
static u16 sPrimaryTilesetAnimCounter;
static u16 sPrimaryTilesetAnimCounterMax;
static u16 sSecondaryTilesetAnimCounter;
static u16 sSecondaryTilesetAnimCounterMax;
static void (*sPrimaryTilesetAnimCallback)(u16);
static void (*sSecondaryTilesetAnimCallback)(u16);

static void _InitPrimaryTilesetAnimation(void);
static void _InitSecondaryTilesetAnimation(void);
static void TilesetAnim_General(u16);
static void TilesetAnim_General_Flood(u16);
static void TilesetAnim_Building(u16);
static void TilesetAnim_Rustboro(u16);
static void TilesetAnim_Dewford(u16);
static void TilesetAnim_Slateport(u16);
static void TilesetAnim_Mauville(u16);
static void TilesetAnim_Lavaridge(u16);
static void TilesetAnim_EverGrande(u16);
static void TilesetAnim_Pacifidlog(u16);
static void TilesetAnim_Sootopolis(u16);
static void TilesetAnim_BattleFrontierOutsideWest(u16);
static void TilesetAnim_BattleFrontierOutsideEast(u16);
static void TilesetAnim_Underwater(u16);
static void TilesetAnim_SootopolisGym(u16);
static void TilesetAnim_Cave(u16);
static void TilesetAnim_EliteFour(u16);
static void TilesetAnim_MauvilleGym(u16);
static void TilesetAnim_BikeShop(u16);
static void TilesetAnim_BattlePyramid(u16);
static void TilesetAnim_BattleDome(u16);
static void QueueAnimTiles_General_Flower(u16);
static void QueueAnimTiles_General_Water(u16);
static void QueueAnimTiles_General_SandWaterEdge(u16);
static void QueueAnimTiles_General_Waterfall(u16);
static void QueueAnimTiles_General_LandWaterEdge(u16);
static void QueueAnimTiles_General_New_Flower(u16);
static void QueueAnimTiles_Secondary_Palm(u16);
static void QueueAnimTiles_Building_TVTurnedOn(u16);
static void QueueAnimTiles_Rustboro_WindyWater(u16, u8);
static void QueueAnimTiles_Rustboro_Fountain(u16);
static void QueueAnimTiles_Dewford_Flag(u16);
static void QueueAnimTiles_Slateport_Balloons(u16);
static void QueueAnimTiles_Mauville_Flowers(u16, u8);
static void QueueAnimTiles_BikeShop_BlinkingLights(u16);
static void QueueAnimTiles_BattlePyramid_Torch(u16);
static void QueueAnimTiles_BattlePyramid_StatueShadow(u16);
static void BlendAnimPalette_BattleDome_FloorLights(u16);
static void BlendAnimPalette_BattleDome_FloorLightsNoBlend(u16);
static void QueueAnimTiles_Lavaridge_Steam(u8);
static void QueueAnimTiles_Lavaridge_Lava(u16);
static void QueueAnimTiles_EverGrande_Flowers(u16, u8);
static void QueueAnimTiles_Pacifidlog_LogBridges(u8);
static void QueueAnimTiles_Pacifidlog_WaterCurrents(u8);
static void QueueAnimTiles_Sootopolis_StormyWater(u16);
static void QueueAnimTiles_Underwater_Seaweed(u8);
static void QueueAnimTiles_Cave_Lava(u16);
static void QueueAnimTiles_BattleFrontierOutsideWest_Flag(u16);
static void QueueAnimTiles_BattleFrontierOutsideEast_Flag(u16);
static void QueueAnimTiles_MauvilleGym_ElectricGates(u16);
static void QueueAnimTiles_SootopolisGym_Waterfalls(u16);
static void QueueAnimTiles_EliteFour_GroundLights(u16);
static void QueueAnimTiles_EliteFour_WallLights(u16);

const u16 gTilesetAnims_General_Flower_Frame1[] = INCBIN_U16("data/tilesets/primary/general/anim/flower/1.4bpp");
const u16 gTilesetAnims_General_Flower_Frame0[] = INCBIN_U16("data/tilesets/primary/general/anim/flower/0.4bpp");
const u16 gTilesetAnims_General_Flower_Frame2[] = INCBIN_U16("data/tilesets/primary/general/anim/flower/2.4bpp");
const u16 tileset_anims_space_0[16] = {};

const u16 *const gTilesetAnims_General_Flower[] = {
    gTilesetAnims_General_Flower_Frame0,
    gTilesetAnims_General_Flower_Frame1,
    gTilesetAnims_General_Flower_Frame0,
    gTilesetAnims_General_Flower_Frame2
};

const u16 gTilesetAnims_General_Water_Frame0[] = INCBIN_U16("data/tilesets/primary/general/anim/water/0.4bpp");
const u16 gTilesetAnims_General_Water_Frame1[] = INCBIN_U16("data/tilesets/primary/general/anim/water/1.4bpp");
const u16 gTilesetAnims_General_Water_Frame2[] = INCBIN_U16("data/tilesets/primary/general/anim/water/2.4bpp");
const u16 gTilesetAnims_General_Water_Frame3[] = INCBIN_U16("data/tilesets/primary/general/anim/water/3.4bpp");
const u16 gTilesetAnims_General_Water_Frame4[] = INCBIN_U16("data/tilesets/primary/general/anim/water/4.4bpp");
const u16 gTilesetAnims_General_Water_Frame5[] = INCBIN_U16("data/tilesets/primary/general/anim/water/5.4bpp");
const u16 gTilesetAnims_General_Water_Frame6[] = INCBIN_U16("data/tilesets/primary/general/anim/water/6.4bpp");
const u16 gTilesetAnims_General_Water_Frame7[] = INCBIN_U16("data/tilesets/primary/general/anim/water/7.4bpp");

const u16 *const gTilesetAnims_General_Water[] = {
    gTilesetAnims_General_Water_Frame0,
    gTilesetAnims_General_Water_Frame1,
    gTilesetAnims_General_Water_Frame2,
    gTilesetAnims_General_Water_Frame3,
    gTilesetAnims_General_Water_Frame4,
    gTilesetAnims_General_Water_Frame5,
    gTilesetAnims_General_Water_Frame6,
    gTilesetAnims_General_Water_Frame7
};

const u16 gTilesetAnims_General_SandWaterEdge_Frame0[] = INCBIN_U16("data/tilesets/primary/general/anim/sand_water_edge/0.4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame1[] = INCBIN_U16("data/tilesets/primary/general/anim/sand_water_edge/1.4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame2[] = INCBIN_U16("data/tilesets/primary/general/anim/sand_water_edge/2.4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame3[] = INCBIN_U16("data/tilesets/primary/general/anim/sand_water_edge/3.4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame4[] = INCBIN_U16("data/tilesets/primary/general/anim/sand_water_edge/4.4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame5[] = INCBIN_U16("data/tilesets/primary/general/anim/sand_water_edge/5.4bpp");
const u16 gTilesetAnims_General_SandWaterEdge_Frame6[] = INCBIN_U16("data/tilesets/primary/general/anim/sand_water_edge/6.4bpp");

const u16 *const gTilesetAnims_General_SandWaterEdge[] = {
    gTilesetAnims_General_SandWaterEdge_Frame0,
    gTilesetAnims_General_SandWaterEdge_Frame1,
    gTilesetAnims_General_SandWaterEdge_Frame2,
    gTilesetAnims_General_SandWaterEdge_Frame3,
    gTilesetAnims_General_SandWaterEdge_Frame4,
    gTilesetAnims_General_SandWaterEdge_Frame5,
    gTilesetAnims_General_SandWaterEdge_Frame6,
    gTilesetAnims_General_SandWaterEdge_Frame0
};

const u16 gTilesetAnims_General_Waterfall_Frame0[] = INCBIN_U16("data/tilesets/primary/general/anim/waterfall/0.4bpp");
const u16 gTilesetAnims_General_Waterfall_Frame1[] = INCBIN_U16("data/tilesets/primary/general/anim/waterfall/1.4bpp");
const u16 gTilesetAnims_General_Waterfall_Frame2[] = INCBIN_U16("data/tilesets/primary/general/anim/waterfall/2.4bpp");
const u16 gTilesetAnims_General_Waterfall_Frame3[] = INCBIN_U16("data/tilesets/primary/general/anim/waterfall/3.4bpp");

const u16 *const gTilesetAnims_General_Waterfall[] = {
    gTilesetAnims_General_Waterfall_Frame0,
    gTilesetAnims_General_Waterfall_Frame1,
    gTilesetAnims_General_Waterfall_Frame2,
    gTilesetAnims_General_Waterfall_Frame3
};

const u16 gTilesetAnims_General_LandWaterEdge_Frame0[] = INCBIN_U16("data/tilesets/primary/general/anim/land_water_edge/0.4bpp");
const u16 gTilesetAnims_General_LandWaterEdge_Frame1[] = INCBIN_U16("data/tilesets/primary/general/anim/land_water_edge/1.4bpp");
const u16 gTilesetAnims_General_LandWaterEdge_Frame2[] = INCBIN_U16("data/tilesets/primary/general/anim/land_water_edge/2.4bpp");
const u16 gTilesetAnims_General_LandWaterEdge_Frame3[] = INCBIN_U16("data/tilesets/primary/general/anim/land_water_edge/3.4bpp");

const u16 *const gTilesetAnims_General_LandWaterEdge[] = {
    gTilesetAnims_General_LandWaterEdge_Frame0,
    gTilesetAnims_General_LandWaterEdge_Frame1,
    gTilesetAnims_General_LandWaterEdge_Frame2,
    gTilesetAnims_General_LandWaterEdge_Frame3
};

const u16 gTilesetAnims_General_New_Flower_Frame0[] = INCBIN_U16("data/tilesets/primary/general/anim/new_flower/new_flower_1.4bpp");
const u16 gTilesetAnims_General_New_Flower_Frame1[] = INCBIN_U16("data/tilesets/primary/general/anim/new_flower/new_flower_2.4bpp");
const u16 gTilesetAnims_General_New_Flower_Frame2[] = INCBIN_U16("data/tilesets/primary/general/anim/new_flower/new_flower_3.4bpp");

const u16 *const gTilesetAnims_General_New_Flower[] = {
    gTilesetAnims_General_New_Flower_Frame0,
    gTilesetAnims_General_New_Flower_Frame1,
    gTilesetAnims_General_New_Flower_Frame0,
    gTilesetAnims_General_New_Flower_Frame2
};

const u16 gTilesetAnims_Secondary_Palm_Frame0[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/palm/palm_anim0.4bpp");
const u16 gTilesetAnims_Secondary_Palm_Frame1[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/palm/palm_anim1.4bpp");
const u16 gTilesetAnims_Secondary_Palm_Frame2[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/palm/palm_anim2.4bpp");

const u16 *const gTilesetAnims_Secondary_Palm[] = {
    gTilesetAnims_Secondary_Palm_Frame0,
    gTilesetAnims_Secondary_Palm_Frame1,
    gTilesetAnims_Secondary_Palm_Frame0,
    gTilesetAnims_Secondary_Palm_Frame2
};

const u16 gTilesetAnims_Lavaridge_Steam_Frame0[] = INCBIN_U16("data/tilesets/secondary/lavaridge/anim/steam/0.4bpp");
const u16 gTilesetAnims_Lavaridge_Steam_Frame1[] = INCBIN_U16("data/tilesets/secondary/lavaridge/anim/steam/1.4bpp");
const u16 gTilesetAnims_Lavaridge_Steam_Frame2[] = INCBIN_U16("data/tilesets/secondary/lavaridge/anim/steam/2.4bpp");
const u16 gTilesetAnims_Lavaridge_Steam_Frame3[] = INCBIN_U16("data/tilesets/secondary/lavaridge/anim/steam/3.4bpp");

const u16 *const gTilesetAnims_Lavaridge_Steam[] = {
    gTilesetAnims_Lavaridge_Steam_Frame0,
    gTilesetAnims_Lavaridge_Steam_Frame1,
    gTilesetAnims_Lavaridge_Steam_Frame2,
    gTilesetAnims_Lavaridge_Steam_Frame3
};

const u16 gTilesetAnims_Pacifidlog_LogBridges_Frame0[] = INCBIN_U16("data/tilesets/secondary/pacifidlog/anim/log_bridges/0.4bpp");
const u16 gTilesetAnims_Pacifidlog_LogBridges_Frame1[] = INCBIN_U16("data/tilesets/secondary/pacifidlog/anim/log_bridges/1.4bpp");
const u16 gTilesetAnims_Pacifidlog_LogBridges_Frame2[] = INCBIN_U16("data/tilesets/secondary/pacifidlog/anim/log_bridges/2.4bpp");

const u16 *const gTilesetAnims_Pacifidlog_LogBridges[] = {
    gTilesetAnims_Pacifidlog_LogBridges_Frame0,
    gTilesetAnims_Pacifidlog_LogBridges_Frame1,
    gTilesetAnims_Pacifidlog_LogBridges_Frame2,
    gTilesetAnims_Pacifidlog_LogBridges_Frame1
};

const u16 gTilesetAnims_Underwater_Seaweed_Frame0[] = INCBIN_U16("data/tilesets/secondary/underwater/anim/seaweed/0.4bpp");
const u16 gTilesetAnims_Underwater_Seaweed_Frame1[] = INCBIN_U16("data/tilesets/secondary/underwater/anim/seaweed/1.4bpp");
const u16 gTilesetAnims_Underwater_Seaweed_Frame2[] = INCBIN_U16("data/tilesets/secondary/underwater/anim/seaweed/2.4bpp");
const u16 gTilesetAnims_Underwater_Seaweed_Frame3[] = INCBIN_U16("data/tilesets/secondary/underwater/anim/seaweed/3.4bpp");

const u16 *const gTilesetAnims_Underwater_Seaweed[] = {
    gTilesetAnims_Underwater_Seaweed_Frame0,
    gTilesetAnims_Underwater_Seaweed_Frame1,
    gTilesetAnims_Underwater_Seaweed_Frame2,
    gTilesetAnims_Underwater_Seaweed_Frame3
};

const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame0[] = INCBIN_U16("data/tilesets/secondary/pacifidlog/anim/water_currents/0.4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame1[] = INCBIN_U16("data/tilesets/secondary/pacifidlog/anim/water_currents/1.4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame2[] = INCBIN_U16("data/tilesets/secondary/pacifidlog/anim/water_currents/2.4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame3[] = INCBIN_U16("data/tilesets/secondary/pacifidlog/anim/water_currents/3.4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame4[] = INCBIN_U16("data/tilesets/secondary/pacifidlog/anim/water_currents/4.4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame5[] = INCBIN_U16("data/tilesets/secondary/pacifidlog/anim/water_currents/5.4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame6[] = INCBIN_U16("data/tilesets/secondary/pacifidlog/anim/water_currents/6.4bpp");
const u16 gTilesetAnims_Pacifidlog_WaterCurrents_Frame7[] = INCBIN_U16("data/tilesets/secondary/pacifidlog/anim/water_currents/7.4bpp");

const u16 *const gTilesetAnims_Pacifidlog_WaterCurrents[] = {
    gTilesetAnims_Pacifidlog_WaterCurrents_Frame0,
    gTilesetAnims_Pacifidlog_WaterCurrents_Frame1,
    gTilesetAnims_Pacifidlog_WaterCurrents_Frame2,
    gTilesetAnims_Pacifidlog_WaterCurrents_Frame3,
    gTilesetAnims_Pacifidlog_WaterCurrents_Frame4,
    gTilesetAnims_Pacifidlog_WaterCurrents_Frame5,
    gTilesetAnims_Pacifidlog_WaterCurrents_Frame6,
    gTilesetAnims_Pacifidlog_WaterCurrents_Frame7
};

const u16 gTilesetAnims_Mauville_Flower1_Frame0[] = INCBIN_U16("data/tilesets/secondary/mauville/anim/flower_1/0.4bpp");
const u16 gTilesetAnims_Mauville_Flower1_Frame1[] = INCBIN_U16("data/tilesets/secondary/mauville/anim/flower_1/1.4bpp");
const u16 gTilesetAnims_Mauville_Flower1_Frame2[] = INCBIN_U16("data/tilesets/secondary/mauville/anim/flower_1/2.4bpp");
const u16 gTilesetAnims_Mauville_Flower1_Frame3[] = INCBIN_U16("data/tilesets/secondary/mauville/anim/flower_1/3.4bpp");
const u16 gTilesetAnims_Mauville_Flower1_Frame4[] = INCBIN_U16("data/tilesets/secondary/mauville/anim/flower_1/4.4bpp");
const u16 gTilesetAnims_Mauville_Flower2_Frame0[] = INCBIN_U16("data/tilesets/secondary/mauville/anim/flower_2/0.4bpp");
const u16 gTilesetAnims_Mauville_Flower2_Frame1[] = INCBIN_U16("data/tilesets/secondary/mauville/anim/flower_2/1.4bpp");
const u16 gTilesetAnims_Mauville_Flower2_Frame2[] = INCBIN_U16("data/tilesets/secondary/mauville/anim/flower_2/2.4bpp");
const u16 gTilesetAnims_Mauville_Flower2_Frame3[] = INCBIN_U16("data/tilesets/secondary/mauville/anim/flower_2/3.4bpp");
const u16 gTilesetAnims_Mauville_Flower2_Frame4[] = INCBIN_U16("data/tilesets/secondary/mauville/anim/flower_2/4.4bpp");
const u16 tileset_anims_space_1[16] = {};

u16 *const gTilesetAnims_Mauville_Flower1_VDests[] = {
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 96)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 100)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 104)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 108)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 112)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 116)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 120)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 124))
};

u16 *const gTilesetAnims_Mauville_Flower2_VDests[] = {
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 128)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 132)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 136)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 140)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 144)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 148)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 152)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 156))
};

const u16 *const gTilesetAnims_Mauville_Flower1[] = {
    gTilesetAnims_Mauville_Flower1_Frame0,
    gTilesetAnims_Mauville_Flower1_Frame0,
    gTilesetAnims_Mauville_Flower1_Frame1,
    gTilesetAnims_Mauville_Flower1_Frame2,
    gTilesetAnims_Mauville_Flower1_Frame3,
    gTilesetAnims_Mauville_Flower1_Frame3,
    gTilesetAnims_Mauville_Flower1_Frame3,
    gTilesetAnims_Mauville_Flower1_Frame3,
    gTilesetAnims_Mauville_Flower1_Frame3,
    gTilesetAnims_Mauville_Flower1_Frame3,
    gTilesetAnims_Mauville_Flower1_Frame2,
    gTilesetAnims_Mauville_Flower1_Frame1
};

const u16 *const gTilesetAnims_Mauville_Flower2[] = {
    gTilesetAnims_Mauville_Flower2_Frame0,
    gTilesetAnims_Mauville_Flower2_Frame0,
    gTilesetAnims_Mauville_Flower2_Frame1,
    gTilesetAnims_Mauville_Flower2_Frame2,
    gTilesetAnims_Mauville_Flower2_Frame3,
    gTilesetAnims_Mauville_Flower2_Frame3,
    gTilesetAnims_Mauville_Flower2_Frame3,
    gTilesetAnims_Mauville_Flower2_Frame3,
    gTilesetAnims_Mauville_Flower2_Frame3,
    gTilesetAnims_Mauville_Flower2_Frame3,
    gTilesetAnims_Mauville_Flower2_Frame2,
    gTilesetAnims_Mauville_Flower2_Frame1
};

const u16 *const gTilesetAnims_Mauville_Flower1_B[] = {
    gTilesetAnims_Mauville_Flower1_Frame0,
    gTilesetAnims_Mauville_Flower1_Frame0,
    gTilesetAnims_Mauville_Flower1_Frame4,
    gTilesetAnims_Mauville_Flower1_Frame4
};

const u16 *const gTilesetAnims_Mauville_Flower2_B[] = {
    gTilesetAnims_Mauville_Flower2_Frame0,
    gTilesetAnims_Mauville_Flower2_Frame0,
    gTilesetAnims_Mauville_Flower2_Frame4,
    gTilesetAnims_Mauville_Flower2_Frame4
};

const u16 gTilesetAnims_Rustboro_WindyWater_Frame0[] = INCBIN_U16("data/tilesets/secondary/rustboro/anim/windy_water/0.4bpp");
const u16 gTilesetAnims_Rustboro_WindyWater_Frame1[] = INCBIN_U16("data/tilesets/secondary/rustboro/anim/windy_water/1.4bpp");
const u16 gTilesetAnims_Rustboro_WindyWater_Frame2[] = INCBIN_U16("data/tilesets/secondary/rustboro/anim/windy_water/2.4bpp");
const u16 gTilesetAnims_Rustboro_WindyWater_Frame3[] = INCBIN_U16("data/tilesets/secondary/rustboro/anim/windy_water/3.4bpp");
const u16 gTilesetAnims_Rustboro_WindyWater_Frame4[] = INCBIN_U16("data/tilesets/secondary/rustboro/anim/windy_water/4.4bpp");
const u16 gTilesetAnims_Rustboro_WindyWater_Frame5[] = INCBIN_U16("data/tilesets/secondary/rustboro/anim/windy_water/5.4bpp");
const u16 gTilesetAnims_Rustboro_WindyWater_Frame6[] = INCBIN_U16("data/tilesets/secondary/rustboro/anim/windy_water/6.4bpp");
const u16 gTilesetAnims_Rustboro_WindyWater_Frame7[] = INCBIN_U16("data/tilesets/secondary/rustboro/anim/windy_water/7.4bpp");

u16 *const gTilesetAnims_Rustboro_WindyWater_VDests[] = {
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 128)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 132)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 136)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 140)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 144)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 148)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 152)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 156))
};

const u16 *const gTilesetAnims_Rustboro_WindyWater[] = {
    gTilesetAnims_Rustboro_WindyWater_Frame0,
    gTilesetAnims_Rustboro_WindyWater_Frame1,
    gTilesetAnims_Rustboro_WindyWater_Frame2,
    gTilesetAnims_Rustboro_WindyWater_Frame3,
    gTilesetAnims_Rustboro_WindyWater_Frame4,
    gTilesetAnims_Rustboro_WindyWater_Frame5,
    gTilesetAnims_Rustboro_WindyWater_Frame6,
    gTilesetAnims_Rustboro_WindyWater_Frame7
};

const u16 gTilesetAnims_Rustboro_Fountain_Frame0[] = INCBIN_U16("data/tilesets/secondary/rustboro/anim/fountain/0.4bpp");
const u16 gTilesetAnims_Rustboro_Fountain_Frame1[] = INCBIN_U16("data/tilesets/secondary/rustboro/anim/fountain/1.4bpp");
const u16 tileset_anims_space_2[16] = {};

const u16 *const gTilesetAnims_Rustboro_Fountain[] = {
    gTilesetAnims_Rustboro_Fountain_Frame0,
    gTilesetAnims_Rustboro_Fountain_Frame1
};

const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame0[] = INCBIN_U16("data/tilesets/secondary/cave/anim/lava/0.4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame1[] = INCBIN_U16("data/tilesets/secondary/cave/anim/lava/1.4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame2[] = INCBIN_U16("data/tilesets/secondary/cave/anim/lava/2.4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame3[] = INCBIN_U16("data/tilesets/secondary/cave/anim/lava/3.4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame4[] = INCBIN_U16("data/tilesets/secondary/cave/anim/lava/4.4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame5[] = INCBIN_U16("data/tilesets/secondary/cave/anim/lava/5.4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame6[] = INCBIN_U16("data/tilesets/secondary/cave/anim/lava/6.4bpp");
const u16 gTilesetAnims_Lavaridge_Cave_Lava_Frame7[] = INCBIN_U16("data/tilesets/secondary/cave/anim/lava/7.4bpp");
const u16 tileset_anims_space_3[16] = {};

const u16 *const gTilesetAnims_Lavaridge_Cave_Lava[] = {
    gTilesetAnims_Lavaridge_Cave_Lava_Frame0,
    gTilesetAnims_Lavaridge_Cave_Lava_Frame1,
    gTilesetAnims_Lavaridge_Cave_Lava_Frame2,
    gTilesetAnims_Lavaridge_Cave_Lava_Frame3
};

const u16 gTilesetAnims_EverGrande_Flowers_Frame0[] = INCBIN_U16("data/tilesets/secondary/ever_grande/anim/flowers/0.4bpp");
const u16 gTilesetAnims_EverGrande_Flowers_Frame1[] = INCBIN_U16("data/tilesets/secondary/ever_grande/anim/flowers/1.4bpp");
const u16 gTilesetAnims_EverGrande_Flowers_Frame2[] = INCBIN_U16("data/tilesets/secondary/ever_grande/anim/flowers/2.4bpp");
const u16 gTilesetAnims_EverGrande_Flowers_Frame3[] = INCBIN_U16("data/tilesets/secondary/ever_grande/anim/flowers/3.4bpp");
const u16 gTilesetAnims_EverGrande_Flowers_Frame4[] = INCBIN_U16("data/tilesets/secondary/ever_grande/anim/flowers/4.4bpp");
const u16 gTilesetAnims_EverGrande_Flowers_Frame5[] = INCBIN_U16("data/tilesets/secondary/ever_grande/anim/flowers/5.4bpp");
const u16 gTilesetAnims_EverGrande_Flowers_Frame6[] = INCBIN_U16("data/tilesets/secondary/ever_grande/anim/flowers/6.4bpp");
const u16 gTilesetAnims_EverGrande_Flowers_Frame7[] = INCBIN_U16("data/tilesets/secondary/ever_grande/anim/flowers/7.4bpp");
const u16 tileset_anims_space_4[16] = {};

u16 *const gTilesetAnims_EverGrande_VDests[] = {
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 224)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 228)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 232)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 236)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 240)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 244)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 248)),
    (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 252))
};

const u16 *const gTilesetAnims_EverGrande_Flowers[] = {
    gTilesetAnims_EverGrande_Flowers_Frame0,
    gTilesetAnims_EverGrande_Flowers_Frame1,
    gTilesetAnims_EverGrande_Flowers_Frame2,
    gTilesetAnims_EverGrande_Flowers_Frame3,
    gTilesetAnims_EverGrande_Flowers_Frame4,
    gTilesetAnims_EverGrande_Flowers_Frame5,
    gTilesetAnims_EverGrande_Flowers_Frame6,
    gTilesetAnims_EverGrande_Flowers_Frame7
};

const u16 gTilesetAnims_Dewford_Flag_Frame0[] = INCBIN_U16("data/tilesets/secondary/dewford/anim/flag/0.4bpp");
const u16 gTilesetAnims_Dewford_Flag_Frame1[] = INCBIN_U16("data/tilesets/secondary/dewford/anim/flag/1.4bpp");
const u16 gTilesetAnims_Dewford_Flag_Frame2[] = INCBIN_U16("data/tilesets/secondary/dewford/anim/flag/2.4bpp");
const u16 gTilesetAnims_Dewford_Flag_Frame3[] = INCBIN_U16("data/tilesets/secondary/dewford/anim/flag/3.4bpp");

const u16 *const gTilesetAnims_Dewford_Flag[] = {
    gTilesetAnims_Dewford_Flag_Frame0,
    gTilesetAnims_Dewford_Flag_Frame1,
    gTilesetAnims_Dewford_Flag_Frame2,
    gTilesetAnims_Dewford_Flag_Frame3
};

const u16 gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame0[] = INCBIN_U16("data/tilesets/secondary/battle_frontier_outside_west/anim/flag/0.4bpp");
const u16 gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame1[] = INCBIN_U16("data/tilesets/secondary/battle_frontier_outside_west/anim/flag/1.4bpp");
const u16 gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame2[] = INCBIN_U16("data/tilesets/secondary/battle_frontier_outside_west/anim/flag/2.4bpp");
const u16 gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame3[] = INCBIN_U16("data/tilesets/secondary/battle_frontier_outside_west/anim/flag/3.4bpp");

const u16 *const gTilesetAnims_BattleFrontierOutsideWest_Flag[] = {
    gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame0,
    gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame1,
    gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame2,
    gTilesetAnims_BattleFrontierOutsideWest_Flag_Frame3
};

const u16 gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame0[] = INCBIN_U16("data/tilesets/secondary/battle_frontier_outside_east/anim/flag/0.4bpp");
const u16 gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame1[] = INCBIN_U16("data/tilesets/secondary/battle_frontier_outside_east/anim/flag/1.4bpp");
const u16 gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame2[] = INCBIN_U16("data/tilesets/secondary/battle_frontier_outside_east/anim/flag/2.4bpp");
const u16 gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame3[] = INCBIN_U16("data/tilesets/secondary/battle_frontier_outside_east/anim/flag/3.4bpp");

const u16 *const gTilesetAnims_BattleFrontierOutsideEast_Flag[] = {
    gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame0,
    gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame1,
    gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame2,
    gTilesetAnims_BattleFrontierOutsideEast_Flag_Frame3
};

const u16 gTilesetAnims_Slateport_Balloons_Frame0[] = INCBIN_U16("data/tilesets/secondary/slateport/anim/balloons/0.4bpp");
const u16 gTilesetAnims_Slateport_Balloons_Frame1[] = INCBIN_U16("data/tilesets/secondary/slateport/anim/balloons/1.4bpp");
const u16 gTilesetAnims_Slateport_Balloons_Frame2[] = INCBIN_U16("data/tilesets/secondary/slateport/anim/balloons/2.4bpp");
const u16 gTilesetAnims_Slateport_Balloons_Frame3[] = INCBIN_U16("data/tilesets/secondary/slateport/anim/balloons/3.4bpp");

const u16 *const gTilesetAnims_Slateport_Balloons[] = {
    gTilesetAnims_Slateport_Balloons_Frame0,
    gTilesetAnims_Slateport_Balloons_Frame1,
    gTilesetAnims_Slateport_Balloons_Frame2,
    gTilesetAnims_Slateport_Balloons_Frame3
};

const u16 gTilesetAnims_Building_TvTurnedOn_Frame0[] = INCBIN_U16("data/tilesets/primary/building/anim/tv_turned_on/0.4bpp");
const u16 gTilesetAnims_Building_TvTurnedOn_Frame1[] = INCBIN_U16("data/tilesets/primary/building/anim/tv_turned_on/1.4bpp");

const u16 *const gTilesetAnims_Building_TvTurnedOn[] = {
    gTilesetAnims_Building_TvTurnedOn_Frame0,
    gTilesetAnims_Building_TvTurnedOn_Frame1
};

const u16 gTilesetAnims_SootopolisGym_SideWaterfall_Frame0[] = INCBIN_U16("data/tilesets/secondary/sootopolis_gym/anim/side_waterfall/0.4bpp");
const u16 gTilesetAnims_SootopolisGym_SideWaterfall_Frame1[] = INCBIN_U16("data/tilesets/secondary/sootopolis_gym/anim/side_waterfall/1.4bpp");
const u16 gTilesetAnims_SootopolisGym_SideWaterfall_Frame2[] = INCBIN_U16("data/tilesets/secondary/sootopolis_gym/anim/side_waterfall/2.4bpp");
const u16 gTilesetAnims_SootopolisGym_FrontWaterfall_Frame0[] = INCBIN_U16("data/tilesets/secondary/sootopolis_gym/anim/front_waterfall/0.4bpp");
const u16 gTilesetAnims_SootopolisGym_FrontWaterfall_Frame1[] = INCBIN_U16("data/tilesets/secondary/sootopolis_gym/anim/front_waterfall/1.4bpp");
const u16 gTilesetAnims_SootopolisGym_FrontWaterfall_Frame2[] = INCBIN_U16("data/tilesets/secondary/sootopolis_gym/anim/front_waterfall/2.4bpp");

const u16 *const gTilesetAnims_SootopolisGym_SideWaterfall[] = {
    gTilesetAnims_SootopolisGym_SideWaterfall_Frame0,
    gTilesetAnims_SootopolisGym_SideWaterfall_Frame1,
    gTilesetAnims_SootopolisGym_SideWaterfall_Frame2
};

const u16 *const gTilesetAnims_SootopolisGym_FrontWaterfall[] = {
    gTilesetAnims_SootopolisGym_FrontWaterfall_Frame0,
    gTilesetAnims_SootopolisGym_FrontWaterfall_Frame1,
    gTilesetAnims_SootopolisGym_FrontWaterfall_Frame2
};

const u16 gTilesetAnims_EliteFour_FloorLight_Frame0[] = INCBIN_U16("data/tilesets/secondary/elite_four/anim/floor_light/0.4bpp");
const u16 gTilesetAnims_EliteFour_FloorLight_Frame1[] = INCBIN_U16("data/tilesets/secondary/elite_four/anim/floor_light/1.4bpp");
const u16 gTilesetAnims_EliteFour_WallLights_Frame0[] = INCBIN_U16("data/tilesets/secondary/elite_four/anim/wall_lights/0.4bpp");
const u16 gTilesetAnims_EliteFour_WallLights_Frame1[] = INCBIN_U16("data/tilesets/secondary/elite_four/anim/wall_lights/1.4bpp");
const u16 gTilesetAnims_EliteFour_WallLights_Frame2[] = INCBIN_U16("data/tilesets/secondary/elite_four/anim/wall_lights/2.4bpp");
const u16 gTilesetAnims_EliteFour_WallLights_Frame3[] = INCBIN_U16("data/tilesets/secondary/elite_four/anim/wall_lights/3.4bpp");
const u16 tileset_anims_space_5[16] = {};

const u16 *const gTilesetAnims_EliteFour_WallLights[] = {
    gTilesetAnims_EliteFour_WallLights_Frame0,
    gTilesetAnims_EliteFour_WallLights_Frame1,
    gTilesetAnims_EliteFour_WallLights_Frame2,
    gTilesetAnims_EliteFour_WallLights_Frame3
};

const u16 *const gTilesetAnims_EliteFour_FloorLight[] = {
    gTilesetAnims_EliteFour_FloorLight_Frame0,
    gTilesetAnims_EliteFour_FloorLight_Frame1
};

const u16 gTilesetAnims_MauvilleGym_ElectricGates_Frame0[] = INCBIN_U16("data/tilesets/secondary/mauville_gym/anim/electric_gates/0.4bpp");
const u16 gTilesetAnims_MauvilleGym_ElectricGates_Frame1[] = INCBIN_U16("data/tilesets/secondary/mauville_gym/anim/electric_gates/1.4bpp");
const u16 tileset_anims_space_6[16] = {};

const u16 *const gTilesetAnims_MauvilleGym_ElectricGates[] = {
    gTilesetAnims_MauvilleGym_ElectricGates_Frame0,
    gTilesetAnims_MauvilleGym_ElectricGates_Frame1
};

const u16 gTilesetAnims_BikeShop_BlinkingLights_Frame0[] = INCBIN_U16("data/tilesets/secondary/bike_shop/anim/blinking_lights/0.4bpp");
const u16 gTilesetAnims_BikeShop_BlinkingLights_Frame1[] = INCBIN_U16("data/tilesets/secondary/bike_shop/anim/blinking_lights/1.4bpp");
const u16 tileset_anims_space_7[16] = {};

const u16 *const gTilesetAnims_BikeShop_BlinkingLights[] = {
    gTilesetAnims_BikeShop_BlinkingLights_Frame0,
    gTilesetAnims_BikeShop_BlinkingLights_Frame1
};

const u16 gTilesetAnims_Sootopolis_StormyWater_Frame0[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/stormy_water/0_kyogre.4bpp", "data/tilesets/secondary/sootopolis/anim/stormy_water/0_groudon.4bpp");
const u16 gTilesetAnims_Sootopolis_StormyWater_Frame1[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/stormy_water/1_kyogre.4bpp", "data/tilesets/secondary/sootopolis/anim/stormy_water/1_groudon.4bpp");
const u16 gTilesetAnims_Sootopolis_StormyWater_Frame2[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/stormy_water/2_kyogre.4bpp", "data/tilesets/secondary/sootopolis/anim/stormy_water/2_groudon.4bpp");
const u16 gTilesetAnims_Sootopolis_StormyWater_Frame3[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/stormy_water/3_kyogre.4bpp", "data/tilesets/secondary/sootopolis/anim/stormy_water/3_groudon.4bpp");
const u16 gTilesetAnims_Sootopolis_StormyWater_Frame4[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/stormy_water/4_kyogre.4bpp", "data/tilesets/secondary/sootopolis/anim/stormy_water/4_groudon.4bpp");
const u16 gTilesetAnims_Sootopolis_StormyWater_Frame5[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/stormy_water/5_kyogre.4bpp", "data/tilesets/secondary/sootopolis/anim/stormy_water/5_groudon.4bpp");
const u16 gTilesetAnims_Sootopolis_StormyWater_Frame6[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/stormy_water/6_kyogre.4bpp", "data/tilesets/secondary/sootopolis/anim/stormy_water/6_groudon.4bpp");
const u16 gTilesetAnims_Sootopolis_StormyWater_Frame7[] = INCBIN_U16("data/tilesets/secondary/sootopolis/anim/stormy_water/7_kyogre.4bpp", "data/tilesets/secondary/sootopolis/anim/stormy_water/7_groudon.4bpp");
const u16 tileset_anims_space_8[16] = {};

const u16 gTilesetAnims_Unused1_Frame0[] = INCBIN_U16("data/tilesets/secondary/unused_1/0.4bpp");
const u16 gTilesetAnims_Unused1_Frame1[] = INCBIN_U16("data/tilesets/secondary/unused_1/1.4bpp");
const u16 gTilesetAnims_Unused1_Frame2[] = INCBIN_U16("data/tilesets/secondary/unused_1/2.4bpp");
const u16 gTilesetAnims_Unused1_Frame3[] = INCBIN_U16("data/tilesets/secondary/unused_1/3.4bpp");

const u16 *const gTilesetAnims_Sootopolis_StormyWater[] = {
    gTilesetAnims_Sootopolis_StormyWater_Frame0,
    gTilesetAnims_Sootopolis_StormyWater_Frame1,
    gTilesetAnims_Sootopolis_StormyWater_Frame2,
    gTilesetAnims_Sootopolis_StormyWater_Frame3,
    gTilesetAnims_Sootopolis_StormyWater_Frame4,
    gTilesetAnims_Sootopolis_StormyWater_Frame5,
    gTilesetAnims_Sootopolis_StormyWater_Frame6,
    gTilesetAnims_Sootopolis_StormyWater_Frame7
};

const u16 gTilesetAnims_BattlePyramid_Torch_Frame0[] = INCBIN_U16("data/tilesets/secondary/battle_pyramid/anim/torch/0.4bpp");
const u16 gTilesetAnims_BattlePyramid_Torch_Frame1[] = INCBIN_U16("data/tilesets/secondary/battle_pyramid/anim/torch/1.4bpp");
const u16 gTilesetAnims_BattlePyramid_Torch_Frame2[] = INCBIN_U16("data/tilesets/secondary/battle_pyramid/anim/torch/2.4bpp");
const u16 tileset_anims_space_9[16] = {};

const u16 gTilesetAnims_BattlePyramid_StatueShadow_Frame0[] = INCBIN_U16("data/tilesets/secondary/battle_pyramid/anim/statue_shadow/0.4bpp");
const u16 gTilesetAnims_BattlePyramid_StatueShadow_Frame1[] = INCBIN_U16("data/tilesets/secondary/battle_pyramid/anim/statue_shadow/1.4bpp");
const u16 gTilesetAnims_BattlePyramid_StatueShadow_Frame2[] = INCBIN_U16("data/tilesets/secondary/battle_pyramid/anim/statue_shadow/2.4bpp");
const u16 tileset_anims_space_10[7808] = {};

const u16 gTilesetAnims_Unused2_Frame0[] = INCBIN_U16("data/tilesets/secondary/unused_2/0.4bpp");
const u16 tileset_anims_space_11[224] = {};

const u16 gTilesetAnims_Unused2_Frame1[] = INCBIN_U16("data/tilesets/secondary/unused_2/1.4bpp");

const u16 *const gTilesetAnims_BattlePyramid_Torch[] = {
    gTilesetAnims_BattlePyramid_Torch_Frame0,
    gTilesetAnims_BattlePyramid_Torch_Frame1,
    gTilesetAnims_BattlePyramid_Torch_Frame2
};

const u16 *const gTilesetAnims_BattlePyramid_StatueShadow[] = {
    gTilesetAnims_BattlePyramid_StatueShadow_Frame0,
    gTilesetAnims_BattlePyramid_StatueShadow_Frame1,
    gTilesetAnims_BattlePyramid_StatueShadow_Frame2
};

static const u16 *const sTilesetAnims_BattleDomeFloorLightPals[] = {
    gTilesetAnims_BattleDomePals0_0,
    gTilesetAnims_BattleDomePals0_1,
    gTilesetAnims_BattleDomePals0_2,
    gTilesetAnims_BattleDomePals0_3,
};

static void ResetTilesetAnimBuffer(void)
{
    sTilesetDMA3TransferBufferSize = 0;
    CpuFill32(0, sTilesetDMA3TransferBuffer, sizeof sTilesetDMA3TransferBuffer);
}

static void AppendTilesetAnimToBuffer(const u16 *src, u16 *dest, u16 size)
{
    if (sTilesetDMA3TransferBufferSize < 20)
    {
        sTilesetDMA3TransferBuffer[sTilesetDMA3TransferBufferSize].src = src;
        sTilesetDMA3TransferBuffer[sTilesetDMA3TransferBufferSize].dest = dest;
        sTilesetDMA3TransferBuffer[sTilesetDMA3TransferBufferSize].size = size;
        sTilesetDMA3TransferBufferSize ++;
    }
}

void TransferTilesetAnimsBuffer(void)
{
    int i;

    for (i = 0; i < sTilesetDMA3TransferBufferSize; i ++)
        DmaCopy16(3, sTilesetDMA3TransferBuffer[i].src, sTilesetDMA3TransferBuffer[i].dest, sTilesetDMA3TransferBuffer[i].size);

    sTilesetDMA3TransferBufferSize = 0;
}

void InitTilesetAnimations(void)
{
    ResetTilesetAnimBuffer();
    _InitPrimaryTilesetAnimation();
    _InitSecondaryTilesetAnimation();
}

void InitSecondaryTilesetAnimation(void)
{
    _InitSecondaryTilesetAnimation();
}

void UpdateTilesetAnimations(void)
{
    ResetTilesetAnimBuffer();
    if (++sPrimaryTilesetAnimCounter >= sPrimaryTilesetAnimCounterMax)
        sPrimaryTilesetAnimCounter = 0;
    if (++sSecondaryTilesetAnimCounter >= sSecondaryTilesetAnimCounterMax)
        sSecondaryTilesetAnimCounter = 0;

    if (sPrimaryTilesetAnimCallback)
        sPrimaryTilesetAnimCallback(sPrimaryTilesetAnimCounter);
    if (sSecondaryTilesetAnimCallback)
        sSecondaryTilesetAnimCallback(sSecondaryTilesetAnimCounter);
}

static void _InitPrimaryTilesetAnimation(void)
{
    sPrimaryTilesetAnimCounter = 0;
    sPrimaryTilesetAnimCounterMax = 0;
    sPrimaryTilesetAnimCallback = NULL;
    if (gMapHeader.mapLayout->primaryTileset && gMapHeader.mapLayout->primaryTileset->callback)
        gMapHeader.mapLayout->primaryTileset->callback();
}

static void _InitSecondaryTilesetAnimation(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = 0;
    sSecondaryTilesetAnimCallback = NULL;
    if (gMapHeader.mapLayout->secondaryTileset && gMapHeader.mapLayout->secondaryTileset->callback)
        gMapHeader.mapLayout->secondaryTileset->callback();
}

void InitTilesetAnim_General(void)
{
    sPrimaryTilesetAnimCounter = 0;
    sPrimaryTilesetAnimCounterMax = 256;
    sPrimaryTilesetAnimCallback = TilesetAnim_General;
}

void InitTilesetAnim_General_Flood(void)
{
    sPrimaryTilesetAnimCounter = 0;
    sPrimaryTilesetAnimCounterMax = 256;
    sPrimaryTilesetAnimCallback = TilesetAnim_General_Flood;
}

void InitTilesetAnim_Building(void)
{
    sPrimaryTilesetAnimCounter = 0;
    sPrimaryTilesetAnimCounterMax = 256;
    sPrimaryTilesetAnimCallback = TilesetAnim_Building;
}

static void TilesetAnim_General(u16 timer)
{
    if (timer % 16 == 0)
        QueueAnimTiles_General_Flower(timer / 16);
    if (timer % 16 == 1)
        QueueAnimTiles_General_Water(timer / 16);
    if (timer % 16 == 2)
        QueueAnimTiles_General_SandWaterEdge(timer / 16);
    if (timer % 16 == 3)
        QueueAnimTiles_General_Waterfall(timer / 16);
    if (timer % 16 == 4)
        QueueAnimTiles_General_LandWaterEdge(timer / 16);
    if (timer % 16 == 5)
        QueueAnimTiles_General_New_Flower(timer / 16);
}

static void TilesetAnim_General_Flood(u16 timer)
{
    if (timer % 16 == 0)
        QueueAnimTiles_General_Flower(timer / 16);
    if (timer % 16 == 1)
        QueueAnimTiles_General_Water(timer / 16);
    if (timer % 16 == 2)
        QueueAnimTiles_General_SandWaterEdge(timer / 16);
    if (timer % 16 == 3)
        QueueAnimTiles_General_Waterfall(timer / 16);
    if (timer % 16 == 4)
        QueueAnimTiles_General_LandWaterEdge(timer / 16);
}

static void TilesetAnim_Building(u16 timer)
{
    if (timer % 8 == 0)
        QueueAnimTiles_Building_TVTurnedOn(timer / 8);
}

static void QueueAnimTiles_General_Flower(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_General_Flower);
    AppendTilesetAnimToBuffer(gTilesetAnims_General_Flower[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(508)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_General_Water(u16 timer)
{
    u8 i = timer % ARRAY_COUNT(gTilesetAnims_General_Water);
    AppendTilesetAnimToBuffer(gTilesetAnims_General_Water[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(432)), 30 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_General_SandWaterEdge(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_General_SandWaterEdge);
    AppendTilesetAnimToBuffer(gTilesetAnims_General_SandWaterEdge[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(464)), 10 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_General_Waterfall(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_General_Waterfall);
    AppendTilesetAnimToBuffer(gTilesetAnims_General_Waterfall[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(496)), 6 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_General_New_Flower(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_General_New_Flower);
    AppendTilesetAnimToBuffer(gTilesetAnims_General_New_Flower[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(502)), 0x80);
}

static void QueueAnimTiles_Secondary_Palm(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Secondary_Palm);
    AppendTilesetAnimToBuffer(gTilesetAnims_Secondary_Palm[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(720)), 0x100);
}



void InitTilesetAnim_Petalburg(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = NULL;
}

void InitTilesetAnim_Rustboro(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_Rustboro;
}

void InitTilesetAnim_Dewford(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_Dewford;
}

void InitTilesetAnim_Slateport(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_Slateport;
}

void InitTilesetAnim_Mauville(void)
{
    sSecondaryTilesetAnimCounter = sPrimaryTilesetAnimCounter;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_Mauville;
}

void InitTilesetAnim_Lavaridge(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_Lavaridge;
}

void InitTilesetAnim_Fallarbor(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = NULL;
}

void InitTilesetAnim_Fortree(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = NULL;
}

void InitTilesetAnim_Lilycove(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = NULL;
}

void InitTilesetAnim_Mossdeep(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = NULL;
}

void InitTilesetAnim_EverGrande(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_EverGrande;
}

void InitTilesetAnim_Pacifidlog(void)
{
    sSecondaryTilesetAnimCounter = sPrimaryTilesetAnimCounter;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_Pacifidlog;
}

void InitTilesetAnim_Sootopolis(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_Sootopolis;
}

void InitTilesetAnim_BattleFrontierOutsideWest(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_BattleFrontierOutsideWest;
}

void InitTilesetAnim_BattleFrontierOutsideEast(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_BattleFrontierOutsideEast;
}

void InitTilesetAnim_Underwater(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = 128;
    sSecondaryTilesetAnimCallback = TilesetAnim_Underwater;
}

void InitTilesetAnim_SootopolisGym(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = 240;
    sSecondaryTilesetAnimCallback = TilesetAnim_SootopolisGym;
}

void InitTilesetAnim_Cave(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_Cave;
}

void InitTilesetAnim_EliteFour(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = 128;
    sSecondaryTilesetAnimCallback = TilesetAnim_EliteFour;
}

void InitTilesetAnim_MauvilleGym(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_MauvilleGym;
}

void InitTilesetAnim_BikeShop(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_BikeShop;
}

void InitTilesetAnim_BattlePyramid(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_BattlePyramid;
}

void InitTilesetAnim_BattleDome(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = sPrimaryTilesetAnimCounterMax;
    sSecondaryTilesetAnimCallback = TilesetAnim_BattleDome;
}

static void TilesetAnim_Rustboro(u16 timer)
{
    if (timer % 8 == 0)
    {
        QueueAnimTiles_Rustboro_WindyWater(timer / 8, 0);
        QueueAnimTiles_Rustboro_Fountain(timer / 8);
    }
    if (timer % 8 == 1)
        QueueAnimTiles_Rustboro_WindyWater(timer / 8, 1);
    if (timer % 8 == 2)
        QueueAnimTiles_Rustboro_WindyWater(timer / 8, 2);
    if (timer % 8 == 3)
        QueueAnimTiles_Rustboro_WindyWater(timer / 8, 3);
    if (timer % 8 == 4)
        QueueAnimTiles_Rustboro_WindyWater(timer / 8, 4);
    if (timer % 8 == 5)
        QueueAnimTiles_Rustboro_WindyWater(timer / 8, 5);
    if (timer % 8 == 6)
        QueueAnimTiles_Rustboro_WindyWater(timer / 8, 6);
    if (timer % 8 == 7)
        QueueAnimTiles_Rustboro_WindyWater(timer / 8, 7);
}

static void TilesetAnim_Dewford(u16 timer)
{
    if (timer % 8 == 0)
        QueueAnimTiles_Dewford_Flag(timer / 8);
}

static void TilesetAnim_Slateport(u16 timer)
{
    if (timer % 16 == 0)
        QueueAnimTiles_Slateport_Balloons(timer / 16);
}

static void TilesetAnim_Mauville(u16 timer)
{
    if (timer % 8 == 0)
        QueueAnimTiles_Mauville_Flowers(timer / 8, 0);
    if (timer % 8 == 1)
        QueueAnimTiles_Mauville_Flowers(timer / 8, 1);
    if (timer % 8 == 2)
        QueueAnimTiles_Mauville_Flowers(timer / 8, 2);
    if (timer % 8 == 3)
        QueueAnimTiles_Mauville_Flowers(timer / 8, 3);
    if (timer % 8 == 4)
        QueueAnimTiles_Mauville_Flowers(timer / 8, 4);
    if (timer % 8 == 5)
        QueueAnimTiles_Mauville_Flowers(timer / 8, 5);
    if (timer % 8 == 6)
        QueueAnimTiles_Mauville_Flowers(timer / 8, 6);
    if (timer % 8 == 7)
        QueueAnimTiles_Mauville_Flowers(timer / 8, 7);
}

static void TilesetAnim_Lavaridge(u16 timer)
{
    if (timer % 16 == 0)
        QueueAnimTiles_Lavaridge_Steam(timer / 16);
    if (timer % 16 == 1)
        QueueAnimTiles_Lavaridge_Lava(timer / 16);
}

static void TilesetAnim_EverGrande(u16 timer)
{
    if (timer % 8 == 0)
        QueueAnimTiles_EverGrande_Flowers(timer / 8, 0);
    if (timer % 8 == 1)
        QueueAnimTiles_EverGrande_Flowers(timer / 8, 1);
    if (timer % 8 == 2)
        QueueAnimTiles_EverGrande_Flowers(timer / 8, 2);
    if (timer % 8 == 3)
        QueueAnimTiles_EverGrande_Flowers(timer / 8, 3);
    if (timer % 8 == 4)
        QueueAnimTiles_EverGrande_Flowers(timer / 8, 4);
    if (timer % 8 == 5)
        QueueAnimTiles_EverGrande_Flowers(timer / 8, 5);
    if (timer % 8 == 6)
        QueueAnimTiles_EverGrande_Flowers(timer / 8, 6);
    if (timer % 8 == 7)
        QueueAnimTiles_EverGrande_Flowers(timer / 8, 7);
}

static void TilesetAnim_Pacifidlog(u16 timer)
{
    if (timer % 16 == 0)
        QueueAnimTiles_Pacifidlog_LogBridges(timer / 16);
    if (timer % 16 == 1)
        QueueAnimTiles_Pacifidlog_WaterCurrents(timer / 16);
}

static void TilesetAnim_Sootopolis(u16 timer)
{
    if (timer % 16 == 0)
        QueueAnimTiles_Sootopolis_StormyWater(timer / 16);
    if (timer % 16 == 0)
        QueueAnimTiles_Secondary_Palm(timer / 16);
}

static void TilesetAnim_Underwater(u16 timer)
{
    if (timer % 16 == 0)
        QueueAnimTiles_Underwater_Seaweed(timer / 16);
}

static void TilesetAnim_Cave(u16 timer)
{
    if (timer % 16 == 1)
        QueueAnimTiles_Cave_Lava(timer / 16);
}

static void TilesetAnim_BattleFrontierOutsideWest(u16 timer)
{
    if (timer % 8 == 0)
        QueueAnimTiles_BattleFrontierOutsideWest_Flag(timer / 8);
}

static void TilesetAnim_BattleFrontierOutsideEast(u16 timer)
{
    if (timer % 8 == 0)
        QueueAnimTiles_BattleFrontierOutsideEast_Flag(timer / 8);
}

static void QueueAnimTiles_General_LandWaterEdge(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_General_LandWaterEdge);
    AppendTilesetAnimToBuffer(gTilesetAnims_General_LandWaterEdge[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(480)), 10 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Lavaridge_Steam(u8 timer)
{
    u8 i = timer % ARRAY_COUNT(gTilesetAnims_Lavaridge_Steam);
    AppendTilesetAnimToBuffer(gTilesetAnims_Lavaridge_Steam[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 288)), 4 * TILE_SIZE_4BPP);

    i = (timer + 2) % (int)ARRAY_COUNT(gTilesetAnims_Lavaridge_Steam);
    AppendTilesetAnimToBuffer(gTilesetAnims_Lavaridge_Steam[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 292)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Pacifidlog_LogBridges(u8 timer)
{
    u8 i = timer % ARRAY_COUNT(gTilesetAnims_Pacifidlog_LogBridges);
    AppendTilesetAnimToBuffer(gTilesetAnims_Pacifidlog_LogBridges[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 464)), 30 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Underwater_Seaweed(u8 timer)
{
    u8 i = timer % ARRAY_COUNT(gTilesetAnims_Underwater_Seaweed);
    AppendTilesetAnimToBuffer(gTilesetAnims_Underwater_Seaweed[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 496)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Pacifidlog_WaterCurrents(u8 timer)
{
    u8 i = timer % ARRAY_COUNT(gTilesetAnims_Pacifidlog_WaterCurrents);
    AppendTilesetAnimToBuffer(gTilesetAnims_Pacifidlog_WaterCurrents[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 496)), 8 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Mauville_Flowers(u16 timer_div, u8 timer_mod)
{
    timer_div -= timer_mod;
    if (timer_div < min(ARRAY_COUNT(gTilesetAnims_Mauville_Flower1), ARRAY_COUNT(gTilesetAnims_Mauville_Flower2)))
    {
        timer_div %= min(ARRAY_COUNT(gTilesetAnims_Mauville_Flower1), ARRAY_COUNT(gTilesetAnims_Mauville_Flower2));
        AppendTilesetAnimToBuffer(gTilesetAnims_Mauville_Flower1[timer_div], gTilesetAnims_Mauville_Flower1_VDests[timer_mod], 4 * TILE_SIZE_4BPP);
        AppendTilesetAnimToBuffer(gTilesetAnims_Mauville_Flower2[timer_div], gTilesetAnims_Mauville_Flower2_VDests[timer_mod], 4 * TILE_SIZE_4BPP);
    }
    else
    {
        timer_div %= min(ARRAY_COUNT(gTilesetAnims_Mauville_Flower1_B), ARRAY_COUNT(gTilesetAnims_Mauville_Flower2_B));
        AppendTilesetAnimToBuffer(gTilesetAnims_Mauville_Flower1_B[timer_div], gTilesetAnims_Mauville_Flower1_VDests[timer_mod], 4 * TILE_SIZE_4BPP);
        AppendTilesetAnimToBuffer(gTilesetAnims_Mauville_Flower2_B[timer_div], gTilesetAnims_Mauville_Flower2_VDests[timer_mod], 4 * TILE_SIZE_4BPP);
    }
}

static void QueueAnimTiles_Rustboro_WindyWater(u16 timer_div, u8 timer_mod)
{
    timer_div -= timer_mod;
    timer_div %= ARRAY_COUNT(gTilesetAnims_Rustboro_WindyWater);
    if (gTilesetAnims_Rustboro_WindyWater[timer_div])
        AppendTilesetAnimToBuffer(gTilesetAnims_Rustboro_WindyWater[timer_div], gTilesetAnims_Rustboro_WindyWater_VDests[timer_mod], 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Rustboro_Fountain(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Rustboro_Fountain);
    AppendTilesetAnimToBuffer(gTilesetAnims_Rustboro_Fountain[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 448)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Lavaridge_Lava(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Lavaridge_Cave_Lava);
    AppendTilesetAnimToBuffer(gTilesetAnims_Lavaridge_Cave_Lava[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 160)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_EverGrande_Flowers(u16 timer_div, u8 timer_mod)
{
    timer_div -= timer_mod;
    timer_div %= ARRAY_COUNT(gTilesetAnims_EverGrande_Flowers);

    AppendTilesetAnimToBuffer(gTilesetAnims_EverGrande_Flowers[timer_div], gTilesetAnims_EverGrande_VDests[timer_mod], 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Cave_Lava(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Lavaridge_Cave_Lava);
    AppendTilesetAnimToBuffer(gTilesetAnims_Lavaridge_Cave_Lava[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 416)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Dewford_Flag(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Dewford_Flag);
    AppendTilesetAnimToBuffer(gTilesetAnims_Dewford_Flag[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 170)), 6 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_BattleFrontierOutsideWest_Flag(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_BattleFrontierOutsideWest_Flag);
    AppendTilesetAnimToBuffer(gTilesetAnims_BattleFrontierOutsideWest_Flag[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 218)), 6 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_BattleFrontierOutsideEast_Flag(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_BattleFrontierOutsideEast_Flag);
    AppendTilesetAnimToBuffer(gTilesetAnims_BattleFrontierOutsideEast_Flag[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 218)), 6 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Slateport_Balloons(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Slateport_Balloons);
    AppendTilesetAnimToBuffer(gTilesetAnims_Slateport_Balloons[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 224)), 4 * TILE_SIZE_4BPP);
}

static void TilesetAnim_MauvilleGym(u16 timer)
{
    if (timer % 2 == 0)
        QueueAnimTiles_MauvilleGym_ElectricGates(timer / 2);
}

static void TilesetAnim_SootopolisGym(u16 timer)
{
    if (timer % 8 == 0)
        QueueAnimTiles_SootopolisGym_Waterfalls(timer / 8);
}

static void TilesetAnim_EliteFour(u16 timer)
{
    if (timer % 64 == 1)
        QueueAnimTiles_EliteFour_GroundLights(timer / 64);
    if (timer % 8 == 1)
        QueueAnimTiles_EliteFour_WallLights(timer / 8);
}

static void TilesetAnim_BikeShop(u16 timer)
{
    if (timer % 4 == 0)
        QueueAnimTiles_BikeShop_BlinkingLights(timer / 4);
}

static void TilesetAnim_BattlePyramid(u16 timer)
{
    if (timer % 8 == 0)
    {
        QueueAnimTiles_BattlePyramid_Torch(timer / 8);
        QueueAnimTiles_BattlePyramid_StatueShadow(timer / 8);
    }
}

static void TilesetAnim_BattleDome(u16 timer)
{
    if (timer % 4 == 0)
        BlendAnimPalette_BattleDome_FloorLights(timer / 4);
}

static void TilesetAnim_BattleDome2(u16 timer)
{
    if (timer % 4 == 0)
        BlendAnimPalette_BattleDome_FloorLightsNoBlend(timer / 4);
}

static void QueueAnimTiles_Building_TVTurnedOn(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Building_TvTurnedOn);
    AppendTilesetAnimToBuffer(gTilesetAnims_Building_TvTurnedOn[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(496)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_SootopolisGym_Waterfalls(u16 timer)
{
    u16 i = timer % min(ARRAY_COUNT(gTilesetAnims_SootopolisGym_SideWaterfall), ARRAY_COUNT(gTilesetAnims_SootopolisGym_FrontWaterfall));
    AppendTilesetAnimToBuffer(gTilesetAnims_SootopolisGym_SideWaterfall[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 496)), 12 * TILE_SIZE_4BPP);
    AppendTilesetAnimToBuffer(gTilesetAnims_SootopolisGym_FrontWaterfall[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 464)), 20 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_EliteFour_WallLights(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_EliteFour_WallLights);
    AppendTilesetAnimToBuffer(gTilesetAnims_EliteFour_WallLights[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 504)), 1 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_EliteFour_GroundLights(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_EliteFour_FloorLight);
    AppendTilesetAnimToBuffer(gTilesetAnims_EliteFour_FloorLight[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 480)), 4 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_MauvilleGym_ElectricGates(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_MauvilleGym_ElectricGates);
    AppendTilesetAnimToBuffer(gTilesetAnims_MauvilleGym_ElectricGates[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 144)), 16 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_BikeShop_BlinkingLights(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_BikeShop_BlinkingLights);
    AppendTilesetAnimToBuffer(gTilesetAnims_BikeShop_BlinkingLights[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 496)), 9 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_Sootopolis_StormyWater(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Sootopolis_StormyWater);
    AppendTilesetAnimToBuffer(gTilesetAnims_Sootopolis_StormyWater[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 240)), 96 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_BattlePyramid_Torch(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_BattlePyramid_Torch);
    AppendTilesetAnimToBuffer(gTilesetAnims_BattlePyramid_Torch[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 151)), 8 * TILE_SIZE_4BPP);
}

static void QueueAnimTiles_BattlePyramid_StatueShadow(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_BattlePyramid_StatueShadow);
    AppendTilesetAnimToBuffer(gTilesetAnims_BattlePyramid_StatueShadow[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(NUM_TILES_IN_PRIMARY + 135)), 8 * TILE_SIZE_4BPP);
}

static void BlendAnimPalette_BattleDome_FloorLights(u16 timer)
{
    CpuCopy16(sTilesetAnims_BattleDomeFloorLightPals[timer % ARRAY_COUNT(sTilesetAnims_BattleDomeFloorLightPals)], &gPlttBufferUnfaded[BG_PLTT_ID(8)], PLTT_SIZE_4BPP);
    BlendPalette(BG_PLTT_ID(8), 16, gPaletteFade.y, gPaletteFade.blendColor & 0x7FFF);
    if ((u8)FindTaskIdByFunc(Task_BattleTransition_Intro) != TASK_NONE)
    {
        sSecondaryTilesetAnimCallback = TilesetAnim_BattleDome2;
        sSecondaryTilesetAnimCounterMax = 32;
    }
}

static void BlendAnimPalette_BattleDome_FloorLightsNoBlend(u16 timer)
{
    CpuCopy16(sTilesetAnims_BattleDomeFloorLightPals[timer % ARRAY_COUNT(sTilesetAnims_BattleDomeFloorLightPals)], &gPlttBufferUnfaded[BG_PLTT_ID(8)], PLTT_SIZE_4BPP);
    if ((u8)FindTaskIdByFunc(Task_BattleTransition_Intro) == TASK_NONE)
    {
        BlendPalette(BG_PLTT_ID(8), 16, gPaletteFade.y, gPaletteFade.blendColor & 0x7FFF);
        if (!--sSecondaryTilesetAnimCounterMax)
            sSecondaryTilesetAnimCallback = NULL;
    }
}

// ### src/tileset_anims.c ###
// Our custom animation code:

const u16 gTilesetAnims_Tsisqua_Sun1_Frame0[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun1/00.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun1_Frame1[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun1/01.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun1_Frame2[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun1/02.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun1_Frame3[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun1/03.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun1_Frame4[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun1/04.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun1_Frame5[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun1/05.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun1_Frame6[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun1/06.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun1_Frame7[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun1/07.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun1_Frame8[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun1/08.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun1_Frame9[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun1/09.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun1_Frame10[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun1/10.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun1_Frame11[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun1/11.4bpp");

const u16 *const gTilesetAnims_Tsisqua_Sun1[] = {
    gTilesetAnims_Tsisqua_Sun1_Frame0,
    gTilesetAnims_Tsisqua_Sun1_Frame1,
    gTilesetAnims_Tsisqua_Sun1_Frame2,
    gTilesetAnims_Tsisqua_Sun1_Frame3,
    gTilesetAnims_Tsisqua_Sun1_Frame4,
    gTilesetAnims_Tsisqua_Sun1_Frame5,
    gTilesetAnims_Tsisqua_Sun1_Frame6,
    gTilesetAnims_Tsisqua_Sun1_Frame7,
    gTilesetAnims_Tsisqua_Sun1_Frame8,
    gTilesetAnims_Tsisqua_Sun1_Frame9,
    gTilesetAnims_Tsisqua_Sun1_Frame10,
    gTilesetAnims_Tsisqua_Sun1_Frame11,
};

static void QueueAnimTiles_Tsisqua_Sun1(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Tsisqua_Sun1);
    AppendTilesetAnimToBuffer(gTilesetAnims_Tsisqua_Sun1[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(512)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_Tsisqua_Sun2_Frame0[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun2/00.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun2_Frame1[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun2/01.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun2_Frame2[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun2/02.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun2_Frame3[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun2/03.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun2_Frame4[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun2/04.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun2_Frame5[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun2/05.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun2_Frame6[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun2/06.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun2_Frame7[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun2/07.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun2_Frame8[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun2/08.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun2_Frame9[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun2/09.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun2_Frame10[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun2/10.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun2_Frame11[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun2/11.4bpp");

const u16 *const gTilesetAnims_Tsisqua_Sun2[] = {
    gTilesetAnims_Tsisqua_Sun2_Frame0,
    gTilesetAnims_Tsisqua_Sun2_Frame1,
    gTilesetAnims_Tsisqua_Sun2_Frame2,
    gTilesetAnims_Tsisqua_Sun2_Frame3,
    gTilesetAnims_Tsisqua_Sun2_Frame4,
    gTilesetAnims_Tsisqua_Sun2_Frame5,
    gTilesetAnims_Tsisqua_Sun2_Frame6,
    gTilesetAnims_Tsisqua_Sun2_Frame7,
    gTilesetAnims_Tsisqua_Sun2_Frame8,
    gTilesetAnims_Tsisqua_Sun2_Frame9,
    gTilesetAnims_Tsisqua_Sun2_Frame10,
    gTilesetAnims_Tsisqua_Sun2_Frame11,
};

static void QueueAnimTiles_Tsisqua_Sun2(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Tsisqua_Sun2);
    AppendTilesetAnimToBuffer(gTilesetAnims_Tsisqua_Sun2[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(536)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_Tsisqua_Sun3_Frame0[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun3/00.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun3_Frame1[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun3/01.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun3_Frame2[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun3/02.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun3_Frame3[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun3/03.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun3_Frame4[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun3/04.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun3_Frame5[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun3/05.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun3_Frame6[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun3/06.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun3_Frame7[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun3/07.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun3_Frame8[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun3/08.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun3_Frame9[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun3/09.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun3_Frame10[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun3/10.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun3_Frame11[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun3/11.4bpp");

const u16 *const gTilesetAnims_Tsisqua_Sun3[] = {
    gTilesetAnims_Tsisqua_Sun3_Frame0,
    gTilesetAnims_Tsisqua_Sun3_Frame1,
    gTilesetAnims_Tsisqua_Sun3_Frame2,
    gTilesetAnims_Tsisqua_Sun3_Frame3,
    gTilesetAnims_Tsisqua_Sun3_Frame4,
    gTilesetAnims_Tsisqua_Sun3_Frame5,
    gTilesetAnims_Tsisqua_Sun3_Frame6,
    gTilesetAnims_Tsisqua_Sun3_Frame7,
    gTilesetAnims_Tsisqua_Sun3_Frame8,
    gTilesetAnims_Tsisqua_Sun3_Frame9,
    gTilesetAnims_Tsisqua_Sun3_Frame10,
    gTilesetAnims_Tsisqua_Sun3_Frame11,
};

static void QueueAnimTiles_Tsisqua_Sun3(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Tsisqua_Sun3);
    AppendTilesetAnimToBuffer(gTilesetAnims_Tsisqua_Sun3[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(540)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_Tsisqua_Sun4_Frame0[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun4/00.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun4_Frame1[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun4/01.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun4_Frame2[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun4/02.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun4_Frame3[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun4/03.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun4_Frame4[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun4/04.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun4_Frame5[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun4/05.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun4_Frame6[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun4/06.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun4_Frame7[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun4/07.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun4_Frame8[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun4/08.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun4_Frame9[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun4/09.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun4_Frame10[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun4/10.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun4_Frame11[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun4/11.4bpp");

const u16 *const gTilesetAnims_Tsisqua_Sun4[] = {
    gTilesetAnims_Tsisqua_Sun4_Frame0,
    gTilesetAnims_Tsisqua_Sun4_Frame1,
    gTilesetAnims_Tsisqua_Sun4_Frame2,
    gTilesetAnims_Tsisqua_Sun4_Frame3,
    gTilesetAnims_Tsisqua_Sun4_Frame4,
    gTilesetAnims_Tsisqua_Sun4_Frame5,
    gTilesetAnims_Tsisqua_Sun4_Frame6,
    gTilesetAnims_Tsisqua_Sun4_Frame7,
    gTilesetAnims_Tsisqua_Sun4_Frame8,
    gTilesetAnims_Tsisqua_Sun4_Frame9,
    gTilesetAnims_Tsisqua_Sun4_Frame10,
    gTilesetAnims_Tsisqua_Sun4_Frame11,
};

static void QueueAnimTiles_Tsisqua_Sun4(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Tsisqua_Sun4);
    AppendTilesetAnimToBuffer(gTilesetAnims_Tsisqua_Sun4[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(544)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_Tsisqua_Sun5_Frame0[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun5/00.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun5_Frame1[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun5/01.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun5_Frame2[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun5/02.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun5_Frame3[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun5/03.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun5_Frame4[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun5/04.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun5_Frame5[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun5/05.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun5_Frame6[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun5/06.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun5_Frame7[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun5/07.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun5_Frame8[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun5/08.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun5_Frame9[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun5/09.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun5_Frame10[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun5/10.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun5_Frame11[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun5/11.4bpp");

const u16 *const gTilesetAnims_Tsisqua_Sun5[] = {
    gTilesetAnims_Tsisqua_Sun5_Frame0,
    gTilesetAnims_Tsisqua_Sun5_Frame1,
    gTilesetAnims_Tsisqua_Sun5_Frame2,
    gTilesetAnims_Tsisqua_Sun5_Frame3,
    gTilesetAnims_Tsisqua_Sun5_Frame4,
    gTilesetAnims_Tsisqua_Sun5_Frame5,
    gTilesetAnims_Tsisqua_Sun5_Frame6,
    gTilesetAnims_Tsisqua_Sun5_Frame7,
    gTilesetAnims_Tsisqua_Sun5_Frame8,
    gTilesetAnims_Tsisqua_Sun5_Frame9,
    gTilesetAnims_Tsisqua_Sun5_Frame10,
    gTilesetAnims_Tsisqua_Sun5_Frame11,
};

static void QueueAnimTiles_Tsisqua_Sun5(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Tsisqua_Sun5);
    AppendTilesetAnimToBuffer(gTilesetAnims_Tsisqua_Sun5[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(548)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_Tsisqua_Sun6_Frame0[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun6/00.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun6_Frame1[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun6/01.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun6_Frame2[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun6/02.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun6_Frame3[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun6/03.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun6_Frame4[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun6/04.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun6_Frame5[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun6/05.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun6_Frame6[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun6/06.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun6_Frame7[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun6/07.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun6_Frame8[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun6/08.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun6_Frame9[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun6/09.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun6_Frame10[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun6/10.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun6_Frame11[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun6/11.4bpp");

const u16 *const gTilesetAnims_Tsisqua_Sun6[] = {
    gTilesetAnims_Tsisqua_Sun6_Frame0,
    gTilesetAnims_Tsisqua_Sun6_Frame1,
    gTilesetAnims_Tsisqua_Sun6_Frame2,
    gTilesetAnims_Tsisqua_Sun6_Frame3,
    gTilesetAnims_Tsisqua_Sun6_Frame4,
    gTilesetAnims_Tsisqua_Sun6_Frame5,
    gTilesetAnims_Tsisqua_Sun6_Frame6,
    gTilesetAnims_Tsisqua_Sun6_Frame7,
    gTilesetAnims_Tsisqua_Sun6_Frame8,
    gTilesetAnims_Tsisqua_Sun6_Frame9,
    gTilesetAnims_Tsisqua_Sun6_Frame10,
    gTilesetAnims_Tsisqua_Sun6_Frame11,
};

static void QueueAnimTiles_Tsisqua_Sun6(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Tsisqua_Sun6);
    AppendTilesetAnimToBuffer(gTilesetAnims_Tsisqua_Sun6[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(552)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_Tsisqua_Sun7_Frame0[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun7/00.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun7_Frame1[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun7/01.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun7_Frame2[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun7/02.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun7_Frame3[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun7/03.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun7_Frame4[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun7/04.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun7_Frame5[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun7/05.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun7_Frame6[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun7/06.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun7_Frame7[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun7/07.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun7_Frame8[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun7/08.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun7_Frame9[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun7/09.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun7_Frame10[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun7/10.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun7_Frame11[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun7/11.4bpp");

const u16 *const gTilesetAnims_Tsisqua_Sun7[] = {
    gTilesetAnims_Tsisqua_Sun7_Frame0,
    gTilesetAnims_Tsisqua_Sun7_Frame1,
    gTilesetAnims_Tsisqua_Sun7_Frame2,
    gTilesetAnims_Tsisqua_Sun7_Frame3,
    gTilesetAnims_Tsisqua_Sun7_Frame4,
    gTilesetAnims_Tsisqua_Sun7_Frame5,
    gTilesetAnims_Tsisqua_Sun7_Frame6,
    gTilesetAnims_Tsisqua_Sun7_Frame7,
    gTilesetAnims_Tsisqua_Sun7_Frame8,
    gTilesetAnims_Tsisqua_Sun7_Frame9,
    gTilesetAnims_Tsisqua_Sun7_Frame10,
    gTilesetAnims_Tsisqua_Sun7_Frame11,
};

static void QueueAnimTiles_Tsisqua_Sun7(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Tsisqua_Sun7);
    AppendTilesetAnimToBuffer(gTilesetAnims_Tsisqua_Sun7[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(556)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_Tsisqua_Sun8_Frame0[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun8/00.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun8_Frame1[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun8/01.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun8_Frame2[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun8/02.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun8_Frame3[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun8/03.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun8_Frame4[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun8/04.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun8_Frame5[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun8/05.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun8_Frame6[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun8/06.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun8_Frame7[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun8/07.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun8_Frame8[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun8/08.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun8_Frame9[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun8/09.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun8_Frame10[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun8/10.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun8_Frame11[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun8/11.4bpp");

const u16 *const gTilesetAnims_Tsisqua_Sun8[] = {
    gTilesetAnims_Tsisqua_Sun8_Frame0,
    gTilesetAnims_Tsisqua_Sun8_Frame1,
    gTilesetAnims_Tsisqua_Sun8_Frame2,
    gTilesetAnims_Tsisqua_Sun8_Frame3,
    gTilesetAnims_Tsisqua_Sun8_Frame4,
    gTilesetAnims_Tsisqua_Sun8_Frame5,
    gTilesetAnims_Tsisqua_Sun8_Frame6,
    gTilesetAnims_Tsisqua_Sun8_Frame7,
    gTilesetAnims_Tsisqua_Sun8_Frame8,
    gTilesetAnims_Tsisqua_Sun8_Frame9,
    gTilesetAnims_Tsisqua_Sun8_Frame10,
    gTilesetAnims_Tsisqua_Sun8_Frame11,
};

static void QueueAnimTiles_Tsisqua_Sun8(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Tsisqua_Sun8);
    AppendTilesetAnimToBuffer(gTilesetAnims_Tsisqua_Sun8[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(560)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_Tsisqua_Sun9_Frame0[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun9/00.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun9_Frame1[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun9/01.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun9_Frame2[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun9/02.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun9_Frame3[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun9/03.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun9_Frame4[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun9/04.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun9_Frame5[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun9/05.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun9_Frame6[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun9/06.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun9_Frame7[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun9/07.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun9_Frame8[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun9/08.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun9_Frame9[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun9/09.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun9_Frame10[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun9/10.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun9_Frame11[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun9/11.4bpp");

const u16 *const gTilesetAnims_Tsisqua_Sun9[] = {
    gTilesetAnims_Tsisqua_Sun9_Frame0,
    gTilesetAnims_Tsisqua_Sun9_Frame1,
    gTilesetAnims_Tsisqua_Sun9_Frame2,
    gTilesetAnims_Tsisqua_Sun9_Frame3,
    gTilesetAnims_Tsisqua_Sun9_Frame4,
    gTilesetAnims_Tsisqua_Sun9_Frame5,
    gTilesetAnims_Tsisqua_Sun9_Frame6,
    gTilesetAnims_Tsisqua_Sun9_Frame7,
    gTilesetAnims_Tsisqua_Sun9_Frame8,
    gTilesetAnims_Tsisqua_Sun9_Frame9,
    gTilesetAnims_Tsisqua_Sun9_Frame10,
    gTilesetAnims_Tsisqua_Sun9_Frame11,
};

static void QueueAnimTiles_Tsisqua_Sun9(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Tsisqua_Sun9);
    AppendTilesetAnimToBuffer(gTilesetAnims_Tsisqua_Sun9[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(564)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_Tsisqua_Sun10_Frame0[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun10/00.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun10_Frame1[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun10/01.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun10_Frame2[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun10/02.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun10_Frame3[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun10/03.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun10_Frame4[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun10/04.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun10_Frame5[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun10/05.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun10_Frame6[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun10/06.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun10_Frame7[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun10/07.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun10_Frame8[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun10/08.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun10_Frame9[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun10/09.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun10_Frame10[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun10/10.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun10_Frame11[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun10/11.4bpp");

const u16 *const gTilesetAnims_Tsisqua_Sun10[] = {
    gTilesetAnims_Tsisqua_Sun10_Frame0,
    gTilesetAnims_Tsisqua_Sun10_Frame1,
    gTilesetAnims_Tsisqua_Sun10_Frame2,
    gTilesetAnims_Tsisqua_Sun10_Frame3,
    gTilesetAnims_Tsisqua_Sun10_Frame4,
    gTilesetAnims_Tsisqua_Sun10_Frame5,
    gTilesetAnims_Tsisqua_Sun10_Frame6,
    gTilesetAnims_Tsisqua_Sun10_Frame7,
    gTilesetAnims_Tsisqua_Sun10_Frame8,
    gTilesetAnims_Tsisqua_Sun10_Frame9,
    gTilesetAnims_Tsisqua_Sun10_Frame10,
    gTilesetAnims_Tsisqua_Sun10_Frame11,
};

static void QueueAnimTiles_Tsisqua_Sun10(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Tsisqua_Sun10);
    AppendTilesetAnimToBuffer(gTilesetAnims_Tsisqua_Sun10[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(516)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_Tsisqua_Sun11_Frame0[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun11/00.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun11_Frame1[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun11/01.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun11_Frame2[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun11/02.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun11_Frame3[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun11/03.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun11_Frame4[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun11/04.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun11_Frame5[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun11/05.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun11_Frame6[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun11/06.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun11_Frame7[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun11/07.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun11_Frame8[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun11/08.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun11_Frame9[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun11/09.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun11_Frame10[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun11/10.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun11_Frame11[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun11/11.4bpp");

const u16 *const gTilesetAnims_Tsisqua_Sun11[] = {
    gTilesetAnims_Tsisqua_Sun11_Frame0,
    gTilesetAnims_Tsisqua_Sun11_Frame1,
    gTilesetAnims_Tsisqua_Sun11_Frame2,
    gTilesetAnims_Tsisqua_Sun11_Frame3,
    gTilesetAnims_Tsisqua_Sun11_Frame4,
    gTilesetAnims_Tsisqua_Sun11_Frame5,
    gTilesetAnims_Tsisqua_Sun11_Frame6,
    gTilesetAnims_Tsisqua_Sun11_Frame7,
    gTilesetAnims_Tsisqua_Sun11_Frame8,
    gTilesetAnims_Tsisqua_Sun11_Frame9,
    gTilesetAnims_Tsisqua_Sun11_Frame10,
    gTilesetAnims_Tsisqua_Sun11_Frame11,
};

static void QueueAnimTiles_Tsisqua_Sun11(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Tsisqua_Sun11);
    AppendTilesetAnimToBuffer(gTilesetAnims_Tsisqua_Sun11[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(520)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_Tsisqua_Sun12_Frame0[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun12/00.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun12_Frame1[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun12/01.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun12_Frame2[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun12/02.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun12_Frame3[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun12/03.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun12_Frame4[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun12/04.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun12_Frame5[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun12/05.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun12_Frame6[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun12/06.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun12_Frame7[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun12/07.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun12_Frame8[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun12/08.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun12_Frame9[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun12/09.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun12_Frame10[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun12/10.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun12_Frame11[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun12/11.4bpp");

const u16 *const gTilesetAnims_Tsisqua_Sun12[] = {
    gTilesetAnims_Tsisqua_Sun12_Frame0,
    gTilesetAnims_Tsisqua_Sun12_Frame1,
    gTilesetAnims_Tsisqua_Sun12_Frame2,
    gTilesetAnims_Tsisqua_Sun12_Frame3,
    gTilesetAnims_Tsisqua_Sun12_Frame4,
    gTilesetAnims_Tsisqua_Sun12_Frame5,
    gTilesetAnims_Tsisqua_Sun12_Frame6,
    gTilesetAnims_Tsisqua_Sun12_Frame7,
    gTilesetAnims_Tsisqua_Sun12_Frame8,
    gTilesetAnims_Tsisqua_Sun12_Frame9,
    gTilesetAnims_Tsisqua_Sun12_Frame10,
    gTilesetAnims_Tsisqua_Sun12_Frame11,
};

static void QueueAnimTiles_Tsisqua_Sun12(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Tsisqua_Sun12);
    AppendTilesetAnimToBuffer(gTilesetAnims_Tsisqua_Sun12[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(524)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_Tsisqua_Sun13_Frame0[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun13/00.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun13_Frame1[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun13/01.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun13_Frame2[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun13/02.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun13_Frame3[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun13/03.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun13_Frame4[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun13/04.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun13_Frame5[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun13/05.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun13_Frame6[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun13/06.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun13_Frame7[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun13/07.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun13_Frame8[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun13/08.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun13_Frame9[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun13/09.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun13_Frame10[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun13/10.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun13_Frame11[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun13/11.4bpp");

const u16 *const gTilesetAnims_Tsisqua_Sun13[] = {
    gTilesetAnims_Tsisqua_Sun13_Frame0,
    gTilesetAnims_Tsisqua_Sun13_Frame1,
    gTilesetAnims_Tsisqua_Sun13_Frame2,
    gTilesetAnims_Tsisqua_Sun13_Frame3,
    gTilesetAnims_Tsisqua_Sun13_Frame4,
    gTilesetAnims_Tsisqua_Sun13_Frame5,
    gTilesetAnims_Tsisqua_Sun13_Frame6,
    gTilesetAnims_Tsisqua_Sun13_Frame7,
    gTilesetAnims_Tsisqua_Sun13_Frame8,
    gTilesetAnims_Tsisqua_Sun13_Frame9,
    gTilesetAnims_Tsisqua_Sun13_Frame10,
    gTilesetAnims_Tsisqua_Sun13_Frame11,
};

static void QueueAnimTiles_Tsisqua_Sun13(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Tsisqua_Sun13);
    AppendTilesetAnimToBuffer(gTilesetAnims_Tsisqua_Sun13[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(528)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_Tsisqua_Sun14_Frame0[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun14/00.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun14_Frame1[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun14/01.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun14_Frame2[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun14/02.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun14_Frame3[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun14/03.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun14_Frame4[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun14/04.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun14_Frame5[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun14/05.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun14_Frame6[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun14/06.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun14_Frame7[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun14/07.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun14_Frame8[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun14/08.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun14_Frame9[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun14/09.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun14_Frame10[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun14/10.4bpp");
const u16 gTilesetAnims_Tsisqua_Sun14_Frame11[] = INCBIN_U16("data/tilesets/secondary/tsisqua/anim/sun14/11.4bpp");

const u16 *const gTilesetAnims_Tsisqua_Sun14[] = {
    gTilesetAnims_Tsisqua_Sun14_Frame0,
    gTilesetAnims_Tsisqua_Sun14_Frame1,
    gTilesetAnims_Tsisqua_Sun14_Frame2,
    gTilesetAnims_Tsisqua_Sun14_Frame3,
    gTilesetAnims_Tsisqua_Sun14_Frame4,
    gTilesetAnims_Tsisqua_Sun14_Frame5,
    gTilesetAnims_Tsisqua_Sun14_Frame6,
    gTilesetAnims_Tsisqua_Sun14_Frame7,
    gTilesetAnims_Tsisqua_Sun14_Frame8,
    gTilesetAnims_Tsisqua_Sun14_Frame9,
    gTilesetAnims_Tsisqua_Sun14_Frame10,
    gTilesetAnims_Tsisqua_Sun14_Frame11,
};

static void QueueAnimTiles_Tsisqua_Sun14(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_Tsisqua_Sun14);
    AppendTilesetAnimToBuffer(gTilesetAnims_Tsisqua_Sun14[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(532)), 4 * TILE_SIZE_4BPP);
}


static void TilesetAnim_Tsisqua(u16 timer)
{
    if (timer % 32 == 0) {
        QueueAnimTiles_Tsisqua_Sun1(timer / 32);
        QueueAnimTiles_Tsisqua_Sun2(timer / 32);
        QueueAnimTiles_Tsisqua_Sun3(timer / 32);
        QueueAnimTiles_Tsisqua_Sun4(timer / 32);
        QueueAnimTiles_Tsisqua_Sun5(timer / 32);
        QueueAnimTiles_Tsisqua_Sun6(timer / 32);
        QueueAnimTiles_Tsisqua_Sun7(timer / 32);
        QueueAnimTiles_Tsisqua_Sun8(timer / 32);
        QueueAnimTiles_Tsisqua_Sun9(timer / 32);
        QueueAnimTiles_Tsisqua_Sun10(timer / 32);
        QueueAnimTiles_Tsisqua_Sun11(timer / 32);
        QueueAnimTiles_Tsisqua_Sun12(timer / 32);
        QueueAnimTiles_Tsisqua_Sun13(timer / 32);
        QueueAnimTiles_Tsisqua_Sun14(timer / 32);
    }
}

void InitTilesetAnim_Tsisqua(void)
{
    sSecondaryTilesetAnimCounter = 0;
    sSecondaryTilesetAnimCounterMax = 256;
    sSecondaryTilesetAnimCallback = TilesetAnim_Tsisqua;
}

// ### src/tileset_anims.c ###
// Our custom animation code for snowytrees:

const u16 gTilesetAnims_snowytrees_WaterfallRight_Frame0[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterfallRight/00.4bpp");
const u16 gTilesetAnims_snowytrees_WaterfallRight_Frame1[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterfallRight/01.4bpp");
const u16 gTilesetAnims_snowytrees_WaterfallRight_Frame2[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterfallRight/02.4bpp");
const u16 gTilesetAnims_snowytrees_WaterfallRight_Frame3[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterfallRight/03.4bpp");

const u16 *const gTilesetAnims_snowytrees_WaterfallRight[] = {
    gTilesetAnims_snowytrees_WaterfallRight_Frame0,
    gTilesetAnims_snowytrees_WaterfallRight_Frame1,
    gTilesetAnims_snowytrees_WaterfallRight_Frame2,
    gTilesetAnims_snowytrees_WaterfallRight_Frame3
};

static void QueueAnimTiles_snowytrees_WaterfallRight(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_snowytrees_WaterfallRight);
    AppendTilesetAnimToBuffer(gTilesetAnims_snowytrees_WaterfallRight[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(27)), 4 * TILE_SIZE_4BPP);
}


const u16 gTilesetAnims_snowytrees_WaterfallMiddle_Frame0[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterfallMiddle/00.4bpp");
const u16 gTilesetAnims_snowytrees_WaterfallMiddle_Frame1[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterfallMiddle/01.4bpp");
const u16 gTilesetAnims_snowytrees_WaterfallMiddle_Frame2[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterfallMiddle/02.4bpp");
const u16 gTilesetAnims_snowytrees_WaterfallMiddle_Frame3[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterfallMiddle/03.4bpp");

const u16 *const gTilesetAnims_snowytrees_WaterfallMiddle[] = {
    gTilesetAnims_snowytrees_WaterfallMiddle_Frame0,
    gTilesetAnims_snowytrees_WaterfallMiddle_Frame1,
    gTilesetAnims_snowytrees_WaterfallMiddle_Frame2,
    gTilesetAnims_snowytrees_WaterfallMiddle_Frame3
};

static void QueueAnimTiles_snowytrees_WaterfallMiddle(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_snowytrees_WaterfallMiddle);
    AppendTilesetAnimToBuffer(gTilesetAnims_snowytrees_WaterfallMiddle[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(25)), 2 * TILE_SIZE_4BPP);
}


const u16 gTilesetAnims_snowytrees_Water_Frame0[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/Water/00.4bpp");
const u16 gTilesetAnims_snowytrees_Water_Frame1[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/Water/01.4bpp");
const u16 gTilesetAnims_snowytrees_Water_Frame2[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/Water/02.4bpp");

const u16 *const gTilesetAnims_snowytrees_Water[] = {
    gTilesetAnims_snowytrees_Water_Frame0,
    gTilesetAnims_snowytrees_Water_Frame1,
    gTilesetAnims_snowytrees_Water_Frame0,
    gTilesetAnims_snowytrees_Water_Frame2
};

static void QueueAnimTiles_snowytrees_Water(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_snowytrees_Water);
    AppendTilesetAnimToBuffer(gTilesetAnims_snowytrees_Water[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(13)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_snowytrees_WaterEdgeTop_Frame0[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterEdgeTop/00.4bpp");
const u16 gTilesetAnims_snowytrees_WaterEdgeTop_Frame1[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterEdgeTop/01.4bpp");
const u16 gTilesetAnims_snowytrees_WaterEdgeTop_Frame2[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterEdgeTop/02.4bpp");

const u16 *const gTilesetAnims_snowytrees_WaterEdgeTop[] = {
    gTilesetAnims_snowytrees_WaterEdgeTop_Frame0,
    gTilesetAnims_snowytrees_WaterEdgeTop_Frame1,
    gTilesetAnims_snowytrees_WaterEdgeTop_Frame0,
    gTilesetAnims_snowytrees_WaterEdgeTop_Frame2
};

static void QueueAnimTiles_snowytrees_WaterEdgeTop(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_snowytrees_WaterEdgeTop);
    AppendTilesetAnimToBuffer(gTilesetAnims_snowytrees_WaterEdgeTop[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(19)), 2 * TILE_SIZE_4BPP);
}


const u16 gTilesetAnims_snowytrees_WaterEdgeBottom_Frame0[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterEdgeBottom/00.4bpp");
const u16 gTilesetAnims_snowytrees_WaterEdgeBottom_Frame1[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterEdgeBottom/01.4bpp");
const u16 gTilesetAnims_snowytrees_WaterEdgeBottom_Frame2[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterEdgeBottom/02.4bpp");

const u16 *const gTilesetAnims_snowytrees_WaterEdgeBottom[] = {
    gTilesetAnims_snowytrees_WaterEdgeBottom_Frame0,
    gTilesetAnims_snowytrees_WaterEdgeBottom_Frame1,
    gTilesetAnims_snowytrees_WaterEdgeBottom_Frame0,
    gTilesetAnims_snowytrees_WaterEdgeBottom_Frame2
};

static void QueueAnimTiles_snowytrees_WaterEdgeBottom(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_snowytrees_WaterEdgeBottom);
    AppendTilesetAnimToBuffer(gTilesetAnims_snowytrees_WaterEdgeBottom[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(17)), 2 * TILE_SIZE_4BPP);
}


const u16 gTilesetAnims_snowytrees_WaterfallBottomLeft_Frame0[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterfallBottomLeft/00.4bpp");
const u16 gTilesetAnims_snowytrees_WaterfallBottomLeft_Frame1[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterfallBottomLeft/01.4bpp");
const u16 gTilesetAnims_snowytrees_WaterfallBottomLeft_Frame2[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterfallBottomLeft/02.4bpp");
const u16 gTilesetAnims_snowytrees_WaterfallBottomLeft_Frame3[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/WaterfallBottomLeft/03.4bpp");

const u16 *const gTilesetAnims_snowytrees_WaterfallBottomLeft[] = {
    gTilesetAnims_snowytrees_WaterfallBottomLeft_Frame0,
    gTilesetAnims_snowytrees_WaterfallBottomLeft_Frame1,
    gTilesetAnims_snowytrees_WaterfallBottomLeft_Frame2,
    gTilesetAnims_snowytrees_WaterfallBottomLeft_Frame3,
    gTilesetAnims_snowytrees_WaterfallBottomLeft_Frame2,
    gTilesetAnims_snowytrees_WaterfallBottomLeft_Frame3,
    gTilesetAnims_snowytrees_WaterfallBottomLeft_Frame2,
    gTilesetAnims_snowytrees_WaterfallBottomLeft_Frame1
};

static void QueueAnimTiles_snowytrees_WaterfallBottomLeft(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_snowytrees_WaterfallBottomLeft);
    AppendTilesetAnimToBuffer(gTilesetAnims_snowytrees_WaterfallBottomLeft[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(21)), 4 * TILE_SIZE_4BPP);
}


const u16 gTilesetAnims_snowytrees_GrassSprouts_Frame0[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/grass_sprouts/00.4bpp");
const u16 gTilesetAnims_snowytrees_GrassSprouts_Frame1[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/grass_sprouts/01.4bpp");
const u16 gTilesetAnims_snowytrees_GrassSprouts_Frame2[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/grass_sprouts/02.4bpp");

const u16 *const gTilesetAnims_snowytrees_GrassSprouts[] = {
    gTilesetAnims_snowytrees_GrassSprouts_Frame0,
    gTilesetAnims_snowytrees_GrassSprouts_Frame1,
    gTilesetAnims_snowytrees_GrassSprouts_Frame0,
    gTilesetAnims_snowytrees_GrassSprouts_Frame2
};

static void QueueAnimTiles_snowytrees_GrassSprouts(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_snowytrees_GrassSprouts);
    AppendTilesetAnimToBuffer(gTilesetAnims_snowytrees_GrassSprouts[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(31)), 4 * TILE_SIZE_4BPP);
}


const u16 gTilesetAnims_snowytrees_RedShrooms_Frame0[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/RedShrooms/00.4bpp");
const u16 gTilesetAnims_snowytrees_RedShrooms_Frame1[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/RedShrooms/01.4bpp");
const u16 gTilesetAnims_snowytrees_RedShrooms_Frame2[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/RedShrooms/02.4bpp");

const u16 *const gTilesetAnims_snowytrees_RedShrooms[] = {
    gTilesetAnims_snowytrees_RedShrooms_Frame0,
    gTilesetAnims_snowytrees_RedShrooms_Frame1,
    gTilesetAnims_snowytrees_RedShrooms_Frame0,
    gTilesetAnims_snowytrees_RedShrooms_Frame2
};

static void QueueAnimTiles_snowytrees_RedShrooms(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_snowytrees_RedShrooms);
    AppendTilesetAnimToBuffer(gTilesetAnims_snowytrees_RedShrooms[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(1)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_snowytrees_TallShroomBottom_Frame0[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/TallShroomBottom/00.4bpp");
const u16 gTilesetAnims_snowytrees_TallShroomBottom_Frame1[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/TallShroomBottom/01.4bpp");
const u16 gTilesetAnims_snowytrees_TallShroomBottom_Frame2[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/TallShroomBottom/02.4bpp");

const u16 *const gTilesetAnims_snowytrees_TallShroomBottom[] = {
    gTilesetAnims_snowytrees_TallShroomBottom_Frame0,
    gTilesetAnims_snowytrees_TallShroomBottom_Frame1,
    gTilesetAnims_snowytrees_TallShroomBottom_Frame0,
    gTilesetAnims_snowytrees_TallShroomBottom_Frame2
};

static void QueueAnimTiles_snowytrees_TallShroomBottom(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_snowytrees_TallShroomBottom);
    AppendTilesetAnimToBuffer(gTilesetAnims_snowytrees_TallShroomBottom[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(5)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_snowytrees_TallShroomTop_Frame0[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/TallShroomTop/00.4bpp");
const u16 gTilesetAnims_snowytrees_TallShroomTop_Frame1[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/TallShroomTop/01.4bpp");
const u16 gTilesetAnims_snowytrees_TallShroomTop_Frame2[] = INCBIN_U16("data/tilesets/primary/snowytrees/anim/TallShroomTop/02.4bpp");

const u16 *const gTilesetAnims_snowytrees_TallShroomTop[] = {
    gTilesetAnims_snowytrees_TallShroomTop_Frame0,
    gTilesetAnims_snowytrees_TallShroomTop_Frame1,
    gTilesetAnims_snowytrees_TallShroomTop_Frame0,
    gTilesetAnims_snowytrees_TallShroomTop_Frame2
};

static void QueueAnimTiles_snowytrees_TallShroomTop(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_snowytrees_TallShroomTop);
    AppendTilesetAnimToBuffer(gTilesetAnims_snowytrees_TallShroomTop[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(9)), 4 * TILE_SIZE_4BPP);
}


static void TilesetAnim_snowytrees(u16 timer)
{
    if (timer % 16 == 0) {
        QueueAnimTiles_snowytrees_TallShroomTop(timer / 32);
        QueueAnimTiles_snowytrees_TallShroomBottom(timer / 32);
        QueueAnimTiles_snowytrees_RedShrooms(timer / 32);
        QueueAnimTiles_snowytrees_GrassSprouts(timer / 32);
        QueueAnimTiles_snowytrees_WaterfallRight(timer / 16);
        QueueAnimTiles_snowytrees_WaterfallMiddle(timer / 16);
        QueueAnimTiles_snowytrees_Water(timer / 32);
        QueueAnimTiles_snowytrees_WaterEdgeBottom(timer / 32);
        QueueAnimTiles_snowytrees_WaterEdgeTop(timer / 32);
        QueueAnimTiles_snowytrees_WaterfallBottomLeft(timer / 16);
    }
}

void InitTilesetAnim_snowytrees(void)
{
    sPrimaryTilesetAnimCounter = 0;
    sPrimaryTilesetAnimCounterMax = 256;
    sPrimaryTilesetAnimCallback = TilesetAnim_snowytrees;
}




const u16 gTilesetAnims_ChaoticCherryCakeGeneral_GrassSprouts_Frame0[] = INCBIN_U16("data/tilesets/primary/chaotic_cherry_cake_general/anim/grass_sprouts/00.4bpp");
const u16 gTilesetAnims_ChaoticCherryCakeGeneral_GrassSprouts_Frame1[] = INCBIN_U16("data/tilesets/primary/chaotic_cherry_cake_general/anim/grass_sprouts/01.4bpp");
const u16 gTilesetAnims_ChaoticCherryCakeGeneral_GrassSprouts_Frame2[] = INCBIN_U16("data/tilesets/primary/chaotic_cherry_cake_general/anim/grass_sprouts/02.4bpp");

const u16 gTilesetAnims_ChaoticCherryCakeGeneral_Plant_Frame0[] = INCBIN_U16("data/tilesets/primary/chaotic_cherry_cake_general/anim/plant/00.4bpp");
const u16 gTilesetAnims_ChaoticCherryCakeGeneral_Plant_Frame1[] = INCBIN_U16("data/tilesets/primary/chaotic_cherry_cake_general/anim/plant/01.4bpp");
const u16 gTilesetAnims_ChaoticCherryCakeGeneral_Plant_Frame2[] = INCBIN_U16("data/tilesets/primary/chaotic_cherry_cake_general/anim/plant/02.4bpp");

const u16 *const gTilesetAnims_ChaoticCherryCakeGeneral_GrassSprouts[] = {
    gTilesetAnims_ChaoticCherryCakeGeneral_GrassSprouts_Frame0,
    gTilesetAnims_ChaoticCherryCakeGeneral_GrassSprouts_Frame1,
    gTilesetAnims_ChaoticCherryCakeGeneral_GrassSprouts_Frame0,
    gTilesetAnims_ChaoticCherryCakeGeneral_GrassSprouts_Frame2
};

const u16 *const gTilesetAnims_ChaoticCherryCakeGeneral_Plant[] = {
    gTilesetAnims_ChaoticCherryCakeGeneral_Plant_Frame0,
    gTilesetAnims_ChaoticCherryCakeGeneral_Plant_Frame1,
    gTilesetAnims_ChaoticCherryCakeGeneral_Plant_Frame0,
    gTilesetAnims_ChaoticCherryCakeGeneral_Plant_Frame2
};

static void QueueAnimTiles_ChaoticCherryCakeGeneral_GrassSprouts(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_ChaoticCherryCakeGeneral_GrassSprouts);
    AppendTilesetAnimToBuffer(gTilesetAnims_ChaoticCherryCakeGeneral_GrassSprouts[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(1)), 4 * TILE_SIZE_4BPP);
}


static void QueueAnimTiles_ChaoticCherryCakeGeneral_Plant(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_ChaoticCherryCakeGeneral_Plant);
    AppendTilesetAnimToBuffer(gTilesetAnims_ChaoticCherryCakeGeneral_Plant[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(5)), 4 * TILE_SIZE_4BPP);
}

static void TilesetAnim_ChaoticCherryCakeGeneral(u16 timer)
{
    if (timer % 16 == 0) {
        QueueAnimTiles_ChaoticCherryCakeGeneral_GrassSprouts(timer / 16);
        QueueAnimTiles_ChaoticCherryCakeGeneral_Plant(timer / 16);
    }
}

void InitTilesetAnim_ChaoticCherryCakeGeneral(void)
{
    sPrimaryTilesetAnimCounter = 0;
    sPrimaryTilesetAnimCounterMax = 256;
    sPrimaryTilesetAnimCallback = TilesetAnim_ChaoticCherryCakeGeneral;
}


const u16 gTilesetAnims_desert_WavyGrass_Frame0[] = INCBIN_U16("data/tilesets/secondary/desert/anim/wavy_grass/00.4bpp");
const u16 gTilesetAnims_desert_WavyGrass_Frame1[] = INCBIN_U16("data/tilesets/secondary/desert/anim/wavy_grass/01.4bpp");
const u16 gTilesetAnims_desert_WavyGrass_Frame2[] = INCBIN_U16("data/tilesets/secondary/desert/anim/wavy_grass/02.4bpp");


const u16 *const gTilesetAnims_desert_WavyGrass[] = {
    gTilesetAnims_desert_WavyGrass_Frame0,
    gTilesetAnims_desert_WavyGrass_Frame1,
    gTilesetAnims_desert_WavyGrass_Frame2,
    gTilesetAnims_desert_WavyGrass_Frame1
};

static void QueueAnimTiles_desert_WavyGrass(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_desert_WavyGrass);
    AppendTilesetAnimToBuffer(gTilesetAnims_desert_WavyGrass[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(512)), 4 * TILE_SIZE_4BPP);
}

static void TilesetAnim_desert(u16 timer)
{
    if (timer % 16 == 0) {
        QueueAnimTiles_desert_WavyGrass(timer / 16);
        QueueAnimTiles_ChaoticCherryCakeGeneral_GrassSprouts(timer / 16);
        QueueAnimTiles_ChaoticCherryCakeGeneral_Plant(timer / 16);
    }
}

void InitTilesetAnim_desert(void)
{
    sPrimaryTilesetAnimCounter = 0;
    sPrimaryTilesetAnimCounterMax = 256;
    sPrimaryTilesetAnimCallback = TilesetAnim_desert;
}






// Our custom animation code for snowytreesflashback:

const u16 gTilesetAnims_snowytreesflashback_WaterfallRight_Frame0[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/WaterfallRight/00.4bpp");
const u16 gTilesetAnims_snowytreesflashback_WaterfallRight_Frame1[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/WaterfallRight/01.4bpp");
const u16 gTilesetAnims_snowytreesflashback_WaterfallRight_Frame2[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/WaterfallRight/02.4bpp");
const u16 gTilesetAnims_snowytreesflashback_WaterfallRight_Frame3[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/WaterfallRight/03.4bpp");

const u16 *const gTilesetAnims_snowytreesflashback_WaterfallRight[] = {
    gTilesetAnims_snowytreesflashback_WaterfallRight_Frame0,
    gTilesetAnims_snowytreesflashback_WaterfallRight_Frame1,
    gTilesetAnims_snowytreesflashback_WaterfallRight_Frame2,
    gTilesetAnims_snowytreesflashback_WaterfallRight_Frame3
};

static void QueueAnimTiles_snowytreesflashback_WaterfallRight(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_snowytreesflashback_WaterfallRight);
    AppendTilesetAnimToBuffer(gTilesetAnims_snowytreesflashback_WaterfallRight[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(13)), 4 * TILE_SIZE_4BPP);
}


const u16 gTilesetAnims_snowytreesflashback_WaterfallMiddle_Frame0[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/WaterfallMiddle/00.4bpp");
const u16 gTilesetAnims_snowytreesflashback_WaterfallMiddle_Frame1[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/WaterfallMiddle/01.4bpp");
const u16 gTilesetAnims_snowytreesflashback_WaterfallMiddle_Frame2[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/WaterfallMiddle/02.4bpp");
const u16 gTilesetAnims_snowytreesflashback_WaterfallMiddle_Frame3[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/WaterfallMiddle/03.4bpp");

const u16 *const gTilesetAnims_snowytreesflashback_WaterfallMiddle[] = {
    gTilesetAnims_snowytreesflashback_WaterfallMiddle_Frame0,
    gTilesetAnims_snowytreesflashback_WaterfallMiddle_Frame1,
    gTilesetAnims_snowytreesflashback_WaterfallMiddle_Frame2,
    gTilesetAnims_snowytreesflashback_WaterfallMiddle_Frame3
};

static void QueueAnimTiles_snowytreesflashback_WaterfallMiddle(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_snowytreesflashback_WaterfallMiddle);
    AppendTilesetAnimToBuffer(gTilesetAnims_snowytreesflashback_WaterfallMiddle[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(11)), 2 * TILE_SIZE_4BPP);
}


const u16 gTilesetAnims_snowytreesflashback_Water_Frame0[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/Water/00.4bpp");
const u16 gTilesetAnims_snowytreesflashback_Water_Frame1[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/Water/01.4bpp");
const u16 gTilesetAnims_snowytreesflashback_Water_Frame2[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/Water/02.4bpp");

const u16 *const gTilesetAnims_snowytreesflashback_Water[] = {
    gTilesetAnims_snowytreesflashback_Water_Frame0,
    gTilesetAnims_snowytreesflashback_Water_Frame1,
    gTilesetAnims_snowytreesflashback_Water_Frame0,
    gTilesetAnims_snowytreesflashback_Water_Frame2
};

static void QueueAnimTiles_snowytreesflashback_Water(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_snowytreesflashback_Water);
    AppendTilesetAnimToBuffer(gTilesetAnims_snowytreesflashback_Water[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(1)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_snowytreesflashback_WaterEdgeBottom_Frame0[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/WaterEdgeBottom/00.4bpp");
const u16 gTilesetAnims_snowytreesflashback_WaterEdgeBottom_Frame1[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/WaterEdgeBottom/01.4bpp");
const u16 gTilesetAnims_snowytreesflashback_WaterEdgeBottom_Frame2[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/WaterEdgeBottom/02.4bpp");

const u16 *const gTilesetAnims_snowytreesflashback_WaterEdgeBottom[] = {
    gTilesetAnims_snowytreesflashback_WaterEdgeBottom_Frame0,
    gTilesetAnims_snowytreesflashback_WaterEdgeBottom_Frame1,
    gTilesetAnims_snowytreesflashback_WaterEdgeBottom_Frame0,
    gTilesetAnims_snowytreesflashback_WaterEdgeBottom_Frame2
};

static void QueueAnimTiles_snowytreesflashback_WaterEdgeBottom(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_snowytreesflashback_WaterEdgeBottom);
    AppendTilesetAnimToBuffer(gTilesetAnims_snowytreesflashback_WaterEdgeBottom[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(5)), 2 * TILE_SIZE_4BPP);
}


const u16 gTilesetAnims_snowytreesflashback_WaterfallBottomLeft_Frame0[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/WaterfallBottomLeft/00.4bpp");
const u16 gTilesetAnims_snowytreesflashback_WaterfallBottomLeft_Frame1[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/WaterfallBottomLeft/01.4bpp");
const u16 gTilesetAnims_snowytreesflashback_WaterfallBottomLeft_Frame2[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/WaterfallBottomLeft/02.4bpp");
const u16 gTilesetAnims_snowytreesflashback_WaterfallBottomLeft_Frame3[] = INCBIN_U16("data/tilesets/primary/snowytreesflashback/anim/WaterfallBottomLeft/03.4bpp");

const u16 *const gTilesetAnims_snowytreesflashback_WaterfallBottomLeft[] = {
    gTilesetAnims_snowytreesflashback_WaterfallBottomLeft_Frame0,
    gTilesetAnims_snowytreesflashback_WaterfallBottomLeft_Frame1,
    gTilesetAnims_snowytreesflashback_WaterfallBottomLeft_Frame2,
    gTilesetAnims_snowytreesflashback_WaterfallBottomLeft_Frame3,
    gTilesetAnims_snowytreesflashback_WaterfallBottomLeft_Frame2,
    gTilesetAnims_snowytreesflashback_WaterfallBottomLeft_Frame3,
    gTilesetAnims_snowytreesflashback_WaterfallBottomLeft_Frame2,
    gTilesetAnims_snowytreesflashback_WaterfallBottomLeft_Frame1
};

static void QueueAnimTiles_snowytreesflashback_WaterfallBottomLeft(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_snowytreesflashback_WaterfallBottomLeft);
    AppendTilesetAnimToBuffer(gTilesetAnims_snowytreesflashback_WaterfallBottomLeft[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(7)), 4 * TILE_SIZE_4BPP);
}

static void TilesetAnim_snowytreesflashback(u16 timer)
{
    if (timer % 16 == 0) {
        QueueAnimTiles_snowytreesflashback_WaterfallRight(timer / 16);
        QueueAnimTiles_snowytreesflashback_WaterfallMiddle(timer / 16);
        QueueAnimTiles_snowytreesflashback_Water(timer / 32);
        QueueAnimTiles_snowytreesflashback_WaterEdgeBottom(timer / 32);
        QueueAnimTiles_snowytreesflashback_WaterfallBottomLeft(timer / 16);
    }
}

void InitTilesetAnim_snowytreesflashback(void)
{
    sPrimaryTilesetAnimCounter = 0;
    sPrimaryTilesetAnimCounterMax = 256;
    sPrimaryTilesetAnimCallback = TilesetAnim_snowytreesflashback;
}










const u16 gTilesetAnims_forestfireprimary_flame1_Frame0[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame1/00.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame1_Frame1[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame1/01.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame1_Frame2[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame1/02.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame1_Frame3[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame1/03.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame1_Frame4[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame1/04.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame1_Frame5[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame1/05.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame1_Frame6[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame1/06.4bpp");

const u16 *const gTilesetAnims_forestfireprimary_flame1[] = {
    gTilesetAnims_forestfireprimary_flame1_Frame0,
    gTilesetAnims_forestfireprimary_flame1_Frame1,
    gTilesetAnims_forestfireprimary_flame1_Frame2,
    gTilesetAnims_forestfireprimary_flame1_Frame3,
    gTilesetAnims_forestfireprimary_flame1_Frame4,
    gTilesetAnims_forestfireprimary_flame1_Frame5,
    gTilesetAnims_forestfireprimary_flame1_Frame6
};

static void QueueAnimTiles_forestfireprimary_flame1(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_forestfireprimary_flame1);
    AppendTilesetAnimToBuffer(gTilesetAnims_forestfireprimary_flame1[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(1)), 4 * TILE_SIZE_4BPP);
}


const u16 gTilesetAnims_forestfireprimary_flame2_Frame0[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame2/00.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame2_Frame1[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame2/01.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame2_Frame2[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame2/02.4bpp");

const u16 *const gTilesetAnims_forestfireprimary_flame2[] = {
    gTilesetAnims_forestfireprimary_flame2_Frame0,
    gTilesetAnims_forestfireprimary_flame2_Frame1,
    gTilesetAnims_forestfireprimary_flame2_Frame2
};

static void QueueAnimTiles_forestfireprimary_flame2(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_forestfireprimary_flame2);
    AppendTilesetAnimToBuffer(gTilesetAnims_forestfireprimary_flame2[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(29)), 4 * TILE_SIZE_4BPP);
}


const u16 gTilesetAnims_forestfireprimary_flame3_Frame0[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame3/00.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame3_Frame1[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame3/01.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame3_Frame2[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame3/02.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame3_Frame3[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame3/03.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame3_Frame4[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame3/04.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame3_Frame5[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame3/05.4bpp");

const u16 *const gTilesetAnims_forestfireprimary_flame3[] = {
    gTilesetAnims_forestfireprimary_flame3_Frame0,
    gTilesetAnims_forestfireprimary_flame3_Frame1,
    gTilesetAnims_forestfireprimary_flame3_Frame2,
    gTilesetAnims_forestfireprimary_flame3_Frame3,
    gTilesetAnims_forestfireprimary_flame3_Frame4,
    gTilesetAnims_forestfireprimary_flame3_Frame5
};

static void QueueAnimTiles_forestfireprimary_flame3(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_forestfireprimary_flame3);
    AppendTilesetAnimToBuffer(gTilesetAnims_forestfireprimary_flame3[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(33)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_forestfireprimary_flame4_Frame0[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame4/00.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame4_Frame1[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame4/01.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame4_Frame2[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame4/02.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame4_Frame3[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame4/03.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame4_Frame4[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame4/04.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame4_Frame5[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame4/05.4bpp");

const u16 *const gTilesetAnims_forestfireprimary_flame4[] = {
    gTilesetAnims_forestfireprimary_flame4_Frame0,
    gTilesetAnims_forestfireprimary_flame4_Frame1,
    gTilesetAnims_forestfireprimary_flame4_Frame2,
    gTilesetAnims_forestfireprimary_flame4_Frame3,
    gTilesetAnims_forestfireprimary_flame4_Frame4,
    gTilesetAnims_forestfireprimary_flame4_Frame5
};

static void QueueAnimTiles_forestfireprimary_flame4(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_forestfireprimary_flame4);
    AppendTilesetAnimToBuffer(gTilesetAnims_forestfireprimary_flame4[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(37)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_forestfireprimary_flame5_Frame0[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame5/00.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame5_Frame1[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame5/01.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame5_Frame2[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame5/02.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame5_Frame3[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame5/03.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame5_Frame4[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame5/04.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame5_Frame5[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame5/05.4bpp");

const u16 *const gTilesetAnims_forestfireprimary_flame5[] = {
    gTilesetAnims_forestfireprimary_flame5_Frame0,
    gTilesetAnims_forestfireprimary_flame5_Frame1,
    gTilesetAnims_forestfireprimary_flame5_Frame2,
    gTilesetAnims_forestfireprimary_flame5_Frame3,
    gTilesetAnims_forestfireprimary_flame5_Frame4,
    gTilesetAnims_forestfireprimary_flame5_Frame5
};

static void QueueAnimTiles_forestfireprimary_flame5(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_forestfireprimary_flame5);
    AppendTilesetAnimToBuffer(gTilesetAnims_forestfireprimary_flame5[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(41)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_forestfireprimary_flame6_Frame0[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame6/00.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame6_Frame1[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame6/01.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame6_Frame2[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame6/02.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame6_Frame3[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame6/03.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame6_Frame4[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame6/04.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame6_Frame5[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame6/05.4bpp");

const u16 *const gTilesetAnims_forestfireprimary_flame6[] = {
    gTilesetAnims_forestfireprimary_flame6_Frame0,
    gTilesetAnims_forestfireprimary_flame6_Frame1,
    gTilesetAnims_forestfireprimary_flame6_Frame2,
    gTilesetAnims_forestfireprimary_flame6_Frame3,
    gTilesetAnims_forestfireprimary_flame6_Frame4,
    gTilesetAnims_forestfireprimary_flame6_Frame5
};

static void QueueAnimTiles_forestfireprimary_flame6(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_forestfireprimary_flame6);
    AppendTilesetAnimToBuffer(gTilesetAnims_forestfireprimary_flame6[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(45)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_forestfireprimary_flame7_Frame0[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame7/00.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame7_Frame1[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame7/01.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame7_Frame2[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame7/02.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame7_Frame3[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame7/03.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame7_Frame4[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame7/04.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame7_Frame5[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame7/05.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame7_Frame6[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame7/06.4bpp");

const u16 *const gTilesetAnims_forestfireprimary_flame7[] = {
    gTilesetAnims_forestfireprimary_flame7_Frame0,
    gTilesetAnims_forestfireprimary_flame7_Frame1,
    gTilesetAnims_forestfireprimary_flame7_Frame2,
    gTilesetAnims_forestfireprimary_flame7_Frame3,
    gTilesetAnims_forestfireprimary_flame7_Frame4,
    gTilesetAnims_forestfireprimary_flame7_Frame5,
    gTilesetAnims_forestfireprimary_flame7_Frame6
};

static void QueueAnimTiles_forestfireprimary_flame7(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_forestfireprimary_flame7);
    AppendTilesetAnimToBuffer(gTilesetAnims_forestfireprimary_flame7[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(49)), 4 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_forestfireprimary_flame8_Frame0[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame8/00.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame8_Frame1[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame8/01.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame8_Frame2[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame8/02.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame8_Frame3[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame8/03.4bpp");

const u16 *const gTilesetAnims_forestfireprimary_flame8[] = {
    gTilesetAnims_forestfireprimary_flame8_Frame0,
    gTilesetAnims_forestfireprimary_flame8_Frame1,
    gTilesetAnims_forestfireprimary_flame8_Frame2,
    gTilesetAnims_forestfireprimary_flame8_Frame3
};

static void QueueAnimTiles_forestfireprimary_flame8(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_forestfireprimary_flame8);
    AppendTilesetAnimToBuffer(gTilesetAnims_forestfireprimary_flame8[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(53)), 6 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_forestfireprimary_flame9_Frame0[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame9/00.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame9_Frame1[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame9/01.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame9_Frame2[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame9/02.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame9_Frame3[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame9/03.4bpp");

const u16 *const gTilesetAnims_forestfireprimary_flame9[] = {
    gTilesetAnims_forestfireprimary_flame9_Frame0,
    gTilesetAnims_forestfireprimary_flame9_Frame1,
    gTilesetAnims_forestfireprimary_flame9_Frame2,
    gTilesetAnims_forestfireprimary_flame9_Frame3
};

static void QueueAnimTiles_forestfireprimary_flame9(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_forestfireprimary_flame9);
    AppendTilesetAnimToBuffer(gTilesetAnims_forestfireprimary_flame9[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(59)), 6 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_forestfireprimary_flame10_Frame0[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame10/00.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame10_Frame1[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame10/01.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame10_Frame2[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame10/02.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame10_Frame3[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame10/03.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame10_Frame4[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame10/04.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame10_Frame5[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame10/05.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame10_Frame6[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame10/06.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame10_Frame7[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame10/07.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame10_Frame8[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame10/08.4bpp");

const u16 *const gTilesetAnims_forestfireprimary_flame10[] = {
    gTilesetAnims_forestfireprimary_flame10_Frame0,
    gTilesetAnims_forestfireprimary_flame10_Frame1,
    gTilesetAnims_forestfireprimary_flame10_Frame2,
    gTilesetAnims_forestfireprimary_flame10_Frame3,
    gTilesetAnims_forestfireprimary_flame10_Frame4,
    gTilesetAnims_forestfireprimary_flame10_Frame5,
    gTilesetAnims_forestfireprimary_flame10_Frame6,
    gTilesetAnims_forestfireprimary_flame10_Frame7,
    gTilesetAnims_forestfireprimary_flame10_Frame8
};

static void QueueAnimTiles_forestfireprimary_flame10(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_forestfireprimary_flame10);
    AppendTilesetAnimToBuffer(gTilesetAnims_forestfireprimary_flame10[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(5)), 8 * TILE_SIZE_4BPP);
}

const u16 gTilesetAnims_forestfireprimary_flame11_Frame0[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame11/00.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame11_Frame1[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame11/01.4bpp");
const u16 gTilesetAnims_forestfireprimary_flame11_Frame2[] = INCBIN_U16("data/tilesets/primary/forestfireprimary/anim/flame11/02.4bpp");

const u16 *const gTilesetAnims_forestfireprimary_flame11[] = {
    gTilesetAnims_forestfireprimary_flame11_Frame0,
    gTilesetAnims_forestfireprimary_flame11_Frame1,
    gTilesetAnims_forestfireprimary_flame11_Frame2
};

static void QueueAnimTiles_forestfireprimary_flame11(u16 timer)
{
    u16 i = timer % ARRAY_COUNT(gTilesetAnims_forestfireprimary_flame11);
    AppendTilesetAnimToBuffer(gTilesetAnims_forestfireprimary_flame11[i], (u16 *)(BG_VRAM + TILE_OFFSET_4BPP(13)), 16 * TILE_SIZE_4BPP);
}

static void TilesetAnim_forestfireprimary(u16 timer)
{
    if (timer % 16 == 0) {
        QueueAnimTiles_forestfireprimary_flame1(timer / 16);
        QueueAnimTiles_forestfireprimary_flame2(timer / 16);
        QueueAnimTiles_forestfireprimary_flame3(timer / 16);
        QueueAnimTiles_forestfireprimary_flame4(timer / 16);
        QueueAnimTiles_forestfireprimary_flame5(timer / 16);
        QueueAnimTiles_forestfireprimary_flame6(timer / 16);
        QueueAnimTiles_forestfireprimary_flame7(timer / 16);
        QueueAnimTiles_forestfireprimary_flame8(timer / 16);
        QueueAnimTiles_forestfireprimary_flame9(timer / 16);
        QueueAnimTiles_forestfireprimary_flame10(timer / 16);
        QueueAnimTiles_forestfireprimary_flame11(timer / 16);
    }
}

void InitTilesetAnim_forestfireprimary(void)
{
    sPrimaryTilesetAnimCounter = 0;
    sPrimaryTilesetAnimCounterMax = 256;
    sPrimaryTilesetAnimCallback = TilesetAnim_forestfireprimary;
}