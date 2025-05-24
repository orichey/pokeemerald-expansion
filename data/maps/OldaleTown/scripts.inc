# 1 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_Mart_EMPLOYEE, 2
# 2 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_FOOTPRINTS_MAN, 3
# 3 "data/maps/OldaleTown/scripts.pory"
.set LOCALID_RIVAL, 4
# 4 "data/maps/OldaleTown/scripts.pory"

# 5 "data/maps/OldaleTown/scripts.pory"
OldaleTown_MapScripts::
# 6 "data/maps/OldaleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
# 7 "data/maps/OldaleTown/scripts.pory"
	.byte 0
# 8 "data/maps/OldaleTown/scripts.pory"

# 9 "data/maps/OldaleTown/scripts.pory"
OldaleTown_OnTransition:
# 10 "data/maps/OldaleTown/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 11 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
# 12 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
# 13 "data/maps/OldaleTown/scripts.pory"
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
# 14 "data/maps/OldaleTown/scripts.pory"
	call_if_set FLAG_UNUSED_0x028, OldaleTown_EventScript_SetOldaleState
# 15 "data/maps/OldaleTown/scripts.pory"
	end
# 16 "data/maps/OldaleTown/scripts.pory"

# 17 "data/maps/OldaleTown/scripts.pory"
@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
# 18 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_SetOldaleState::
# 19 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_TOWN_STATE, 1
# 20 "data/maps/OldaleTown/scripts.pory"
	return
# 21 "data/maps/OldaleTown/scripts.pory"

# 22 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockWestEntrance::
# 23 "data/maps/OldaleTown/scripts.pory"
	return
# 24 "data/maps/OldaleTown/scripts.pory"

# 25 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MoveMartEmployee::
# 26 "data/maps/OldaleTown/scripts.pory"
	return
# 27 "data/maps/OldaleTown/scripts.pory"

# 28 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_TownSign::
# 29 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
# 30 "data/maps/OldaleTown/scripts.pory"
	end
# 31 "data/maps/OldaleTown/scripts.pory"

# 32 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Girl::
# 33 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
# 34 "data/maps/OldaleTown/scripts.pory"
	end
# 35 "data/maps/OldaleTown/scripts.pory"

# 36 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_MartEmployee::
# 37 "data/maps/OldaleTown/scripts.pory"
	lock
# 38 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 39 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
# 40 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
# 41 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_TEMP_1
# 42 "data/maps/OldaleTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 43 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
# 44 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 45 "data/maps/OldaleTown/scripts.pory"
	switch VAR_FACING
# 46 "data/maps/OldaleTown/scripts.pory"
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
# 47 "data/maps/OldaleTown/scripts.pory"
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
# 48 "data/maps/OldaleTown/scripts.pory"
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
# 49 "data/maps/OldaleTown/scripts.pory"
	end
# 50 "data/maps/OldaleTown/scripts.pory"

# 51 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartSouth::
# 52 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_Mart_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
# 53 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerSouth
# 54 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 55 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 56 "data/maps/OldaleTown/scripts.pory"
	end
# 57 "data/maps/OldaleTown/scripts.pory"

# 58 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartNorth::
# 59 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_Mart_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
# 60 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerNorth
# 61 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 62 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 63 "data/maps/OldaleTown/scripts.pory"
	end
# 64 "data/maps/OldaleTown/scripts.pory"

# 65 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_GoToMartEast::
# 66 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerEast
# 67 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_Mart_EMPLOYEE, OldaleTown_Movement_EmployeeEast
# 68 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 69 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ExplainPokemonMart
# 70 "data/maps/OldaleTown/scripts.pory"
	end
# 71 "data/maps/OldaleTown/scripts.pory"

# 72 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPokemonMart::
# 73 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
# 74 "data/maps/OldaleTown/scripts.pory"
	giveitem ITEM_POTION
# 75 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
# 76 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 77 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POTION_OLDALE
# 78 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 79 "data/maps/OldaleTown/scripts.pory"
	release
# 80 "data/maps/OldaleTown/scripts.pory"
	end
# 81 "data/maps/OldaleTown/scripts.pory"

# 82 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ExplainPotion::
# 83 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
# 84 "data/maps/OldaleTown/scripts.pory"
	release
# 85 "data/maps/OldaleTown/scripts.pory"
	end
# 86 "data/maps/OldaleTown/scripts.pory"

