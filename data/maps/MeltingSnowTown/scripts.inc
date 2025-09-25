# 1 "data/maps/MeltingSnowTown/scripts.pory"

# 2 "data/maps/MeltingSnowTown/scripts.pory"
MeltingSnowTown_MapScripts::
# 3 "data/maps/MeltingSnowTown/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, MeltingSnowTown_OnTransition
# 4 "data/maps/MeltingSnowTown/scripts.pory"
    .byte 0
# 5 "data/maps/MeltingSnowTown/scripts.pory"

# 6 "data/maps/MeltingSnowTown/scripts.pory"
MeltingSnowTown_OnTransition:
# 7 "data/maps/MeltingSnowTown/scripts.pory"
    call_if_set FLAG_MYTH_EXPLAINED, MeltingSnowTown_EventScript_RelocateEveryone
# 8 "data/maps/MeltingSnowTown/scripts.pory"
    end

MeltingSnowTown_EventScript_RelocateEveryone::
# 12 "data/maps/MeltingSnowTown/scripts.pory"
	setobjectxyperm 10, 11, 12
# 13 "data/maps/MeltingSnowTown/scripts.pory"
	addobject 10
# 14 "data/maps/MeltingSnowTown/scripts.pory"
	SetObjectMovementType 10, MOVEMENT_TYPE_WANDER_AROUND
# 15 "data/maps/MeltingSnowTown/scripts.pory"
	setobjectxyperm 3, 15, 6
# 16 "data/maps/MeltingSnowTown/scripts.pory"
	addobject 3
# 17 "data/maps/MeltingSnowTown/scripts.pory"
	SetObjectMovementType 3, MOVEMENT_TYPE_WANDER_AROUND
# 18 "data/maps/MeltingSnowTown/scripts.pory"
	setobjectxyperm 4, 24, 10
# 19 "data/maps/MeltingSnowTown/scripts.pory"
	addobject 4
# 20 "data/maps/MeltingSnowTown/scripts.pory"
	SetObjectMovementType 4, MOVEMENT_TYPE_WANDER_AROUND
# 21 "data/maps/MeltingSnowTown/scripts.pory"
	setobjectxyperm 2, 24, 6
# 22 "data/maps/MeltingSnowTown/scripts.pory"
	addobject 2
# 23 "data/maps/MeltingSnowTown/scripts.pory"
	SetObjectMovementType 2, MOVEMENT_TYPE_WANDER_AROUND
# 24 "data/maps/MeltingSnowTown/scripts.pory"
	setflag FLAG_RELOCATE
	return


MeltingSnowTown_EventScript_MythTop::
# 28 "data/maps/MeltingSnowTown/scripts.pory"
	lock
# 29 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 30 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 31 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 32 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 33 "data/maps/MeltingSnowTown/scripts.pory"
	special SpawnCameraObject
# 34 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 35 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 36 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTop_Text_0
# 37 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 38 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 39 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 40 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 41 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 42 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 43 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 44 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 45 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 2, MeltingSnowTown_EventScript_MythTop_Movement_0
# 46 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 47 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 48 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 49 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 50 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 51 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 52 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 53 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 54 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 55 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTop_Text_1
# 56 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 57 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 58 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToMythTop
# 59 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 60 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 61 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 62 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 63 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTop_Text_2
# 64 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 65 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 66 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 67 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 68 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 69 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTop_Text_3
# 70 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 71 "data/maps/MeltingSnowTown/scripts.pory"
	fadenewbgm MUS_DUMMY
# 72 "data/maps/MeltingSnowTown/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 73 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 74 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTop_Text_4
# 75 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 76 "data/maps/MeltingSnowTown/scripts.pory"
	delay 60
# 77 "data/maps/MeltingSnowTown/scripts.pory"
	warpcontinuescript MAP_MELTING_SNOW_FOREST_FLASHBACK, 9, 30, SnowForestFlashbackTop_EventScript
	end


SnowForestFlashbackTop_EventScript::
# 82 "data/maps/MeltingSnowTown/scripts.pory"
	lockall
# 83 "data/maps/MeltingSnowTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_MELTING_SNOW_FOREST_FLASHBACK
# 84 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 85 "data/maps/MeltingSnowTown/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 8
# 86 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 87 "data/maps/MeltingSnowTown/scripts.pory"
	special SpawnCameraObject
# 88 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 89 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RightPan12
# 90 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 91 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 5, SnowForestFlashbackTop_EventScript_Movement_0
# 92 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 93 "data/maps/MeltingSnowTown/scripts.pory"
	delay 20
# 94 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 5, SnowForestFlashbackTop_EventScript_Movement_1
# 95 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 96 "data/maps/MeltingSnowTown/scripts.pory"
	delay 40
# 97 "data/maps/MeltingSnowTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 98 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 99 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, FirstOffScreenCamForest
# 100 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox SnowForestFlashbackTop_EventScript_Text_0
# 101 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 102 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 103 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 104 "data/maps/MeltingSnowTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 105 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 106 "data/maps/MeltingSnowTown/scripts.pory"
	setobjectxyperm 7, 32, 40
# 107 "data/maps/MeltingSnowTown/scripts.pory"
	setobjectxyperm 6, 38, 40
# 108 "data/maps/MeltingSnowTown/scripts.pory"
	setobjectxy 7, 32, 40
# 109 "data/maps/MeltingSnowTown/scripts.pory"
	setobjectxy 6, 38, 40
# 110 "data/maps/MeltingSnowTown/scripts.pory"
	addobject 6
# 111 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 112 "data/maps/MeltingSnowTown/scripts.pory"
	addobject 7
# 113 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 114 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LeftPan12
# 115 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 116 "data/maps/MeltingSnowTown/scripts.pory"
	delay 60
# 117 "data/maps/MeltingSnowTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 118 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 119 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SecondOffScreenCamForest
# 120 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox SnowForestFlashbackTop_EventScript_Text_1
# 121 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 122 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 123 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 124 "data/maps/MeltingSnowTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 125 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 126 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraLastMovementForest
# 127 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 128 "data/maps/MeltingSnowTown/scripts.pory"
	delay 60
