# 1 "data/maps/PetalburgCity/scripts.pory"

# 2 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_WALLY, 2
# 3 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_JSOGIRL, 3
# 4 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_JSOBOY, 4
# 5 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_Mundungus, 5
# 6 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_GYM_BOY, 8
# 7 "data/maps/PetalburgCity/scripts.pory"
.set LOCALID_SCOTT, 9
# 8 "data/maps/PetalburgCity/scripts.pory"

# 9 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 10 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 11 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 12 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 13 "data/maps/PetalburgCity/scripts.pory"

# 14 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 15 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 16 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
# 17 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 1, PetalburgCity_EventScript_SetAnthroLocation
# 18 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
# 19 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
# 20 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
# 21 "data/maps/PetalburgCity/scripts.pory"
	end
# 22 "data/maps/PetalburgCity/scripts.pory"

# 23 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetAnthroLocation::
# 24 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_Mundungus, 34, 11
# 25 "data/maps/PetalburgCity/scripts.pory"
	setobjectmovementtype LOCALID_Mundungus, MOVEMENT_TYPE_FACE_UP
# 26 "data/maps/PetalburgCity/scripts.pory"
	return
# 27 "data/maps/PetalburgCity/scripts.pory"

# 28 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 29 "data/maps/PetalburgCity/scripts.pory"
	return
# 30 "data/maps/PetalburgCity/scripts.pory"

# 31 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 32 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 33 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 34 "data/maps/PetalburgCity/scripts.pory"
	return
# 35 "data/maps/PetalburgCity/scripts.pory"

# 36 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 37 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 38 "data/maps/PetalburgCity/scripts.pory"
	return
# 39 "data/maps/PetalburgCity/scripts.pory"

# 40 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 41 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 1, PetalburgCity_EventScript_JSOFight
# 42 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
# 43 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
# 44 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 45 "data/maps/PetalburgCity/scripts.pory"

# 46 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 47 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 48 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 49 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 50 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 51 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 52 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 53 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 54 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 55 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 56 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 57 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 58 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 59 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 60 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 61 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 62 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 0
# 63 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 64 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 65 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 66 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 67 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 68 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 69 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 70 "data/maps/PetalburgCity/scripts.pory"
	end
# 71 "data/maps/PetalburgCity/scripts.pory"

# 72 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WalkToWallyHouse::
# 73 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 74 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 75 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_Mundungus, PetalburgCity_Movement_WalkToWallyHouseWallysDad
# 76 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
# 77 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 78 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8004, 7
# 79 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8005, 5
# 80 "data/maps/PetalburgCity/scripts.pory"
	opendoor VAR_0x8004, VAR_0x8005
# 81 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 82 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_Mundungus, PetalburgCity_Movement_WalkInsideHouseWallysDad
# 83 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
# 84 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 85 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
# 86 "data/maps/PetalburgCity/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
# 87 "data/maps/PetalburgCity/scripts.pory"
	closedoor VAR_0x8004, VAR_0x8005
# 88 "data/maps/PetalburgCity/scripts.pory"
	waitdooranim
# 89 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 90 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 91 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 92 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
# 93 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 94 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 95 "data/maps/PetalburgCity/scripts.pory"
	end
# 96 "data/maps/PetalburgCity/scripts.pory"

# 97 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 98 "data/maps/PetalburgCity/scripts.pory"
	lock
# 99 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 100 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 101 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 102 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_JSOGIRL, Common_Movement_FaceOriginalDirection
# 103 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 104 "data/maps/PetalburgCity/scripts.pory"
	release
# 105 "data/maps/PetalburgCity/scripts.pory"
	end
# 106 "data/maps/PetalburgCity/scripts.pory"

# 107 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 108 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 109 "data/maps/PetalburgCity/scripts.pory"
	end
# 110 "data/maps/PetalburgCity/scripts.pory"

# 111 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 112 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 113 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 114 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 115 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 116 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 117 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 118 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 119 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 120 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 121 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 126 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 127 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 129 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 130 "data/maps/PetalburgCity/scripts.pory"

# 131 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 134 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 135 "data/maps/PetalburgCity/scripts.pory"

