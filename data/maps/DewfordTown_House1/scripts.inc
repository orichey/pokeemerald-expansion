DewfordTown_House1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_House1_OnTransition
	.byte 0

DewfordTown_House1_OnTransition:
	call_if_eq VAR_DEWFORD_TOWN_STATE, 1, DewfordTown_House1_EventScript_AddMantine
	end

DewfordTown_House1_EventScript_AddMantine::
	setobjectxyperm 3, 3, 5
	setobjectxyperm 2, 3, 4
	setobjectxyperm 1, 4, 5
	addobject 3
	setobjectmovementtype 3, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	end


DewfordTown_House1_EventScript_Man::
	lockall
	compare VAR_DEWFORD_TOWN_STATE, 0
	goto_if_eq DewfordTown_House1_EventScript_Man_2
	compare VAR_DEWFORD_TOWN_STATE, 1
	goto_if_eq DewfordTown_House1_EventScript_Man_6
DewfordTown_House1_EventScript_Man_5:
	goto_if_set FLAG_UNUSED_0x032, DewfordTown_House1_EventScript_Man_4
DewfordTown_House1_EventScript_Man_1:
	releaseall
	end

DewfordTown_House1_EventScript_Man_2:
	faceplayer
	msgbox DewfordTown_House1_EventScript_Man_Text_0
	goto DewfordTown_House1_EventScript_Man_1

DewfordTown_House1_EventScript_Man_3:
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	applymovement 2, Common_Movement_WalkInPlaceDown
	waitmovement 0
	applymovement 2, Common_Movement_WalkInPlaceDown
	waitmovement 0
	applymovement 2, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 15
	msgbox DewfordTown_House1_EventScript_Man_Text_1
	closemessage
	applymovement 1, Common_Movement_WalkInPlaceLeft
	waitmovement 0
	delay 15
	msgbox DewfordTown_House1_EventScript_Man_Text_2
	closemessage
	applymovement 2, Common_Movement_FacePlayer
	applymovement 2, Common_Movement_ExclamationMark
	waitmovement 0
	delay 15
	msgbox DewfordTown_House1_EventScript_Man_Text_3
	trainerbattle_no_intro TRAINER_THALIA_3, Ishmael_Loss
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	applymovement 2, Common_Movement_FaceDown
	waitmovement 0
	delay 15
	applymovement 2, Common_Movement_WalkInPlaceDown
	waitmovement 0
	delay 15
	applymovement 2, Common_Movement_FacePlayer
	waitmovement 0
	msgbox DewfordTown_House1_EventScript_Man_Text_4
	closemessage
	delay 15
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 3
	waitmovement 0
	playse SE_EXIT
	waitse
	fadescreenswapbuffers FADE_FROM_BLACK
	addvar VAR_UNUSED_0x40F8, 1
	setflag FLAG_UNUSED_0x032
	setflag FLAG_UNUSED_0x033
	fadedefaultbgm
	goto DewfordTown_House1_EventScript_Man_1

DewfordTown_House1_EventScript_Man_4:
	faceplayer
	msgbox DewfordTown_House1_EventScript_Man_Text_5
	goto DewfordTown_House1_EventScript_Man_1

DewfordTown_House1_EventScript_Man_6:
	goto_if_unset FLAG_UNUSED_0x032, DewfordTown_House1_EventScript_Man_3
	goto DewfordTown_House1_EventScript_Man_5


DewfordTown_House1_EventScript_Woman::
	lockall
	faceplayer
	compare VAR_DEWFORD_TOWN_STATE, 0
	goto_if_eq DewfordTown_House1_EventScript_Woman_2
	compare VAR_DEWFORD_TOWN_STATE, 1
	goto_if_eq DewfordTown_House1_EventScript_Woman_6
DewfordTown_House1_EventScript_Woman_5:
	goto_if_set FLAG_UNUSED_0x032, DewfordTown_House1_EventScript_Woman_4
DewfordTown_House1_EventScript_Woman_1:
	releaseall
	end

DewfordTown_House1_EventScript_Woman_2:
	msgbox DewfordTown_House1_EventScript_Woman_Text_0
	goto DewfordTown_House1_EventScript_Woman_1

DewfordTown_House1_EventScript_Woman_3:
	msgbox DewfordTown_House1_EventScript_Woman_Text_1
	applymovement 1, Common_Movement_FaceOriginalDirection
	goto DewfordTown_House1_EventScript_Woman_1

DewfordTown_House1_EventScript_Woman_4:
	msgbox DewfordTown_House1_EventScript_Woman_Text_2
	goto DewfordTown_House1_EventScript_Woman_1

DewfordTown_House1_EventScript_Woman_6:
	goto_if_unset FLAG_UNUSED_0x032, DewfordTown_House1_EventScript_Woman_3
	goto DewfordTown_House1_EventScript_Woman_5


DewfordTown_House1_EventScript_Mantine::
	lockall
	faceplayer
	playmoncry SPECIES_MANTINE, CRY_MODE_NORMAL
	waitmoncry
	msgbox DewfordTown_House1_EventScript_Mantine_Text_0
	closemessage
	applymovement 3, Common_Movement_FaceOriginalDirection
	releaseall
	end


DewfordTown_House1_EventScript_Man_Text_0:
	.string "My wife and I are planning on leaving\n"
	.string "Seaspray Town as soon as possible.$"

DewfordTown_House1_EventScript_Man_Text_1:
	.string "Come on, honey! This Mantine is our\n"
	.string "ticket out of here!$"

DewfordTown_House1_EventScript_Man_Text_2:
	.string "I don't feel so good about this...$"

DewfordTown_House1_EventScript_Man_Text_3:
	.string "Oh? This is Stormy's Mantine?\p"
	.string "Well, you'll have to fight me to get it\n"
	.string "back to her!$"

DewfordTown_House1_EventScript_Man_Text_4:
	.string "You have me beat!\n"
	.string "I'll let the Mantine go.\l"
	.string "Could you please talk to Stormy for me,\l"
	.string "though?$"

DewfordTown_House1_EventScript_Man_Text_5:
	.string "My wife and I are still looking to get\n"
	.string "out of here as soon as we can.$"

DewfordTown_House1_EventScript_Woman_Text_0:
	.string "My husband has been trying to get\n"
	.string "Stormy to fly us away from here ever\l"
	.string "since the sea started to rise.\p"
	.string "I loved living here when we first moved,\n"
	.string "if only there was something we could\l"
	.string "have done.$"

DewfordTown_House1_EventScript_Woman_Text_1:
	.string "Eek! I don't trust this Mantine!$"

DewfordTown_House1_EventScript_Woman_Text_2:
	.string "I'm glad I don't have the theft of that\n"
	.string "Mantine weighing on my conscience, but\l"
	.string "I sure would like to leave Seaspray\l"
	.string "Town.$"

DewfordTown_House1_EventScript_Mantine_Text_0:
	.string "The Mantine looks scared!$"

Ishmael_Loss::
	.string "Grr...\n"
	.string "Well, take it!$"
