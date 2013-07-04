function CreatEnumTable(tbl, index) 
    
    local enumtbl = {} 
    local enumindex = index or 0 
    for i, v in ipairs(tbl) do 
        enumtbl[v] = enumindex + i 
    end 
    return enumtbl 
end 

ActionState={

    "kActionStateNone",
	"kActionStateIdle",
	"kActionStateAttack",
	"kActionStateWalk",
	"kActionStateHurt",
	"kActionStateKnockedOut"
}

ActionState =CreatEnumTable(ActionState)


InBtnState= {"IN_BTN_PRESSED", "IN_BTN_NO_PRESSED"}
InBtnState =CreatEnumTable(InBtnState)


InDirState= {
	"IN_DIR_RIGHT", "IN_DIR_UP", 
	"IN_DIR_LEFT", "IN_DIR_DOWN", 
	"IN_DIR_NO_PRESSED"}
	
InDirState =CreatEnumTable(InDirState)
