

--游戏图层
GameLayer={
    _tileMap =nil,--地图
    _instance =nil ,--图层实例
    _hero =nil --主角
};
--类
function GameLayer:new(o)
    o = o or {}   
    setmetatable(o, self)
    self.__index = self
    return o
end

--创建实例
function GameLayer:createGameLayer()
	local winSize = CCDirector:sharedDirector():getWinSize()
	self._instance = CCLayer:create()

	--
	--初始化地图
	self:initTileMap();

	--初始主角
	self:initHero();

	return self._instance 
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

	self._instance :addChild(self._tileMap, -6);
end

--初始化主角
function GameLayer:initHero()
    local winSize = CCDirector:sharedDirector():getWinSize()
    
    self._hero = Hero:new()
    local _hero_sprite =self._hero:createSprite()
    _hero_sprite:setPosition(winSize.width/2,winSize.height/2)
    self._hero:setDesiredPosition(_hero_sprite:getPosition())
	
    self._instance:addChild(_hero_sprite, -5);
    
    self._hero:idle()
end

