# 1 "data/maps/DewfordTown_House3/scripts.pory"

# 2 "data/maps/DewfordTown_House3/scripts.pory"
DewfordTown_House3_MapScripts::
# 3 "data/maps/DewfordTown_House3/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_House3_EventScript_SailorDefault
# 4 "data/maps/DewfordTown_House3/scripts.pory"
	.byte 0

DewfordTown_House3_EventScript_SailorDefault::
# 7 "data/maps/DewfordTown_House3/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x02C, DewfordTown_House3_EventScript_SailorDefault_1
# 13 "data/maps/DewfordTown_House3/scripts.pory"
	setobjectxyperm 1, 3, 2
# 14 "data/maps/DewfordTown_House3/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	return

DewfordTown_House3_EventScript_SailorDefault_1:
# 8 "data/maps/DewfordTown_House3/scripts.pory"
	setobjectxy 1, 4, 2
# 9 "data/maps/DewfordTown_House3/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


DewfordTown_House3_SailorBattle::
# 20 "data/maps/DewfordTown_House3/scripts.pory"
	trainerbattle_single TRAINER_THALIA_4, Briney_Intro, Briney_Outro, Briney_Leave
# 21 "data/maps/DewfordTown_House3/scripts.pory"
	waitmessage
# 22 "data/maps/DewfordTown_House3/scripts.pory"
	msgbox Briney_Overworld, MSGBOX_AUTOCLOSE
	end


Briney_Leave::
# 27 "data/maps/DewfordTown_House3/scripts.pory"
	setflag FLAG_UNUSED_0x02C
# 28 "data/maps/DewfordTown_House3/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 29 "data/maps/DewfordTown_House3/scripts.pory"
	msgbox PostBattle_Briney, MSGBOX_AUTOCLOSE
# 30 "data/maps/DewfordTown_House3/scripts.pory"
	call BrineyMove
	return


BrineyMove::
# 55 "data/maps/DewfordTown_House3/scripts.pory"
	getplayerxy VAR_TEMP_8, VAR_TEMP_9
# 56 "data/maps/DewfordTown_House3/scripts.pory"
	compare VAR_TEMP_8, 3
	goto_if_eq BrineyMove_1
# 60 "data/maps/DewfordTown_House3/scripts.pory"
	applymovement 1, BrineyLeft
	return

BrineyMove_1:
# 57 "data/maps/DewfordTown_House3/scripts.pory"
	applymovement 1, BrineyRight
	return


# 64 "data/maps/DewfordTown_House3/scripts.pory"
BrineyLeft:
# 65 "data/maps/DewfordTown_House3/scripts.pory"
	walk_left
# 66 "data/maps/DewfordTown_House3/scripts.pory"
	face_right
	step_end

# 69 "data/maps/DewfordTown_House3/scripts.pory"
BrineyRight:
# 70 "data/maps/DewfordTown_House3/scripts.pory"
	walk_right
# 71 "data/maps/DewfordTown_House3/scripts.pory"
	face_left
	step_end

Briney_Intro::
# 33 "data/maps/DewfordTown_House3/scripts.pory"
	.string "Ahoy! My grandfather taught me how to\n"
	.string "sail, and he found the special fishing\l"
	.string "hole beyond my home.\p"
	.string "I won't let just anyone fish from it!$"

Briney_Outro::
# 40 "data/maps/DewfordTown_House3/scripts.pory"
	.string "Bahaha!\n"
	.string "What a battle!$"

PostBattle_Briney::
# 45 "data/maps/DewfordTown_House3/scripts.pory"
	.string "You've bested me!\n"
	.string "Fish to your heart's content!$"

Briney_Overworld::
# 50 "data/maps/DewfordTown_House3/scripts.pory"
	.string "My grandfather sailed far and wide, and\n"
	.string "truly loved the ocean.\p"
	.string "I wonder what he would think of the sea\n"
	.string "expanding?$"
