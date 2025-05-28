NewHouse_MapScripts::
# 2 "data/maps/NewHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewHouse_EventScript_BallDefault
	.byte 0


NewHouse_EventScript_BallDefault::
# 6 "data/maps/NewHouse/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 0
	return


NewHouse_EventScript_Wailmer::
# 10 "data/maps/NewHouse/scripts.pory"
	lock
# 11 "data/maps/NewHouse/scripts.pory"
	faceplayer
# 12 "data/maps/NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewHouse_EventScript_Wailmer_4
NewHouse_EventScript_Wailmer_3:
# 45 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Wailmer_Text_5
NewHouse_EventScript_Wailmer_1:
# 50 "data/maps/NewHouse/scripts.pory"
	waitmessage
# 51 "data/maps/NewHouse/scripts.pory"
	release
	end

NewHouse_EventScript_Wailmer_2:
# 13 "data/maps/NewHouse/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq NewHouse_EventScript_Wailmer_10
NewHouse_EventScript_Wailmer_9:
# 16 "data/maps/NewHouse/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq NewHouse_EventScript_Wailmer_13
NewHouse_EventScript_Wailmer_12:
# 19 "data/maps/NewHouse/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewHouse_EventScript_Wailmer_15
	goto NewHouse_EventScript_Wailmer_1

NewHouse_EventScript_Wailmer_4:
# 12 "data/maps/NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewHouse_EventScript_Wailmer_6
	goto NewHouse_EventScript_Wailmer_3

NewHouse_EventScript_Wailmer_6:
# 12 "data/maps/NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewHouse_EventScript_Wailmer_2
	goto NewHouse_EventScript_Wailmer_3

NewHouse_EventScript_Wailmer_10:
# 14 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Wailmer_Text_0
	goto NewHouse_EventScript_Wailmer_9

NewHouse_EventScript_Wailmer_13:
# 17 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Wailmer_Text_0
	goto NewHouse_EventScript_Wailmer_12

NewHouse_EventScript_Wailmer_15:
# 20 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Wailmer_Text_1
# 21 "data/maps/NewHouse/scripts.pory"
	closemessage
# 22 "data/maps/NewHouse/scripts.pory"
	delay 60
# 23 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Wailmer_Text_2
# 24 "data/maps/NewHouse/scripts.pory"
	closemessage
# 25 "data/maps/NewHouse/scripts.pory"
	applymovement 1, FaceLeft
# 26 "data/maps/NewHouse/scripts.pory"
	waitmovement 0
# 27 "data/maps/NewHouse/scripts.pory"
	delay 60
# 28 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Wailmer_Text_3
# 29 "data/maps/NewHouse/scripts.pory"
	closemessage
# 30 "data/maps/NewHouse/scripts.pory"
	delay 60
# 31 "data/maps/NewHouse/scripts.pory"
	applymovement 1, FacePlayer
# 32 "data/maps/NewHouse/scripts.pory"
	waitmovement 0
# 33 "data/maps/NewHouse/scripts.pory"
	delay 45
# 34 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Wailmer_Text_4
# 41 "data/maps/NewHouse/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 1
	goto NewHouse_EventScript_Wailmer_1


NewHouse_EventScript_PokeballOne::
# 56 "data/maps/NewHouse/scripts.pory"
	lockall
# 57 "data/maps/NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewHouse_EventScript_PokeballOne_4
NewHouse_EventScript_PokeballOne_3:
# 66 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_PokeballOne_Text_1
NewHouse_EventScript_PokeballOne_1:
# 68 "data/maps/NewHouse/scripts.pory"
	waitmessage
# 69 "data/maps/NewHouse/scripts.pory"
	releaseall
	end

NewHouse_EventScript_PokeballOne_2:
# 58 "data/maps/NewHouse/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewHouse_EventScript_PokeballOne_9
# 62 "data/maps/NewHouse/scripts.pory"
	call NewHouse_EventScript_Articuno
	goto NewHouse_EventScript_PokeballOne_1

NewHouse_EventScript_PokeballOne_4:
# 57 "data/maps/NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewHouse_EventScript_PokeballOne_6
	goto NewHouse_EventScript_PokeballOne_3

NewHouse_EventScript_PokeballOne_6:
# 57 "data/maps/NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewHouse_EventScript_PokeballOne_2
	goto NewHouse_EventScript_PokeballOne_3