# 87 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BagIsFull::
# 88 "data/maps/OldaleTown/scripts.pory"
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
# 89 "data/maps/OldaleTown/scripts.pory"
	fadedefaultbgm
# 90 "data/maps/OldaleTown/scripts.pory"
	release
# 91 "data/maps/OldaleTown/scripts.pory"
	end
# 92 "data/maps/OldaleTown/scripts.pory"

# 93 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeEast:
# 94 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 95 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 96 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 97 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 98 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 99 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 100 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 101 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 102 "data/maps/OldaleTown/scripts.pory"
	step_end
# 103 "data/maps/OldaleTown/scripts.pory"

# 104 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeSouth:
# 105 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 106 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 107 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 108 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 109 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 110 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 111 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 112 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 113 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 114 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 115 "data/maps/OldaleTown/scripts.pory"
	step_end
# 116 "data/maps/OldaleTown/scripts.pory"

# 117 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_EmployeeNorth:
# 118 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 119 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 120 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 121 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 122 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 123 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 124 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 125 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 126 "data/maps/OldaleTown/scripts.pory"
	step_end
# 127 "data/maps/OldaleTown/scripts.pory"

# 128 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown1:
# 129 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 130 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 131 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 132 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 133 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 134 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 135 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 136 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 137 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 138 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 139 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 140 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 141 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 142 "data/maps/OldaleTown/scripts.pory"
	step_end
# 143 "data/maps/OldaleTown/scripts.pory"

# 144 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerEast:
# 145 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 146 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 147 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 148 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 149 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 150 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 151 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 152 "data/maps/OldaleTown/scripts.pory"
	step_end
# 153 "data/maps/OldaleTown/scripts.pory"

# 154 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerSouth:
# 155 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 156 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 157 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 158 "data/maps/OldaleTown/scripts.pory"
	delay_16
# 159 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 160 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 161 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 162 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 163 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 164 "data/maps/OldaleTown/scripts.pory"
	step_end
# 165 "data/maps/OldaleTown/scripts.pory"

# 166 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerNorth:
# 167 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 168 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 169 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 170 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 171 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 172 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 173 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 174 "data/maps/OldaleTown/scripts.pory"
	step_end
# 175 "data/maps/OldaleTown/scripts.pory"

# 176 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_Unknown2:
# 177 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 178 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 179 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 180 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 181 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 182 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 183 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 184 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 185 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 186 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 187 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 188 "data/maps/OldaleTown/scripts.pory"
	step_end
# 189 "data/maps/OldaleTown/scripts.pory"

# 190 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_FootprintsMan::
# 191 "data/maps/OldaleTown/scripts.pory"
	lock
# 192 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 193 "data/maps/OldaleTown/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
# 194 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
# 195 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 196 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
# 197 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 198 "data/maps/OldaleTown/scripts.pory"
	release
# 199 "data/maps/OldaleTown/scripts.pory"
	end
# 200 "data/maps/OldaleTown/scripts.pory"

# 201 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_BlockedPath::
# 202 "data/maps/OldaleTown/scripts.pory"
	lockall
# 203 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
# 204 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
# 205 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 206 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
# 207 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 208 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
# 209 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 210 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 211 "data/maps/OldaleTown/scripts.pory"
	end
# 212 "data/maps/OldaleTown/scripts.pory"

# 213 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_NotBlockingPath::
# 214 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
# 215 "data/maps/OldaleTown/scripts.pory"
	release
# 216 "data/maps/OldaleTown/scripts.pory"
	end
# 217 "data/maps/OldaleTown/scripts.pory"

# 218 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_Rival::
# 219 "data/maps/OldaleTown/scripts.pory"
	lockall
# 220 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 221 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 222 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 0
# 223 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 224 "data/maps/OldaleTown/scripts.pory"
	end
# 225 "data/maps/OldaleTown/scripts.pory"

# 226 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger1::
# 227 "data/maps/OldaleTown/scripts.pory"
	lockall
# 228 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
# 229 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 230 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 231 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 232 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 233 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 234 "data/maps/OldaleTown/scripts.pory"
	end
# 235 "data/maps/OldaleTown/scripts.pory"

# 236 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger2::
# 237 "data/maps/OldaleTown/scripts.pory"
	lockall
# 238 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
# 239 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 240 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 241 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 242 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 243 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 244 "data/maps/OldaleTown/scripts.pory"
	end
# 245 "data/maps/OldaleTown/scripts.pory"

