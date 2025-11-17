# 1 "data/maps/MeltingSnowForest/scripts.pory"

# 2 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_MapScripts::
# 3 "data/maps/MeltingSnowForest/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, MeltingSnowForest_OnTransition
# 4 "data/maps/MeltingSnowForest/scripts.pory"
    .byte 0
# 5 "data/maps/MeltingSnowForest/scripts.pory"

# 6 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_OnTransition:
# 7 "data/maps/MeltingSnowForest/scripts.pory"
    call_if_set FLAG_HEAT_CUTSCENE, MeltingSnowForest_EventScript_HeatCutsceneDone
# 8 "data/maps/MeltingSnowForest/scripts.pory"
    end

MeltingSnowForest_EventScript_EnterTop::
# 12 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_ABSOL_ENTER, MeltingSnowForest_EventScript_EnterTop_2
MeltingSnowForest_EventScript_EnterTop_1:
# 57 "data/maps/MeltingSnowForest/scripts.pory"
	release
	return

MeltingSnowForest_EventScript_EnterTop_2:
# 13 "data/maps/MeltingSnowForest/scripts.pory"
	lockall
# 14 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, AbsolRightTop
# 15 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 16 "data/maps/MeltingSnowForest/scripts.pory"
	delay 120
# 17 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_ABSOL, CRY_MODE_NORMAL
# 18 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 19 "data/maps/MeltingSnowForest/scripts.pory"
	delay 60
# 20 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 21 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 22 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 23 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, Common_Movement_Shove
# 24 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 25 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 26 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 27 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, AbsolJump
# 28 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 29 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 30 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 31 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 32 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 33 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 34 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_EnterTop_Text_0
# 35 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 36 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 37 "data/maps/MeltingSnowForest/scripts.pory"
	givemon SPECIES_ABSOL, 35, 0, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 0, 0, 0, 0, 0, 0, 15, 15, 15, 15, 15, 15, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER, MOVE_SUBSTITUTE
# 38 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, AbsolJump
# 39 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 40 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 41 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 42 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 43 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 44 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 45 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 46 "data/maps/MeltingSnowForest/scripts.pory"
	delay 10
# 47 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 1
# 48 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 49 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BALL
# 50 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 51 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_ABSOL_ENTER
# 52 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 53 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 54 "data/maps/MeltingSnowForest/scripts.pory"
	setvar VAR_RANCH_MORALITY_SYSTEM, 10
# 55 "data/maps/MeltingSnowForest/scripts.pory"
	callnative UpdateFollowingPokemon
	goto MeltingSnowForest_EventScript_EnterTop_1


MeltingSnowForest_EventScript_EnterTopMid::
# 61 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_ABSOL_ENTER, MeltingSnowForest_EventScript_EnterTopMid_2
MeltingSnowForest_EventScript_EnterTopMid_1:
# 106 "data/maps/MeltingSnowForest/scripts.pory"
	release
	return

MeltingSnowForest_EventScript_EnterTopMid_2:
# 62 "data/maps/MeltingSnowForest/scripts.pory"
	lockall
# 63 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, AbsolRightTopMid
# 64 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 65 "data/maps/MeltingSnowForest/scripts.pory"
	delay 120
# 66 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_ABSOL, CRY_MODE_NORMAL
# 67 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 68 "data/maps/MeltingSnowForest/scripts.pory"
	delay 60
# 69 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 70 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 71 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 72 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, Common_Movement_Shove
# 73 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 74 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 75 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 76 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, AbsolJump
# 77 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 78 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 79 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 80 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 81 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 82 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 83 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_EnterTop_Text_0
# 84 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 85 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 86 "data/maps/MeltingSnowForest/scripts.pory"
	givemon SPECIES_ABSOL, 35, 0, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 0, 0, 0, 0, 0, 0, 15, 15, 15, 15, 15, 15, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER, MOVE_SUBSTITUTE
# 87 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, AbsolJump
# 88 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 89 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 90 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 91 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 92 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 93 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 94 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 95 "data/maps/MeltingSnowForest/scripts.pory"
	delay 10
# 96 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 1
# 97 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 98 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BALL
# 99 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 100 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_ABSOL_ENTER
# 101 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 102 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 103 "data/maps/MeltingSnowForest/scripts.pory"
	setvar VAR_RANCH_MORALITY_SYSTEM, 10
# 104 "data/maps/MeltingSnowForest/scripts.pory"
	callnative UpdateFollowingPokemon
	goto MeltingSnowForest_EventScript_EnterTopMid_1


MeltingSnowForest_EventScript_EnterBottomMid::
# 110 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_ABSOL_ENTER, MeltingSnowForest_EventScript_EnterBottomMid_2
MeltingSnowForest_EventScript_EnterBottomMid_1:
# 155 "data/maps/MeltingSnowForest/scripts.pory"
	release
	return

MeltingSnowForest_EventScript_EnterBottomMid_2:
# 111 "data/maps/MeltingSnowForest/scripts.pory"
	lockall
# 112 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, AbsolRightBottomMid
# 113 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 114 "data/maps/MeltingSnowForest/scripts.pory"
	delay 120
# 115 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_ABSOL, CRY_MODE_NORMAL
# 116 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 117 "data/maps/MeltingSnowForest/scripts.pory"
	delay 60
# 118 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 119 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 120 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 121 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, Common_Movement_Shove
# 122 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 123 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 124 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 125 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, AbsolJump
# 126 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 127 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 128 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 129 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 130 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 131 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 132 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_EnterTop_Text_0
# 133 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 134 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 135 "data/maps/MeltingSnowForest/scripts.pory"
	givemon SPECIES_ABSOL, 35, 0, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 0, 0, 0, 0, 0, 0, 15, 15, 15, 15, 15, 15, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER, MOVE_SUBSTITUTE
# 136 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, AbsolJump
# 137 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 138 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 139 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 140 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 141 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 142 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 143 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 144 "data/maps/MeltingSnowForest/scripts.pory"
	delay 10
# 145 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 1
# 146 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 147 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BALL
# 148 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 149 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_ABSOL_ENTER
# 150 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 151 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 152 "data/maps/MeltingSnowForest/scripts.pory"
	setvar VAR_RANCH_MORALITY_SYSTEM, 10
# 153 "data/maps/MeltingSnowForest/scripts.pory"
	callnative UpdateFollowingPokemon
	goto MeltingSnowForest_EventScript_EnterBottomMid_1


MeltingSnowForest_EventScript_EnterBottom::
# 159 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_ABSOL_ENTER, MeltingSnowForest_EventScript_EnterBottom_2
MeltingSnowForest_EventScript_EnterBottom_1:
# 204 "data/maps/MeltingSnowForest/scripts.pory"
	release
	return

MeltingSnowForest_EventScript_EnterBottom_2:
# 160 "data/maps/MeltingSnowForest/scripts.pory"
	lockall
# 161 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, AbsolRightBottom
# 162 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 163 "data/maps/MeltingSnowForest/scripts.pory"
	delay 120
# 164 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_ABSOL, CRY_MODE_NORMAL
# 165 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 166 "data/maps/MeltingSnowForest/scripts.pory"
	delay 60
# 167 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 168 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 169 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 170 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, Common_Movement_Shove
# 171 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 172 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 173 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 174 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, AbsolJump
# 175 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 176 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 177 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 178 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 179 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 180 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 181 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_EnterTop_Text_0
# 182 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 183 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 184 "data/maps/MeltingSnowForest/scripts.pory"
	givemon SPECIES_ABSOL, 35, 0, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 0, 0, 0, 0, 0, 0, 15, 15, 15, 15, 15, 15, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER, MOVE_SUBSTITUTE
# 185 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, AbsolJump
# 186 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 187 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 188 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 189 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 190 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 191 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 192 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 193 "data/maps/MeltingSnowForest/scripts.pory"
	delay 10
# 194 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 1
# 195 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 196 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BALL
# 197 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 198 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_ABSOL_ENTER
# 199 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 200 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 201 "data/maps/MeltingSnowForest/scripts.pory"
	setvar VAR_RANCH_MORALITY_SYSTEM, 10
# 202 "data/maps/MeltingSnowForest/scripts.pory"
	callnative UpdateFollowingPokemon
	goto MeltingSnowForest_EventScript_EnterBottom_1


MeltingSnowForest_EventScript_Sawsbuck::
# 208 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 209 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 210 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 211 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, Common_Movement_FacePlayer
# 212 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 213 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SAWSBUCK_WINTER, CRY_MODE_ENCOUNTER
# 214 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 215 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 216 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, Common_Movement_ShoveDown
# 217 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 218 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 219 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 220 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_0
# 221 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_UNUSED_0x8F7
# 222 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_UNUSED_0x8F8
# 223 "data/maps/MeltingSnowForest/scripts.pory"
	setwildbattle SPECIES_SAWSBUCK_WINTER, 32, ITEM_NONE, SPECIES_SNEASEL, 29, ITEM_NONE
# 224 "data/maps/MeltingSnowForest/scripts.pory"
	dowildbattle
# 225 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 226 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 227 "data/maps/MeltingSnowForest/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 228 "data/maps/MeltingSnowForest/scripts.pory"
	callnative UpdateFollowingPokemon
# 229 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 230 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, Common_Movement_FaceRight
# 231 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, Common_Movement_FaceUp
# 232 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 233 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 234 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, Common_Movement_ShoveRight
# 235 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, Common_Movement_ShoveUp
# 236 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BITE
# 237 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 238 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 239 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, SneaselExitLeft
# 240 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 241 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, MeltingSnowForest_EventScript_Sawsbuck_Movement_0
# 242 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, SawsbuckExitLeft
# 243 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 244 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_EXIT
# 245 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 246 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 247 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, MeltingSnowForest_EventScript_Sawsbuck_Movement_1
# 248 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 249 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 250 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 251 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_PARASECT, CRY_MODE_NORMAL
# 252 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 253 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_1
# 254 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 255 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, Common_Movement_ShoveLeft
# 256 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 257 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 258 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 259 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_2
# 260 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 261 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 262 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, Common_Movement_WalkLeft
# 263 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 264 "data/maps/MeltingSnowForest/scripts.pory"
	givemon SPECIES_PARASECT, 35, 0, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_SPORE, MOVE_AROMATHERAPY, MOVE_LEECH_SEED, MOVE_REFLECT
# 265 "data/maps/MeltingSnowForest/scripts.pory"
	delay 10
# 266 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 20
# 267 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 21
# 268 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 22
# 269 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 270 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BALL
# 271 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 272 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_PARASECT_DOUBLE_BATTLE
# 273 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_Sawsbuck_4
MeltingSnowForest_EventScript_Sawsbuck_1:
# 276 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 277 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_Sawsbuck_2:
# 274 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_CLEAR_STANTLERS
	goto MeltingSnowForest_EventScript_Sawsbuck_1

MeltingSnowForest_EventScript_Sawsbuck_3:
# 273 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_Sawsbuck_8
	goto MeltingSnowForest_EventScript_Sawsbuck_1

