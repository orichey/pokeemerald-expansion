# 1 "data/maps/DewfordTown/scripts.pory"

# 2 "data/maps/DewfordTown/scripts.pory"
.set LOCALID_VICTOR, 33
# 3 "data/maps/DewfordTown/scripts.pory"
.set LOCALID_VICTORIA, 34
# 4 "data/maps/DewfordTown/scripts.pory"
.set LOCALID_VIVI, 35
# 5 "data/maps/DewfordTown/scripts.pory"
.set LOCALID_VICKY, 36
# 6 "data/maps/DewfordTown/scripts.pory"

# 7 "data/maps/DewfordTown/scripts.pory"
@ Sailing to and from Dewford uses local IDs from different maps
# 8 "data/maps/DewfordTown/scripts.pory"
@ e.g. Route 104's sail to Dewford script references local IDs from Dewford's map
# 9 "data/maps/DewfordTown/scripts.pory"
@ All of these local IDs are labeled here
# 10 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_DEWFORD, 2
# 11 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_DEWFORD, 4
# 12 "data/maps/DewfordTown/scripts.pory"

# 13 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_R109, 1
# 14 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_R109, 2
# 15 "data/maps/DewfordTown/scripts.pory"

# 16 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_R104, 7
# 17 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_R104, 8
# 18 "data/maps/DewfordTown/scripts.pory"

# 19 "data/maps/DewfordTown/scripts.pory"
DewfordTown_MapScripts::
# 20 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_OnTransition
# 21 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, DewfordTown_OnResume
# 22 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DewfordTown_OnFrame
# 23 "data/maps/DewfordTown/scripts.pory"
	.byte 0
# 24 "data/maps/DewfordTown/scripts.pory"

# 25 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnTransition:
# 26 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
# 27 "data/maps/DewfordTown/scripts.pory"
	call_if_eq VAR_DEWFORD_TOWN_STATE, 1, DewfordTown_EventScript_StormyInFront
# 28 "data/maps/DewfordTown/scripts.pory"
	goto_if_not_defeated TRAINER_ROXANNE_1, DewfordTown_EventScript_SetWinstratesNotDefeated
# 29 "data/maps/DewfordTown/scripts.pory"
	goto_if_defeated TRAINER_ROXANNE_1, DewfordTown_EventScript_RemoveEveryWinstrate
# 30 "data/maps/DewfordTown/scripts.pory"
	end
# 31 "data/maps/DewfordTown/scripts.pory"

# 32 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnResume:
# 33 "data/maps/DewfordTown/scripts.pory"
	call_if_eq VAR_DEWFORD_TOWN_STATE, 4, DewfordTown_EventScript_SetWinstratesDefeated
# 34 "data/maps/DewfordTown/scripts.pory"
	end
# 35 "data/maps/DewfordTown/scripts.pory"

# 36 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnFrame:
# 37 "data/maps/DewfordTown/scripts.pory"
	map_script_2 VAR_DEWFORD_TOWN_STATE, 2, DewfordTown_EventScript_RemoveWinstrate
# 38 "data/maps/DewfordTown/scripts.pory"
	.2byte 0
# 39 "data/maps/DewfordTown/scripts.pory"

# 40 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RemoveStormy::
# 41 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_UNUSED_0x034
# 42 "data/maps/DewfordTown/scripts.pory"
	end
# 43 "data/maps/DewfordTown/scripts.pory"

# 44 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SetWinstratesNotDefeated::
# 45 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 46 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 47 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 48 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 49 "data/maps/DewfordTown/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 50 "data/maps/DewfordTown/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 51 "data/maps/DewfordTown/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 52 "data/maps/DewfordTown/scripts.pory"
	end
# 53 "data/maps/DewfordTown/scripts.pory"

# 54 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SetWinstratesDefeated::
# 55 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 56 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 57 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm LOCALID_VICKY, 13, 17
# 58 "data/maps/DewfordTown/scripts.pory"
	end
# 59 "data/maps/DewfordTown/scripts.pory"

# 60 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RemoveEveryWinstrate::
# 61 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 62 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 63 "data/maps/DewfordTown/scripts.pory"
	end
# 64 "data/maps/DewfordTown/scripts.pory"

# 65 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_StormyInFront::
# 66 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm 19, 42, 42
# 67 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm 30, 15, 37
# 68 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm 32, 14, 37
# 69 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm 31, 15, 36
# 70 "data/maps/DewfordTown/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 71 "data/maps/DewfordTown/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 72 "data/maps/DewfordTown/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 73 "data/maps/DewfordTown/scripts.pory"
	call_if_eq VAR_UNUSED_0x40F8, 3, DewfordTown_EventScript_RemoveStormy
# 74 "data/maps/DewfordTown/scripts.pory"
	end
# 75 "data/maps/DewfordTown/scripts.pory"

# 76 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Victor::
# 77 "data/maps/DewfordTown/scripts.pory"
	lock
# 78 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 79 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 80 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BattleOurFamily, MSGBOX_YESNO
# 81 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_BattleWinstrates
# 82 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_IsThatSo, MSGBOX_DEFAULT
# 83 "data/maps/DewfordTown/scripts.pory"
	release
# 84 "data/maps/DewfordTown/scripts.pory"
	end
# 85 "data/maps/DewfordTown/scripts.pory"

# 86 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_BattleWinstrates::
# 87 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 88 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_VictorIntro, MSGBOX_DEFAULT
# 89 "data/maps/DewfordTown/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, DewfordTown_Text_VictorDefeat
# 90 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 91 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 92 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 93 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_VictorPostBattle, MSGBOX_DEFAULT
# 94 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 95 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_VICTOR, DewfordTown_Movement_WinstrateEnterHouse
# 96 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 97 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_VICTOR
# 98 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_WaitForNextWinstrate
# 99 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 100 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_VICTORIA
# 101 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_VICTORIA, DewfordTown_Movement_WinstrateExitHouse
# 102 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 103 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_VictoriaIntro, MSGBOX_DEFAULT
# 104 "data/maps/DewfordTown/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, DewfordTown_Text_VictoriaDefeat
# 105 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 106 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 107 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 108 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 109 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 110 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_VICTORIA, DewfordTown_Movement_WinstrateEnterHouse
# 111 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 112 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_VICTORIA
# 113 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_WaitForNextWinstrate
# 114 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 115 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_VIVI
# 116 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_VIVI, DewfordTown_Movement_WinstrateExitHouse
# 117 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 118 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ViviIntro, MSGBOX_DEFAULT
# 119 "data/maps/DewfordTown/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, DewfordTown_Text_ViviDefeat
# 120 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 121 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_VIVI, Common_Movement_WalkInPlaceFasterUp
# 122 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 123 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ViviPostBattle, MSGBOX_DEFAULT
# 124 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 125 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_VIVI, DewfordTown_Movement_WinstrateEnterHouse
# 126 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 127 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_VIVI
# 128 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_WaitForNextWinstrate
# 129 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 130 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_VICKY
# 131 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_VICKY, DewfordTown_Movement_WinstrateExitHouse
# 132 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 133 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_VickyIntro, MSGBOX_DEFAULT
# 134 "data/maps/DewfordTown/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, DewfordTown_Text_VickyDefeat
# 135 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 136 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 137 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 138 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm LOCALID_VICKY, 13, 17
# 139 "data/maps/DewfordTown/scripts.pory"
	giveitem ITEM_AIR_BALLOON
# 140 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 141 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_VickyPostBattle, MSGBOX_DEFAULT
# 142 "data/maps/DewfordTown/scripts.pory"
	setvar 	VAR_DEWFORD_TOWN_STATE 4
# 143 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 144 "data/maps/DewfordTown/scripts.pory"
	release
# 145 "data/maps/DewfordTown/scripts.pory"
	end
# 146 "data/maps/DewfordTown/scripts.pory"

# 147 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_WinstrateEnterHouse:
# 148 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_faster_up
# 149 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 150 "data/maps/DewfordTown/scripts.pory"
	step_end
# 151 "data/maps/DewfordTown/scripts.pory"

# 152 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_WinstrateExitHouse:
# 153 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 154 "data/maps/DewfordTown/scripts.pory"
	step_end
# 155 "data/maps/DewfordTown/scripts.pory"

# 156 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_WaitForNextWinstrate:
# 157 "data/maps/DewfordTown/scripts.pory"
	delay_16
# 158 "data/maps/DewfordTown/scripts.pory"
	delay_16
# 159 "data/maps/DewfordTown/scripts.pory"
	delay_16
# 160 "data/maps/DewfordTown/scripts.pory"
	step_end
# 161 "data/maps/DewfordTown/scripts.pory"

# 162 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_BattleOurFamily:
# 163 "data/maps/DewfordTown/scripts.pory"
	.string "Hey there, kid.\p"
# 164 "data/maps/DewfordTown/scripts.pory"
	.string "My family has been living in this cave\n"
# 165 "data/maps/DewfordTown/scripts.pory"
	.string "after our home got swept away by the\l"
# 166 "data/maps/DewfordTown/scripts.pory"
	.string "tides.\p"
# 167 "data/maps/DewfordTown/scripts.pory"
	.string "I won't let you in, but if you can\n"
# 168 "data/maps/DewfordTown/scripts.pory"
	.string "beat my whole family, we can give you\l"
# 169 "data/maps/DewfordTown/scripts.pory"
	.string "a prize.\p"
# 170 "data/maps/DewfordTown/scripts.pory"
	.string "How does that sound?$"
# 171 "data/maps/DewfordTown/scripts.pory"

# 172 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_IsThatSo:
# 173 "data/maps/DewfordTown/scripts.pory"
	.string "I understand.\n"
# 174 "data/maps/DewfordTown/scripts.pory"
	.string "Come back if you change your mind.$"
# 175 "data/maps/DewfordTown/scripts.pory"

# 176 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_VictorIntro:
# 177 "data/maps/DewfordTown/scripts.pory"
	.string "Alright! You just made my week!$"
# 178 "data/maps/DewfordTown/scripts.pory"

# 179 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_VictorDefeat:
# 180 "data/maps/DewfordTown/scripts.pory"
	.string "Hahaha!\n"
# 181 "data/maps/DewfordTown/scripts.pory"
	.string "Great showing, kid!$"
# 182 "data/maps/DewfordTown/scripts.pory"

# 183 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_VictorPostBattle:
# 184 "data/maps/DewfordTown/scripts.pory"
	.string "C'mon, Owen!\n"