# 246 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalTrigger3::
# 247 "data/maps/OldaleTown/scripts.pory"
	lockall
# 248 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
# 249 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 250 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 251 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 252 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_0x8009, 1
# 253 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_ShowRivalMessage
# 254 "data/maps/OldaleTown/scripts.pory"
	end
# 255 "data/maps/OldaleTown/scripts.pory"

# 256 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowRivalMessage::
# 257 "data/maps/OldaleTown/scripts.pory"
	checkplayergender
# 258 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
# 259 "data/maps/OldaleTown/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
# 260 "data/maps/OldaleTown/scripts.pory"
	end
# 261 "data/maps/OldaleTown/scripts.pory"

# 262 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowMayMessage::
# 263 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
# 264 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 265 "data/maps/OldaleTown/scripts.pory"
	end
# 266 "data/maps/OldaleTown/scripts.pory"

# 267 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_ShowBrendanMessage::
# 268 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
# 269 "data/maps/OldaleTown/scripts.pory"
	goto OldaleTown_EventScript_RivalFinish
# 270 "data/maps/OldaleTown/scripts.pory"
	end
# 271 "data/maps/OldaleTown/scripts.pory"

# 272 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_RivalFinish::
# 273 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 274 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
# 275 "data/maps/OldaleTown/scripts.pory"
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
# 276 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 277 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 278 "data/maps/OldaleTown/scripts.pory"
	removeobject LOCALID_RIVAL
# 279 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 2
# 280 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 281 "data/maps/OldaleTown/scripts.pory"
	releaseall
# 282 "data/maps/OldaleTown/scripts.pory"
	end
# 283 "data/maps/OldaleTown/scripts.pory"

# 284 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement1::
# 285 "data/maps/OldaleTown/scripts.pory"
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
# 286 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 287 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 288 "data/maps/OldaleTown/scripts.pory"
	return
# 289 "data/maps/OldaleTown/scripts.pory"

# 290 "data/maps/OldaleTown/scripts.pory"
OldaleTown_EventScript_DoExitMovement2::
# 291 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_WatchRivalExit
# 292 "data/maps/OldaleTown/scripts.pory"
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
# 293 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 294 "data/maps/OldaleTown/scripts.pory"
	return
# 295 "data/maps/OldaleTown/scripts.pory"

# 296 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer1:
# 297 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 298 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 299 "data/maps/OldaleTown/scripts.pory"
	step_end
# 300 "data/maps/OldaleTown/scripts.pory"

# 301 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer2:
# 302 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 303 "data/maps/OldaleTown/scripts.pory"
	step_end
# 304 "data/maps/OldaleTown/scripts.pory"

# 305 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalApproachPlayer3:
# 306 "data/maps/OldaleTown/scripts.pory"
	face_left
# 307 "data/maps/OldaleTown/scripts.pory"
	step_end
# 308 "data/maps/OldaleTown/scripts.pory"

# 309 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_RivalExit:
# 310 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 311 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 312 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 313 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 314 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 315 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 316 "data/maps/OldaleTown/scripts.pory"
	step_end
# 317 "data/maps/OldaleTown/scripts.pory"

# 318 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_WatchRivalExit:
# 319 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 320 "data/maps/OldaleTown/scripts.pory"
	delay_4
# 321 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_down
# 322 "data/maps/OldaleTown/scripts.pory"
	step_end
# 323 "data/maps/OldaleTown/scripts.pory"

# 324 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_PlayerStepBack:
# 325 "data/maps/OldaleTown/scripts.pory"
	delay_8
# 326 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 327 "data/maps/OldaleTown/scripts.pory"
	step_end
# 328 "data/maps/OldaleTown/scripts.pory"

# 329 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_BackUp:
# 330 "data/maps/OldaleTown/scripts.pory"
	walk_fast_up
# 331 "data/maps/OldaleTown/scripts.pory"
	walk_in_place_faster_left
# 332 "data/maps/OldaleTown/scripts.pory"
	lock_facing_direction
# 333 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 334 "data/maps/OldaleTown/scripts.pory"
	unlock_facing_direction
# 335 "data/maps/OldaleTown/scripts.pory"
	step_end
# 336 "data/maps/OldaleTown/scripts.pory"

# 337 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Movement_ReturnToOriginalPosition:
# 338 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 339 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 340 "data/maps/OldaleTown/scripts.pory"
	step_end
