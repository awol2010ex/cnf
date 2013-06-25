require "lua/layer/GameLayer"

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
	sceneGame:addChild(createGameLayer())
	CCDirector:sharedDirector():runWithScene(sceneGame)
end

xpcall(main, __G__TRACKBACK__)