MeltingSnowForest_EventScript_Sawsbuck_4:
# 273 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_Sawsbuck_3
	goto MeltingSnowForest_EventScript_Sawsbuck_1

MeltingSnowForest_EventScript_Sawsbuck_7:
# 273 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_Sawsbuck_11
	goto MeltingSnowForest_EventScript_Sawsbuck_1

MeltingSnowForest_EventScript_Sawsbuck_8:
# 273 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_Sawsbuck_7
	goto MeltingSnowForest_EventScript_Sawsbuck_1

MeltingSnowForest_EventScript_Sawsbuck_11:
# 273 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_Sawsbuck_2
	goto MeltingSnowForest_EventScript_Sawsbuck_1


MeltingSnowForest_EventScript_Sneasel::
# 282 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 283 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 284 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 285 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, Common_Movement_FaceDown
# 286 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 287 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SNEASEL, CRY_MODE_ENCOUNTER
# 288 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 289 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 290 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 291 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq MeltingSnowForest_EventScript_Sneasel_2
MeltingSnowForest_EventScript_Sneasel_1:
# 294 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq MeltingSnowForest_EventScript_Sneasel_5
MeltingSnowForest_EventScript_Sneasel_4:
# 297 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 298 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 299 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 300 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_0
# 301 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_UNUSED_0x8F7
# 302 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_UNUSED_0x8F8
# 303 "data/maps/MeltingSnowForest/scripts.pory"
	setwildbattle SPECIES_SAWSBUCK_WINTER, 32, ITEM_NONE, SPECIES_SNEASEL, 29, ITEM_NONE
# 304 "data/maps/MeltingSnowForest/scripts.pory"
	dowildbattle
# 305 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 306 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 307 "data/maps/MeltingSnowForest/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 308 "data/maps/MeltingSnowForest/scripts.pory"
	callnative UpdateFollowingPokemon
# 309 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 310 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, Common_Movement_FaceRight
# 311 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, Common_Movement_FaceUp
# 312 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 313 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 314 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, Common_Movement_ShoveRight
# 315 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, Common_Movement_ShoveUp
# 316 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BITE
# 317 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 318 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 319 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 320 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq MeltingSnowForest_EventScript_Sneasel_8
MeltingSnowForest_EventScript_Sneasel_7:
# 346 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq MeltingSnowForest_EventScript_Sneasel_11
MeltingSnowForest_EventScript_Sneasel_10:
# 372 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 373 "data/maps/MeltingSnowForest/scripts.pory"
	givemon SPECIES_PARASECT, 35, 0, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_SPORE, MOVE_AROMATHERAPY, MOVE_LEECH_SEED, MOVE_REFLECT
# 374 "data/maps/MeltingSnowForest/scripts.pory"
	delay 10
# 375 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 20
# 376 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 21
# 377 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 22
# 378 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 379 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BALL
# 380 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 381 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_PARASECT_DOUBLE_BATTLE
# 382 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_Sneasel_16
MeltingSnowForest_EventScript_Sneasel_13:
# 385 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 386 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_Sneasel_2:
# 292 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, Common_Movement_ShoveDown
	goto MeltingSnowForest_EventScript_Sneasel_1

MeltingSnowForest_EventScript_Sneasel_5:
# 295 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, Common_Movement_ShoveLeft
	goto MeltingSnowForest_EventScript_Sneasel_4

MeltingSnowForest_EventScript_Sneasel_8:
# 321 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, SneaselExitRight
# 322 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 323 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 324 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, SawsbuckExitRight
# 325 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 326 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_EXIT
# 327 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 328 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 329 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, MeltingSnowForest_EventScript_Sneasel_Movement_0
# 330 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 331 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 332 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 333 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_PARASECT, CRY_MODE_NORMAL
# 334 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 335 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_1
# 336 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 337 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, Common_Movement_ShoveDown
# 338 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 339 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 340 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 341 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_2
# 342 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 343 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 344 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, Common_Movement_WalkDown
	goto MeltingSnowForest_EventScript_Sneasel_7

MeltingSnowForest_EventScript_Sneasel_11:
# 347 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, SneaselExitLeft
# 348 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 349 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, MeltingSnowForest_EventScript_Sawsbuck_Movement_0
# 350 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, SawsbuckExitLeft
# 351 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 352 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_EXIT
# 353 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 354 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 355 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, MeltingSnowForest_EventScript_Sawsbuck_Movement_1
# 356 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 357 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 358 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 359 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_PARASECT, CRY_MODE_NORMAL
# 360 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 361 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_1
# 362 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 363 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, Common_Movement_ShoveLeft
# 364 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 365 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 366 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 367 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_2
# 368 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 369 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 370 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, Common_Movement_WalkLeft
	goto MeltingSnowForest_EventScript_Sneasel_10

MeltingSnowForest_EventScript_Sneasel_14:
# 383 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_CLEAR_STANTLERS
	goto MeltingSnowForest_EventScript_Sneasel_13

MeltingSnowForest_EventScript_Sneasel_15:
# 382 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_Sneasel_20
	goto MeltingSnowForest_EventScript_Sneasel_13

MeltingSnowForest_EventScript_Sneasel_16:
# 382 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_Sneasel_15
	goto MeltingSnowForest_EventScript_Sneasel_13

MeltingSnowForest_EventScript_Sneasel_19:
# 382 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_Sneasel_23
	goto MeltingSnowForest_EventScript_Sneasel_13

MeltingSnowForest_EventScript_Sneasel_20:
# 382 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_Sneasel_19
	goto MeltingSnowForest_EventScript_Sneasel_13

MeltingSnowForest_EventScript_Sneasel_23:
# 382 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_Sneasel_14
	goto MeltingSnowForest_EventScript_Sneasel_13


# 392 "data/maps/MeltingSnowForest/scripts.pory"
SneaselExitLeft:
# 393 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 393 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 394 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 394 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 395 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 396 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 396 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 396 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 396 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 396 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 396 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 396 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 396 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 399 "data/maps/MeltingSnowForest/scripts.pory"
SawsbuckExitLeft:
# 400 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 401 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 401 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 401 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 402 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 402 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 403 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 404 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 404 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 404 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 404 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 404 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 404 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 404 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 404 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 407 "data/maps/MeltingSnowForest/scripts.pory"
SneaselExitRight:
# 408 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 409 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 409 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 409 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 410 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 410 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 410 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 410 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 410 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 410 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 410 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 410 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 410 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 410 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 413 "data/maps/MeltingSnowForest/scripts.pory"
SawsbuckExitRight:
# 414 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 414 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 414 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 414 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 415 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 415 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 415 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 415 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 415 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 415 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 415 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 415 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 415 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 415 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 418 "data/maps/MeltingSnowForest/scripts.pory"
AbsolRightTop:
# 419 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 419 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 419 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 419 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 420 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 421 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 421 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 421 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 424 "data/maps/MeltingSnowForest/scripts.pory"
AbsolRightTopMid:
# 425 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 425 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 425 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 425 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 425 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 425 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 425 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 428 "data/maps/MeltingSnowForest/scripts.pory"
AbsolRightBottomMid:
# 429 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 429 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 429 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 429 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 430 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 431 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 431 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 431 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 434 "data/maps/MeltingSnowForest/scripts.pory"
AbsolRightBottom:
# 435 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 435 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 435 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 435 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 436 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 436 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 437 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 437 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 437 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

MeltingSnowForest_EventScript_Camper1::
# 441 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 442 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_Camper1_2
MeltingSnowForest_EventScript_Camper1_1:
# 445 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_Camper1_5
MeltingSnowForest_EventScript_Camper1_4:
# 448 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 449 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 24, Common_Movement_FaceOriginalDirection
# 450 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 451 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_Camper1_2:
# 443 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Camper1_Text_0
	goto MeltingSnowForest_EventScript_Camper1_1

MeltingSnowForest_EventScript_Camper1_5:
# 446 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Camper1_Text_1
	goto MeltingSnowForest_EventScript_Camper1_4


MeltingSnowForest_EventScript_StantlerHiker::
# 456 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 457 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_StantlerHiker_Text_0
# 458 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 459 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 34, Common_Movement_FaceOriginalDirection
# 460 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 461 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


MeltingSnowForest_EventScript_HotStantler::
# 466 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 467 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_WATER_WOMAN_TALKED, MeltingSnowForest_EventScript_HotStantler_2
MeltingSnowForest_EventScript_HotStantler_1:
# 472 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_WATER_WOMAN_TALKED, MeltingSnowForest_EventScript_HotStantler_5
MeltingSnowForest_EventScript_HotStantler_4:
# 491 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 492 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 33, Common_Movement_FaceOriginalDirection
# 493 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 494 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_HotStantler_2:
# 468 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 469 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 470 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HotStantler_Text_0
	goto MeltingSnowForest_EventScript_HotStantler_1

MeltingSnowForest_EventScript_HotStantler_5:
# 473 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HotStantler_Text_1
# 474 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 475 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BUBBLE
# 476 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 477 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 478 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 479 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 33, StantlerCelebrate
# 480 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 481 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 33, Common_Movement_FacePlayer
# 482 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 483 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 484 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 485 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_STANTLER_WATERED
# 486 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_HotStantler_10
MeltingSnowForest_EventScript_HotStantler_7:
# 489 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HotStantler_Text_2
	goto MeltingSnowForest_EventScript_HotStantler_4

MeltingSnowForest_EventScript_HotStantler_8:
# 487 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_CLEAR_STANTLERS
	goto MeltingSnowForest_EventScript_HotStantler_7

MeltingSnowForest_EventScript_HotStantler_9:
# 486 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_HotStantler_14
	goto MeltingSnowForest_EventScript_HotStantler_7

MeltingSnowForest_EventScript_HotStantler_10:
# 486 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_HotStantler_9
	goto MeltingSnowForest_EventScript_HotStantler_7

MeltingSnowForest_EventScript_HotStantler_13:
# 486 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_HotStantler_17
	goto MeltingSnowForest_EventScript_HotStantler_7

MeltingSnowForest_EventScript_HotStantler_14:
# 486 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_HotStantler_13
	goto MeltingSnowForest_EventScript_HotStantler_7

MeltingSnowForest_EventScript_HotStantler_17:
# 486 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_HotStantler_8
	goto MeltingSnowForest_EventScript_HotStantler_7


MeltingSnowForest_EventScript_PoorStantlerGirl::
# 499 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 500 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_PoorStantlerGirl_2
MeltingSnowForest_EventScript_PoorStantlerGirl_1:
# 503 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_PoorStantlerGirl_5
MeltingSnowForest_EventScript_PoorStantlerGirl_4:
# 511 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 512 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 32, Common_Movement_FaceOriginalDirection
# 513 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 514 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_PoorStantlerGirl_2:
# 501 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_PoorStantlerGirl_Text_0
	goto MeltingSnowForest_EventScript_PoorStantlerGirl_1

MeltingSnowForest_EventScript_PoorStantlerGirl_5:
# 504 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_PoorStantlerGirl_Text_1
# 505 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_ORAN_BERRY_KEY, MeltingSnowForest_EventScript_PoorStantlerGirl_7
	goto MeltingSnowForest_EventScript_PoorStantlerGirl_4

