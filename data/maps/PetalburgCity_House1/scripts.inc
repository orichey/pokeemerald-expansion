# 1 "data/maps/PetalburgCity_House1/scripts.pory"

# 2 "data/maps/PetalburgCity_House1/scripts.pory"
PetalburgCity_House1_MapScripts::
# 3 "data/maps/PetalburgCity_House1/scripts.pory"
	.byte 0

PetalburgCity_House1_EventScript_Man::
# 7 "data/maps/PetalburgCity_House1/scripts.pory"
	lockall
# 8 "data/maps/PetalburgCity_House1/scripts.pory"
	faceplayer
# 9 "data/maps/PetalburgCity_House1/scripts.pory"
	msgbox PetalburgCity_House1_EventScript_Man_Text_0
# 10 "data/maps/PetalburgCity_House1/scripts.pory"
	releaseall
	end


PetalburgCity_House1_EventScript_Woman::
# 15 "data/maps/PetalburgCity_House1/scripts.pory"
	lockall
# 16 "data/maps/PetalburgCity_House1/scripts.pory"
	faceplayer
# 17 "data/maps/PetalburgCity_House1/scripts.pory"
	msgbox PetalburgCity_House1_EventScript_Woman_Text_0
# 18 "data/maps/PetalburgCity_House1/scripts.pory"
	releaseall
	end


PetalburgCity_House1_EventScript_Man_Text_0:
# 9 "data/maps/PetalburgCity_House1/scripts.pory"
	.string "I made a living working as a logger.\p"
	.string "It's heartbreaking to know that future\n"
	.string "generations won't have the same\l"
	.string "economic opportunities I had.$"

PetalburgCity_House1_EventScript_Woman_Text_0:
# 17 "data/maps/PetalburgCity_House1/scripts.pory"
	.string "My biggest concern with the\n"
	.string "reforestation project is that the new\l"
	.string "trees are all so ugly!\p"
	.string "Why did Anthrotech decide to plant\n"
	.string "nothing but spruce?$"
