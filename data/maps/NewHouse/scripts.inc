NewHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NewHouse_EventScript_BallDefault
	.byte 0


NewHouse_EventScript_BallDefault::
	setvar VAR_UNUSED_0x40F7, 0
	return


NewHouse_EventScript_Wailmer::
	lock
	faceplayer
	goto_if_unset FLAG_UNUSED_0x020, NewHouse_EventScript_Wailmer_4
NewHouse_EventScript_Wailmer_3:
	msgbox NewHouse_EventScript_Wailmer_Text_2
NewHouse_EventScript_Wailmer_1:
	waitmessage
	release
	end

NewHouse_EventScript_Wailmer_2:
	msgbox NewHouse_EventScript_Wailmer_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewHouse_EventScript_Wailmer_9
	msgbox NewHouse_EventScript_Wailmer_Text_1
	goto NewHouse_EventScript_Wailmer_1

NewHouse_EventScript_Wailmer_4:
	goto_if_unset FLAG_UNUSED_0x021, NewHouse_EventScript_Wailmer_6
	goto NewHouse_EventScript_Wailmer_3

NewHouse_EventScript_Wailmer_6:
	goto_if_unset FLAG_UNUSED_0x022, NewHouse_EventScript_Wailmer_2
	goto NewHouse_EventScript_Wailmer_3

NewHouse_EventScript_Wailmer_9:
	compare VAR_UNUSED_0x40F7, 2
	goto_if_ne NewHouse_EventScript_Wailmer_13
	setvar VAR_UNUSED_0x40F7, 0
NewHouse_EventScript_Wailmer_12:
	msgbox NewHouse_EventScript_Wailmer_Text_1
	goto NewHouse_EventScript_Wailmer_1

NewHouse_EventScript_Wailmer_13:
	addvar VAR_UNUSED_0x40F7, 1
	goto NewHouse_EventScript_Wailmer_12


NewHouse_EventScript_PokeballOne::
	lockall
	goto_if_unset FLAG_UNUSED_0x020, NewHouse_EventScript_PokeballOne_4
NewHouse_EventScript_PokeballOne_3:
	msgbox NewHouse_EventScript_PokeballOne_Text_0
NewHouse_EventScript_PokeballOne_1:
	waitmessage
	releaseall
	end

NewHouse_EventScript_PokeballOne_2:
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewHouse_EventScript_PokeballOne_9
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewHouse_EventScript_PokeballOne_10
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewHouse_EventScript_PokeballOne_11
	goto NewHouse_EventScript_PokeballOne_1

NewHouse_EventScript_PokeballOne_4:
	goto_if_unset FLAG_UNUSED_0x021, NewHouse_EventScript_PokeballOne_6
	goto NewHouse_EventScript_PokeballOne_3

NewHouse_EventScript_PokeballOne_6:
	goto_if_unset FLAG_UNUSED_0x022, NewHouse_EventScript_PokeballOne_2
	goto NewHouse_EventScript_PokeballOne_3

NewHouse_EventScript_PokeballOne_9:
	call NewHouse_EventScript_Articuno
	goto NewHouse_EventScript_PokeballOne_1

NewHouse_EventScript_PokeballOne_10:
	call NewHouse_EventScript_Suicune
	goto NewHouse_EventScript_PokeballOne_1

NewHouse_EventScript_PokeballOne_11:
	call NewHouse_EventScript_Palkia
	goto NewHouse_EventScript_PokeballOne_1


NewHouse_EventScript_PokeballTwo::
	lockall
	goto_if_unset FLAG_UNUSED_0x020, NewHouse_EventScript_PokeballTwo_4
NewHouse_EventScript_PokeballTwo_3:
	msgbox NewHouse_EventScript_PokeballOne_Text_0
NewHouse_EventScript_PokeballTwo_1:
	waitmessage
	releaseall
	end

NewHouse_EventScript_PokeballTwo_2:
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewHouse_EventScript_PokeballTwo_9
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewHouse_EventScript_PokeballTwo_10
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewHouse_EventScript_PokeballTwo_11
	goto NewHouse_EventScript_PokeballTwo_1