MeltingSnowForest_EventScript_PoorStantlerGirl_7:
# 506 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_PoorStantlerGirl_Text_2
# 507 "data/maps/MeltingSnowForest/scripts.pory"
	giveitem ITEM_ORAN_BERRY_KEY
# 508 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_ORAN_BERRY_KEY
	goto MeltingSnowForest_EventScript_PoorStantlerGirl_4


MeltingSnowForest_EventScript_Heat::
# 519 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HEAT_CUTSCENE, MeltingSnowForest_EventScript_Heat_2
MeltingSnowForest_EventScript_Heat_1:
# 581 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_Heat_2:
# 520 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 521 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 522 "data/maps/MeltingSnowForest/scripts.pory"
	special SpawnCameraObject
# 523 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 524 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 34, Common_Movement_FaceUp
# 525 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 33, StantlerMovement
# 526 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 527 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq MeltingSnowForest_EventScript_Heat_5
MeltingSnowForest_EventScript_Heat_4:
# 530 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq MeltingSnowForest_EventScript_Heat_8
MeltingSnowForest_EventScript_Heat_7:
# 533 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq MeltingSnowForest_EventScript_Heat_11
MeltingSnowForest_EventScript_Heat_10:
# 536 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 23
	goto_if_eq MeltingSnowForest_EventScript_Heat_14
MeltingSnowForest_EventScript_Heat_13:
# 539 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 24
	goto_if_eq MeltingSnowForest_EventScript_Heat_17
MeltingSnowForest_EventScript_Heat_16:
# 542 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 33
# 543 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 544 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 545 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 546 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 33, Common_Movement_JumpInPlaceLeft
# 547 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 548 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 549 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 33, StantlerWater
# 550 "data/maps/MeltingSnowForest/scripts.pory"
	delay 28
# 551 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 552 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 553 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BUBBLE
# 554 "data/maps/MeltingSnowForest/scripts.pory"
	delay 35
# 555 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BUBBLE
# 556 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 557 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 558 "data/maps/MeltingSnowForest/scripts.pory"
	setobjectxy 33, 17, 35
# 559 "data/maps/MeltingSnowForest/scripts.pory"
	setobjectxyperm 33, 17, 35
# 560 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 561 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq MeltingSnowForest_EventScript_Heat_20
MeltingSnowForest_EventScript_Heat_19:
# 564 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq MeltingSnowForest_EventScript_Heat_23
MeltingSnowForest_EventScript_Heat_22:
# 567 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq MeltingSnowForest_EventScript_Heat_26
MeltingSnowForest_EventScript_Heat_25:
# 570 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 23
	goto_if_eq MeltingSnowForest_EventScript_Heat_29
MeltingSnowForest_EventScript_Heat_28:
# 573 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 24
	goto_if_eq MeltingSnowForest_EventScript_Heat_32
MeltingSnowForest_EventScript_Heat_31:
# 576 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 577 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_HEAT_CUTSCENE
# 578 "data/maps/MeltingSnowForest/scripts.pory"
	special RemoveCameraObject
# 579 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
	goto MeltingSnowForest_EventScript_Heat_1

MeltingSnowForest_EventScript_Heat_5:
# 528 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToScene1
	goto MeltingSnowForest_EventScript_Heat_4

MeltingSnowForest_EventScript_Heat_8:
# 531 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToScene2
	goto MeltingSnowForest_EventScript_Heat_7

MeltingSnowForest_EventScript_Heat_11:
# 534 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToScene3
	goto MeltingSnowForest_EventScript_Heat_10

MeltingSnowForest_EventScript_Heat_14:
# 537 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToScene4
	goto MeltingSnowForest_EventScript_Heat_13

MeltingSnowForest_EventScript_Heat_17:
# 540 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToScene5
	goto MeltingSnowForest_EventScript_Heat_16

MeltingSnowForest_EventScript_Heat_20:
# 562 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraReturn1
	goto MeltingSnowForest_EventScript_Heat_19

MeltingSnowForest_EventScript_Heat_23:
# 565 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraReturn2
	goto MeltingSnowForest_EventScript_Heat_22

MeltingSnowForest_EventScript_Heat_26:
# 568 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraReturn3
	goto MeltingSnowForest_EventScript_Heat_25

MeltingSnowForest_EventScript_Heat_29:
# 571 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraReturn4
	goto MeltingSnowForest_EventScript_Heat_28

MeltingSnowForest_EventScript_Heat_32:
# 574 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraReturn5
	goto MeltingSnowForest_EventScript_Heat_31


# 585 "data/maps/MeltingSnowForest/scripts.pory"
CameraToScene1:
# 586 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 586 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 586 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 587 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
	step_end

# 590 "data/maps/MeltingSnowForest/scripts.pory"
CameraToScene2:
# 591 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 591 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 592 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 592 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
	step_end

# 595 "data/maps/MeltingSnowForest/scripts.pory"
CameraToScene3:
# 596 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 597 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 597 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 597 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
	step_end

# 600 "data/maps/MeltingSnowForest/scripts.pory"
CameraToScene4:
# 601 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 601 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 601 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 601 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
	step_end

# 604 "data/maps/MeltingSnowForest/scripts.pory"
CameraToScene5:
# 605 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northwest
# 606 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 606 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 606 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
	step_end

# 609 "data/maps/MeltingSnowForest/scripts.pory"
CameraReturn1:
# 610 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 611 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
# 611 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
# 611 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
	step_end

# 614 "data/maps/MeltingSnowForest/scripts.pory"
CameraReturn2:
# 615 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 615 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 616 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
# 616 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
	step_end

# 619 "data/maps/MeltingSnowForest/scripts.pory"
CameraReturn3:
# 620 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 620 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 620 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 621 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
	step_end

# 624 "data/maps/MeltingSnowForest/scripts.pory"
CameraReturn4:
# 625 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 625 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 625 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 625 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
	step_end

# 628 "data/maps/MeltingSnowForest/scripts.pory"
CameraReturn5:
# 629 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 629 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 629 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 630 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southeast
	step_end

# 633 "data/maps/MeltingSnowForest/scripts.pory"
StantlerMovement:
# 634 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 634 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 634 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 635 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 635 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 635 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 636 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 636 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 636 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 637 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 637 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 637 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 638 "data/maps/MeltingSnowForest/scripts.pory"
	face_left
	step_end

# 641 "data/maps/MeltingSnowForest/scripts.pory"
StantlerWater:
# 642 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 642 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 642 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 643 "data/maps/MeltingSnowForest/scripts.pory"
	jump_left
# 644 "data/maps/MeltingSnowForest/scripts.pory"
	set_invisible
# 645 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 645 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 645 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 645 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 646 "data/maps/MeltingSnowForest/scripts.pory"
	set_visible
# 647 "data/maps/MeltingSnowForest/scripts.pory"
	jump_left
	step_end

# 650 "data/maps/MeltingSnowForest/scripts.pory"
StantlerCelebrate:
# 651 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_fast_right
# 651 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_fast_right
# 651 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_fast_right
# 652 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_down
# 652 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_down
# 652 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_down
# 653 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_up
# 653 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_up
# 653 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_up
# 654 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 654 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 654 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
	step_end

MeltingSnowForest_EventScript_HeatCutsceneDone::
# 658 "data/maps/MeltingSnowForest/scripts.pory"
	setobjectxyperm 33, 17, 35
# 659 "data/maps/MeltingSnowForest/scripts.pory"
	SetObjectMovementType 33, MOVEMENT_TYPE_FACE_UP_AND_LEFT
# 660 "data/maps/MeltingSnowForest/scripts.pory"
	addobject 33
	return


MeltingSnowForest_EventScript_FirstScientist::
# 664 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 665 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FirstScientist_Text_0
# 666 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 667 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 25, Common_Movement_FaceOriginalDirection
# 668 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 669 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


MeltingSnowForest_EventScript_BugCatcher::
# 674 "data/maps/MeltingSnowForest/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, Timmy_Intro, Timmy_Outro
# 675 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox PostBattle_Timmy, MSGBOX_AUTOCLOSE
# 676 "data/maps/MeltingSnowForest/scripts.pory"
	waitmessage
	end


MeltingSnowForest_EventScript_Farmer::
# 691 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 692 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_FIRE_FARMER, MeltingSnowForest_EventScript_Farmer_2
MeltingSnowForest_EventScript_Farmer_1:
# 720 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_FIRE_FARMER, MeltingSnowForest_EventScript_Farmer_5
MeltingSnowForest_EventScript_Farmer_4:
# 729 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_Farmer_2:
# 693 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 694 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 695 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 696 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 697 "data/maps/MeltingSnowForest/scripts.pory"
	delay 60
# 698 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FaceLeft
# 699 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 700 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 701 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_ShoveLeft
# 702 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_FIRE_PUNCH
# 703 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 704 "data/maps/MeltingSnowForest/scripts.pory"
	delay 120
# 705 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 706 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Farmer_Text_0
# 707 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 708 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 709 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 710 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 711 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_ShoveUp
# 712 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_FIRE_PUNCH
# 713 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 714 "data/maps/MeltingSnowForest/scripts.pory"
	delay 60
# 715 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 716 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 717 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Farmer_Text_1
# 718 "data/maps/MeltingSnowForest/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, MeltingSnowForest_EventScript_Farmer_Text_2, MeltingSnowForest_EventScript_Farmer_Text_3, MeltingSnowForest_EventScript_AfterFarmer
	goto MeltingSnowForest_EventScript_Farmer_1

MeltingSnowForest_EventScript_Farmer_5:
# 721 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 722 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 723 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 724 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Farmer_Text_4
# 725 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 726 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FaceOriginalDirection
# 727 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
	goto MeltingSnowForest_EventScript_Farmer_4


MeltingSnowForest_EventScript_AfterFarmer::
# 734 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 735 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 736 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FaceAwayPlayer
# 737 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 738 "data/maps/MeltingSnowForest/scripts.pory"
	delay 60
# 739 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 740 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq MeltingSnowForest_EventScript_AfterFarmer_2
MeltingSnowForest_EventScript_AfterFarmer_1:
# 743 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq MeltingSnowForest_EventScript_AfterFarmer_5
MeltingSnowForest_EventScript_AfterFarmer_4:
# 746 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 747 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 748 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_AfterFarmer_Text_0
# 749 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 750 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 751 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FacePlayer
# 752 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 753 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 754 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq MeltingSnowForest_EventScript_AfterFarmer_8
MeltingSnowForest_EventScript_AfterFarmer_7:
# 757 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq MeltingSnowForest_EventScript_AfterFarmer_11
MeltingSnowForest_EventScript_AfterFarmer_10:
# 760 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 761 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 762 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_AfterFarmer_Text_1
# 763 "data/maps/MeltingSnowForest/scripts.pory"
	giveitem ITEM_FIRE_GEM_KEY
