PetalburgCity_GrassHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_GrassHouse_EventScript_GrassDefault
	.byte 0

PetalburgCity_GrassHouse_EventScript_Girl::
	lock
	faceplayer
	msgbox PetalburgCity_GrassHouse_EventScript_Girl_Text_0
	release
	return


PetalburgCity_GrassHouse_EventScript_Girl2::
	lock
	faceplayer
	msgbox PetalburgCity_GrassHouse_EventScript_Girl2_Text_0
	release
	return


PetalburgCity_GrassHouse_EventScript_GrassDefault::
	goto_if_unset FLAG_UNUSED_0x035, PetalburgCity_GrassHouse_EventScript_GrassDefault_1
	setobjectxyperm 1, 4, 2
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_LEFT
	return

PetalburgCity_GrassHouse_EventScript_GrassDefault_1:
	setobjectxy 1, 3, 2
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


PetalburgCity_GrassHouse_GrassBattle::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, Lily_Intro, Lily_Outro, Lily_Leave
	waitmessage
	msgbox Lily_Overworld, MSGBOX_AUTOCLOSE
	end


Lily_Leave::
	setflag FLAG_UNUSED_0x035
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	msgbox PostBattle_Lily, MSGBOX_AUTOCLOSE
	call LilyMove
	return


LilyMove::
	applymovement 1, LilyRight
	return


LilyRight:
	walk_right
	face_left
	step_end

PetalburgCity_GrassHouse_EventScript_Girl_Text_0:
	.string "Paul and his crew of lumberjacks\n"
	.string "cleared much of Treefall Woods to build\l"
	.string "this city.\p"
	.string "Our little sanctuary is all that remains\n"
	.string "of native flora and fauna within city\l"
	.string "limits.$"

PetalburgCity_GrassHouse_EventScript_Girl2_Text_0:
	.string "The reforestation effort is focused on\n"
	.string "planting a monoculture.\p"
	.string "Rows and rows of spruce trees will\n"
	.string "never come close to the vibrant\l"
	.string "ecological community that once thrived\l"
	.string "in Treefall Woods!$"

Lily_Intro::
	.string "This town is here as a result of\n"
	.string "environmental destruction of the\l"
	.string "forest.\p"
	.string "I have protected what I can, and I\n"
	.string "won't let any harm come to my native\l"
	.string "plants!$"

Lily_Outro::
	.string "...do you care about the environment?$"

PostBattle_Lily::
	.string "If you promise not to harm my\n"
	.string "sanctuary, I will let you in.\p"
	.string "You can find lots of Grass Pokémon!$"

Lily_Overworld::
	.string "Native plants are critical to healthy\n"
	.string "ecosystems.\p"
	.string "I believe Paul is well-intentioned, but\n"
	.string "the species he plants are not native\l"
	.string "to this area.$"
