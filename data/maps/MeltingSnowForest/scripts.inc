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
	givemon SPECIES_ABSOL, 35, 0, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER, MOVE_SUBSTITUTE
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
	givemon SPECIES_ABSOL, 35, 0, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER, MOVE_SUBSTITUTE
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
	givemon SPECIES_ABSOL, 35, 0, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER, MOVE_SUBSTITUTE
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
	givemon SPECIES_ABSOL, 35, 0, ITEM_POKE_BALL, NATURE_JOLLY, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_SWORDS_DANCE, MOVE_SUCKER_PUNCH, MOVE_SUPERPOWER, MOVE_SUBSTITUTE
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
	givemon SPECIES_PARASECT, 35, 0, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_SPORE, MOVE_AROMATHERAPY, MOVE_LEECH_SEED, MOVE_REFLECT
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
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_Sawsbuck_2
# 271 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_Sawsbuck_2
# 271 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_Sawsbuck_2
# 271 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_Sawsbuck_2
# 271 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_Sawsbuck_2
# 271 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_Sawsbuck_2
MeltingSnowForest_EventScript_Sawsbuck_1:
# 274 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 275 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_Sawsbuck_2:
# 272 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_CLEAR_STANTLERS
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
	setwildbattle SPECIES_SAWSBUCK_WINTER, 35, ITEM_NONE, SPECIES_SNEASEL, 35, ITEM_NONE
# 302 "data/maps/MeltingSnowForest/scripts.pory"
	dowildbattle
# 303 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 304 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 305 "data/maps/MeltingSnowForest/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 306 "data/maps/MeltingSnowForest/scripts.pory"
	callnative UpdateFollowingPokemon
# 307 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 308 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, Common_Movement_FaceRight
# 309 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, Common_Movement_FaceUp
# 310 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 311 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 312 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, Common_Movement_ShoveRight
# 313 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, Common_Movement_ShoveUp
# 314 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BITE
# 315 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 316 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 317 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 318 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq MeltingSnowForest_EventScript_Sneasel_8
MeltingSnowForest_EventScript_Sneasel_7:
# 344 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq MeltingSnowForest_EventScript_Sneasel_11
MeltingSnowForest_EventScript_Sneasel_10:
# 370 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 371 "data/maps/MeltingSnowForest/scripts.pory"
	givemon SPECIES_PARASECT, 35, 0, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_SPORE, MOVE_AROMATHERAPY, MOVE_LEECH_SEED, MOVE_REFLECT
# 372 "data/maps/MeltingSnowForest/scripts.pory"
	delay 10
# 373 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 20
# 374 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 21
# 375 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 22
# 376 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 377 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BALL
# 378 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 379 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_PARASECT_DOUBLE_BATTLE
# 380 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_Sneasel_14
# 380 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_Sneasel_14
# 380 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_Sneasel_14
# 380 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_Sneasel_14
# 380 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_Sneasel_14
# 380 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_Sneasel_14
MeltingSnowForest_EventScript_Sneasel_13:
# 383 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 384 "data/maps/MeltingSnowForest/scripts.pory"
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
# 319 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, SneaselExitRight
# 320 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 321 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 322 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, SawsbuckExitRight
# 323 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 324 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_EXIT
# 325 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 326 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 327 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, MeltingSnowForest_EventScript_Sneasel_Movement_0
# 328 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 329 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 330 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 331 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_PARASECT, CRY_MODE_NORMAL
# 332 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 333 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_1
# 334 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 335 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, Common_Movement_ShoveDown
# 336 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 337 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 338 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 339 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_2
# 340 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 341 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 342 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, Common_Movement_WalkDown
	goto MeltingSnowForest_EventScript_Sneasel_7

MeltingSnowForest_EventScript_Sneasel_11:
# 345 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 22, SneaselExitLeft
# 346 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 347 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, MeltingSnowForest_EventScript_Sawsbuck_Movement_0
# 348 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 21, SawsbuckExitLeft
# 349 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 350 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_EXIT
# 351 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 352 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 353 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, MeltingSnowForest_EventScript_Sawsbuck_Movement_1
# 354 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 355 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 356 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 357 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_PARASECT, CRY_MODE_NORMAL
# 358 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 359 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_1
# 360 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 361 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, Common_Movement_ShoveLeft
# 362 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 363 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 364 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 365 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_2
# 366 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 367 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 368 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 20, Common_Movement_WalkLeft
	goto MeltingSnowForest_EventScript_Sneasel_10

MeltingSnowForest_EventScript_Sneasel_14:
# 381 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_CLEAR_STANTLERS
	goto MeltingSnowForest_EventScript_Sneasel_13


# 390 "data/maps/MeltingSnowForest/scripts.pory"
SneaselExitLeft:
# 391 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 391 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 392 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 392 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 393 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 394 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 394 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 394 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 394 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 394 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 394 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 394 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 394 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 397 "data/maps/MeltingSnowForest/scripts.pory"
SawsbuckExitLeft:
# 398 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 399 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 399 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 399 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 400 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 400 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
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
	step_end

# 405 "data/maps/MeltingSnowForest/scripts.pory"
SneaselExitRight:
# 406 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 407 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 407 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 407 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 408 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 408 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 408 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 408 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 408 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 408 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 408 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 408 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 408 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 408 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 411 "data/maps/MeltingSnowForest/scripts.pory"
SawsbuckExitRight:
# 412 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 412 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 412 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 412 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 413 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 413 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 413 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 413 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 413 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 413 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 413 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 413 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 413 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 413 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 416 "data/maps/MeltingSnowForest/scripts.pory"
AbsolRightTop:
# 417 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 417 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 417 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 417 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 418 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 419 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 419 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 419 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 422 "data/maps/MeltingSnowForest/scripts.pory"
AbsolRightTopMid:
# 423 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 423 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 423 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 423 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 423 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 423 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 423 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 426 "data/maps/MeltingSnowForest/scripts.pory"
AbsolRightBottomMid:
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
# 429 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 429 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 429 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 432 "data/maps/MeltingSnowForest/scripts.pory"
AbsolRightBottom:
# 433 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 433 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 433 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 433 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 434 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 434 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 435 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 435 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 435 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

MeltingSnowForest_EventScript_Camper1::
# 439 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 440 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_Camper1_2
MeltingSnowForest_EventScript_Camper1_1:
# 443 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_Camper1_5
MeltingSnowForest_EventScript_Camper1_4:
# 446 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 447 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 24, Common_Movement_FaceOriginalDirection
# 448 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 449 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_Camper1_2:
# 441 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Camper1_Text_0
	goto MeltingSnowForest_EventScript_Camper1_1

MeltingSnowForest_EventScript_Camper1_5:
# 444 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Camper1_Text_1
	goto MeltingSnowForest_EventScript_Camper1_4


MeltingSnowForest_EventScript_StantlerHiker::
# 454 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 455 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_StantlerHiker_Text_0
# 456 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 457 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 34, Common_Movement_FaceOriginalDirection
# 458 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 459 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


MeltingSnowForest_EventScript_HotStantler::
# 464 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 465 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_WATER_WOMAN_TALKED, MeltingSnowForest_EventScript_HotStantler_2
MeltingSnowForest_EventScript_HotStantler_1:
# 468 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_WATER_WOMAN_TALKED, MeltingSnowForest_EventScript_HotStantler_5
MeltingSnowForest_EventScript_HotStantler_4:
# 487 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 488 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 33, Common_Movement_FaceOriginalDirection
# 489 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 490 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_HotStantler_2:
# 466 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HotStantler_Text_0
	goto MeltingSnowForest_EventScript_HotStantler_1

MeltingSnowForest_EventScript_HotStantler_5:
# 469 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HotStantler_Text_1
# 470 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 471 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BUBBLE
# 472 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 473 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 474 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 475 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 33, StantlerCelebrate
# 476 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 477 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 33, Common_Movement_FacePlayer
# 478 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 479 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 480 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 481 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_STANTLER_WATERED
# 482 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_HotStantler_8
# 482 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_HotStantler_8
# 482 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_HotStantler_8
# 482 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_HotStantler_8
# 482 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_HotStantler_8
# 482 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_HotStantler_8
MeltingSnowForest_EventScript_HotStantler_7:
# 485 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HotStantler_Text_2
	goto MeltingSnowForest_EventScript_HotStantler_4

MeltingSnowForest_EventScript_HotStantler_8:
# 483 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_CLEAR_STANTLERS
	goto MeltingSnowForest_EventScript_HotStantler_7


MeltingSnowForest_EventScript_PoorStantlerGirl::
# 495 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 496 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_PoorStantlerGirl_2
MeltingSnowForest_EventScript_PoorStantlerGirl_1:
# 499 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_PoorStantlerGirl_5
MeltingSnowForest_EventScript_PoorStantlerGirl_4:
# 507 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 508 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 32, Common_Movement_FaceOriginalDirection
# 509 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 510 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_PoorStantlerGirl_2:
# 497 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_PoorStantlerGirl_Text_0
	goto MeltingSnowForest_EventScript_PoorStantlerGirl_1

