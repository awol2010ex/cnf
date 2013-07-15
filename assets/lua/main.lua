require "lua/extern"
require "lua/Defines"

require "lua/scene/GameScene"

require "lua/layer/GameLayer"
require "lua/layer/HudLayer"

require "lua/sprite/ActionSprite"
require "lua/sprite/Saber"
require "lua/sprite/Ichigo"
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
	




	-- run
	CCDirector:sharedDirector():runWithScene(GameScene._create())
end

xpcall(main, __G__TRACKBACK__)
