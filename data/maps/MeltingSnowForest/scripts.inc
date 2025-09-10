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
	givemon SPECIES_ABSOL, 40, 0, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_DOUBLE_TEAM, MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_DETECT
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
	givemon SPECIES_ABSOL, 40, 0, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_DOUBLE_TEAM, MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_DETECT
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
	givemon SPECIES_ABSOL, 40, 0, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_DOUBLE_TEAM, MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_DETECT
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
	givemon SPECIES_ABSOL, 40, 0, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_DOUBLE_TEAM, MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_DETECT
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
	setwildbattle SPECIES_SAWSBUCK_WINTER, 35, ITEM_NONE, SPECIES_SNEASEL, 35, ITEM_NONE
# 222 "data/maps/MeltingSnowForest/scripts.pory"
	dowildbattle
# 223 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 224 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 225 "data/maps/MeltingSnowForest/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 226 "data/maps/MeltingSnowForest/scripts.pory"
	callnative UpdateFollowingPokemon
# 227 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 228 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, Common_Movement_FaceRight
# 229 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, Common_Movement_FaceUp
# 230 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 231 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 232 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, Common_Movement_ShoveRight
# 233 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, Common_Movement_ShoveUp
# 234 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BITE
# 235 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 236 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 237 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, SneaselExitLeft
# 238 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 239 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, MeltingSnowForest_EventScript_Sawsbuck_Movement_0
# 240 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, SawsbuckExitLeft
# 241 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 242 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_EXIT
# 243 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 244 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 245 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, MeltingSnowForest_EventScript_Sawsbuck_Movement_1
# 246 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 247 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 248 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 249 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_PARASECT, CRY_MODE_NORMAL
# 250 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 251 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_1
# 252 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 253 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, Common_Movement_ShoveLeft
# 254 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 255 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 256 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 257 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_2
# 258 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 259 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 260 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, Common_Movement_WalkLeft
# 261 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 262 "data/maps/MeltingSnowForest/scripts.pory"
	givemon SPECIES_PARASECT, 20, 0, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_DOUBLE_TEAM, MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_DETECT
# 263 "data/maps/MeltingSnowForest/scripts.pory"
	delay 10
# 264 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 20
# 265 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 21
# 266 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 22
# 267 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 268 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BALL
# 269 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 270 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_PARASECT_DOUBLE_BATTLE
# 271 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 272 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end


MeltingSnowForest_EventScript_Sneasel::
# 279 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 280 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 281 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 282 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, Common_Movement_FaceDown
# 283 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 284 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SNEASEL, CRY_MODE_ENCOUNTER
# 285 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 286 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 287 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 288 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq MeltingSnowForest_EventScript_Sneasel_2
MeltingSnowForest_EventScript_Sneasel_1:
# 291 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq MeltingSnowForest_EventScript_Sneasel_5
MeltingSnowForest_EventScript_Sneasel_4:
# 294 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 295 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 296 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 297 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_0
# 298 "data/maps/MeltingSnowForest/scripts.pory"
	setwildbattle SPECIES_SAWSBUCK_WINTER, 35, ITEM_NONE, SPECIES_SNEASEL, 35, ITEM_NONE
# 299 "data/maps/MeltingSnowForest/scripts.pory"
	dowildbattle
# 300 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 301 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 302 "data/maps/MeltingSnowForest/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 303 "data/maps/MeltingSnowForest/scripts.pory"
	callnative UpdateFollowingPokemon
# 304 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 305 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, Common_Movement_FaceRight
# 306 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, Common_Movement_FaceUp
# 307 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 308 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 309 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, Common_Movement_ShoveRight
# 310 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, Common_Movement_ShoveUp
# 311 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BITE
# 312 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 313 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 314 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 315 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq MeltingSnowForest_EventScript_Sneasel_8
MeltingSnowForest_EventScript_Sneasel_7:
# 341 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq MeltingSnowForest_EventScript_Sneasel_11
MeltingSnowForest_EventScript_Sneasel_10:
# 367 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 368 "data/maps/MeltingSnowForest/scripts.pory"
	givemon SPECIES_PARASECT, 20, 0, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_DOUBLE_TEAM, MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_DETECT
# 369 "data/maps/MeltingSnowForest/scripts.pory"
	delay 10
# 370 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 20
# 371 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 21
# 372 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 22
# 373 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 374 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BALL
# 375 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 376 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_PARASECT_DOUBLE_BATTLE
# 377 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 378 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_Sneasel_2:
# 289 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, Common_Movement_ShoveDown
	goto MeltingSnowForest_EventScript_Sneasel_1

MeltingSnowForest_EventScript_Sneasel_5:
# 292 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, Common_Movement_ShoveLeft
	goto MeltingSnowForest_EventScript_Sneasel_4

MeltingSnowForest_EventScript_Sneasel_8:
# 316 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, SneaselExitRight
# 317 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 318 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 319 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, SawsbuckExitRight
# 320 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 321 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_EXIT
# 322 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 323 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 324 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, MeltingSnowForest_EventScript_Sneasel_Movement_0
# 325 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 326 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 327 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 328 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_PARASECT, CRY_MODE_NORMAL
# 329 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 330 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_1
# 331 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 332 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, Common_Movement_ShoveDown
# 333 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 334 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 335 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 336 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_2
# 337 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 338 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 339 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, Common_Movement_WalkDown
	goto MeltingSnowForest_EventScript_Sneasel_7

MeltingSnowForest_EventScript_Sneasel_11:
# 342 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, SneaselExitLeft
# 343 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 344 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, MeltingSnowForest_EventScript_Sawsbuck_Movement_0
# 345 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, SawsbuckExitLeft
# 346 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 347 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_EXIT
# 348 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 349 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 350 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, MeltingSnowForest_EventScript_Sawsbuck_Movement_1
# 351 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 352 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 353 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 354 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_PARASECT, CRY_MODE_NORMAL
# 355 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 356 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_1
# 357 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 358 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, Common_Movement_ShoveLeft
# 359 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 360 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 361 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 362 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_2
# 363 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 364 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 365 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, Common_Movement_WalkLeft
	goto MeltingSnowForest_EventScript_Sneasel_10