NewHouse_EventScript_PokeballOne_9:
# 59 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_PokeballOne_Text_0
	goto NewHouse_EventScript_PokeballOne_1


NewHouse_EventScript_PokeballTwo::
# 74 "data/maps/NewHouse/scripts.pory"
	lockall
# 75 "data/maps/NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewHouse_EventScript_PokeballTwo_4
NewHouse_EventScript_PokeballTwo_3:
# 84 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_PokeballOne_Text_1
NewHouse_EventScript_PokeballTwo_1:
# 86 "data/maps/NewHouse/scripts.pory"
	waitmessage
# 87 "data/maps/NewHouse/scripts.pory"
	releaseall
	end

NewHouse_EventScript_PokeballTwo_2:
# 76 "data/maps/NewHouse/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewHouse_EventScript_PokeballTwo_9
# 80 "data/maps/NewHouse/scripts.pory"
	call NewHouse_EventScript_Zapdos
	goto NewHouse_EventScript_PokeballTwo_1

NewHouse_EventScript_PokeballTwo_4:
# 75 "data/maps/NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewHouse_EventScript_PokeballTwo_6
	goto NewHouse_EventScript_PokeballTwo_3

NewHouse_EventScript_PokeballTwo_6:
# 75 "data/maps/NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewHouse_EventScript_PokeballTwo_2
	goto NewHouse_EventScript_PokeballTwo_3

NewHouse_EventScript_PokeballTwo_9:
# 77 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_PokeballOne_Text_0
	goto NewHouse_EventScript_PokeballTwo_1


NewHouse_EventScript_PokeballThree::
# 92 "data/maps/NewHouse/scripts.pory"
	lockall
# 93 "data/maps/NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x020, NewHouse_EventScript_PokeballThree_4
NewHouse_EventScript_PokeballThree_3:
# 102 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_PokeballOne_Text_1
NewHouse_EventScript_PokeballThree_1:
# 104 "data/maps/NewHouse/scripts.pory"
	waitmessage
# 105 "data/maps/NewHouse/scripts.pory"
	releaseall
	end

NewHouse_EventScript_PokeballThree_2:
# 94 "data/maps/NewHouse/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq NewHouse_EventScript_PokeballThree_9
# 98 "data/maps/NewHouse/scripts.pory"
	call NewHouse_EventScript_Moltres
	goto NewHouse_EventScript_PokeballThree_1

NewHouse_EventScript_PokeballThree_4:
# 93 "data/maps/NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x021, NewHouse_EventScript_PokeballThree_6
	goto NewHouse_EventScript_PokeballThree_3

NewHouse_EventScript_PokeballThree_6:
# 93 "data/maps/NewHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x022, NewHouse_EventScript_PokeballThree_2
	goto NewHouse_EventScript_PokeballThree_3

NewHouse_EventScript_PokeballThree_9:
# 95 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_PokeballOne_Text_0
	goto NewHouse_EventScript_PokeballThree_1


NewHouse_EventScript_Articuno::
# 111 "data/maps/NewHouse/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 112 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Articuno_Text_0, MSGBOX_YESNO
# 114 "data/maps/NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHouse_EventScript_Articuno_1
# 140 "data/maps/NewHouse/scripts.pory"
	hidemonpic
# 141 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_NotChosen
	return

NewHouse_EventScript_Articuno_1:
# 115 "data/maps/NewHouse/scripts.pory"
	givemon SPECIES_CHARMANDER, 5
# 116 "data/maps/NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewHouse_EventScript_Articuno_4
# 125 "data/maps/NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewHouse_EventScript_Articuno_5
# 135 "data/maps/NewHouse/scripts.pory"
	hidemonpic
# 136 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Articuno_Text_2
	return

NewHouse_EventScript_Articuno_4:
# 117 "data/maps/NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 118 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Articuno_Text_1
# 119 "data/maps/NewHouse/scripts.pory"
	removeobject 2
# 120 "data/maps/NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 121 "data/maps/NewHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 122 "data/maps/NewHouse/scripts.pory"
	call NicknamePartyMon
# 123 "data/maps/NewHouse/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 1
	return

NewHouse_EventScript_Articuno_5:
# 126 "data/maps/NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 127 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Articuno_Text_1
# 128 "data/maps/NewHouse/scripts.pory"
	removeobject 2