# 341 "data/maps/OldaleTown/scripts.pory"

# 342 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_SavingMyProgress:
# 343 "data/maps/OldaleTown/scripts.pory"
	.string "I want to take a rest, so I'm saving my\n"
# 344 "data/maps/OldaleTown/scripts.pory"
	.string "progress.$"
# 345 "data/maps/OldaleTown/scripts.pory"

# 346 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_IWorkAtPokemonMart:
# 347 "data/maps/OldaleTown/scripts.pory"
	.string "Hi!\n"
# 348 "data/maps/OldaleTown/scripts.pory"
	.string "I work at a Pokémon Mart.\p"
# 349 "data/maps/OldaleTown/scripts.pory"
	.string "Can I get you to come with me?$"
# 350 "data/maps/OldaleTown/scripts.pory"

# 351 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_ThisIsAPokemonMart:
# 352 "data/maps/OldaleTown/scripts.pory"
	.string "This is a Pokémon Mart.\n"
# 353 "data/maps/OldaleTown/scripts.pory"
	.string "Just look for our blue roof.\p"
# 354 "data/maps/OldaleTown/scripts.pory"
	.string "We sell a variety of goods including\n"
# 355 "data/maps/OldaleTown/scripts.pory"
	.string "POKé BALLS for catching Pokémon.\p"
# 356 "data/maps/OldaleTown/scripts.pory"
	.string "Here, I'd like you to have this as\n"
# 357 "data/maps/OldaleTown/scripts.pory"
	.string "a promotional item.$"
# 358 "data/maps/OldaleTown/scripts.pory"

# 359 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_PotionExplanation:
# 360 "data/maps/OldaleTown/scripts.pory"
	.string "A POTION can be used anytime, so it's\n"
# 361 "data/maps/OldaleTown/scripts.pory"
	.string "even more useful than a Pokémon CENTER\l"
# 362 "data/maps/OldaleTown/scripts.pory"
	.string "in certain situations.$"
# 363 "data/maps/OldaleTown/scripts.pory"

# 364 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_WaitDontComeInHere:
# 365 "data/maps/OldaleTown/scripts.pory"
	.string "Aaaaah! Wait!\n"
# 366 "data/maps/OldaleTown/scripts.pory"
	.string "Please don't come in here.\p"
# 367 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 368 "data/maps/OldaleTown/scripts.pory"
	.string "a rare Pokémon!\p"
# 369 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 370 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 371 "data/maps/OldaleTown/scripts.pory"

# 372 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_DiscoveredFootprints:
# 373 "data/maps/OldaleTown/scripts.pory"
	.string "I just discovered the footprints of\n"
# 374 "data/maps/OldaleTown/scripts.pory"
	.string "a rare Pokémon!\p"
# 375 "data/maps/OldaleTown/scripts.pory"
	.string "Wait until I finish sketching\n"
# 376 "data/maps/OldaleTown/scripts.pory"
	.string "them, okay?$"
# 377 "data/maps/OldaleTown/scripts.pory"

# 378 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_FinishedSketchingFootprints:
# 379 "data/maps/OldaleTown/scripts.pory"
	.string "I finished sketching the footprints of\n"
# 380 "data/maps/OldaleTown/scripts.pory"
	.string "a rare Pokémon.\p"
# 381 "data/maps/OldaleTown/scripts.pory"
	.string "But it turns out they were only my\n"
# 382 "data/maps/OldaleTown/scripts.pory"
	.string "own footprints…$"
# 383 "data/maps/OldaleTown/scripts.pory"

# 384 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_MayLetsGoBack:
# 385 "data/maps/OldaleTown/scripts.pory"
	.string "MAY: {PLAYER}{KUN}!\n"
# 386 "data/maps/OldaleTown/scripts.pory"
	.string "Over here!\l"
# 387 "data/maps/OldaleTown/scripts.pory"
	.string "Let's hurry home!$"
# 388 "data/maps/OldaleTown/scripts.pory"

# 389 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_BrendanLetsGoBack:
# 390 "data/maps/OldaleTown/scripts.pory"
	.string "BRENDAN: I'm heading back to my dad's\n"
# 391 "data/maps/OldaleTown/scripts.pory"
	.string "LAB now.\l"
# 392 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER}, you should hustle back, too.$"
# 393 "data/maps/OldaleTown/scripts.pory"