# 384 "data/maps/MeltingSnowForest/scripts.pory"
SneaselExitLeft:
# 385 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 385 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 386 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 386 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 387 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 388 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 388 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 388 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 388 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 388 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 388 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 388 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 388 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 391 "data/maps/MeltingSnowForest/scripts.pory"
SawsbuckExitLeft:
# 392 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 393 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
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
SneaselExitRight:
# 400 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
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
# 402 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 402 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 402 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 402 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 402 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 402 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 402 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 402 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 405 "data/maps/MeltingSnowForest/scripts.pory"
SawsbuckExitRight:
# 406 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 406 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 406 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 406 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 407 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 407 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 407 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 407 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 407 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 407 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 407 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 407 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 407 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 407 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 410 "data/maps/MeltingSnowForest/scripts.pory"
AbsolRightTop:
# 411 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 411 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 411 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 411 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 412 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 413 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 413 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 413 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 416 "data/maps/MeltingSnowForest/scripts.pory"
AbsolRightTopMid:
# 417 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 417 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 417 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 417 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 417 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 417 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 417 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 420 "data/maps/MeltingSnowForest/scripts.pory"
AbsolRightBottomMid:
# 421 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 421 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 421 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 421 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 422 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 423 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 423 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 423 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 426 "data/maps/MeltingSnowForest/scripts.pory"
AbsolRightBottom:
# 427 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 427 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 427 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 427 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 428 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 428 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 429 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 429 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 429 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

MeltingSnowForest_EventScript_Camper1::
# 433 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 434 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_Camper1_2
MeltingSnowForest_EventScript_Camper1_1:
# 437 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_Camper1_5
MeltingSnowForest_EventScript_Camper1_4:
# 440 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 441 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 24, Common_Movement_FaceOriginalDirection
# 442 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 443 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_Camper1_2:
# 435 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Camper1_Text_0
	goto MeltingSnowForest_EventScript_Camper1_1

MeltingSnowForest_EventScript_Camper1_5:
# 438 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Camper1_Text_1
	goto MeltingSnowForest_EventScript_Camper1_4


MeltingSnowForest_EventScript_StantlerHiker::
# 448 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 449 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_StantlerHiker_Text_0
# 450 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 451 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 34, Common_Movement_FaceOriginalDirection
# 452 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 453 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


MeltingSnowForest_EventScript_HotStantler::
# 458 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 459 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HotStantler_Text_0
# 460 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 461 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 33, Common_Movement_FaceOriginalDirection
# 462 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 463 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


MeltingSnowForest_EventScript_Heat::
# 468 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HEAT_CUTSCENE, MeltingSnowForest_EventScript_Heat_2
MeltingSnowForest_EventScript_Heat_1:
# 530 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_Heat_2:
# 469 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 470 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 471 "data/maps/MeltingSnowForest/scripts.pory"
	special SpawnCameraObject
# 472 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 473 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 34, Common_Movement_FaceUp
# 474 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 33, StantlerMovement
# 475 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 476 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq MeltingSnowForest_EventScript_Heat_5
MeltingSnowForest_EventScript_Heat_4:
# 479 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq MeltingSnowForest_EventScript_Heat_8
MeltingSnowForest_EventScript_Heat_7:
# 482 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq MeltingSnowForest_EventScript_Heat_11
MeltingSnowForest_EventScript_Heat_10:
# 485 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 23
	goto_if_eq MeltingSnowForest_EventScript_Heat_14
MeltingSnowForest_EventScript_Heat_13:
# 488 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 24
	goto_if_eq MeltingSnowForest_EventScript_Heat_17
MeltingSnowForest_EventScript_Heat_16:
# 491 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 33
# 492 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 493 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 494 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 495 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 33, Common_Movement_JumpInPlaceLeft
# 496 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 497 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 498 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 33, StantlerWater
# 499 "data/maps/MeltingSnowForest/scripts.pory"
	delay 28
# 500 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 501 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 502 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BUBBLE
# 503 "data/maps/MeltingSnowForest/scripts.pory"
	delay 35
# 504 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BUBBLE
# 505 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 506 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 507 "data/maps/MeltingSnowForest/scripts.pory"
	setobjectxy 33, 17, 35
# 508 "data/maps/MeltingSnowForest/scripts.pory"
	setobjectxyperm 33, 17, 35
# 509 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 510 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq MeltingSnowForest_EventScript_Heat_20
MeltingSnowForest_EventScript_Heat_19:
# 513 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq MeltingSnowForest_EventScript_Heat_23
MeltingSnowForest_EventScript_Heat_22:
# 516 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq MeltingSnowForest_EventScript_Heat_26
MeltingSnowForest_EventScript_Heat_25:
# 519 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 23
	goto_if_eq MeltingSnowForest_EventScript_Heat_29
MeltingSnowForest_EventScript_Heat_28:
# 522 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 24
	goto_if_eq MeltingSnowForest_EventScript_Heat_32
MeltingSnowForest_EventScript_Heat_31:
# 525 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 526 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_HEAT_CUTSCENE
# 527 "data/maps/MeltingSnowForest/scripts.pory"
	special RemoveCameraObject
# 528 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
	goto MeltingSnowForest_EventScript_Heat_1

MeltingSnowForest_EventScript_Heat_5:
# 477 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToScene1
	goto MeltingSnowForest_EventScript_Heat_4

MeltingSnowForest_EventScript_Heat_8:
# 480 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToScene2
	goto MeltingSnowForest_EventScript_Heat_7

MeltingSnowForest_EventScript_Heat_11:
# 483 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToScene3
	goto MeltingSnowForest_EventScript_Heat_10

MeltingSnowForest_EventScript_Heat_14:
# 486 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToScene4
	goto MeltingSnowForest_EventScript_Heat_13

MeltingSnowForest_EventScript_Heat_17:
# 489 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToScene5
	goto MeltingSnowForest_EventScript_Heat_16

MeltingSnowForest_EventScript_Heat_20:
# 511 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraReturn1
	goto MeltingSnowForest_EventScript_Heat_19

MeltingSnowForest_EventScript_Heat_23:
# 514 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraReturn2
	goto MeltingSnowForest_EventScript_Heat_22