# 129 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox SnowForestFlashbackTop_EventScript_Text_2
# 130 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 131 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_JumpInPlaceDown
# 132 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_BIKE_HOP
# 133 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 134 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, StantlerToShroom
# 135 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 136 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 137 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_JumpInPlaceDown
# 138 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_BIKE_HOP
# 139 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 140 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_JumpInPlaceDown
# 141 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_BIKE_HOP
# 142 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 143 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 144 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_ShoveDown
# 145 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_M_BITE
# 146 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 147 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 148 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox SnowForestFlashbackTop_EventScript_Text_3
# 149 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 150 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, StantlerLeft3
# 151 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 152 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 153 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_ShoveLeft
# 154 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 155 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 156 "data/maps/MeltingSnowTown/scripts.pory"
	delay 10
# 157 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_ShoveRight
# 158 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 159 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 160 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 161 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, StantlerLeft3
# 162 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 163 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 164 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_ShoveLeft
# 165 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 166 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 167 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 168 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_ShoveRight
# 169 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 170 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 171 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 172 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, StantlerLeft3
# 173 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 174 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 175 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_ShoveLeft
# 176 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 177 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 178 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 179 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_ShoveRight
# 180 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 181 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 182 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 183 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 184 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 185 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 186 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox SnowForestFlashbackTop_EventScript_Text_4
# 187 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 188 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_JumpInPlaceDown
# 189 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_BIKE_HOP
# 190 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 191 "data/maps/MeltingSnowTown/scripts.pory"
	waitse
# 192 "data/maps/MeltingSnowTown/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 193 "data/maps/MeltingSnowTown/scripts.pory"
	waitmoncry
# 194 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 195 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, SnowForestFlashbackTop_EventScript_Movement_2
# 196 "data/maps/MeltingSnowTown/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 1
# 197 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 198 "data/maps/MeltingSnowTown/scripts.pory"
	fadeoutbgm 0
# 199 "data/maps/MeltingSnowTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 200 "data/maps/MeltingSnowTown/scripts.pory"
	warpcontinuescript MAP_MELTING_SNOW_TOWN, 17, 9, MeltingSnowTown_EventScript_MythTopReturn
# 201 "data/maps/MeltingSnowTown/scripts.pory"
	release
	end


MeltingSnowTown_EventScript_MythTopReturn::
# 206 "data/maps/MeltingSnowTown/scripts.pory"
	lockall
# 207 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 208 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 209 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 210 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 211 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 212 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 213 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 214 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 215 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 2, MeltingSnowTown_EventScript_MythTop_Movement_0
# 216 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 217 "data/maps/MeltingSnowTown/scripts.pory"
	special SpawnCameraObject
# 218 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 219 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToMythTop
# 220 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 221 "data/maps/MeltingSnowTown/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 8
# 222 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 223 "data/maps/MeltingSnowTown/scripts.pory"
	delay 60
# 224 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTopReturn_Text_0
# 225 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 226 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 227 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 228 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 229 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 230 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTopReturn_Text_1
# 231 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 232 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 233 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 234 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 235 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 236 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 237 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 5, Common_Movement_JumpInPlaceLeft
# 238 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 4, Common_Movement_JumpInPlaceDown
# 239 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_PIN
# 240 "data/maps/MeltingSnowTown/scripts.pory"
	waitse
# 241 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 242 "data/maps/MeltingSnowTown/scripts.pory"
	delay 120
# 243 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 244 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 245 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 246 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 247 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 248 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 249 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 250 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 251 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 252 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 253 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTopReturn_Text_2
# 254 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 255 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 256 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_PIN
# 257 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTopReturn_Text_3
# 258 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 259 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 260 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 261 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 262 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 263 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 264 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 265 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 266 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 267 "data/maps/MeltingSnowTown/scripts.pory"
	addobject 10
# 268 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 269 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 10, WomanToSceneTop
# 270 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 271 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 272 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 10, Common_Movement_JumpInPlaceRight
# 273 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_BIKE_HOP
# 274 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 275 "data/maps/MeltingSnowTown/scripts.pory"
	waitse
# 276 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 10, Common_Movement_JumpInPlaceRight
# 277 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_BIKE_HOP
# 278 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 279 "data/maps/MeltingSnowTown/scripts.pory"
	waitse
# 280 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 281 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTopReturn_Text_4
# 282 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 283 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 284 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 285 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 286 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTopReturn_Text_5
# 287 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 288 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 289 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 290 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 291 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTopReturn_Text_6
# 292 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 293 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 294 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromMythTop
# 295 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 296 "data/maps/MeltingSnowTown/scripts.pory"
	special RemoveCameraObject
# 297 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 298 "data/maps/MeltingSnowTown/scripts.pory"
	setobjectxyperm 10, 15, 10
# 299 "data/maps/MeltingSnowTown/scripts.pory"
	setobjectxy 10, 15, 10
# 300 "data/maps/MeltingSnowTown/scripts.pory"
	SetObjectMovementType 10, MOVEMENT_TYPE_LOOK_AROUND
# 301 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 302 "data/maps/MeltingSnowTown/scripts.pory"
	setflag FLAG_MYTH_EXPLAINED
# 303 "data/maps/MeltingSnowTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 304 "data/maps/MeltingSnowTown/scripts.pory"
	setrespawn HEAL_LOCATION_MELTING_SNOW
# 305 "data/maps/MeltingSnowTown/scripts.pory"
	releaseall
	end


MeltingSnowTown_EventScript_MythBottom::
# 323 "data/maps/MeltingSnowTown/scripts.pory"
	lock
# 324 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 325 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 326 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 327 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 328 "data/maps/MeltingSnowTown/scripts.pory"
	special SpawnCameraObject
# 329 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 330 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 331 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTop_Text_0
# 332 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 333 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 334 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 335 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 336 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 337 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 338 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 339 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 340 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 2, MeltingSnowTown_EventScript_MythTop_Movement_0
# 341 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 342 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 343 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 344 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 345 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 346 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 347 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 348 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 349 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 350 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTop_Text_1
# 351 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 352 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 353 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToMythBottom
# 354 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 355 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 356 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 357 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 358 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTop_Text_2
# 359 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 360 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 361 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 362 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 363 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 364 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTop_Text_3
# 365 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 366 "data/maps/MeltingSnowTown/scripts.pory"
	fadenewbgm MUS_DUMMY