# 185 "data/maps/DewfordTown/scripts.pory"
	.string "We have a visitor!$"
# 186 "data/maps/DewfordTown/scripts.pory"

# 187 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_VictoriaIntro:
# 188 "data/maps/DewfordTown/scripts.pory"
	.string "Wow, I haven't seen anyone new in\n"
# 189 "data/maps/DewfordTown/scripts.pory"
	.string "weeks!\p"
# 190 "data/maps/DewfordTown/scripts.pory"
	.string "Are you good?$"
# 191 "data/maps/DewfordTown/scripts.pory"

# 192 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_VictoriaDefeat:
# 193 "data/maps/DewfordTown/scripts.pory"
	.string "Aw, man.\n"
# 194 "data/maps/DewfordTown/scripts.pory"
	.string "Well, thanks for the rush!$"
# 195 "data/maps/DewfordTown/scripts.pory"

# 196 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_VictoriaPostBattle:
# 197 "data/maps/DewfordTown/scripts.pory"
	.string "I got beat!\n"
# 198 "data/maps/DewfordTown/scripts.pory"
	.string "Who's next?$"
# 199 "data/maps/DewfordTown/scripts.pory"

# 200 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ViviIntro:
# 201 "data/maps/DewfordTown/scripts.pory"
	.string "You beat my brother?\p"
# 202 "data/maps/DewfordTown/scripts.pory"
	.string "I learned everything I know\n"
# 203 "data/maps/DewfordTown/scripts.pory"
	.string "from him!$"
# 204 "data/maps/DewfordTown/scripts.pory"

# 205 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ViviDefeat:
# 206 "data/maps/DewfordTown/scripts.pory"
	.string "You are tough!\n"
# 207 "data/maps/DewfordTown/scripts.pory"
	.string "But can you beat my mom?$"
# 208 "data/maps/DewfordTown/scripts.pory"

# 209 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ViviPostBattle:
# 210 "data/maps/DewfordTown/scripts.pory"
	.string "Mom!$"
# 211 "data/maps/DewfordTown/scripts.pory"

# 212 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_VickyIntro:
# 213 "data/maps/DewfordTown/scripts.pory"
	.string "So you're the tough trainer I've\n"
# 214 "data/maps/DewfordTown/scripts.pory"
	.string "heard about!\p"
# 215 "data/maps/DewfordTown/scripts.pory"
	.string "Before I take you on, I want to\n"
# 216 "data/maps/DewfordTown/scripts.pory"
	.string "thank you for entertaining the\l"
# 217 "data/maps/DewfordTown/scripts.pory"
	.string "rest of my family.\p"
# 218 "data/maps/DewfordTown/scripts.pory"
	.string "We haven't had much joy since\n"
# 219 "data/maps/DewfordTown/scripts.pory"
	.string "losing everything.\p"
# 220 "data/maps/DewfordTown/scripts.pory"
	.string "Well, I guess it's my turn!\n"
# 221 "data/maps/DewfordTown/scripts.pory"
	.string "Give me your best!$"
# 222 "data/maps/DewfordTown/scripts.pory"

# 223 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_VickyDefeat:
# 224 "data/maps/DewfordTown/scripts.pory"
	.string "Teehee, you are strong!\n"
# 225 "data/maps/DewfordTown/scripts.pory"
	.string "Take this!$"
# 226 "data/maps/DewfordTown/scripts.pory"

# 227 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_VickyPostBattle:
# 228 "data/maps/DewfordTown/scripts.pory"
	.string "My daughter enjoyed playing\n"
# 229 "data/maps/DewfordTown/scripts.pory"
	.string "with that for a while.\p"
# 230 "data/maps/DewfordTown/scripts.pory"
	.string "Maybe another child would\n"
# 231 "data/maps/DewfordTown/scripts.pory"
	.string "like it?$"
# 232 "data/maps/DewfordTown/scripts.pory"

# 233 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney::
# 234 "data/maps/DewfordTown/scripts.pory"
	lock
# 235 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 236 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_ReturnToPetalburgPrompt
# 237 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_WhereAreWeBound
# 238 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 239 "data/maps/DewfordTown/scripts.pory"
	multichoicedefault 21, 6, MULTI_BRINEY_ON_DEWFORD, 2, FALSE
# 240 "data/maps/DewfordTown/scripts.pory"
	switch VAR_RESULT
# 241 "data/maps/DewfordTown/scripts.pory"
	case 0, DewfordTown_EventScript_ChoosePetalburg
# 242 "data/maps/DewfordTown/scripts.pory"
	case 1, DewfordTown_EventScript_ChooseSlateport
# 243 "data/maps/DewfordTown/scripts.pory"
	case 2, DewfordTown_EventScript_CancelSailSelect
# 244 "data/maps/DewfordTown/scripts.pory"
	case MULTI_B_PRESSED, DewfordTown_EventScript_CancelSailSelect
# 245 "data/maps/DewfordTown/scripts.pory"
	end
# 246 "data/maps/DewfordTown/scripts.pory"

# 247 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChoosePetalburg::
# 248 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
# 249 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 250 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 251 "data/maps/DewfordTown/scripts.pory"
	release
# 252 "data/maps/DewfordTown/scripts.pory"
	end
# 253 "data/maps/DewfordTown/scripts.pory"

# 254 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChooseSlateport::
# 255 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
# 256 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 257 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToSlateport
# 258 "data/maps/DewfordTown/scripts.pory"
	release
# 259 "data/maps/DewfordTown/scripts.pory"
	end
# 260 "data/maps/DewfordTown/scripts.pory"

# 261 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelSailSelect::
# 262 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
# 263 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 264 "data/maps/DewfordTown/scripts.pory"
	release
# 265 "data/maps/DewfordTown/scripts.pory"
	end
# 266 "data/maps/DewfordTown/scripts.pory"

# 267 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ReturnToPetalburgPrompt::
# 268 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_YESNO
# 269 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_SailBackToPetalburg
# 270 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GoDeliverIllBeWaiting, MSGBOX_DEFAULT
# 271 "data/maps/DewfordTown/scripts.pory"
	release
# 272 "data/maps/DewfordTown/scripts.pory"
	end
# 273 "data/maps/DewfordTown/scripts.pory"

# 274 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailBackToPetalburg::
# 275 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
# 276 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 277 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 278 "data/maps/DewfordTown/scripts.pory"
	end
# 279 "data/maps/DewfordTown/scripts.pory"

# 280 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Woman::
# 281 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
# 282 "data/maps/DewfordTown/scripts.pory"
	end
# 283 "data/maps/DewfordTown/scripts.pory"

# 284 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TownSign::
# 285 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
# 286 "data/maps/DewfordTown/scripts.pory"
	end
# 287 "data/maps/DewfordTown/scripts.pory"

# 288 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GymSign::
# 289 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
# 290 "data/maps/DewfordTown/scripts.pory"
	end
# 291 "data/maps/DewfordTown/scripts.pory"

# 292 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HallSign::
# 293 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
# 294 "data/maps/DewfordTown/scripts.pory"
	end
# 295 "data/maps/DewfordTown/scripts.pory"

# 296 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_OldRodFisherman::
# 297 "data/maps/DewfordTown/scripts.pory"
	lock
# 298 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 299 "data/maps/DewfordTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_HowsFishing
# 300 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
# 301 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_GiveOldRod
# 302 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_NotGettingItchToFish
# 303 "data/maps/DewfordTown/scripts.pory"
	end
# 304 "data/maps/DewfordTown/scripts.pory"

# 305 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveOldRod::
# 306 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
# 307 "data/maps/DewfordTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 308 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 309 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 310 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
# 311 "data/maps/DewfordTown/scripts.pory"
	release
# 312 "data/maps/DewfordTown/scripts.pory"
	end
# 313 "data/maps/DewfordTown/scripts.pory"

# 314 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_NotGettingItchToFish::
# 315 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
# 316 "data/maps/DewfordTown/scripts.pory"
	release
# 317 "data/maps/DewfordTown/scripts.pory"
	end
# 318 "data/maps/DewfordTown/scripts.pory"

# 319 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HowsFishing::
# 320 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_HowsYourFishing
# 321 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 322 "data/maps/DewfordTown/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 323 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 0, DewfordTown_EventScript_FishingExcellent
# 324 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 1, DewfordTown_EventScript_FishingNotSoGood
# 325 "data/maps/DewfordTown/scripts.pory"
	end
# 326 "data/maps/DewfordTown/scripts.pory"

# 327 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingExcellent::
# 328 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
# 329 "data/maps/DewfordTown/scripts.pory"
	release
# 330 "data/maps/DewfordTown/scripts.pory"
	end
# 331 "data/maps/DewfordTown/scripts.pory"

# 332 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingNotSoGood::
# 333 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
# 334 "data/maps/DewfordTown/scripts.pory"
	release
# 335 "data/maps/DewfordTown/scripts.pory"
	end
# 336 "data/maps/DewfordTown/scripts.pory"

# 337 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToPetalburg::
# 338 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 339 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 340 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 0
# 341 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
# 342 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 343 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_BRINEY_DEWFORD
# 344 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 345 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 346 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 347 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 348 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToPetalburg
# 349 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToPetalburg
# 350 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 351 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 352 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 353 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
# 354 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 355 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 356 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 357 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 358 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 359 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 360 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
# 361 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
# 362 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 363 "data/maps/DewfordTown/scripts.pory"
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
# 364 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 365 "data/maps/DewfordTown/scripts.pory"
	waitstate
# 366 "data/maps/DewfordTown/scripts.pory"
	release
# 367 "data/maps/DewfordTown/scripts.pory"
	end
# 368 "data/maps/DewfordTown/scripts.pory"

# 369 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport::
# 370 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 371 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 372 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 1
# 373 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
# 374 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 375 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_BRINEY_DEWFORD
# 376 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 377 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 378 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 379 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 380 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToSlateport
# 381 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToSlateport
# 382 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 383 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 384 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 385 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
# 386 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 387 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_R109, 21, 26
# 388 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_BRINEY_R109
# 389 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
# 390 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_R109, DewfordTown_Movement_BrineyExitBoat
# 391 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 392 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 393 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_BOAT_R109
# 394 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 395 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 396 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
# 397 "data/maps/DewfordTown/scripts.pory"
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateportDeliverGoods
# 398 "data/maps/DewfordTown/scripts.pory"
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateport
# 399 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 400 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 401 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 402 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109
# 403 "data/maps/DewfordTown/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_R109
# 404 "data/maps/DewfordTown/scripts.pory"
	release