# 136 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHouseWallysDad:
# 137 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 139 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 140 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 144 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 145 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 148 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 149 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 150 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 154 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 155 "data/maps/PetalburgCity/scripts.pory"

# 156 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 158 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 159 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 160 "data/maps/PetalburgCity/scripts.pory"

# 161 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 162 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 163 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 166 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 167 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 168 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 169 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 195 "data/maps/PetalburgCity/scripts.pory"

# 196 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 197 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 202 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 203 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 204 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 209 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 215 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 216 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 221 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 224 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 225 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 227 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 228 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 230 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 231 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 233 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 234 "data/maps/PetalburgCity/scripts.pory"

# 235 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 236 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 237 "data/maps/PetalburgCity/scripts.pory"
	end
# 238 "data/maps/PetalburgCity/scripts.pory"

# 239 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 240 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 241 "data/maps/PetalburgCity/scripts.pory"
	end
# 242 "data/maps/PetalburgCity/scripts.pory"

# 243 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 244 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 245 "data/maps/PetalburgCity/scripts.pory"
	end
# 246 "data/maps/PetalburgCity/scripts.pory"

# 247 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 248 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 249 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 250 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 251 "data/maps/PetalburgCity/scripts.pory"
	end
# 252 "data/maps/PetalburgCity/scripts.pory"

# 253 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 254 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 255 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 256 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 257 "data/maps/PetalburgCity/scripts.pory"
	end
# 258 "data/maps/PetalburgCity/scripts.pory"

# 259 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 260 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 261 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 262 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 263 "data/maps/PetalburgCity/scripts.pory"
	end
# 264 "data/maps/PetalburgCity/scripts.pory"

# 265 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 266 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 267 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 268 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 269 "data/maps/PetalburgCity/scripts.pory"
	end
# 270 "data/maps/PetalburgCity/scripts.pory"

# 271 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 272 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
# 273 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 274 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 275 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 276 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
# 277 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 278 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
# 279 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 280 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 281 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 282 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 283 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 284 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 285 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 286 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 287 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 288 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 289 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 290 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 291 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
# 292 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 293 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 294 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 295 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 296 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
# 297 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 298 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 299 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 300 "data/maps/PetalburgCity/scripts.pory"
	end
# 301 "data/maps/PetalburgCity/scripts.pory"

# 302 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 303 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
# 304 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 306 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 307 "data/maps/PetalburgCity/scripts.pory"
	return
# 308 "data/maps/PetalburgCity/scripts.pory"

# 309 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 310 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
# 311 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 312 "data/maps/PetalburgCity/scripts.pory"
	return
# 313 "data/maps/PetalburgCity/scripts.pory"

# 314 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 315 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
# 316 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 317 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 318 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 319 "data/maps/PetalburgCity/scripts.pory"
	return
# 320 "data/maps/PetalburgCity/scripts.pory"

# 321 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 322 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
# 323 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 324 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 325 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 326 "data/maps/PetalburgCity/scripts.pory"
	return
# 327 "data/maps/PetalburgCity/scripts.pory"

# 328 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 329 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
# 330 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 331 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 332 "data/maps/PetalburgCity/scripts.pory"
	return
# 333 "data/maps/PetalburgCity/scripts.pory"

# 334 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 335 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
# 336 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 337 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 338 "data/maps/PetalburgCity/scripts.pory"
	return
# 339 "data/maps/PetalburgCity/scripts.pory"

# 340 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 341 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
# 342 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 343 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 344 "data/maps/PetalburgCity/scripts.pory"
	return
# 345 "data/maps/PetalburgCity/scripts.pory"

# 346 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 347 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
# 348 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 349 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 350 "data/maps/PetalburgCity/scripts.pory"
	return
# 351 "data/maps/PetalburgCity/scripts.pory"

# 352 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 353 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 354 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 355 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 356 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 357 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 358 "data/maps/PetalburgCity/scripts.pory"

# 359 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 360 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 361 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 362 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 363 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 364 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 365 "data/maps/PetalburgCity/scripts.pory"

# 366 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 367 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 368 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 369 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 370 "data/maps/PetalburgCity/scripts.pory"