MeltingSnowForest_EventScript_PoorStantlerGirl_5:
# 500 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_PoorStantlerGirl_Text_1
# 501 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_ORAN_BERRY_KEY, MeltingSnowForest_EventScript_PoorStantlerGirl_7
	goto MeltingSnowForest_EventScript_PoorStantlerGirl_4

MeltingSnowForest_EventScript_PoorStantlerGirl_7:
# 502 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_PoorStantlerGirl_Text_2
# 503 "data/maps/MeltingSnowForest/scripts.pory"
	giveitem ITEM_ORAN_BERRY_KEY
# 504 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_ORAN_BERRY_KEY
	goto MeltingSnowForest_EventScript_PoorStantlerGirl_4


MeltingSnowForest_EventScript_Heat::
# 515 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HEAT_CUTSCENE, MeltingSnowForest_EventScript_Heat_2
MeltingSnowForest_EventScript_Heat_1:
# 577 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_Heat_2:
# 516 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 517 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 518 "data/maps/MeltingSnowForest/scripts.pory"
	special SpawnCameraObject
# 519 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 520 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 34, Common_Movement_FaceUp
# 521 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 33, StantlerMovement
# 522 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 523 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq MeltingSnowForest_EventScript_Heat_5
MeltingSnowForest_EventScript_Heat_4:
# 526 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq MeltingSnowForest_EventScript_Heat_8
MeltingSnowForest_EventScript_Heat_7:
# 529 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq MeltingSnowForest_EventScript_Heat_11
MeltingSnowForest_EventScript_Heat_10:
# 532 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 23
	goto_if_eq MeltingSnowForest_EventScript_Heat_14
MeltingSnowForest_EventScript_Heat_13:
# 535 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 24
	goto_if_eq MeltingSnowForest_EventScript_Heat_17
MeltingSnowForest_EventScript_Heat_16:
# 538 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 33
# 539 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_NORMAL
# 540 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 541 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 542 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 33, Common_Movement_JumpInPlaceLeft
# 543 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 544 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 545 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 33, StantlerWater
# 546 "data/maps/MeltingSnowForest/scripts.pory"
	delay 28
# 547 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 548 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 549 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BUBBLE
# 550 "data/maps/MeltingSnowForest/scripts.pory"
	delay 35
# 551 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BUBBLE
# 552 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 553 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 554 "data/maps/MeltingSnowForest/scripts.pory"
	setobjectxy 33, 17, 35
# 555 "data/maps/MeltingSnowForest/scripts.pory"
	setobjectxyperm 33, 17, 35
# 556 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 557 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq MeltingSnowForest_EventScript_Heat_20
MeltingSnowForest_EventScript_Heat_19:
# 560 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 21
	goto_if_eq MeltingSnowForest_EventScript_Heat_23
MeltingSnowForest_EventScript_Heat_22:
# 563 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq MeltingSnowForest_EventScript_Heat_26
MeltingSnowForest_EventScript_Heat_25:
# 566 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 23
	goto_if_eq MeltingSnowForest_EventScript_Heat_29
MeltingSnowForest_EventScript_Heat_28:
# 569 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 24
	goto_if_eq MeltingSnowForest_EventScript_Heat_32
MeltingSnowForest_EventScript_Heat_31:
# 572 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 573 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_HEAT_CUTSCENE
# 574 "data/maps/MeltingSnowForest/scripts.pory"
	special RemoveCameraObject
# 575 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
	goto MeltingSnowForest_EventScript_Heat_1

MeltingSnowForest_EventScript_Heat_5:
# 524 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToScene1
	goto MeltingSnowForest_EventScript_Heat_4

MeltingSnowForest_EventScript_Heat_8:
# 527 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToScene2
	goto MeltingSnowForest_EventScript_Heat_7

MeltingSnowForest_EventScript_Heat_11:
# 530 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToScene3
	goto MeltingSnowForest_EventScript_Heat_10

MeltingSnowForest_EventScript_Heat_14:
# 533 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToScene4
	goto MeltingSnowForest_EventScript_Heat_13

MeltingSnowForest_EventScript_Heat_17:
# 536 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToScene5
	goto MeltingSnowForest_EventScript_Heat_16

MeltingSnowForest_EventScript_Heat_20:
# 558 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraReturn1
	goto MeltingSnowForest_EventScript_Heat_19

MeltingSnowForest_EventScript_Heat_23:
# 561 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraReturn2
	goto MeltingSnowForest_EventScript_Heat_22

MeltingSnowForest_EventScript_Heat_26:
# 564 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraReturn3
	goto MeltingSnowForest_EventScript_Heat_25

MeltingSnowForest_EventScript_Heat_29:
# 567 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraReturn4
	goto MeltingSnowForest_EventScript_Heat_28

MeltingSnowForest_EventScript_Heat_32:
# 570 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraReturn5
	goto MeltingSnowForest_EventScript_Heat_31


# 581 "data/maps/MeltingSnowForest/scripts.pory"
CameraToScene1:
# 582 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 582 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 582 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 583 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
	step_end

# 586 "data/maps/MeltingSnowForest/scripts.pory"
CameraToScene2:
# 587 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 587 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 588 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 588 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
	step_end

# 591 "data/maps/MeltingSnowForest/scripts.pory"
CameraToScene3:
# 592 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northeast
# 593 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 593 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 593 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
	step_end

# 596 "data/maps/MeltingSnowForest/scripts.pory"
CameraToScene4:
# 597 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 597 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 597 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 597 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
	step_end

# 600 "data/maps/MeltingSnowForest/scripts.pory"
CameraToScene5:
# 601 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_northwest
# 602 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 602 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 602 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
	step_end

# 605 "data/maps/MeltingSnowForest/scripts.pory"
CameraReturn1:
# 606 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 607 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
# 607 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
# 607 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
	step_end

# 610 "data/maps/MeltingSnowForest/scripts.pory"
CameraReturn2:
# 611 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 611 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 612 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
# 612 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
	step_end

# 615 "data/maps/MeltingSnowForest/scripts.pory"
CameraReturn3:
# 616 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 616 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 616 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 617 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southwest
	step_end

# 620 "data/maps/MeltingSnowForest/scripts.pory"
CameraReturn4:
# 621 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 621 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 621 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 621 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
	step_end

# 624 "data/maps/MeltingSnowForest/scripts.pory"
CameraReturn5:
# 625 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 625 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 625 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 626 "data/maps/MeltingSnowForest/scripts.pory"
	walk_diag_southeast
	step_end

# 629 "data/maps/MeltingSnowForest/scripts.pory"
StantlerMovement:
# 630 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 630 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 630 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 631 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 631 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 631 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 632 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 632 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 632 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 633 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 633 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 633 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 634 "data/maps/MeltingSnowForest/scripts.pory"
	face_left
	step_end

# 637 "data/maps/MeltingSnowForest/scripts.pory"
StantlerWater:
# 638 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 638 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 638 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 639 "data/maps/MeltingSnowForest/scripts.pory"
	jump_left
# 640 "data/maps/MeltingSnowForest/scripts.pory"
	set_invisible
# 641 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 641 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 641 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 641 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 642 "data/maps/MeltingSnowForest/scripts.pory"
	set_visible
# 643 "data/maps/MeltingSnowForest/scripts.pory"
	jump_left
	step_end

# 646 "data/maps/MeltingSnowForest/scripts.pory"
StantlerCelebrate:
# 647 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_fast_right
# 647 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_fast_right
# 647 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_fast_right
# 648 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_down
# 648 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_down
# 648 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_down
# 649 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_up
# 649 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_up
# 649 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_up
# 650 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 650 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 650 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
	step_end

MeltingSnowForest_EventScript_HeatCutsceneDone::
# 654 "data/maps/MeltingSnowForest/scripts.pory"
	setobjectxyperm 33, 17, 35
# 655 "data/maps/MeltingSnowForest/scripts.pory"
	SetObjectMovementType 33, MOVEMENT_TYPE_FACE_UP_AND_LEFT
# 656 "data/maps/MeltingSnowForest/scripts.pory"
	addobject 33
	return


MeltingSnowForest_EventScript_FirstScientist::
# 660 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 661 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FirstScientist_Text_0
# 662 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 663 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 25, Common_Movement_FaceOriginalDirection
# 664 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 665 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


MeltingSnowForest_EventScript_BugCatcher::
# 670 "data/maps/MeltingSnowForest/scripts.pory"
	trainerbattle_single TRAINER_ZANDER, Timmy_Intro, Timmy_Outro
# 671 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox PostBattle_Timmy, MSGBOX_AUTOCLOSE
# 672 "data/maps/MeltingSnowForest/scripts.pory"
	waitmessage
	end


MeltingSnowForest_EventScript_Farmer::
# 687 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 688 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_FIRE_FARMER, MeltingSnowForest_EventScript_Farmer_2
MeltingSnowForest_EventScript_Farmer_1:
# 716 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_FIRE_FARMER, MeltingSnowForest_EventScript_Farmer_5
MeltingSnowForest_EventScript_Farmer_4:
# 725 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_Farmer_2:
# 689 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 690 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 691 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 692 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 693 "data/maps/MeltingSnowForest/scripts.pory"
	delay 60
