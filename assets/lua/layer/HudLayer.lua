
--关闭按钮
local function menuCallbackCloseItem()
	CCDirector:sharedDirector():endToLua()
end

JOYSTICK_POS_X = 100
JOYSTICK_POS_Y = 100
JOYSTICK_DEAD_RADIUS =10
JOYSTICK_THRESHOLD =0.4

--操作图层
HudLayer={
	mButtonA=nil --按钮A
	,mJoystick =nil --摇杆
};

--类
function HudLayer:new(o)
	o = o or {}
	setmetatable(o, self)
	self.__index = self
	return o
end


--创建实例
function HudLayer:createHudLayer()
	local winSize = CCDirector:sharedDirector():getWinSize()
	self._instance = CCLayer:create()


	--关闭按钮
	local pCloseItem = CCMenuItemImage:create("images/CloseNormal.png","images/CloseSelected.png" )
	pCloseItem:setPosition(winSize.width-40,winSize.height-40)
	pCloseItem:registerScriptTapHandler(menuCallbackCloseItem)
	local pMenu = CCMenu:createWithItem(pCloseItem)
	pMenu:setPosition( 0,0 );
	self._instance :addChild(pMenu, 1);
	--
	--local  proxy = CCBProxy:create()
	--按钮A
	self.mButtonA = SneakyButton:createSneakyButton()
	self.mButtonA:initWithRect(CCRectMake(0,0,0,0));
	self.mButtonA:setIsToggleable(false);
	self.mButtonA:setIsHoldable(true);

	CCSpriteFrameCache:sharedSpriteFrameCache():addSpriteFramesWithFile("UI.plist")

	local btnASkin =SneakyButtonSkinnedBase:create()
	btnASkin:autorelease()
	btnASkin:init()
	btnASkin:setPosition(winSize.width - 100, 50)
	btnASkin:setDefaultSprite(
	CCSprite:createWithSpriteFrameName("button-default.png"))
	btnASkin:setPressSprite(
	CCSprite:createWithSpriteFrameName("button-pressed.png"))
	btnASkin:setActivatedSprite(
	CCSprite:createWithSpriteFrameName("button-activated.png"))
	btnASkin:setButton(self.mButtonA);

	self._instance :addChild(btnASkin)


	--摇杆
	self.mJoystick =  SneakyJoystick:createSneakyJoystick()
	self.mJoystick:initWithRect(CCRectMake(0,0,0,0))
	self.mJoystick:setAutoCenter(true)
	self.mJoystick:setHasDeadzone(true)
	self.mJoystick:setDeadRadius(JOYSTICK_DEAD_RADIUS)
	
	local jstickSkin = SneakyJoystickSkinnedBase:create()
	jstickSkin:autorelease()
	jstickSkin:init()
	jstickSkin:setBackgroundSprite(CCSprite:createWithSpriteFrameName("JoyStick-base.png"))
	jstickSkin:setThumbSprite(CCSprite:createWithSpriteFrameName("JoyStick-thumb.png"))
	jstickSkin:getThumbSprite():setScale(2.0)
	jstickSkin:getBackgroundSprite():setScale(2.0);
	jstickSkin:setPosition(JOYSTICK_POS_X, JOYSTICK_POS_Y)
	jstickSkin:setJoystick(self.mJoystick)
	self._instance :addChild(jstickSkin)
	
	return self._instance
end


function HudLayer:getInBtnState()
    local retState =InBtnState.IN_BTN_NO_PRESSED
    
    
    if self.mButtonA:getIsActive() then
		retState =InBtnState.IN_BTN_PRESSED
    end
	return retState
end