# 371 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 372 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 376 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 377 "data/maps/PetalburgCity/scripts.pory"

# 378 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 381 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 382 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 384 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 385 "data/maps/PetalburgCity/scripts.pory"

# 386 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 387 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 388 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 389 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 396 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 397 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 398 "data/maps/PetalburgCity/scripts.pory"

# 399 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 409 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 410 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 413 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 414 "data/maps/PetalburgCity/scripts.pory"

# 415 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 425 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 426 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 427 "data/maps/PetalburgCity/scripts.pory"

# 428 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 438 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 439 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 440 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 441 "data/maps/PetalburgCity/scripts.pory"

# 442 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 452 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 453 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 455 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 456 "data/maps/PetalburgCity/scripts.pory"

# 457 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 463 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 466 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 467 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 468 "data/maps/PetalburgCity/scripts.pory"

# 469 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 470 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 471 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 479 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 480 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 481 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 482 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 483 "data/maps/PetalburgCity/scripts.pory"

# 484 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 490 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 491 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 494 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 495 "data/maps/PetalburgCity/scripts.pory"

# 496 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 500 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 502 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 503 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 504 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 505 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 506 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 507 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 508 "data/maps/PetalburgCity/scripts.pory"

# 509 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 510 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 511 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 512 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 513 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 514 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 515 "data/maps/PetalburgCity/scripts.pory"
	end
# 516 "data/maps/PetalburgCity/scripts.pory"

# 517 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 518 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 519 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 520 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 521 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 522 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 523 "data/maps/PetalburgCity/scripts.pory"
	end
# 524 "data/maps/PetalburgCity/scripts.pory"

# 525 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 526 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 527 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 528 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 529 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 530 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 531 "data/maps/PetalburgCity/scripts.pory"
	end
# 532 "data/maps/PetalburgCity/scripts.pory"

# 533 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 534 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 535 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 536 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 537 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 538 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 539 "data/maps/PetalburgCity/scripts.pory"
	end
# 540 "data/maps/PetalburgCity/scripts.pory"

# 541 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 542 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 543 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 544 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 545 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 546 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 547 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 548 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 549 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 550 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 551 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 552 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 553 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 554 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 555 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 556 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 557 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 558 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 559 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 560 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 561 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 562 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 563 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 564 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 565 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 566 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 567 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 568 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 569 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 570 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 571 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 572 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 573 "data/maps/PetalburgCity/scripts.pory"
	end
# 574 "data/maps/PetalburgCity/scripts.pory"

# 575 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 576 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 577 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 578 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 579 "data/maps/PetalburgCity/scripts.pory"
	return
# 580 "data/maps/PetalburgCity/scripts.pory"

# 581 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 582 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 583 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 584 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 585 "data/maps/PetalburgCity/scripts.pory"
	return
# 586 "data/maps/PetalburgCity/scripts.pory"

# 587 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 588 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 589 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 590 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 591 "data/maps/PetalburgCity/scripts.pory"
	return
# 592 "data/maps/PetalburgCity/scripts.pory"

# 593 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 594 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 595 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 596 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 597 "data/maps/PetalburgCity/scripts.pory"
	return
# 598 "data/maps/PetalburgCity/scripts.pory"

# 599 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 600 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 601 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 602 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 603 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 604 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 605 "data/maps/PetalburgCity/scripts.pory"

# 606 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 607 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 608 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 609 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 610 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 611 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 612 "data/maps/PetalburgCity/scripts.pory"

# 613 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 614 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 616 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 617 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 618 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 619 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 620 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 621 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 622 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 623 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 624 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 625 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 626 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 627 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 628 "data/maps/PetalburgCity/scripts.pory"

# 629 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 630 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 631 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 632 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 633 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 634 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 635 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 636 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 637 "data/maps/PetalburgCity/scripts.pory"

# 638 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 639 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 640 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 641 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 642 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 643 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 644 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 645 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 646 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 647 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 648 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 649 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 650 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 651 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 652 "data/maps/PetalburgCity/scripts.pory"

# 653 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 654 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 655 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 656 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 657 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 658 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 659 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 660 "data/maps/PetalburgCity/scripts.pory"

