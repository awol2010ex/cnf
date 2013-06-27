--活动的精灵
ActionSprite={
	_idleAction=nil,--站立动作
	_attackAction = nil,--攻击动作
	_walkAction = nil,--行走动作
	_hurtAction = nil,--受伤动作
	_knockedOutAction = nil,--倒下动作
	_instance =nil ,--精灵实例
	--状态
	_actionState =ActionState.kActionStateNone,
	--方向
	_velocity = CCPointMake(0,0),
	_desiredPosition =CCPointMake(0,0)
}
--类
function ActionSprite:new(o)
    o = o or {}   
    setmetatable(o, self)
    self.__index = self
    return o
end


--停留
function ActionSprite:idle()

    
    if ActionState.kActionStateIdle ~=self._actionState then
        self._instance:stopAllActions()
		self._instance:runAction(self._idleAction)
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

