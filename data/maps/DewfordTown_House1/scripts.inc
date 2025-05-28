# 1 "data/maps/DewfordTown_House1/scripts.pory"

# 2 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_MapScripts::
# 3 "data/maps/DewfordTown_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_House1_OnTransition
# 4 "data/maps/DewfordTown_House1/scripts.pory"
	.byte 0
# 5 "data/maps/DewfordTown_House1/scripts.pory"

# 6 "data/maps/DewfordTown_House1/scripts.pory"
DewfordTown_House1_OnTransition:
# 7 "data/maps/DewfordTown_House1/scripts.pory"
	call_if_eq VAR_DEWFORD_TOWN_STATE, 1, DewfordTown_House1_EventScript_AddMantine
# 8 "data/maps/DewfordTown_House1/scripts.pory"
	end

DewfordTown_House1_EventScript_AddMantine::
# 11 "data/maps/DewfordTown_House1/scripts.pory"
	setobjectxyperm 3, 3, 5
# 12 "data/maps/DewfordTown_House1/scripts.pory"
	setobjectxyperm 2, 3, 4
# 13 "data/maps/DewfordTown_House1/scripts.pory"
	setobjectxyperm 1, 4, 5
# 14 "data/maps/DewfordTown_House1/scripts.pory"
	addobject 3
# 15 "data/maps/DewfordTown_House1/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 16 "data/maps/DewfordTown_House1/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
# 17 "data/maps/DewfordTown_House1/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	end


DewfordTown_House1_EventScript_Man::
# 22 "data/maps/DewfordTown_House1/scripts.pory"
	lock
# 23 "data/maps/DewfordTown_House1/scripts.pory"
	compare VAR_DEWFORD_TOWN_STATE, 0
	goto_if_eq DewfordTown_House1_EventScript_Man_2
# 27 "data/maps/DewfordTown_House1/scripts.pory"
	compare VAR_DEWFORD_TOWN_STATE, 1
	goto_if_eq DewfordTown_House1_EventScript_Man_6
DewfordTown_House1_EventScript_Man_5:
# 72 "data/maps/DewfordTown_House1/scripts.pory"
	goto_if_set FLAG_UNUSED_0x032, DewfordTown_House1_EventScript_Man_4
DewfordTown_House1_EventScript_Man_1:
# 76 "data/maps/DewfordTown_House1/scripts.pory"
	release
	end

DewfordTown_House1_EventScript_Man_2:
# 24 "data/maps/DewfordTown_House1/scripts.pory"
	faceplayer
# 25 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_EventScript_Man_Text_0
	goto DewfordTown_House1_EventScript_Man_1

DewfordTown_House1_EventScript_Man_3:
# 28 "data/maps/DewfordTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 29 "data/maps/DewfordTown_House1/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 30 "data/maps/DewfordTown_House1/scripts.pory"
	waitmovement 0
# 31 "data/maps/DewfordTown_House1/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 32 "data/maps/DewfordTown_House1/scripts.pory"
	waitmovement 0
# 33 "data/maps/DewfordTown_House1/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 34 "data/maps/DewfordTown_House1/scripts.pory"
	waitmovement 0
# 35 "data/maps/DewfordTown_House1/scripts.pory"
	delay 15
# 36 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_EventScript_Man_Text_1
# 37 "data/maps/DewfordTown_House1/scripts.pory"
	closemessage
# 38 "data/maps/DewfordTown_House1/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 39 "data/maps/DewfordTown_House1/scripts.pory"
	waitmovement 0
# 40 "data/maps/DewfordTown_House1/scripts.pory"
	delay 15
# 41 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_EventScript_Man_Text_2
# 42 "data/maps/DewfordTown_House1/scripts.pory"
	closemessage
# 43 "data/maps/DewfordTown_House1/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 44 "data/maps/DewfordTown_House1/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 45 "data/maps/DewfordTown_House1/scripts.pory"
	waitmovement 0