MeltingSnowForest_EventScript_Heat_26:
# 517 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraReturn3
	goto MeltingSnowForest_EventScript_Heat_25

MeltingSnowForest_EventScript_Heat_29:
# 520 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraReturn4
	goto MeltingSnowForest_EventScript_Heat_28

MeltingSnowForest_EventScript_Heat_32:
# 523 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraReturn5
	goto MeltingSnowForest_EventScript_Heat_31


# 534 "data/maps/MeltingSnowForest/scripts.pory"
CameraToScene1:
# 535 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 535 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 535 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 536 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
	step_end

# 539 "data/maps/MeltingSnowForest/scripts.pory"
CameraToScene2:
# 540 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 540 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 541 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 541 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
	step_end

# 544 "data/maps/MeltingSnowForest/scripts.pory"
CameraToScene3:
# 545 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 546 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 546 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 546 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
	step_end

# 549 "data/maps/MeltingSnowForest/scripts.pory"
CameraToScene4:
# 550 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 550 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 550 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 550 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
	step_end

# 553 "data/maps/MeltingSnowForest/scripts.pory"
CameraToScene5:
# 554 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northwest
# 555 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 555 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 555 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
	step_end

# 558 "data/maps/MeltingSnowForest/scripts.pory"
CameraReturn1:
# 559 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 560 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
# 560 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
# 560 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
	step_end

# 563 "data/maps/MeltingSnowForest/scripts.pory"
CameraReturn2:
# 564 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 564 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 565 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
# 565 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
	step_end

# 568 "data/maps/MeltingSnowForest/scripts.pory"
CameraReturn3:
# 569 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 569 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 569 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 570 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
	step_end

# 573 "data/maps/MeltingSnowForest/scripts.pory"
CameraReturn4:
# 574 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 574 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 574 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 574 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
	step_end

# 577 "data/maps/MeltingSnowForest/scripts.pory"
CameraReturn5:
# 578 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 578 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 578 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 579 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southeast
	step_end

# 582 "data/maps/MeltingSnowForest/scripts.pory"
StantlerMovement:
# 583 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 583 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 583 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 584 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 584 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 584 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 585 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 585 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 585 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 586 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 586 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 586 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 587 "data/maps/MeltingSnowForest/scripts.pory"
	face_left
	step_end

# 590 "data/maps/MeltingSnowForest/scripts.pory"
StantlerWater:
# 591 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 591 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 591 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 592 "data/maps/MeltingSnowForest/scripts.pory"
	jump_left
# 593 "data/maps/MeltingSnowForest/scripts.pory"
	set_invisible
# 594 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 594 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 594 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 594 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 595 "data/maps/MeltingSnowForest/scripts.pory"
	set_visible
# 596 "data/maps/MeltingSnowForest/scripts.pory"
	jump_left
	step_end

MeltingSnowForest_EventScript_HeatCutsceneDone::
# 600 "data/maps/MeltingSnowForest/scripts.pory"
	setobjectxyperm 33, 17, 35
# 601 "data/maps/MeltingSnowForest/scripts.pory"
	SetObjectMovementType 33, MOVEMENT_TYPE_FACE_UP_AND_LEFT
# 602 "data/maps/MeltingSnowForest/scripts.pory"
	addobject 33
	return


MeltingSnowForest_EventScript_FirstScientist::
# 606 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 607 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FirstScientist_Text_0
# 608 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 609 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 25, Common_Movement_FaceOriginalDirection
# 610 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 611 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


MeltingSnowForest_EventScript_BugCatcher::
# 616 "data/maps/MeltingSnowForest/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, Timmy_Intro, Timmy_Outro
# 617 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox PostBattle_Timmy, MSGBOX_AUTOCLOSE
# 618 "data/maps/MeltingSnowForest/scripts.pory"
	waitmessage
	end


MeltingSnowForest_EventScript_Farmer::
# 633 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 634 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_FIRE_FARMER, MeltingSnowForest_EventScript_Farmer_2
MeltingSnowForest_EventScript_Farmer_1:
# 662 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_FIRE_FARMER, MeltingSnowForest_EventScript_Farmer_5
MeltingSnowForest_EventScript_Farmer_4:
# 671 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_Farmer_2:
# 635 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 636 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 637 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 638 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 639 "data/maps/MeltingSnowForest/scripts.pory"
	delay 60
# 640 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FaceLeft
# 641 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 642 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 643 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_ShoveLeft
# 644 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_FIRE_PUNCH
# 645 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 646 "data/maps/MeltingSnowForest/scripts.pory"
	delay 120
# 647 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 648 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Farmer_Text_0
# 649 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 650 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 651 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 652 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 653 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_ShoveUp
# 654 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_FIRE_PUNCH
# 655 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 656 "data/maps/MeltingSnowForest/scripts.pory"
	delay 60
# 657 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 658 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 659 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Farmer_Text_1
# 660 "data/maps/MeltingSnowForest/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, MeltingSnowForest_EventScript_Farmer_Text_2, MeltingSnowForest_EventScript_Farmer_Text_3, MeltingSnowForest_EventScript_AfterFarmer
	goto MeltingSnowForest_EventScript_Farmer_1

MeltingSnowForest_EventScript_Farmer_5:
# 663 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 664 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 665 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 666 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Farmer_Text_4
# 667 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 668 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FaceOriginalDirection
# 669 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
	goto MeltingSnowForest_EventScript_Farmer_4


MeltingSnowForest_EventScript_AfterFarmer::
# 676 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 677 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 678 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FaceAwayPlayer
# 679 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 680 "data/maps/MeltingSnowForest/scripts.pory"
	delay 60
# 681 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 682 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq MeltingSnowForest_EventScript_AfterFarmer_2
MeltingSnowForest_EventScript_AfterFarmer_1:
# 685 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq MeltingSnowForest_EventScript_AfterFarmer_5
MeltingSnowForest_EventScript_AfterFarmer_4:
# 688 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 689 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 690 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_AfterFarmer_Text_0
# 691 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 692 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 693 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FacePlayer
# 694 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 695 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 696 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq MeltingSnowForest_EventScript_AfterFarmer_8
MeltingSnowForest_EventScript_AfterFarmer_7:
# 699 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq MeltingSnowForest_EventScript_AfterFarmer_11
MeltingSnowForest_EventScript_AfterFarmer_10:
# 702 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 703 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 704 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_AfterFarmer_Text_1
# 705 "data/maps/MeltingSnowForest/scripts.pory"
	giveitem ITEM_FIRE_GEM_KEY
