
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
	--站立动作
	self._idleFrames = CCArray:create()
	for i=0 , 18 ,1 do
		local frameName =string.format("saber_idle%d.png", i)
		local frame = CCSpriteFrameCache:sharedSpriteFrameCache():spriteFrameByName(frameName)

		self._idleFrames:addObject(frame)
	end
	self._idleAnimation = CCAnimation:createWithSpriteFrames(self._idleFrames,1.0 / 12.0)
	self._idleAction= CCRepeatForever:create(CCAnimate:create(self._idleAnimation))
    self._idleAction:retain()


	--行走动作
	self._walkFrames = CCArray:create()
	for i=0 , 10 ,1 do
		local frameName =string.format("saber_walk%d.png", i)
		local frame = CCSpriteFrameCache:sharedSpriteFrameCache():spriteFrameByName(frameName)


		self._walkFrames :addObject(frame)
	end
	self._walkAnimation = CCAnimation:createWithSpriteFrames(self._walkFrames ,1.0 / 12.0)
	self._walkAction= CCRepeatForever:create(CCAnimate:create(self._walkAnimation))
    self._walkAction:retain()
end

function Saber:_create()
	local o=Saber:new()
	o:_init()
	return o
end