# 46 "data/maps/DewfordTown_House1/scripts.pory"
	delay 15
# 47 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_EventScript_Man_Text_3
# 48 "data/maps/DewfordTown_House1/scripts.pory"
	trainerbattle_no_intro TRAINER_THALIA_3, Ishmael_Loss
# 49 "data/maps/DewfordTown_House1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 50 "data/maps/DewfordTown_House1/scripts.pory"
	applymovement 2, Common_Movement_FaceDown
# 51 "data/maps/DewfordTown_House1/scripts.pory"
	waitmovement 0
# 52 "data/maps/DewfordTown_House1/scripts.pory"
	delay 15
# 53 "data/maps/DewfordTown_House1/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceDown
# 54 "data/maps/DewfordTown_House1/scripts.pory"
	waitmovement 0
# 55 "data/maps/DewfordTown_House1/scripts.pory"
	delay 15
# 56 "data/maps/DewfordTown_House1/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 57 "data/maps/DewfordTown_House1/scripts.pory"
	waitmovement 0
# 58 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_EventScript_Man_Text_4
# 59 "data/maps/DewfordTown_House1/scripts.pory"
	closemessage
# 60 "data/maps/DewfordTown_House1/scripts.pory"
	delay 15
# 61 "data/maps/DewfordTown_House1/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 62 "data/maps/DewfordTown_House1/scripts.pory"
	removeobject 3
# 63 "data/maps/DewfordTown_House1/scripts.pory"
	waitmovement 0
# 64 "data/maps/DewfordTown_House1/scripts.pory"
	playse SE_EXIT
# 65 "data/maps/DewfordTown_House1/scripts.pory"
	waitse
# 66 "data/maps/DewfordTown_House1/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 67 "data/maps/DewfordTown_House1/scripts.pory"
	addvar VAR_UNUSED_0x40F8, 1
# 68 "data/maps/DewfordTown_House1/scripts.pory"
	setflag FLAG_UNUSED_0x032
# 69 "data/maps/DewfordTown_House1/scripts.pory"
	setflag FLAG_UNUSED_0x033
# 70 "data/maps/DewfordTown_House1/scripts.pory"
	fadedefaultbgm
	goto DewfordTown_House1_EventScript_Man_1

DewfordTown_House1_EventScript_Man_4:
# 73 "data/maps/DewfordTown_House1/scripts.pory"
	faceplayer
# 74 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_EventScript_Man_Text_5
	goto DewfordTown_House1_EventScript_Man_1

DewfordTown_House1_EventScript_Man_6:
# 27 "data/maps/DewfordTown_House1/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x032, DewfordTown_House1_EventScript_Man_3
	goto DewfordTown_House1_EventScript_Man_5


DewfordTown_House1_EventScript_Woman::
# 85 "data/maps/DewfordTown_House1/scripts.pory"
	lock
# 86 "data/maps/DewfordTown_House1/scripts.pory"
	faceplayer
# 87 "data/maps/DewfordTown_House1/scripts.pory"
	compare VAR_DEWFORD_TOWN_STATE, 0
	goto_if_eq DewfordTown_House1_EventScript_Woman_2
# 90 "data/maps/DewfordTown_House1/scripts.pory"
	compare VAR_DEWFORD_TOWN_STATE, 1
	goto_if_eq DewfordTown_House1_EventScript_Woman_6
DewfordTown_House1_EventScript_Woman_5:
# 94 "data/maps/DewfordTown_House1/scripts.pory"
	goto_if_set FLAG_UNUSED_0x032, DewfordTown_House1_EventScript_Woman_4
DewfordTown_House1_EventScript_Woman_1:
# 97 "data/maps/DewfordTown_House1/scripts.pory"
	release
	end

DewfordTown_House1_EventScript_Woman_2:
# 88 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_EventScript_Woman_Text_0
	goto DewfordTown_House1_EventScript_Woman_1

