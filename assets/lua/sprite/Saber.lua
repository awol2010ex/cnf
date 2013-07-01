
Saber=class("Saber",function()
    CCSpriteFrameCache:sharedSpriteFrameCache():addSpriteFramesWithFile("sprite/saber.plist")
	return ActionSprite._createWithSpriteFrameName("saber_idle0.png")
end)
Saber.__index=Saber

--生成精灵
function Saber:_init()
    ActionSprite._init(self)
    
    
    --站立动作
    local  idleFrames = CCArray:create()
    for i=0 , 7 ,1 do
       local frameName =string.format("saber_idle%d.png", i)
       --cclog(frameName)
       local frame = CCSpriteFrameCache:sharedSpriteFrameCache():spriteFrameByName(frameName)
       idleFrames:addObject(frame)
    end
    local idleAnimation = CCAnimation:createWithSpriteFrames(idleFrames,1.0 / 12.0)
	self._idleAction= CCRepeatForever:create(CCAnimate:create(idleAnimation))
    
    
    
    --行走动作
   local  walkFrames = CCArray:create()
   for i=0 , 10 ,1 do
       local frameName =string.format("saber_walk%d.png", i)
       --cclog(frameName)
      local frame = CCSpriteFrameCache:sharedSpriteFrameCache():spriteFrameByName(frameName)
      idleFrames:addObject(frame)
   end
    local walkAnimation = CCAnimation:createWithSpriteFrames(walkFrames,1.0 / 12.0)
	self._walkAction= CCRepeatForever:create(CCAnimate:create(walkAnimation))
end

function Saber:_create()
	local o=Saber:new()
	o:_init()
	return o
end