# 367 "data/maps/MeltingSnowTown/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 368 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 369 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTop_Text_4
# 370 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 371 "data/maps/MeltingSnowTown/scripts.pory"
	delay 60
# 372 "data/maps/MeltingSnowTown/scripts.pory"
	warpcontinuescript MAP_MELTING_SNOW_FOREST_FLASHBACK, 9, 30, SnowForestFlashbackBottom_EventScript
	end


SnowForestFlashbackBottom_EventScript::
# 377 "data/maps/MeltingSnowTown/scripts.pory"
	lockall
# 378 "data/maps/MeltingSnowTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_MELTING_SNOW_FOREST_FLASHBACK
# 379 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 380 "data/maps/MeltingSnowTown/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 8
# 381 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 382 "data/maps/MeltingSnowTown/scripts.pory"
	special SpawnCameraObject
# 383 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 384 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RightPan12
# 385 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 386 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 5, SnowForestFlashbackTop_EventScript_Movement_0
# 387 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 388 "data/maps/MeltingSnowTown/scripts.pory"
	delay 20
# 389 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 5, SnowForestFlashbackTop_EventScript_Movement_1
# 390 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 391 "data/maps/MeltingSnowTown/scripts.pory"
	delay 40
# 392 "data/maps/MeltingSnowTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 393 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 394 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, FirstOffScreenCamForest
# 395 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox SnowForestFlashbackTop_EventScript_Text_0
# 396 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 397 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 398 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 399 "data/maps/MeltingSnowTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 400 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 401 "data/maps/MeltingSnowTown/scripts.pory"
	setobjectxyperm 7, 32, 40
# 402 "data/maps/MeltingSnowTown/scripts.pory"
	setobjectxyperm 6, 38, 40
# 403 "data/maps/MeltingSnowTown/scripts.pory"
	setobjectxy 7, 32, 40
# 404 "data/maps/MeltingSnowTown/scripts.pory"
	setobjectxy 6, 38, 40
# 405 "data/maps/MeltingSnowTown/scripts.pory"
	addobject 6
# 406 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 407 "data/maps/MeltingSnowTown/scripts.pory"
	addobject 7
# 408 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 409 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LeftPan12
# 410 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 411 "data/maps/MeltingSnowTown/scripts.pory"
	delay 60
# 412 "data/maps/MeltingSnowTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 413 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 414 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SecondOffScreenCamForest
# 415 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox SnowForestFlashbackTop_EventScript_Text_1
# 416 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 417 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 418 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 419 "data/maps/MeltingSnowTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 420 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 421 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraLastMovementForest
# 422 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 423 "data/maps/MeltingSnowTown/scripts.pory"
	delay 60
# 424 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox SnowForestFlashbackTop_EventScript_Text_2
# 425 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 426 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_JumpInPlaceDown
# 427 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_BIKE_HOP
# 428 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 429 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, StantlerToShroom
# 430 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 431 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 432 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_JumpInPlaceDown
# 433 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_BIKE_HOP
# 434 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 435 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_JumpInPlaceDown
# 436 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_BIKE_HOP
# 437 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 438 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 439 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_ShoveDown
# 440 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_M_BITE
# 441 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 442 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 443 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox SnowForestFlashbackTop_EventScript_Text_3
# 444 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 445 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, StantlerLeft3
# 446 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 447 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 448 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_ShoveLeft
# 449 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 450 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 451 "data/maps/MeltingSnowTown/scripts.pory"
	delay 10
# 452 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_ShoveRight
# 453 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 454 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 455 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 456 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, StantlerLeft3
# 457 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 458 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 459 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_ShoveLeft
# 460 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 461 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 462 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 463 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_ShoveRight
# 464 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 465 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 466 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 467 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, StantlerLeft3
# 468 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 469 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 470 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_ShoveLeft
# 471 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 472 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 473 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 474 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_ShoveRight
# 475 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 476 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 477 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 478 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_FaceDown
# 479 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 480 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 481 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox SnowForestFlashbackTop_EventScript_Text_4
# 482 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 483 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_JumpInPlaceDown
# 484 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_BIKE_HOP
# 485 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 486 "data/maps/MeltingSnowTown/scripts.pory"
	waitse
# 487 "data/maps/MeltingSnowTown/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 488 "data/maps/MeltingSnowTown/scripts.pory"
	waitmoncry
# 489 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 490 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, SnowForestFlashbackTop_EventScript_Movement_2
# 491 "data/maps/MeltingSnowTown/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 1
# 492 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 493 "data/maps/MeltingSnowTown/scripts.pory"
	fadeoutbgm 0
# 494 "data/maps/MeltingSnowTown/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 495 "data/maps/MeltingSnowTown/scripts.pory"
	warpcontinuescript MAP_MELTING_SNOW_TOWN, 17, 10, MeltingSnowTown_EventScript_MythBottomReturn
# 496 "data/maps/MeltingSnowTown/scripts.pory"
	release
	end


MeltingSnowTown_EventScript_MythBottomReturn::
# 501 "data/maps/MeltingSnowTown/scripts.pory"
	lockall
# 502 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 503 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 504 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 505 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 506 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 507 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 508 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 509 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 510 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 2, MeltingSnowTown_EventScript_MythTop_Movement_0
# 511 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 512 "data/maps/MeltingSnowTown/scripts.pory"
	special SpawnCameraObject
# 513 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 514 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToMythBottom
# 515 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 516 "data/maps/MeltingSnowTown/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 8
# 517 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 518 "data/maps/MeltingSnowTown/scripts.pory"
	delay 60
# 519 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTopReturn_Text_0
# 520 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 521 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 522 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 523 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 524 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 525 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTopReturn_Text_1
# 526 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 527 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 528 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 529 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 530 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 531 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 532 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 5, Common_Movement_JumpInPlaceLeft
# 533 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 4, Common_Movement_JumpInPlaceDown
# 534 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_PIN
# 535 "data/maps/MeltingSnowTown/scripts.pory"
	waitse
# 536 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 537 "data/maps/MeltingSnowTown/scripts.pory"
	delay 120
