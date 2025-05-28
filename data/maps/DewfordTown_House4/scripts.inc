# 1 "data/maps/DewfordTown_House4/scripts.pory"

# 2 "data/maps/DewfordTown_House4/scripts.pory"
DewfordTown_House4_MapScripts::
# 3 "data/maps/DewfordTown_House4/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_House4_OnTransition
# 4 "data/maps/DewfordTown_House4/scripts.pory"
	.byte 0
# 5 "data/maps/DewfordTown_House4/scripts.pory"

# 6 "data/maps/DewfordTown_House4/scripts.pory"
DewfordTown_House4_OnTransition:
# 7 "data/maps/DewfordTown_House4/scripts.pory"
	call_if_eq VAR_DEWFORD_TOWN_STATE, 1, DewfordTown_House4_EventScript_AddTropius
# 8 "data/maps/DewfordTown_House4/scripts.pory"
	end

DewfordTown_House4_EventScript_AddTropius::
# 12 "data/maps/DewfordTown_House4/scripts.pory"
	setobjectxyperm 1, 8, 5
# 13 "data/maps/DewfordTown_House4/scripts.pory"
	addobject 1
# 14 "data/maps/DewfordTown_House4/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x030, DewfordTown_House4_EventScript_AddTropius_2
# 17 "data/maps/DewfordTown_House4/scripts.pory"
	goto_if_set FLAG_UNUSED_0x030, DewfordTown_House4_EventScript_AddTropius_3
DewfordTown_House4_EventScript_AddTropius_1:
	end

DewfordTown_House4_EventScript_AddTropius_2:
# 15 "data/maps/DewfordTown_House4/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
	goto DewfordTown_House4_EventScript_AddTropius_1

DewfordTown_House4_EventScript_AddTropius_3:
# 18 "data/maps/DewfordTown_House4/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_AROUND
	goto DewfordTown_House4_EventScript_AddTropius_1


DewfordTown_House4_EventScript_LittleGirl::
# 24 "data/maps/DewfordTown_House4/scripts.pory"
	lock
# 25 "data/maps/DewfordTown_House4/scripts.pory"
	faceplayer
# 26 "data/maps/DewfordTown_House4/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x030, DewfordTown_House4_EventScript_LittleGirl_9
DewfordTown_House4_EventScript_LittleGirl_7:
# 29 "data/maps/DewfordTown_House4/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x030, DewfordTown_House4_EventScript_LittleGirl_6
DewfordTown_House4_EventScript_LittleGirl_5:
# 66 "data/maps/DewfordTown_House4/scripts.pory"
	goto_if_set FLAG_UNUSED_0x030, DewfordTown_House4_EventScript_LittleGirl_4
DewfordTown_House4_EventScript_LittleGirl_1:
# 69 "data/maps/DewfordTown_House4/scripts.pory"
	release
	end

DewfordTown_House4_EventScript_LittleGirl_2:
# 27 "data/maps/DewfordTown_House4/scripts.pory"
	msgbox DewfordTown_House4_EventScript_LittleGirl_Text_0
	goto DewfordTown_House4_EventScript_LittleGirl_1

DewfordTown_House4_EventScript_LittleGirl_3:
# 30 "data/maps/DewfordTown_House4/scripts.pory"
	msgbox DewfordTown_House4_EventScript_LittleGirl_Text_1
# 31 "data/maps/DewfordTown_House4/scripts.pory"
	checkitem ITEM_AIR_BALLOON
# 32 "data/maps/DewfordTown_House4/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DewfordTown_House4_EventScript_LittleGirl_12
# 58 "data/maps/DewfordTown_House4/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq DewfordTown_House4_EventScript_LittleGirl_13
	goto DewfordTown_House4_EventScript_LittleGirl_1

DewfordTown_House4_EventScript_LittleGirl_4:
# 67 "data/maps/DewfordTown_House4/scripts.pory"
	msgbox DewfordTown_House4_EventScript_LittleGirl_Text_5
	goto DewfordTown_House4_EventScript_LittleGirl_1

DewfordTown_House4_EventScript_LittleGirl_6:
# 29 "data/maps/DewfordTown_House4/scripts.pory"
	compare VAR_DEWFORD_TOWN_STATE, 1
	goto_if_eq DewfordTown_House4_EventScript_LittleGirl_3
	goto DewfordTown_House4_EventScript_LittleGirl_5

DewfordTown_House4_EventScript_LittleGirl_9:
# 26 "data/maps/DewfordTown_House4/scripts.pory"
	compare VAR_DEWFORD_TOWN_STATE, 0
	goto_if_eq DewfordTown_House4_EventScript_LittleGirl_2
	goto DewfordTown_House4_EventScript_LittleGirl_7

DewfordTown_House4_EventScript_LittleGirl_12:
# 33 "data/maps/DewfordTown_House4/scripts.pory"
	msgbox DewfordTown_House4_EventScript_LittleGirl_Text_2
# 34 "data/maps/DewfordTown_House4/scripts.pory"
	closemessage
# 35 "data/maps/DewfordTown_House4/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 36 "data/maps/DewfordTown_House4/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 37 "data/maps/DewfordTown_House4/scripts.pory"
	waitmovement 0
# 38 "data/maps/DewfordTown_House4/scripts.pory"
	delay 16
# 39 "data/maps/DewfordTown_House4/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceRight
# 40 "data/maps/DewfordTown_House4/scripts.pory"
	waitmovement 0
