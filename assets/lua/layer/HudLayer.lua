
--关闭按钮
local function menuCallbackCloseItem()
	CCDirector:sharedDirector():endToLua()
end
--摇杆位置
JOYSTICK_POS_X = 100
JOYSTICK_POS_Y = 100
JOYSTICK_DEAD_RADIUS =10
JOYSTICK_THRESHOLD =0.4

--操作图层
HudLayer=class("HudLayer",function()
	return CCLayer:create()
end)
HudLayer.__index=HudLayer

function HudLayer:_init()
    local winSize = CCDirector:sharedDirector():getWinSize()

    self.mButtonA=nil --按钮A
	self.mJoystick =nil --摇杆
	
	local visibleSize = CCDirector:sharedDirector():getVisibleSize()
    local origin = CCDirector:sharedDirector():getVisibleOrigin()
	
	--关闭按钮
	local pCloseItem = CCMenuItemImage:create("images/CloseNormal.png","images/CloseSelected.png" )
	pCloseItem:setPosition(origin.x+visibleSize.width-40,origin.y+visibleSize.height-40)
	pCloseItem:registerScriptTapHandler(menuCallbackCloseItem)
	local pMenu = CCMenu:createWithItem(pCloseItem)
	pMenu:setPosition( 0,0 );
	self:addChild(pMenu, 1);
	--
	--local  proxy = CCBProxy:create()
	--按钮A
	self.mButtonA = SneakyButton:createSneakyButton()
	self.mButtonA:initWithRect(CCRectMake(0,0,0,0));
	self.mButtonA:setIsToggleable(false);
	self.mButtonA:setIsHoldable(true);
	
	
	CCSpriteFrameCache:sharedSpriteFrameCache():addSpriteFramesWithFile("ui/UI.plist")

	local btnASkin =SneakyButtonSkinnedBase:create()
	--btnASkin:autorelease()
	btnASkin:init()
	btnASkin:setPosition(origin.x+visibleSize.width - 100, origin.y+50)
	btnASkin:setDefaultSprite(
	CCSprite:createWithSpriteFrameName("button-default.png"))
	btnASkin:setPressSprite(
	CCSprite:createWithSpriteFrameName("button-pressed.png"))
	btnASkin:setActivatedSprite(
	CCSprite:createWithSpriteFrameName("button-activated.png"))
	btnASkin:setButton(self.mButtonA);

	self:addChild(btnASkin)
	
	
	
	--摇杆
	self.mJoystick =  SneakyJoystick:createSneakyJoystick()
	self.mJoystick:initWithRect(CCRectMake(0,0,0,0))
	self.mJoystick:setAutoCenter(true)
	self.mJoystick:setHasDeadzone(true)
	self.mJoystick:setDeadRadius(JOYSTICK_DEAD_RADIUS)
	
	local jstickSkin = SneakyJoystickSkinnedBase:create()
	--jstickSkin:autorelease()
	jstickSkin:init()
	jstickSkin:setBackgroundSprite(CCSprite:createWithSpriteFrameName("JoyStick-base.png"))
	jstickSkin:setThumbSprite(CCSprite:createWithSpriteFrameName("JoyStick-thumb.png"))
	jstickSkin:getThumbSprite():setScale(2.0)
	jstickSkin:getBackgroundSprite():setScale(2.0);
	jstickSkin:setPosition(origin.x+JOYSTICK_POS_X, origin.y+JOYSTICK_POS_Y)
	jstickSkin:setJoystick(self.mJoystick)
	self:addChild(jstickSkin)
end
--创建实例
function HudLayer._create()
	local o=HudLayer:new()
	o:_init()
	return o
end



--按钮状态
function HudLayer:getInBtnState()
    local retState =InBtnState.IN_BTN_NO_PRESSED
    
    
    if self.mButtonA:getIsActive() then
		retState =InBtnState.IN_BTN_PRESSED
    end
	return retState
end


--左右
function HudLayer:getInDirLRState()

	local velocity = self.mJoystick:getVelocity()

    local left =false 
    if  velocity.x <= -JOYSTICK_THRESHOLD then 
       left =true
    end
    
    local right =false
    if velocity.x >= JOYSTICK_THRESHOLD  then
        right =true
    end

	local retState = InDirState.IN_DIR_NO_PRESSED
	if left then
		retState = InDirState.IN_DIR_LEFT
	elseif right then
		retState = InDirState.IN_DIR_RIGHT
	else
		retState = InDirState.IN_DIR_NO_PRESSED
    end
	return retState
end

--上下
function HudLayer:getInDirUDState()

	local velocity = self.mJoystick:getVelocity()
	
    local up =false
    if velocity.y >= JOYSTICK_THRESHOLD then
       up =true
    end
    
    local down =false
    if velocity.y <= -JOYSTICK_THRESHOLD then
       down =true
    end

	local retState = InDirState.IN_DIR_NO_PRESSED
	if up then
		retState = InDirState.IN_DIR_UP
	elseif down then
		retState = InDirState.IN_DIR_DOWN
	else
		retState = InDirState.IN_DIR_NO_PRESSED
    end
	return retState

end
