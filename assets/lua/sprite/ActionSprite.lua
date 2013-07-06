--活动的精灵
ActionSprite=class("ActionSprite",function(_frameName)
	return CCSprite:createWithSpriteFrameName(_frameName)
end)
ActionSprite.__index=ActionSprite

function ActionSprite:_init()
    self._idleAction=nil--站立动作
    self._idleFrames =nil
    self._idleAnimation =nil
    
	self._attackAction = nil--攻击动作
	
	self._walkAction = nil--行走动作
	self._walkFrames =nil
	self._walkAnimation =nil
	
	self._hurtAction = nil--受伤动作
	self._knockedOutAction = nil--倒下动作
	--状态
	self._actionState =ActionState.kActionStateNone
	--方向
	self._velocity = CCPointMake(0,0)
	self._desiredPosition =CCPointMake(0,0)--期望位置
	
	self._walkSpeed =80--步速
	
	
	
end
function ActionSprite._createWithSpriteFrameName(_frameName)
	local o=ActionSprite.new(_frameName)
	o:_init()
	return o
end
--停留
function ActionSprite:idle()
    if ActionState.kActionStateIdle ~=self._actionState then
        self:stopAllActions()
        self:lazyInit()
		self:runAction(self._idleAction)
		self._actionState = ActionState.kActionStateIdle
		self._velocity = CCPointMake(0,0)
    end
end
--攻击
function ActionSprite:attack()

end
--将要移动的位置
function ActionSprite:setDesiredPosition(p)
    self._desiredPosition =p
end

function ActionSprite:setWalkSpeed(p)
    self._walkSpeed =p
end


--行走
function ActionSprite:walkWithDirection(direction)
	if self._actionState == ActionState.kActionStateIdle then
	    
		self:stopAllActions()
		self:lazyInit()
		self:runAction(self._walkAction)
		self._actionState = ActionState.kActionStateWalk
	end
	if self._actionState == ActionState.kActionStateWalk then
	
		self._velocity = ccp(direction.x * self._walkSpeed, direction.y * self._walkSpeed)
		if self._velocity.x >= 0 then 
		
			self:setScaleX(1.0)
		
		else
		
			self:setScaleX(-1.0)
		end
		
	end
end

--更新精灵位置
function ActionSprite:updateWhileWalk(dt)
	if self._actionState == ActionState.kActionStateWalk then
		self._desiredPosition = ccpAdd(ccp(self:getPosition()), ccpMult(self._velocity, dt))
		
	end
end

function ActionSprite:lazyInit() --延迟初始化
	if tolua.isnull(self._walkAction) or tolua.isnull(self._idleAction) then 
	      cclog("lazyInit")
		  self:_init()
	end
end

--将要移动的位置
function  ActionSprite:getDesiredPosition()
    return self._desiredPosition
end
--状态
function ActionSprite:getActionState()
    return self._actionState
end

function ActionSprite:getCenterToBottom()
    return self._centerToBottom
end
function ActionSprite:getCenterToSides()
    return self._centerToSides
end

function ActionSprite:setCenterToBottom(p)
    self._centerToBottom=p
end
function ActionSprite:setCenterToSides(p)
    self._centerToSides=p
end