# 661 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 662 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 663 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 664 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 665 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 666 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 668 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 669 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 670 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 671 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 672 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 673 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 674 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 675 "data/maps/PetalburgCity/scripts.pory"

# 676 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 677 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 678 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 679 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 680 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 681 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 682 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 683 "data/maps/PetalburgCity/scripts.pory"

# 684 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 685 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 686 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 687 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 688 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 689 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 690 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 691 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 692 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 694 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 695 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 696 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 697 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 698 "data/maps/PetalburgCity/scripts.pory"

# 699 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 700 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 701 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 702 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 703 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 704 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 705 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 706 "data/maps/PetalburgCity/scripts.pory"

# 707 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 708 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 709 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 710 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 711 "data/maps/PetalburgCity/scripts.pory"

# 712 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 713 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of GYM\n"
# 714 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 715 "data/maps/PetalburgCity/scripts.pory"

# 716 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 717 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is PETALBURG CITY's GYM.$"
# 718 "data/maps/PetalburgCity/scripts.pory"

# 719 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 720 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the GYM's sign. Look for it\n"
# 721 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a GYM.$"
# 722 "data/maps/PetalburgCity/scripts.pory"

# 723 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 724 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 726 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 727 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 728 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 729 "data/maps/PetalburgCity/scripts.pory"

# 730 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 731 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY POKéMON GYM\n"
# 732 "data/maps/PetalburgCity/scripts.pory"
	.string "LEADER: NORMAN\l"
# 733 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 734 "data/maps/PetalburgCity/scripts.pory"

# 735 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 736 "data/maps/PetalburgCity/scripts.pory"
	.string "PETALBURG CITY\n"
# 737 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 738 "data/maps/PetalburgCity/scripts.pory"

# 739 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "WALLY'S HOUSE$"
# 741 "data/maps/PetalburgCity/scripts.pory"

# 742 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 745 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a POKéMON TRAINER?$"
# 746 "data/maps/PetalburgCity/scripts.pory"

# 747 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 748 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 749 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 750 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 751 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie TRAINER,\n"
# 752 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 753 "data/maps/PetalburgCity/scripts.pory"

# 754 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 755 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 756 "data/maps/PetalburgCity/scripts.pory"
	.string "talented TRAINERS.\p"
# 757 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_EventScript_GrassSign::
# 760 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 761 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_GrassSign_Text_0
# 762 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	return


PetalburgCity_EventScript_JSOBoy::
# 767 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PetalburgCity_EventScript_JSOBoy_1
	return

PetalburgCity_EventScript_JSOBoy_1:
# 768 "data/maps/PetalburgCity/scripts.pory"
	lock
# 769 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 770 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_JSOBoy_Text_0
# 771 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgCity_EventScript_JSOGirl::
# 776 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PetalburgCity_EventScript_JSOGirl_1
	return

PetalburgCity_EventScript_JSOGirl_1:
# 777 "data/maps/PetalburgCity/scripts.pory"
	lock
# 778 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 779 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_JSOGirl_Text_0
# 780 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgCity_EventScript_Gentleman::
# 785 "data/maps/PetalburgCity/scripts.pory"
	lock
# 786 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 787 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_Gentleman_Text_0
# 788 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgCity_EventScript_GymBoy::
# 792 "data/maps/PetalburgCity/scripts.pory"
	lock
# 793 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 794 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_GymBoy_Text_0
# 795 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgCity_EventScript_Woman::
# 799 "data/maps/PetalburgCity/scripts.pory"
	lock
# 800 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 801 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_Woman_Text_0
# 802 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgCity_EventScript_Boy2::
# 806 "data/maps/PetalburgCity/scripts.pory"
	lock
# 807 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 808 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_Boy2_Text_0
# 809 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgCity_EventScript_Man::
# 813 "data/maps/PetalburgCity/scripts.pory"
	lock
# 814 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 815 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_Man_Text_0
# 816 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgCity_EventScript_LittleGirl::
# 820 "data/maps/PetalburgCity/scripts.pory"
	lock
