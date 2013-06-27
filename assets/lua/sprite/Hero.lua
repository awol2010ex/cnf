

Hero = ActionSprite:new()

--生成精灵
function Hero:createSprite()
    
    CCSpriteFrameCache:sharedSpriteFrameCache():addSpriteFramesWithFile("sprite/saber.plist")
    
    --站立动作
    local  idleFrames = CCArray:create()
    for i=0 , 7 ,1 do
       local frameName =string.format("saber_idle%d.png", i)
       cclog(frameName)
       local frame = CCSpriteFrameCache:sharedSpriteFrameCache():spriteFrameByName(frameName)
       idleFrames:addObject(frame)
    end
    local idleAnimation = CCAnimation:createWithSpriteFrames(idleFrames,1.0 / 12.0)
	self._idleAction= CCRepeatForever:create(CCAnimate:create(idleAnimation))
    
    
    self._instance =CCSprite:createWithSpriteFrame(tolua.cast(idleFrames:objectAtIndex(0),"CCSpriteFrame"))
    
    
    return self._instance
end