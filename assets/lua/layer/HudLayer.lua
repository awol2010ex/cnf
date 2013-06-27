
--操作图层
HudLayer={
};

--关闭按钮
local function menuCallbackCloseItem()
	CCDirector:sharedDirector():endToLua()
end
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

	return self._instance 
end