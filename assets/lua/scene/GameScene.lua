GameScene=class("GameScene",function()
	return CCScene:create()
end)
GameScene.__index=GameScene

function GameScene:_init()
	self._gameLayer =GameLayer:new()--游戏层
	self._hudLayer =HudLayer:new()--操作层

	self:addChild(self._gameLayer:createGameLayer(),1)
	self:addChild(self._hudLayer:_create(),2)

end

function GameScene:_create()
	local o=GameScene:new()
	o:_init()
	return o
end

function GameScene:broadcastInput(dt)

	self._gameLayer:setInBtnState(self._hudLayer:getInBtnState())
end
