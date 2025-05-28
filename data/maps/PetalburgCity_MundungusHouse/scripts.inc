# 1 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 2 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
.set LOCALID_MUNDUNGUS, 1
# 3 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 4 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_MapScripts::
# 5 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_MundungusHouse_OnTransition
# 6 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_MundungusHouse_OnWarp
# 7 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_MundungusHouse_OnFrame
# 8 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.byte 0
# 9 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 10 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_OnTransition:
# 11 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	call_if_eq VAR_DEVON_CORP_3F_STATE, 0, PetalburgCity_MundungusHouse_EventScript_SetEmployeePos
# 12 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	end
# 13 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 14 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_EventScript_SetEmployeePos::
# 15 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	setobjectxyperm LOCALID_MUNDUNGUS, 9, 7
# 16 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	setobjectmovementtype LOCALID_MUNDUNGUS, MOVEMENT_TYPE_FACE_UP
# 17 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	return
# 18 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 19 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_OnWarp:
# 20 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, PetalburgCity_MundungusHouse_EventScript_PlayerFaceEast
# 21 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.2byte 0
# 22 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 23 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_EventScript_PlayerFaceEast::
# 24 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 25 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	end
# 26 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 27 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_OnFrame:
# 28 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, PetalburgCity_MundungusHouse_EventScript_MeetPresident
# 29 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.2byte 0
# 30 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 31 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_EventScript_MeetPresident::
# 32 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	lockall
# 33 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 34 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	applymovement LOCALID_MUNDUNGUS, PetalburgCity_MundungusHouse_Movement_LeadPlayerToPresident
# 35 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_MundungusHouse_Movement_PlayerFollowToPresident
# 36 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	waitmovement 0
# 37 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    special SpawnCameraObject
# 38 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgCity_MundungusHouse_Movement_CameraPanRight
# 39 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	fadedefaultbgm
# 40 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    delay 60
# 41 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	msgbox PetalburgCity_MundungusHouse_Text_MrStoneIHaveFavor, MSGBOX_DEFAULT
# 42 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	giveitem ITEM_POKEHM
# 43 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	msgbox PetalburgCity_MundungusHouse_Text_MrStoneExplainPokenavRestUp, MSGBOX_DEFAULT
# 44 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	closemessage
# 45 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 46 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 47 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 48 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 49 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 50 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 51 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 52 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 53 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 54 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    applymovement OBJ_EVENT_ID_CAMERA, PetalburgCity_MundungusHouse_Movement_CameraPanLeft
# 55 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    waitmovement 0
# 56 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    special RemoveCameraObject
# 57 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	releaseall
# 58 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	end
# 59 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 60 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Movement_CameraPanLeft:
# 61 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    walk_left
# 62 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    walk_left
# 63 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    step_end
# 64 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 65 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Movement_CameraPanRight:
# 66 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    walk_right
# 67 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    walk_right
# 68 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    step_end
# 69 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 70 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Movement_LeadPlayerToPresident:
# 71 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	walk_up
# 72 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	walk_right
# 73 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	walk_right
# 74 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    walk_up
# 75 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    walk_up
# 76 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	walk_in_place_faster_left
# 77 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	step_end
# 78 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 79 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Movement_PlayerFollowToPresident:
# 80 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	walk_up
# 81 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    walk_up
# 82 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    walk_left
# 83 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    walk_left
# 84 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    walk_left
# 85 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    walk_up
# 86 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    walk_up
# 87 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
    walk_in_place_faster_right
