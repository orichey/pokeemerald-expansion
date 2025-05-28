# 1 "data/maps/PetalburgCity_House2/scripts.pory"

# 2 "data/maps/PetalburgCity_House2/scripts.pory"
PetalburgCity_House2_MapScripts::
# 3 "data/maps/PetalburgCity_House2/scripts.pory"
	.byte 0

PetalburgCity_House2_EventScript_Woman::
# 8 "data/maps/PetalburgCity_House2/scripts.pory"
	lockall
# 9 "data/maps/PetalburgCity_House2/scripts.pory"
	faceplayer
# 10 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox PetalburgCity_House2_EventScript_Woman_Text_0
# 11 "data/maps/PetalburgCity_House2/scripts.pory"
	releaseall
	end


PetalburgCity_House2_EventScript_SchoolKid::
# 16 "data/maps/PetalburgCity_House2/scripts.pory"
	lockall
# 17 "data/maps/PetalburgCity_House2/scripts.pory"
	faceplayer
# 18 "data/maps/PetalburgCity_House2/scripts.pory"
	msgbox PetalburgCity_House2_EventScript_SchoolKid_Text_0
# 19 "data/maps/PetalburgCity_House2/scripts.pory"
	releaseall
	end


PetalburgCity_House2_EventScript_Woman_Text_0:
# 10 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "My son has such silly ideas!$"

PetalburgCity_House2_EventScript_SchoolKid_Text_0:
# 18 "data/maps/PetalburgCity_House2/scripts.pory"
	.string "I read a book once that told me Treefall\n"
	.string "Woods used to be full of strong, large\l"
	.string "oak trees.\p"
	.string "It seems it would make sense to\n"
	.string "reforest with native species, but we\l"
	.string "seem insistent upon planting spruce.\p"
	.string "How does that impact the ecology of\n"
	.string "the forest?$"
