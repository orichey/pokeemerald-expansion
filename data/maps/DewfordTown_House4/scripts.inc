DewfordTown_House4_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_House4_OnTransition
	.byte 0

DewfordTown_House4_OnTransition:
	call_if_eq VAR_DEWFORD_TOWN_STATE, 1, DewfordTown_House4_EventScript_AddTropius
	end

DewfordTown_House4_EventScript_AddTropius::
	setobjectxyperm 1, 8, 5
	addobject 1
	goto_if_unset FLAG_UNUSED_0x030, DewfordTown_House4_EventScript_AddTropius_2
	goto_if_set FLAG_UNUSED_0x030, DewfordTown_House4_EventScript_AddTropius_3
DewfordTown_House4_EventScript_AddTropius_1:
	end

DewfordTown_House4_EventScript_AddTropius_2:
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
	goto DewfordTown_House4_EventScript_AddTropius_1

DewfordTown_House4_EventScript_AddTropius_3:
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_AROUND
	goto DewfordTown_House4_EventScript_AddTropius_1


DewfordTown_House4_EventScript_LittleGirl::
	lock
	faceplayer
	goto_if_unset FLAG_UNUSED_0x030, DewfordTown_House4_EventScript_LittleGirl_9
DewfordTown_House4_EventScript_LittleGirl_7:
	goto_if_unset FLAG_UNUSED_0x030, DewfordTown_House4_EventScript_LittleGirl_6
DewfordTown_House4_EventScript_LittleGirl_5:
	goto_if_set FLAG_UNUSED_0x030, DewfordTown_House4_EventScript_LittleGirl_4
DewfordTown_House4_EventScript_LittleGirl_1:
	release
	end

DewfordTown_House4_EventScript_LittleGirl_2:
	msgbox DewfordTown_House4_EventScript_LittleGirl_Text_0
	goto DewfordTown_House4_EventScript_LittleGirl_1

DewfordTown_House4_EventScript_LittleGirl_3:
	msgbox DewfordTown_House4_EventScript_LittleGirl_Text_1
	checkitem ITEM_AIR_BALLOON
	compare VAR_RESULT, TRUE
	goto_if_eq DewfordTown_House4_EventScript_LittleGirl_12
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_House4_EventScript_LittleGirl_13
	goto DewfordTown_House4_EventScript_LittleGirl_1

DewfordTown_House4_EventScript_LittleGirl_4:
	msgbox DewfordTown_House4_EventScript_LittleGirl_Text_5
	goto DewfordTown_House4_EventScript_LittleGirl_1

DewfordTown_House4_EventScript_LittleGirl_6:
	compare VAR_DEWFORD_TOWN_STATE, 1
	goto_if_eq DewfordTown_House4_EventScript_LittleGirl_3
	goto DewfordTown_House4_EventScript_LittleGirl_5

DewfordTown_House4_EventScript_LittleGirl_9:
	compare VAR_DEWFORD_TOWN_STATE, 0
	goto_if_eq DewfordTown_House4_EventScript_LittleGirl_2
	goto DewfordTown_House4_EventScript_LittleGirl_7

DewfordTown_House4_EventScript_LittleGirl_12:
	msgbox DewfordTown_House4_EventScript_LittleGirl_Text_2
	closemessage
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	applymovement 2, Common_Movement_FaceRight
	waitmovement 0
	delay 16
	applymovement 2, Common_Movement_WalkInPlaceRight
	waitmovement 0
	msgbox DewfordTown_House4_EventScript_LittleGirl_Text_3
	closemessage
	playmoncry SPECIES_TROPIUS, CRY_MODE_NORMAL
	waitmoncry
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 1
	waitmovement 0
	applymovement 2, Common_Movement_FacePlayer
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_AROUND
	waitmovement 0
	playse SE_EXIT
	fadescreenswapbuffers FADE_FROM_BLACK
	addvar VAR_UNUSED_0x40F8, 1
	setflag FLAG_UNUSED_0x030
	fadedefaultbgm
	goto DewfordTown_House4_EventScript_LittleGirl_1

DewfordTown_House4_EventScript_LittleGirl_13:
	msgbox DewfordTown_House4_EventScript_LittleGirl_Text_4
	closemessage
	waitmovement 0
	applymovement 2, Common_Movement_FaceRight
	waitmovement 0
	goto DewfordTown_House4_EventScript_LittleGirl_1


DewfordTown_House4_EventScript_Tropius::
	lock
	faceplayer
	playmoncry SPECIES_TROPIUS, CRY_MODE_NORMAL
	waitmoncry
	msgbox DewfordTown_House4_EventScript_Tropius_Text_0
	fadedefaultbgm
	closemessage
	waitmovement 0
	applymovement 1, Common_Movement_FaceLeft
	waitmovement 0
	release
	end


DewfordTown_House4_EventScript_OldMan::
	lock
	faceplayer
	msgbox DewfordTown_House4_EventScript_OldMan_Text_0
	release
	end


DewfordTown_House4_EventScript_LittleGirl_Text_0:
	.string "It's scary here! I want to leave!$"

DewfordTown_House4_EventScript_LittleGirl_Text_1:
	.string "This Tropius just came into our house!\n"
	.string "He makes me so happy!$"

DewfordTown_House4_EventScript_LittleGirl_Text_2:
	.string "Oh? Is that balloon for me? I love it!\p"
	.string "Ok, I'll let the Tropius go.$"

DewfordTown_House4_EventScript_LittleGirl_Text_3:
	.string "Goodbye, Tropius!$"

DewfordTown_House4_EventScript_LittleGirl_Text_4:
	.string "I won't ever let him go!$"

DewfordTown_House4_EventScript_LittleGirl_Text_5:
	.string "Thank you for the balloon, but I do miss\n"
	.string "that Tropius...$"

DewfordTown_House4_EventScript_Tropius_Text_0:
	.string "The Tropius roared with glee!$"

DewfordTown_House4_EventScript_OldMan_Text_0:
	.string "This is no place to raise a child, but Stormy isn't able to evacuate people quickly enough.\pI don't know who to blame!$"