NewHouse_EventScript_PokeballTwo_4:
	goto_if_unset FLAG_UNUSED_0x021, NewHouse_EventScript_PokeballTwo_6
	goto NewHouse_EventScript_PokeballTwo_3

NewHouse_EventScript_PokeballTwo_6:
	goto_if_unset FLAG_UNUSED_0x022, NewHouse_EventScript_PokeballTwo_2
	goto NewHouse_EventScript_PokeballTwo_3

NewHouse_EventScript_PokeballTwo_9:
	call NewHouse_EventScript_Zapdos
	goto NewHouse_EventScript_PokeballTwo_1

NewHouse_EventScript_PokeballTwo_10:
	call NewHouse_EventScript_Raikou
	goto NewHouse_EventScript_PokeballTwo_1

NewHouse_EventScript_PokeballTwo_11:
	call NewHouse_EventScript_Dialga
	goto NewHouse_EventScript_PokeballTwo_1


NewHouse_EventScript_PokeballThree::
	lockall
	goto_if_unset FLAG_UNUSED_0x020, NewHouse_EventScript_PokeballThree_4
NewHouse_EventScript_PokeballThree_3:
	msgbox NewHouse_EventScript_PokeballOne_Text_0
NewHouse_EventScript_PokeballThree_1:
	waitmessage
	releaseall
	end

NewHouse_EventScript_PokeballThree_2:
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewHouse_EventScript_PokeballThree_9
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewHouse_EventScript_PokeballThree_10
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewHouse_EventScript_PokeballThree_11
	goto NewHouse_EventScript_PokeballThree_1

NewHouse_EventScript_PokeballThree_4:
	goto_if_unset FLAG_UNUSED_0x021, NewHouse_EventScript_PokeballThree_6
	goto NewHouse_EventScript_PokeballThree_3

NewHouse_EventScript_PokeballThree_6:
	goto_if_unset FLAG_UNUSED_0x022, NewHouse_EventScript_PokeballThree_2
	goto NewHouse_EventScript_PokeballThree_3

NewHouse_EventScript_PokeballThree_9:
	call NewHouse_EventScript_Moltres
	goto NewHouse_EventScript_PokeballThree_1

NewHouse_EventScript_PokeballThree_10:
	call NewHouse_EventScript_Entei
	goto NewHouse_EventScript_PokeballThree_1

NewHouse_EventScript_PokeballThree_11:
	call NewHouse_EventScript_Giratina
	goto NewHouse_EventScript_PokeballThree_1


NewHouse_EventScript_Articuno::
	showmonpic SPECIES_ARTICUNO, 10, 3
	msgbox NewHouse_EventScript_Articuno_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewHouse_EventScript_Articuno_1
	hidemonpic
	msgbox NewHouse_NotChosen
	return

NewHouse_EventScript_Articuno_1:
	givemon SPECIES_ARTICUNO, 50, ITEM_MASTER_BALL
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
	return

NewHouse_EventScript_Articuno_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Articuno_Text_1
	removeobject 2
	setflag FLAG_UNUSED_0x020
	setflag FLAG_SYS_POKEMON_GET
	call NicknameBoxMon
	return


NewHouse_EventScript_Suicune::
	showmonpic SPECIES_SUICUNE, 10, 3
	msgbox NewHouse_EventScript_Suicune_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewHouse_EventScript_Suicune_1
	hidemonpic
	msgbox NewHouse_NotChosen
	return

NewHouse_EventScript_Suicune_1:
	givemon SPECIES_SUICUNE, 50, ITEM_MASTER_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewHouse_EventScript_Suicune_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewHouse_EventScript_Suicune_5
	hidemonpic
	msgbox NewHouse_EventScript_Articuno_Text_2
	return

NewHouse_EventScript_Suicune_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Suicune_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 2
	setflag FLAG_UNUSED_0x020
	call NicknamePartyMon
	return

NewHouse_EventScript_Suicune_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Suicune_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 2
	setflag FLAG_UNUSED_0x020
	call NicknameBoxMon
	return


