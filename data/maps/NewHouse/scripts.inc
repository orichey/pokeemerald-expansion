NewHouse_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, NewHouse_EventScript_BallDefault
	.byte 0


NewHouse_EventScript_BallDefault::
	setvar VAR_UNUSED_0x40F7, 0
	return


NewHouse_EventScript_Wailmer::
	lock
	faceplayer
	goto_if_unset FLAG_UNUSED_0x020, NewHouse_EventScript_Wailmer_4
NewHouse_EventScript_Wailmer_3:
	msgbox NewHouse_EventScript_Wailmer_Text_5
NewHouse_EventScript_Wailmer_1:
	waitmessage
	release
	end

NewHouse_EventScript_Wailmer_2:
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewHouse_EventScript_Wailmer_10
NewHouse_EventScript_Wailmer_9:
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewHouse_EventScript_Wailmer_13
NewHouse_EventScript_Wailmer_12:
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewHouse_EventScript_Wailmer_15
	goto NewHouse_EventScript_Wailmer_1

NewHouse_EventScript_Wailmer_4:
	goto_if_unset FLAG_UNUSED_0x021, NewHouse_EventScript_Wailmer_6
	goto NewHouse_EventScript_Wailmer_3

NewHouse_EventScript_Wailmer_6:
	goto_if_unset FLAG_UNUSED_0x022, NewHouse_EventScript_Wailmer_2
	goto NewHouse_EventScript_Wailmer_3

NewHouse_EventScript_Wailmer_10:
	msgbox NewHouse_EventScript_Wailmer_Text_0
	goto NewHouse_EventScript_Wailmer_9

NewHouse_EventScript_Wailmer_13:
	msgbox NewHouse_EventScript_Wailmer_Text_0
	goto NewHouse_EventScript_Wailmer_12

NewHouse_EventScript_Wailmer_15:
	msgbox NewHouse_EventScript_Wailmer_Text_1
	closemessage
	delay 60
	msgbox NewHouse_EventScript_Wailmer_Text_2
	closemessage
	applymovement 1, FaceLeft
	waitmovement 0
	delay 60
	msgbox NewHouse_EventScript_Wailmer_Text_3
	closemessage
	delay 60
	applymovement 1, FacePlayer
	waitmovement 0
	delay 45
	msgbox NewHouse_EventScript_Wailmer_Text_4
	setvar VAR_UNUSED_0x40F7, 1
	goto NewHouse_EventScript_Wailmer_1


NewHouse_EventScript_PokeballOne::
	lockall
	goto_if_unset FLAG_UNUSED_0x020, NewHouse_EventScript_PokeballOne_4
NewHouse_EventScript_PokeballOne_3:
	msgbox NewHouse_EventScript_PokeballOne_Text_1
NewHouse_EventScript_PokeballOne_1:
	waitmessage
	releaseall
	end

NewHouse_EventScript_PokeballOne_2:
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewHouse_EventScript_PokeballOne_9
	call NewHouse_EventScript_Articuno
	goto NewHouse_EventScript_PokeballOne_1

NewHouse_EventScript_PokeballOne_4:
	goto_if_unset FLAG_UNUSED_0x021, NewHouse_EventScript_PokeballOne_6
	goto NewHouse_EventScript_PokeballOne_3

NewHouse_EventScript_PokeballOne_6:
	goto_if_unset FLAG_UNUSED_0x022, NewHouse_EventScript_PokeballOne_2
	goto NewHouse_EventScript_PokeballOne_3

NewHouse_EventScript_PokeballOne_9:
	msgbox NewHouse_EventScript_PokeballOne_Text_0
	goto NewHouse_EventScript_PokeballOne_1


NewHouse_EventScript_PokeballTwo::
	lockall
	goto_if_unset FLAG_UNUSED_0x020, NewHouse_EventScript_PokeballTwo_4
NewHouse_EventScript_PokeballTwo_3:
	msgbox NewHouse_EventScript_PokeballOne_Text_1
NewHouse_EventScript_PokeballTwo_1:
	waitmessage
	releaseall
	end

NewHouse_EventScript_PokeballTwo_2:
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewHouse_EventScript_PokeballTwo_9
	call NewHouse_EventScript_Zapdos
	goto NewHouse_EventScript_PokeballTwo_1