# 821 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 822 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_LittleGirl_Text_0
# 823 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 824 "data/maps/PetalburgCity/scripts.pory"
	applymovement 10, Common_Movement_FaceOriginalDirection
# 825 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 826 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgCity_EventScript_ScytherTrainer::
# 830 "data/maps/PetalburgCity/scripts.pory"
	lock
# 831 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 832 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_ScytherTrainer_Text_0
# 833 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 834 "data/maps/PetalburgCity/scripts.pory"
	applymovement 12, Common_Movement_FaceOriginalDirection
# 835 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 836 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgCity_EventScript_Scyther::
# 840 "data/maps/PetalburgCity/scripts.pory"
	lock
# 841 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 842 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
# 843 "data/maps/PetalburgCity/scripts.pory"
	waitmoncry
# 844 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_Scyther_Text_0
# 845 "data/maps/PetalburgCity/scripts.pory"
	applymovement 13, Common_Movement_FaceOriginalDirection
# 846 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 847 "data/maps/PetalburgCity/scripts.pory"
	release
	end


PetalburgCity_EventScript_Oddish::
# 852 "data/maps/PetalburgCity/scripts.pory"
	lock
# 853 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 854 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_ODDISH, CRY_MODE_NORMAL
# 855 "data/maps/PetalburgCity/scripts.pory"
	waitmoncry
# 856 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_Oddish_Text_0
# 857 "data/maps/PetalburgCity/scripts.pory"
	applymovement 13, Common_Movement_FaceOriginalDirection
# 858 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 859 "data/maps/PetalburgCity/scripts.pory"
	release
	end


PetalburgCity_EventScript_Budew::
# 864 "data/maps/PetalburgCity/scripts.pory"
	lock
# 865 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 866 "data/maps/PetalburgCity/scripts.pory"
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
# 867 "data/maps/PetalburgCity/scripts.pory"
	waitmoncry
# 868 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_Budew_Text_0
# 869 "data/maps/PetalburgCity/scripts.pory"
	applymovement 13, Common_Movement_FaceOriginalDirection
# 870 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 871 "data/maps/PetalburgCity/scripts.pory"
	release
	end


PetalburgCity_EventScript_JSOBoyBlock1::
# 876 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PetalburgCity_EventScript_JSOBoyBlock1_1
	return

PetalburgCity_EventScript_JSOBoyBlock1_1:
# 877 "data/maps/PetalburgCity/scripts.pory"
	lock
# 878 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 879 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_JSOBoyBlock1_Text_0
# 880 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 881 "data/maps/PetalburgCity/scripts.pory"
	applymovement 6, Common_Movement_FaceOriginalDirection
# 882 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 883 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgCity_EventScript_JSOBoyBlock2::
# 888 "data/maps/PetalburgCity/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PetalburgCity_EventScript_JSOBoyBlock2_1
	return

PetalburgCity_EventScript_JSOBoyBlock2_1:
# 889 "data/maps/PetalburgCity/scripts.pory"
	lock
# 890 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 891 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_JSOBoyBlock2_Text_0
# 892 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 893 "data/maps/PetalburgCity/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 894 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 895 "data/maps/PetalburgCity/scripts.pory"
	release
	return


PetalburgCity_EventScript_JSOFight::
# 900 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 901 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 902 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 903 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookRight
# 904 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 905 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 906 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 907 "data/maps/PetalburgCity/scripts.pory"
	special SpawnCameraObject
# 908 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraRightSeven
# 909 "data/maps/PetalburgCity/scripts.pory"
	delay 15
# 910 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 911 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_Mundungus, WalkInPlaceUp
# 912 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 913 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_JSOFight_Text_0
# 914 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_JSOGIRL, WalkInPlaceDown
# 915 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 916 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_JSOFight_Text_1
# 917 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_Mundungus, Common_Movement_FaceLeft
# 918 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 919 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_Mundungus, Common_Movement_ExclamationMark
# 920 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 921 "data/maps/PetalburgCity/scripts.pory"
	delay 15
# 922 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_JSOFight_Text_2
# 923 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 924 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraLeftSeven
# 925 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 926 "data/maps/PetalburgCity/scripts.pory"
	special RemoveCameraObject