# 538 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 539 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 540 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 541 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 542 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 543 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 544 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 545 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 546 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 547 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 548 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTopReturn_Text_2
# 549 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 550 "data/maps/MeltingSnowTown/scripts.pory"
	delay 30
# 551 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_PIN
# 552 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTopReturn_Text_3
# 553 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 554 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 555 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 556 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 557 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 558 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 559 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 560 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 561 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 562 "data/maps/MeltingSnowTown/scripts.pory"
	addobject 10
# 563 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 564 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 10, WomanToSceneTop
# 565 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 566 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 567 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 10, Common_Movement_JumpInPlaceRight
# 568 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_BIKE_HOP
# 569 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 570 "data/maps/MeltingSnowTown/scripts.pory"
	waitse
# 571 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 10, Common_Movement_JumpInPlaceRight
# 572 "data/maps/MeltingSnowTown/scripts.pory"
	playse SE_BIKE_HOP
# 573 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 574 "data/maps/MeltingSnowTown/scripts.pory"
	waitse
# 575 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 576 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTopReturn_Text_4
# 577 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 578 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 579 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 580 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 581 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTopReturn_Text_5
# 582 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 583 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 584 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 585 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 586 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MythTopReturn_Text_6
# 587 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 588 "data/maps/MeltingSnowTown/scripts.pory"
	delay 15
# 589 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromMythBottom
# 590 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 591 "data/maps/MeltingSnowTown/scripts.pory"
	special RemoveCameraObject
# 592 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 593 "data/maps/MeltingSnowTown/scripts.pory"
	setobjectxyperm 10, 15, 10
# 594 "data/maps/MeltingSnowTown/scripts.pory"
	setobjectxy 10, 15, 10
# 595 "data/maps/MeltingSnowTown/scripts.pory"
	SetObjectMovementType 10, MOVEMENT_TYPE_LOOK_AROUND
# 596 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 597 "data/maps/MeltingSnowTown/scripts.pory"
	setflag FLAG_MYTH_EXPLAINED
# 598 "data/maps/MeltingSnowTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 599 "data/maps/MeltingSnowTown/scripts.pory"
	setrespawn HEAL_LOCATION_MELTING_SNOW
# 600 "data/maps/MeltingSnowTown/scripts.pory"
	releaseall
	end


MeltingSnowTown_EventScript_LittleBoy1::
# 617 "data/maps/MeltingSnowTown/scripts.pory"
	lock
# 618 "data/maps/MeltingSnowTown/scripts.pory"
	faceplayer
# 619 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_unset FLAG_MYTH_EXPLAINED, MeltingSnowTown_EventScript_LittleBoy1_2
MeltingSnowTown_EventScript_LittleBoy1_1:
# 622 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_set FLAG_MYTH_EXPLAINED, MeltingSnowTown_EventScript_LittleBoy1_5
MeltingSnowTown_EventScript_LittleBoy1_4:
# 625 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 626 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 4, Common_Movement_FaceOriginalDirection
# 627 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 628 "data/maps/MeltingSnowTown/scripts.pory"
	release
	end

MeltingSnowTown_EventScript_LittleBoy1_2:
# 620 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_LittleBoy1_Text_0
	goto MeltingSnowTown_EventScript_LittleBoy1_1

MeltingSnowTown_EventScript_LittleBoy1_5:
# 623 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_LittleBoy1_Text_1
	goto MeltingSnowTown_EventScript_LittleBoy1_4


MeltingSnowTown_EventScript_LittleBoy2::
# 633 "data/maps/MeltingSnowTown/scripts.pory"
	lock
# 634 "data/maps/MeltingSnowTown/scripts.pory"
	faceplayer
# 635 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_unset FLAG_MYTH_EXPLAINED, MeltingSnowTown_EventScript_LittleBoy2_2
MeltingSnowTown_EventScript_LittleBoy2_1:
# 638 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_set FLAG_MYTH_EXPLAINED, MeltingSnowTown_EventScript_LittleBoy2_5
MeltingSnowTown_EventScript_LittleBoy2_4:
# 641 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 642 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 5, Common_Movement_FaceOriginalDirection
# 643 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 644 "data/maps/MeltingSnowTown/scripts.pory"
	release
	end

MeltingSnowTown_EventScript_LittleBoy2_2:
# 636 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_LittleBoy2_Text_0
	goto MeltingSnowTown_EventScript_LittleBoy2_1

MeltingSnowTown_EventScript_LittleBoy2_5:
# 639 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_LittleBoy2_Text_1
	goto MeltingSnowTown_EventScript_LittleBoy2_4


MeltingSnowTown_EventScript_Fisherman::
# 649 "data/maps/MeltingSnowTown/scripts.pory"
	lock
# 650 "data/maps/MeltingSnowTown/scripts.pory"
	faceplayer
# 651 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_unset FLAG_MYTH_EXPLAINED, MeltingSnowTown_EventScript_Fisherman_2
MeltingSnowTown_EventScript_Fisherman_1:
# 654 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_set FLAG_MYTH_EXPLAINED, MeltingSnowTown_EventScript_Fisherman_5
MeltingSnowTown_EventScript_Fisherman_4:
# 657 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 658 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 659 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 660 "data/maps/MeltingSnowTown/scripts.pory"
	release
	end

MeltingSnowTown_EventScript_Fisherman_2:
# 652 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_Fisherman_Text_0
	goto MeltingSnowTown_EventScript_Fisherman_1

MeltingSnowTown_EventScript_Fisherman_5:
# 655 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_Fisherman_Text_1
	goto MeltingSnowTown_EventScript_Fisherman_4


MeltingSnowTown_EventScript_Elder::
# 665 "data/maps/MeltingSnowTown/scripts.pory"
	lock
# 666 "data/maps/MeltingSnowTown/scripts.pory"
	faceplayer
# 667 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_unset FLAG_MYTH_EXPLAINED, MeltingSnowTown_EventScript_Elder_2
MeltingSnowTown_EventScript_Elder_1:
# 670 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_set FLAG_MYTH_EXPLAINED, MeltingSnowTown_EventScript_Elder_5
MeltingSnowTown_EventScript_Elder_4:
# 673 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 674 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 675 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 676 "data/maps/MeltingSnowTown/scripts.pory"
	release
	end