# 394 "data/maps/OldaleTown/scripts.pory"
OldaleTown_Text_TownSign:
# 395 "data/maps/OldaleTown/scripts.pory"
	.string "OLDALE TOWN\n"
# 396 "data/maps/OldaleTown/scripts.pory"
	.string "“Where things start off scarce.”$"

OldaleTown_EventScript_NewSign::
# 401 "data/maps/OldaleTown/scripts.pory"
	lockall
# 402 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_NewSign_Text_0
# 404 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleTown_EventScript_LibrarySign::
# 408 "data/maps/OldaleTown/scripts.pory"
	lockall
# 409 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_LibrarySign_Text_0
# 412 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleTown_EventScript_JoeySign::
# 416 "data/maps/OldaleTown/scripts.pory"
	lockall
# 417 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_JoeySign_Text_0
# 419 "data/maps/OldaleTown/scripts.pory"
	releaseall
	return


OldaleTown_EventScript_OldWoman::
# 423 "data/maps/OldaleTown/scripts.pory"
	lock
# 424 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 425 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_OldWoman_Text_0
# 427 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleTown_EventScript_LittleBoy::
# 431 "data/maps/OldaleTown/scripts.pory"
	lock
# 432 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 433 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_LittleBoy_Text_0
# 436 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleTown_EventScript_ScholarBoy::
# 440 "data/maps/OldaleTown/scripts.pory"
	lock
# 441 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 442 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_ScholarBoy_Text_0
# 443 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleTown_EventScript_Hiker::
# 447 "data/maps/OldaleTown/scripts.pory"
	lock
# 448 "data/maps/OldaleTown/scripts.pory"
	faceplayer
# 449 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_Hiker_Text_0
# 451 "data/maps/OldaleTown/scripts.pory"
	release
	return


OldaleTown_EventScript_CantPass::
# 455 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x027, OldaleTown_EventScript_CantPass_2
OldaleTown_EventScript_CantPass_1:
# 469 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleTown_EventScript_CantPass_2:
# 456 "data/maps/OldaleTown/scripts.pory"
	lockall
# 457 "data/maps/OldaleTown/scripts.pory"
	applymovement 1, HikerDown
# 458 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 459 "data/maps/OldaleTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 460 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 461 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerUp
# 462 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 463 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_CantPass_Text_0
# 466 "data/maps/OldaleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GoBack
# 467 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
	goto OldaleTown_EventScript_CantPass_1


OldaleTown_EventScript_EnterTop::
# 473 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x028, OldaleTown_EventScript_EnterTop_2
OldaleTown_EventScript_EnterTop_1:
# 521 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleTown_EventScript_EnterTop_2:
# 474 "data/maps/OldaleTown/scripts.pory"
	lockall
# 475 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 476 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, AnthrotechWalkRight4
# 477 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 478 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, Common_Movement_WalkDown2
# 479 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 480 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_0
# 481 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 482 "data/maps/OldaleTown/scripts.pory"
	delay 60
# 483 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, Common_Movement_WalkUp
# 484 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_1
# 485 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 486 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 487 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 488 "data/maps/OldaleTown/scripts.pory"
	delay 35
# 489 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, AnthroLookRight
# 490 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 491 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 492 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 493 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_2
# 494 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 495 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, WalkToPlayerTop
# 496 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 497 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_3
# 498 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 499 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, HikerDown
# 500 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 501 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_4
# 502 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 503 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, AnthroLookRight
# 504 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_5
# 505 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 506 "data/maps/OldaleTown/scripts.pory"
	special SetUnlockedPokedexFlags
# 507 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 508 "data/maps/OldaleTown/scripts.pory"
	special EnableNationalPokedex
# 509 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 510 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 511 "data/maps/OldaleTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 512 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_6
# 513 "data/maps/OldaleTown/scripts.pory"
	waitfanfare
# 514 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_7
# 515 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 516 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, AnthroLeaves
# 517 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 518 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 519 "data/maps/OldaleTown/scripts.pory"
	removeobject 5
	goto OldaleTown_EventScript_EnterTop_1


OldaleTown_EventScript_EnterMid::
# 525 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x028, OldaleTown_EventScript_EnterMid_2
OldaleTown_EventScript_EnterMid_1:
# 573 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleTown_EventScript_EnterMid_2:
# 526 "data/maps/OldaleTown/scripts.pory"
	lockall
