Bodega_MapScripts::
	.byte 0


You_Dont_Work_Here::
# 4 "data/maps/Bodega/scripts.pory"
	lock
# 5 "data/maps/Bodega/scripts.pory"
	applymovement 1, Cashiers_Only
# 6 "data/maps/Bodega/scripts.pory"
	msgbox You_Dont_Work_Here_Text_0
# 7 "data/maps/Bodega/scripts.pory"
	waitmessage
# 8 "data/maps/Bodega/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Access_Denied
# 9 "data/maps/Bodega/scripts.pory"
	applymovement 1, Return_To_Register
# 10 "data/maps/Bodega/scripts.pory"
	waitmovement
# 11 "data/maps/Bodega/scripts.pory"
	release
	return


Buy_Goods::
	return


# 19 "data/maps/Bodega/scripts.pory"
Cashiers_Only:
# 20 "data/maps/Bodega/scripts.pory"
	face_down
	step_end

# 23 "data/maps/Bodega/scripts.pory"
Access_Denied:
# 24 "data/maps/Bodega/scripts.pory"
	walk_right
	step_end

# 27 "data/maps/Bodega/scripts.pory"
Return_To_Register:
# 28 "data/maps/Bodega/scripts.pory"
	face_right
	step_end

You_Dont_Work_Here_Text_0:
# 6 "data/maps/Bodega/scripts.pory"
	.string "Hey kid, you know this is employees only!$"