MeltingSnowTown_EventScript_Elder_2:
# 668 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_Elder_Text_0
	goto MeltingSnowTown_EventScript_Elder_1

MeltingSnowTown_EventScript_Elder_5:
# 671 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_Elder_Text_1
	goto MeltingSnowTown_EventScript_Elder_4


MeltingSnowTown_EventScript_GreenWoman::
# 681 "data/maps/MeltingSnowTown/scripts.pory"
	lock
# 682 "data/maps/MeltingSnowTown/scripts.pory"
	faceplayer
# 683 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_unset FLAG_MYTH_EXPLAINED, MeltingSnowTown_EventScript_GreenWoman_2
MeltingSnowTown_EventScript_GreenWoman_1:
# 686 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_set FLAG_MYTH_EXPLAINED, MeltingSnowTown_EventScript_GreenWoman_5
MeltingSnowTown_EventScript_GreenWoman_4:
# 689 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 690 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 691 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 692 "data/maps/MeltingSnowTown/scripts.pory"
	release
	end

MeltingSnowTown_EventScript_GreenWoman_2:
# 684 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_GreenWoman_Text_0
	goto MeltingSnowTown_EventScript_GreenWoman_1

MeltingSnowTown_EventScript_GreenWoman_5:
# 687 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_GreenWoman_Text_1
	goto MeltingSnowTown_EventScript_GreenWoman_4


MeltingSnowTown_EventScript_Girl::
# 697 "data/maps/MeltingSnowTown/scripts.pory"
	lock
# 698 "data/maps/MeltingSnowTown/scripts.pory"
	faceplayer
# 699 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_unset FLAG_MYTH_EXPLAINED, MeltingSnowTown_EventScript_Girl_2
MeltingSnowTown_EventScript_Girl_1:
# 702 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_set FLAG_MYTH_EXPLAINED, MeltingSnowTown_EventScript_Girl_5
MeltingSnowTown_EventScript_Girl_4:
# 705 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 706 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 3, Common_Movement_FaceOriginalDirection
# 707 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 708 "data/maps/MeltingSnowTown/scripts.pory"
	release
	end

MeltingSnowTown_EventScript_Girl_2:
# 700 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_Girl_Text_0
	goto MeltingSnowTown_EventScript_Girl_1

MeltingSnowTown_EventScript_Girl_5:
# 703 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_Girl_Text_1
	goto MeltingSnowTown_EventScript_Girl_4


MeltingSnowTown_EventScript_Man::
# 713 "data/maps/MeltingSnowTown/scripts.pory"
	lock
# 714 "data/maps/MeltingSnowTown/scripts.pory"
	faceplayer
# 715 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_unset FLAG_MYTH_EXPLAINED, MeltingSnowTown_EventScript_Man_2
MeltingSnowTown_EventScript_Man_1:
# 718 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_set FLAG_MYTH_EXPLAINED, MeltingSnowTown_EventScript_Man_5
MeltingSnowTown_EventScript_Man_4:
# 721 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 722 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 6, Common_Movement_FaceOriginalDirection
# 723 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 724 "data/maps/MeltingSnowTown/scripts.pory"
	release
	end

MeltingSnowTown_EventScript_Man_2:
# 716 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_Man_Text_0
	goto MeltingSnowTown_EventScript_Man_1

MeltingSnowTown_EventScript_Man_5:
# 719 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_Man_Text_1
	goto MeltingSnowTown_EventScript_Man_4


MeltingSnowTown_EventScript_MissingMother::
# 729 "data/maps/MeltingSnowTown/scripts.pory"
	lock
# 730 "data/maps/MeltingSnowTown/scripts.pory"
	faceplayer
# 731 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_MissingMother_Text_0
# 732 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 733 "data/maps/MeltingSnowTown/scripts.pory"
	release
	end


MeltingSnowTown_EventScript_Nurse::
# 738 "data/maps/MeltingSnowTown/scripts.pory"
	lock
# 739 "data/maps/MeltingSnowTown/scripts.pory"
	faceplayer
# 740 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_unset FLAG_ABSOL_ENTER, MeltingSnowTown_EventScript_Nurse_2
# 747 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_set FLAG_MELTING_SNOW_TOWN_NURSE, MeltingSnowTown_EventScript_Nurse_5
MeltingSnowTown_EventScript_Nurse_4:
# 760 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_unset FLAG_MELTING_SNOW_TOWN_NURSE, MeltingSnowTown_EventScript_Nurse_8
MeltingSnowTown_EventScript_Nurse_7:
# 776 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_FaceOriginalDirection
# 777 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 778 "data/maps/MeltingSnowTown/scripts.pory"
	callnative UpdateFollowingPokemon
# 779 "data/maps/MeltingSnowTown/scripts.pory"
	release
	end

MeltingSnowTown_EventScript_Nurse_2:
# 741 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_Nurse_Text_0
# 742 "data/maps/MeltingSnowTown/scripts.pory"
	applymovement 8, Common_Movement_FaceOriginalDirection
# 743 "data/maps/MeltingSnowTown/scripts.pory"
	waitmovement 0
# 744 "data/maps/MeltingSnowTown/scripts.pory"
	release
	end

MeltingSnowTown_EventScript_Nurse_5:
# 748 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_Nurse_Text_1, MSGBOX_YESNO
# 749 "data/maps/MeltingSnowTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MeltingSnowTown_EventScript_Nurse_10
# 757 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_Nurse_Text_3
	goto MeltingSnowTown_EventScript_Nurse_4

MeltingSnowTown_EventScript_Nurse_8:
# 761 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_Nurse_Text_4, MSGBOX_YESNO
# 762 "data/maps/MeltingSnowTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MeltingSnowTown_EventScript_Nurse_13
# 771 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_Nurse_Text_3
# 772 "data/maps/MeltingSnowTown/scripts.pory"
	waitmessage
# 773 "data/maps/MeltingSnowTown/scripts.pory"
	setflag FLAG_MELTING_SNOW_TOWN_NURSE
	goto MeltingSnowTown_EventScript_Nurse_7

