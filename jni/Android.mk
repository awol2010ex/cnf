LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := game_shared

LOCAL_MODULE_FILENAME := libgame

LOCAL_SRC_FILES := cnfcpp/main.cpp \
                   ../Classes/Sneaky/SneakyButton.cpp \
                   ../Classes/Sneaky/SneakyButtonSkinnedBase.cpp \
                   ../Classes/Sneaky/SneakyButtonToLua.cpp \
                   ../Classes/Sneaky/SneakyButtonSkinnedBaseToLua.cpp \
                   ../Classes/Sneaky/SneakyJoystick.cpp \
                   ../Classes/Sneaky/SneakyJoystickSkinnedBase.cpp \
				   ../Classes/Sneaky/SneakyJoystickToLua.cpp \
				   ../Classes/Sneaky/SneakyJoystickSkinnedBaseToLua.cpp \
                   ../Classes/AppDelegate.cpp \
                   
LOCAL_C_INCLUDES := $(LOCAL_PATH)/../Classes                   

LOCAL_WHOLE_STATIC_LIBRARIES := cocos2dx_static cocosdenshion_static cocos_extension_static cocos_lua_static
            
include $(BUILD_SHARED_LIBRARY)

$(call import-module,CocosDenshion/android) \
$(call import-module,cocos2dx) \
$(call import-module,scripting/lua/proj.android) \
$(call import-module,extensions)
