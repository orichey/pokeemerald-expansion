PetalburgCity_House2_2_MapScripts::
	.byte 0

PetalburgCity_House2_2_EventScript_Cut::
	lockall
	faceplayer
	msgbox PetalburgCity_House2_2_EventScript_Cut_Text_0
	applymovement 1, Common_Movement_FaceOriginalDirection
	releaseall
	end


PetalburgCity_House2_2_EventScript_Cut_Text_0:
	.string "Are you here for Cut too?\p"
	.string "Argh, I'd give you one, but one of those\n"
	.string "goons in orange stole my whole stock!\p"
	.string "This whole city used to rely on me for\n"
	.string "my HMs, but I can't be of use any more.\p"
	.string "I'm sorry, kid. I don't know where that\n"
	.string "hooligan got off to.$"