# 694 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FaceLeft
# 695 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 696 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 697 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_ShoveLeft
# 698 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_FIRE_PUNCH
# 699 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 700 "data/maps/MeltingSnowForest/scripts.pory"
	delay 120
# 701 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 702 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Farmer_Text_0
# 703 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 704 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FaceUp
# 705 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 706 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 707 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_ShoveUp
# 708 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_FIRE_PUNCH
# 709 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 710 "data/maps/MeltingSnowForest/scripts.pory"
	delay 60
# 711 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 712 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 713 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Farmer_Text_1
# 714 "data/maps/MeltingSnowForest/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, MeltingSnowForest_EventScript_Farmer_Text_2, MeltingSnowForest_EventScript_Farmer_Text_3, MeltingSnowForest_EventScript_AfterFarmer
	goto MeltingSnowForest_EventScript_Farmer_1

MeltingSnowForest_EventScript_Farmer_5:
# 717 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 718 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 719 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 720 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Farmer_Text_4
# 721 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 722 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FaceOriginalDirection
# 723 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
	goto MeltingSnowForest_EventScript_Farmer_4


MeltingSnowForest_EventScript_AfterFarmer::
# 730 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 731 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 732 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FaceAwayPlayer
# 733 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 734 "data/maps/MeltingSnowForest/scripts.pory"
	delay 60
# 735 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 736 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq MeltingSnowForest_EventScript_AfterFarmer_2
MeltingSnowForest_EventScript_AfterFarmer_1:
# 739 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq MeltingSnowForest_EventScript_AfterFarmer_5
MeltingSnowForest_EventScript_AfterFarmer_4:
# 742 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 743 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 744 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_AfterFarmer_Text_0
# 745 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 746 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 747 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_FacePlayer
# 748 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 749 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 750 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_eq MeltingSnowForest_EventScript_AfterFarmer_8
MeltingSnowForest_EventScript_AfterFarmer_7:
# 753 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 5
	goto_if_eq MeltingSnowForest_EventScript_AfterFarmer_11
MeltingSnowForest_EventScript_AfterFarmer_10:
# 756 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 757 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 758 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_AfterFarmer_Text_1
# 759 "data/maps/MeltingSnowForest/scripts.pory"
	giveitem ITEM_FIRE_GEM_KEY
# 760 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_FIRE_FARMER
# 761 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_AfterFarmer_2:
# 737 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceUp
	goto MeltingSnowForest_EventScript_AfterFarmer_1

MeltingSnowForest_EventScript_AfterFarmer_5:
# 740 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceLeft
	goto MeltingSnowForest_EventScript_AfterFarmer_4

MeltingSnowForest_EventScript_AfterFarmer_8:
# 751 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceDown
	goto MeltingSnowForest_EventScript_AfterFarmer_7

MeltingSnowForest_EventScript_AfterFarmer_11:
# 754 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceRight
	goto MeltingSnowForest_EventScript_AfterFarmer_10


MeltingSnowForest_EventScript_Ursaring::
# 766 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 767 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_URSARING, CRY_MODE_NORMAL
# 768 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 769 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Ursaring_Text_0
# 770 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 771 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 27, Common_Movement_FaceOriginalDirection
# 772 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 773 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


MeltingSnowForest_EventScript_FightingHiker::
# 778 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_FIRE_FARMER, MeltingSnowForest_EventScript_FightingHiker_2
MeltingSnowForest_EventScript_FightingHiker_1:
# 795 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_FIRE_FARMER, MeltingSnowForest_EventScript_FightingHiker_6
MeltingSnowForest_EventScript_FightingHiker_4:
# 849 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_FIRE_HIKER, MeltingSnowForest_EventScript_FightingHiker_13
MeltingSnowForest_EventScript_FightingHiker_12:
# 854 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 855 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_FightingHiker_2:
# 779 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 780 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 781 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 782 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_10
MeltingSnowForest_EventScript_FightingHiker_9:
# 785 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 56
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_19
MeltingSnowForest_EventScript_FightingHiker_18:
# 788 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 789 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 790 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 791 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FightingHiker_Text_0
# 792 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 793 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_FaceOriginalDirection
	goto MeltingSnowForest_EventScript_FightingHiker_1

MeltingSnowForest_EventScript_FightingHiker_5:
# 796 "data/maps/MeltingSnowForest/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_LOOK_AROUND
# 797 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 798 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FightingHiker_Text_1
# 799 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 800 "data/maps/MeltingSnowForest/scripts.pory"
	removeitem ITEM_FIRE_GEM_KEY
# 801 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_FaceRight
# 802 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 803 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 804 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceRight
# 805 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 806 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FightingHiker_Text_2
# 807 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 808 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_ShoveRight
# 809 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_FIRE_PUNCH
# 810 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 811 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 27, Common_Movement_JumpInPlaceLeft
# 812 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 813 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 814 "data/maps/MeltingSnowForest/scripts.pory"
	delay 20
# 815 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 27, MeltingSnowForest_EventScript_FightingHiker_Movement_0
# 816 "data/maps/MeltingSnowForest/scripts.pory"
	delay 10
# 817 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_FaceDown
# 818 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 819 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 820 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 821 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 27
# 822 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 823 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 824 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_16
MeltingSnowForest_EventScript_FightingHiker_15:
# 827 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 56
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_22
MeltingSnowForest_EventScript_FightingHiker_21:
# 830 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 27, Common_Movement_FacePlayer
# 831 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 832 "data/maps/MeltingSnowForest/scripts.pory"
	delay 20
# 833 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_25
MeltingSnowForest_EventScript_FightingHiker_24:
# 836 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 56
	goto_if_eq MeltingSnowForest_EventScript_FightingHiker_28
MeltingSnowForest_EventScript_FightingHiker_27:
# 839 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 840 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 841 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FightingHiker_Text_3
# 842 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 843 "data/maps/MeltingSnowForest/scripts.pory"
	giveitem ITEM_SITRUS_BERRY_KEY, 1
# 844 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_FIRE_HIKER
# 845 "data/maps/MeltingSnowForest/scripts.pory"
	setobjectmovementtype 26, MOVEMENT_TYPE_LOOK_AROUND, FALSE
# 846 "data/maps/MeltingSnowForest/scripts.pory"
	addobject 26
# 847 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 27
	goto MeltingSnowForest_EventScript_FightingHiker_4

MeltingSnowForest_EventScript_FightingHiker_6:
# 795 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_FIRE_HIKER, MeltingSnowForest_EventScript_FightingHiker_5
	goto MeltingSnowForest_EventScript_FightingHiker_4

MeltingSnowForest_EventScript_FightingHiker_10:
# 783 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_JumpInPlaceLeft
	goto MeltingSnowForest_EventScript_FightingHiker_9

MeltingSnowForest_EventScript_FightingHiker_13:
# 850 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 851 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FightingHiker_Text_4
# 852 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
	goto MeltingSnowForest_EventScript_FightingHiker_12

MeltingSnowForest_EventScript_FightingHiker_16:
# 825 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto MeltingSnowForest_EventScript_FightingHiker_15

MeltingSnowForest_EventScript_FightingHiker_19:
# 786 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_JumpInPlaceDown
	goto MeltingSnowForest_EventScript_FightingHiker_18

MeltingSnowForest_EventScript_FightingHiker_22:
# 828 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto MeltingSnowForest_EventScript_FightingHiker_21

MeltingSnowForest_EventScript_FightingHiker_25:
# 834 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceLeft
	goto MeltingSnowForest_EventScript_FightingHiker_24

MeltingSnowForest_EventScript_FightingHiker_28:
# 837 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceDown
	goto MeltingSnowForest_EventScript_FightingHiker_27


MeltingSnowForest_EventScript_OldWoman::
# 860 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 861 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_OLD_WOMAN_BERRY_INTRO, MeltingSnowForest_EventScript_OldWoman_2
MeltingSnowForest_EventScript_OldWoman_1:
# 865 "data/maps/MeltingSnowForest/scripts.pory"
	checkitem ITEM_SITRUS_BERRY_KEY, 1
# 866 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_5
MeltingSnowForest_EventScript_OldWoman_4:
# 928 "data/maps/MeltingSnowForest/scripts.pory"
	checkitem ITEM_ORAN_BERRY_KEY, 1
# 929 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_8
MeltingSnowForest_EventScript_OldWoman_7:
# 993 "data/maps/MeltingSnowForest/scripts.pory"
	checkitem ITEM_CHERI_BERRY_KEY, 1
# 994 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_15
MeltingSnowForest_EventScript_OldWoman_14:
# 1058 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_SNOW_BERRY_WOMAN, 0
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_26
MeltingSnowForest_EventScript_OldWoman_25:
# 1061 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_SNOW_BERRY_WOMAN, 1
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_40
MeltingSnowForest_EventScript_OldWoman_39:
# 1064 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_SNOW_BERRY_WOMAN, 2
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_53
MeltingSnowForest_EventScript_OldWoman_52:
# 1067 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_SNOW_BERRY_WOMAN, 3
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_65
MeltingSnowForest_EventScript_OldWoman_64:
# 1070 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1071 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1072 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_OldWoman_2:
# 862 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_0
# 863 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_OLD_WOMAN_BERRY_INTRO
	goto MeltingSnowForest_EventScript_OldWoman_1

