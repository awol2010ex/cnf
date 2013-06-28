/*
** Lua binding: SneakyButton
** Generated automatically by tolua++-1.0.92 on 06/27/13 12:55:24.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

#include "cocos2d.h"
#include "SneakyButton.h"
#include "SneakyButtonToLua.h"
using namespace cocos2d;

/* Exported function */
TOLUA_API int  tolua_SneakyButton_open (lua_State* tolua_S);


/* function to register type */
static void tolua_SneakyButton_types (lua_State* tolua_S)
{
#ifndef Mtolua_typeid
#define Mtolua_typeid(L,TI,T)
#endif
 tolua_usertype(tolua_S,"SneakyButton");
 Mtolua_typeid(tolua_S,typeid(SneakyButton), "SneakyButton");
 tolua_usertype(tolua_S,"CCEvent");
 Mtolua_typeid(tolua_S,typeid(CCEvent), "CCEvent");
 tolua_usertype(tolua_S,"CCTouch");
 Mtolua_typeid(tolua_S,typeid(CCTouch), "CCTouch");
 tolua_usertype(tolua_S,"CCTargetedTouchDelegate");
 Mtolua_typeid(tolua_S,typeid(CCTargetedTouchDelegate), "CCTargetedTouchDelegate");
 tolua_usertype(tolua_S,"CCNode");
 Mtolua_typeid(tolua_S,typeid(CCNode), "CCNode");
 tolua_usertype(tolua_S,"CCRect");
 Mtolua_typeid(tolua_S,typeid(CCRect), "CCRect");
}

/* method: createSneakyButton of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_createSneakyButton00
static int tolua_SneakyButton_SneakyButton_createSneakyButton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SneakyButton* tolua_ret = (SneakyButton*)  SneakyButton::createSneakyButton();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SneakyButton");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createSneakyButton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStatus of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_getStatus00
static int tolua_SneakyButton_SneakyButton_getStatus00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStatus'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getStatus();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStatus'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setStatus of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_setStatus00
static int tolua_SneakyButton_SneakyButton_setStatus00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
  bool s = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setStatus'", NULL);
#endif
  {
   self->setStatus(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setStatus'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsActive of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_getIsActive00
static int tolua_SneakyButton_SneakyButton_getIsActive00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsActive'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsActive();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsActive'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getValue of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_getValue00
static int tolua_SneakyButton_SneakyButton_getValue00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getValue'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getValue();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getValue'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsHoldable of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_getIsHoldable00
static int tolua_SneakyButton_SneakyButton_getIsHoldable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsHoldable'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsHoldable();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsHoldable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIsHoldable of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_setIsHoldable00
static int tolua_SneakyButton_SneakyButton_setIsHoldable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
  bool s = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIsHoldable'", NULL);
#endif
  {
   self->setIsHoldable(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIsHoldable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsToggleable of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_getIsToggleable00
static int tolua_SneakyButton_SneakyButton_getIsToggleable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsToggleable'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsToggleable();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsToggleable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setIsToggleable of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_setIsToggleable00
static int tolua_SneakyButton_SneakyButton_setIsToggleable00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
  bool s = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIsToggleable'", NULL);
#endif
  {
   self->setIsToggleable(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIsToggleable'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRateLimit of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_getRateLimit00
static int tolua_SneakyButton_SneakyButton_getRateLimit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRateLimit'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRateLimit();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRateLimit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRateLimit of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_setRateLimit00
static int tolua_SneakyButton_SneakyButton_setRateLimit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
  float s = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRateLimit'", NULL);
#endif
  {
   self->setRateLimit(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRateLimit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getRadius of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_getRadius00
static int tolua_SneakyButton_SneakyButton_getRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getRadius'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getRadius();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onEnterTransitionDidFinish of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_onEnterTransitionDidFinish00
static int tolua_SneakyButton_SneakyButton_onEnterTransitionDidFinish00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onEnterTransitionDidFinish'", NULL);
#endif
  {
   self->onEnterTransitionDidFinish();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onEnterTransitionDidFinish'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: onExit of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_onExit00
static int tolua_SneakyButton_SneakyButton_onExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'onExit'", NULL);
#endif
  {
   self->onExit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'onExit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithRect of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_initWithRect00
static int tolua_SneakyButton_SneakyButton_initWithRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
  CCRect rect = *((CCRect*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithRect'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithRect(rect);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithRect'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: limiter of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_limiter00
static int tolua_SneakyButton_SneakyButton_limiter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
  float delta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'limiter'", NULL);
#endif
  {
   self->limiter(delta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'limiter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setRadius of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_setRadius00
static int tolua_SneakyButton_SneakyButton_setRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setRadius'", NULL);
#endif
  {
   self->setRadius(r);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchBegan of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_ccTouchBegan00
static int tolua_SneakyButton_SneakyButton_ccTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* event = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ccTouchBegan(touch,event);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchMoved of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_ccTouchMoved00
static int tolua_SneakyButton_SneakyButton_ccTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* event = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchMoved'", NULL);
#endif
  {
   self->ccTouchMoved(touch,event);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchEnded of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_ccTouchEnded00
static int tolua_SneakyButton_SneakyButton_ccTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* event = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchEnded'", NULL);
#endif
  {
   self->ccTouchEnded(touch,event);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchCancelled of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_ccTouchCancelled00
static int tolua_SneakyButton_SneakyButton_ccTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
  CCTouch* touch = ((CCTouch*)  tolua_tousertype(tolua_S,2,0));
  CCEvent* event = ((CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchCancelled'", NULL);
#endif
  {
   self->ccTouchCancelled(touch,event);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchCancelled'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchDelegateRelease of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_touchDelegateRelease00
static int tolua_SneakyButton_SneakyButton_touchDelegateRelease00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchDelegateRelease'", NULL);
#endif
  {
   self->touchDelegateRelease();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchDelegateRelease'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: touchDelegateRetain of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_SneakyButton_SneakyButton_touchDelegateRetain00
static int tolua_SneakyButton_SneakyButton_touchDelegateRetain00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'touchDelegateRetain'", NULL);
#endif
  {
   self->touchDelegateRetain();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'touchDelegateRetain'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CCTargetedTouchDelegate__ of class  SneakyButton */