MeltingSnowTown_EventScript_Nurse_10:
# 750 "data/maps/MeltingSnowTown/scripts.pory"
	special HealPlayerParty
# 751 "data/maps/MeltingSnowTown/scripts.pory"
	playfanfare MUS_HEAL
# 752 "data/maps/MeltingSnowTown/scripts.pory"
	waitfanfare
# 753 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_Nurse_Text_2
# 754 "data/maps/MeltingSnowTown/scripts.pory"
	waitmessage
	goto MeltingSnowTown_EventScript_Nurse_4

MeltingSnowTown_EventScript_Nurse_13:
# 763 "data/maps/MeltingSnowTown/scripts.pory"
	special HealPlayerParty
# 764 "data/maps/MeltingSnowTown/scripts.pory"
	playfanfare MUS_HEAL
# 765 "data/maps/MeltingSnowTown/scripts.pory"
	waitfanfare
# 766 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_Nurse_Text_2
# 767 "data/maps/MeltingSnowTown/scripts.pory"
	waitmessage
# 768 "data/maps/MeltingSnowTown/scripts.pory"
	setflag FLAG_MELTING_SNOW_TOWN_NURSE
	goto MeltingSnowTown_EventScript_Nurse_7


MeltingSnowTown_EventScript_HouseWoman::
# 784 "data/maps/MeltingSnowTown/scripts.pory"
	lock
# 785 "data/maps/MeltingSnowTown/scripts.pory"
	faceplayer
# 786 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_set FLAG_SNOWY_ITEMS_GIVEN, MeltingSnowTown_EventScript_HouseWoman_2
MeltingSnowTown_EventScript_HouseWoman_1:
# 789 "data/maps/MeltingSnowTown/scripts.pory"
	goto_if_unset FLAG_SNOWY_ITEMS_GIVEN, MeltingSnowTown_EventScript_HouseWoman_5
MeltingSnowTown_EventScript_HouseWoman_4:
# 795 "data/maps/MeltingSnowTown/scripts.pory"
	closemessage
# 796 "data/maps/MeltingSnowTown/scripts.pory"
	release
	end

MeltingSnowTown_EventScript_HouseWoman_2:
# 787 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_HouseWoman_Text_0
	goto MeltingSnowTown_EventScript_HouseWoman_1

MeltingSnowTown_EventScript_HouseWoman_5:
# 790 "data/maps/MeltingSnowTown/scripts.pory"
	msgbox MeltingSnowTown_EventScript_HouseWoman_Text_1
# 791 "data/maps/MeltingSnowTown/scripts.pory"
	giveitem ITEM_POTION, 10
# 792 "data/maps/MeltingSnowTown/scripts.pory"
	giveitem ITEM_ETHER, 10
# 793 "data/maps/MeltingSnowTown/scripts.pory"
	setflag FLAG_SNOWY_ITEMS_GIVEN
	goto MeltingSnowTown_EventScript_HouseWoman_4


# 800 "data/maps/MeltingSnowTown/scripts.pory"
CameraToMythTop:
# 801 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 801 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 801 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 802 "data/maps/MeltingSnowTown/scripts.pory"
	walk_diag_northeast
# 803 "data/maps/MeltingSnowTown/scripts.pory"
	step_end

# 806 "data/maps/MeltingSnowTown/scripts.pory"
CameraToMythBottom:
# 807 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 807 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 808 "data/maps/MeltingSnowTown/scripts.pory"
	walk_diag_northeast
# 808 "data/maps/MeltingSnowTown/scripts.pory"
	walk_diag_northeast
# 809 "data/maps/MeltingSnowTown/scripts.pory"
	step_end

# 812 "data/maps/MeltingSnowTown/scripts.pory"
CameraFromMythTop:
# 813 "data/maps/MeltingSnowTown/scripts.pory"
	walk_diag_southwest
# 814 "data/maps/MeltingSnowTown/scripts.pory"
	walk_left
# 814 "data/maps/MeltingSnowTown/scripts.pory"
	walk_left
# 814 "data/maps/MeltingSnowTown/scripts.pory"
	walk_left
# 815 "data/maps/MeltingSnowTown/scripts.pory"
	step_end

# 818 "data/maps/MeltingSnowTown/scripts.pory"
CameraFromMythBottom:
# 819 "data/maps/MeltingSnowTown/scripts.pory"
	walk_diag_southwest
# 819 "data/maps/MeltingSnowTown/scripts.pory"
	walk_diag_southwest
# 820 "data/maps/MeltingSnowTown/scripts.pory"
	walk_left
# 820 "data/maps/MeltingSnowTown/scripts.pory"
	walk_left
# 821 "data/maps/MeltingSnowTown/scripts.pory"
	step_end

# 824 "data/maps/MeltingSnowTown/scripts.pory"
RightPan12:
# 825 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 825 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 825 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 825 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 825 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 825 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 825 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 825 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 825 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 825 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 825 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 825 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
	step_end

# 828 "data/maps/MeltingSnowTown/scripts.pory"
LeftPan12:
# 829 "data/maps/MeltingSnowTown/scripts.pory"
	walk_left
# 829 "data/maps/MeltingSnowTown/scripts.pory"
	walk_left
# 829 "data/maps/MeltingSnowTown/scripts.pory"
	walk_left
# 829 "data/maps/MeltingSnowTown/scripts.pory"
	walk_left
# 829 "data/maps/MeltingSnowTown/scripts.pory"
	walk_left
# 829 "data/maps/MeltingSnowTown/scripts.pory"
	walk_left
# 829 "data/maps/MeltingSnowTown/scripts.pory"
	walk_left
# 829 "data/maps/MeltingSnowTown/scripts.pory"
	walk_left
# 829 "data/maps/MeltingSnowTown/scripts.pory"
	walk_left
# 829 "data/maps/MeltingSnowTown/scripts.pory"
	walk_left
# 829 "data/maps/MeltingSnowTown/scripts.pory"
	walk_left
# 829 "data/maps/MeltingSnowTown/scripts.pory"
	walk_left
	step_end

# 832 "data/maps/MeltingSnowTown/scripts.pory"
CameraLastMovementForest:
# 833 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 833 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 833 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 833 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 833 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 833 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 833 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 833 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 833 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 833 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 833 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 833 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 833 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
# 833 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
	step_end