# 706 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_FIRE_FARMER
# 707 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_AfterFarmer_2:
# 683 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceUp
	goto MeltingSnowForest_EventScript_AfterFarmer_1

MeltingSnowForest_EventScript_AfterFarmer_5:
# 686 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceLeft
	goto MeltingSnowForest_EventScript_AfterFarmer_4

MeltingSnowForest_EventScript_AfterFarmer_8:
# 697 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceDown
	goto MeltingSnowForest_EventScript_AfterFarmer_7

MeltingSnowForest_EventScript_AfterFarmer_11:
# 700 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceRight
	goto MeltingSnowForest_EventScript_AfterFarmer_10


MeltingSnowForest_EventScript_Ursaring::
# 712 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 713 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_URSARING, CRY_MODE_NORMAL
# 714 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 715 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Ursaring_Text_0
# 716 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 717 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 27, Common_Movement_FaceOriginalDirection
# 718 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 719 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


MeltingSnowForest_EventScript_FightingHiker::
# 724 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_FIRE_FARMER, MeltingSnowForest_EventScript_FightingHiker_2
MeltingSnowForest_EventScript_FightingHiker_1:
# 741 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_FIRE_FARMER, MeltingSnowForest_EventScript_FightingHiker_6
MeltingSnowForest_EventScript_FightingHiker_4:
# 795 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_FIRE_HIKER, MeltingSnowForest_EventScript_FightingHiker_13
MeltingSnowForest_EventScript_FightingHiker_12:
# 800 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 801 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_FightingHiker_2:
# 725 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 726 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 727 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 728 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_10
MeltingSnowForest_EventScript_FightingHiker_9:
# 731 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 56
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_19
MeltingSnowForest_EventScript_FightingHiker_18:
# 734 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 735 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 736 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 737 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FightingHiker_Text_0
# 738 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 739 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_FaceOriginalDirection
	goto MeltingSnowForest_EventScript_FightingHiker_1

MeltingSnowForest_EventScript_FightingHiker_5:
# 742 "data/maps/MeltingSnowForest/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_LOOK_AROUND
# 743 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 744 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FightingHiker_Text_1
# 745 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 746 "data/maps/MeltingSnowForest/scripts.pory"
	removeitem ITEM_FIRE_GEM_KEY
# 747 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_FaceRight
# 748 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 749 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 750 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceRight
# 751 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 752 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FightingHiker_Text_2
# 753 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 754 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_ShoveRight
# 755 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_FIRE_PUNCH
# 756 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 757 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 27, Common_Movement_JumpInPlaceLeft
# 758 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 759 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 760 "data/maps/MeltingSnowForest/scripts.pory"
	delay 20
# 761 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 27, MeltingSnowForest_EventScript_FightingHiker_Movement_0
# 762 "data/maps/MeltingSnowForest/scripts.pory"
	delay 10
# 763 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_FaceDown
# 764 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 765 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 766 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 767 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 27
# 768 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 769 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 770 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_16
MeltingSnowForest_EventScript_FightingHiker_15:
# 773 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 56
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_22
MeltingSnowForest_EventScript_FightingHiker_21:
# 776 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 27, Common_Movement_FacePlayer
# 777 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 778 "data/maps/MeltingSnowForest/scripts.pory"
	delay 20
# 779 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_25
MeltingSnowForest_EventScript_FightingHiker_24:
# 782 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 56
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_28
MeltingSnowForest_EventScript_FightingHiker_27:
# 785 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 786 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 787 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FightingHiker_Text_3
# 788 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 789 "data/maps/MeltingSnowForest/scripts.pory"
	giveitem ITEM_SITRUS_BERRY_KEY, 1
# 790 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_FIRE_HIKER
# 791 "data/maps/MeltingSnowForest/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_LOOK_AROUND, FALSE
# 792 "data/maps/MeltingSnowForest/scripts.pory"
	addobject 26
# 793 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 27
	goto MeltingSnowForest_EventScript_FightingHiker_4

MeltingSnowForest_EventScript_FightingHiker_6:
# 741 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_FIRE_HIKER, MeltingSnowForest_EventScript_FightingHiker_5
	goto MeltingSnowForest_EventScript_FightingHiker_4

MeltingSnowForest_EventScript_FightingHiker_10:
# 729 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_JumpInPlaceLeft
	goto MeltingSnowForest_EventScript_FightingHiker_9

MeltingSnowForest_EventScript_FightingHiker_13:
# 796 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 797 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FightingHiker_Text_4
# 798 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
	goto MeltingSnowForest_EventScript_FightingHiker_12

MeltingSnowForest_EventScript_FightingHiker_16:
# 771 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto MeltingSnowForest_EventScript_FightingHiker_15

MeltingSnowForest_EventScript_FightingHiker_19:
# 732 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_JumpInPlaceDown
	goto MeltingSnowForest_EventScript_FightingHiker_18

MeltingSnowForest_EventScript_FightingHiker_22:
# 774 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto MeltingSnowForest_EventScript_FightingHiker_21

MeltingSnowForest_EventScript_FightingHiker_25:
# 780 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceLeft
	goto MeltingSnowForest_EventScript_FightingHiker_24

MeltingSnowForest_EventScript_FightingHiker_28:
# 783 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceDown
	goto MeltingSnowForest_EventScript_FightingHiker_27


MeltingSnowForest_EventScript_OldWoman::
# 806 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 807 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_OLD_WOMAN_BERRY_INTRO, MeltingSnowForest_EventScript_OldWoman_2
MeltingSnowForest_EventScript_OldWoman_1:
# 811 "data/maps/MeltingSnowForest/scripts.pory"
	checkitem ITEM_SITRUS_BERRY_KEY, 1