# 405 "data/maps/DewfordTown/scripts.pory"
	end
# 406 "data/maps/DewfordTown/scripts.pory"

# 407 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateportDeliverGoods::
# 408 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
# 409 "data/maps/DewfordTown/scripts.pory"
	return
# 410 "data/maps/DewfordTown/scripts.pory"

# 411 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateport::
# 412 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
# 413 "data/maps/DewfordTown/scripts.pory"
	return
# 414 "data/maps/DewfordTown/scripts.pory"

# 415 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToPetalburg:
# 416 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 417 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 418 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 419 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 420 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 421 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 422 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 423 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 424 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 425 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 426 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 427 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 428 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 429 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 430 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 431 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 432 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 433 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 434 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 435 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 436 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 437 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 438 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 439 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 440 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 441 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 442 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 443 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 444 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 445 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 446 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 447 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 448 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 449 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 450 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 451 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 452 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 453 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 454 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 455 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 456 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 457 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 458 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 459 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 460 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 461 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 462 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 463 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 464 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 465 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 466 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 467 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 468 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 469 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 470 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 471 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 472 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 473 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 474 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 475 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 476 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 477 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 478 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 479 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 480 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 481 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 482 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 483 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 484 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 485 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 486 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 487 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 488 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 489 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 490 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 491 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 492 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 493 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 494 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 495 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 496 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 497 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 498 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 499 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 500 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 501 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 502 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 503 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 504 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 505 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 506 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 507 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 508 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 509 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 510 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 511 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 512 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 513 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 514 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 515 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 516 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 517 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 518 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 519 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 520 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 521 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 522 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 523 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 524 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 525 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 526 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 527 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 528 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 529 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 530 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 531 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 532 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 533 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 534 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 535 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 536 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 537 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 538 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 539 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 540 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 541 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 542 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 543 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 544 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 545 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 546 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 547 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 548 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 549 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 550 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 551 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 552 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 553 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 554 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 555 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 556 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 557 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 558 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 559 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 560 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 561 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 562 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 563 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 564 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 565 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 566 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 567 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 568 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 569 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 570 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 571 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 572 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 573 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 574 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 575 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 576 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 577 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 578 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 579 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 580 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 581 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 582 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 583 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 584 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 585 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 586 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 587 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 588 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 589 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 590 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 591 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 592 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 593 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 594 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 595 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 596 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 597 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 598 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 599 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 600 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 601 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 602 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 603 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 604 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 605 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 606 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 607 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 608 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 609 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 610 "data/maps/DewfordTown/scripts.pory"
	step_end
# 611 "data/maps/DewfordTown/scripts.pory"

# 612 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToSlateport:
# 613 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 614 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 615 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 616 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 617 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 618 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 619 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 620 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 621 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 622 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 623 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 624 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 625 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 626 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 627 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 628 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 629 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 630 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 631 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 632 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 633 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 634 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 635 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 636 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 637 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 638 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 639 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 640 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 641 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 642 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 643 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 644 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 645 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 646 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 647 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 648 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 649 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 650 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 651 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 652 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 653 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 654 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 655 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 656 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 657 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 658 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 659 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 660 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 661 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 662 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 663 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 664 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 665 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 666 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 667 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 668 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 669 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 670 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 671 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 672 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 673 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 674 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 675 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 676 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 677 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 678 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 679 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 680 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 681 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 682 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 683 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 684 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 685 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 686 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 687 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 688 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 689 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 690 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 691 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 692 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 693 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 694 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 695 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 696 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 697 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 698 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 699 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 700 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 701 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 702 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 703 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 704 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 705 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 706 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 707 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 708 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 709 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 710 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 711 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 712 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 713 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 714 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 715 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 716 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 717 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 718 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 719 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 720 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 721 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 722 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 723 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 724 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 725 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 726 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 727 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 728 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 729 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 730 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 731 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 732 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 733 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 734 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 735 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 736 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 737 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 738 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 739 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 740 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 741 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 742 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 743 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 744 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 745 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 746 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 747 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 748 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 749 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 750 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 751 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 752 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 753 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 754 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 755 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 756 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 757 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 758 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 759 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 760 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 761 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 762 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 763 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 764 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 765 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 766 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 767 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 768 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 769 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 770 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 771 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 772 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 773 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 774 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 775 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 776 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 777 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 778 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 779 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 780 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 781 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 782 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 783 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 784 "data/maps/DewfordTown/scripts.pory"
	step_end
# 785 "data/maps/DewfordTown/scripts.pory"

# 786 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_PlayerBoardBoat:
# 787 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 788 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 789 "data/maps/DewfordTown/scripts.pory"
	step_end
# 790 "data/maps/DewfordTown/scripts.pory"

# 791 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatPetalburg:
# 792 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 793 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 794 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 795 "data/maps/DewfordTown/scripts.pory"
	step_end
# 796 "data/maps/DewfordTown/scripts.pory"

# 797 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatSlateport:
# 798 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 799 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 800 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 801 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_faster_down
# 802 "data/maps/DewfordTown/scripts.pory"
	step_end
# 803 "data/maps/DewfordTown/scripts.pory"

# 804 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyBoardBoat:
# 805 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 806 "data/maps/DewfordTown/scripts.pory"
	step_end
# 807 "data/maps/DewfordTown/scripts.pory"

# 808 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyExitBoat:
# 809 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 810 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 811 "data/maps/DewfordTown/scripts.pory"
	step_end
# 812 "data/maps/DewfordTown/scripts.pory"

# 813 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TrendyPhraseBoy::
# 814 "data/maps/DewfordTown/scripts.pory"
	lock
# 815 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 816 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 817 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 818 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_ConfirmTrendyPhrase
# 819 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_RejectTrendyPhrase
# 820 "data/maps/DewfordTown/scripts.pory"
	end
# 821 "data/maps/DewfordTown/scripts.pory"

# 822 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ConfirmTrendyPhrase::
# 823 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 824 "data/maps/DewfordTown/scripts.pory"
	release
# 825 "data/maps/DewfordTown/scripts.pory"
	end
# 826 "data/maps/DewfordTown/scripts.pory"

# 827 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RejectTrendyPhrase::
# 828 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 829 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 830 "data/maps/DewfordTown/scripts.pory"
	call Common_ShowEasyChatScreen
# 831 "data/maps/DewfordTown/scripts.pory"
	lock
# 832 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 833 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_GiveNewTrendyPhrase
# 834 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_EventScript_CancelNewTrendyPhrase
# 835 "data/maps/DewfordTown/scripts.pory"
	end
# 836 "data/maps/DewfordTown/scripts.pory"

# 837 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveNewTrendyPhrase::
# 838 "data/maps/DewfordTown/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 839 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, DewfordTown_EventScript_PhraseNotTrendyEnough
# 840 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
# 841 "data/maps/DewfordTown/scripts.pory"
	release
# 842 "data/maps/DewfordTown/scripts.pory"
	end
# 843 "data/maps/DewfordTown/scripts.pory"

# 844 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelNewTrendyPhrase::
# 845 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
# 846 "data/maps/DewfordTown/scripts.pory"
	release
# 847 "data/maps/DewfordTown/scripts.pory"
	end
# 848 "data/maps/DewfordTown/scripts.pory"

# 849 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_PhraseNotTrendyEnough::
# 850 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
# 851 "data/maps/DewfordTown/scripts.pory"
	release
# 852 "data/maps/DewfordTown/scripts.pory"
	end
# 853 "data/maps/DewfordTown/scripts.pory"

# 854 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TinyIslandCommunity:
# 855 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD is a tiny island community.\n"
# 856 "data/maps/DewfordTown/scripts.pory"
	.string "If something gets trendy here,\l"
# 857 "data/maps/DewfordTown/scripts.pory"
	.string "everyone picks up on it right away.$"
# 858 "data/maps/DewfordTown/scripts.pory"

# 859 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TownSign:
# 860 "data/maps/DewfordTown/scripts.pory"
	.string "Seaspray Town\n"
# 861 "data/maps/DewfordTown/scripts.pory"
	.string "“The sunniest resort in Ecodia.”$"
# 862 "data/maps/DewfordTown/scripts.pory"

# 863 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GymSign:
# 864 "data/maps/DewfordTown/scripts.pory"
	.string "Seaspray Town Pokémon Gym\n"
# 865 "data/maps/DewfordTown/scripts.pory"
	.string "Leader: Stormy\l"
# 866 "data/maps/DewfordTown/scripts.pory"
	.string "“A master of the skies!”$"
# 867 "data/maps/DewfordTown/scripts.pory"

# 868 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HallSign:
# 869 "data/maps/DewfordTown/scripts.pory"
	.string "DEWFORD HALL\n"
# 870 "data/maps/DewfordTown/scripts.pory"
	.string "“Everyone's information exchange!”$"
# 871 "data/maps/DewfordTown/scripts.pory"

# 872 "data/maps/DewfordTown/scripts.pory"
Route104_Text_LandedInDewfordDeliverLetter:
# 873 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 874 "data/maps/DewfordTown/scripts.pory"
	.string "We've hit land in DEWFORD.\p"
# 875 "data/maps/DewfordTown/scripts.pory"
	.string "I suppose you're off to deliver that\n"
# 876 "data/maps/DewfordTown/scripts.pory"
	.string "LETTER to, who was it now, STEVEN!$"
# 877 "data/maps/DewfordTown/scripts.pory"

# 878 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SetSailBackToPetalburg:
# 879 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Have you delivered your\n"
# 880 "data/maps/DewfordTown/scripts.pory"
	.string "LETTER?\p"
# 881 "data/maps/DewfordTown/scripts.pory"
	.string "Or were you meaning to sail back to\n"
# 882 "data/maps/DewfordTown/scripts.pory"
	.string "PETALBURG?$"
# 883 "data/maps/DewfordTown/scripts.pory"

# 884 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail2:
# 885 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: PETALBURG it is, then!\p"
# 886 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 887 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 888 "data/maps/DewfordTown/scripts.pory"

# 889 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GoDeliverIllBeWaiting:
# 890 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Then you go on and deliver\n"
# 891 "data/maps/DewfordTown/scripts.pory"
	.string "the LETTER. I'll be waiting.$"