# 129 "data/maps/NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x020
# 130 "data/maps/NewHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 131 "data/maps/NewHouse/scripts.pory"
	call NicknameBoxMon
# 132 "data/maps/NewHouse/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 1
	return


NewHouse_EventScript_Zapdos::
# 147 "data/maps/NewHouse/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 148 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Zapdos_Text_0, MSGBOX_YESNO
# 150 "data/maps/NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHouse_EventScript_Zapdos_1
# 176 "data/maps/NewHouse/scripts.pory"
	hidemonpic
# 177 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_NotChosen
	return

NewHouse_EventScript_Zapdos_1:
# 151 "data/maps/NewHouse/scripts.pory"
	givemon SPECIES_MUDKIP, 5
# 152 "data/maps/NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewHouse_EventScript_Zapdos_4
# 161 "data/maps/NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewHouse_EventScript_Zapdos_5
# 171 "data/maps/NewHouse/scripts.pory"
	hidemonpic
# 172 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Articuno_Text_2
	return

NewHouse_EventScript_Zapdos_4:
# 153 "data/maps/NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 154 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Zapdos_Text_1
# 155 "data/maps/NewHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 156 "data/maps/NewHouse/scripts.pory"
	removeobject 3
# 157 "data/maps/NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 158 "data/maps/NewHouse/scripts.pory"
	call NicknamePartyMon
# 159 "data/maps/NewHouse/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 1
	return

NewHouse_EventScript_Zapdos_5:
# 162 "data/maps/NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 163 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Zapdos_Text_1
# 164 "data/maps/NewHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 165 "data/maps/NewHouse/scripts.pory"
	removeobject 3
# 166 "data/maps/NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 167 "data/maps/NewHouse/scripts.pory"
	call NicknameBoxMon
# 168 "data/maps/NewHouse/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 1
	return


NewHouse_EventScript_Moltres::
# 183 "data/maps/NewHouse/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 184 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Moltres_Text_0, MSGBOX_YESNO
# 186 "data/maps/NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewHouse_EventScript_Moltres_1
# 212 "data/maps/NewHouse/scripts.pory"
	hidemonpic
# 213 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_NotChosen
	return

NewHouse_EventScript_Moltres_1:
# 187 "data/maps/NewHouse/scripts.pory"
	givemon SPECIES_TURTWIG, 5
# 188 "data/maps/NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewHouse_EventScript_Moltres_4
# 197 "data/maps/NewHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewHouse_EventScript_Moltres_5
# 207 "data/maps/NewHouse/scripts.pory"
	hidemonpic
# 208 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Articuno_Text_2
	return

NewHouse_EventScript_Moltres_4:
# 189 "data/maps/NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 190 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Moltres_Text_1
# 191 "data/maps/NewHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 192 "data/maps/NewHouse/scripts.pory"
	removeobject 4
# 193 "data/maps/NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 194 "data/maps/NewHouse/scripts.pory"
	call NicknamePartyMon
# 195 "data/maps/NewHouse/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 1
	return

NewHouse_EventScript_Moltres_5:
# 198 "data/maps/NewHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 199 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Moltres_Text_1
# 200 "data/maps/NewHouse/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 201 "data/maps/NewHouse/scripts.pory"
	removeobject 4
# 202 "data/maps/NewHouse/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 203 "data/maps/NewHouse/scripts.pory"
	call NicknameBoxMon
# 204 "data/maps/NewHouse/scripts.pory"
	setvar VAR_UNUSED_0x40F9, 1
	return


NicknamePartyMon::
# 219 "data/maps/NewHouse/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 220 "data/maps/NewHouse/scripts.pory"
	hidemonpic
# 221 "data/maps/NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 222 "data/maps/NewHouse/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 223 "data/maps/NewHouse/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 230 "data/maps/NewHouse/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 231 "data/maps/NewHouse/scripts.pory"
	hidemonpic
# 232 "data/maps/NewHouse/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 235 "data/maps/NewHouse/scripts.pory"
	msgbox NicknameBoxMon_Text_0
	return

NicknameBoxMon_2:
# 233 "data/maps/NewHouse/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


# 242 "data/maps/NewHouse/scripts.pory"
FaceLeft:
# 243 "data/maps/NewHouse/scripts.pory"
	face_left
	step_end

# 246 "data/maps/NewHouse/scripts.pory"
FacePlayer:
# 247 "data/maps/NewHouse/scripts.pory"
	face_player
	step_end

