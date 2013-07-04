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
        that._gameLayer:setInBtnState(that._hudLayer:getInBtnState())--按钮状态
        
        that._gameLayer:setInDirLRState(that._hudLayer:getInDirLRState())--左右
	    that._gameLayer:setInDirUDState(that._hudLayer:getInDirUDState())--上下
	    that._gameLayer:setVelocity(that._hudLayer.mJoystick:getVelocity())--上下
    end
    
    
    CCDirector:sharedDirector():getScheduler():scheduleScriptFunc(broadcastInput,1/32,false)
end

function GameScene._create()
	local o=GameScene:new()
	o:_init()
	return o
end