# 892 "data/maps/DewfordTown/scripts.pory"

# 893 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_BrineyLandedInDewford:
# 894 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 895 "data/maps/DewfordTown/scripts.pory"
	.string "We've hit land in DEWFORD!\p"
# 896 "data/maps/DewfordTown/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 897 "data/maps/DewfordTown/scripts.pory"
	.string "you want to set sail again!$"
# 898 "data/maps/DewfordTown/scripts.pory"

# 899 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_WhereAreWeBound:
# 900 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 901 "data/maps/DewfordTown/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 902 "data/maps/DewfordTown/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 903 "data/maps/DewfordTown/scripts.pory"

# 904 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail:
# 905 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: PETALBURG, is it?\p"
# 906 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 907 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 908 "data/maps/DewfordTown/scripts.pory"

# 909 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SlateportWereSettingSail:
# 910 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: SLATEPORT, is it?\p"
# 911 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 912 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 913 "data/maps/DewfordTown/scripts.pory"

# 914 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_JustTellMeWhenYouNeedToSetSail:
# 915 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: You just tell me whenever\n"
# 916 "data/maps/DewfordTown/scripts.pory"
	.string "you need to set sail again!$"
# 917 "data/maps/DewfordTown/scripts.pory"

# 918 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GettingItchToFish:
# 919 "data/maps/DewfordTown/scripts.pory"
	.string "This is a renowned fishing spot.\n"
# 920 "data/maps/DewfordTown/scripts.pory"
	.string "Are you getting the itch to fish?$"
# 921 "data/maps/DewfordTown/scripts.pory"

# 922 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GiveYouOneOfMyRods:
# 923 "data/maps/DewfordTown/scripts.pory"
	.string "I hear you, and I like what\n"
# 924 "data/maps/DewfordTown/scripts.pory"
	.string "you're saying!\p"
# 925 "data/maps/DewfordTown/scripts.pory"
	.string "I'll give you one of my fishing RODS.$"
# 926 "data/maps/DewfordTown/scripts.pory"

# 927 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThrowInFishingAdvice:
# 928 "data/maps/DewfordTown/scripts.pory"
	.string "And, as an added bonus, I'll even throw\n"
# 929 "data/maps/DewfordTown/scripts.pory"
	.string "in a little fishing advice!\p"
# 930 "data/maps/DewfordTown/scripts.pory"
	.string "First, you want to face the water,\n"
# 931 "data/maps/DewfordTown/scripts.pory"
	.string "then use the ROD.\p"
# 932 "data/maps/DewfordTown/scripts.pory"
	.string "Focus your mind…\n"
# 933 "data/maps/DewfordTown/scripts.pory"
	.string "If you get a bite, pull on the ROD.\p"
# 934 "data/maps/DewfordTown/scripts.pory"
	.string "Sometimes you can snag something\n"
# 935 "data/maps/DewfordTown/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 936 "data/maps/DewfordTown/scripts.pory"
	.string "you need to time the pulls on your ROD\l"
# 937 "data/maps/DewfordTown/scripts.pory"
	.string "to haul them in.$"
# 938 "data/maps/DewfordTown/scripts.pory"

# 939 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThatsTooBadThen:
# 940 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, is that so?\n"
# 941 "data/maps/DewfordTown/scripts.pory"
	.string "That's too bad, then.$"
# 942 "data/maps/DewfordTown/scripts.pory"

# 943 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HowsYourFishing:
# 944 "data/maps/DewfordTown/scripts.pory"
	.string "Yo!\n"
# 945 "data/maps/DewfordTown/scripts.pory"
	.string "How's your fishing?$"
# 946 "data/maps/DewfordTown/scripts.pory"

# 947 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GreatHaulInSomeBigOnes:
# 948 "data/maps/DewfordTown/scripts.pory"
	.string "Is that right! That's great!\n"
# 949 "data/maps/DewfordTown/scripts.pory"
	.string "Haul in some big ones!$"
# 950 "data/maps/DewfordTown/scripts.pory"

# 951 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_FishingAdvice:
# 952 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, hey, don't get down on yourself!\n"
# 953 "data/maps/DewfordTown/scripts.pory"
	.string "I'll give you a little fishing advice.\p"
# 954 "data/maps/DewfordTown/scripts.pory"
	.string "First, you want to face the water,\n"
# 955 "data/maps/DewfordTown/scripts.pory"
	.string "then use the ROD.\p"
# 956 "data/maps/DewfordTown/scripts.pory"
	.string "Focus your mind…\n"
# 957 "data/maps/DewfordTown/scripts.pory"
	.string "If you get a bite, pull the ROD.\p"
# 958 "data/maps/DewfordTown/scripts.pory"
	.string "Sometimes you can snag something\n"
# 959 "data/maps/DewfordTown/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 960 "data/maps/DewfordTown/scripts.pory"
	.string "you need to time the pulls on your ROD\l"
# 961 "data/maps/DewfordTown/scripts.pory"
	.string "to haul them in.$"
# 962 "data/maps/DewfordTown/scripts.pory"

# 963 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XIsTheBiggestHappeningThingRight:
# 964 "data/maps/DewfordTown/scripts.pory"
	.string "I like what's hip, happening, and trendy.\n"
# 965 "data/maps/DewfordTown/scripts.pory"
	.string "I'm always checking it out.\p"
# 966 "data/maps/DewfordTown/scripts.pory"
	.string "Listen, have you heard about this new\n"
# 967 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”?\p"
# 968 "data/maps/DewfordTown/scripts.pory"
	.string "That's right!\n"
# 969 "data/maps/DewfordTown/scripts.pory"
	.string "Of course you know!\p"
# 970 "data/maps/DewfordTown/scripts.pory"
	.string "I mean, sheesh,\n"
# 971 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\l"
# 972 "data/maps/DewfordTown/scripts.pory"
	.string "It's the hottest thing in cool!\p"
# 973 "data/maps/DewfordTown/scripts.pory"
	.string "Wherever you're from,\n"
# 974 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 975 "data/maps/DewfordTown/scripts.pory"
	.string "is the biggest happening thing, right?$"
# 976 "data/maps/DewfordTown/scripts.pory"

# 977 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TellMeWhatsNewAndIn:
# 978 "data/maps/DewfordTown/scripts.pory"
	.string "Hunh?\n"
# 979 "data/maps/DewfordTown/scripts.pory"
	.string "It's not the hip and happening thing?\p"
# 980 "data/maps/DewfordTown/scripts.pory"
	.string "Well, hey, you have to tell me,\n"
# 981 "data/maps/DewfordTown/scripts.pory"
	.string "what's new and what's “in”?$"
# 982 "data/maps/DewfordTown/scripts.pory"

# 983 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_OfCourseIKnowAboutThat:
# 984 "data/maps/DewfordTown/scripts.pory"
	.string "Hunh?\n"
# 985 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2}”?\p"
# 986 "data/maps/DewfordTown/scripts.pory"
	.string "… …\p"
# 987 "data/maps/DewfordTown/scripts.pory"
	.string "…Uh… Yeah! That's right!\n"
# 988 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, I knew that! Knew it all along!\p"
# 989 "data/maps/DewfordTown/scripts.pory"
	.string "Of course I know about that!\n"
# 990 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2},” right?\p"
# 991 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, that's it, it's there!\n"
# 992 "data/maps/DewfordTown/scripts.pory"
	.string "Isn't “{STR_VAR_2}”\l"
# 993 "data/maps/DewfordTown/scripts.pory"
	.string "the coolest, or what?\p"
# 994 "data/maps/DewfordTown/scripts.pory"
	.string "It's the hippest thing in hip.\n"
# 995 "data/maps/DewfordTown/scripts.pory"
	.string "You think I'd not know about it?\p"
# 996 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\n"
# 997 "data/maps/DewfordTown/scripts.pory"
	.string "It's, like, so five minutes ago.\p"
# 998 "data/maps/DewfordTown/scripts.pory"
	.string "Now, “{STR_VAR_2}” is\n"
# 999 "data/maps/DewfordTown/scripts.pory"
	.string "what's vital and in tune with the times!$"
# 1000 "data/maps/DewfordTown/scripts.pory"

# 1001 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XHuhIThinkYIsCool:
# 1002 "data/maps/DewfordTown/scripts.pory"
	.string "Hmm…\n"
# 1003 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2},” huh?\p"
# 1004 "data/maps/DewfordTown/scripts.pory"
	.string "But personally, I think\n"
# 1005 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 1006 "data/maps/DewfordTown/scripts.pory"
	.string "is what's real in cool.$"
# 1007 "data/maps/DewfordTown/scripts.pory"

# 1008 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HearOfAnyTrendsComeShareWithMe:
# 1009 "data/maps/DewfordTown/scripts.pory"
	.string "Well, if you hear of any happening new\n"
# 1010 "data/maps/DewfordTown/scripts.pory"
	.string "trends, come share them with me, okay?$"
# 1011 "data/maps/DewfordTown/scripts.pory"

# 1012 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_YeahDefinitionOfInRightNow:
# 1013 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, absolutely right!\p"
# 1014 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}” is the\n"
# 1015 "data/maps/DewfordTown/scripts.pory"
	.string "definition of “in” right now.$"

DewfordTown_OnLoad::
	return


DewfordTown_EventScript_OceanWoman::
# 1043 "data/maps/DewfordTown/scripts.pory"
	lock
# 1044 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1045 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1046 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_OceanWoman_Text_0
# 1047 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1048 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1049 "data/maps/DewfordTown/scripts.pory"
	applymovement 1, WomanLookUp
# 1050 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1051 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_LastWinstrate::
# 1056 "data/maps/DewfordTown/scripts.pory"
	lock
# 1057 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1058 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_LastWinstrate_Text_0
# 1059 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_SecondFisher::
# 1064 "data/maps/DewfordTown/scripts.pory"
	lock
# 1065 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1066 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_SecondFisher_Text_0
# 1067 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1068 "data/maps/DewfordTown/scripts.pory"
	applymovement 40, Common_Movement_FaceOriginalDirection
# 1069 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1070 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_PushyMan::
# 1075 "data/maps/DewfordTown/scripts.pory"
	lockall
# 1076 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1077 "data/maps/DewfordTown/scripts.pory"
	special SpawnCameraObject
# 1078 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraUpTwo
# 1079 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1080 "data/maps/DewfordTown/scripts.pory"
	addobject 17