# 836 "data/maps/MeltingSnowTown/scripts.pory"
FirstOffScreenCamForest:
# 837 "data/maps/MeltingSnowTown/scripts.pory"
	walk_diag_southeast
# 837 "data/maps/MeltingSnowTown/scripts.pory"
	walk_diag_southeast
# 837 "data/maps/MeltingSnowTown/scripts.pory"
	walk_diag_southeast
# 837 "data/maps/MeltingSnowTown/scripts.pory"
	walk_diag_southeast
# 837 "data/maps/MeltingSnowTown/scripts.pory"
	walk_diag_southeast
# 837 "data/maps/MeltingSnowTown/scripts.pory"
	walk_diag_southeast
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
# 838 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_right
	step_end

# 841 "data/maps/MeltingSnowTown/scripts.pory"
SecondOffScreenCamForest:
# 842 "data/maps/MeltingSnowTown/scripts.pory"
	walk_diag_northwest
# 842 "data/maps/MeltingSnowTown/scripts.pory"
	walk_diag_northwest
# 842 "data/maps/MeltingSnowTown/scripts.pory"
	walk_diag_northwest
# 842 "data/maps/MeltingSnowTown/scripts.pory"
	walk_diag_northwest
# 842 "data/maps/MeltingSnowTown/scripts.pory"
	walk_diag_northwest
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
# 843 "data/maps/MeltingSnowTown/scripts.pory"
	walk_faster_up
	step_end

# 846 "data/maps/MeltingSnowTown/scripts.pory"
StantlerToShroom:
# 847 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_right
# 847 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_right
# 847 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_right
# 847 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_right
# 847 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_right
# 847 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_right
# 847 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_right
# 847 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_right
# 847 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_right
# 848 "data/maps/MeltingSnowTown/scripts.pory"
	face_down
	step_end

# 851 "data/maps/MeltingSnowTown/scripts.pory"
StantlerLeft3:
# 852 "data/maps/MeltingSnowTown/scripts.pory"
	walk_slow_left
# 852 "data/maps/MeltingSnowTown/scripts.pory"
	walk_slow_left
# 852 "data/maps/MeltingSnowTown/scripts.pory"
	walk_slow_left
	step_end

# 855 "data/maps/MeltingSnowTown/scripts.pory"
WomanToSceneTop:
# 856 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_right
# 856 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_right
# 856 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_right
# 856 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_right
# 856 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_right
# 856 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_right
	step_end

# 45 "data/maps/MeltingSnowTown/scripts.pory"
MeltingSnowTown_EventScript_MythTop_Movement_0:
# 45 "data/maps/MeltingSnowTown/scripts.pory"
	walk_down
# 45 "data/maps/MeltingSnowTown/scripts.pory"
	walk_down
# 45 "data/maps/MeltingSnowTown/scripts.pory"
	face_left
	step_end

# 91 "data/maps/MeltingSnowTown/scripts.pory"
SnowForestFlashbackTop_EventScript_Movement_0:
# 91 "data/maps/MeltingSnowTown/scripts.pory"
	walk_right
	step_end

# 94 "data/maps/MeltingSnowTown/scripts.pory"
SnowForestFlashbackTop_EventScript_Movement_1:
# 94 "data/maps/MeltingSnowTown/scripts.pory"
	walk_down
	step_end

# 195 "data/maps/MeltingSnowTown/scripts.pory"
SnowForestFlashbackTop_EventScript_Movement_2:
# 195 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_down
# 195 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_down
# 195 "data/maps/MeltingSnowTown/scripts.pory"
	walk_fast_down
	step_end

MeltingSnowTown_EventScript_MythTop_Text_0:
# 36 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Thank you all for gathering today.$"

MeltingSnowTown_EventScript_MythTop_Text_1:
# 55 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Come, listen to my story.$"

MeltingSnowTown_EventScript_MythTop_Text_2:
# 63 "data/maps/MeltingSnowTown/scripts.pory"
	.string "For generations, the cold of our home\n"
	.string "has given us life.\p"
	.string "Deep in icy ponds, fish have been\n"
	.string "plentiful.\p"
	.string "In the thickness of the forests, game\n"
	.string "populations have been steady.\p"
	.string "Our people have lived fruitful lives,\n"
	.string "despite the harsh environment in which\l"
	.string "we reside.$"

MeltingSnowTown_EventScript_MythTop_Text_3:
# 69 "data/maps/MeltingSnowTown/scripts.pory"
	.string "However, that has not always been the\n"
	.string "case.$"

MeltingSnowTown_EventScript_MythTop_Text_4:
# 74 "data/maps/MeltingSnowTown/scripts.pory"
	.string "My grandmother told me a story, passed\n"
	.string "down by her grandmother, and her\l"
	.string "grandmother before her.\p"
	.string "Many millenia ago, our world looked very\n"
	.string "different.\p"
	.string "The forest, which has been frozen for\n"
	.string "as long as I can remember, began to\l"
	.string "defrost.$"

SnowForestFlashbackTop_EventScript_Text_0:
# 100 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Permafrost collapsed, giving way to\n"
	.string "rivers and lakes, which carved gorges\l"
	.string "through the landscape.$"

SnowForestFlashbackTop_EventScript_Text_1:
# 120 "data/maps/MeltingSnowTown/scripts.pory"
	.string "As the land changed and the world\n"
	.string "warmed, something more sinister\l"
	.string "emerged.$"

SnowForestFlashbackTop_EventScript_Text_2:
# 129 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Bacteria, viruses, and spores began to\n"
	.string "proliferate in the warmer climate.$"

SnowForestFlashbackTop_EventScript_Text_3:
# 148 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Wildlife became infected and began to\n"
	.string "act erratically.$"

SnowForestFlashbackTop_EventScript_Text_4:
# 186 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Pokémon quickly fell ill.\p"
	.string "In their deteriorating state, they\n"
	.string "became far more aggressive than before\l"
	.string "exposure to the disease.$"

