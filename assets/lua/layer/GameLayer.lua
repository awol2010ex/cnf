

--游戏图层
GameLayer=class("GameLayer",function()
	return CCLayer:create()
end)
GameLayer.__index=GameLayer

function GameLayer:_init()
	local winSize = CCDirector:sharedDirector():getWinSize()
	self._tileMap =nil--地图
	self._instance =nil --图层实例
	self._hero =nil --主角

	--
	--初始化地图
	self:initTileMap();

	--初始主角
	self:initHero();

end


--创建实例
function GameLayer._create()
	local o=GameLayer:new()
	o:_init()
	return o
end

--初始化地图
function GameLayer:initTileMap()
	local winSize = CCDirector:sharedDirector():getWinSize()
	self._tileMap = CCTMXTiledMap:create("map/0000000_hotel.tmx");
	local children =self._tileMap:getChildren();
	self._tileMap:setPosition(winSize.width/2-self._tileMap:getContentSize().width/2,winSize.height/2-self._tileMap:getContentSize().height/2)
	--抗锯齿
	for i=0 ,children:count()-1,1 do
		local pObject =tolua.cast(children:objectAtIndex(i),"CCTMXLayer")
		pObject:getTexture():setAliasTexParameters()
	end

	self:addChild(self._tileMap, -6);
end

--初始化主角
function GameLayer:initHero()
	local winSize = CCDirector:sharedDirector():getWinSize()

	self._hero = Hero:_create()
	self._hero :setPosition(winSize.width/2,winSize.height/2)
	self._hero:setDesiredPosition(self._hero :getPosition())

	self:addChild(self._hero , -5);

	self._hero:idle()
end

function GameLayer:setInBtnState(pBtnState)
	if pBtnState==InBtnState.IN_BTN_PRESSED then
		cclog("press A")
	end
end