# 764 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_FIRE_FARMER
# 765 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_AfterFarmer_2:
# 741 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceUp
	goto MeltingSnowForest_EventScript_AfterFarmer_1

MeltingSnowForest_EventScript_AfterFarmer_5:
# 744 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceLeft
	goto MeltingSnowForest_EventScript_AfterFarmer_4

MeltingSnowForest_EventScript_AfterFarmer_8:
# 755 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceDown
	goto MeltingSnowForest_EventScript_AfterFarmer_7

MeltingSnowForest_EventScript_AfterFarmer_11:
# 758 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceRight
	goto MeltingSnowForest_EventScript_AfterFarmer_10


MeltingSnowForest_EventScript_Ursaring::
# 770 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 771 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_URSARING, CRY_MODE_NORMAL
# 772 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 773 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Ursaring_Text_0
# 774 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 775 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 27, Common_Movement_FaceOriginalDirection
# 776 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 777 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


MeltingSnowForest_EventScript_FightingHiker::
# 782 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_FIRE_FARMER, MeltingSnowForest_EventScript_FightingHiker_2
MeltingSnowForest_EventScript_FightingHiker_1:
# 799 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_FIRE_FARMER, MeltingSnowForest_EventScript_FightingHiker_6
MeltingSnowForest_EventScript_FightingHiker_4:
# 853 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_FIRE_HIKER, MeltingSnowForest_EventScript_FightingHiker_13
MeltingSnowForest_EventScript_FightingHiker_12:
# 858 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 859 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_FightingHiker_2:
# 783 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 784 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 785 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 786 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_10
MeltingSnowForest_EventScript_FightingHiker_9:
# 789 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 56
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_19
MeltingSnowForest_EventScript_FightingHiker_18:
# 792 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 793 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 794 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 795 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FightingHiker_Text_0
# 796 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 797 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_FaceOriginalDirection
	goto MeltingSnowForest_EventScript_FightingHiker_1

MeltingSnowForest_EventScript_FightingHiker_5:
# 800 "data/maps/MeltingSnowForest/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_LOOK_AROUND
# 801 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 802 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FightingHiker_Text_1
# 803 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 804 "data/maps/MeltingSnowForest/scripts.pory"
	removeitem ITEM_FIRE_GEM_KEY
# 805 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_FaceRight
# 806 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 807 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 808 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceRight
# 809 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 810 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FightingHiker_Text_2
# 811 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 812 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_ShoveRight
# 813 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_FIRE_PUNCH
# 814 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 815 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 27, Common_Movement_JumpInPlaceLeft
# 816 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 817 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 818 "data/maps/MeltingSnowForest/scripts.pory"
	delay 20
# 819 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 27, MeltingSnowForest_EventScript_FightingHiker_Movement_0
# 820 "data/maps/MeltingSnowForest/scripts.pory"
	delay 10
# 821 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_FaceDown
# 822 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 823 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 824 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 825 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 27
# 826 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 827 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 828 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_16
MeltingSnowForest_EventScript_FightingHiker_15:
# 831 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 56
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_22
MeltingSnowForest_EventScript_FightingHiker_21:
# 834 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 27, Common_Movement_FacePlayer
# 835 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 836 "data/maps/MeltingSnowForest/scripts.pory"
	delay 20
# 837 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_25
MeltingSnowForest_EventScript_FightingHiker_24:
# 840 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 56
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_28
MeltingSnowForest_EventScript_FightingHiker_27:
# 843 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 844 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 845 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FightingHiker_Text_3
# 846 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 847 "data/maps/MeltingSnowForest/scripts.pory"
	giveitem ITEM_SITRUS_BERRY_KEY, 1
# 848 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_FIRE_HIKER
# 849 "data/maps/MeltingSnowForest/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_LOOK_AROUND, FALSE
# 850 "data/maps/MeltingSnowForest/scripts.pory"
	addobject 26
# 851 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 27
	goto MeltingSnowForest_EventScript_FightingHiker_4

MeltingSnowForest_EventScript_FightingHiker_6:
# 799 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_FIRE_HIKER, MeltingSnowForest_EventScript_FightingHiker_5
	goto MeltingSnowForest_EventScript_FightingHiker_4

MeltingSnowForest_EventScript_FightingHiker_10:
# 787 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_JumpInPlaceLeft
	goto MeltingSnowForest_EventScript_FightingHiker_9

MeltingSnowForest_EventScript_FightingHiker_13:
# 854 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 855 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FightingHiker_Text_4
# 856 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
	goto MeltingSnowForest_EventScript_FightingHiker_12

MeltingSnowForest_EventScript_FightingHiker_16:
# 829 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto MeltingSnowForest_EventScript_FightingHiker_15

MeltingSnowForest_EventScript_FightingHiker_19:
# 790 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_JumpInPlaceDown
	goto MeltingSnowForest_EventScript_FightingHiker_18

MeltingSnowForest_EventScript_FightingHiker_22:
# 832 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto MeltingSnowForest_EventScript_FightingHiker_21

MeltingSnowForest_EventScript_FightingHiker_25:
# 838 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceLeft
	goto MeltingSnowForest_EventScript_FightingHiker_24

MeltingSnowForest_EventScript_FightingHiker_28:
# 841 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceDown
	goto MeltingSnowForest_EventScript_FightingHiker_27


MeltingSnowForest_EventScript_OldWoman::
# 864 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 865 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_OLD_WOMAN_BERRY_INTRO, MeltingSnowForest_EventScript_OldWoman_2
MeltingSnowForest_EventScript_OldWoman_1:
# 869 "data/maps/MeltingSnowForest/scripts.pory"
	checkitem ITEM_SITRUS_BERRY_KEY, 1
# 870 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_5
MeltingSnowForest_EventScript_OldWoman_4:
# 932 "data/maps/MeltingSnowForest/scripts.pory"
	checkitem ITEM_ORAN_BERRY_KEY, 1
# 933 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_8
MeltingSnowForest_EventScript_OldWoman_7:
# 997 "data/maps/MeltingSnowForest/scripts.pory"
	checkitem ITEM_CHERI_BERRY_KEY, 1
# 998 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_15
MeltingSnowForest_EventScript_OldWoman_14:
# 1062 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_SNOW_BERRY_WOMAN, 0
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_26
MeltingSnowForest_EventScript_OldWoman_25:
# 1065 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_SNOW_BERRY_WOMAN, 1
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_40
MeltingSnowForest_EventScript_OldWoman_39:
# 1068 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_SNOW_BERRY_WOMAN, 2
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_53
MeltingSnowForest_EventScript_OldWoman_52:
# 1071 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_SNOW_BERRY_WOMAN, 3
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_65
MeltingSnowForest_EventScript_OldWoman_64:
# 1074 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1075 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1076 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_OldWoman_2:
# 866 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_0
# 867 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_OLD_WOMAN_BERRY_INTRO
	goto MeltingSnowForest_EventScript_OldWoman_1

MeltingSnowForest_EventScript_OldWoman_5:
# 871 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_1
# 872 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 873 "data/maps/MeltingSnowForest/scripts.pory"
	removeitem ITEM_SITRUS_BERRY_KEY, 1
# 874 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 875 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_11
# 879 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_10:
# 881 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 882 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 883 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 884 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 885 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_WalkInPlaceRight
# 886 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 887 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 888 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_2
# 889 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 890 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 891 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_ShoveRightSlower
# 892 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_PUDDLE
# 893 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 894 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 895 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 43, Common_Movement_JumpInPlaceLeft
# 896 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 897 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 898 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 899 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_TEDDIURSA, CRY_MODE_NORMAL
# 900 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 901 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 902 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 43, Common_Movement_FaceOriginalDirection
# 903 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 904 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_22
# 908 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_21:
# 910 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 911 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_37
MeltingSnowForest_EventScript_OldWoman_36:
# 914 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_50
MeltingSnowForest_EventScript_OldWoman_49:
# 917 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 29
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_62
MeltingSnowForest_EventScript_OldWoman_61:
# 920 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_74
MeltingSnowForest_EventScript_OldWoman_73:
# 923 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_FacePlayer
# 924 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 925 "data/maps/MeltingSnowForest/scripts.pory"
	addvar VAR_SNOW_BERRY_WOMAN, 1
# 926 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_HUNGRY_TEDDIURSA
# 927 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_OldWoman_85
MeltingSnowForest_EventScript_OldWoman_82:
# 930 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_3
	goto MeltingSnowForest_EventScript_OldWoman_4

MeltingSnowForest_EventScript_OldWoman_8:
# 934 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_4
# 935 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 936 "data/maps/MeltingSnowForest/scripts.pory"
	removeitem ITEM_ORAN_BERRY_KEY, 1
# 937 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 938 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_18
# 942 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_17:
# 944 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 945 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_FaceUp
# 946 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 947 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 948 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 949 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 950 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_WalkInPlaceUp
# 951 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 952 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 953 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_5
# 954 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 955 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 956 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_ShoveUpSlower
# 957 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_PUDDLE
# 958 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 959 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 960 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 42, Common_Movement_JumpInPlaceDown
# 961 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 962 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 963 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 964 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_NORMAL
# 965 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 966 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 967 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 42, Common_Movement_FaceOriginalDirection
# 968 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 969 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_33
# 973 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_32:
# 975 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 976 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_47
MeltingSnowForest_EventScript_OldWoman_46:
# 979 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_59
MeltingSnowForest_EventScript_OldWoman_58:
# 982 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 29
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_71
MeltingSnowForest_EventScript_OldWoman_70:
# 985 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_80
MeltingSnowForest_EventScript_OldWoman_79:
# 988 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_FacePlayer
# 989 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 990 "data/maps/MeltingSnowForest/scripts.pory"
	addvar VAR_SNOW_BERRY_WOMAN, 1
# 991 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_HUNGRY_SWINUB
# 992 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_OldWoman_101
MeltingSnowForest_EventScript_OldWoman_98:
# 995 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_6
	goto MeltingSnowForest_EventScript_OldWoman_7

MeltingSnowForest_EventScript_OldWoman_11:
# 876 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_10

MeltingSnowForest_EventScript_OldWoman_15:
# 999 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_7
# 1000 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1001 "data/maps/MeltingSnowForest/scripts.pory"
	removeitem ITEM_CHERI_BERRY_KEY, 1
# 1002 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1003 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_29
# 1007 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_28:
# 1009 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1010 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_FaceDown
# 1011 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1012 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 1013 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1014 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1015 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_WalkInPlaceDown
# 1016 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1017 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1018 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_8
# 1019 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1020 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1021 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_ShoveDownSlower
# 1022 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_PUDDLE
# 1023 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1024 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1025 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 44, Common_Movement_JumpInPlaceUp
# 1026 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1027 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1028 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1029 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SENTRET, CRY_MODE_NORMAL
# 1030 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1031 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1032 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 44, Common_Movement_FaceOriginalDirection
# 1033 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1034 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_43
# 1038 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_42:
# 1040 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1041 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_56
MeltingSnowForest_EventScript_OldWoman_55:
# 1044 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_68
MeltingSnowForest_EventScript_OldWoman_67:
# 1047 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 29
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_77
MeltingSnowForest_EventScript_OldWoman_76:
# 1050 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_96
MeltingSnowForest_EventScript_OldWoman_95:
# 1053 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_FacePlayer
# 1054 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1055 "data/maps/MeltingSnowForest/scripts.pory"
	addvar VAR_SNOW_BERRY_WOMAN, 1
