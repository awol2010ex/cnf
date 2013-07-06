

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
	self.mInDirLRState =InDirState.IN_DIR_NO_PRESSED
	self.mInDirUDState =InDirState.IN_DIR_NO_PRESSED
	self._velocity =CCPointMake(0,0)
	--
	--初始化地图
	self:initTileMap();

	--初始主角
	self:initHero();


	local that =self
	--更新
	local function updateLayer(dt)
		that._hero:updateWhileWalk(dt)

		--更新位置
		that:updatePositions()
		--行走
		if (InDirState.IN_DIR_NO_PRESSED~= that.mInDirLRState  or InDirState.IN_DIR_NO_PRESSED~= that.mInDirUDState) then
			local v =that._velocity
			that._hero:walkWithDirection(v)
		else
			that._hero:idle() --站立
		end
	end


	self:scheduleUpdateWithPriorityLua(updateLayer,1)

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

	self._hero = loadstring("return ".."Saber".."._create()")()
	self._hero :setPosition(winSize.width/2,winSize.height/2-100)
	self._hero:setDesiredPosition(ccp(self._hero :getPosition()))

	self:addChild(self._hero , -5);

	self._hero:idle()
end

function GameLayer:setInBtnState(pBtnState)
	if pBtnState==InBtnState.IN_BTN_PRESSED then
		cclog("press A")
	end
end
--左右
function GameLayer:setInDirLRState(pLeftRightState)

	self.mInDirLRState = pLeftRightState;
end
--上下
function GameLayer:setInDirUDState(pUpDownState)

	self.mInDirUDState = pUpDownState;
end
--移动方向
function GameLayer:setVelocity(v)

	self._velocity = v;
end
--更新位置
function GameLayer:updatePositions()
	--英雄位置更新
	if self._hero:getActionState() == ActionState.kActionStateWalk then
		--self._hero :setPosition(self._hero:getDesiredPosition().x,self._hero:getDesiredPosition().y)
         cclog("x:%f,y:%f",self._hero:getDesiredPosition().x,self._hero:getDesiredPosition().y)
		local posX = math.min(
		self._tileMap:getPositionX()+  self._tileMap:getMapSize().width * self._tileMap:getTileSize().width- self._hero:getCenterToSides(),
		math.max(self._hero:getCenterToSides()+self._tileMap:getPositionX(),self._hero:getDesiredPosition().x)
		);
		local posY = math.min(
		self._tileMap:getPositionY()+  self._tileMap:getMapSize().height * self._tileMap:getTileSize().height- self._hero:getCenterToBottom(),
		math.max(self._hero:getCenterToBottom()+self._tileMap:getPositionY(),self._hero:getDesiredPosition().y)
		);

		local wall = self._tileMap:layerNamed("wall")
		--[[ 获得当前主角在地图中的格子位置 ]]--
		local tiledPos = self:tileCoordForPosition(ccp(posX-self._tileMap:getPositionX(), posY-self._tileMap:getPositionY()));
		--[[ 获取地图格子的唯一标识 ]]--
		cclog("x:%f,y:%f,width:%f,height:%f",tiledPos.x,tiledPos.y,self._tileMap:getMapSize().width,self._tileMap:getMapSize().height)
		local tiledGid = wall:tileGIDAt(CCPointMake(tiledPos.x,tiledPos.y));

		if tiledGid == 0 then

			self._hero:setPosition(posX, posY);
		end

	end
end


--所在地图位置
function GameLayer:tileCoordForPosition(pos)
	local mapTiledNum =self._tileMap:getMapSize()
	local tiledSize =  self._tileMap:getTileSize()

	local x = getIntPart( (pos.x ) / tiledSize.width  )
	local y = getIntPart( (pos.y ) / tiledSize.height )

	--[[ Cocos2d-x的默认Y坐标是由下至上的，所以要做一个相减操作 ]]--
	y = mapTiledNum.height - y;

	return ccp(x, y);
end