# 88 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	step_end
# 89 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 90 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Movement_PlayerApproachDesk:
# 91 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	delay_16
# 92 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	delay_16
# 93 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	walk_down
# 94 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	walk_down
# 95 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	walk_in_place_faster_right
# 96 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	step_end
# 97 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 98 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_EventScript_MrStone::
# 99 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	lock
# 100 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	faceplayer
# 101 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_EXP_SHARE, PetalburgCity_MundungusHouse_EventScript_MrStoneAfterFavor
# 102 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, PetalburgCity_MundungusHouse_EventScript_GiveExpShare
# 103 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	msgbox PetalburgCity_MundungusHouse_Text_CountingOnYou, MSGBOX_DEFAULT
# 104 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	closemessage
# 105 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
# 106 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	waitmovement 0
# 107 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	release
# 108 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	end
# 109 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 110 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_EventScript_GiveExpShare::
# 111 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	msgbox PetalburgCity_MundungusHouse_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
# 112 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 113 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 114 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
# 115 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	msgbox PetalburgCity_MundungusHouse_Text_ExplainExpShare, MSGBOX_DEFAULT
# 116 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	closemessage
# 117 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 118 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	waitmovement 0
# 119 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	release
# 120 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	end
# 121 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 122 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_EventScript_MrStoneAfterFavor::
# 123 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	msgbox PetalburgCity_MundungusHouse_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
# 124 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	closemessage
# 125 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 126 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	waitmovement 0
# 127 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	release
# 128 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	end
# 129 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 130 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_EventScript_Employee::
# 131 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	lock
# 132 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	faceplayer
# 133 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, PetalburgCity_MundungusHouse_EventScript_EmployeeBalls
# 134 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	msgbox PetalburgCity_MundungusHouse_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
# 135 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	release
# 136 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	end
# 137 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 138 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_EventScript_EmployeeBalls::
# 139 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	msgbox PetalburgCity_MundungusHouse_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
# 140 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	release
# 141 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	end
# 142 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 143 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_EventScript_RareRocksDisplay::
# 144 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	msgbox PetalburgCity_MundungusHouse_Text_RareRocksDisplay, MSGBOX_SIGN
# 145 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	end
# 146 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 147 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Text_MrStoneIHaveFavor:
# 148 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Mundungus: Thank you again, {PLAYER}.\n"
# 149 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Those hooligans in orange have been\l"
# 150 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "getting in the way of Anthrotech all\l"
# 151 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "throughout Ecodia.\p"
# 152 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Don't they understand we just want to\n"
# 153 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "make the world a better place?\p"
# 154 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "In any case, I appreciate you helping\n"
# 155 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "me out. Anthrotech has offices in\l"
# 156 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "several cities, and this office has\l"
# 157 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "been focused on some new tech that\l"
# 158 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "could really change how we interact\l"
# 159 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "with our Pokémon.\p"
# 160 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "I'd like you to have a prototype!$"
# 161 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 162 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Text_ReceivedPokenav:
# 163 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "{PLAYER} received a PokéHM!$"
# 164 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 165 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Text_MrStoneExplainPokenavRestUp:
# 166 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Mundungus: That device, the PokéHM,\n"
# 167 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "allows any Pokémon to use any HM in\l"
# 168 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "the field, regardless of if they know\l"
# 169 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "the move!\p"
# 170 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Imagine the possibilities, a Golem using\n"
# 171 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Fly, or a Torkoal using Surf!\p"
# 172 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Of course, you still need to have\n"
# 173 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "the HM in your bag for this to work.\p"
# 174 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "If you continue to help Anthrotech,\n"
# 175 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "I will see to it that you get to test\l"
# 176 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "more of our products.\p"
# 177 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "There are many more vile protestors\n"
# 178 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "in Ecodia, and I trust you to protect\l"
# 179 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "progress and innovation!$"
# 180 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 181 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Text_MrStoneGoWithCautionAndCare:
# 182 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "MR. STONE: Well, then, {PLAYER}{KUN},\n"
# 183 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "go with caution and care!$"
# 184 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 185 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Text_CountingOnYou:
# 186 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Mundungus: Thank you again, {PLAYER}!$"
# 187 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 188 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Text_ThankYouForDeliveringLetter:
# 189 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "MR. STONE: You delivered my LETTER?\n"
# 190 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Thank you kindly!\p"
# 191 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "This is my way of thanking you.\n"
# 192 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "It should help you, a TRAINER.$"
# 193 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 194 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Text_ExplainExpShare:
# 195 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "MR. STONE: A POKéMON holding that\n"
# 196 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "EXP. SHARE will be given some of the\l"
# 197 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "EXP Points from battle.\p"
# 198 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "It will get EXP Points even if it didn't\n"
# 199 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "actually battle.\p"
# 200 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "I would say EXP. SHARE is quite useful\n"
# 201 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "for raising weak POKéMON.$"
# 202 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 203 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Text_NotFamiliarWithTrends:
# 204 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "MR. STONE: Since my youth, I've immersed\n"
# 205 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "myself in work.\p"
# 206 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Consequently, I'm not familiar with\n"
# 207 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "trends and that sort of thing.\p"
# 208 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "But do young people all want to be\n"
# 209 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "TRAINERS in the POKéMON LEAGUE?$"
# 210 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 211 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Text_ThisIs3rdFloorWaitHere:
# 212 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "This is the DEVON CORPORATION's\n"
# 213 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "third floor.\p"
# 214 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Our PRESIDENT's OFFICE is on\n"
# 215 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "this floor.\p"
# 216 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Anyway, I can't tell you how much I'm\n"
# 217 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "grateful for what you've done.\p"
# 218 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Um… By the way, that parcel\n"
# 219 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "you got back for us…\p"
# 220 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Could I get you to deliver that to\n"
# 221 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "the SHIPYARD in SLATEPORT?\p"
# 222 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "It would be awful if those robbers\n"
# 223 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "tried to take it again.\p"
# 224 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Uh… Hehehe, so, uh, could I count\n"
# 225 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "on you to do that for me?\p"
# 226 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Oh, that's right.\n"
# 227 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Could you wait here a second?$"
# 228 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 229 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Text_WordWithPresidentComeWithMe:
# 230 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Our PRESIDENT would like to have\n"
# 231 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "a word with you.\p"
# 232 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Please come with me.$"
# 233 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 234 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Text_PleaseGoAhead:
# 235 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "Please, go ahead.$"
# 236 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 237 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Text_VisitCaptSternShipyard:
# 238 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "If you visit the SHIPYARD in SLATEPORT,\n"
# 239 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "you should go see CAPT. STERN.$"
# 240 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 241 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Text_RepeatAndTimerHugelyPopular:
# 242 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "DEVON's new products, the REPEAT BALL\n"
# 243 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "and TIMER BALL, have become hugely\l"
# 244 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "popular among TRAINERS.$"
# 245 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"

# 246 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
PetalburgCity_MundungusHouse_Text_RareRocksDisplay:
# 247 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "It's a collection of rare rocks and\n"
# 248 "data/maps/PetalburgCity_MundungusHouse/scripts.pory"
	.string "stones assembled by the PRESIDENT.$"
