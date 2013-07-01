GameScene=class("GameScene",function()
	return CCScene:create()
end)
GameScene.__index=GameScene

function GameScene:_init()
	self._gameLayer =GameLayer._create()--游戏层
	self._hudLayer =HudLayer._create()--操作层

	self:addChild(self._gameLayer,1)
	self:addChild(self._hudLayer,2)


    local that =self
    --按钮更新
    local function broadcastInput(dt)
        that._gameLayer:setInBtnState(that._hudLayer:getInBtnState())
    end
    
    
    self:scheduleUpdateWithPriorityLua(broadcastInput,0)
end

function GameScene._create()
	local o=GameScene:new()
	o:_init()
	return o
end

