
Ichigo=class("Ichigo",function()
	
	return ActionSprite._createWithSpriteFrameName("ichigo_idle0.png")
end)
Ichigo.__index=Ichigo

--生成精灵
function Ichigo:_init()
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
	for i=0 , 82 ,1 do
		frameName =string.format("ichigo_idle%d.png", i)
		frame = CCSpriteFrameCache:sharedSpriteFrameCache():spriteFrameByName(frameName)
        --frame:setOffset(-69,112)
		self._idleFrames:addObject(frame)
	end
	self._idleAnimation = CCAnimation:createWithSpriteFrames(self._idleFrames,1.0 / 12.0)
	self._idleAction= CCRepeatForever:create(CCAnimate:create(self._idleAnimation))
    self._idleAction:retain()


	--行走动作
	self._walkFrames = CCArray:create()
	for i=0 , 5,1 do
		frameName =string.format("ichigo_run%d.png", i)
		frame = CCSpriteFrameCache:sharedSpriteFrameCache():spriteFrameByName(frameName)
        --frame:setOffset(-90,112)
        frame:setOffset(CCPointMake(-11,-13))
		self._walkFrames :addObject(frame)
	end
	self._walkAnimation = CCAnimation:createWithSpriteFrames(self._walkFrames ,1.0 / 12.0)
	self._walkAction= CCRepeatForever:create(CCAnimate:create(self._walkAnimation))
    self._walkAction:retain()
    
    
    --攻击动作
	self._attackFrames = CCArray:create()
	for i=0 , 6 ,1 do
		frameName =string.format("ichigo_attack_one%d.png", i)
		frame = CCSpriteFrameCache:sharedSpriteFrameCache():spriteFrameByName(frameName)
		
        --frame:setOffset(-30, 100)
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
    
    
    
    
    --攻击效果
   
    
	self._attackHitFrames = CCArray:create();
	for  i = 0, 4, 1 do
			frame =CCSpriteFrameCache:sharedSpriteFrameCache():spriteFrameByName("ichigo_attack_one_hit"..i..".png");
			
            if (i == 0) then
				--frame->setOffset(CCPointMake(-61, 159));
				frame:setOffset(CCPointMake(-30, 58));
			elseif (i == 1) then
				--frame->setOffset(CCPointMake(-43, 159));
				frame:setOffset(CCPointMake(-12, 58));
			elseif (i == 2) then
				--frame->setOffset(CCPointMake(27, 153));
				frame:setOffset(CCPointMake(58, 52));
			elseif (i == 3) then
				--frame->setOffset(CCPointMake(27, 81));
				frame:setOffset(CCPointMake(58, -20));
			elseif (i == 4) then
				--frame->setOffset(CCPointMake(27, 81));
				frame:setOffset(CCPointMake(58, -20));
            end
			self._attackHitFrames:addObject(frame);
			   
	end
	 --攻击效果 初始帧
	local emptyFrame =CCSpriteFrameCache:sharedSpriteFrameCache():spriteFrameByName("ichigo_attack_one_hit0.png");
    
	
	--攻击效果
	self._attackHitAnimation = CCAnimation:createWithSpriteFrames(
				self._attackHitFrames, 1.0 / 12.0);


    local _attackHitActionList =CCArray:create()
    _attackHitActionList:addObject(CCDelayTime:create(1.0 / 12.0))
    _attackHitActionList:addObject(CCShow:create())
    _attackHitActionList:addObject(CCAnimate:create(self._attackHitAnimation) )
    _attackHitActionList:addObject(CCHide:create())
    
	self._attackHitAction=CCSequence:create(_attackHitActionList	 )
	self._attackHitAction:retain();
	
	
	self._hitSprite  =CCSprite:createWithSpriteFrame(emptyFrame)
	self._hitSprite:setVisible(false)
    self._hitSprite:retain()
	
end

function Ichigo:_create()
	local o=Ichigo:new()
	o:_init()
	return o
end
