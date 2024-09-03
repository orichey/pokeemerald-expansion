DewfordTown_House2_MapScripts::
	.byte 0

DewfordTown_House2_EventScript_Man::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SILK_SCARF, DewfordTown_House2_EventScript_ExplainSilkScarf
	msgbox DewfordTown_House2_Text_WantYouToHaveSilkScarf, MSGBOX_DEFAULT
	giveitem ITEM_SILK_SCARF
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_House2_EventScript_NoRoomForScarf
	setflag FLAG_RECEIVED_SILK_SCARF
	release
	end

DewfordTown_House2_EventScript_NoRoomForScarf::
	msgbox DewfordTown_House2_Text_NoRoom, MSGBOX_DEFAULT
	release
	end

DewfordTown_House2_EventScript_ExplainSilkScarf::
	msgbox DewfordTown_House2_Text_ExplainSilkScarf, MSGBOX_DEFAULT
	release
	end

DewfordTown_House2_EventScript_Boy::
	msgbox DewfordTown_House2_Text_BrawlySoCool, MSGBOX_NPC
	end

DewfordTown_House2_Text_WantYouToHaveSilkScarf:
	.string "Gorge your eyes on this!\p"
	.string "It's a SILK SCARF. It's right at the\n"
	.string "cutting edge of fashion, yeah!\p"
	.string "Oh, I can see your eyes twinkling!\n"
	.string "You appreciate my dazzling style!\p"
	.string "Oh, you're a delight!\n"
	.string "Here you go. I want you to have it!$"

DewfordTown_House2_Text_NoRoom:
	.string "Oh, you don't have room?\p"
	.string "Now, listen tight, this SCARF is a must-\n"
	.string "have! Why, I would sell all my items\l"
	.string "in order to get it!$"

DewfordTown_House2_Text_ExplainSilkScarf:
	.string "The SILK SCARF raises the power of\n"
	.string "NORMAL-type moves.\p"
	.string "It's a marvelous SCARF that will go\n"
	.string "with almost all POKéMON!$"

DewfordTown_House2_Text_BrawlySoCool:
	.string "Wow, you bothered to cross the sea\n"
	.string "to visit DEWFORD?\p"
	.string "Did you maybe come here because you\n"
	.string "heard about BRAWLY?\p"
	.string "He's so cool…\n"
	.string "Everyone idolizes him.$"

DewfordTown_House2_OldRod::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_House2_OldRod_2
	msgbox DewfordTown_House2_OldRod_Text_1
	giveitem ITEM_OLD_ROD
	msgbox DewfordTown_House2_OldRod_Text_2
	setflag FLAG_RECEIVED_OLD_ROD
	clearflag FLAG_UNUSED_0x02D
DewfordTown_House2_OldRod_1:
	release
	end

DewfordTown_House2_OldRod_2:
	msgbox DewfordTown_House2_OldRod_Text_0
	goto DewfordTown_House2_OldRod_1


DewfordTown_House2_Boy::
	lock
	faceplayer
	msgbox DewfordTown_House2_Boy_Text_0
	release
	end


DewfordTown_House2_OldRod_Text_0:
	.string "Caught anything good?$"

DewfordTown_House2_OldRod_Text_1:
	.string "You look like an adventurer!\p"
	.string "Here, take this!$"

DewfordTown_House2_OldRod_Text_2:
	.string "It ain't much, but you might be able to\n"
	.string "catch something with it.\p"
	.string "Especially now that the ocean is all\n"
	.string "around us! Wahah!$"

DewfordTown_House2_Boy_Text_0:
	.string "Greenhouse gases in the atmosphere\n"
	.string "trap heat from the sun, which has\l"
	.string "caused polar ice to melt.\p"
	.string "Now, Seaspray Town is almost entirely\n"
	.string "underwater!$"
