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