# 927 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkToDung
# 928 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 929 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_JSOFight_Text_3
# 930 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
# 931 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 932 "data/maps/PetalburgCity/scripts.pory"
	delay 60
# 933 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_no_intro_no_whiteout TRAINER_GRUNT_SEAFLOOR_CAVERN_1, Jeremy_Outro
# 934 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 935 "data/maps/PetalburgCity/scripts.pory"
	delay 15
# 936 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_Mundungus, Common_Movement_FaceUp
# 937 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_JSOGIRL, Common_Movement_FaceLeft
# 938 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_JSOBOY, WalkInPlaceRight
# 939 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_JSOFight_Text_4
# 940 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 941 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_JSOGIRL, Common_Movement_FaceDown
# 942 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_JSOBOY, Common_Movement_FaceDown
# 943 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 944 "data/maps/PetalburgCity/scripts.pory"
	delay 15
# 945 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_JSOBOY, Common_Movement_WalkInPlaceFasterDown
# 946 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 947 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_JSOFight_Text_5
# 948 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 949 "data/maps/PetalburgCity/scripts.pory"
	delay 15
# 950 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 951 "data/maps/PetalburgCity/scripts.pory"
	removeobject 3
# 952 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 953 "data/maps/PetalburgCity/scripts.pory"
	removeobject 4
# 954 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 955 "data/maps/PetalburgCity/scripts.pory"
	removeobject 6
# 956 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 957 "data/maps/PetalburgCity/scripts.pory"
	removeobject 7
# 958 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 959 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_UNUSED_0x02A
# 960 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 961 "data/maps/PetalburgCity/scripts.pory"
	playse SE_EXIT
# 962 "data/maps/PetalburgCity/scripts.pory"
	delay 60
# 963 "data/maps/PetalburgCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 964 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookRight
# 965 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_Mundungus, Common_Movement_FaceLeft
# 966 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 967 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_Mundungus, WalkInPlaceLeft
# 968 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_JSOFight_Text_6
# 969 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_Mundungus, LookDown
# 970 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 971 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_JSOFight_Text_7
# 972 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_Mundungus, Common_Movement_FaceLeft
# 973 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_JSOFight_Text_8
# 974 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_Mundungus, WalkUpTwo
# 975 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 976 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_Mundungus, 0, 20
# 977 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_Mundungus
# 978 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerUpTwo
# 979 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 980 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_MUNDUNGUS_HOUSE, 9, 8
# 981 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end


PetalburgCity_EventScript_JSOBoyFight::
# 986 "data/maps/PetalburgCity/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, Jeremy_Intro, Jeremy_Outro, PetalburgCity_EventScript_JSOLeave
# 987 "data/maps/PetalburgCity/scripts.pory"
	msgbox PostBattle_Jeremy, MSGBOX_AUTOCLOSE
# 988 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
	end


PetalburgCity_EventScript_JSOLeave::
	return


# 1005 "data/maps/PetalburgCity/scripts.pory"
WalkToDung:
# 1006 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1006 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 1007 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1007 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1007 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1007 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1007 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1007 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1007 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1007 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1007 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1008 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 1009 "data/maps/PetalburgCity/scripts.pory"
	face_right
	step_end

# 1012 "data/maps/PetalburgCity/scripts.pory"
LookUp:
# 1013 "data/maps/PetalburgCity/scripts.pory"
	face_up
	step_end

# 1016 "data/maps/PetalburgCity/scripts.pory"
LookDown:
# 1017 "data/maps/PetalburgCity/scripts.pory"
	face_down
	step_end

# 1020 "data/maps/PetalburgCity/scripts.pory"
WalkInPlaceUp:
# 1021 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_up
	step_end

# 1024 "data/maps/PetalburgCity/scripts.pory"
WalkInPlaceDown:
# 1025 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_down
	step_end

# 1028 "data/maps/PetalburgCity/scripts.pory"
WalkInPlaceRight:
# 1029 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_right
	step_end

# 1032 "data/maps/PetalburgCity/scripts.pory"
WalkInPlaceLeft:
# 1033 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_left
	step_end