NewHouse_EventScript_PokeballTwo_4:
	goto_if_unset FLAG_UNUSED_0x021, NewHouse_EventScript_PokeballTwo_6
	goto NewHouse_EventScript_PokeballTwo_3

NewHouse_EventScript_PokeballTwo_6:
	goto_if_unset FLAG_UNUSED_0x022, NewHouse_EventScript_PokeballTwo_2
	goto NewHouse_EventScript_PokeballTwo_3

NewHouse_EventScript_PokeballTwo_9:
	msgbox NewHouse_EventScript_PokeballOne_Text_0
	goto NewHouse_EventScript_PokeballTwo_1


NewHouse_EventScript_PokeballThree::
	lockall
	goto_if_unset FLAG_UNUSED_0x020, NewHouse_EventScript_PokeballThree_4
NewHouse_EventScript_PokeballThree_3:
	msgbox NewHouse_EventScript_PokeballOne_Text_1
NewHouse_EventScript_PokeballThree_1:
	waitmessage
	releaseall
	end

NewHouse_EventScript_PokeballThree_2:
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewHouse_EventScript_PokeballThree_9
	call NewHouse_EventScript_Moltres
	goto NewHouse_EventScript_PokeballThree_1

NewHouse_EventScript_PokeballThree_4:
	goto_if_unset FLAG_UNUSED_0x021, NewHouse_EventScript_PokeballThree_6
	goto NewHouse_EventScript_PokeballThree_3

NewHouse_EventScript_PokeballThree_6:
	goto_if_unset FLAG_UNUSED_0x022, NewHouse_EventScript_PokeballThree_2
	goto NewHouse_EventScript_PokeballThree_3

NewHouse_EventScript_PokeballThree_9:
	msgbox NewHouse_EventScript_PokeballOne_Text_0
	goto NewHouse_EventScript_PokeballThree_1


NewHouse_EventScript_Articuno::
	showmonpic SPECIES_CHARMANDER, 10, 3
	msgbox NewHouse_EventScript_Articuno_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewHouse_EventScript_Articuno_1
	hidemonpic
	msgbox NewHouse_NotChosen
	return

NewHouse_EventScript_Articuno_1:
	givemon SPECIES_CHARMANDER, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewHouse_EventScript_Articuno_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewHouse_EventScript_Articuno_5
	hidemonpic
	msgbox NewHouse_EventScript_Articuno_Text_2
	return

NewHouse_EventScript_Articuno_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Articuno_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x020
	setflag FLAG_SYS_POKEMON_GET
	call NicknamePartyMon
	setvar VAR_UNUSED_0x40F9, 1
	return

NewHouse_EventScript_Articuno_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Articuno_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x020
	setflag FLAG_SYS_POKEMON_GET
	call NicknameBoxMon
	setvar VAR_UNUSED_0x40F9, 1
	return


NewHouse_EventScript_Zapdos::
	showmonpic SPECIES_MUDKIP, 10, 3
	msgbox NewHouse_EventScript_Zapdos_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewHouse_EventScript_Zapdos_1
	hidemonpic
	msgbox NewHouse_NotChosen
	return

NewHouse_EventScript_Zapdos_1:
	givemon SPECIES_MUDKIP, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewHouse_EventScript_Zapdos_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewHouse_EventScript_Zapdos_5
	hidemonpic
	msgbox NewHouse_EventScript_Articuno_Text_2
	return

NewHouse_EventScript_Zapdos_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Zapdos_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 3
	setflag FLAG_UNUSED_0x021
	call NicknamePartyMon
	setvar VAR_UNUSED_0x40F9, 1
	return

NewHouse_EventScript_Zapdos_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Zapdos_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 3
	setflag FLAG_UNUSED_0x021
	call NicknameBoxMon
	setvar VAR_UNUSED_0x40F9, 1
	return


NewHouse_EventScript_Moltres::
	showmonpic SPECIES_TURTWIG, 10, 3
	msgbox NewHouse_EventScript_Moltres_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewHouse_EventScript_Moltres_1
	hidemonpic
	msgbox NewHouse_NotChosen
	return

