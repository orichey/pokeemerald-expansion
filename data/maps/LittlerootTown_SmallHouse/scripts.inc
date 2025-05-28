# 1 "data/maps/LittlerootTown_SmallHouse/scripts.pory"

# 2 "data/maps/LittlerootTown_SmallHouse/scripts.pory"
LittlerootTown_SmallHouse_MapScripts::
# 3 "data/maps/LittlerootTown_SmallHouse/scripts.pory"
	.byte 0

LittlerootTown_SmallHouse_EventScript_Mom::
# 7 "data/maps/LittlerootTown_SmallHouse/scripts.pory"
	lock
# 8 "data/maps/LittlerootTown_SmallHouse/scripts.pory"
	faceplayer
# 9 "data/maps/LittlerootTown_SmallHouse/scripts.pory"
	msgbox LittlerootTown_SmallHouse_EventScript_Mom_Text_0
# 10 "data/maps/LittlerootTown_SmallHouse/scripts.pory"
	release
	return


LittlerootTown_SmallHouse_EventScript_Kid::
# 14 "data/maps/LittlerootTown_SmallHouse/scripts.pory"
	lock
# 15 "data/maps/LittlerootTown_SmallHouse/scripts.pory"
	faceplayer
# 16 "data/maps/LittlerootTown_SmallHouse/scripts.pory"
	msgbox LittlerootTown_SmallHouse_EventScript_Kid_Text_0
# 17 "data/maps/LittlerootTown_SmallHouse/scripts.pory"
	release
	return


LittlerootTown_SmallHouse_EventScript_Mom_Text_0:
# 9 "data/maps/LittlerootTown_SmallHouse/scripts.pory"
	.string "Nearly all of the towns and cities\n"
	.string "across Ecodia are experiencing\l"
	.string "different effects of climate collapse.\p"
	.string "Who knew there would be so many kinds\n"
	.string "of impacts?$"

LittlerootTown_SmallHouse_EventScript_Kid_Text_0:
# 16 "data/maps/LittlerootTown_SmallHouse/scripts.pory"
	.string "I'm scared of growing up! Who will solve\n"
	.string "our problems?$"
