PetalburgCity_House1_MapScripts::
	.byte 0

PetalburgCity_House1_EventScript_Man::
	lockall
	faceplayer
	msgbox PetalburgCity_House1_EventScript_Man_Text_0
	releaseall
	end


PetalburgCity_House1_EventScript_Woman::
	lockall
	faceplayer
	msgbox PetalburgCity_House1_EventScript_Woman_Text_0
	releaseall
	end


PetalburgCity_House1_EventScript_Man_Text_0:
	.string "I made a living working as a logger.\p"
	.string "It's heartbreaking to know that future\n"
	.string "generations won't have the same\l"
	.string "economic opportunities I had.$"

PetalburgCity_House1_EventScript_Woman_Text_0:
	.string "My biggest concern with the\n"
	.string "reforestation project is that the new\l"
	.string "trees are all so ugly!\p"
	.string "Why did Anthrotech decide to plant\n"
	.string "nothing but spruce?$"