# 812 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_5
MeltingSnowForest_EventScript_OldWoman_4:
# 871 "data/maps/MeltingSnowForest/scripts.pory"
	checkitem ITEM_ORAN_BERRY_KEY, 1
# 872 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_8
MeltingSnowForest_EventScript_OldWoman_7:
# 933 "data/maps/MeltingSnowForest/scripts.pory"
	checkitem ITEM_CHERI_BERRY_KEY, 1
# 934 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_15
MeltingSnowForest_EventScript_OldWoman_14:
# 995 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_SNOW_BERRY_WOMAN, 0
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_26
MeltingSnowForest_EventScript_OldWoman_25:
# 998 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_SNOW_BERRY_WOMAN, 1
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_40
MeltingSnowForest_EventScript_OldWoman_39:
# 1001 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_SNOW_BERRY_WOMAN, 2
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_53
MeltingSnowForest_EventScript_OldWoman_52:
# 1004 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_SNOW_BERRY_WOMAN, 3
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_65
MeltingSnowForest_EventScript_OldWoman_64:
# 1007 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1008 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1009 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_OldWoman_2:
# 808 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_0
# 809 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_OLD_WOMAN_BERRY_INTRO
	goto MeltingSnowForest_EventScript_OldWoman_1

MeltingSnowForest_EventScript_OldWoman_5:
# 813 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_1
# 814 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 815 "data/maps/MeltingSnowForest/scripts.pory"
	removeitem ITEM_SITRUS_BERRY_KEY, 1
# 816 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 817 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_11
# 821 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_10:
# 823 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 824 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 825 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 826 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 827 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_WalkInPlaceRight
# 828 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 829 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 830 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_2
# 831 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 832 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 833 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_ShoveRightSlower
# 834 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_PUDDLE
# 835 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 836 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 837 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 43, Common_Movement_JumpInPlaceLeft
# 838 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 839 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 840 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 841 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_TEDDIURSA, CRY_MODE_NORMAL
# 842 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 843 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 844 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 43, Common_Movement_FaceOriginalDirection
# 845 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 846 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_22
# 850 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_21:
# 852 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 853 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_37
MeltingSnowForest_EventScript_OldWoman_36:
# 856 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_50
MeltingSnowForest_EventScript_OldWoman_49:
# 859 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 29
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_62
MeltingSnowForest_EventScript_OldWoman_61:
# 862 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_74
MeltingSnowForest_EventScript_OldWoman_73:
# 865 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_FacePlayer
# 866 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 867 "data/maps/MeltingSnowForest/scripts.pory"
	addvar VAR_SNOW_BERRY_WOMAN, 1
# 868 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_HUNGRY_TEDDIURSA
# 869 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_3
	goto MeltingSnowForest_EventScript_OldWoman_4

MeltingSnowForest_EventScript_OldWoman_8:
# 873 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_4
# 874 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 875 "data/maps/MeltingSnowForest/scripts.pory"
	removeitem ITEM_ORAN_BERRY_KEY, 1
# 876 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 877 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_18
# 881 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_17:
# 883 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 884 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_FaceUp
# 885 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 886 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 887 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 888 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 889 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_WalkInPlaceUp
# 890 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 891 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 892 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_5
# 893 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 894 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 895 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_ShoveUpSlower
# 896 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_PUDDLE
# 897 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 898 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 899 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 42, Common_Movement_JumpInPlaceDown
# 900 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 901 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 902 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 903 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_NORMAL
# 904 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 905 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 906 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 42, Common_Movement_FaceOriginalDirection
# 907 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 908 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_33
# 912 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_32:
# 914 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 915 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_47
MeltingSnowForest_EventScript_OldWoman_46:
# 918 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_59
MeltingSnowForest_EventScript_OldWoman_58:
# 921 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 29
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_71
MeltingSnowForest_EventScript_OldWoman_70:
# 924 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_80
MeltingSnowForest_EventScript_OldWoman_79:
# 927 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_FacePlayer
# 928 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 929 "data/maps/MeltingSnowForest/scripts.pory"
	addvar VAR_SNOW_BERRY_WOMAN, 1
# 930 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_HUNGRY_SWINUB
# 931 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_6
	goto MeltingSnowForest_EventScript_OldWoman_7

MeltingSnowForest_EventScript_OldWoman_11:
# 818 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_10

MeltingSnowForest_EventScript_OldWoman_15:
# 935 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_7
# 936 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 937 "data/maps/MeltingSnowForest/scripts.pory"
	removeitem ITEM_CHERI_BERRY_KEY, 1
# 938 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 939 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_29
# 943 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_28:
# 945 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 946 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_FaceDown
# 947 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 948 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 949 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 950 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 951 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_WalkInPlaceDown
# 952 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 953 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 954 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_8
# 955 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 956 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 957 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_ShoveDownSlower
# 958 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_PUDDLE
# 959 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 960 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 961 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 44, Common_Movement_JumpInPlaceUp
# 962 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 963 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 964 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 965 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SENTRET, CRY_MODE_NORMAL
# 966 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 967 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 968 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 44, Common_Movement_FaceOriginalDirection
# 969 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 970 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_43
# 974 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_42:
# 976 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 977 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_56
MeltingSnowForest_EventScript_OldWoman_55:
# 980 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_68
MeltingSnowForest_EventScript_OldWoman_67:
# 983 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 29
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_77
MeltingSnowForest_EventScript_OldWoman_76:
# 986 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_83
MeltingSnowForest_EventScript_OldWoman_82:
# 989 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_FacePlayer
# 990 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 991 "data/maps/MeltingSnowForest/scripts.pory"
	addvar VAR_SNOW_BERRY_WOMAN, 1
# 992 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_HUNGRY_SENTRET
# 993 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_9
	goto MeltingSnowForest_EventScript_OldWoman_14

MeltingSnowForest_EventScript_OldWoman_18:
# 878 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_17

MeltingSnowForest_EventScript_OldWoman_22:
# 847 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_21

MeltingSnowForest_EventScript_OldWoman_26:
# 996 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_10
	goto MeltingSnowForest_EventScript_OldWoman_25

MeltingSnowForest_EventScript_OldWoman_29:
# 940 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_28