MeltingSnowForest_EventScript_OldWoman_5:
# 867 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_1
# 868 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 869 "data/maps/MeltingSnowForest/scripts.pory"
	removeitem ITEM_SITRUS_BERRY_KEY, 1
# 870 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 871 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_11
# 875 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_10:
# 877 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 878 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 879 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 880 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 881 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_WalkInPlaceRight
# 882 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 883 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 884 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_2
# 885 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 886 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 887 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_ShoveRightSlower
# 888 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_PUDDLE
# 889 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 890 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 891 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 43, Common_Movement_JumpInPlaceLeft
# 892 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 893 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 894 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 895 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_TEDDIURSA, CRY_MODE_NORMAL
# 896 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 897 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 898 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 43, Common_Movement_FaceOriginalDirection
# 899 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 900 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_22
# 904 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_21:
# 906 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 907 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_37
MeltingSnowForest_EventScript_OldWoman_36:
# 910 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_50
MeltingSnowForest_EventScript_OldWoman_49:
# 913 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 29
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_62
MeltingSnowForest_EventScript_OldWoman_61:
# 916 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_74
MeltingSnowForest_EventScript_OldWoman_73:
# 919 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_FacePlayer
# 920 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 921 "data/maps/MeltingSnowForest/scripts.pory"
	addvar VAR_SNOW_BERRY_WOMAN, 1
# 922 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_HUNGRY_TEDDIURSA
# 923 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_OldWoman_83
# 923 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_OldWoman_83
# 923 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_OldWoman_83
# 923 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_OldWoman_83
# 923 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_OldWoman_83
# 923 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_OldWoman_83
MeltingSnowForest_EventScript_OldWoman_82:
# 926 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_3
	goto MeltingSnowForest_EventScript_OldWoman_4

MeltingSnowForest_EventScript_OldWoman_8:
# 930 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_4
# 931 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 932 "data/maps/MeltingSnowForest/scripts.pory"
	removeitem ITEM_ORAN_BERRY_KEY, 1
# 933 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 934 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_18
# 938 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_17:
# 940 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 941 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_FaceUp
# 942 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 943 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 944 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 945 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 946 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_WalkInPlaceUp
# 947 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 948 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 949 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_5
# 950 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 951 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 952 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_ShoveUpSlower
# 953 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_PUDDLE
# 954 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 955 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 956 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 42, Common_Movement_JumpInPlaceDown
# 957 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 958 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 959 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 960 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_NORMAL
# 961 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 962 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 963 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 42, Common_Movement_FaceOriginalDirection
# 964 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 965 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_33
# 969 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_32:
# 971 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 972 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_47
MeltingSnowForest_EventScript_OldWoman_46:
# 975 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_59
MeltingSnowForest_EventScript_OldWoman_58:
# 978 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 29
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_71
MeltingSnowForest_EventScript_OldWoman_70:
# 981 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_80
MeltingSnowForest_EventScript_OldWoman_79:
# 984 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_FacePlayer
# 985 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 986 "data/maps/MeltingSnowForest/scripts.pory"
	addvar VAR_SNOW_BERRY_WOMAN, 1
# 987 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_HUNGRY_SWINUB
# 988 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_OldWoman_99
# 988 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_OldWoman_99
# 988 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_OldWoman_99
# 988 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_OldWoman_99
# 988 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_OldWoman_99
# 988 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_OldWoman_99
MeltingSnowForest_EventScript_OldWoman_98:
# 991 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_6
	goto MeltingSnowForest_EventScript_OldWoman_7

MeltingSnowForest_EventScript_OldWoman_11:
# 872 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_10

MeltingSnowForest_EventScript_OldWoman_15:
# 995 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_7
# 996 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 997 "data/maps/MeltingSnowForest/scripts.pory"
	removeitem ITEM_CHERI_BERRY_KEY, 1
# 998 "data/maps/MeltingSnowForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 999 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_29
# 1003 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_28:
# 1005 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1006 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_FaceDown
# 1007 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1008 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 1009 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1010 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1011 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_WalkInPlaceDown
# 1012 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1013 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1014 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_8
# 1015 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1016 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1017 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_ShoveDownSlower
# 1018 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_PUDDLE
# 1019 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1020 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1021 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 44, Common_Movement_JumpInPlaceUp
# 1022 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1023 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1024 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1025 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SENTRET, CRY_MODE_NORMAL
# 1026 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1027 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1028 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 44, Common_Movement_FaceOriginalDirection
# 1029 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1030 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_43
# 1034 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaRight
MeltingSnowForest_EventScript_OldWoman_42:
# 1036 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1037 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_56
MeltingSnowForest_EventScript_OldWoman_55:
# 1040 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_0, 38
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_68
MeltingSnowForest_EventScript_OldWoman_67:
# 1043 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 29
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_77
MeltingSnowForest_EventScript_OldWoman_76:
# 1046 "data/maps/MeltingSnowForest/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq MeltingSnowForest_EventScript_OldWoman_96
MeltingSnowForest_EventScript_OldWoman_95:
# 1049 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, Common_Movement_FacePlayer
# 1050 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1051 "data/maps/MeltingSnowForest/scripts.pory"
	addvar VAR_SNOW_BERRY_WOMAN, 1
# 1052 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_HUNGRY_SENTRET
# 1053 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_OldWoman_112
# 1053 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_OldWoman_112
# 1053 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_OldWoman_112
# 1053 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_OldWoman_112
# 1053 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_OldWoman_112
# 1053 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_OldWoman_112
MeltingSnowForest_EventScript_OldWoman_111:
# 1056 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_9
	goto MeltingSnowForest_EventScript_OldWoman_14

MeltingSnowForest_EventScript_OldWoman_18:
# 935 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_17

MeltingSnowForest_EventScript_OldWoman_22:
# 901 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_21

MeltingSnowForest_EventScript_OldWoman_26:
# 1059 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_10
	goto MeltingSnowForest_EventScript_OldWoman_25

MeltingSnowForest_EventScript_OldWoman_29:
# 1000 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanToTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_28

MeltingSnowForest_EventScript_OldWoman_33:
# 966 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_32

MeltingSnowForest_EventScript_OldWoman_37:
# 908 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto MeltingSnowForest_EventScript_OldWoman_36

MeltingSnowForest_EventScript_OldWoman_40:
# 1062 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_11
	goto MeltingSnowForest_EventScript_OldWoman_39

MeltingSnowForest_EventScript_OldWoman_43:
# 1031 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 45, OldWomanFromTeddiursaUp
	goto MeltingSnowForest_EventScript_OldWoman_42

MeltingSnowForest_EventScript_OldWoman_47:
# 973 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto MeltingSnowForest_EventScript_OldWoman_46

MeltingSnowForest_EventScript_OldWoman_50:
# 911 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto MeltingSnowForest_EventScript_OldWoman_49

MeltingSnowForest_EventScript_OldWoman_53:
# 1065 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_12
	goto MeltingSnowForest_EventScript_OldWoman_52

MeltingSnowForest_EventScript_OldWoman_56:
# 1038 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto MeltingSnowForest_EventScript_OldWoman_55

MeltingSnowForest_EventScript_OldWoman_59:
# 976 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto MeltingSnowForest_EventScript_OldWoman_58

MeltingSnowForest_EventScript_OldWoman_62:
# 914 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto MeltingSnowForest_EventScript_OldWoman_61

MeltingSnowForest_EventScript_OldWoman_65:
# 1068 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_OldWoman_Text_13
	goto MeltingSnowForest_EventScript_OldWoman_64

MeltingSnowForest_EventScript_OldWoman_68:
# 1041 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto MeltingSnowForest_EventScript_OldWoman_67

MeltingSnowForest_EventScript_OldWoman_71:
# 979 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto MeltingSnowForest_EventScript_OldWoman_70

MeltingSnowForest_EventScript_OldWoman_74:
# 917 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto MeltingSnowForest_EventScript_OldWoman_73

MeltingSnowForest_EventScript_OldWoman_77:
# 1044 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto MeltingSnowForest_EventScript_OldWoman_76

MeltingSnowForest_EventScript_OldWoman_80:
# 982 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto MeltingSnowForest_EventScript_OldWoman_79

MeltingSnowForest_EventScript_OldWoman_83:
# 924 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_CLEAR_STANTLERS
	goto MeltingSnowForest_EventScript_OldWoman_82

MeltingSnowForest_EventScript_OldWoman_96:
# 1047 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto MeltingSnowForest_EventScript_OldWoman_95

MeltingSnowForest_EventScript_OldWoman_99:
# 989 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_CLEAR_STANTLERS
	goto MeltingSnowForest_EventScript_OldWoman_98

MeltingSnowForest_EventScript_OldWoman_112:
# 1054 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_CLEAR_STANTLERS
	goto MeltingSnowForest_EventScript_OldWoman_111


# 1076 "data/maps/MeltingSnowForest/scripts.pory"
OldWomanToTeddiursaRight:
# 1077 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1077 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1078 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 1079 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
	step_end