# 1081 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1082 "data/maps/DewfordTown/scripts.pory"
	applymovement 16, ManWalkInPlaceUp
# 1083 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1084 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_PushyMan_Text_0
# 1085 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1086 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1087 "data/maps/DewfordTown/scripts.pory"
	delay 30
# 1088 "data/maps/DewfordTown/scripts.pory"
	playse SE_PIN
# 1089 "data/maps/DewfordTown/scripts.pory"
	opendoor 42, 41
# 1090 "data/maps/DewfordTown/scripts.pory"
	waitdooranim
# 1091 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_PushyMan_Text_1
# 1092 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1093 "data/maps/DewfordTown/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 1094 "data/maps/DewfordTown/scripts.pory"
	applymovement 16, WalkLeft
# 1095 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1096 "data/maps/DewfordTown/scripts.pory"
	applymovement 16, FaceRight
# 1097 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1098 "data/maps/DewfordTown/scripts.pory"
	setobjectxy 17, 42, 41
# 1099 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1100 "data/maps/DewfordTown/scripts.pory"
	applymovement 17, WalkDown
# 1101 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1102 "data/maps/DewfordTown/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 1103 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1104 "data/maps/DewfordTown/scripts.pory"
	applymovement 40, Common_Movement_FaceLeft
# 1105 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1106 "data/maps/DewfordTown/scripts.pory"
	applymovement 40, Common_Movement_ExclamationMark
# 1107 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1108 "data/maps/DewfordTown/scripts.pory"
	closedoor 42, 41
# 1109 "data/maps/DewfordTown/scripts.pory"
	waitdooranim
# 1110 "data/maps/DewfordTown/scripts.pory"
	delay 30
# 1111 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_PushyMan_Text_2
# 1112 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1113 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1114 "data/maps/DewfordTown/scripts.pory"
	applymovement 22, Common_Movement_ExclamationMark
# 1115 "data/maps/DewfordTown/scripts.pory"
	applymovement 24, Common_Movement_ExclamationMark
# 1116 "data/maps/DewfordTown/scripts.pory"
	applymovement 20, Common_Movement_ExclamationMark
# 1117 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1118 "data/maps/DewfordTown/scripts.pory"
	applymovement 22, Common_Movement_FaceLeft
# 1119 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1120 "data/maps/DewfordTown/scripts.pory"
	applymovement 20, Common_Movement_FaceDown
# 1121 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1122 "data/maps/DewfordTown/scripts.pory"
	applymovement 18, Common_Movement_FaceLeft
# 1123 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1124 "data/maps/DewfordTown/scripts.pory"
	applymovement 24, Common_Movement_FaceRight
# 1125 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1126 "data/maps/DewfordTown/scripts.pory"
	delay 120
# 1127 "data/maps/DewfordTown/scripts.pory"
	applymovement 22, Common_Movement_FaceOriginalDirection
# 1128 "data/maps/DewfordTown/scripts.pory"
	applymovement 20, Common_Movement_FaceOriginalDirection
# 1129 "data/maps/DewfordTown/scripts.pory"
	applymovement 18, Common_Movement_FaceOriginalDirection
# 1130 "data/maps/DewfordTown/scripts.pory"
	applymovement 24, Common_Movement_FaceOriginalDirection
# 1131 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1132 "data/maps/DewfordTown/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceFasterDown
# 1133 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1134 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_PushyMan_Text_3
# 1135 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1136 "data/maps/DewfordTown/scripts.pory"
	delay 15
# 1137 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraDownTwo
# 1138 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1139 "data/maps/DewfordTown/scripts.pory"
	special RemoveCameraObject
# 1140 "data/maps/DewfordTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1141 "data/maps/DewfordTown/scripts.pory"
	playse SE_EXIT
# 1142 "data/maps/DewfordTown/scripts.pory"
	delay 120
# 1143 "data/maps/DewfordTown/scripts.pory"
	removeobject 16
# 1144 "data/maps/DewfordTown/scripts.pory"
	removeobject 18
# 1145 "data/maps/DewfordTown/scripts.pory"
	removeobject 19
# 1146 "data/maps/DewfordTown/scripts.pory"
	removeobject 20
# 1147 "data/maps/DewfordTown/scripts.pory"
	removeobject 22
# 1148 "data/maps/DewfordTown/scripts.pory"
	removeobject 24
# 1149 "data/maps/DewfordTown/scripts.pory"
	removeobject 25
# 1150 "data/maps/DewfordTown/scripts.pory"
	applymovement 40, Common_Movement_FaceOriginalDirection
# 1151 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1152 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_UNUSED_0x02E
# 1153 "data/maps/DewfordTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1154 "data/maps/DewfordTown/scripts.pory"
	fadedefaultbgm
# 1155 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1156 "data/maps/DewfordTown/scripts.pory"
	addobject 30
# 1157 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1158 "data/maps/DewfordTown/scripts.pory"
	addobject 31
# 1159 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1160 "data/maps/DewfordTown/scripts.pory"
	addobject 32
# 1161 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1162 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm 17, 42, 42
# 1163 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1164 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm 30, 15, 37
# 1165 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1166 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm 32, 14, 37
# 1167 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1168 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm 31, 15, 36
# 1169 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1170 "data/maps/DewfordTown/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 1171 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1172 "data/maps/DewfordTown/scripts.pory"
	setobjectmovementtype 32, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 1173 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1174 "data/maps/DewfordTown/scripts.pory"
	setobjectmovementtype 31, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
# 1175 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1176 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_DEWFORD_TOWN_STATE, 1
# 1177 "data/maps/DewfordTown/scripts.pory"
	releaseall
	end


DewfordTown_EventScript_Ursaring::
# 1182 "data/maps/DewfordTown/scripts.pory"
	lock
# 1183 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1184 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_GEODUDE, CRY_MODE_NORMAL
# 1185 "data/maps/DewfordTown/scripts.pory"
	waitmoncry
# 1186 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Ursaring_Text_0
# 1187 "data/maps/DewfordTown/scripts.pory"
	setwildbattle SPECIES_GEODUDE, 18, ITEM_NONE, SPECIES_LUXIO, 18, ITEM_NONE
# 1188 "data/maps/DewfordTown/scripts.pory"
	dowildbattle
# 1189 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1190 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1191 "data/maps/DewfordTown/scripts.pory"
	delay 15
# 1192 "data/maps/DewfordTown/scripts.pory"
	addvar VAR_UNUSED_0x40F8, 1
# 1193 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm 17, 42, 42
# 1194 "data/maps/DewfordTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1195 "data/maps/DewfordTown/scripts.pory"
	removeobject 31
# 1196 "data/maps/DewfordTown/scripts.pory"
	removeobject 32
# 1197 "data/maps/DewfordTown/scripts.pory"
	playse SE_EXIT
# 1198 "data/maps/DewfordTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1199 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1200 "data/maps/DewfordTown/scripts.pory"
	fadedefaultbgm
# 1201 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1202 "data/maps/DewfordTown/scripts.pory"
	delay 15
# 1203 "data/maps/DewfordTown/scripts.pory"
	applymovement 30, UpOneLeftOne
# 1204 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1205 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 1206 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1207 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_NORMAL
# 1208 "data/maps/DewfordTown/scripts.pory"
	waitmoncry
# 1209 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Ursaring_Text_1
# 1210 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1211 "data/maps/DewfordTown/scripts.pory"
	applymovement 30, RightEight
# 1212 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1213 "data/maps/DewfordTown/scripts.pory"
	removeobject 30
# 1214 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_UNUSED_0x02F
# 1215 "data/maps/DewfordTown/scripts.pory"
	compare VAR_UNUSED_0x40F8, 3
	goto_if_eq DewfordTown_EventScript_Ursaring_2
DewfordTown_EventScript_Ursaring_1:
# 1218 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1219 "data/maps/DewfordTown/scripts.pory"
	releaseall
	end

DewfordTown_EventScript_Ursaring_2:
# 1216 "data/maps/DewfordTown/scripts.pory"
	removeobject 17
	goto DewfordTown_EventScript_Ursaring_1


DewfordTown_EventScript_Manectric::
# 1224 "data/maps/DewfordTown/scripts.pory"
	lock
# 1225 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1226 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1227 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_LUXIO, CRY_MODE_NORMAL
# 1228 "data/maps/DewfordTown/scripts.pory"
	waitmoncry
# 1229 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Ursaring_Text_0
# 1230 "data/maps/DewfordTown/scripts.pory"
	setwildbattle SPECIES_GEODUDE, 18, ITEM_NONE, SPECIES_LUXIO, 18, ITEM_NONE
# 1231 "data/maps/DewfordTown/scripts.pory"
	dowildbattle
# 1232 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1233 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1234 "data/maps/DewfordTown/scripts.pory"
	delay 15
# 1235 "data/maps/DewfordTown/scripts.pory"
	addvar VAR_UNUSED_0x40F8, 1
# 1236 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm 17, 42, 42
# 1237 "data/maps/DewfordTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1238 "data/maps/DewfordTown/scripts.pory"
	removeobject 31
# 1239 "data/maps/DewfordTown/scripts.pory"
	removeobject 32
# 1240 "data/maps/DewfordTown/scripts.pory"
	playse SE_EXIT
# 1241 "data/maps/DewfordTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1242 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 1243 "data/maps/DewfordTown/scripts.pory"
	fadedefaultbgm
# 1244 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1245 "data/maps/DewfordTown/scripts.pory"
	delay 15
# 1246 "data/maps/DewfordTown/scripts.pory"
	applymovement 30, UpOneLeftOne
# 1247 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1248 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
# 1249 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1250 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_GYARADOS, CRY_MODE_NORMAL
# 1251 "data/maps/DewfordTown/scripts.pory"
	waitmoncry
# 1252 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Ursaring_Text_1
# 1253 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1254 "data/maps/DewfordTown/scripts.pory"
	applymovement 30, RightEight
# 1255 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1256 "data/maps/DewfordTown/scripts.pory"
	removeobject 30
# 1257 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_UNUSED_0x02F
# 1258 "data/maps/DewfordTown/scripts.pory"
	compare VAR_UNUSED_0x40F8, 3
	goto_if_eq DewfordTown_EventScript_Manectric_2
DewfordTown_EventScript_Manectric_1:
# 1261 "data/maps/DewfordTown/scripts.pory"
	releaseall
	end

