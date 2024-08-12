DewfordTown_House3_MapScripts::
    map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_House3_EventScript_SailorDefault
	.byte 0

DewfordTown_House3_EventScript_SailorDefault::
	goto_if_unset FLAG_UNUSED_0x02C, DewfordTown_House3_EventScript_SailorDefault_1
	setobjectxyperm 1, 3, 2
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	return

DewfordTown_House3_EventScript_SailorDefault_1:
	setobjectxy 1, 4, 2
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


DewfordTown_House3_SailorBattle::
	trainerbattle_single TRAINER_THALIA_4, Briney_Intro, Briney_Outro, Briney_Leave
	waitmessage
	msgbox Briney_Overworld, MSGBOX_AUTOCLOSE
	end


Briney_Leave::
	setflag FLAG_UNUSED_0x02C
	msgbox PostBattle_Briney, MSGBOX_AUTOCLOSE
	call BrineyMove
	return


BrineyMove::
	getplayerxy VAR_TEMP_8, VAR_TEMP_9
	compare VAR_TEMP_8, 3
	goto_if_eq BrineyMove_1
	applymovement 1, BrineyLeft
	return

BrineyMove_1:
	applymovement 1, BrineyRight
	return


BrineyLeft:
	walk_left
	face_right
	step_end

BrineyRight:
	walk_right
	face_left
	step_end

Briney_Intro::
	.string "Ahoy! My grandfather taught me how to\n"
	.string "sail, and he found the special fishing\l"
	.string "hole beyond my home.\p"
	.string "I won't let just anyone fish from it!$"

Briney_Outro::
	.string "Bahaha!\n"
	.string "What a battle!$"

PostBattle_Briney::
	.string "You've bested me!\n"
	.string "Fish to your heart's content!$"

Briney_Overworld::
	.string "My grandfather sailed far and wide, and\n"
	.string "truly loved the ocean.\p"
	.string "I wonder what he would think of the sea\n"
	.string "expanding?$"