# 1082 "data/maps/MeltingSnowForest/scripts.pory"
OldWomanToTeddiursaUp:
# 1083 "data/maps/MeltingSnowForest/scripts.pory"
	walk_up
# 1084 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1084 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1084 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
	step_end

# 1087 "data/maps/MeltingSnowForest/scripts.pory"
OldWomanFromTeddiursaRight:
# 1088 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1089 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
# 1090 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1090 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
	step_end

# 1093 "data/maps/MeltingSnowForest/scripts.pory"
OldWomanFromTeddiursaUp:
# 1094 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1094 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1094 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1095 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
	step_end

MeltingSnowForest_EventScript_HungryTeddiursa::
# 1099 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1100 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_HungryTeddiursa_2
# 1107 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_TEDDIURSA, CRY_MODE_NORMAL
# 1108 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1109 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1110 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungryTeddiursa_Text_1
MeltingSnowForest_EventScript_HungryTeddiursa_1:
# 1112 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1113 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 43, Common_Movement_FaceOriginalDirection
# 1114 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1115 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_HungryTeddiursa_2:
# 1101 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_TEDDIURSA, CRY_MODE_FAINT
# 1102 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1103 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1104 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungryTeddiursa_Text_0
	goto MeltingSnowForest_EventScript_HungryTeddiursa_1


MeltingSnowForest_EventScript_HungrySwinub::
# 1120 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1121 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_HungrySwinub_2
# 1128 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_NORMAL
# 1129 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1130 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1131 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungrySwinub_Text_1
MeltingSnowForest_EventScript_HungrySwinub_1:
# 1133 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1134 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 42, Common_Movement_FaceOriginalDirection
# 1135 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1136 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_HungrySwinub_2:
# 1122 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SWINUB, CRY_MODE_FAINT
# 1123 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1124 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1125 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungrySwinub_Text_0
	goto MeltingSnowForest_EventScript_HungrySwinub_1


MeltingSnowForest_EventScript_HungrySentret::
# 1141 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1142 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_HungrySentret_2
# 1149 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SENTRET, CRY_MODE_NORMAL
# 1150 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1151 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1152 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungrySentret_Text_1
MeltingSnowForest_EventScript_HungrySentret_1:
# 1154 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1155 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 44, Common_Movement_FaceOriginalDirection
# 1156 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1157 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_HungrySentret_2:
# 1143 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_SENTRET, CRY_MODE_FAINT
# 1144 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1145 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1146 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_HungrySentret_Text_0
	goto MeltingSnowForest_EventScript_HungrySentret_1


MeltingSnowForest_EventScript_Froslass::
# 1166 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 1167 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1168 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1169 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_FacePlayer
# 1170 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1171 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_FROSLASS, CRY_MODE_ENCOUNTER
# 1172 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1173 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1174 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_ShoveRight
# 1175 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 1176 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1177 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1178 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_0
# 1179 "data/maps/MeltingSnowForest/scripts.pory"
	setwildbattle SPECIES_FROSLASS, 35, ITEM_NONE, SPECIES_GLALIE, 35, ITEM_NONE
# 1180 "data/maps/MeltingSnowForest/scripts.pory"
	dowildbattle
# 1181 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1182 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1183 "data/maps/MeltingSnowForest/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1184 "data/maps/MeltingSnowForest/scripts.pory"
	callnative UpdateFollowingPokemon
# 1185 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1186 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_FaceUp
# 1187 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_FaceDown
# 1188 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1189 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1190 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_ShoveUp
# 1191 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_ShoveDown
# 1192 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BITE
# 1193 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1194 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1195 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, MeltingSnowForest_EventScript_Froslass_Movement_0
# 1196 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1197 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, MeltingSnowForest_EventScript_Froslass_Movement_1
# 1198 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1199 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_EXIT
# 1200 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 1201 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 48
# 1202 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 47
# 1203 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_GLALIE_FROSLASS_DOUBLE
# 1204 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_Froslass_2
# 1204 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_Froslass_2
# 1204 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_Froslass_2
# 1204 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_Froslass_2
# 1204 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_Froslass_2
# 1204 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_Froslass_2
MeltingSnowForest_EventScript_Froslass_1:
# 1207 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1208 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_Froslass_2:
# 1205 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_CLEAR_STANTLERS
	goto MeltingSnowForest_EventScript_Froslass_1


MeltingSnowForest_EventScript_Glalie::
# 1213 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 1214 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1215 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1216 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_FacePlayer
# 1217 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1218 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_GLALIE, CRY_MODE_ENCOUNTER
# 1219 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1220 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1221 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_ShoveRight
# 1222 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 1223 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1224 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1225 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Sawsbuck_Text_0
# 1226 "data/maps/MeltingSnowForest/scripts.pory"
	setwildbattle SPECIES_FROSLASS, 35, ITEM_NONE, SPECIES_GLALIE, 35, ITEM_NONE
# 1227 "data/maps/MeltingSnowForest/scripts.pory"
	dowildbattle
# 1228 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1229 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1230 "data/maps/MeltingSnowForest/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1231 "data/maps/MeltingSnowForest/scripts.pory"
	callnative UpdateFollowingPokemon
# 1232 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1233 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_FaceUp
# 1234 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_FaceDown
# 1235 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1236 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1237 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, Common_Movement_ShoveUp
# 1238 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, Common_Movement_ShoveDown
# 1239 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_M_BITE
# 1240 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1241 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1242 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 47, MeltingSnowForest_EventScript_Froslass_Movement_0
# 1243 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1244 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 48, MeltingSnowForest_EventScript_Glalie_Movement_0
# 1245 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1246 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_EXIT
# 1247 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 1248 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 48
# 1249 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 47
# 1250 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_GLALIE_FROSLASS_DOUBLE
# 1251 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_Glalie_2
# 1251 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_Glalie_2
# 1251 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_Glalie_2
# 1251 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_Glalie_2
# 1251 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_Glalie_2
# 1251 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_Glalie_2
MeltingSnowForest_EventScript_Glalie_1:
# 1254 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1255 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_Glalie_2:
# 1252 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_CLEAR_STANTLERS
	goto MeltingSnowForest_EventScript_Glalie_1


MeltingSnowForest_EventScript_WaterWoman::
# 1260 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1261 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_WATER_WOMAN_TALKED, MeltingSnowForest_EventScript_WaterWoman_2
MeltingSnowForest_EventScript_WaterWoman_1:
# 1266 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_WATER_WOMAN_TALKED, MeltingSnowForest_EventScript_WaterWoman_5
MeltingSnowForest_EventScript_WaterWoman_4:
# 1269 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1270 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 49, Common_Movement_FaceOriginalDirection
# 1271 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1272 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end

MeltingSnowForest_EventScript_WaterWoman_2:
# 1262 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_WaterWoman_Text_0
# 1263 "data/maps/MeltingSnowForest/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 1264 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_WATER_WOMAN_TALKED
	goto MeltingSnowForest_EventScript_WaterWoman_1

MeltingSnowForest_EventScript_WaterWoman_5:
# 1267 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_WaterWoman_Text_1
	goto MeltingSnowForest_EventScript_WaterWoman_4


MeltingSnowForest_EventScript_LastScientist::
# 1281 "data/maps/MeltingSnowForest/scripts.pory"
	lock
# 1282 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_LastScientist_2
# 1282 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_LastScientist_2
# 1282 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_LastScientist_2
# 1282 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_LastScientist_2
# 1282 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_LastScientist_2
# 1282 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_LastScientist_2
MeltingSnowForest_EventScript_LastScientist_1:
# 1315 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_LastScientist_15
# 1315 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_LastScientist_15
# 1315 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_LastScientist_15
# 1315 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_LastScientist_15
# 1315 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_LastScientist_15
# 1315 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_set FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_LastScientist_15
# 1321 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_LastScientist_2:
# 1283 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1284 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_LAST_SCIENTIST_FIRST_TALK, MeltingSnowForest_EventScript_LastScientist_28
MeltingSnowForest_EventScript_LastScientist_27:
# 1288 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LastScientist_Text_1
# 1289 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_PARASECT_DOUBLE_BATTLE, MeltingSnowForest_EventScript_LastScientist_31
# 1296 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_GLALIE_FROSLASS_DOUBLE, MeltingSnowForest_EventScript_LastScientist_34
# 1302 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_STANTLER_WATERED, MeltingSnowForest_EventScript_LastScientist_37
# 1308 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_SENTRET, MeltingSnowForest_EventScript_LastScientist_39
# 1308 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_SWINUB, MeltingSnowForest_EventScript_LastScientist_39
# 1308 "data/maps/MeltingSnowForest/scripts.pory"
	goto_if_unset FLAG_HUNGRY_TEDDIURSA, MeltingSnowForest_EventScript_LastScientist_39
	goto MeltingSnowForest_EventScript_LastScientist_1

MeltingSnowForest_EventScript_LastScientist_15:
# 1316 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LastScientist_Text_6
# 1317 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1318 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_LastScientist_28:
# 1285 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LastScientist_Text_0
# 1286 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_LAST_SCIENTIST_FIRST_TALK
	goto MeltingSnowForest_EventScript_LastScientist_27