# 527 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 528 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, AnthrotechWalkRight4
# 529 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 530 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, Common_Movement_WalkDown2
# 531 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 532 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_0
# 533 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 534 "data/maps/OldaleTown/scripts.pory"
	delay 60
# 535 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, Common_Movement_WalkUp
# 536 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_1
# 537 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 538 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 539 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 540 "data/maps/OldaleTown/scripts.pory"
	delay 35
# 541 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, AnthroLookRight
# 542 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 543 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 544 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 545 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_2
# 546 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 547 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, WalkToPlayerMid
# 548 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 549 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterMid_Text_0
# 550 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 551 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, HikerDown
# 552 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 553 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterMid_Text_1
# 554 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 555 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, AnthroLookRight
# 556 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_5
# 557 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 558 "data/maps/OldaleTown/scripts.pory"
	special SetUnlockedPokedexFlags
# 559 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 560 "data/maps/OldaleTown/scripts.pory"
	special EnableNationalPokedex
# 561 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 562 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 563 "data/maps/OldaleTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 564 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_6
# 565 "data/maps/OldaleTown/scripts.pory"
	waitfanfare
# 566 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_7
# 567 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 568 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, AnthroLeaves
# 569 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 570 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 571 "data/maps/OldaleTown/scripts.pory"
	removeobject 5
	goto OldaleTown_EventScript_EnterMid_1


OldaleTown_EventScript_EnterBottom::
# 577 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x028, OldaleTown_EventScript_EnterBottom_2
OldaleTown_EventScript_EnterBottom_1:
# 625 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleTown_EventScript_EnterBottom_2:
# 578 "data/maps/OldaleTown/scripts.pory"
	lockall
# 579 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 580 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, AnthrotechWalkRight4
# 581 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 582 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, Common_Movement_WalkDown2
# 583 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 584 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_0
# 585 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 586 "data/maps/OldaleTown/scripts.pory"
	delay 60
# 587 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, Common_Movement_WalkUp
# 588 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_1
# 589 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 590 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 591 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 592 "data/maps/OldaleTown/scripts.pory"
	delay 35
# 593 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, AnthroLookRight
# 594 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 595 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 596 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 597 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_2
# 598 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 599 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, WalkToPlayerBottom
# 600 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 601 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterMid_Text_0
# 602 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 603 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, HikerDown
# 604 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 605 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterMid_Text_1
# 606 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 607 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, AnthroLookRight
# 608 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_5
# 609 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 610 "data/maps/OldaleTown/scripts.pory"
	special SetUnlockedPokedexFlags
# 611 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 612 "data/maps/OldaleTown/scripts.pory"
	special EnableNationalPokedex
# 613 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 614 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 615 "data/maps/OldaleTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 616 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_6
# 617 "data/maps/OldaleTown/scripts.pory"
	waitfanfare
# 618 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_7
# 619 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 620 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, AnthroLeaves
# 621 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 622 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 623 "data/maps/OldaleTown/scripts.pory"
	removeobject 5
	goto OldaleTown_EventScript_EnterBottom_1


OldaleTown_EventScript_EnterSuperBottom::
# 629 "data/maps/OldaleTown/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x028, OldaleTown_EventScript_EnterSuperBottom_2
OldaleTown_EventScript_EnterSuperBottom_1:
# 677 "data/maps/OldaleTown/scripts.pory"
	release
	return

OldaleTown_EventScript_EnterSuperBottom_2:
# 630 "data/maps/OldaleTown/scripts.pory"
	lockall
# 631 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 632 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, AnthrotechWalkRight4
# 633 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 634 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, Common_Movement_WalkDown2
# 635 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 636 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_0
# 637 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 638 "data/maps/OldaleTown/scripts.pory"
	delay 60
# 639 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, Common_Movement_WalkUp
# 640 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_1
# 641 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 642 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, Common_Movement_FaceLeft
# 643 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 644 "data/maps/OldaleTown/scripts.pory"
	delay 35
# 645 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, AnthroLookRight
# 646 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 647 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, Common_Movement_ExclamationMark
# 648 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 649 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_2
# 650 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 651 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, WalkToPlayerSuperBottom
# 652 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 653 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterMid_Text_0
# 654 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 655 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, HikerDown
# 656 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 657 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterMid_Text_1
# 658 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 659 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, AnthroLookRight
# 660 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_5
# 661 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 662 "data/maps/OldaleTown/scripts.pory"
	special SetUnlockedPokedexFlags
