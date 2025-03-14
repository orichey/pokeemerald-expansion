# 1 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
PetalburgCity_GrassHouse_MapScripts::
# 2 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_GrassHouse_EventScript_GrassDefault
# 3 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	.byte 0

PetalburgCity_GrassHouse_EventScript_Girl::
# 7 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	lock
# 8 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	faceplayer
# 9 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	msgbox PetalburgCity_GrassHouse_EventScript_Girl_Text_0
# 10 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	release
	return


PetalburgCity_GrassHouse_EventScript_Girl2::
# 14 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	lock
# 15 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	faceplayer
# 16 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	msgbox PetalburgCity_GrassHouse_EventScript_Girl2_Text_0
# 17 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	release
	return


PetalburgCity_GrassHouse_EventScript_GrassDefault::
# 21 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x035, PetalburgCity_GrassHouse_EventScript_GrassDefault_1
# 27 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	setobjectxyperm 1, 4, 2
# 28 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	return

PetalburgCity_GrassHouse_EventScript_GrassDefault_1:
# 22 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	setobjectxy 1, 3, 2
# 23 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


PetalburgCity_GrassHouse_GrassBattle::
# 34 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, Lily_Intro, Lily_Outro, Lily_Leave
# 35 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	waitmessage
# 36 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	msgbox Lily_Overworld, MSGBOX_AUTOCLOSE
	end


Lily_Leave::
# 41 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	setflag FLAG_UNUSED_0x035
# 42 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 43 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	msgbox PostBattle_Lily, MSGBOX_AUTOCLOSE
# 44 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	call LilyMove
	return


LilyMove::
# 64 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	applymovement 1, LilyRight
	return


# 67 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
LilyRight:
# 68 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	walk_right
# 69 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	face_left
	step_end

PetalburgCity_GrassHouse_EventScript_Girl_Text_0:
# 9 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	.string "Paul and his crew of lumberjacks\n"
	.string "cleared much of Treefall Woods to build\l"
	.string "this city.\p"
	.string "Our little sanctuary is all that remains\n"
	.string "of native flora and fauna within city\l"
	.string "limits.$"

PetalburgCity_GrassHouse_EventScript_Girl2_Text_0:
# 16 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	.string "The reforestation effort is focused on\n"
	.string "planting a monoculture.\p"
	.string "Rows and rows of spruce trees will\n"
	.string "never come close to the vibrant\l"
	.string "ecological community that once thrived\l"
	.string "in Treefall Woods!$"

Lily_Intro::
# 47 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	.string "This town is here as a result of\n"
	.string "environmental destruction of the\l"
	.string "forest.\p"
	.string "I have protected what I can, and I\n"
	.string "won't let any harm come to my native\l"
	.string "plants!$"

Lily_Outro::
# 51 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	.string "...do you care about the environment?$"

PostBattle_Lily::
# 55 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	.string "If you promise not to harm my\n"
	.string "sanctuary, I will let you in.\p"
	.string "You can find lots of Grass Pokémon!$"

Lily_Overworld::
# 59 "data/maps/PetalburgCity_GrassHouse/scripts.pory"
	.string "Native plants are critical to healthy\n"
	.string "ecosystems.\p"
	.string "I believe Paul is well-intentioned, but\n"
	.string "the species he plants are not native to\l"
	.string "this area.$"