# 1056 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_HUNGRY_SENTRET
# 1057 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_OldWoman_114
MeltingSnowForest_EventScript_OldWoman_111:
# 1060 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_9
	goto MeltingSnowForest_EventScript_OldWoman_14

MeltingSnowForest_EventScript_OldWoman_18:
# 939 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_17

MeltingSnowForest_EventScript_OldWoman_22:
# 905 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_21

MeltingSnowForest_EventScript_OldWoman_26:
# 1063 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_10
	goto MeltingSnowForest_EventScript_OldWoman_25

MeltingSnowForest_EventScript_OldWoman_29:
# 1004 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_28

MeltingSnowForest_EventScript_OldWoman_33:
# 970 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_32

MeltingSnowForest_EventScript_OldWoman_37:
# 912 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto MeltingSnowForest_EventScript_OldWoman_36

MeltingSnowForest_EventScript_OldWoman_40:
# 1066 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_11
	goto MeltingSnowForest_EventScript_OldWoman_39

MeltingSnowForest_EventScript_OldWoman_43:
# 1035 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_42

MeltingSnowForest_EventScript_OldWoman_47:
# 977 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto MeltingSnowForest_EventScript_OldWoman_46

MeltingSnowForest_EventScript_OldWoman_50:
# 915 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto MeltingSnowForest_EventScript_OldWoman_49

MeltingSnowForest_EventScript_OldWoman_53:
# 1069 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_12
	goto MeltingSnowForest_EventScript_OldWoman_52

MeltingSnowForest_EventScript_OldWoman_56:
# 1042 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto MeltingSnowForest_EventScript_OldWoman_55

MeltingSnowForest_EventScript_OldWoman_59:
# 980 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto MeltingSnowForest_EventScript_OldWoman_58

MeltingSnowForest_EventScript_OldWoman_62:
# 918 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto MeltingSnowForest_EventScript_OldWoman_61

MeltingSnowForest_EventScript_OldWoman_65:
# 1072 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_13
	goto MeltingSnowForest_EventScript_OldWoman_64

MeltingSnowForest_EventScript_OldWoman_68:
# 1045 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto MeltingSnowForest_EventScript_OldWoman_67

MeltingSnowForest_EventScript_OldWoman_71:
# 983 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto MeltingSnowForest_EventScript_OldWoman_70

MeltingSnowForest_EventScript_OldWoman_74:
# 921 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto MeltingSnowForest_EventScript_OldWoman_73

MeltingSnowForest_EventScript_OldWoman_77:
# 1048 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto MeltingSnowForest_EventScript_OldWoman_76

MeltingSnowForest_EventScript_OldWoman_80:
# 986 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto MeltingSnowForest_EventScript_OldWoman_79

MeltingSnowForest_EventScript_OldWoman_83:
# 928 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_CLEAR_STANTLERS
	goto MeltingSnowForest_EventScript_OldWoman_82

MeltingSnowForest_EventScript_OldWoman_84:
# 927 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_OldWoman_89
	goto MeltingSnowForest_EventScript_OldWoman_82

MeltingSnowForest_EventScript_OldWoman_85:
# 927 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_OldWoman_84
	goto MeltingSnowForest_EventScript_OldWoman_82

MeltingSnowForest_EventScript_OldWoman_88:
# 927 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_OldWoman_92
	goto MeltingSnowForest_EventScript_OldWoman_82

MeltingSnowForest_EventScript_OldWoman_89:
# 927 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_OldWoman_88
	goto MeltingSnowForest_EventScript_OldWoman_82

MeltingSnowForest_EventScript_OldWoman_92:
# 927 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_OldWoman_83
	goto MeltingSnowForest_EventScript_OldWoman_82

MeltingSnowForest_EventScript_OldWoman_96:
# 1051 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto MeltingSnowForest_EventScript_OldWoman_95

MeltingSnowForest_EventScript_OldWoman_99:
# 993 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_CLEAR_STANTLERS
	goto MeltingSnowForest_EventScript_OldWoman_98

MeltingSnowForest_EventScript_OldWoman_100:
# 992 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_OldWoman_105
	goto MeltingSnowForest_EventScript_OldWoman_98

MeltingSnowForest_EventScript_OldWoman_101:
# 992 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_OldWoman_100
	goto MeltingSnowForest_EventScript_OldWoman_98

MeltingSnowForest_EventScript_OldWoman_104:
# 992 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_OldWoman_108
	goto MeltingSnowForest_EventScript_OldWoman_98

MeltingSnowForest_EventScript_OldWoman_105:
# 992 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_OldWoman_104
	goto MeltingSnowForest_EventScript_OldWoman_98

MeltingSnowForest_EventScript_OldWoman_108:
# 992 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_OldWoman_99
	goto MeltingSnowForest_EventScript_OldWoman_98

MeltingSnowForest_EventScript_OldWoman_112:
# 1058 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_CLEAR_STANTLERS
	goto MeltingSnowForest_EventScript_OldWoman_111

MeltingSnowForest_EventScript_OldWoman_113:
# 1057 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_OldWoman_118
	goto MeltingSnowForest_EventScript_OldWoman_111

MeltingSnowForest_EventScript_OldWoman_114:
# 1057 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_OldWoman_113
	goto MeltingSnowForest_EventScript_OldWoman_111

MeltingSnowForest_EventScript_OldWoman_117:
# 1057 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_OldWoman_121
	goto MeltingSnowForest_EventScript_OldWoman_111

MeltingSnowForest_EventScript_OldWoman_118:
# 1057 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_OldWoman_117
	goto MeltingSnowForest_EventScript_OldWoman_111

MeltingSnowForest_EventScript_OldWoman_121:
# 1057 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_OldWoman_112
	goto MeltingSnowForest_EventScript_OldWoman_111


# 1080 "data/maps/MeltingSnowForest/scripts.pory"
OldWomanToTeddiursaRight:
# 1081 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1081 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1082 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 1083 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
	step_end

# 1086 "data/maps/MeltingSnowForest/scripts.pory"
OldWomanToTeddiursaUp:
# 1087 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 1088 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1088 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1088 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
	step_end

# 1091 "data/maps/MeltingSnowForest/scripts.pory"
OldWomanFromTeddiursaRight:
# 1092 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1093 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 1094 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1094 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
	step_end

# 1097 "data/maps/MeltingSnowForest/scripts.pory"
OldWomanFromTeddiursaUp:
# 1098 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1098 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1098 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1099 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
	step_end

MeltingSnowForest_EventScript_HungryTeddiursa::
# 1103 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1104 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_HungryTeddiursa_2
# 1111 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_TEDDIURSA, CRY_MODE_NORMAL
# 1112 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1113 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1114 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungryTeddiursa_Text_1
MeltingSnowForest_EventScript_HungryTeddiursa_1:
# 1116 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1117 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 43, Common_Movement_FaceOriginalDirection
# 1118 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1119 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_HungryTeddiursa_2:
# 1105 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_TEDDIURSA, CRY_MODE_FAINT
# 1106 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1107 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1108 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungryTeddiursa_Text_0
	goto MeltingSnowForest_EventScript_HungryTeddiursa_1


MeltingSnowForest_EventScript_HungrySwinub::
# 1124 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1125 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_HungrySwinub_2
# 1132 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_NORMAL
# 1133 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1134 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1135 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungrySwinub_Text_1
MeltingSnowForest_EventScript_HungrySwinub_1:
# 1137 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1138 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 42, Common_Movement_FaceOriginalDirection
# 1139 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1140 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_HungrySwinub_2:
# 1126 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_FAINT
# 1127 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1128 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1129 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungrySwinub_Text_0
	goto MeltingSnowForest_EventScript_HungrySwinub_1


MeltingSnowForest_EventScript_HungrySentret::
# 1145 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1146 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_HungrySentret_2
# 1153 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SENTRET, CRY_MODE_NORMAL
# 1154 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1155 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1156 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungrySentret_Text_1
MeltingSnowForest_EventScript_HungrySentret_1:
# 1158 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1159 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 44, Common_Movement_FaceOriginalDirection
# 1160 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1161 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_HungrySentret_2:
# 1147 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SENTRET, CRY_MODE_FAINT
# 1148 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1149 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1150 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungrySentret_Text_0
	goto MeltingSnowForest_EventScript_HungrySentret_1


MeltingSnowForest_EventScript_Froslass::
# 1170 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 1171 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1172 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1173 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_FacePlayer
# 1174 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1175 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_FROSLASS, CRY_MODE_ENCOUNTER
# 1176 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1177 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1178 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_ShoveRight
# 1179 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 1180 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1181 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1182 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Froslass_Text_0
# 1183 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_UNUSED_0x8F7
# 1184 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_UNUSED_0x8F8
# 1185 "data/maps/MeltingSnowForest/scripts.pory"
	setwildbattle SPECIES_FROSLASS, 35, ITEM_NONE, SPECIES_GLALIE, 35, ITEM_NONE
# 1186 "data/maps/MeltingSnowForest/scripts.pory"
	dowildbattle
# 1187 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1188 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1189 "data/maps/MeltingSnowForest/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1190 "data/maps/MeltingSnowForest/scripts.pory"
	callnative UpdateFollowingPokemon
# 1191 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1192 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_FaceUp
# 1193 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_FaceDown
# 1194 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1195 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1196 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_ShoveUp
# 1197 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_ShoveDown
# 1198 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BITE
# 1199 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1200 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1201 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, MeltingSnowForest_EventScript_Froslass_Movement_0
# 1202 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1203 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, MeltingSnowForest_EventScript_Froslass_Movement_1
# 1204 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1205 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_EXIT
# 1206 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 1207 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 48
# 1208 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 47
# 1209 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_GLALIE_FROSLASS_DOUBLE
# 1210 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_Froslass_4
MeltingSnowForest_EventScript_Froslass_1:
# 1213 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1214 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_Froslass_2:
# 1211 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_CLEAR_STANTLERS
	goto MeltingSnowForest_EventScript_Froslass_1

MeltingSnowForest_EventScript_Froslass_3:
# 1210 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_Froslass_8
	goto MeltingSnowForest_EventScript_Froslass_1

MeltingSnowForest_EventScript_Froslass_4:
# 1210 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_Froslass_3
	goto MeltingSnowForest_EventScript_Froslass_1

MeltingSnowForest_EventScript_Froslass_7:
# 1210 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_Froslass_11
	goto MeltingSnowForest_EventScript_Froslass_1

MeltingSnowForest_EventScript_Froslass_8:
# 1210 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_Froslass_7
	goto MeltingSnowForest_EventScript_Froslass_1

