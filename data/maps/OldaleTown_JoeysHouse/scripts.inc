# 1 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
OldaleTown_JoeysHouse_MapScripts::
# 2 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JoeysHouse_EventScript_JoeyDefault
# 3 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	.byte 0
# 4 "data/maps/OldaleTown_JoeysHouse/scripts.pory"

# 5 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
OldaleTown_JoeysHouse_EventScript_Woman::
# 6 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	msgbox OldaleTown_JoeysHouse_Text_PokemonLevelUp, MSGBOX_NPC
# 7 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	end
# 8 "data/maps/OldaleTown_JoeysHouse/scripts.pory"

# 9 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
OldaleTown_JoeysHouse_EventScript_Man::
# 10 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	msgbox OldaleTown_JoeysHouse_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
# 11 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	end
# 12 "data/maps/OldaleTown_JoeysHouse/scripts.pory"

# 13 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
OldaleTown_JoeysHouse_Text_PokemonLevelUp:
# 14 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	.string "When POKéMON battle, they eventually\n"
# 15 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	.string "level up and become stronger.$"
# 16 "data/maps/OldaleTown_JoeysHouse/scripts.pory"

# 17 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
OldaleTown_JoeysHouse_Text_YoullGoFurtherWithStrongPokemon:
# 18 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	.string "If the POKéMON with you become\n"
# 19 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	.string "stronger, you'll be able to go farther\l"
# 20 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	.string "away from here.$"

JoeysHouse_EventScript_JoeyDefault::
# 25 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x026, JoeysHouse_EventScript_JoeyDefault_1
# 31 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	setobjectxyperm 1, 4, 2
# 32 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	return

JoeysHouse_EventScript_JoeyDefault_1:
# 26 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	setobjectxy 1, 5, 2
# 27 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


OldaleTown_JoeysHouse_Text_Woman::
# 38 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	lock
# 39 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	faceplayer
# 40 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	msgbox OldaleTown_JoeysHouse_Text_Woman_Text_0
# 42 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	release
	return


OldaleTown_JoeysHouse_EventScript_PikachuSign::
# 46 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	lockall
# 47 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	msgbox OldaleTown_JoeysHouse_EventScript_PikachuSign_Text_0
# 48 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	releaseall
	return


OldaleTown_JoeysHouse_YoungsterJoeyBattle::
# 53 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOEY, Joey_Intro, Joey_Outro, Joey_Leave
# 54 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	waitmessage
# 55 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	msgbox Joey_Overworld, MSGBOX_AUTOCLOSE
	end


Joey_Leave::
# 60 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	setflag FLAG_UNUSED_0x026
# 61 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	msgbox PostBattle_Joey, MSGBOX_AUTOCLOSE
# 62 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	call JoeyMove
	return


JoeyMove::
# 86 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	getplayerxy VAR_TEMP_8, VAR_TEMP_9
# 87 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	compare VAR_TEMP_8, 4
	goto_if_eq JoeyMove_1
# 91 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	applymovement 1, JoeyLeft
	return

JoeyMove_1:
# 88 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	applymovement 1, JoeyRight
	return


# 95 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
JoeyLeft:
# 96 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	walk_left
# 97 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	face_right
	step_end

# 100 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
JoeyRight:
# 101 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	walk_right
# 102 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	face_left
	step_end

OldaleTown_JoeysHouse_Text_Woman_Text_0:
# 40 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	.string "Joey's Rattata really is strong.\n"
	.string "I wonder, is it truly top percentage?$"

OldaleTown_JoeysHouse_EventScript_PikachuSign_Text_0:
# 47 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	.string "Is this Joey's second favorite rodent?$"

Joey_Intro::
# 65 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	.string "My Rattata is different from regular\n"
	.string "Rattata. It's like my Rattata is in the\l"
	.string "top percentage of all Rattata.$"

Joey_Outro::
# 71 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	.string "Oh... I'm all out of Pokémon that can\n"
	.string "fight.$"

PostBattle_Joey::
# 76 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	.string "What a battle! I'll let you try to find\n"
	.string "a top percentage Rattata too!$"

Joey_Overworld::
# 81 "data/maps/OldaleTown_JoeysHouse/scripts.pory"
	.string "Have you found any Rattata?$"