NewHouse_EventScript_Moltres_1:
	givemon SPECIES_TURTWIG, 5
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewHouse_EventScript_Moltres_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewHouse_EventScript_Moltres_5
	hidemonpic
	msgbox NewHouse_EventScript_Articuno_Text_2
	return

NewHouse_EventScript_Moltres_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Moltres_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 4
	setflag FLAG_UNUSED_0x022
	call NicknamePartyMon
	setvar VAR_UNUSED_0x40F9, 1
	return

NewHouse_EventScript_Moltres_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Moltres_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 4
	setflag FLAG_UNUSED_0x022
	call NicknameBoxMon
	setvar VAR_UNUSED_0x40F9, 1
	return


NicknamePartyMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


FaceLeft:
	face_left
	step_end

FacePlayer:
	face_player
	step_end

NewHouse_EventScript_Text_Scientist::
	lock
	faceplayer
	msgbox NewHouse_EventScript_Text_Scientist_Text_0
	release
	return


NewHouse_EventScript_Wailmer_Text_0:
	.string "{PLAYER}, go ahead and take a Pokémon.$"

NewHouse_EventScript_Wailmer_Text_1:
	.string "Why, hello there, {PLAYER}!\n"
	.string "What brings you to my laboratory?$"

NewHouse_EventScript_Wailmer_Text_2:
	.string "Hm, I see. The climate events we are\n"
	.string "experiencing are very concerning.$"

NewHouse_EventScript_Wailmer_Text_3:
	.string "As you undoubtedly know, I have made my\n"
	.string "career in studying the climate of\l"
	.string "Ecodia.\p"
	.string "Never have I seen such frequency and\n"
	.string "intensity of these storms and\l"
	.string "disasters we now witness daily.$"

NewHouse_EventScript_Wailmer_Text_4:
	.string "{PLAYER}, I am getting old. In the past,\n"
	.string "I would have ventured out to see what\l"
	.string "it is we are dealing with. Instead,\l"
	.string "I must make a request of you.\p"
	.string "I must ask you to go survey the region.\n"
	.string "{PLAYER}, take a Pokémon from my table,\l"
	.string "and go see what is happening to Ecodia.$"

NewHouse_EventScript_Wailmer_Text_5:
	.string "Take care of your Pokémon, and be safe.\n"
	.string "I do not know what perils you may face.\p"
	.string "Trust in yourself, and remember to\n"
	.string "report back!$"

NewHouse_EventScript_PokeballOne_Text_0:
	.string "Maybe the Professor would like to talk.$"

NewHouse_EventScript_PokeballOne_Text_1:
	.string "Shouldn't take another!$"

NewHouse_EventScript_Articuno_Text_0:
	.string "It's a Charmander!\l"
	.string "Do you want to choose Charmander?$"

NewHouse_EventScript_Articuno_Text_1:
	.string "Recieved Charmander!$"

NewHouse_EventScript_Articuno_Text_2:
	.string "No more room.$"

NewHouse_EventScript_Zapdos_Text_0:
	.string "It's a Mudkip!\l"
	.string "Do you want to choose Mudkip?$"

NewHouse_EventScript_Zapdos_Text_1:
	.string "Recieved Mudkip!$"

NewHouse_EventScript_Moltres_Text_0:
	.string "It's a Turtwig!\l"
	.string "Do you want to choose Turtwig?$"

NewHouse_EventScript_Moltres_Text_1:
	.string "Recieved Turtwig!$"

NicknamePartyMon_Text_0:
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
	.string "Transferred to PC$"

NewHouse_EventScript_Text_Scientist_Text_0:
	.string "The species of Pokémon Professor\n"
	.string "Spruce is offering have been critical\l"
	.string "to his research.\p"
	.string "Charmander is a case study in how\n"
	.string "sensitive Pokémon can be to their\l"
	.string "environment, as shown by the\l"
	.string "vulnerability in their tail.\p"
	.string "Mudkip demonstrates how resilient and\n"
	.string "adaptable Pokémon can be in different\l"
	.string "terrains.\p"
	.string "And Turtwig has been studied to see how\n"
	.string "plants and animals can live together in\l"
	.string "symbiosis.\p"
	.string "Professor Spruce's research may pave\n"
	.string "the way to a more sustainable future!$"

NewHouse_NotChosen::
	.string "You did not choose the Pokémon.$"