MeltingSnowForest_EventScript_OldWoman_33:
# 909 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_32

MeltingSnowForest_EventScript_OldWoman_37:
# 854 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto MeltingSnowForest_EventScript_OldWoman_36

MeltingSnowForest_EventScript_OldWoman_40:
# 999 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_11
	goto MeltingSnowForest_EventScript_OldWoman_39

MeltingSnowForest_EventScript_OldWoman_43:
# 971 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_42

MeltingSnowForest_EventScript_OldWoman_47:
# 916 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto MeltingSnowForest_EventScript_OldWoman_46

MeltingSnowForest_EventScript_OldWoman_50:
# 857 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto MeltingSnowForest_EventScript_OldWoman_49

MeltingSnowForest_EventScript_OldWoman_53:
# 1002 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_12
	goto MeltingSnowForest_EventScript_OldWoman_52

MeltingSnowForest_EventScript_OldWoman_56:
# 978 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto MeltingSnowForest_EventScript_OldWoman_55

MeltingSnowForest_EventScript_OldWoman_59:
# 919 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto MeltingSnowForest_EventScript_OldWoman_58

MeltingSnowForest_EventScript_OldWoman_62:
# 860 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto MeltingSnowForest_EventScript_OldWoman_61

MeltingSnowForest_EventScript_OldWoman_65:
# 1005 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_13
	goto MeltingSnowForest_EventScript_OldWoman_64

MeltingSnowForest_EventScript_OldWoman_68:
# 981 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto MeltingSnowForest_EventScript_OldWoman_67

MeltingSnowForest_EventScript_OldWoman_71:
# 922 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto MeltingSnowForest_EventScript_OldWoman_70

MeltingSnowForest_EventScript_OldWoman_74:
# 863 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto MeltingSnowForest_EventScript_OldWoman_73

MeltingSnowForest_EventScript_OldWoman_77:
# 984 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto MeltingSnowForest_EventScript_OldWoman_76

MeltingSnowForest_EventScript_OldWoman_80:
# 925 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto MeltingSnowForest_EventScript_OldWoman_79

MeltingSnowForest_EventScript_OldWoman_83:
# 987 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto MeltingSnowForest_EventScript_OldWoman_82


# 1013 "data/maps/MeltingSnowForest/scripts.pory"
OldWomanToTeddiursaRight:
# 1014 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1014 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1015 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 1016 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
	step_end

# 1019 "data/maps/MeltingSnowForest/scripts.pory"
OldWomanToTeddiursaUp:
# 1020 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 1021 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1021 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1021 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
	step_end

# 1024 "data/maps/MeltingSnowForest/scripts.pory"
OldWomanFromTeddiursaRight:
# 1025 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1026 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 1027 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1027 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
	step_end

# 1030 "data/maps/MeltingSnowForest/scripts.pory"
OldWomanFromTeddiursaUp:
# 1031 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1031 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1031 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1032 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
	step_end

MeltingSnowForest_EventScript_HungryTeddiursa::
# 1036 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1037 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_HungryTeddiursa_2
# 1044 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_TEDDIURSA, CRY_MODE_NORMAL
# 1045 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1046 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1047 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungryTeddiursa_Text_1
MeltingSnowForest_EventScript_HungryTeddiursa_1:
# 1049 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1050 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 43, Common_Movement_FaceOriginalDirection
# 1051 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1052 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_HungryTeddiursa_2:
# 1038 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_TEDDIURSA, CRY_MODE_FAINT
# 1039 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1040 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1041 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungryTeddiursa_Text_0
	goto MeltingSnowForest_EventScript_HungryTeddiursa_1


MeltingSnowForest_EventScript_HungrySwinub::
# 1057 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1058 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_HungrySwinub_2
# 1065 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_NORMAL
# 1066 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1067 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1068 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungrySwinub_Text_1
MeltingSnowForest_EventScript_HungrySwinub_1:
# 1070 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1071 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 42, Common_Movement_FaceOriginalDirection
# 1072 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1073 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_HungrySwinub_2:
# 1059 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_FAINT
# 1060 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1061 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1062 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungrySwinub_Text_0
	goto MeltingSnowForest_EventScript_HungrySwinub_1


MeltingSnowForest_EventScript_HungrySentret::
# 1078 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1079 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_HungrySentret_2
# 1086 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SENTRET, CRY_MODE_NORMAL
# 1087 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1088 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1089 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungrySentret_Text_1
MeltingSnowForest_EventScript_HungrySentret_1:
# 1091 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1092 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 44, Common_Movement_FaceOriginalDirection
# 1093 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1094 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_HungrySentret_2:
# 1080 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SENTRET, CRY_MODE_FAINT
# 1081 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1082 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1083 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungrySentret_Text_0
	goto MeltingSnowForest_EventScript_HungrySentret_1


MeltingSnowForest_EventScript_Froslass::
# 1103 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 1104 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1105 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1106 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_FacePlayer
# 1107 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1108 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_FROSLASS, CRY_MODE_ENCOUNTER
# 1109 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1110 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1111 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_ShoveRight
# 1112 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 1113 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1114 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1115 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_0
# 1116 "data/maps/MeltingSnowForest/scripts.pory"
	setwildbattle SPECIES_FROSLASS, 35, ITEM_NONE, SPECIES_GLALIE, 35, ITEM_NONE
# 1117 "data/maps/MeltingSnowForest/scripts.pory"
	dowildbattle
# 1118 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1119 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1120 "data/maps/MeltingSnowForest/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1121 "data/maps/MeltingSnowForest/scripts.pory"
	callnative UpdateFollowingPokemon
# 1122 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1123 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_FaceUp
# 1124 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_FaceDown
# 1125 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1126 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1127 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_ShoveUp
# 1128 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_ShoveDown
# 1129 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BITE
# 1130 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1131 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1132 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, MeltingSnowForest_EventScript_Froslass_Movement_0
# 1133 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1134 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, MeltingSnowForest_EventScript_Froslass_Movement_1
# 1135 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1136 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_EXIT
# 1137 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 1138 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 48
# 1139 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 47
# 1140 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_GLALIE_FROSLASS_DOUBLE
# 1141 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1142 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end