#ifndef TOLUA_DISABLE_tolua_get_SneakyButton___CCTargetedTouchDelegate__
static int tolua_get_SneakyButton___CCTargetedTouchDelegate__(lua_State* tolua_S)
{
  SneakyButton* self = (SneakyButton*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable '__CCTargetedTouchDelegate__'",NULL);
#endif
#ifdef __cplusplus
   tolua_pushusertype(tolua_S,(void*)static_cast<CCTargetedTouchDelegate*>(self), "CCTargetedTouchDelegate");
#else
   tolua_pushusertype(tolua_S,(void*)((CCTargetedTouchDelegate*)self), "CCTargetedTouchDelegate");
#endif
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_SneakyButton_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_SneakyButton_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_cclass(tolua_S,"SneakyButton","SneakyButton","CCNode",NULL);
  tolua_beginmodule(tolua_S,"SneakyButton");
   tolua_function(tolua_S,"createSneakyButton",tolua_SneakyButton_SneakyButton_createSneakyButton00);
   tolua_function(tolua_S,"getStatus",tolua_SneakyButton_SneakyButton_getStatus00);
   tolua_function(tolua_S,"setStatus",tolua_SneakyButton_SneakyButton_setStatus00);
   tolua_function(tolua_S,"getIsActive",tolua_SneakyButton_SneakyButton_getIsActive00);
   tolua_function(tolua_S,"getValue",tolua_SneakyButton_SneakyButton_getValue00);
   tolua_function(tolua_S,"getIsHoldable",tolua_SneakyButton_SneakyButton_getIsHoldable00);
   tolua_function(tolua_S,"setIsHoldable",tolua_SneakyButton_SneakyButton_setIsHoldable00);
   tolua_function(tolua_S,"getIsToggleable",tolua_SneakyButton_SneakyButton_getIsToggleable00);
   tolua_function(tolua_S,"setIsToggleable",tolua_SneakyButton_SneakyButton_setIsToggleable00);
   tolua_function(tolua_S,"getRateLimit",tolua_SneakyButton_SneakyButton_getRateLimit00);
   tolua_function(tolua_S,"setRateLimit",tolua_SneakyButton_SneakyButton_setRateLimit00);
   tolua_function(tolua_S,"getRadius",tolua_SneakyButton_SneakyButton_getRadius00);
   tolua_function(tolua_S,"onEnterTransitionDidFinish",tolua_SneakyButton_SneakyButton_onEnterTransitionDidFinish00);
   tolua_function(tolua_S,"onExit",tolua_SneakyButton_SneakyButton_onExit00);
   tolua_function(tolua_S,"initWithRect",tolua_SneakyButton_SneakyButton_initWithRect00);
   tolua_function(tolua_S,"limiter",tolua_SneakyButton_SneakyButton_limiter00);
   tolua_function(tolua_S,"setRadius",tolua_SneakyButton_SneakyButton_setRadius00);
   tolua_function(tolua_S,"ccTouchBegan",tolua_SneakyButton_SneakyButton_ccTouchBegan00);
   tolua_function(tolua_S,"ccTouchMoved",tolua_SneakyButton_SneakyButton_ccTouchMoved00);
   tolua_function(tolua_S,"ccTouchEnded",tolua_SneakyButton_SneakyButton_ccTouchEnded00);
   tolua_function(tolua_S,"ccTouchCancelled",tolua_SneakyButton_SneakyButton_ccTouchCancelled00);
   tolua_function(tolua_S,"touchDelegateRelease",tolua_SneakyButton_SneakyButton_touchDelegateRelease00);
   tolua_function(tolua_S,"touchDelegateRetain",tolua_SneakyButton_SneakyButton_touchDelegateRetain00);
   tolua_variable(tolua_S,"__CCTargetedTouchDelegate__",tolua_get_SneakyButton___CCTargetedTouchDelegate__,NULL);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_SneakyButton (lua_State* tolua_S) {
 return tolua_SneakyButton_open(tolua_S);
};
#endif