# 1036 "data/maps/PetalburgCity/scripts.pory"
WalkUp:
# 1037 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 1040 "data/maps/PetalburgCity/scripts.pory"
PlayerUpTwo:
# 1041 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 1042 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 1042 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

# 1045 "data/maps/PetalburgCity/scripts.pory"
CameraRightSeven:
# 1046 "data/maps/PetalburgCity/scripts.pory"
	walk_diag_southeast
# 1046 "data/maps/PetalburgCity/scripts.pory"
	walk_diag_southeast
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
# 1047 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_right
	step_end

# 1050 "data/maps/PetalburgCity/scripts.pory"
CameraLeftSeven:
# 1051 "data/maps/PetalburgCity/scripts.pory"
	walk_diag_northwest
# 1051 "data/maps/PetalburgCity/scripts.pory"
	walk_diag_northwest
# 1052 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_left
# 1052 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_left
# 1052 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_left
# 1052 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_left
# 1052 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_left
# 1052 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_left
# 1052 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_left
# 1052 "data/maps/PetalburgCity/scripts.pory"
	walk_fast_left
	step_end

# 1055 "data/maps/PetalburgCity/scripts.pory"
WalkUpTwo:
# 1056 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 1056 "data/maps/PetalburgCity/scripts.pory"
	walk_up
	step_end

PetalburgCity_EventScript_GrassSign_Text_0:
# 761 "data/maps/PetalburgCity/scripts.pory"
	.string "These trees are the last remnants of\n"
	.string "the natural landscape in Treefall City.\p"
	.string "Please treat them with respect.$"

PetalburgCity_EventScript_JSOBoy_Text_0:
# 770 "data/maps/PetalburgCity/scripts.pory"
	.string "Have you seen Mundungus? We found his\n"
	.string "house, and we'd like a word.$"

PetalburgCity_EventScript_JSOGirl_Text_0:
# 779 "data/maps/PetalburgCity/scripts.pory"
	.string "Anthrotech is ruining Ecodia! We won't\n"
	.string "stand for it!$"

PetalburgCity_EventScript_Gentleman_Text_0:
# 787 "data/maps/PetalburgCity/scripts.pory"
	.string "I remember when Treefall City was just\n"
	.string "a small town. Thanks to the lumber\l"
	.string "industry, we quickly grew.\p"
	.string "Much of Ecodia was built with trees we\n"
	.string "exported.$"

PetalburgCity_EventScript_GymBoy_Text_0:
# 794 "data/maps/PetalburgCity/scripts.pory"
	.string "Apparently Treefall City is going to\n"
	.string "start planting trees, instead of\l"
	.string "cutting them down.\p"
	.string "Maybe we should be called Treeplant\n"
	.string "City!$"

PetalburgCity_EventScript_Woman_Text_0:
# 801 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm all for nature and everything, but\n"
	.string "won't our local economy be impacted by\l"
	.string "halting lumber exports?\p"
	.string "Doesn't anyone care about us?$"

PetalburgCity_EventScript_Boy2_Text_0:
# 808 "data/maps/PetalburgCity/scripts.pory"
	.string "I've practiced cutting down trees my\n"
	.string "whole life.\p"
	.string "It's all been a waste!$"

PetalburgCity_EventScript_Man_Text_0:
# 815 "data/maps/PetalburgCity/scripts.pory"
	.string "It's nice to feel important. I'm glad\n"
	.string "Treefall City has such a strong\l"
	.string "Anthrotech presence!$"

PetalburgCity_EventScript_LittleGirl_Text_0:
# 822 "data/maps/PetalburgCity/scripts.pory"
	.string "I love seeing the little Grass Pokémon\n"
	.string "running around behind the fence!\p"
	.string "I wish there were more...$"

PetalburgCity_EventScript_ScytherTrainer_Text_0:
# 832 "data/maps/PetalburgCity/scripts.pory"
	.string "My Scyther helped produce great\n"
	.string "quantities of lumber, thanks in part to\l"
	.string "the Cut HM!\p"
	.string "I know Anthrotech has a tool that\n"
	.string "allows any Pokémon to use any HM, but it\l"
	.string "just seemed right to teach Scyther Cut.\p"
	.string "I got the HM from someone in town!$"

