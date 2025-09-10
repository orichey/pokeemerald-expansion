@ Starting from here, these movements are considered
@ 'safe' (won't put follower into a Pokeball)
Common_Movement_FollowerSafeStart::
Common_Movement_QuestionMark:
	emote_question_mark
	step_end

Common_Movement_ExclamationMark:
	emote_exclamation_mark
	step_end

Common_Movement_Delay48:
	delay_16
	delay_16
	delay_16
	step_end

Common_Movement_FacePlayer:
	face_player
	step_end

Common_Movement_FaceAwayPlayer:
	face_away_player
	step_end

Common_Movement_FaceOriginalDirection:
	face_original_direction
	step_end

Common_Movement_WalkInPlaceFasterLeft:
	walk_in_place_faster_left
	step_end

Common_Movement_WalkInPlaceFasterUp:
	walk_in_place_faster_up
	step_end

Common_Movement_WalkInPlaceFasterRight:
	walk_in_place_faster_right
	step_end

Common_Movement_WalkInPlaceFasterDown:
	walk_in_place_faster_down
	step_end

Common_Movement_WalkInPlaceFastRight:
	walk_in_place_fast_right
	step_end

Common_Movement_WalkInPlaceFastLeft:
	walk_in_place_fast_left
	step_end

Common_Movement_WalkInPlaceFastUp:
	walk_in_place_fast_up
	step_end

Common_Movement_WalkInPlaceFastDown:
	walk_in_place_fast_down
	step_end

Common_Movement_FaceRight:
	face_right
	step_end

Common_Movement_FaceLeft:
	face_left
	step_end

Common_Movement_FaceDown:
	face_down
	step_end

Common_Movement_FaceUp:
	face_up
	step_end

Common_Movement_WalkInPlaceDown:
	walk_in_place_down
	step_end

Common_Movement_WalkInPlaceLeft:
	walk_in_place_left
	step_end

Common_Movement_WalkInPlaceRight:
	walk_in_place_right
	step_end

Common_Movement_WalkInPlaceUp:
	walk_in_place_up
	step_end

@ End of follower-safe movements
Common_Movement_FollowerSafeEnd::
	step_end

Common_Movement_WalkUp6:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Common_Movement_WalkUp4:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Common_Movement_Delay32:
	delay_16
	delay_16
	step_end

Common_Movement_WalkUp:
	walk_up
	step_end

@ Unused
Common_Movement_WalkUp2::
	walk_up
	walk_up
	step_end

Common_Movement_WalkDown::
	walk_down
	step_end

Common_Movement_WalkDown2::
	walk_down
	walk_down
	step_end

Common_Movement_WalkDownFast::
	walk_fast_down
	step_end

Common_Movement_WalkRight::
	walk_right
	step_end

Common_Movement_WalkLeft::
	walk_left
	step_end

Common_Movement_WalkLeft2::
	walk_left
	walk_left
	step_end

Common_Movement_Shove::
	lock_anim
	lock_facing_direction
	walk_faster_right
	walk_faster_left
	unlock_anim
	unlock_facing_direction
	step_end

Common_Movement_ShoveDown::
	lock_anim
	lock_facing_direction
	walk_faster_down
	walk_faster_up
	unlock_anim
	unlock_facing_direction
	step_end

Common_Movement_ShoveLeft::
	lock_anim
	lock_facing_direction
	walk_faster_left
	walk_faster_right
	unlock_anim
	unlock_facing_direction
	step_end

Common_Movement_ShoveRight::
	lock_anim
	lock_facing_direction
	walk_faster_right
	walk_faster_left
	unlock_anim
	unlock_facing_direction
	step_end

Common_Movement_ShoveUp::
	lock_anim
	lock_facing_direction
	walk_faster_up
	walk_faster_down
	unlock_anim
	unlock_facing_direction
	step_end

Common_Movement_ShoveDownSlower::
	lock_anim
	lock_facing_direction
	walk_fast_down
	walk_fast_up
	unlock_anim
	unlock_facing_direction
	step_end

Common_Movement_ShoveLeftSlower::
	lock_anim
	lock_facing_direction
	walk_fast_left
	walk_fast_right
	unlock_anim
	unlock_facing_direction
	step_end

Common_Movement_ShoveRightSlower::
	lock_anim
	lock_facing_direction
	walk_fast_right
	walk_fast_left
	unlock_anim
	unlock_facing_direction
	step_end

Common_Movement_ShoveUpSlower::
	lock_anim
	lock_facing_direction
	walk_fast_up
	walk_fast_down
	unlock_anim
	unlock_facing_direction
	step_end

Common_Movement_ShoveDownSlow::
	lock_anim
	lock_facing_direction
	walk_down
	walk_up
	unlock_anim
	unlock_facing_direction
	step_end

Common_Movement_ShoveLeftSlow::
	lock_anim
	lock_facing_direction
	walk_left
	walk_right
	unlock_anim
	unlock_facing_direction
	step_end

Common_Movement_ShoveRightSlow::
	lock_anim
	lock_facing_direction
	walk_right
	walk_left
	unlock_anim
	unlock_facing_direction
	step_end

Common_Movement_ShoveUpSlow::
	lock_anim
	lock_facing_direction
	walk_up
	walk_down
	unlock_anim
	unlock_facing_direction
	step_end

Common_Movement_JumpInPlaceDown::
	jump_in_place_down
	step_end

Common_Movement_JumpInPlaceRight::
	jump_in_place_right
	step_end

Common_Movement_JumpInPlaceUp::
	jump_in_place_up
	step_end

Common_Movement_JumpInPlaceLeft::
	jump_in_place_left
	step_end

Common_Movement_LockFacingDirection::
	lock_facing_direction
	step_end

Common_Movement_UnlockFacingDirection::
	unlock_facing_direction
	step_end

Common_Movement_JumpLeft::
	jump_left
	step_end

Common_Movement_JumpRight::
	jump_right
	step_end

Common_Movement_JumpUp::
	jump_up
	step_end

Common_Movement_JumpDown::
	jump_down
	step_end