--活动的精灵
ActionSprite=class("ActionSprite",function()
	return CCSprite:create()
end)
ActionSprite.__index=ActionSprite

function ActionSprite:_init()
    self._idleAction=nil--站立动作
	self._attackAction = nil--攻击动作
	self._walkAction = nil--行走动作
	self._hurtAction = nil--受伤动作
	self._knockedOutAction = nil--倒下动作
	--状态
	self._actionState =ActionState.kActionStateNone
	--方向
	self._velocity = CCPointMake(0,0)
	self._desiredPosition =CCPointMake(0,0)
end
function ActionSprite:_create()
	local o=ActionSprite:new()
	o:_init()
	return o
end
--停留
function ActionSprite:idle()

    
    if ActionState.kActionStateIdle ~=self._actionState then
        self:stopAllActions()
		self:runAction(self._idleAction)
		self._actionState = ActionState.kActionStateIdle
		self._velocity = CCPointMake(0,0)
    end
end
--攻击
function ActionSprite:attack()

end

function ActionSprite:setDesiredPosition(p)
    self._desiredPosition =p
end