PetalburgCity_EventScript_Scyther_Text_0:
# 844 "data/maps/PetalburgCity/scripts.pory"
	.string "The Scyther looks anxious!$"

PetalburgCity_EventScript_Oddish_Text_0:
# 856 "data/maps/PetalburgCity/scripts.pory"
	.string "Oddish wants to play!$"

PetalburgCity_EventScript_Budew_Text_0:
# 868 "data/maps/PetalburgCity/scripts.pory"
	.string "Budew seems content.$"

PetalburgCity_EventScript_JSOBoyBlock1_Text_0:
# 879 "data/maps/PetalburgCity/scripts.pory"
	.string "We aren't leaving until we speak with\n"
	.string "Mundungus.$"

PetalburgCity_EventScript_JSOBoyBlock2_Text_0:
# 891 "data/maps/PetalburgCity/scripts.pory"
	.string "Anthrotech is the cause of everything\n"
	.string "that is wrong in Ecodia.$"

PetalburgCity_EventScript_JSOFight_Text_0:
# 913 "data/maps/PetalburgCity/scripts.pory"
	.string "Mundungus: You can't stop me from\n"
	.string "entering my own home!$"

PetalburgCity_EventScript_JSOFight_Text_1:
# 916 "data/maps/PetalburgCity/scripts.pory"
	.string "???: And you can't expect to restore\n"
	.string "Treefall Woods by planting the same\l"
	.string "trees over and over!\p"
	.string "When will you realize what you are truly\n"
	.string "doing to Ecodia?$"

PetalburgCity_EventScript_JSOFight_Text_2:
# 922 "data/maps/PetalburgCity/scripts.pory"
	.string "Mundungus: Oh, {PLAYER}! Will you\n"
	.string "come give me a hand?$"

PetalburgCity_EventScript_JSOFight_Text_3:
# 929 "data/maps/PetalburgCity/scripts.pory"
	.string "Mundungus: If you earned an Axe Badge,\n"
	.string "then I'm certain you can defeat these\l"
	.string "rapscallions and let me back in my home!$"

PetalburgCity_EventScript_JSOFight_Text_4:
# 939 "data/maps/PetalburgCity/scripts.pory"
	.string "I suppose not battling all-out is one\n"
	.string "of the principles of non-violent\l"
	.string "resistance.\p"
	.string "We'd better get out of here before\n"
	.string "anything worse happens.$"

PetalburgCity_EventScript_JSOFight_Text_5:
# 947 "data/maps/PetalburgCity/scripts.pory"
	.string "We'll be seeing you again, {PLAYER}.$"

PetalburgCity_EventScript_JSOFight_Text_6:
# 968 "data/maps/PetalburgCity/scripts.pory"
	.string "Mundungus: Thank you, {PLAYER}.\p"
	.string "I am still not quite sure who those\n"
	.string "people dressed in orange are, but they\l"
	.string "were quite the nuisance. I haven't the\l"
	.string "faintest clue what they were talking\l"
	.string "about, Anthrotech is dedicated to\l"
	.string "improving the lives of everyone in\l"
	.string "Ecodia!$"

PetalburgCity_EventScript_JSOFight_Text_7:
# 971 "data/maps/PetalburgCity/scripts.pory"
	.string "Mundungus: There are some who wish to\n"
	.string "get in our way, in the way of progress. I\l"
	.string "do not understand their motives.$"

PetalburgCity_EventScript_JSOFight_Text_8:
# 973 "data/maps/PetalburgCity/scripts.pory"
	.string "Mundungus: Anyhow, that roadblock\n"
	.string "appears to be in the past. Why don't you\l"
	.string "come inside, I have something to give\l"
	.string "you.$"

Jeremy_Intro::
# 992 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, here we go!$"

Jeremy_Outro::
# 995 "data/maps/PetalburgCity/scripts.pory"
	.string "...$"

PostBattle_Jeremy::
# 998 "data/maps/PetalburgCity/scripts.pory"
	.string "...$"
