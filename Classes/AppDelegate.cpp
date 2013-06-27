#include "cocos2d.h"
#include "AppDelegate.h"
#include "SimpleAudioEngine.h"
#include "script_support/CCScriptSupport.h"
#include "CCLuaEngine.h"

#include "Lua_extensions_CCB.h"
#include "Sneaky/SneakyButtonToLua.h"
#include "Sneaky/SneakyButtonSkinnedBaseToLua.h"
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS || CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID || CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
#include "Lua_web_socket.h"
#endif

USING_NS_CC;
using namespace CocosDenshion;

AppDelegate::AppDelegate() {
	// fixed me
	//_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF|_CRTDBG_LEAK_CHECK_DF);
}

AppDelegate::~AppDelegate() {
	// end simple audio engine here, or it may crashed on win32
	SimpleAudioEngine::sharedEngine()->end();
	//CCScriptEngineManager::purgeSharedManager();
}

bool AppDelegate::applicationDidFinishLaunching() {
	// initialize director
	CCDirector *pDirector = CCDirector::sharedDirector();
	pDirector->setOpenGLView(CCEGLView::sharedOpenGLView());

	//CCEGLView::sharedOpenGLView()->setDesignResolutionSize(480, 320, kResolutionNoBorder);

	// turn on display FPS
	pDirector->setDisplayStats(true);

	// set FPS. the default value is 1.0/60 if you don't call this
	pDirector->setAnimationInterval(1.0 / 60);

	// register lua engine
	CCLuaEngine* pEngine = CCLuaEngine::defaultEngine();
	CCScriptEngineManager::sharedManager()->setScriptEngine(pEngine);
	CCLuaStack *pStack = pEngine->getLuaStack();
	lua_State *tolua_s = pStack->getLuaState();
	tolua_extensions_ccb_open(tolua_s);

	//新增定义
	tolua_SneakyButton_open(tolua_s);//摇杆按钮
	tolua_SneakyButtonSkinnedBase_open(tolua_s);//摇杆按钮
	//
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS || CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID || CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
	pStack = pEngine->getLuaStack();
	tolua_s = pStack->getLuaState();
	tolua_web_socket_open(tolua_s);
#endif
	pEngine->executeScriptFile("lua/main.lua");

	return true;
}

// This function will be called when the app is inactive. When comes a phone call,it's be invoked too
void AppDelegate::applicationDidEnterBackground() {
	CCDirector::sharedDirector()->stopAnimation();
	SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
}

// this function will be called when the app is active again
void AppDelegate::applicationWillEnterForeground() {
	CCDirector::sharedDirector()->startAnimation();
	SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
}