MeltingSnowForest_EventScript_LastScientist_31:
# 1290 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1291 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LastScientist_Text_2
# 1292 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1293 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_LastScientist_34:
# 1297 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LastScientist_Text_3
# 1298 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1299 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_LastScientist_37:
# 1303 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LastScientist_Text_4
# 1304 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1305 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end

MeltingSnowForest_EventScript_LastScientist_39:
# 1309 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LastScientist_Text_5
# 1310 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1311 "data/maps/MeltingSnowForest/scripts.pory"
	releaseall
	end


MeltingSnowForest_EventScript_FightingStantler::
# 1326 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_FightingStantler_Text_0
# 1327 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1328 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


MeltingSnowForest_AlbedoScientist::
# 1333 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1334 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_AlbedoScientist_Text_0
# 1335 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1336 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


MeltingSnowForest_EventScript_ConservationHiker::
# 1343 "data/maps/MeltingSnowForest/scripts.pory"
	trainerbattle_single TRAINER_SHELLY_SEAFLOOR_CAVERN, Martin_Intro, Martin_Outro
# 1344 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox PostBattle_Martin, MSGBOX_AUTOCLOSE
# 1345 "data/maps/MeltingSnowForest/scripts.pory"
	waitmessage
	end


MeltingSnowForest_EventScript_RisingTemps::
# 1359 "data/maps/MeltingSnowForest/scripts.pory"
	trainerbattle_single TRAINER_ARCHIE, Anthony_Intro, Anthony_Outro
# 1360 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox PostBattle_Anthony, MSGBOX_AUTOCLOSE
# 1361 "data/maps/MeltingSnowForest/scripts.pory"
	waitmessage
	end


MeltingSnowForest_EventScript_Decay::
# 1375 "data/maps/MeltingSnowForest/scripts.pory"
	faceplayer
# 1376 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_Decay_Text_0
# 1377 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1378 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 41, Common_Movement_FaceOriginalDirection
# 1379 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1380 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


MeltingSnowForest_EventScript_LittleGirl::
# 1385 "data/maps/MeltingSnowForest/scripts.pory"
	lockall
# 1386 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1387 "data/maps/MeltingSnowForest/scripts.pory"
	special SpawnCameraObject
# 1388 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1389 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToLittleGirl
# 1390 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1391 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1392 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_FaceUp
# 1393 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1394 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1395 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_FaceRight
# 1396 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1397 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1398 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_WalkInPlaceRight
# 1399 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1400 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1401 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_0
# 1402 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1403 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1404 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_1
# 1405 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1406 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1407 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerToLittleGirl
# 1408 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, PlayerToLittleGirl
# 1409 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_FaceLeft
# 1410 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1411 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_ExclamationMark
# 1412 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_PIN
# 1413 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1414 "data/maps/MeltingSnowForest/scripts.pory"
	delay 60
# 1415 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromLittleGirl
# 1416 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1417 "data/maps/MeltingSnowForest/scripts.pory"
	special RemoveCameraObject
# 1418 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1419 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_JumpInPlaceLeft
# 1420 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1421 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1422 "data/maps/MeltingSnowForest/scripts.pory"
	delay 20
# 1423 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_2
# 1424 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1425 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1426 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, MeltingSnowForest_EventScript_LittleGirl_Movement_0
# 1427 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1428 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_3
# 1429 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1430 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1431 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_ENCOUNTER
# 1432 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1433 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_WalkInPlaceUp
# 1434 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1435 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_4
# 1436 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1437 "data/maps/MeltingSnowForest/scripts.pory"
	addobject 60
# 1438 "data/maps/MeltingSnowForest/scripts.pory"
	addobject 61
# 1439 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 61, MeltingSnowForest_EventScript_LittleGirl_Movement_1
# 1440 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1441 "data/maps/MeltingSnowForest/scripts.pory"
	clearflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1442 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 61, MeltingSnowForest_EventScript_LittleGirl_Movement_2
# 1443 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, MeltingSnowForest_EventScript_LittleGirl_Movement_3
# 1444 "data/maps/MeltingSnowForest/scripts.pory"
	delay 25
# 1445 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1446 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1447 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, Common_Movement_JumpDown
# 1448 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1449 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1450 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, Common_Movement_JumpDown
# 1451 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1452 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1453 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, Common_Movement_WalkInPlaceLeft
# 1454 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1455 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_FaceLeft
# 1456 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 29
# 1457 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 61, MeltingSnowForest_EventScript_LittleGirl_Movement_4
# 1458 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, MeltingSnowForest_EventScript_LittleGirl_Movement_5
# 1459 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceLeft
# 1460 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1461 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1462 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceRight
# 1463 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1464 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 60
# 1465 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 50
# 1466 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1467 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_ENCOUNTER
# 1468 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1469 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1470 "data/maps/MeltingSnowForest/scripts.pory"
	setwildbattle SPECIES_STANTLER, 35, ITEM_NONE, SPECIES_STANTLER, 35, ITEM_NONE
# 1471 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 61, Common_Movement_ShoveRight
# 1472 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, Common_Movement_ShoveLeft
# 1473 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 1474 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 1475 "data/maps/MeltingSnowForest/scripts.pory"
	dowildbattle
# 1476 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1477 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1478 "data/maps/MeltingSnowForest/scripts.pory"
	playmoncry SPECIES_STANTLER, CRY_MODE_ENCOUNTER
# 1479 "data/maps/MeltingSnowForest/scripts.pory"
	waitmoncry
# 1480 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1481 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 61, Common_Movement_ShoveRight
# 1482 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, Common_Movement_ShoveLeft
# 1483 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_SWITCH
# 1484 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 1485 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1486 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 61, MeltingSnowForest_EventScript_LittleGirl_Movement_6
# 1487 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, Common_Movement_JumpUp
# 1488 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1489 "data/maps/MeltingSnowForest/scripts.pory"
	delay 20
# 1490 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, Common_Movement_JumpUp
# 1491 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1492 "data/maps/MeltingSnowForest/scripts.pory"
	delay 20
# 1493 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, Common_Movement_JumpUp
# 1494 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1495 "data/maps/MeltingSnowForest/scripts.pory"
	delay 20
# 1496 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 60, MeltingSnowForest_EventScript_LittleGirl_Movement_7
# 1497 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 50, MeltingSnowForest_EventScript_LittleGirl_Movement_8
# 1498 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1499 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1500 "data/maps/MeltingSnowForest/scripts.pory"
	setflag FLAG_SNOW_GIRL
# 1501 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 60
# 1502 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 61
# 1503 "data/maps/MeltingSnowForest/scripts.pory"
	removeobject 50
# 1504 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1505 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_JumpInPlaceLeft
# 1506 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1507 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1508 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_5
# 1509 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1510 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1511 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_WalkLeft
# 1512 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1513 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_6
# 1514 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1515 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1516 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeltingSnowForest_EventScript_LittleGirl_Movement_9
# 1517 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, MeltingSnowForest_EventScript_LittleGirl_Movement_10
# 1518 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1519 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 1520 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_WalkInPlaceLeft
# 1521 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1522 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 1523 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_PIN
# 1524 "data/maps/MeltingSnowForest/scripts.pory"
	waitse
# 1525 "data/maps/MeltingSnowForest/scripts.pory"
	delay 5
# 1526 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 1527 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1528 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1529 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_7
# 1530 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1531 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1532 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_ShoveLeft
# 1533 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 1534 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1535 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1536 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_ShoveRight
# 1537 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_CONTEST_CONDITION_LOSE
# 1538 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1539 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_8
# 1540 "data/maps/MeltingSnowForest/scripts.pory"
	closemessage
# 1541 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_JumpInPlaceRight
# 1542 "data/maps/MeltingSnowForest/scripts.pory"
	playse SE_BIKE_HOP
# 1543 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement 0
# 1544 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1545 "data/maps/MeltingSnowForest/scripts.pory"
	special SpawnCameraObject
# 1546 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MeltingSnowForest_EventScript_LittleGirl_Movement_11
# 1547 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1548 "data/maps/MeltingSnowForest/scripts.pory"
	fadenewbgm MUS_DUMMY
# 1549 "data/maps/MeltingSnowForest/scripts.pory"
	applymovement 29, Common_Movement_FaceDown
# 1550 "data/maps/MeltingSnowForest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1551 "data/maps/MeltingSnowForest/scripts.pory"
	delay 15
# 1552 "data/maps/MeltingSnowForest/scripts.pory"
	msgbox MeltingSnowForest_EventScript_LittleGirl_Text_9
# 1553 "data/maps/MeltingSnowForest/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 6
# 1554 "data/maps/MeltingSnowForest/scripts.pory"
	delay 30
# 1555 "data/maps/MeltingSnowForest/scripts.pory"
	fadeoutbgm 0
# 1556 "data/maps/MeltingSnowForest/scripts.pory"
	callnative StartCredits
# 1557 "data/maps/MeltingSnowForest/scripts.pory"
	release
	end


