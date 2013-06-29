/*
** Lua binding: SneakyJoystickSkinnedBase
** Generated automatically by tolua++-1.0.92 on 06/29/13 09:54:26.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

#include "cocos2d.h"
#include "SneakyJoystick.h"
#include "SneakyJoystickSkinnedBase.h"
#include "SneakyJoystickSkinnedBaseToLua.h"
using namespace cocos2d;
/* Exported function */
TOLUA_API int  tolua_SneakyJoystickSkinnedBase_open (lua_State* tolua_S);


/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_SneakyJoystickSkinnedBase (lua_State* tolua_S)
{
 SneakyJoystickSkinnedBase* self = (SneakyJoystickSkinnedBase*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_SneakyJoystickSkinnedBase_types (lua_State* tolua_S)
{
#ifndef Mtolua_typeid
#define Mtolua_typeid(L,TI,T)
#endif
 tolua_usertype(tolua_S,"CCLayer");
 Mtolua_typeid(tolua_S,typeid(CCLayer), "CCLayer");
 tolua_usertype(tolua_S,"CCSprite");
 Mtolua_typeid(tolua_S,typeid(CCSprite), "CCSprite");
 tolua_usertype(tolua_S,"SneakyJoystickSkinnedBase");
 Mtolua_typeid(tolua_S,typeid(SneakyJoystickSkinnedBase), "SneakyJoystickSkinnedBase");
 tolua_usertype(tolua_S,"SneakyJoystick");
 Mtolua_typeid(tolua_S,typeid(SneakyJoystick), "SneakyJoystick");
 tolua_usertype(tolua_S,"CCSize");
 Mtolua_typeid(tolua_S,typeid(CCSize), "CCSize");
}

/* method: getBackgroundSprite of class  SneakyJoystickSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_getBackgroundSprite00
static int tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_getBackgroundSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystickSkinnedBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystickSkinnedBase* self = (SneakyJoystickSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getBackgroundSprite'", NULL);
#endif
  {
   CCSprite* tolua_ret = (CCSprite*)  self->getBackgroundSprite();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getBackgroundSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getThumbSprite of class  SneakyJoystickSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_getThumbSprite00
static int tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_getThumbSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystickSkinnedBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystickSkinnedBase* self = (SneakyJoystickSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getThumbSprite'", NULL);
#endif
  {
   CCSprite* tolua_ret = (CCSprite*)  self->getThumbSprite();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getThumbSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getJoystick of class  SneakyJoystickSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_getJoystick00
static int tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_getJoystick00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystickSkinnedBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystickSkinnedBase* self = (SneakyJoystickSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getJoystick'", NULL);
#endif
  {
   SneakyJoystick* tolua_ret = (SneakyJoystick*)  self->getJoystick();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SneakyJoystick");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getJoystick'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  SneakyJoystickSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_create00
static int tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SneakyJoystickSkinnedBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SneakyJoystickSkinnedBase* tolua_ret = (SneakyJoystickSkinnedBase*)  SneakyJoystickSkinnedBase::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SneakyJoystickSkinnedBase");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  SneakyJoystickSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_delete00
static int tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystickSkinnedBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystickSkinnedBase* self = (SneakyJoystickSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  SneakyJoystickSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_init00
static int tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystickSkinnedBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystickSkinnedBase* self = (SneakyJoystickSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: updatePositions of class  SneakyJoystickSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_updatePositions00
static int tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_updatePositions00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystickSkinnedBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystickSkinnedBase* self = (SneakyJoystickSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
  float delta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updatePositions'", NULL);
#endif
  {
   self->updatePositions(delta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updatePositions'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  SneakyJoystickSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_setContentSize00
static int tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystickSkinnedBase",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystickSkinnedBase* self = (SneakyJoystickSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
  CCSize s = *((CCSize*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setContentSize'", NULL);
#endif
  {
   self->setContentSize(s);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setContentSize'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setBackgroundSprite of class  SneakyJoystickSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_setBackgroundSprite00
static int tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_setBackgroundSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystickSkinnedBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystickSkinnedBase* self = (SneakyJoystickSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
  CCSprite* aSprite = ((CCSprite*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setBackgroundSprite'", NULL);
#endif
  {
   self->setBackgroundSprite(aSprite);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setBackgroundSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setThumbSprite of class  SneakyJoystickSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_setThumbSprite00
static int tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_setThumbSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystickSkinnedBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystickSkinnedBase* self = (SneakyJoystickSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
  CCSprite* aSprite = ((CCSprite*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setThumbSprite'", NULL);
#endif
  {
   self->setThumbSprite(aSprite);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setThumbSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setJoystick of class  SneakyJoystickSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_setJoystick00
static int tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_setJoystick00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystickSkinnedBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystickSkinnedBase* self = (SneakyJoystickSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
  SneakyJoystick* aJoystick = ((SneakyJoystick*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setJoystick'", NULL);
#endif
  {
   self->setJoystick(aJoystick);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setJoystick'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_SneakyJoystickSkinnedBase_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_SneakyJoystickSkinnedBase_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"SneakyJoystickSkinnedBase","SneakyJoystickSkinnedBase","CCLayer",tolua_collect_SneakyJoystickSkinnedBase);
  #else
  tolua_cclass(tolua_S,"SneakyJoystickSkinnedBase","SneakyJoystickSkinnedBase","CCLayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"SneakyJoystickSkinnedBase");
   tolua_function(tolua_S,"getBackgroundSprite",tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_getBackgroundSprite00);
   tolua_function(tolua_S,"getThumbSprite",tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_getThumbSprite00);
   tolua_function(tolua_S,"getJoystick",tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_getJoystick00);
   tolua_function(tolua_S,"create",tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_create00);
   tolua_function(tolua_S,"delete",tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_delete00);
   tolua_function(tolua_S,"init",tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_init00);
   tolua_function(tolua_S,"updatePositions",tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_updatePositions00);
   tolua_function(tolua_S,"setContentSize",tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_setContentSize00);
   tolua_function(tolua_S,"setBackgroundSprite",tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_setBackgroundSprite00);
   tolua_function(tolua_S,"setThumbSprite",tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_setThumbSprite00);
   tolua_function(tolua_S,"setJoystick",tolua_SneakyJoystickSkinnedBase_SneakyJoystickSkinnedBase_setJoystick00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_SneakyJoystickSkinnedBase (lua_State* tolua_S) {
 return tolua_SneakyJoystickSkinnedBase_open(tolua_S);
};
#endif

