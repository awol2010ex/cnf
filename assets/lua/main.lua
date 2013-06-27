require "lua/Defines"
require "lua/layer/GameLayer"
require "lua/layer/HudLayer"

require "lua/sprite/ActionSprite"
require "lua/sprite/Hero"
-- cclog
cclog = function(...)
	print(string.format(...))
end

-- for CCLuaEngine traceback
function __G__TRACKBACK__(msg)
	cclog("----------------------------------------")
	cclog("LUA ERROR: " .. tostring(msg) .. "\n")
	cclog(debug.traceback())
	cclog("----------------------------------------")
end

local function main()


	-- avoid memory leak
	collectgarbage("setpause", 100)
	collectgarbage("setstepmul", 5000)

	---------------
	

	local visibleSize = CCDirector:sharedDirector():getVisibleSize()
	local origin = CCDirector:sharedDirector():getVisibleOrigin()



	-- run
	local sceneGame = CCScene:create()
	local gameLayer =GameLayer:new()--游戏层
	local hudLayer =HudLayer:new()--操作层
	sceneGame:addChild(gameLayer:createGameLayer(),1)
	sceneGame:addChild(hudLayer:createHudLayer(),2)
	CCDirector:sharedDirector():runWithScene(sceneGame)
end

xpcall(main, __G__TRACKBACK__)