NewHouse_EventScript_Palkia::
	showmonpic SPECIES_PALKIA, 10, 3
	msgbox NewHouse_EventScript_Palkia_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewHouse_EventScript_Palkia_1
	hidemonpic
	msgbox NewHouse_NotChosen
	return

NewHouse_EventScript_Palkia_1:
	givemon SPECIES_PALKIA, 50, ITEM_MASTER_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewHouse_EventScript_Palkia_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewHouse_EventScript_Palkia_5
	hidemonpic
	msgbox NewHouse_EventScript_Articuno_Text_2
	return

NewHouse_EventScript_Palkia_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Palkia_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 2
	setflag FLAG_UNUSED_0x020
	call NicknamePartyMon
	return

NewHouse_EventScript_Palkia_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Palkia_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 2
	setflag FLAG_UNUSED_0x020
	call NicknameBoxMon
	return


NewHouse_EventScript_Zapdos::
	showmonpic SPECIES_ZAPDOS, 10, 3
	msgbox NewHouse_EventScript_Zapdos_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewHouse_EventScript_Zapdos_1
	hidemonpic
	msgbox NewHouse_NotChosen
	return

NewHouse_EventScript_Zapdos_1:
	givemon SPECIES_ZAPDOS, 50, ITEM_MASTER_BALL
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
	return

NewHouse_EventScript_Zapdos_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Zapdos_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 3
	setflag FLAG_UNUSED_0x021
	call NicknameBoxMon
	return


NewHouse_EventScript_Raikou::
	showmonpic SPECIES_RAIKOU, 10, 3
	msgbox NewHouse_EventScript_Raikou_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewHouse_EventScript_Raikou_1
	hidemonpic
	msgbox NewHouse_NotChosen
	return

NewHouse_EventScript_Raikou_1:
	givemon SPECIES_RAIKOU, 50, ITEM_MASTER_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewHouse_EventScript_Raikou_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewHouse_EventScript_Raikou_5
	hidemonpic
	msgbox NewHouse_EventScript_Articuno_Text_2
	return

NewHouse_EventScript_Raikou_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Raikou_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 3
	setflag FLAG_UNUSED_0x021
	call NicknamePartyMon
	return

NewHouse_EventScript_Raikou_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Raikou_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 3
	setflag FLAG_UNUSED_0x021
	call NicknameBoxMon
	return


NewHouse_EventScript_Dialga::
	showmonpic SPECIES_DIALGA, 10, 3
	msgbox NewHouse_EventScript_Dialga_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewHouse_EventScript_Dialga_1
	hidemonpic
	msgbox NewHouse_NotChosen
	return

NewHouse_EventScript_Dialga_1:
	givemon SPECIES_DIALGA, 50, ITEM_MASTER_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewHouse_EventScript_Dialga_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewHouse_EventScript_Dialga_5
	hidemonpic
	msgbox NewHouse_EventScript_Articuno_Text_2
	return

NewHouse_EventScript_Dialga_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Dialga_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 3
	setflag FLAG_UNUSED_0x021
	call NicknamePartyMon
	return

NewHouse_EventScript_Dialga_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Dialga_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 3
	setflag FLAG_UNUSED_0x021
	call NicknameBoxMon
	return


NewHouse_EventScript_Moltres::
	showmonpic SPECIES_MOLTRES, 10, 3
	msgbox NewHouse_EventScript_Moltres_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewHouse_EventScript_Moltres_1
	hidemonpic
	msgbox NewHouse_NotChosen
	return

NewHouse_EventScript_Moltres_1:
	givemon SPECIES_MOLTRES, 50, ITEM_MASTER_BALL
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
	return

NewHouse_EventScript_Moltres_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Moltres_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 4
	setflag FLAG_UNUSED_0x022
	call NicknameBoxMon
	return


NewHouse_EventScript_Entei::
	showmonpic SPECIES_ENTEI, 10, 3
	msgbox NewHouse_EventScript_Entei_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewHouse_EventScript_Entei_1
	hidemonpic
	msgbox NewHouse_NotChosen
	return