MeltingSnowForest_EventScript_Froslass_11:
# 1210 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_Froslass_2
	goto MeltingSnowForest_EventScript_Froslass_1


MeltingSnowForest_EventScript_Glalie::
# 1219 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 1220 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1221 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1222 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_FacePlayer
# 1223 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1224 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_GLALIE, CRY_MODE_ENCOUNTER
# 1225 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1226 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1227 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_ShoveRight
# 1228 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 1229 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1230 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1231 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Froslass_Text_0
# 1232 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_UNUSED_0x8F7
# 1233 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_UNUSED_0x8F8
# 1234 "data/maps/MeltingSnowForest/scripts.pory"
	setwildbattle SPECIES_FROSLASS, 35, ITEM_NONE, SPECIES_GLALIE, 35, ITEM_NONE
# 1235 "data/maps/MeltingSnowForest/scripts.pory"
	dowildbattle
# 1236 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1237 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1238 "data/maps/MeltingSnowForest/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1239 "data/maps/MeltingSnowForest/scripts.pory"
	callnative UpdateFollowingPokemon
# 1240 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1241 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_FaceUp
# 1242 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_FaceDown
# 1243 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1244 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1245 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_ShoveUp
# 1246 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_ShoveDown
# 1247 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BITE
# 1248 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1249 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1250 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, MeltingSnowForest_EventScript_Froslass_Movement_0
# 1251 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1252 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, MeltingSnowForest_EventScript_Glalie_Movement_0
# 1253 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1254 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_EXIT
# 1255 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 1256 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 48
# 1257 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 47
# 1258 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_GLALIE_FROSLASS_DOUBLE
# 1259 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_Glalie_4
MeltingSnowForest_EventScript_Glalie_1:
# 1262 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1263 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_Glalie_2:
# 1260 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_CLEAR_STANTLERS
	goto MeltingSnowForest_EventScript_Glalie_1

MeltingSnowForest_EventScript_Glalie_3:
# 1259 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_Glalie_8
	goto MeltingSnowForest_EventScript_Glalie_1

MeltingSnowForest_EventScript_Glalie_4:
# 1259 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_Glalie_3
	goto MeltingSnowForest_EventScript_Glalie_1

MeltingSnowForest_EventScript_Glalie_7:
# 1259 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_Glalie_11
	goto MeltingSnowForest_EventScript_Glalie_1

MeltingSnowForest_EventScript_Glalie_8:
# 1259 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_Glalie_7
	goto MeltingSnowForest_EventScript_Glalie_1

MeltingSnowForest_EventScript_Glalie_11:
# 1259 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_Glalie_2
	goto MeltingSnowForest_EventScript_Glalie_1


MeltingSnowForest_EventScript_WaterWoman::
# 1268 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1269 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_WATER_WOMAN_TALKED, MeltingSnowForest_EventScript_WaterWoman_2
MeltingSnowForest_EventScript_WaterWoman_1:
# 1274 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_WATER_WOMAN_TALKED, MeltingSnowForest_EventScript_WaterWoman_5
MeltingSnowForest_EventScript_WaterWoman_4:
# 1277 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1278 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 49, Common_Movement_FaceOriginalDirection
# 1279 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1280 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_WaterWoman_2:
# 1270 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_WaterWoman_Text_0
# 1271 "data/maps/MeltingSnowForest/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 1272 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_WATER_WOMAN_TALKED
	goto MeltingSnowForest_EventScript_WaterWoman_1

MeltingSnowForest_EventScript_WaterWoman_5:
# 1275 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_WaterWoman_Text_1
	goto MeltingSnowForest_EventScript_WaterWoman_4


MeltingSnowForest_EventScript_LastScientist::
# 1289 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 1290 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1291 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_LastScientist_2
# 1291 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_LastScientist_2
# 1291 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_LastScientist_2
# 1291 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_LastScientist_2
# 1291 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_LastScientist_2
# 1291 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_LastScientist_2
MeltingSnowForest_EventScript_LastScientist_1:
# 1322 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_LastScientist_17
MeltingSnowForest_EventScript_LastScientist_14:
# 1328 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_LastScientist_2:
# 1292 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_LAST_SCIENTIST_FIRST_TALK, MeltingSnowForest_EventScript_LastScientist_28
MeltingSnowForest_EventScript_LastScientist_27:
# 1296 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LastScientist_Text_1
# 1297 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_LastScientist_31
# 1303 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_LastScientist_34
# 1309 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_LastScientist_37
# 1315 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_LastScientist_39
# 1315 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_LastScientist_39
# 1315 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_LastScientist_39
	goto MeltingSnowForest_EventScript_LastScientist_1

MeltingSnowForest_EventScript_LastScientist_15:
# 1323 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LastScientist_Text_6
# 1324 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1325 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_LastScientist_16:
# 1322 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_LastScientist_21
	goto MeltingSnowForest_EventScript_LastScientist_14

MeltingSnowForest_EventScript_LastScientist_17:
# 1322 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_LastScientist_16
	goto MeltingSnowForest_EventScript_LastScientist_14

MeltingSnowForest_EventScript_LastScientist_20:
# 1322 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_LastScientist_24
	goto MeltingSnowForest_EventScript_LastScientist_14

MeltingSnowForest_EventScript_LastScientist_21:
# 1322 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_LastScientist_20
	goto MeltingSnowForest_EventScript_LastScientist_14

MeltingSnowForest_EventScript_LastScientist_24:
# 1322 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_LastScientist_15
	goto MeltingSnowForest_EventScript_LastScientist_14

MeltingSnowForest_EventScript_LastScientist_28:
# 1293 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LastScientist_Text_0
# 1294 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_LAST_SCIENTIST_FIRST_TALK
	goto MeltingSnowForest_EventScript_LastScientist_27

MeltingSnowForest_EventScript_LastScientist_31:
# 1298 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LastScientist_Text_2
# 1299 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1300 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_LastScientist_34:
# 1304 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LastScientist_Text_3
# 1305 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1306 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_LastScientist_37:
# 1310 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LastScientist_Text_4
# 1311 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1312 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_LastScientist_39:
# 1316 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LastScientist_Text_5
# 1317 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1318 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end


MeltingSnowForest_EventScript_FightingStantler::
# 1333 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FightingStantler_Text_0
# 1334 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1335 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


MeltingSnowForest_AlbedoScientist::
# 1340 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1341 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_AlbedoScientist_Text_0
# 1342 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1343 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


MeltingSnowForest_EventScript_ConservationHiker::
# 1350 "data/maps/MeltingSnowForest/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_SEAFLOOR_CAVERN, Martin_Intro, Martin_Outro
# 1351 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox PostBattle_Martin, MSGBOX_AUTOCLOSE
# 1352 "data/maps/MeltingSnowForest/scripts.pory"
	waitmessage
	end


MeltingSnowForest_EventScript_RisingTemps::
# 1366 "data/maps/MeltingSnowForest/scripts.pory"
	trainerbattle_single TRAINER_ARCHIE, Anthony_Intro, Anthony_Outro
# 1367 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox PostBattle_Anthony, MSGBOX_AUTOCLOSE
# 1368 "data/maps/MeltingSnowForest/scripts.pory"
	waitmessage
	end


MeltingSnowForest_EventScript_Decay::
# 1382 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1383 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Decay_Text_0
# 1384 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1385 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 41, Common_Movement_FaceOriginalDirection
# 1386 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1387 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


MeltingSnowForest_EventScript_LittleGirl::
# 1392 "data/maps/MeltingSnowForest/scripts.pory"
	lockall
# 1393 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1394 "data/maps/MeltingSnowForest/scripts.pory"
	special SpawnCameraObject
# 1395 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1396 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToLittleGirl
# 1397 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1398 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1399 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_FaceUp
# 1400 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1401 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1402 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_FaceRight
# 1403 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1404 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1405 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_WalkInPlaceRight
# 1406 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1407 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1408 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_0
# 1409 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1410 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1411 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_1
# 1412 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1413 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1414 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToLittleGirl
# 1415 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PlayerToLittleGirl
# 1416 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_FaceLeft
# 1417 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1418 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_ExclamationMark
# 1419 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_PIN
# 1420 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1421 "data/maps/MeltingSnowForest/scripts.pory"
	delay 60
# 1422 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromLittleGirl
# 1423 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1424 "data/maps/MeltingSnowForest/scripts.pory"
	special RemoveCameraObject
# 1425 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1426 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_JumpInPlaceLeft
# 1427 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1428 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1429 "data/maps/MeltingSnowForest/scripts.pory"
	delay 20
# 1430 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_2
# 1431 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1432 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1433 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, MeltingSnowForest_EventScript_LittleGirl_Movement_0
# 1434 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1435 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_3
# 1436 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1437 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1438 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_ENCOUNTER
# 1439 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1440 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_WalkInPlaceUp
# 1441 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1442 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_4
# 1443 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1444 "data/maps/MeltingSnowForest/scripts.pory"
	addobject 60
# 1445 "data/maps/MeltingSnowForest/scripts.pory"
	addobject 61
# 1446 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 61, MeltingSnowForest_EventScript_LittleGirl_Movement_1
# 1447 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1448 "data/maps/MeltingSnowForest/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1449 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 61, MeltingSnowForest_EventScript_LittleGirl_Movement_2
# 1450 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, MeltingSnowForest_EventScript_LittleGirl_Movement_3
# 1451 "data/maps/MeltingSnowForest/scripts.pory"
	delay 25
# 1452 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1453 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1454 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, Common_Movement_JumpDown
# 1455 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1456 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1457 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, Common_Movement_JumpDown
# 1458 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1459 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1460 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, Common_Movement_WalkInPlaceLeft
# 1461 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1462 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_FaceLeft
# 1463 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 29
# 1464 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 61, MeltingSnowForest_EventScript_LittleGirl_Movement_4
# 1465 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, MeltingSnowForest_EventScript_LittleGirl_Movement_5
# 1466 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 1467 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1468 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1469 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 1470 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1471 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 60
# 1472 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 50
# 1473 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1474 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_ENCOUNTER
# 1475 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1476 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1477 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_UNUSED_0x8F7
# 1478 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_UNUSED_0x8F8
# 1479 "data/maps/MeltingSnowForest/scripts.pory"
	setwildbattle SPECIES_STANTLER, 45, ITEM_NONE, SPECIES_STANTLER, 45, ITEM_NONE
# 1480 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 61, Common_Movement_ShoveRight
# 1481 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, Common_Movement_ShoveLeft
# 1482 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 1483 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 1484 "data/maps/MeltingSnowForest/scripts.pory"
	dowildbattle
# 1485 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1486 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1487 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_ENCOUNTER
# 1488 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1489 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1490 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 61, Common_Movement_ShoveRight
# 1491 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, Common_Movement_ShoveLeft
# 1492 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 1493 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 1494 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1495 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 61, MeltingSnowForest_EventScript_LittleGirl_Movement_6
# 1496 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, Common_Movement_JumpUp
# 1497 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1498 "data/maps/MeltingSnowForest/scripts.pory"
	delay 20