NewHouse_EventScript_Text_Scientist::
# 251 "data/maps/NewHouse/scripts.pory"
	lock
# 252 "data/maps/NewHouse/scripts.pory"
	faceplayer
# 253 "data/maps/NewHouse/scripts.pory"
	msgbox NewHouse_EventScript_Text_Scientist_Text_0
# 254 "data/maps/NewHouse/scripts.pory"
	release
	return


NewHouse_EventScript_Wailmer_Text_0:
# 14 "data/maps/NewHouse/scripts.pory"
	.string "{PLAYER}, go ahead and take a Pokémon.$"

NewHouse_EventScript_Wailmer_Text_1:
# 20 "data/maps/NewHouse/scripts.pory"
	.string "Why, hello there, {PLAYER}!\n"
	.string "What brings you to my laboratory?$"

NewHouse_EventScript_Wailmer_Text_2:
# 23 "data/maps/NewHouse/scripts.pory"
	.string "Hm, I see. The climate events we are\n"
	.string "experiencing are very concerning.$"

NewHouse_EventScript_Wailmer_Text_3:
# 28 "data/maps/NewHouse/scripts.pory"
	.string "As you undoubtedly know, I have made my\n"
	.string "career in studying the climate of\l"
	.string "Ecodia.\p"
	.string "Never have I seen such frequency and\n"
	.string "intensity of these storms and\l"
	.string "disasters we now witness daily.$"

NewHouse_EventScript_Wailmer_Text_4:
# 34 "data/maps/NewHouse/scripts.pory"
	.string "{PLAYER}, I am getting old. In the past,\n"
	.string "I would have ventured out to see what\l"
	.string "it is we are dealing with. Instead,\l"
	.string "I must make a request of you.\p"
	.string "I must ask you to go survey the region.\n"
	.string "{PLAYER}, take a Pokémon from my table,\l"
	.string "and go see what is happening to Ecodia.$"

NewHouse_EventScript_Wailmer_Text_5:
# 45 "data/maps/NewHouse/scripts.pory"
	.string "Take care of your Pokémon, and be safe.\n"
	.string "I do not know what perils you may face.\p"
	.string "Trust in yourself, and remember to\n"
	.string "report back!$"

NewHouse_EventScript_PokeballOne_Text_0:
# 59 "data/maps/NewHouse/scripts.pory"
	.string "Maybe the Professor would like to talk.$"

NewHouse_EventScript_PokeballOne_Text_1:
# 66 "data/maps/NewHouse/scripts.pory"
	.string "Shouldn't take another!$"

NewHouse_EventScript_Articuno_Text_0:
# 112 "data/maps/NewHouse/scripts.pory"
	.string "It's a Charmander!\l"
	.string "Do you want to choose Charmander?$"

NewHouse_EventScript_Articuno_Text_1:
# 118 "data/maps/NewHouse/scripts.pory"
	.string "Recieved Charmander!$"

NewHouse_EventScript_Articuno_Text_2:
# 136 "data/maps/NewHouse/scripts.pory"
	.string "No more room.$"

NewHouse_EventScript_Zapdos_Text_0:
# 148 "data/maps/NewHouse/scripts.pory"
	.string "It's a Mudkip!\l"
	.string "Do you want to choose Mudkip?$"

NewHouse_EventScript_Zapdos_Text_1:
# 154 "data/maps/NewHouse/scripts.pory"
	.string "Recieved Mudkip!$"

NewHouse_EventScript_Moltres_Text_0:
# 184 "data/maps/NewHouse/scripts.pory"
	.string "It's a Turtwig!\l"
	.string "Do you want to choose Turtwig?$"

NewHouse_EventScript_Moltres_Text_1:
# 190 "data/maps/NewHouse/scripts.pory"
	.string "Recieved Turtwig!$"

NicknamePartyMon_Text_0:
# 219 "data/maps/NewHouse/scripts.pory"
	.string "Give a nickname?$"

NicknameBoxMon_Text_0:
# 235 "data/maps/NewHouse/scripts.pory"
	.string "Transferred to PC$"

NewHouse_EventScript_Text_Scientist_Text_0:
# 253 "data/maps/NewHouse/scripts.pory"
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
# 238 "data/maps/NewHouse/scripts.pory"
	.string "You did not choose the Pokémon.$"
