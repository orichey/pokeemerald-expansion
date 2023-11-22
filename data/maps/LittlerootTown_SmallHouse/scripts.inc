LittlerootTown_SmallHouse_MapScripts::
	.byte 0

LittlerootTown_SmallHouse_EventScript_Mom::
	lock
	faceplayer
	msgbox LittlerootTown_SmallHouse_EventScript_Mom_Text_0
	release
	return


LittlerootTown_SmallHouse_EventScript_Kid::
	lock
	faceplayer
	msgbox LittlerootTown_SmallHouse_EventScript_Kid_Text_0
	release
	return


LittlerootTown_SmallHouse_EventScript_Mom_Text_0:
	.string "Nearly all of the towns and cities\n"
	.string "across ECODIA are experiencing\l"
	.string "different effects of climate collapse.\p"
	.string "Who knew there would be so many kinds\n"
	.string "of impacts?$"

LittlerootTown_SmallHouse_EventScript_Kid_Text_0:
	.string "I'm scared of growing up! Who will solve\n"
	.string "our problems?$"