DewfordTown_EventScript_Manectric_2:
# 1259 "data/maps/DewfordTown/scripts.pory"
	removeobject 17
	goto DewfordTown_EventScript_Manectric_1


DewfordTown_EventScript_Charmander::
# 1266 "data/maps/DewfordTown/scripts.pory"
	lock
# 1267 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, DewfordTown_EventScript_Charmander_2
# 1315 "data/maps/DewfordTown/scripts.pory"
	msgbox NoMore
DewfordTown_EventScript_Charmander_1:
# 1317 "data/maps/DewfordTown/scripts.pory"
	release
	end

DewfordTown_EventScript_Charmander_2:
# 1268 "data/maps/DewfordTown/scripts.pory"
	showmonpic SPECIES_MONFERNO, 10, 3
# 1269 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Charmander_Text_0, MSGBOX_YESNO
# 1271 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_EventScript_Charmander_5
# 1310 "data/maps/DewfordTown/scripts.pory"
	hidemonpic
# 1311 "data/maps/DewfordTown/scripts.pory"
	msgbox Dewf_NotChosen
	goto DewfordTown_EventScript_Charmander_1

DewfordTown_EventScript_Charmander_5:
# 1272 "data/maps/DewfordTown/scripts.pory"
	givemon SPECIES_MONFERNO, 18
# 1273 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq DewfordTown_EventScript_Charmander_8
# 1294 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq DewfordTown_EventScript_Charmander_9
# 1305 "data/maps/DewfordTown/scripts.pory"
	hidemonpic
# 1306 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Charmander_Text_3
	goto DewfordTown_EventScript_Charmander_1

DewfordTown_EventScript_Charmander_8:
# 1274 "data/maps/DewfordTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1275 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Charmander_Text_1
# 1276 "data/maps/DewfordTown/scripts.pory"
	callnative UpdateFollowingPokemon
# 1277 "data/maps/DewfordTown/scripts.pory"
	removeobject 8
# 1278 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 1279 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1280 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_BADGE01_GET
# 1281 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 0
# 1282 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_UNUSED_0x02D
# 1283 "data/maps/DewfordTown/scripts.pory"
	call NicknamePartyMonDewf
# 1284 "data/maps/DewfordTown/scripts.pory"
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
# 1285 "data/maps/DewfordTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1286 "data/maps/DewfordTown/scripts.pory"
	delay 60
# 1287 "data/maps/DewfordTown/scripts.pory"
	removeobject 6
# 1288 "data/maps/DewfordTown/scripts.pory"
	removeobject 7
# 1289 "data/maps/DewfordTown/scripts.pory"
	playse SE_M_SURF
# 1290 "data/maps/DewfordTown/scripts.pory"
	fadedefaultbgm
# 1291 "data/maps/DewfordTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1292 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Charmander_Text_2
	goto DewfordTown_EventScript_Charmander_1

DewfordTown_EventScript_Charmander_9:
# 1295 "data/maps/DewfordTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1296 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Charmander_Text_1
# 1297 "data/maps/DewfordTown/scripts.pory"
	removeobject 8
# 1298 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 1299 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1300 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_BADGE01_GET
# 1301 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 0
# 1302 "data/maps/DewfordTown/scripts.pory"
	call NicknameBoxMonDewf
	goto DewfordTown_EventScript_Charmander_1


DewfordTown_EventScript_Mudkip::
# 1322 "data/maps/DewfordTown/scripts.pory"
	lock
# 1323 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, DewfordTown_EventScript_Mudkip_2
# 1371 "data/maps/DewfordTown/scripts.pory"
	msgbox NoMore
DewfordTown_EventScript_Mudkip_1:
# 1373 "data/maps/DewfordTown/scripts.pory"
	release
	end

DewfordTown_EventScript_Mudkip_2:
# 1324 "data/maps/DewfordTown/scripts.pory"
	showmonpic SPECIES_MARSHTOMP, 10, 3
# 1325 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Mudkip_Text_0, MSGBOX_YESNO
# 1327 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_EventScript_Mudkip_5
# 1366 "data/maps/DewfordTown/scripts.pory"
	hidemonpic
# 1367 "data/maps/DewfordTown/scripts.pory"
	msgbox Dewf_NotChosen
	goto DewfordTown_EventScript_Mudkip_1

DewfordTown_EventScript_Mudkip_5:
# 1328 "data/maps/DewfordTown/scripts.pory"
	givemon SPECIES_MARSHTOMP, 18
# 1329 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq DewfordTown_EventScript_Mudkip_8
# 1350 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq DewfordTown_EventScript_Mudkip_9
# 1361 "data/maps/DewfordTown/scripts.pory"
	hidemonpic
# 1362 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Charmander_Text_3
	goto DewfordTown_EventScript_Mudkip_1

DewfordTown_EventScript_Mudkip_8:
# 1330 "data/maps/DewfordTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1331 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Mudkip_Text_1
# 1332 "data/maps/DewfordTown/scripts.pory"
	callnative UpdateFollowingPokemon
# 1333 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1334 "data/maps/DewfordTown/scripts.pory"
	removeobject 7
# 1335 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 1336 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_BADGE01_GET
# 1337 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 0
# 1338 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_UNUSED_0x02D
# 1339 "data/maps/DewfordTown/scripts.pory"
	call NicknamePartyMonDewf
# 1340 "data/maps/DewfordTown/scripts.pory"
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
# 1341 "data/maps/DewfordTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1342 "data/maps/DewfordTown/scripts.pory"
	delay 60
# 1343 "data/maps/DewfordTown/scripts.pory"
	removeobject 6
# 1344 "data/maps/DewfordTown/scripts.pory"
	removeobject 8
# 1345 "data/maps/DewfordTown/scripts.pory"
	playse SE_M_SURF
# 1346 "data/maps/DewfordTown/scripts.pory"
	fadedefaultbgm
# 1347 "data/maps/DewfordTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1348 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Charmander_Text_2
	goto DewfordTown_EventScript_Mudkip_1

DewfordTown_EventScript_Mudkip_9:
# 1351 "data/maps/DewfordTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1352 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Mudkip_Text_1
# 1353 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1354 "data/maps/DewfordTown/scripts.pory"
	removeobject 7
# 1355 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 1356 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_BADGE01_GET
# 1357 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 0
# 1358 "data/maps/DewfordTown/scripts.pory"
	call NicknameBoxMonDewf
	goto DewfordTown_EventScript_Mudkip_1


DewfordTown_EventScript_Turtwig::
# 1378 "data/maps/DewfordTown/scripts.pory"
	lock
# 1379 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, DewfordTown_EventScript_Turtwig_2
# 1427 "data/maps/DewfordTown/scripts.pory"
	msgbox NoMore
DewfordTown_EventScript_Turtwig_1:
# 1429 "data/maps/DewfordTown/scripts.pory"
	release
	end

DewfordTown_EventScript_Turtwig_2:
# 1380 "data/maps/DewfordTown/scripts.pory"
	showmonpic SPECIES_BAYLEEF, 10, 3
# 1381 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Turtwig_Text_0, MSGBOX_YESNO
# 1383 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_EventScript_Turtwig_5
# 1422 "data/maps/DewfordTown/scripts.pory"
	hidemonpic
# 1423 "data/maps/DewfordTown/scripts.pory"
	msgbox Dewf_NotChosen
	goto DewfordTown_EventScript_Turtwig_1

DewfordTown_EventScript_Turtwig_5:
# 1384 "data/maps/DewfordTown/scripts.pory"
	givemon SPECIES_BAYLEEF, 18
# 1385 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq DewfordTown_EventScript_Turtwig_8
# 1406 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq DewfordTown_EventScript_Turtwig_9
# 1417 "data/maps/DewfordTown/scripts.pory"
	hidemonpic
# 1418 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Charmander_Text_3
	goto DewfordTown_EventScript_Turtwig_1

DewfordTown_EventScript_Turtwig_8:
# 1386 "data/maps/DewfordTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1387 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Turtwig_Text_1
# 1388 "data/maps/DewfordTown/scripts.pory"
	callnative UpdateFollowingPokemon
# 1389 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1390 "data/maps/DewfordTown/scripts.pory"
	removeobject 6
# 1391 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1392 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_BADGE01_GET
# 1393 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 0
# 1394 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_UNUSED_0x02D
# 1395 "data/maps/DewfordTown/scripts.pory"
	call NicknamePartyMonDewf
# 1396 "data/maps/DewfordTown/scripts.pory"
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
# 1397 "data/maps/DewfordTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1398 "data/maps/DewfordTown/scripts.pory"
	delay 60
# 1399 "data/maps/DewfordTown/scripts.pory"
	removeobject 7
# 1400 "data/maps/DewfordTown/scripts.pory"
	removeobject 8
# 1401 "data/maps/DewfordTown/scripts.pory"
	playse SE_M_SURF
# 1402 "data/maps/DewfordTown/scripts.pory"
	fadedefaultbgm
# 1403 "data/maps/DewfordTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1404 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Charmander_Text_2
	goto DewfordTown_EventScript_Turtwig_1

DewfordTown_EventScript_Turtwig_9:
# 1407 "data/maps/DewfordTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1408 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Turtwig_Text_1
# 1409 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1410 "data/maps/DewfordTown/scripts.pory"
	removeobject 6
# 1411 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 1412 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_BADGE01_GET
# 1413 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 0
# 1414 "data/maps/DewfordTown/scripts.pory"
	call NicknameBoxMonDewf
	goto DewfordTown_EventScript_Turtwig_1


NicknamePartyMonDewf::
# 1434 "data/maps/DewfordTown/scripts.pory"
	msgbox NicknamePartyMonDewf_Text_0, MSGBOX_YESNO
# 1435 "data/maps/DewfordTown/scripts.pory"
	hidemonpic
# 1436 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMonDewf_1
	return

NicknamePartyMonDewf_1:
# 1437 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 1438 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMonDewf::
# 1443 "data/maps/DewfordTown/scripts.pory"
	msgbox NicknamePartyMonDewf_Text_0, MSGBOX_YESNO
# 1444 "data/maps/DewfordTown/scripts.pory"
	hidemonpic
# 1445 "data/maps/DewfordTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMonDewf_2
NicknameBoxMonDewf_1:
# 1448 "data/maps/DewfordTown/scripts.pory"
	msgbox NicknameBoxMonDewf_Text_0
	return

NicknameBoxMonDewf_2:
# 1446 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMonDewf_1