# 663 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 664 "data/maps/OldaleTown/scripts.pory"
	special EnableNationalPokedex
# 665 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 666 "data/maps/OldaleTown/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 667 "data/maps/OldaleTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 668 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_6
# 669 "data/maps/OldaleTown/scripts.pory"
	waitfanfare
# 670 "data/maps/OldaleTown/scripts.pory"
	msgbox OldaleTown_EventScript_EnterTop_Text_7
# 671 "data/maps/OldaleTown/scripts.pory"
	closemessage
# 672 "data/maps/OldaleTown/scripts.pory"
	applymovement 5, AnthroLeaves
# 673 "data/maps/OldaleTown/scripts.pory"
	waitmovement 0
# 674 "data/maps/OldaleTown/scripts.pory"
	setflag FLAG_UNUSED_0x028
# 675 "data/maps/OldaleTown/scripts.pory"
	removeobject 5
	goto OldaleTown_EventScript_EnterSuperBottom_1


# 680 "data/maps/OldaleTown/scripts.pory"
HikerDown:
# 681 "data/maps/OldaleTown/scripts.pory"
	face_down
	step_end

# 684 "data/maps/OldaleTown/scripts.pory"
GoBack:
# 685 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 688 "data/maps/OldaleTown/scripts.pory"
PlayerUp:
# 689 "data/maps/OldaleTown/scripts.pory"
	face_up
	step_end

# 692 "data/maps/OldaleTown/scripts.pory"
EnterTop:
# 693 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 693 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 693 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 693 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 693 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 693 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 693 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 693 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

# 697 "data/maps/OldaleTown/scripts.pory"
AnthrotechWalkRight4:
# 698 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 698 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 698 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 698 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 701 "data/maps/OldaleTown/scripts.pory"
AnthrotechWalkUp:
# 702 "data/maps/OldaleTown/scripts.pory"
	walk_up
	step_end

# 705 "data/maps/OldaleTown/scripts.pory"
WalkToPlayerTop:
# 706 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 706 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 707 "data/maps/OldaleTown/scripts.pory"
	walk_up
# 708 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 708 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 711 "data/maps/OldaleTown/scripts.pory"
WalkToPlayerMid:
# 712 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 712 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 712 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 712 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 715 "data/maps/OldaleTown/scripts.pory"
WalkToPlayerBottom:
# 716 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 716 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 717 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 718 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 718 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 721 "data/maps/OldaleTown/scripts.pory"
WalkToPlayerSuperBottom:
# 722 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 722 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 723 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 723 "data/maps/OldaleTown/scripts.pory"
	walk_down
# 724 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 724 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 727 "data/maps/OldaleTown/scripts.pory"
AnthroLookRight:
# 728 "data/maps/OldaleTown/scripts.pory"
	face_right
	step_end

# 731 "data/maps/OldaleTown/scripts.pory"
WalkToPlayer:
# 732 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 732 "data/maps/OldaleTown/scripts.pory"
	walk_right
# 732 "data/maps/OldaleTown/scripts.pory"
	walk_right
	step_end

# 735 "data/maps/OldaleTown/scripts.pory"
AnthroLeaves:
# 736 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 736 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 736 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 736 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 736 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 736 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 736 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 736 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 736 "data/maps/OldaleTown/scripts.pory"
	walk_left
# 736 "data/maps/OldaleTown/scripts.pory"
	walk_left
	step_end

OldaleTown_EventScript_NewSign_Text_0:
# 402 "data/maps/OldaleTown/scripts.pory"
	.string "Desola Town\n"
	.string "“A sign of what's to come.”$"

OldaleTown_EventScript_LibrarySign_Text_0:
# 409 "data/maps/OldaleTown/scripts.pory"
	.string "Desola Town Library: Where the past,\n"
	.string "present, and future of Ecodia is\l"
	.string "studied.$"

OldaleTown_EventScript_JoeySign_Text_0:
# 417 "data/maps/OldaleTown/scripts.pory"
	.string "Joey's Sanctuary.\n"
	.string "Have you found a Rattata?$"

OldaleTown_EventScript_OldWoman_Text_0:
# 425 "data/maps/OldaleTown/scripts.pory"
	.string "I used to live here, now my house is\n"
	.string "nothing but a pile of rubble.$"

OldaleTown_EventScript_LittleBoy_Text_0:
# 433 "data/maps/OldaleTown/scripts.pory"
	.string "Mommy says Desola Town is one of the\n"
	.string "last safe places in Ecodia.\p"
	.string "Even Treefall Woods is scary!$"

