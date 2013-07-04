
Saber=class("Saber",function()
	CCSpriteFrameCache:sharedSpriteFrameCache():addSpriteFramesWithFile("sprite/saber.plist")
	return ActionSprite._createWithSpriteFrameName("saber_idle0.png")
end)
Saber.__index=Saber

--生成精灵
function Saber:_init()
	ActionSprite._init(self)

    


	--站立动作
	self._idleFrames = CCArray:create()
	for i=0 , 7 ,1 do
		local frameName =string.format("saber_idle%d.png", i)
		local frame = CCSpriteFrameCache:sharedSpriteFrameCache():spriteFrameByName(frameName)
		
		self._idleFrames:addObject(frame)
	end
	self._idleAnimation = CCAnimation:createWithSpriteFrames(self._idleFrames,1.0 / 12.0)
	self._idleAction= CCRepeatForever:create(CCAnimate:create(self._idleAnimation))



--行走动作
	self._walkFrames = CCArray:create()
	for i=0 , 10 ,1 do
		local frameName =string.format("saber_walk%d.png", i)
		local frame = CCSpriteFrameCache:sharedSpriteFrameCache():spriteFrameByName(frameName)
		
		
		self._walkFrames :addObject(frame)
	end
	self._walkAnimation = CCAnimation:createWithSpriteFrames(self._walkFrames ,1.0 / 12.0)
	self._walkAction= CCRepeatForever:create(CCAnimate:create(self._walkAnimation))
	
end

function Saber:_create()
	local o=Saber:new()
	o:_init()
	return o
end
