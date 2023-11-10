OldaleTown_House2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, House2_EventScript_JoeyDefault
	.byte 0

OldaleTown_House2_EventScript_Woman::
	msgbox OldaleTown_House2_Text_PokemonLevelUp, MSGBOX_NPC
	end

OldaleTown_House2_EventScript_Man::
	msgbox OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon, MSGBOX_NPC
	end

OldaleTown_House2_Text_PokemonLevelUp:
	.string "When POKéMON battle, they eventually\n"
	.string "level up and become stronger.$"

OldaleTown_House2_Text_YoullGoFurtherWithStrongPokemon:
	.string "If the POKéMON with you become\n"
	.string "stronger, you'll be able to go farther\l"
	.string "away from here.$"

House2_EventScript_JoeyDefault::
	goto_if_unset FLAG_UNUSED_0x026, House2_EventScript_JoeyDefault_1
	setobjectxyperm 1, 4, 2
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	return

House2_EventScript_JoeyDefault_1:
	setobjectxy 1, 5, 2
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	return


OldaleTown_House2_Text_Woman::
	lock
	faceplayer
	msgbox OldaleTown_House2_Text_Woman_Text_0
	release
	return


OldaleTown_House2_EventScript_PikachuSign::
	lockall
	msgbox OldaleTown_House2_EventScript_PikachuSign_Text_0
	releaseall
	return


OldaleTown_House2_YoungsterJoeyBattle::
	trainerbattle_single TRAINER_YOUNGSTER_JOEY, Joey_Intro, Joey_Outro, Joey_Leave
	waitmessage
	msgbox Joey_Overworld, MSGBOX_AUTOCLOSE
	end


Joey_Leave::
	setflag FLAG_UNUSED_0x026
	msgbox PostBattle_Joey, MSGBOX_AUTOCLOSE
	call JoeyMove
	return


JoeyMove::
	getplayerxy VAR_TEMP_8, VAR_TEMP_9
	compare VAR_TEMP_8, 4
	goto_if_eq JoeyMove_1
	applymovement 1, JoeyLeft
	return

JoeyMove_1:
	applymovement 1, JoeyRight
	return


JoeyLeft:
	walk_left
	face_right
	step_end

JoeyRight:
	walk_right
	face_left
	step_end

OldaleTown_House2_Text_Woman_Text_0:
	.string "Joey's Rattata really is strong.\n"
	.string "I wonder, is it truly top percentage?$"

OldaleTown_House2_EventScript_PikachuSign_Text_0:
	.string "Is this Joey's second favorite rodent?$"

Joey_Intro::
	.string "My Rattata is different from regular\n"
	.string "Rattata. It's like my Rattata is in the\l"
	.string "top percentage of all Rattata.$"

Joey_Outro::
	.string "Oh... I'm all out of Pokémon that can\n"
	.string "fight.$"

PostBattle_Joey::
	.string "What a battle! I'll let you try to find\n"
	.string "a top percentage Rattata too!$"

Joey_Overworld::
	.string "Have you found any Rattata?$"