MeltingSnowForest_EventScript_Glalie::
# 1147 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 1148 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1149 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1150 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_FacePlayer
# 1151 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1152 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_GLALIE, CRY_MODE_ENCOUNTER
# 1153 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1154 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1155 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_ShoveRight
# 1156 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 1157 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1158 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1159 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_0
# 1160 "data/maps/MeltingSnowForest/scripts.pory"
	setwildbattle SPECIES_FROSLASS, 35, ITEM_NONE, SPECIES_GLALIE, 35, ITEM_NONE
# 1161 "data/maps/MeltingSnowForest/scripts.pory"
	dowildbattle
# 1162 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1163 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1164 "data/maps/MeltingSnowForest/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1165 "data/maps/MeltingSnowForest/scripts.pory"
	callnative UpdateFollowingPokemon
# 1166 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1167 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_FaceUp
# 1168 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_FaceDown
# 1169 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1170 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1171 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_ShoveUp
# 1172 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_ShoveDown
# 1173 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BITE
# 1174 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1175 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1176 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, MeltingSnowForest_EventScript_Froslass_Movement_0
# 1177 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1178 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, MeltingSnowForest_EventScript_Glalie_Movement_0
# 1179 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1180 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_EXIT
# 1181 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 1182 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 48
# 1183 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 47
# 1184 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_GLALIE_FROSLASS_DOUBLE
# 1185 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1186 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end


MeltingSnowForest_EventScript_WaterWoman::
# 1191 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1192 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_WATER_WOMAN_TALKED, MeltingSnowForest_EventScript_WaterWoman_2
MeltingSnowForest_EventScript_WaterWoman_1:
# 1197 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_WATER_WOMAN_TALKED, MeltingSnowForest_EventScript_WaterWoman_5
MeltingSnowForest_EventScript_WaterWoman_4:
# 1200 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1201 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 49, Common_Movement_FaceOriginalDirection
# 1202 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1203 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_WaterWoman_2:
# 1193 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_WaterWoman_Text_0
# 1194 "data/maps/MeltingSnowForest/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 1195 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_WATER_WOMAN_TALKED
	goto MeltingSnowForest_EventScript_WaterWoman_1

MeltingSnowForest_EventScript_WaterWoman_5:
# 1198 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_WaterWoman_Text_1
	goto MeltingSnowForest_EventScript_WaterWoman_4


# 239 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_Sawsbuck_Movement_0:
# 239 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 239 "data/maps/MeltingSnowForest/scripts.pory"
	face_down
	step_end

# 245 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_Sawsbuck_Movement_1:
# 245 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 245 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 245 "data/maps/MeltingSnowForest/scripts.pory"
	face_left
	step_end

# 324 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_Sneasel_Movement_0:
# 324 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
	step_end

# 761 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_FightingHiker_Movement_0:
# 761 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 761 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 761 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 761 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 761 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 761 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 761 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 761 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 761 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
	step_end

# 1132 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_Froslass_Movement_0:
# 1132 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1132 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1132 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1132 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1132 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1132 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1132 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1132 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1132 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 1134 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_Froslass_Movement_1:
# 1134 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 1134 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1134 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1134 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1134 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1134 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1134 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1134 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1134 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1134 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 1178 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_Glalie_Movement_0:
# 1178 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 1178 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1178 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1178 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1178 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1178 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1178 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1178 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1178 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1178 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

MeltingSnowForest_EventScript_EnterTop_Text_0:
# 34 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Absol is demanding to join you!$"

MeltingSnowForest_EventScript_Sawsbuck_Text_0:
# 220 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Pokémon attacked in a rage!$"

MeltingSnowForest_EventScript_Sawsbuck_Text_1:
# 251 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Parasect thanked you!$"

MeltingSnowForest_EventScript_Sawsbuck_Text_2:
# 257 "data/maps/MeltingSnowForest/scripts.pory"
	.string "It wants to join your team!$"

MeltingSnowForest_EventScript_Camper1_Text_0:
# 435 "data/maps/MeltingSnowForest/scripts.pory"
	.string "There are some deranged Pokémon\n"
	.string "attacking that poor Parasect!\p"
	.string "I wish there was something I could do...$"

MeltingSnowForest_EventScript_Camper1_Text_1:
# 438 "data/maps/MeltingSnowForest/scripts.pory"
	.string "On second thought, maybe that\n"
	.string "Parasect was infected by the spores\l"
	.string "the elder spoke of.\p"
	.string "Perhaps it wasn't a legend, after all...$"

MeltingSnowForest_EventScript_StantlerHiker_Text_0:
# 449 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Did you see what just happened?\p"
	.string "I've never seen a Pokémon willingly jump\n"
	.string "in freezing water like that!$"

MeltingSnowForest_EventScript_HotStantler_Text_0:
# 459 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Stantler is panting uncontrollably!$"

MeltingSnowForest_EventScript_FirstScientist_Text_0:
# 607 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I was supposed to do research on how\n"
	.string "the warmer environment has changed the\l"
	.string "forest, but a Pokémon attacked me!\p"
	.string "What other disasters could present\n"
	.string "themselves here?$"

MeltingSnowForest_EventScript_Farmer_Text_0:
# 648 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Well, howdy, partner! I hear that as the\n"
	.string "snow melts, there's some potential for\l"
	.string "some farming up here!\p"
	.string "Sounds great to me, the economy will be\n"
	.string "booming!\p"
	.string "Figured I'd help heat things up.$"

MeltingSnowForest_EventScript_Farmer_Text_1:
# 659 "data/maps/MeltingSnowForest/scripts.pory"
	.string "There's nothing wrong with what I'm\n"
	.string "doing, I'm just trying to grow more\l"
	.string "crops!$"

MeltingSnowForest_EventScript_Farmer_Text_2:
# 660 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Don't backtalk me!$"

MeltingSnowForest_EventScript_Farmer_Text_3:
# 660 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Dadgummit!$"

MeltingSnowForest_EventScript_Farmer_Text_4:
# 666 "data/maps/MeltingSnowForest/scripts.pory"
	.string "You can stop me, but you can't stop the\n"
	.string "forest from warming up.\p"
	.string "Soon enough, I'll be farming here!$"