MeltingSnowTown_EventScript_MythTopReturn_Text_0:
# 224 "data/maps/MeltingSnowTown/scripts.pory"
	.string "The Pokémon populations during this\n"
	.string "outbreak suffered immense losses.\p"
	.string "Their numbers rebounded when the\n"
	.string "natural climatic cycles eventually\l"
	.string "brought the forest back to a frozen\l"
	.string "state.$"

MeltingSnowTown_EventScript_MythTopReturn_Text_1:
# 230 "data/maps/MeltingSnowTown/scripts.pory"
	.string "However, this story is no mere myth. The\n"
	.string "anthropogenic warming of our planet\l"
	.string "has caused the permafrost to thaw once\l"
	.string "more.\p"
	.string "The spores have reappeared.$"

MeltingSnowTown_EventScript_MythTopReturn_Text_2:
# 253 "data/maps/MeltingSnowTown/scripts.pory"
	.string "I beg of all of you, stay out of the\n"
	.string "forest.$"

MeltingSnowTown_EventScript_MythTopReturn_Text_3:
# 257 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Help!\p"
	.string "P-please, help me!$"

MeltingSnowTown_EventScript_MythTopReturn_Text_4:
# 281 "data/maps/MeltingSnowTown/scripts.pory"
	.string "My daughter ran off! I can't find her!$"

MeltingSnowTown_EventScript_MythTopReturn_Text_5:
# 286 "data/maps/MeltingSnowTown/scripts.pory"
	.string "I can't go searching in the forest, I\n"
	.string "don't have any way to defend myself!$"

MeltingSnowTown_EventScript_MythTopReturn_Text_6:
# 291 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Will anyone help me?$"

MeltingSnowTown_EventScript_LittleBoy1_Text_0:
# 620 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Our elder promised to tell us a story. I\n"
	.string "can't wait!$"

MeltingSnowTown_EventScript_LittleBoy1_Text_1:
# 623 "data/maps/MeltingSnowTown/scripts.pory"
	.string "I used to play in the forest all the\n"
	.string "time! I hope I don't get sick!$"

MeltingSnowTown_EventScript_LittleBoy2_Text_0:
# 636 "data/maps/MeltingSnowTown/scripts.pory"
	.string "This pond used to be frozen over. I\n"
	.string "loved skating on the ice!$"

MeltingSnowTown_EventScript_LittleBoy2_Text_1:
# 639 "data/maps/MeltingSnowTown/scripts.pory"
	.string "If it keeps warming up, maybe this pond\n"
	.string "will become a hot spring!$"

MeltingSnowTown_EventScript_Fisherman_Text_0:
# 652 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Whenever I wanted to fish, I had to\n"
	.string "drill a hole in the ice to access water.\p"
	.string "For some reason, the ice is gone!$"

MeltingSnowTown_EventScript_Fisherman_Text_1:
# 655 "data/maps/MeltingSnowTown/scripts.pory"
	.string "After the water warmed up, I haven't\n"
	.string "had any success fishing.\p"
	.string "It seems that aquatic Pokémon couldn't\n"
	.string "survive the drastic change.$"

MeltingSnowTown_EventScript_Elder_Text_0:
# 668 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Hello, child, welcome to our wintry\n"
	.string "abode.\p"
	.string "You are just in time to witness the\n"
	.string "grass emerge from the cold, which we\l"
	.string "haven't seen for generations.$"

MeltingSnowTown_EventScript_Elder_Text_1:
# 671 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Please, for your own safety, do not\n"
	.string "enter the forest.$"

MeltingSnowTown_EventScript_GreenWoman_Text_0:
# 684 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Brrr... Why do I live here?\p"
	.string "It's so cold!$"

MeltingSnowTown_EventScript_GreenWoman_Text_1:
# 687 "data/maps/MeltingSnowTown/scripts.pory"
	.string "How can it be getting warmer? I'm still\n"
	.string "so chilly!$"

MeltingSnowTown_EventScript_Girl_Text_0:
# 700 "data/maps/MeltingSnowTown/scripts.pory"
	.string "The grass and trees are shockingly\n"
	.string "green in contrast with the snow.\p"
	.string "I love the color!$"

MeltingSnowTown_EventScript_Girl_Text_1:
# 703 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Although I like seeing the green, I wish\n"
	.string "the world wasn't warming.\p"
	.string "I'd much prefer snow to blanket\n"
	.string "everything.$"

MeltingSnowTown_EventScript_Man_Text_0:
# 716 "data/maps/MeltingSnowTown/scripts.pory"
	.string "I still can't believe I'm seeing liquid\n"
	.string "water.\p"
	.string "It doesn't seem natural.$"

MeltingSnowTown_EventScript_Man_Text_1:
# 719 "data/maps/MeltingSnowTown/scripts.pory"
	.string "What a story. I hope the disease\n"
	.string "doesn't spread too far.$"

MeltingSnowTown_EventScript_MissingMother_Text_0:
# 731 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Please!\p"
	.string "Please help me!\p"
	.string "I can't imagine my daughter being alone\n"
	.string "in that forest!$"

MeltingSnowTown_EventScript_Nurse_Text_0:
# 741 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Oh... you don't have a Pokémon?\p"
	.string "Come back if you need to heal a\n"
	.string "Pokémon.$"

MeltingSnowTown_EventScript_Nurse_Text_1:
# 748 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Would you like me to heal your Pokémon?$"

MeltingSnowTown_EventScript_Nurse_Text_2:
# 753 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Let me know if you need my services\n"
	.string "again.$"

MeltingSnowTown_EventScript_Nurse_Text_3:
# 757 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Let me know if you need my services.$"

MeltingSnowTown_EventScript_Nurse_Text_4:
# 761 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Brr... I can't believe I was assigned\n"
	.string "this post. Why couldn't I have been\l"
	.string "sent to the beach?\p"
	.string "Anyway...\p"
	.string "Would you like me to heal your Pokémon?$"

MeltingSnowTown_EventScript_HouseWoman_Text_0:
# 787 "data/maps/MeltingSnowTown/scripts.pory"
	.string "That should be enough to get you\n"
	.string "started!$"

MeltingSnowTown_EventScript_HouseWoman_Text_1:
# 790 "data/maps/MeltingSnowTown/scripts.pory"
	.string "Hello, traveler! You seem to have\n"
	.string "packed light.\p"
	.string "Here, take these!$"