# 41 "data/maps/DewfordTown_House4/scripts.pory"
	msgbox DewfordTown_House4_EventScript_LittleGirl_Text_3
# 42 "data/maps/DewfordTown_House4/scripts.pory"
	closemessage
# 43 "data/maps/DewfordTown_House4/scripts.pory"
	playmoncry SPECIES_TROPIUS, CRY_MODE_NORMAL
# 44 "data/maps/DewfordTown_House4/scripts.pory"
	waitmoncry
# 45 "data/maps/DewfordTown_House4/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 46 "data/maps/DewfordTown_House4/scripts.pory"
	removeobject 1
# 47 "data/maps/DewfordTown_House4/scripts.pory"
	waitmovement 0
# 48 "data/maps/DewfordTown_House4/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 49 "data/maps/DewfordTown_House4/scripts.pory"
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_AROUND
# 50 "data/maps/DewfordTown_House4/scripts.pory"
	waitmovement 0
# 51 "data/maps/DewfordTown_House4/scripts.pory"
	removeitem ITEM_AIR_BALLOON, 1
# 52 "data/maps/DewfordTown_House4/scripts.pory"
	playse SE_EXIT
# 53 "data/maps/DewfordTown_House4/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 54 "data/maps/DewfordTown_House4/scripts.pory"
	addvar VAR_UNUSED_0x40F8, 1
# 55 "data/maps/DewfordTown_House4/scripts.pory"
	setflag FLAG_UNUSED_0x030
# 56 "data/maps/DewfordTown_House4/scripts.pory"
	fadedefaultbgm
	goto DewfordTown_House4_EventScript_LittleGirl_1

DewfordTown_House4_EventScript_LittleGirl_13:
# 59 "data/maps/DewfordTown_House4/scripts.pory"
	msgbox DewfordTown_House4_EventScript_LittleGirl_Text_4
# 60 "data/maps/DewfordTown_House4/scripts.pory"
	closemessage
# 61 "data/maps/DewfordTown_House4/scripts.pory"
	waitmovement 0
# 62 "data/maps/DewfordTown_House4/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 63 "data/maps/DewfordTown_House4/scripts.pory"
	waitmovement 0
	goto DewfordTown_House4_EventScript_LittleGirl_1


DewfordTown_House4_EventScript_Tropius::
# 74 "data/maps/DewfordTown_House4/scripts.pory"
	lock
# 75 "data/maps/DewfordTown_House4/scripts.pory"
	faceplayer
# 76 "data/maps/DewfordTown_House4/scripts.pory"
	playmoncry SPECIES_TROPIUS, CRY_MODE_NORMAL
# 77 "data/maps/DewfordTown_House4/scripts.pory"
	waitmoncry
# 78 "data/maps/DewfordTown_House4/scripts.pory"
	msgbox DewfordTown_House4_EventScript_Tropius_Text_0
# 79 "data/maps/DewfordTown_House4/scripts.pory"
	fadedefaultbgm
# 80 "data/maps/DewfordTown_House4/scripts.pory"
	closemessage
# 81 "data/maps/DewfordTown_House4/scripts.pory"
	waitmovement 0
# 82 "data/maps/DewfordTown_House4/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 83 "data/maps/DewfordTown_House4/scripts.pory"
	waitmovement 0
# 84 "data/maps/DewfordTown_House4/scripts.pory"
	release
	end


DewfordTown_House4_EventScript_OldMan::
# 89 "data/maps/DewfordTown_House4/scripts.pory"
	lock
# 90 "data/maps/DewfordTown_House4/scripts.pory"
	faceplayer
# 91 "data/maps/DewfordTown_House4/scripts.pory"
	msgbox DewfordTown_House4_EventScript_OldMan_Text_0
# 92 "data/maps/DewfordTown_House4/scripts.pory"
	release
	end


DewfordTown_House4_EventScript_LittleGirl_Text_0:
# 27 "data/maps/DewfordTown_House4/scripts.pory"
	.string "It's scary here! I want to leave!$"

DewfordTown_House4_EventScript_LittleGirl_Text_1:
# 30 "data/maps/DewfordTown_House4/scripts.pory"
	.string "This Tropius just came into our house!\n"
	.string "He makes me so happy!$"

DewfordTown_House4_EventScript_LittleGirl_Text_2:
# 33 "data/maps/DewfordTown_House4/scripts.pory"
	.string "Oh? Is that balloon for me? I love it!\p"
	.string "Ok, I'll let the Tropius go.$"

DewfordTown_House4_EventScript_LittleGirl_Text_3:
# 41 "data/maps/DewfordTown_House4/scripts.pory"
	.string "Goodbye, Tropius!$"

DewfordTown_House4_EventScript_LittleGirl_Text_4:
# 59 "data/maps/DewfordTown_House4/scripts.pory"
	.string "I won't ever let him go!$"

DewfordTown_House4_EventScript_LittleGirl_Text_5:
# 67 "data/maps/DewfordTown_House4/scripts.pory"
	.string "Thank you for the balloon, but I do miss\n"
	.string "that Tropius...$"

DewfordTown_House4_EventScript_Tropius_Text_0:
# 78 "data/maps/DewfordTown_House4/scripts.pory"
	.string "The Tropius roared with glee!$"

DewfordTown_House4_EventScript_OldMan_Text_0:
# 91 "data/maps/DewfordTown_House4/scripts.pory"
	.string "This is no place to raise a child, but\n"
	.string "Stormy isn't able to evacuate people\l"
	.string "quickly enough.\p"
	.string "I don't know who to blame!$"