DewfordTown_EventScript_Stormy::
# 1452 "data/maps/DewfordTown/scripts.pory"
	lock
# 1453 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1454 "data/maps/DewfordTown/scripts.pory"
	compare VAR_UNUSED_0x40F8, 0
	goto_if_eq DewfordTown_EventScript_Stormy_2
# 1457 "data/maps/DewfordTown/scripts.pory"
	compare VAR_UNUSED_0x40F8, 1
	goto_if_eq DewfordTown_EventScript_Stormy_3
# 1460 "data/maps/DewfordTown/scripts.pory"
	compare VAR_UNUSED_0x40F8, 2
	goto_if_eq DewfordTown_EventScript_Stormy_4
# 1463 "data/maps/DewfordTown/scripts.pory"
	compare VAR_UNUSED_0x40F8, 3
	goto_if_eq DewfordTown_EventScript_Stormy_5
DewfordTown_EventScript_Stormy_1:
# 1466 "data/maps/DewfordTown/scripts.pory"
	release
	end

DewfordTown_EventScript_Stormy_2:
# 1455 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Stormy_Text_0
	goto DewfordTown_EventScript_Stormy_1

DewfordTown_EventScript_Stormy_3:
# 1458 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Stormy_Text_1
	goto DewfordTown_EventScript_Stormy_1

DewfordTown_EventScript_Stormy_4:
# 1461 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Stormy_Text_2
	goto DewfordTown_EventScript_Stormy_1

DewfordTown_EventScript_Stormy_5:
# 1464 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Stormy_Text_3
	goto DewfordTown_EventScript_Stormy_1


# 1478 "data/maps/DewfordTown/scripts.pory"
WomanLookUp:
# 1479 "data/maps/DewfordTown/scripts.pory"
	face_up
	step_end

# 1482 "data/maps/DewfordTown/scripts.pory"
ManWalkInPlaceUp:
# 1483 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_up
# 1483 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_up
# 1483 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_up
# 1484 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_fast_up
	step_end

# 1487 "data/maps/DewfordTown/scripts.pory"
WalkLeft:
# 1488 "data/maps/DewfordTown/scripts.pory"
	walk_left
	step_end

# 1491 "data/maps/DewfordTown/scripts.pory"
FaceRight:
# 1492 "data/maps/DewfordTown/scripts.pory"
	face_right
	step_end

# 1495 "data/maps/DewfordTown/scripts.pory"
WalkDown:
# 1496 "data/maps/DewfordTown/scripts.pory"
	walk_down
	step_end

# 1499 "data/maps/DewfordTown/scripts.pory"
CameraUpTwo:
# 1500 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1501 "data/maps/DewfordTown/scripts.pory"
	walk_up
	step_end

# 1504 "data/maps/DewfordTown/scripts.pory"
CameraDownTwo:
# 1505 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_southeast
# 1506 "data/maps/DewfordTown/scripts.pory"
	walk_down
	step_end

# 1509 "data/maps/DewfordTown/scripts.pory"
RightEight:
# 1510 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 1510 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 1511 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 1512 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 1513 "data/maps/DewfordTown/scripts.pory"
	walk_down
# 1514 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 1514 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 1514 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 1514 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 1514 "data/maps/DewfordTown/scripts.pory"
	walk_right
	step_end

# 1517 "data/maps/DewfordTown/scripts.pory"
UpOneLeftOne:
# 1518 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 1519 "data/maps/DewfordTown/scripts.pory"
	face_left
	step_end

# 1522 "data/maps/DewfordTown/scripts.pory"
CameraToWinstrate:
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1523 "data/maps/DewfordTown/scripts.pory"
	walk_slow_diag_northwest
# 1524 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 1524 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 1524 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 1524 "data/maps/DewfordTown/scripts.pory"
	walk_left
	step_end

DewfordTown_EventScript_Aqua::
# 1528 "data/maps/DewfordTown/scripts.pory"
	lock
# 1529 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1530 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x031, DewfordTown_EventScript_Aqua_2
# 1539 "data/maps/DewfordTown/scripts.pory"
	goto_if_set FLAG_UNUSED_0x031, DewfordTown_EventScript_Aqua_3
DewfordTown_EventScript_Aqua_1:
# 1546 "data/maps/DewfordTown/scripts.pory"
	release
	end

DewfordTown_EventScript_Aqua_2:
# 1531 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Aqua_Text_0
# 1532 "data/maps/DewfordTown/scripts.pory"
	giveitem ITEM_KAYAK
# 1533 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_UNUSED_0x031
# 1534 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1535 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1536 "data/maps/DewfordTown/scripts.pory"
	applymovement 25, Common_Movement_FaceDown
# 1537 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
	goto DewfordTown_EventScript_Aqua_1

DewfordTown_EventScript_Aqua_3:
# 1540 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Aqua_Text_1
# 1541 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1542 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1543 "data/maps/DewfordTown/scripts.pory"
	applymovement 25, Common_Movement_FaceDown
# 1544 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
	goto DewfordTown_EventScript_Aqua_1


DewfordTown_EventScript_Corphish::
# 1551 "data/maps/DewfordTown/scripts.pory"
	lock
# 1552 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1553 "data/maps/DewfordTown/scripts.pory"
	playmoncry SPECIES_CORPHISH, CRY_MODE_NORMAL
# 1554 "data/maps/DewfordTown/scripts.pory"
	waitmoncry
# 1555 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Corphish_Text_0
# 1556 "data/maps/DewfordTown/scripts.pory"
	applymovement 12, Common_Movement_FaceOriginalDirection
# 1557 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1558 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_FatMan::
# 1563 "data/maps/DewfordTown/scripts.pory"
	lock
# 1564 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1565 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_FatMan_Text_0
# 1566 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_FamilyMan::
# 1571 "data/maps/DewfordTown/scripts.pory"
	lock
# 1572 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1573 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_FamilyMan_Text_0
# 1574 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_Scientist::
# 1579 "data/maps/DewfordTown/scripts.pory"
	lock
# 1580 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1581 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Scientist_Text_0
# 1582 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1583 "data/maps/DewfordTown/scripts.pory"
	applymovement 45, Common_Movement_FaceOriginalDirection
# 1584 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1585 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_Anthrotech::
# 1590 "data/maps/DewfordTown/scripts.pory"
	lock
# 1591 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1592 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Anthrotech_Text_0
# 1593 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1594 "data/maps/DewfordTown/scripts.pory"
	applymovement 44, Common_Movement_FaceOriginalDirection
# 1595 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1596 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_PokecenterWoman::
# 1601 "data/maps/DewfordTown/scripts.pory"
	lock
# 1602 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1603 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_PokecenterWoman_Text_0
# 1604 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1605 "data/maps/DewfordTown/scripts.pory"
	applymovement 42, Common_Movement_FaceOriginalDirection
# 1606 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1607 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_Beauty::
# 1612 "data/maps/DewfordTown/scripts.pory"
	lock
# 1613 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1614 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Beauty_Text_0
# 1615 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_Fisher::
# 1620 "data/maps/DewfordTown/scripts.pory"
	lock
# 1621 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1622 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Fisher_Text_0
# 1623 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1624 "data/maps/DewfordTown/scripts.pory"
	applymovement 39, Common_Movement_FaceOriginalDirection
# 1625 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1626 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_Hiker::
# 1631 "data/maps/DewfordTown/scripts.pory"
	lock
# 1632 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1633 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Hiker_Text_0
# 1634 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_Boy::
# 1639 "data/maps/DewfordTown/scripts.pory"
	lock
# 1640 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1641 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Boy_Text_0
# 1642 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_WomanInLine::
# 1647 "data/maps/DewfordTown/scripts.pory"
	lock
# 1648 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1649 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_WomanInLine_Text_0
# 1650 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1651 "data/maps/DewfordTown/scripts.pory"
	applymovement 18, Common_Movement_FaceOriginalDirection
# 1652 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1653 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_Boy1InLine::
# 1658 "data/maps/DewfordTown/scripts.pory"
	lock
# 1659 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1660 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Boy1InLine_Text_0
# 1661 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1662 "data/maps/DewfordTown/scripts.pory"
	applymovement 25, Common_Movement_FaceOriginalDirection
# 1663 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1664 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_Boy2InLine::
# 1669 "data/maps/DewfordTown/scripts.pory"
	lock
# 1670 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1671 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Boy2InLine_Text_0
# 1672 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1673 "data/maps/DewfordTown/scripts.pory"
	applymovement 19, Common_Movement_FaceOriginalDirection
# 1674 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1675 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_Boy3InLine::
# 1680 "data/maps/DewfordTown/scripts.pory"
	lock
# 1681 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1682 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_Boy3InLine_Text_0
# 1683 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1684 "data/maps/DewfordTown/scripts.pory"
	applymovement 24, Common_Movement_FaceOriginalDirection
# 1685 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1686 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_SailorInLine::
# 1691 "data/maps/DewfordTown/scripts.pory"
	lock
# 1692 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 1693 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_SailorInLine_Text_0
# 1694 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 1695 "data/maps/DewfordTown/scripts.pory"
	applymovement 20, Common_Movement_FaceOriginalDirection
# 1696 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1697 "data/maps/DewfordTown/scripts.pory"
	release
	end


DewfordTown_EventScript_RemoveWinstrate::
# 1702 "data/maps/DewfordTown/scripts.pory"
	lockall
# 1703 "data/maps/DewfordTown/scripts.pory"
	delay 30
# 1704 "data/maps/DewfordTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1705 "data/maps/DewfordTown/scripts.pory"
	addobject 36
# 1706 "data/maps/DewfordTown/scripts.pory"
	delay 30
# 1707 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1708 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8004, 13
# 1709 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8005, 16
# 1710 "data/maps/DewfordTown/scripts.pory"
	special TeleportCamera
# 1711 "data/maps/DewfordTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1712 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 1713 "data/maps/DewfordTown/scripts.pory"
	delay 60
# 1714 "data/maps/DewfordTown/scripts.pory"
	setfieldeffectargument 0, 1
# 1715 "data/maps/DewfordTown/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 1716 "data/maps/DewfordTown/scripts.pory"
	delay 15
# 1717 "data/maps/DewfordTown/scripts.pory"
	removeobject 36
# 1718 "data/maps/DewfordTown/scripts.pory"
	delay 60
# 1719 "data/maps/DewfordTown/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 1720 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_DEWFORD_TOWN_STATE, 3
# 1721 "data/maps/DewfordTown/scripts.pory"
	delay 60