MeltingSnowForest_EventScript_AfterFarmer_Text_0:
# 690 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Why do you want to stop agriculture?\p"
	.string "We can grow so much more food if we get\n"
	.string "rid of all this snow!$"

MeltingSnowForest_EventScript_AfterFarmer_Text_1:
# 704 "data/maps/MeltingSnowForest/scripts.pory"
	.string "You know what? This forest is gonna\n"
	.string "warm up, no matter what.\p"
	.string "It's inevitable, and I don't need to help\n"
	.string "speed it up.\p"
	.string "Here, you can even take this.$"

MeltingSnowForest_EventScript_Ursaring_Text_0:
# 715 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Ursaring roared violently, better\n"
	.string "get away!$"

MeltingSnowForest_EventScript_FightingHiker_Text_0:
# 737 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Help! I was going for a hike, and this\n"
	.string "Ursaring attacked me out of nowhere!\p"
	.string "I can't fend it off much longer, do you\n"
	.string "have anything that could ward it off?$"

MeltingSnowForest_EventScript_FightingHiker_Text_1:
# 744 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Oh, is that a fire gem? Here, give me\n"
	.string "that!$"

MeltingSnowForest_EventScript_FightingHiker_Text_2:
# 752 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Take this, Ursaring!$"

MeltingSnowForest_EventScript_FightingHiker_Text_3:
# 787 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I can't believe that worked, you just\n"
	.string "saved my life!\p"
	.string "I wonder why that Ursaring was so\n"
	.string "persistent, maybe it was because of\l"
	.string "this!$"

MeltingSnowForest_EventScript_FightingHiker_Text_4:
# 797 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Hopefully you don't get any Pokémon\n"
	.string "smelling that berry in your bag and\l"
	.string "hunting you down!$"

MeltingSnowForest_EventScript_OldWoman_Text_0:
# 808 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Oh, these poor Pokémon. They seem to be\n"
	.string "starving!\p"
	.string "I think their food sources have\n"
	.string "disappeared as a result of climate\l"
	.string "change.\p"
	.string "Will you help me gather some food for\n"
	.string "them?$"

MeltingSnowForest_EventScript_OldWoman_Text_1:
# 813 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Is that a Sitrus Berry? Where did you\n"
	.string "find it?\p"
	.string "Here, I'll give it to this poor little\n"
	.string "Teddiursa!$"

MeltingSnowForest_EventScript_OldWoman_Text_2:
# 830 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Here you go, eat up!$"

MeltingSnowForest_EventScript_OldWoman_Text_3:
# 869 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Thank you, dear!$"

MeltingSnowForest_EventScript_OldWoman_Text_4:
# 873 "data/maps/MeltingSnowForest/scripts.pory"
	.string "That looks like an Oran Berry!\p"
	.string "I'm sure this hungry Swinub would love\n"
	.string "it.$"

MeltingSnowForest_EventScript_OldWoman_Text_5:
# 892 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Enjoy, my friend!$"

MeltingSnowForest_EventScript_OldWoman_Text_6:
# 931 "data/maps/MeltingSnowForest/scripts.pory"
	.string "That Swinub was so excited.$"

MeltingSnowForest_EventScript_OldWoman_Text_7:
# 935 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Wow, a Cheri Berry!\p"
	.string "This starving Sentret could certainly\n"
	.string "use this.$"

MeltingSnowForest_EventScript_OldWoman_Text_8:
# 954 "data/maps/MeltingSnowForest/scripts.pory"
	.string "It's your lucky day!$"

MeltingSnowForest_EventScript_OldWoman_Text_9:
# 993 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Sentret devoured the berry!$"

MeltingSnowForest_EventScript_OldWoman_Text_10:
# 996 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I'm sure you can find something these\n"
	.string "Pokémon could eat!$"

MeltingSnowForest_EventScript_OldWoman_Text_11:
# 999 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Do you think you could find food for\n"
	.string "these other two Pokémon?$"

MeltingSnowForest_EventScript_OldWoman_Text_12:
# 1002 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Just one more hungry Pokémon!$"

MeltingSnowForest_EventScript_OldWoman_Text_13:
# 1005 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Thank you for your help! I'm sure these\n"
	.string "Pokémon are very grateful.$"

MeltingSnowForest_EventScript_HungryTeddiursa_Text_0:
# 1041 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Teddiursa seems weak.$"

MeltingSnowForest_EventScript_HungryTeddiursa_Text_1:
# 1047 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Teddiursa is happily eating!$"

MeltingSnowForest_EventScript_HungrySwinub_Text_0:
# 1062 "data/maps/MeltingSnowForest/scripts.pory"
	.string "It looks faint.$"

MeltingSnowForest_EventScript_HungrySwinub_Text_1:
# 1068 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Swinub looks satisfied.$"

MeltingSnowForest_EventScript_HungrySentret_Text_0:
# 1083 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Sentret is swaying back and forth.$"

MeltingSnowForest_EventScript_HungrySentret_Text_1:
# 1089 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Sentret happily licks berry juice off\n"
	.string "their fur!$"

MeltingSnowForest_EventScript_WaterWoman_Text_0:
# 1193 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I came back here looking for flowers. I\n"
	.string "hear that new flora may be sprouting as\l"
	.string "the forest thaws!\p"
	.string "However, those two Pokémon got into a\n"
	.string "fight, trapping me here!\p"
	.string "Thank you for warding them off, and,\n"
	.string "because I couldn't find any flowers,\l"
	.string "you can have this!$"

MeltingSnowForest_EventScript_WaterWoman_Text_1:
# 1198 "data/maps/MeltingSnowForest/scripts.pory"
	.string "No flowers, but I did come across a\n"
	.string "berry.\p"
	.string "Thank you again for helping me out!$"

Timmy_Intro::
# 621 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Bugs have emerged from the frost!\n"
	.string "Look at mine!$"

Timmy_Outro::
# 624 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I wonder how long my bugs were frozen\n"
	.string "for.$"

PostBattle_Timmy::
# 627 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Why am I wearing shorts in the snow?$"