# 1499 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, Common_Movement_JumpUp
# 1500 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1501 "data/maps/MeltingSnowForest/scripts.pory"
	delay 20
# 1502 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, Common_Movement_JumpUp
# 1503 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1504 "data/maps/MeltingSnowForest/scripts.pory"
	delay 20
# 1505 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, MeltingSnowForest_EventScript_LittleGirl_Movement_7
# 1506 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 50, MeltingSnowForest_EventScript_LittleGirl_Movement_8
# 1507 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1508 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1509 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SNOW_GIRL
# 1510 "data/maps/MeltingSnowForest/scripts.pory"
	setvar VAR_SNOW_FINAL_SCENE, 1
# 1511 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 60
# 1512 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 61
# 1513 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 50
# 1514 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1515 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_JumpInPlaceLeft
# 1516 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1517 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1518 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_5
# 1519 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1520 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1521 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_WalkLeft
# 1522 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1523 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_6
# 1524 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1525 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1526 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeltingSnowForest_EventScript_LittleGirl_Movement_9
# 1527 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, MeltingSnowForest_EventScript_LittleGirl_Movement_10
# 1528 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1529 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 1530 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_WalkInPlaceLeft
# 1531 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1532 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_FaceLeft
# 1533 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1534 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 1535 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_PIN
# 1536 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 1537 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 1538 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 1539 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1540 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1541 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_7
# 1542 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1543 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1544 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_ShoveLeft
# 1545 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 1546 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1547 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1548 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_ShoveRight
# 1549 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 1550 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1551 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_8
# 1552 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1553 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpInPlaceRight
# 1554 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1555 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1556 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1557 "data/maps/MeltingSnowForest/scripts.pory"
	special SpawnCameraObject
# 1558 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeltingSnowForest_EventScript_LittleGirl_Movement_11
# 1559 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1560 "data/maps/MeltingSnowForest/scripts.pory"
	fadenewbgm MUS_DUMMY
# 1561 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_FaceDown
# 1562 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1563 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1564 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_9
# 1565 "data/maps/MeltingSnowForest/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 6
# 1566 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1567 "data/maps/MeltingSnowForest/scripts.pory"
	fadeoutbgm 0
# 1568 "data/maps/MeltingSnowForest/scripts.pory"
	callnative StartCredits
# 1569 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


# 1573 "data/maps/MeltingSnowForest/scripts.pory"
CameraToLittleGirl:
# 1574 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1574 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1574 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1574 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1574 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1574 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1574 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1574 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
	step_end

# 1577 "data/maps/MeltingSnowForest/scripts.pory"
PlayerToLittleGirl:
# 1578 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1578 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1578 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1578 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1578 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1578 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
	step_end

# 1581 "data/maps/MeltingSnowForest/scripts.pory"
CameraFromLittleGirl:
# 1582 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1582 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
	step_end

MeltingSnowForest_EventScript_Chansey::
# 1586 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 1587 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1588 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 1589 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Chansey_Text_0
# 1590 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1591 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1592 "data/maps/MeltingSnowForest/scripts.pory"
	special HealPlayerParty
# 1593 "data/maps/MeltingSnowForest/scripts.pory"
	playfanfare MUS_HEAL
# 1594 "data/maps/MeltingSnowForest/scripts.pory"
	waitfanfare
# 1595 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Chansey_Text_1
# 1596 "data/maps/MeltingSnowForest/scripts.pory"
	waitmessage
# 1597 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 62, Common_Movement_FaceOriginalDirection
# 1598 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1599 "data/maps/MeltingSnowForest/scripts.pory"
	callnative UpdateFollowingPokemon
# 1600 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


# 241 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_Sawsbuck_Movement_0:
# 241 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 241 "data/maps/MeltingSnowForest/scripts.pory"
	face_down
	step_end

# 247 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_Sawsbuck_Movement_1:
# 247 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 247 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 247 "data/maps/MeltingSnowForest/scripts.pory"
	face_left
	step_end

# 329 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_Sneasel_Movement_0:
# 329 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
	step_end

# 819 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_FightingHiker_Movement_0:
# 819 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 819 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 819 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 819 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 819 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 819 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 819 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 819 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 819 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
	step_end

# 1201 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_Froslass_Movement_0:
# 1201 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1201 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1201 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1201 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1201 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1201 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1201 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1201 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1201 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 1203 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_Froslass_Movement_1:
# 1203 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 1203 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1203 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1203 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1203 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1203 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1203 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1203 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1203 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1203 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 1252 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_Glalie_Movement_0:
# 1252 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 1252 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1252 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1252 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1252 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1252 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1252 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1252 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1252 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1252 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 1433 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_0:
# 1433 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1433 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1433 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1433 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1433 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_fast_left
# 1433 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_fast_left
# 1433 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_fast_left
# 1433 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_fast_left
	step_end

# 1446 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_1:
# 1446 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1446 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1446 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1446 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1446 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1446 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1446 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
	step_end

# 1449 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_2:
# 1449 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1449 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1449 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1449 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1449 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1449 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1449 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 1450 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_3:
# 1450 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 1450 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 1450 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 1450 "data/maps/MeltingSnowForest/scripts.pory"
	jump_down
	step_end

# 1464 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_4:
# 1464 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
# 1464 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
# 1464 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
# 1464 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
# 1464 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
# 1464 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
# 1464 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
# 1464 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
	step_end

# 1465 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_5:
# 1465 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1465 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1465 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1465 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1465 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1465 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1465 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1465 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
	step_end

# 1495 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_6:
# 1495 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 1495 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 1495 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 1495 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 1495 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 1495 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 1495 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 1495 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 1495 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 1495 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 1495 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 1495 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 1495 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 1495 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
	step_end

# 1505 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_7:
# 1505 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 1505 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 1505 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 1505 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
	step_end

# 1506 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_8:
# 1506 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1506 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1506 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1506 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1506 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1506 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1506 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1506 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1506 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1506 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
	step_end

# 1526 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_9:
# 1526 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1526 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1526 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1526 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1526 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1526 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
	step_end

# 1527 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_10:
# 1527 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1527 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1527 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1527 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1527 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
	step_end

# 1558 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_11:
# 1558 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1558 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1558 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1558 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1558 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1558 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1558 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1558 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1558 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1558 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
	step_end

MeltingSnowForest_EventScript_EnterTop_Text_0:
# 34 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Absol demands to join you!$"

MeltingSnowForest_EventScript_Sawsbuck_Text_0:
# 220 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Pokémon attacked in a rage!$"

MeltingSnowForest_EventScript_Sawsbuck_Text_1:
# 253 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Parasect thanked you!$"

MeltingSnowForest_EventScript_Sawsbuck_Text_2:
# 259 "data/maps/MeltingSnowForest/scripts.pory"
	.string "It wants to join your team!$"

MeltingSnowForest_EventScript_Camper1_Text_0:
# 443 "data/maps/MeltingSnowForest/scripts.pory"
	.string "There are some deranged Pokémon\n"
	.string "attacking that poor Parasect!\p"
	.string "I wish there was something I could do...$"

MeltingSnowForest_EventScript_Camper1_Text_1:
# 446 "data/maps/MeltingSnowForest/scripts.pory"
	.string "On second thought, maybe that\n"
	.string "Parasect was infected by the spores\l"
	.string "the elder spoke of.\p"
	.string "Perhaps it wasn't a legend, after all...$"

MeltingSnowForest_EventScript_StantlerHiker_Text_0:
# 457 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Did you see what just happened?\p"
	.string "I've never seen a Pokémon willingly jump\n"
	.string "in freezing water like that!\p"
	.string "I wonder what could have caused it to\n"
	.string "act out.$"

MeltingSnowForest_EventScript_HotStantler_Text_0:
# 470 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Stantler is panting uncontrollably!$"

MeltingSnowForest_EventScript_HotStantler_Text_1:
# 473 "data/maps/MeltingSnowForest/scripts.pory"
	.string "You used the Wailmer Pail to pour water\n"
	.string "into the Stantler's mouth!$"

MeltingSnowForest_EventScript_HotStantler_Text_2:
# 489 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Stantler thanked you!$"

MeltingSnowForest_EventScript_PoorStantlerGirl_Text_0:
# 501 "data/maps/MeltingSnowForest/scripts.pory"
	.string "This poor, feverish Stantler just\n"
	.string "jumped in the frigid water to cool off...\p"
	.string "It looks like it isn't able to drink...\p"
	.string "I wish I could help!$"

MeltingSnowForest_EventScript_PoorStantlerGirl_Text_1:
# 504 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Stantler already looks better!\p"
	.string "I wonder if he wasn't able to drink\n"
	.string "because of the sickness that's\l"
	.string "spreading.\p"
	.string "I guess the stories I've heard were\n"
	.string "true.$"

MeltingSnowForest_EventScript_PoorStantlerGirl_Text_2:
# 506 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Here, you can have this!$"

MeltingSnowForest_EventScript_FirstScientist_Text_0:
# 665 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I was supposed to do research on how\n"
	.string "the warmer environment has changed the\l"
	.string "forest, but a vicious Pokémon attacked\l"
	.string "me!\p"
	.string "What other disasters could present\n"
	.string "themselves here?$"

MeltingSnowForest_EventScript_Farmer_Text_0:
# 706 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Well, howdy, partner! I hear that as the\n"
	.string "snow melts, there's potential for some\l"
	.string "farming up here!\p"
	.string "Sounds great to me, the economy will be\n"
	.string "booming!\p"
	.string "Figured I'd help heat things up.$"

MeltingSnowForest_EventScript_Farmer_Text_1:
# 717 "data/maps/MeltingSnowForest/scripts.pory"
	.string "There's nothing wrong with what I'm\n"
	.string "doing, I just want to grow more crops!$"

MeltingSnowForest_EventScript_Farmer_Text_2:
# 718 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Don't backtalk me!$"

MeltingSnowForest_EventScript_Farmer_Text_3:
# 718 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Dadgummit!$"

MeltingSnowForest_EventScript_Farmer_Text_4:
# 724 "data/maps/MeltingSnowForest/scripts.pory"
	.string "You can stop me now, but you can't stop\n"
	.string "the forest from warming up.\p"
	.string "Soon enough, I'll be farming here!$"

MeltingSnowForest_EventScript_AfterFarmer_Text_0:
# 748 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Why do you want to stop agriculture?\p"
	.string "We can grow so much more food if we get\n"
	.string "rid of all this snow!$"

MeltingSnowForest_EventScript_AfterFarmer_Text_1:
# 762 "data/maps/MeltingSnowForest/scripts.pory"
	.string "You know what? This forest is gonna\n"
	.string "warm, no matter what.\p"
	.string "It's inevitable, and I don't need to help\n"
	.string "speed it up.\p"
	.string "Here, you can even take this.$"

MeltingSnowForest_EventScript_Ursaring_Text_0:
# 773 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Ursaring roared violently, better\n"
	.string "get away!$"

MeltingSnowForest_EventScript_FightingHiker_Text_0:
# 795 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Help! I was looking for that girl, and\n"
	.string "this Ursaring attacked me out of\l"
	.string "nowhere!\p"
	.string "I can't fend it off much longer, do you\n"
	.string "have anything that could ward it off?$"