OldaleTown_EventScript_ScholarBoy_Text_0:
# 442 "data/maps/OldaleTown/scripts.pory"
	.string "This house has been abandoned for a\n"
	.string "long time, much like the Pokémon Mart.\p"
	.string "It's hard to imagine Desola Town will\n"
	.string "recover, but I have hope in Anthrotech!$"

OldaleTown_EventScript_Hiker_Text_0:
# 449 "data/maps/OldaleTown/scripts.pory"
	.string "I don't know what is going on at the\n"
	.string "pass, but I got turned away.$"

OldaleTown_EventScript_CantPass_Text_0:
# 463 "data/maps/OldaleTown/scripts.pory"
	.string "Watch out! The mountain pass is closed\n"
	.string "to travelers.\p"
	.string "Come back after the work crews disperse.$"

OldaleTown_EventScript_EnterTop_Text_0:
# 480 "data/maps/OldaleTown/scripts.pory"
	.string "???: Hmmm...$"

OldaleTown_EventScript_EnterTop_Text_1:
# 484 "data/maps/OldaleTown/scripts.pory"
	.string "???: I see...$"

OldaleTown_EventScript_EnterTop_Text_2:
# 493 "data/maps/OldaleTown/scripts.pory"
	.string "???: Oh! Hello there!$"

OldaleTown_EventScript_EnterTop_Text_3:
# 497 "data/maps/OldaleTown/scripts.pory"
	.string "???: Are you a resident of Desola Town?\p"
	.string "???: You're not? That's too bad. I was\n"
	.string "hoping to talk to a local about the\l"
	.string "state of the town.\p"
	.string "???: How rude, I didn't introduce\n"
	.string "myself! I am Mundungus, the founder and\l"
	.string "president of Anthrotech!\p"
	.string "Mundungus: I'm going around Ecodia,\n"
	.string "learning about the problems our cities\l"
	.string "face and how I can help solve them!$"

OldaleTown_EventScript_EnterTop_Text_4:
# 501 "data/maps/OldaleTown/scripts.pory"
	.string "Mundungus: For example, Desola Town\n"
	.string "seems a little empty, but I'm certain\l"
	.string "Anthrotech can work to bring some\l"
	.string "economic revitalization!$"

OldaleTown_EventScript_EnterTop_Text_5:
# 504 "data/maps/OldaleTown/scripts.pory"
	.string "Mundungus: In any case, what is your\n"
	.string "name?\p"
	.string "{PLAYER}? From Anthroh Town? Why,\n"
	.string "you and I have the same roots!\p"
	.string "Mundungus: I would love to hear about\n"
	.string "your ideas on how to make Ecodia a more\l"
	.string "resilient and sustainable region, how\l"
	.string "about you come talk to me later, in\l"
	.string "Treefall City?\p"
	.string "Mundungus: Here, take one of our\n"
	.string "innovations, the Pokédex!$"

OldaleTown_EventScript_EnterTop_Text_6:
# 512 "data/maps/OldaleTown/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

OldaleTown_EventScript_EnterTop_Text_7:
# 514 "data/maps/OldaleTown/scripts.pory"
	.string "Mundungus: I'll see you soon,\n"
	.string "{PLAYER}!$"

OldaleTown_EventScript_EnterMid_Text_0:
# 549 "data/maps/OldaleTown/scripts.pory"
	.string "???: Are you a resident of Desola Town?\p"
	.string "???: You're not? That's too bad. I was\n"
	.string "hoping to talk to a local and get their\l"
	.string "opinion on the state of the town.\p"
	.string "???: How rude, I didn't introduce\n"
	.string "myself! I am Mundungus, the founder and\l"
	.string "president of Anthrotech!\p"
	.string "Mundungus: I'm going around Ecodia,\n"
	.string "learning about the problems our cities\l"
	.string "face and how I can help solve them!$"

OldaleTown_EventScript_EnterMid_Text_1:
# 553 "data/maps/OldaleTown/scripts.pory"
	.string "Mundungus: For example, Desola Town\n"
	.string "seems a little empty, but I'm certain\l"
	.string "Anthrotech can work to bring some\l"
	.string "economic revitalization! Perhaps\l"
	.string "reopening the Pokémon Mart or\l"
	.string "constructing a resort for travelers?$"
