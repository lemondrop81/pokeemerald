EventScript_UseSurf::
	lockall
	goto_if_unset FLAG_SURFBOARD, EventScript_CantSurf
	msgbox gText_WantToUseSurf, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseUseSurf
	msgbox gText_PlayerUsedSurf, MSGBOX_DEFAULT
	dofieldeffect FLDEFF_USE_SURF
EventScript_ReleaseUseSurf::
	releaseall
EventScript_EndUseSurf::
	end

EventScript_CantSurf:
	msgbox Text_CantSurf, MSGBOX_DEFAULT
	releaseall
	end

Text_CantSurf:
	.string "I might be able to surf with a surfboard.$" 