# 1561 "data/maps/MeltingSnowForest/scripts.pory"
CameraToLittleGirl:
# 1562 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1562 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1562 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1562 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1562 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1562 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1562 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1562 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
	step_end

# 1565 "data/maps/MeltingSnowForest/scripts.pory"
PlayerToLittleGirl:
# 1566 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1566 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1566 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1566 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1566 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
# 1566 "data/maps/MeltingSnowForest/scripts.pory"
	walk_right
	step_end

# 1569 "data/maps/MeltingSnowForest/scripts.pory"
CameraFromLittleGirl:
# 1570 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1570 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
	step_end

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

# 327 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_Sneasel_Movement_0:
# 327 "data/maps/MeltingSnowForest/scripts.pory"
	walk_down
	step_end

# 815 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_FightingHiker_Movement_0:
# 815 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 815 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 815 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 815 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 815 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 815 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 815 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 815 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 815 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
	step_end

# 1195 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_Froslass_Movement_0:
# 1195 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1195 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1195 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1195 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1195 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1195 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1195 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1195 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1195 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 1197 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_Froslass_Movement_1:
# 1197 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 1197 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1197 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1197 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1197 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1197 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1197 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1197 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1197 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1197 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 1244 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_Glalie_Movement_0:
# 1244 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 1244 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1244 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1244 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1244 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1244 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1244 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1244 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1244 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1244 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 1426 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_0:
# 1426 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1426 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1426 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1426 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1426 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_fast_left
# 1426 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_fast_left
# 1426 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_fast_left
# 1426 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_fast_left
	step_end

# 1439 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_1:
# 1439 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1439 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1439 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1439 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1439 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1439 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1439 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
	step_end

# 1442 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_2:
# 1442 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1442 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1442 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1442 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1442 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1442 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
# 1442 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_right
	step_end

# 1443 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_3:
# 1443 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 1443 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 1443 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_down
# 1443 "data/maps/MeltingSnowForest/scripts.pory"
	jump_down
	step_end

# 1457 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_4:
# 1457 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
# 1457 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
# 1457 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
# 1457 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
# 1457 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
# 1457 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
# 1457 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
# 1457 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
# 1457 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
# 1457 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_right
	step_end

# 1458 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_5:
# 1458 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1458 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1458 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1458 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1458 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1458 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1458 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1458 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1458 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
# 1458 "data/maps/MeltingSnowForest/scripts.pory"
	walk_in_place_left
	step_end

# 1486 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_6:
# 1486 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 1486 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 1486 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 1486 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 1486 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 1486 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
# 1486 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_left
	step_end

# 1496 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_7:
# 1496 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 1496 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 1496 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
# 1496 "data/maps/MeltingSnowForest/scripts.pory"
	walk_fast_up
	step_end

# 1497 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_8:
# 1497 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1497 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1497 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1497 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1497 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1497 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1497 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1497 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
	step_end

# 1516 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_9:
# 1516 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1516 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1516 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1516 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1516 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1516 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
	step_end

# 1517 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_10:
# 1517 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1517 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1517 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1517 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
# 1517 "data/maps/MeltingSnowForest/scripts.pory"
	walk_left
	step_end

# 1546 "data/maps/MeltingSnowForest/scripts.pory"
MeltingSnowForest_EventScript_LittleGirl_Movement_11:
# 1546 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1546 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_left
# 1546 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1546 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1546 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1546 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1546 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1546 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1546 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
# 1546 "data/maps/MeltingSnowForest/scripts.pory"
	walk_faster_down
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
# 441 "data/maps/MeltingSnowForest/scripts.pory"
	.string "There are some deranged Pokémon\n"
	.string "attacking that poor Parasect!\p"
	.string "I wish there was something I could do...$"

MeltingSnowForest_EventScript_Camper1_Text_1:
# 444 "data/maps/MeltingSnowForest/scripts.pory"
	.string "On second thought, maybe that\n"
	.string "Parasect was infected by the spores\l"
	.string "the elder spoke of.\p"
	.string "Perhaps it wasn't a legend, after all...$"

MeltingSnowForest_EventScript_StantlerHiker_Text_0:
# 455 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Did you see what just happened?\p"
	.string "I've never seen a Pokémon willingly jump\n"
	.string "in freezing water like that!$"

MeltingSnowForest_EventScript_HotStantler_Text_0:
# 466 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Stantler is panting uncontrollably!$"

MeltingSnowForest_EventScript_HotStantler_Text_1:
# 469 "data/maps/MeltingSnowForest/scripts.pory"
	.string "You used the Wailmer Pail to pour water\n"
	.string "into the Stantler's mouth!$"

MeltingSnowForest_EventScript_HotStantler_Text_2:
# 485 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Stantler thanked you!$"

MeltingSnowForest_EventScript_PoorStantlerGirl_Text_0:
# 497 "data/maps/MeltingSnowForest/scripts.pory"
	.string "This poor Stantler just jumped in the\n"
	.string "frigid water to cool off...\p"
	.string "It looks like it can't even drink...\p"
	.string "I wish I could help!$"

MeltingSnowForest_EventScript_PoorStantlerGirl_Text_1:
# 500 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Stantler already looks better!\p"
	.string "I wonder if he wasn't able to drink\n"
	.string "because of the sickness that's\l"
	.string "spreading.$"

MeltingSnowForest_EventScript_PoorStantlerGirl_Text_2:
# 502 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Here, you can have this!$"

MeltingSnowForest_EventScript_FirstScientist_Text_0:
# 661 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I was supposed to do research on how\n"
	.string "the warmer environment has changed the\l"
	.string "forest, but a Pokémon attacked me!\p"
	.string "What other disasters could present\n"
	.string "themselves here?$"

MeltingSnowForest_EventScript_Farmer_Text_0:
# 702 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Well, howdy, partner! I hear that as the\n"
	.string "snow melts, there's some potential for\l"
	.string "some farming up here!\p"
	.string "Sounds great to me, the economy will be\n"
	.string "booming!\p"
	.string "Figured I'd help heat things up.$"

MeltingSnowForest_EventScript_Farmer_Text_1:
# 713 "data/maps/MeltingSnowForest/scripts.pory"
	.string "There's nothing wrong with what I'm\n"
	.string "doing, I'm just trying to grow more\l"
	.string "crops!$"

MeltingSnowForest_EventScript_Farmer_Text_2:
# 714 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Don't backtalk me!$"

MeltingSnowForest_EventScript_Farmer_Text_3:
# 714 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Dadgummit!$"

MeltingSnowForest_EventScript_Farmer_Text_4:
# 720 "data/maps/MeltingSnowForest/scripts.pory"
	.string "You can stop me, but you can't stop the\n"
	.string "forest from warming up.\p"
	.string "Soon enough, I'll be farming here!$"

MeltingSnowForest_EventScript_AfterFarmer_Text_0:
# 744 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Why do you want to stop agriculture?\p"
	.string "We can grow so much more food if we get\n"
	.string "rid of all this snow!$"

MeltingSnowForest_EventScript_AfterFarmer_Text_1:
# 758 "data/maps/MeltingSnowForest/scripts.pory"
	.string "You know what? This forest is gonna\n"
	.string "warm up, no matter what.\p"
	.string "It's inevitable, and I don't need to help\n"
	.string "speed it up.\p"
	.string "Here, you can even take this.$"

MeltingSnowForest_EventScript_Ursaring_Text_0:
# 769 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Ursaring roared violently, better\n"
	.string "get away!$"

MeltingSnowForest_EventScript_FightingHiker_Text_0:
# 791 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Help! I was going for a hike, and this\n"
	.string "Ursaring attacked me out of nowhere!\p"
	.string "I can't fend it off much longer, do you\n"
	.string "have anything that could ward it off?$"

MeltingSnowForest_EventScript_FightingHiker_Text_1:
# 798 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Oh, is that a fire gem? Here, give me\n"
	.string "that!$"

MeltingSnowForest_EventScript_FightingHiker_Text_2:
# 806 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Take this, Ursaring!$"

MeltingSnowForest_EventScript_FightingHiker_Text_3:
# 841 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I can't believe that worked, you just\n"
	.string "saved my life!\p"
	.string "I wonder why that Ursaring was so\n"
	.string "persistent, maybe it was because of\l"
	.string "this!$"

MeltingSnowForest_EventScript_FightingHiker_Text_4:
# 851 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Hopefully you don't get any Pokémon\n"
	.string "smelling that berry in your bag and\l"
	.string "hunting you down!$"

MeltingSnowForest_EventScript_OldWoman_Text_0:
# 862 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Oh, these poor Pokémon. They seem to be\n"
	.string "starving!\p"
	.string "I think their food sources have\n"
	.string "disappeared as a result of climate\l"
	.string "change.\p"
	.string "Will you help me gather some food for\n"
	.string "them?$"

MeltingSnowForest_EventScript_OldWoman_Text_1:
# 867 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Is that a Sitrus Berry? Where did you\n"
	.string "find it?\p"
	.string "Here, I'll give it to this poor little\n"
	.string "Teddiursa!$"

MeltingSnowForest_EventScript_OldWoman_Text_2:
# 884 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Here you go, eat up!$"