# 1722 "data/maps/DewfordTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1723 "data/maps/DewfordTown/scripts.pory"
	delay 30
# 1725 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8004, 42
# 1726 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8005, 42
# 1727 "data/maps/DewfordTown/scripts.pory"
	special TeleportCamera
# 1728 "data/maps/DewfordTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1729 "data/maps/DewfordTown/scripts.pory"
	special RemoveCameraObject
# 1730 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 1731 "data/maps/DewfordTown/scripts.pory"
	releaseall
	end


DewfordTown_EventScript_OceanWoman_Text_0:
# 1046 "data/maps/DewfordTown/scripts.pory"
	.string "Seaspray Town has always been a\n"
	.string "vacation destination for people across\l"
	.string "Ecodia.\p"
	.string "Now, due to rising sea levels, we have\n"
	.string "been cut off from the rest of the\l"
	.string "region.\p"
	.string "This path was our only way out!$"

DewfordTown_EventScript_LastWinstrate_Text_0:
# 1058 "data/maps/DewfordTown/scripts.pory"
	.string "Thank you again for giving us something\n"
	.string "to smile about.\p"
	.string "Good luck on the rest of your journey!$"

DewfordTown_EventScript_SecondFisher_Text_0:
# 1066 "data/maps/DewfordTown/scripts.pory"
	.string "I'm not sure if I want to leave Seaspray\n"
	.string "Town.\p"
	.string "Who knows if where we're being sent has\n"
	.string "fishing as good as this!$"

DewfordTown_EventScript_PushyMan_Text_0:
# 1084 "data/maps/DewfordTown/scripts.pory"
	.string "I've waited long enough, I want to get\n"
	.string "my family to safety.\p"
	.string "STORMY, WHERE ARE YOU?$"

DewfordTown_EventScript_PushyMan_Text_1:
# 1091 "data/maps/DewfordTown/scripts.pory"
	.string "You want me? Here I am!$"

DewfordTown_EventScript_PushyMan_Text_2:
# 1111 "data/maps/DewfordTown/scripts.pory"
	.string "Stormy: My Pokémon are missing! I can't\n"
	.string "fly anyone out of here before I get\l"
	.string "them back!$"

DewfordTown_EventScript_PushyMan_Text_3:
# 1134 "data/maps/DewfordTown/scripts.pory"
	.string "Stormy: Someone will have to find them\n"
	.string "before I can continue the evacuation,\l"
	.string "and before I reopen the Gym!$"

DewfordTown_EventScript_Ursaring_Text_0:
# 1186 "data/maps/DewfordTown/scripts.pory"
	.string "The Pokémon attacked!$"

DewfordTown_EventScript_Ursaring_Text_1:
# 1209 "data/maps/DewfordTown/scripts.pory"
	.string "The Gyarados thanked you!$"

DewfordTown_EventScript_Charmander_Text_0:
# 1269 "data/maps/DewfordTown/scripts.pory"
	.string "It's a Monferno!\l"
	.string "Do you want to pick up Monferno?$"

DewfordTown_EventScript_Charmander_Text_1:
# 1275 "data/maps/DewfordTown/scripts.pory"
	.string "Recieved Monferno!$"

DewfordTown_EventScript_Charmander_Text_2:
# 1292 "data/maps/DewfordTown/scripts.pory"
	.string "The other Pokémon were swept out to\n"
	.string "sea...$"

DewfordTown_EventScript_Charmander_Text_3:
# 1306 "data/maps/DewfordTown/scripts.pory"
	.string "No more room.$"

DewfordTown_EventScript_Mudkip_Text_0:
# 1325 "data/maps/DewfordTown/scripts.pory"
	.string "It's a Marshtomp!\l"
	.string "Do you want to pick up Marshtomp?$"

DewfordTown_EventScript_Mudkip_Text_1:
# 1331 "data/maps/DewfordTown/scripts.pory"
	.string "Recieved Marshtomp!$"

DewfordTown_EventScript_Turtwig_Text_0:
# 1381 "data/maps/DewfordTown/scripts.pory"
	.string "It's a Bayleef!\l"
	.string "Do you want to pick up Bayleef?$"

DewfordTown_EventScript_Turtwig_Text_1:
# 1387 "data/maps/DewfordTown/scripts.pory"
	.string "Recieved Bayleef!$"

NicknamePartyMonDewf_Text_0:
# 1434 "data/maps/DewfordTown/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMonDewf_Text_0:
# 1448 "data/maps/DewfordTown/scripts.pory"
	.string "Transferred to PC$"

DewfordTown_EventScript_Stormy_Text_0:
# 1455 "data/maps/DewfordTown/scripts.pory"
	.string "I don't know where my Pokémon are, but\n"
	.string "they must be somewhere in town.\p"
	.string "I won't reopen the Gym until they're\n"
	.string "found!$"

DewfordTown_EventScript_Stormy_Text_1:
# 1458 "data/maps/DewfordTown/scripts.pory"
	.string "I am still missing two Pokémon!$"

DewfordTown_EventScript_Stormy_Text_2:
# 1461 "data/maps/DewfordTown/scripts.pory"
	.string "Thank you for finding two of my\n"
	.string "Pokémon, but there's one left!$"

DewfordTown_EventScript_Stormy_Text_3:
# 1464 "data/maps/DewfordTown/scripts.pory"
	.string "You found them all!$"

DewfordTown_EventScript_Aqua_Text_0:
# 1531 "data/maps/DewfordTown/scripts.pory"
	.string "My home got flooded, I've lost\n"
	.string "everything.\p"
	.string "This is my last possession, you can have\n"
	.string "it.$"

DewfordTown_EventScript_Aqua_Text_1:
# 1540 "data/maps/DewfordTown/scripts.pory"
	.string "That kayak isn't seaworthy, trust me,\n"
	.string "I've tried.\p"
	.string "Maybe you can use it for something\n"
	.string "else?$"

DewfordTown_EventScript_Corphish_Text_0:
# 1555 "data/maps/DewfordTown/scripts.pory"
	.string "Cor cor!$"

DewfordTown_EventScript_FatMan_Text_0:
# 1565 "data/maps/DewfordTown/scripts.pory"
	.string "Technology is incredible!\p"
	.string "Humans have destroyed the natural\n"
	.string "environment, and now my beautiful town\l"
	.string "is flooded!$"

DewfordTown_EventScript_FamilyMan_Text_0:
# 1573 "data/maps/DewfordTown/scripts.pory"
	.string "My family got to the top of the waiting\n"
	.string "list for evacuation, but Stormy could\l"
	.string "only take three of us.\p"
	.string "I opted to stay behind, but now I don't\n"
	.string "know when I'll see them again.$"

DewfordTown_EventScript_Scientist_Text_0:
# 1581 "data/maps/DewfordTown/scripts.pory"
	.string "As the atmosphere warms, the oceans\n"
	.string "heat up as well.\p"
	.string "When water warms up, it expands. This,\n"
	.string "along with melting polar ice, is a\l"
	.string "primary reason for sea level rise.\p"
	.string "A warmer ocean climate means more\n"
	.string "severe storms, too!$"

DewfordTown_EventScript_Anthrotech_Text_0:
# 1592 "data/maps/DewfordTown/scripts.pory"
	.string "I work with Anthrotech and was sent\n"
	.string "here to workshop solutions for the\l"
	.string "flooding.\p"
	.string "If we just put down a seawall, Seaspray\n"
	.string "Town should be looking good as new!$"

DewfordTown_EventScript_PokecenterWoman_Text_0:
# 1603 "data/maps/DewfordTown/scripts.pory"
	.string "The ocean has almost risen to flood our\n"
	.string "PokéCenter!\p"
	.string "How will our town survive without\n"
	.string "healthcare?$"

DewfordTown_EventScript_Beauty_Text_0:
# 1614 "data/maps/DewfordTown/scripts.pory"
	.string "Seaspray Town used to have the most\n"
	.string "beautiful beaches, full of glittering\l"
	.string "sand.\p"
	.string "This truly was the best place to soak\n"
	.string "up the sun.\p"
	.string "Unfortunately, that's all in the past.$"

DewfordTown_EventScript_Fisher_Text_0:
# 1622 "data/maps/DewfordTown/scripts.pory"
	.string "The fishing here is great!$"

DewfordTown_EventScript_Hiker_Text_0:
# 1633 "data/maps/DewfordTown/scripts.pory"
	.string "I was hoping to scale these mountains\n"
	.string "to escape the floods, but I don't think\l"
	.string "that's possible.\p"
	.string "I guess I'll have to wait my turn to be\n"
	.string "evacuated, like everyone else.$"

DewfordTown_EventScript_Boy_Text_0:
# 1641 "data/maps/DewfordTown/scripts.pory"
	.string "Stormy handles all of the evacuations\n"
	.string "here. She used to take people for\l"
	.string "joyrides on her Pokémon to see the\l"
	.string "tropical scenery, but after the League\l"
	.string "declared a state of emergency, she\l"
	.string "began escorting people further inland.\p"
	.string "I hope it will be my turn soon!$"

DewfordTown_EventScript_WomanInLine_Text_0:
# 1649 "data/maps/DewfordTown/scripts.pory"
	.string "I want to leave!$"

DewfordTown_EventScript_Boy1InLine_Text_0:
# 1660 "data/maps/DewfordTown/scripts.pory"
	.string "I'm mostly here to support my mom. I'm\n"
	.string "sure we'll all get out of here\l"
	.string "eventually.$"

DewfordTown_EventScript_Boy2InLine_Text_0:
# 1671 "data/maps/DewfordTown/scripts.pory"
	.string "It's so cold and wet here!$"

DewfordTown_EventScript_Boy3InLine_Text_0:
# 1682 "data/maps/DewfordTown/scripts.pory"
	.string "I have to be strong for my little\n"
	.string "brother. He doesn't deserve to have to\l"
	.string "live here.$"

DewfordTown_EventScript_SailorInLine_Text_0:
# 1693 "data/maps/DewfordTown/scripts.pory"
	.string "Don't get me wrong, I love the ocean!\n"
	.string "But this is just too much.$"

Dewf_NotChosen::
# 1470 "data/maps/DewfordTown/scripts.pory"
	.string "You did not choose the Pokémon.$"

NoMore::
# 1474 "data/maps/DewfordTown/scripts.pory"
	.string "Better not be greedy!$"
