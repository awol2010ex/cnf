--关闭按钮
local function menuCallbackCloseItem()
	CCDirector:sharedDirector():endToLua()
end
--初始化地图
local function initTileMap(gameLayer)
	local winSize = CCDirector:sharedDirector():getWinSize()
	local _tileMap = CCTMXTiledMap:create("map/0000000_hotel.tmx");
	local children =_tileMap:getChildren();
	_tileMap:setPosition(winSize.width/2-_tileMap:getContentSize().width/2,winSize.height/2-_tileMap:getContentSize().height/2)
	--抗锯齿
	for i=0 ,children:count()-1,1 do
		local pObject =tolua.cast(children:objectAtIndex(i),"CCTMXLayer")
		pObject:getTexture():setAliasTexParameters()
	end

	gameLayer:addChild(_tileMap, -6);
end

--初始化主角
local function initHero(gameLayer)
    local winSize = CCDirector:sharedDirector():getWinSize()
    
    local _hero = Hero:new()
    local _hero_sprite =_hero:createSprite()
    _hero_sprite:setPosition(winSize.width/2,winSize.height/2)
    _hero:setDesiredPosition(_hero_sprite:getPosition())
	
    gameLayer:addChild(_hero_sprite, -5);
    cclog("initHero:Hero idle")
    
    _hero:idle()
end

function createGameLayer()
	local winSize = CCDirector:sharedDirector():getWinSize()
	local gameLayer = CCLayer:create()


	--关闭按钮
	local pCloseItem = CCMenuItemImage:create("images/CloseNormal.png","images/CloseSelected.png" )
	pCloseItem:setPosition(winSize.width-40,winSize.height-40)
	pCloseItem:registerScriptTapHandler(menuCallbackCloseItem)
	local pMenu = CCMenu:createWithItem(pCloseItem)
	pMenu:setPosition( 0,0 );
	gameLayer:addChild(pMenu, 1);
	--
	--初始化地图
	initTileMap(gameLayer);

	--初始主角
	initHero(gameLayer);

	return gameLayer
end