MeltingSnowForest_EventScript_FightingHiker_Text_1:
# 802 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Oh, is that a fire gem? Here, give me\n"
	.string "that!$"

MeltingSnowForest_EventScript_FightingHiker_Text_2:
# 810 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Take this, Ursaring!$"

MeltingSnowForest_EventScript_FightingHiker_Text_3:
# 845 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I can't believe that worked, you just\n"
	.string "saved my life!\p"
	.string "I wonder why that Ursaring was so\n"
	.string "persistent, maybe it was because of\l"
	.string "this!$"

MeltingSnowForest_EventScript_FightingHiker_Text_4:
# 855 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Hopefully you don't get any Pokémon\n"
	.string "smelling that berry in your bag and\l"
	.string "hunting you down!$"

MeltingSnowForest_EventScript_OldWoman_Text_0:
# 866 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Oh, these poor Pokémon. They seem to be\n"
	.string "starving!\p"
	.string "I think their food sources have\n"
	.string "disappeared as a result of climate\l"
	.string "change.\p"
	.string "Will you help me gather some food for\n"
	.string "them?$"

MeltingSnowForest_EventScript_OldWoman_Text_1:
# 871 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Is that a Sitrus Berry? Where did you\n"
	.string "find it?\p"
	.string "Here, I'll give it to this poor little\n"
	.string "Teddiursa!$"

MeltingSnowForest_EventScript_OldWoman_Text_2:
# 888 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Here you go, eat up!$"

MeltingSnowForest_EventScript_OldWoman_Text_3:
# 930 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Thank you, dear!$"

MeltingSnowForest_EventScript_OldWoman_Text_4:
# 934 "data/maps/MeltingSnowForest/scripts.pory"
	.string "That looks like an Oran Berry!\p"
	.string "I'm sure this hungry Swinub would love\n"
	.string "it.$"

MeltingSnowForest_EventScript_OldWoman_Text_5:
# 953 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Enjoy, my friend!$"

MeltingSnowForest_EventScript_OldWoman_Text_6:
# 995 "data/maps/MeltingSnowForest/scripts.pory"
	.string "That Swinub was so excited.$"

MeltingSnowForest_EventScript_OldWoman_Text_7:
# 999 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Wow, a Cheri Berry!\p"
	.string "This starving Sentret could certainly\n"
	.string "use this.$"

MeltingSnowForest_EventScript_OldWoman_Text_8:
# 1018 "data/maps/MeltingSnowForest/scripts.pory"
	.string "It's your lucky day!$"

MeltingSnowForest_EventScript_OldWoman_Text_9:
# 1060 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Sentret devoured the berry!$"

MeltingSnowForest_EventScript_OldWoman_Text_10:
# 1063 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I'm sure you can find something these\n"
	.string "Pokémon could eat!$"

MeltingSnowForest_EventScript_OldWoman_Text_11:
# 1066 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Do you think you could find food for\n"
	.string "these other two Pokémon?$"

MeltingSnowForest_EventScript_OldWoman_Text_12:
# 1069 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Just one more hungry Pokémon!$"

MeltingSnowForest_EventScript_OldWoman_Text_13:
# 1072 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Thank you for your help! I'm sure these\n"
	.string "Pokémon are very grateful.$"

MeltingSnowForest_EventScript_HungryTeddiursa_Text_0:
# 1108 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Teddiursa seems weak.$"

MeltingSnowForest_EventScript_HungryTeddiursa_Text_1:
# 1114 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Teddiursa is happily eating!$"

MeltingSnowForest_EventScript_HungrySwinub_Text_0:
# 1129 "data/maps/MeltingSnowForest/scripts.pory"
	.string "It looks faint.$"

MeltingSnowForest_EventScript_HungrySwinub_Text_1:
# 1135 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Swinub looks satisfied.$"

MeltingSnowForest_EventScript_HungrySentret_Text_0:
# 1150 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Sentret is swaying back and forth.$"

MeltingSnowForest_EventScript_HungrySentret_Text_1:
# 1156 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Sentret happily licked berry juice off\n"
	.string "their fur!$"

MeltingSnowForest_EventScript_Froslass_Text_0:
# 1182 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Pokémon furiously attacked!$"

MeltingSnowForest_EventScript_WaterWoman_Text_0:
# 1270 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I hear that new flora may be sprouting\n"
	.string "as the forest thaws, and I came here\l"
	.string "looking for flowers!\p"
	.string "However, those two Pokémon got into a\n"
	.string "fight, trapping me here.\p"
	.string "Thank you for scaring them off, you can\n"
	.string "have this!$"

MeltingSnowForest_EventScript_WaterWoman_Text_1:
# 1275 "data/maps/MeltingSnowForest/scripts.pory"
	.string "No flowers, but I did come across a\n"
	.string "berry.\p"
	.string "Thank you again for helping me out!$"

MeltingSnowForest_EventScript_LastScientist_Text_0:
# 1293 "data/maps/MeltingSnowForest/scripts.pory"
	.string "These Pokémon are displaying irregular,\n"
	.string "aggressive behavior.\p"
	.string "It seems like they've been infected by\n"
	.string "something that emerged from the frost.\l"
	.string "Perhaps the legends were true.$"

MeltingSnowForest_EventScript_LastScientist_Text_1:
# 1296 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Stantler show no sign of budging.$"

MeltingSnowForest_EventScript_LastScientist_Text_2:
# 1298 "data/maps/MeltingSnowForest/scripts.pory"
	.string "A pair of Pokémon were bullying a\n"
	.string "defenseless Parasect to the south.\p"
	.string "Perhaps the Mushroom Pokémon has\n"
	.string "something to do with this illness we're\l"
	.string "observing.\p"
	.string "Could you investigate?$"

MeltingSnowForest_EventScript_LastScientist_Text_3:
# 1304 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I heard two Pokémon locked in a brawl,\n"
	.string "trapping a woman.\p"
	.string "Someone should save her!$"

MeltingSnowForest_EventScript_LastScientist_Text_4:
# 1310 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Another Stantler in this forest\n"
	.string "appeared to be infected and was\l"
	.string "extremely feverish.\p"
	.string "Could you give it some water to see if\n"
	.string "that could help it feel better?$"

MeltingSnowForest_EventScript_LastScientist_Text_5:
# 1316 "data/maps/MeltingSnowForest/scripts.pory"
	.string "While probing this forest, I came across\n"
	.string "several hungry Pokémon on the brink of\l"
	.string "starvation.\p"
	.string "In particular, three young Pokémon by\n"
	.string "the river looked in rough shape. Could\l"
	.string "you assist?$"

MeltingSnowForest_EventScript_LastScientist_Text_6:
# 1323 "data/maps/MeltingSnowForest/scripts.pory"
	.string "You investigated the whole forest?\n"
	.string "Wow!\p"
	.string "Lucky for you, those Stantler appear to\n"
	.string "have left!$"

MeltingSnowForest_EventScript_FightingStantler_Text_0:
# 1333 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Stantler is locked into combat, it\n"
	.string "does not notice you.$"

MeltingSnowForest_AlbedoScientist_Text_0:
# 1341 "data/maps/MeltingSnowForest/scripts.pory"
	.string "As snow melts, dark land is exposed.\n"
	.string "These areas absorb more radiation from\l"
	.string "the sun than reflective snow,\l"
	.string "increasing the temperature of the\l"
	.string "earth.\p"
	.string "In this way, global warming is a positive\n"
	.string "feedback loop!$"

MeltingSnowForest_EventScript_Decay_Text_0:
# 1383 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Decaying plant and animal matter from\n"
	.string "the past has been unearthed as the\l"
	.string "snow melts.\p"
	.string "As this matter is exposed, methane is\n"
	.string "released, which increases the impact of\l"
	.string "the greenhouse effect.\p"
	.string "I don't see how this forest stands a\n"
	.string "chance of maintaining a natural\l"
	.string "equilibrium much longer.$"

MeltingSnowForest_EventScript_LittleGirl_Text_0:
# 1408 "data/maps/MeltingSnowForest/scripts.pory"
	.string "So cold...\p"
	.string "I don't think anyone's coming...$"

MeltingSnowForest_EventScript_LittleGirl_Text_1:
# 1411 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Sniffle...$"

MeltingSnowForest_EventScript_LittleGirl_Text_2:
# 1430 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Did you scare off those mean Stantler?\p"
	.string "Are you here to save me?$"

MeltingSnowForest_EventScript_LittleGirl_Text_3:
# 1435 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I'm sorry! I didn't mean to run off!\p"
	.string "I'll never do it ever again, I promise!\p"
	.string "I just want to go home.$"

MeltingSnowForest_EventScript_LittleGirl_Text_4:
# 1442 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Wh-what was that?$"

MeltingSnowForest_EventScript_LittleGirl_Text_5:
# 1518 "data/maps/MeltingSnowForest/scripts.pory"
	.string "They ran away!\p"
	.string "Those Stantler were so scary!$"

MeltingSnowForest_EventScript_LittleGirl_Text_6:
# 1523 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Let's go home!$"

MeltingSnowForest_EventScript_LittleGirl_Text_7:
# 1541 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Wait, I don't feel so good...$"

MeltingSnowForest_EventScript_LittleGirl_Text_8:
# 1551 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Cough, cough...$"

MeltingSnowForest_EventScript_LittleGirl_Text_9:
# 1564 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Wait, please...\p"
	.string "Don't leave me behind...$"

MeltingSnowForest_EventScript_Chansey_Text_0:
# 1589 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Chan Chan!$"

MeltingSnowForest_EventScript_Chansey_Text_1:
# 1595 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Chansey healed your team!$"

Timmy_Intro::
# 679 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Bugs have emerged from the frost!\n"
	.string "Look at mine!$"

Timmy_Outro::
# 682 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I think my bugs were frozen for years!$"

PostBattle_Timmy::
# 685 "data/maps/MeltingSnowForest/scripts.pory"
	.string "A little girl got lost? I hope someone\n"
	.string "can find her!$"

Martin_Intro::
# 1355 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Forests like this account for one of\n"
	.string "the world's largest carbon sinks!$"

Martin_Outro::
# 1358 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Boreal forests hold hundreds of\n"
	.string "billions of tons of carbon!$"

PostBattle_Martin::
# 1361 "data/maps/MeltingSnowForest/scripts.pory"
	.string "If these forests go away, the world\n"
	.string "won't be able to hold as much carbon.\p"
	.string "The world will continue to heat up.$"

Anthony_Intro::
# 1371 "data/maps/MeltingSnowForest/scripts.pory"
	.string "This forest has warmed three times\n"
	.string "faster than anywhere else in the world!$"

Anthony_Outro::
# 1374 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Ah! This battle was too hot!$"

PostBattle_Anthony::
# 1377 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Polar regions like this have\n"
	.string "experienced rapid warming due to arctic\l"
	.string "amplification.\p"
	.string "I learned about that from a scientist!$"