MeltingSnowForest_EventScript_OldWoman_Text_3:
# 926 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Thank you, dear!$"

MeltingSnowForest_EventScript_OldWoman_Text_4:
# 930 "data/maps/MeltingSnowForest/scripts.pory"
	.string "That looks like an Oran Berry!\p"
	.string "I'm sure this hungry Swinub would love\n"
	.string "it.$"

MeltingSnowForest_EventScript_OldWoman_Text_5:
# 949 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Enjoy, my friend!$"

MeltingSnowForest_EventScript_OldWoman_Text_6:
# 991 "data/maps/MeltingSnowForest/scripts.pory"
	.string "That Swinub was so excited.$"

MeltingSnowForest_EventScript_OldWoman_Text_7:
# 995 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Wow, a Cheri Berry!\p"
	.string "This starving Sentret could certainly\n"
	.string "use this.$"

MeltingSnowForest_EventScript_OldWoman_Text_8:
# 1014 "data/maps/MeltingSnowForest/scripts.pory"
	.string "It's your lucky day!$"

MeltingSnowForest_EventScript_OldWoman_Text_9:
# 1056 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Sentret devoured the berry!$"

MeltingSnowForest_EventScript_OldWoman_Text_10:
# 1059 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I'm sure you can find something these\n"
	.string "Pokémon could eat!$"

MeltingSnowForest_EventScript_OldWoman_Text_11:
# 1062 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Do you think you could find food for\n"
	.string "these other two Pokémon?$"

MeltingSnowForest_EventScript_OldWoman_Text_12:
# 1065 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Just one more hungry Pokémon!$"

MeltingSnowForest_EventScript_OldWoman_Text_13:
# 1068 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Thank you for your help! I'm sure these\n"
	.string "Pokémon are very grateful.$"

MeltingSnowForest_EventScript_HungryTeddiursa_Text_0:
# 1104 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Teddiursa seems weak.$"

MeltingSnowForest_EventScript_HungryTeddiursa_Text_1:
# 1110 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Teddiursa is happily eating!$"

MeltingSnowForest_EventScript_HungrySwinub_Text_0:
# 1125 "data/maps/MeltingSnowForest/scripts.pory"
	.string "It looks faint.$"

MeltingSnowForest_EventScript_HungrySwinub_Text_1:
# 1131 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Swinub looks satisfied.$"

MeltingSnowForest_EventScript_HungrySentret_Text_0:
# 1146 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Sentret is swaying back and forth.$"

MeltingSnowForest_EventScript_HungrySentret_Text_1:
# 1152 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Sentret happily licks berry juice off\n"
	.string "their fur!$"

MeltingSnowForest_EventScript_WaterWoman_Text_0:
# 1262 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I hear that new flora may be sprouting\n"
	.string "as the forest thaws, and I came here\l"
	.string "looking for flowers!\p"
	.string "However, those two Pokémon got into a\n"
	.string "fight, trapping me here.\p"
	.string "Thank you for warding them off, you can\n"
	.string "have this!$"

MeltingSnowForest_EventScript_WaterWoman_Text_1:
# 1267 "data/maps/MeltingSnowForest/scripts.pory"
	.string "No flowers, but I did come across a\n"
	.string "berry.\p"
	.string "Thank you again for helping me out!$"

MeltingSnowForest_EventScript_LastScientist_Text_0:
# 1285 "data/maps/MeltingSnowForest/scripts.pory"
	.string "These Pokémon are displaying irregular,\n"
	.string "aggressive behavior.\p"
	.string "It seems like they've been infected by\n"
	.string "something that emerged from the frost.$"

MeltingSnowForest_EventScript_LastScientist_Text_1:
# 1288 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Stantler show no sign of budging.$"

MeltingSnowForest_EventScript_LastScientist_Text_2:
# 1291 "data/maps/MeltingSnowForest/scripts.pory"
	.string "A pair of Pokémon were bullying a\n"
	.string "defenseless Parasect to the south.\p"
	.string "Perhaps the Mushroom Pokémon has\n"
	.string "something to do with this disease we're\l"
	.string "observing.\p"
	.string "Could you investigate?$"

MeltingSnowForest_EventScript_LastScientist_Text_3:
# 1297 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I heard two Pokémon locked in a brawl,\n"
	.string "trapping a woman.\p"
	.string "Someone should save her!$"

MeltingSnowForest_EventScript_LastScientist_Text_4:
# 1303 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Another Stantler appeared to be\n"
	.string "infected and was extremely feverish.\p"
	.string "Could you give it some water to see if\n"
	.string "that could cure the affliction?$"

MeltingSnowForest_EventScript_LastScientist_Text_5:
# 1309 "data/maps/MeltingSnowForest/scripts.pory"
	.string "While probing this forest, I came across\n"
	.string "several hungry Pokémon on the brink of\l"
	.string "starvation.\p"
	.string "In particular, three young Pokémon by\n"
	.string "the river looked in rough shape. Could\l"
	.string "you assist?$"

MeltingSnowForest_EventScript_LastScientist_Text_6:
# 1316 "data/maps/MeltingSnowForest/scripts.pory"
	.string "You investigated the whole forest?\n"
	.string "Wow!\p"
	.string "Lucky for you, those Stantler appear to\n"
	.string "have left!$"

MeltingSnowForest_EventScript_FightingStantler_Text_0:
# 1326 "data/maps/MeltingSnowForest/scripts.pory"
	.string "The Stantler is locked into combat, it\n"
	.string "does not notice you.$"

MeltingSnowForest_AlbedoScientist_Text_0:
# 1334 "data/maps/MeltingSnowForest/scripts.pory"
	.string "As snow melts, dark land is exposed.\n"
	.string "These areas absorb more radiation from\l"
	.string "the sun than reflective snow,\l"
	.string "increasing the temperature of the\l"
	.string "earth.\p"
	.string "In this way, global warming is a positive\n"
	.string "feedback loop!$"

MeltingSnowForest_EventScript_Decay_Text_0:
# 1376 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Decaying plant and animal matter from\n"
	.string "the past has been unearthed as the\l"
	.string "snow melts.\p"
	.string "As this matter is exposed, methane is\n"
	.string "released, which increases the impact of\l"
	.string "the greenhouse effect.\p"
	.string "I don't see how this forest stands a\n"
	.string "chance of surviving much longer.$"

MeltingSnowForest_EventScript_LittleGirl_Text_0:
# 1401 "data/maps/MeltingSnowForest/scripts.pory"
	.string "So cold...\p"
	.string "I don't think anyone's coming...$"

MeltingSnowForest_EventScript_LittleGirl_Text_1:
# 1404 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Sniffle...$"

MeltingSnowForest_EventScript_LittleGirl_Text_2:
# 1423 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Did you scare off those mean Stantler?\p"
	.string "Are you here to save me?$"

MeltingSnowForest_EventScript_LittleGirl_Text_3:
# 1428 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I'm sorry! I didn't mean to run off!\p"
	.string "I'll never do it ever again, I promise!\p"
	.string "I just want to go home.$"

MeltingSnowForest_EventScript_LittleGirl_Text_4:
# 1435 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Wh-what was that?$"

MeltingSnowForest_EventScript_LittleGirl_Text_5:
# 1508 "data/maps/MeltingSnowForest/scripts.pory"
	.string "You scared them off! Those Stantler\n"
	.string "were so mean!$"

MeltingSnowForest_EventScript_LittleGirl_Text_6:
# 1513 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Let's go home!$"

MeltingSnowForest_EventScript_LittleGirl_Text_7:
# 1529 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Wait, I don't feel so good...$"

MeltingSnowForest_EventScript_LittleGirl_Text_8:
# 1539 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Cough, cough...$"

MeltingSnowForest_EventScript_LittleGirl_Text_9:
# 1552 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Wait, please...\p"
	.string "Don't leave me behind...$"

Timmy_Intro::
# 675 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Bugs have emerged from the frost!\n"
	.string "Look at mine!$"

Timmy_Outro::
# 678 "data/maps/MeltingSnowForest/scripts.pory"
	.string "I wonder how long my bugs were frozen\n"
	.string "for.$"

PostBattle_Timmy::
# 681 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Why am I wearing shorts in the snow?$"

Martin_Intro::
# 1348 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Forests like this account for one of\n"
	.string "the world's largest carbon sinks!$"

Martin_Outro::
# 1351 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Boreal forests hold hundreds of\n"
	.string "billions of tons of carbon!$"

PostBattle_Martin::
# 1354 "data/maps/MeltingSnowForest/scripts.pory"
	.string "If these forests go away, the world\n"
	.string "won't be able to hold as much carbon.\p"
	.string "The world will continue to heat up.$"

Anthony_Intro::
# 1364 "data/maps/MeltingSnowForest/scripts.pory"
	.string "This forest has warmed three times\n"
	.string "faster than anywhere else!$"

Anthony_Outro::
# 1367 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Drat! You've bested me!$"

PostBattle_Anthony::
# 1370 "data/maps/MeltingSnowForest/scripts.pory"
	.string "Polar regions like this have\n"
	.string "experienced rapid warming due to arctic\l"
	.string "amplification.\p"
	.string "I learned about that from a scientist!$"