NewHouse_EventScript_Entei_1:
	givemon SPECIES_ENTEI, 50, ITEM_MASTER_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewHouse_EventScript_Entei_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewHouse_EventScript_Entei_5
	hidemonpic
	msgbox NewHouse_EventScript_Articuno_Text_2
	return

NewHouse_EventScript_Entei_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Entei_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 4
	setflag FLAG_UNUSED_0x022
	call NicknamePartyMon
	return

NewHouse_EventScript_Entei_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Entei_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 4
	setflag FLAG_UNUSED_0x022
	call NicknameBoxMon
	return


NewHouse_EventScript_Giratina::
	showmonpic SPECIES_GIRATINA, 10, 3
	msgbox NewHouse_EventScript_Giratina_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq NewHouse_EventScript_Giratina_1
	hidemonpic
	msgbox NewHouse_NotChosen
	return

NewHouse_EventScript_Giratina_1:
	givemon SPECIES_GIRATINA, 50, ITEM_MASTER_BALL
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewHouse_EventScript_Giratina_4
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewHouse_EventScript_Giratina_5
	hidemonpic
	msgbox NewHouse_EventScript_Articuno_Text_2
	return

NewHouse_EventScript_Giratina_4:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Giratina_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 4
	setflag FLAG_UNUSED_0x022
	call NicknamePartyMon
	return

NewHouse_EventScript_Giratina_5:
	playfanfare MUS_OBTAIN_ITEM
	msgbox NewHouse_EventScript_Giratina_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 4
	setflag FLAG_UNUSED_0x022
	call NicknameBoxMon
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


NewHouse_EventScript_Wailmer_Text_0:
	.string "Hello, would you like to see more?$"

NewHouse_EventScript_Wailmer_Text_1:
	.string "Choose your Pokemon wisely!$"

NewHouse_EventScript_Wailmer_Text_2:
	.string "Take care of your Pokemon!$"

NewHouse_EventScript_PokeballOne_Text_0:
	.string "Better not take another!$"

NewHouse_EventScript_Articuno_Text_0:
	.string "Do you want to choose Articuno?$"

NewHouse_EventScript_Articuno_Text_1:
	.string "Recieved Articuno!$"

NewHouse_EventScript_Articuno_Text_2:
	.string "No more room.$"

NewHouse_EventScript_Suicune_Text_0:
	.string "Do you want to choose Suicune?$"

NewHouse_EventScript_Suicune_Text_1:
	.string "Recieved Suicune!$"

NewHouse_EventScript_Palkia_Text_0:
	.string "Do you want to choose Palkia?$"

NewHouse_EventScript_Palkia_Text_1:
	.string "Recieved Palkia!$"

NewHouse_EventScript_Zapdos_Text_0:
	.string "Do you want to choose Zapdos?$"

NewHouse_EventScript_Zapdos_Text_1:
	.string "Recieved Zapdos!$"

NewHouse_EventScript_Raikou_Text_0:
	.string "Do you want to choose Raikou?$"

NewHouse_EventScript_Raikou_Text_1:
	.string "Recieved Raikou!$"

NewHouse_EventScript_Dialga_Text_0:
	.string "Do you want to choose Dialga?$"

NewHouse_EventScript_Dialga_Text_1:
	.string "Recieved Dialga!$"

NewHouse_EventScript_Moltres_Text_0:
	.string "Do you want to choose Moltres?$"

NewHouse_EventScript_Moltres_Text_1:
	.string "Recieved Moltres!$"

NewHouse_EventScript_Entei_Text_0:
	.string "Do you want to choose Entei?$"

NewHouse_EventScript_Entei_Text_1:
	.string "Recieved Entei!$"

NewHouse_EventScript_Giratina_Text_0:
	.string "Do you want to choose Giratina?$"

NewHouse_EventScript_Giratina_Text_1:
	.string "Recieved Giratina!$"

NicknamePartyMon_Text_0:
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
	.string "Transferred to PC$"

NewHouse_NotChosen::
	.string "You did not choose the Pokemon.$"
