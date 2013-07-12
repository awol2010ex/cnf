
Saber=class("Saber",function()
	
	return ActionSprite._createWithSpriteFrameName("saber_idle0.png")
end)
Saber.__index=Saber

--生成精灵
function Saber:_init()
	ActionSprite._init(self)

	--中心距离
	self:setCenterToBottom(35.0);
	self:setCenterToSides(35.0);

    self:setWalkSpeed(240)
    local frameName =nil
    local frame =nil
	--站立动作
	self._idleFrames = CCArray:create()
	--10183
	for i=0 , 18 ,1 do
		frameName =string.format("saber_idle%d.png", i)
		frame = CCSpriteFrameCache:sharedSpriteFrameCache():spriteFrameByName(frameName)
        --frame:setOffset(-69,112)
		self._idleFrames:addObject(frame)
	end
	self._idleAnimation = CCAnimation:createWithSpriteFrames(self._idleFrames,1.0 / 12.0)
	self._idleAction= CCRepeatForever:create(CCAnimate:create(self._idleAnimation))
    self._idleAction:retain()


	--行走动作
	self._walkFrames = CCArray:create()
	for i=0 , 10 ,1 do
		frameName =string.format("saber_walk%d.png", i)
		frame = CCSpriteFrameCache:sharedSpriteFrameCache():spriteFrameByName(frameName)
        --frame:setOffset(-90,112)
        frame:setOffset(CCPointMake(-24,0))
		self._walkFrames :addObject(frame)
	end
	self._walkAnimation = CCAnimation:createWithSpriteFrames(self._walkFrames ,1.0 / 12.0)
	self._walkAction= CCRepeatForever:create(CCAnimate:create(self._walkAnimation))
    self._walkAction:retain()
    
    
    --攻击动作
	self._attackFrames = CCArray:create()
	for i=13 , 0 ,-1 do
		frameName =string.format("saber_attack_one%d.png", i)
		frame = CCSpriteFrameCache:sharedSpriteFrameCache():spriteFrameByName(frameName)
		
        --frame:setOffset(-46,98)
        frame:setOffset(CCPointMake(23,-14))
		self._attackFrames :addObject(frame)
	end
	self._attackFrames:retain()
	local that =self 
	local function callback()
	    cclog("callback")
	    that:idle()
	end
	self._attackAnimation = CCAnimation:createWithSpriteFrames(self._attackFrames ,1.0/12.0)
    self._attackAnimation:retain()
	self._attackAction= CCSequence:createWithTwoActions(CCAnimate:create(self._attackAnimation ) ,CCCallFunc:create(callback) )
    self._attackAction:retain()
end

function Saber:_create()
	local o=Saber:new()
	o:_init()
	return o
end