DewfordTown_House1_EventScript_Woman_3:
# 91 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_EventScript_Woman_Text_1
# 92 "data/maps/DewfordTown_House1/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
	goto DewfordTown_House1_EventScript_Woman_1

DewfordTown_House1_EventScript_Woman_4:
# 95 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_EventScript_Woman_Text_2
	goto DewfordTown_House1_EventScript_Woman_1

DewfordTown_House1_EventScript_Woman_6:
# 90 "data/maps/DewfordTown_House1/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x032, DewfordTown_House1_EventScript_Woman_3
	goto DewfordTown_House1_EventScript_Woman_5


DewfordTown_House1_EventScript_Mantine::
# 102 "data/maps/DewfordTown_House1/scripts.pory"
	lock
# 103 "data/maps/DewfordTown_House1/scripts.pory"
	faceplayer
# 104 "data/maps/DewfordTown_House1/scripts.pory"
	playmoncry SPECIES_MANTINE, CRY_MODE_NORMAL
# 105 "data/maps/DewfordTown_House1/scripts.pory"
	waitmoncry
# 106 "data/maps/DewfordTown_House1/scripts.pory"
	msgbox DewfordTown_House1_EventScript_Mantine_Text_0
# 107 "data/maps/DewfordTown_House1/scripts.pory"
	closemessage
# 108 "data/maps/DewfordTown_House1/scripts.pory"
	applymovement 3, Common_Movement_FaceOriginalDirection
# 109 "data/maps/DewfordTown_House1/scripts.pory"
	release
	end


DewfordTown_House1_EventScript_Man_Text_0:
# 25 "data/maps/DewfordTown_House1/scripts.pory"
	.string "My wife and I are planning on leaving\n"
	.string "Seaspray Town as soon as possible.$"

DewfordTown_House1_EventScript_Man_Text_1:
# 36 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Come on, honey! This Mantine is our\n"
	.string "ticket out of here!$"

DewfordTown_House1_EventScript_Man_Text_2:
# 41 "data/maps/DewfordTown_House1/scripts.pory"
	.string "I don't feel so good about this...$"

DewfordTown_House1_EventScript_Man_Text_3:
# 47 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Oh? This is Stormy's Mantine?\p"
	.string "Well, you'll have to fight me to get it\n"
	.string "back to her!$"

DewfordTown_House1_EventScript_Man_Text_4:
# 58 "data/maps/DewfordTown_House1/scripts.pory"
	.string "You have me beat!\n"
	.string "I'll let the Mantine go.\l"
	.string "Could you please talk to Stormy for me,\l"
	.string "though?$"

DewfordTown_House1_EventScript_Man_Text_5:
# 74 "data/maps/DewfordTown_House1/scripts.pory"
	.string "My wife and I are still looking to get\n"
	.string "out of here as soon as we can.$"

DewfordTown_House1_EventScript_Woman_Text_0:
# 88 "data/maps/DewfordTown_House1/scripts.pory"
	.string "My husband has been trying to get\n"
	.string "Stormy to fly us away from here ever\l"
	.string "since the sea started to rise.\p"
	.string "I loved living here when we first moved,\n"
	.string "if only there was something we could\l"
	.string "have done.$"

DewfordTown_House1_EventScript_Woman_Text_1:
# 91 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Eek! I don't trust this Mantine!$"

DewfordTown_House1_EventScript_Woman_Text_2:
# 95 "data/maps/DewfordTown_House1/scripts.pory"
	.string "I'm glad I don't have the theft of that\n"
	.string "Mantine weighing on my conscience, but\l"
	.string "I sure would like to leave Seaspray\l"
	.string "Town.$"

DewfordTown_House1_EventScript_Mantine_Text_0:
# 106 "data/maps/DewfordTown_House1/scripts.pory"
	.string "The Mantine looks scared!$"

Ishmael_Loss::
# 80 "data/maps/DewfordTown_House1/scripts.pory"
	.string "Grr...\n"
	.string "Well, take it!$"
