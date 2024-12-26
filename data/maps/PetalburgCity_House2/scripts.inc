PetalburgCity_House2_MapScripts::
	.byte 0

PetalburgCity_House2_EventScript_Woman::
	lockall
	faceplayer
	msgbox PetalburgCity_House2_EventScript_Woman_Text_0
	releaseall
	end


PetalburgCity_House2_EventScript_SchoolKid::
	lockall
	faceplayer
	msgbox PetalburgCity_House2_EventScript_SchoolKid_Text_0
	releaseall
	end


PetalburgCity_House2_EventScript_Woman_Text_0:
	.string "My son has such silly ideas!$"

PetalburgCity_House2_EventScript_SchoolKid_Text_0:
	.string "I read a book once that told me Treefall\n"
	.string "Woods used to be full of strong, large\l"
	.string "oak trees.\p"
	.string "It seems it would make sense to\n"
	.string "reforest with native species, but we\l"
	.string "seem insistent upon planting spruce.\p"
	.string "How does that impact the ecology of\n"
	.string "the forest?$"
