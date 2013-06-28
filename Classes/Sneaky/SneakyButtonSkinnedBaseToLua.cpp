/*
** Lua binding: SneakyButtonSkinnedBase
** Generated automatically by tolua++-1.0.92 on 06/28/13 10:33:58.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"

#include "cocos2d.h"
#include "SneakyButton.h"
#include "SneakyButtonSkinnedBase.h"
using namespace cocos2d;

/* Exported function */
TOLUA_API int  tolua_SneakyButtonSkinnedBase_open (lua_State* tolua_S);


/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_SneakyButtonSkinnedBase (lua_State* tolua_S)
{
 SneakyButtonSkinnedBase* self = (SneakyButtonSkinnedBase*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_SneakyButtonSkinnedBase_types (lua_State* tolua_S)
{
#ifndef Mtolua_typeid
#define Mtolua_typeid(L,TI,T)
#endif
 tolua_usertype(tolua_S,"SneakyButton");
 Mtolua_typeid(tolua_S,typeid(SneakyButton), "SneakyButton");
 tolua_usertype(tolua_S,"CCLayer");
 Mtolua_typeid(tolua_S,typeid(CCLayer), "CCLayer");
 tolua_usertype(tolua_S,"CCSprite");
 Mtolua_typeid(tolua_S,typeid(CCSprite), "CCSprite");
 tolua_usertype(tolua_S,"SneakyButtonSkinnedBase");
 Mtolua_typeid(tolua_S,typeid(SneakyButtonSkinnedBase), "SneakyButtonSkinnedBase");
 tolua_usertype(tolua_S,"CCSize");
 Mtolua_typeid(tolua_S,typeid(CCSize), "CCSize");
}

/* method: getDefaultSprite of class  SneakyButtonSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_getDefaultSprite00
static int tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_getDefaultSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButtonSkinnedBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButtonSkinnedBase* self = (SneakyButtonSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDefaultSprite'", NULL);
#endif
  {
   CCSprite* tolua_ret = (CCSprite*)  self->getDefaultSprite();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDefaultSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getActivatedSprite of class  SneakyButtonSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_getActivatedSprite00
static int tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_getActivatedSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButtonSkinnedBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButtonSkinnedBase* self = (SneakyButtonSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getActivatedSprite'", NULL);
#endif
  {
   CCSprite* tolua_ret = (CCSprite*)  self->getActivatedSprite();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getActivatedSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDisabledSprite of class  SneakyButtonSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_getDisabledSprite00
static int tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_getDisabledSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButtonSkinnedBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButtonSkinnedBase* self = (SneakyButtonSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDisabledSprite'", NULL);
#endif
  {
   CCSprite* tolua_ret = (CCSprite*)  self->getDisabledSprite();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDisabledSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getPressSprite of class  SneakyButtonSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_getPressSprite00
static int tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_getPressSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButtonSkinnedBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButtonSkinnedBase* self = (SneakyButtonSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getPressSprite'", NULL);
#endif
  {
   CCSprite* tolua_ret = (CCSprite*)  self->getPressSprite();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCSprite");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getPressSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getButton of class  SneakyButtonSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_getButton00
static int tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_getButton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButtonSkinnedBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButtonSkinnedBase* self = (SneakyButtonSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getButton'", NULL);
#endif
  {
   SneakyButton* tolua_ret = (SneakyButton*)  self->getButton();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SneakyButton");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getButton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  SneakyButtonSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_create00
static int tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SneakyButtonSkinnedBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SneakyButtonSkinnedBase* tolua_ret = (SneakyButtonSkinnedBase*)  SneakyButtonSkinnedBase::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SneakyButtonSkinnedBase");
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

/* method: delete of class  SneakyButtonSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_delete00
static int tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButtonSkinnedBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButtonSkinnedBase* self = (SneakyButtonSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
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

/* method: init of class  SneakyButtonSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_init00
static int tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButtonSkinnedBase",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButtonSkinnedBase* self = (SneakyButtonSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
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

/* method: watchSelf of class  SneakyButtonSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_watchSelf00
static int tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_watchSelf00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButtonSkinnedBase",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButtonSkinnedBase* self = (SneakyButtonSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
  float delta = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'watchSelf'", NULL);
#endif
  {
   self->watchSelf(delta);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'watchSelf'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setContentSize of class  SneakyButtonSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setContentSize00
static int tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setContentSize00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButtonSkinnedBase",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCSize",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButtonSkinnedBase* self = (SneakyButtonSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setDefaultSprite of class  SneakyButtonSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setDefaultSprite00
static int tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setDefaultSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButtonSkinnedBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButtonSkinnedBase* self = (SneakyButtonSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
  CCSprite* aSprite = ((CCSprite*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDefaultSprite'", NULL);
#endif
  {
   self->setDefaultSprite(aSprite);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDefaultSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setActivatedSprite of class  SneakyButtonSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setActivatedSprite00
static int tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setActivatedSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButtonSkinnedBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButtonSkinnedBase* self = (SneakyButtonSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
  CCSprite* aSprite = ((CCSprite*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setActivatedSprite'", NULL);
#endif
  {
   self->setActivatedSprite(aSprite);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setActivatedSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDisabledSprite of class  SneakyButtonSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setDisabledSprite00
static int tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setDisabledSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButtonSkinnedBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButtonSkinnedBase* self = (SneakyButtonSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
  CCSprite* aSprite = ((CCSprite*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDisabledSprite'", NULL);
#endif
  {
   self->setDisabledSprite(aSprite);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDisabledSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setPressSprite of class  SneakyButtonSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setPressSprite00
static int tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setPressSprite00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButtonSkinnedBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCSprite",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButtonSkinnedBase* self = (SneakyButtonSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
  CCSprite* aSprite = ((CCSprite*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setPressSprite'", NULL);
#endif
  {
   self->setPressSprite(aSprite);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setPressSprite'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setButton of class  SneakyButtonSkinnedBase */
#ifndef TOLUA_DISABLE_tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setButton00
static int tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setButton00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyButtonSkinnedBase",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"SneakyButton",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyButtonSkinnedBase* self = (SneakyButtonSkinnedBase*)  tolua_tousertype(tolua_S,1,0);
  SneakyButton* aButton = ((SneakyButton*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setButton'", NULL);
#endif
  {
   self->setButton(aButton);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setButton'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_SneakyButtonSkinnedBase_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_SneakyButtonSkinnedBase_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"SneakyButtonSkinnedBase","SneakyButtonSkinnedBase","CCLayer",tolua_collect_SneakyButtonSkinnedBase);
  #else
  tolua_cclass(tolua_S,"SneakyButtonSkinnedBase","SneakyButtonSkinnedBase","CCLayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"SneakyButtonSkinnedBase");
   tolua_function(tolua_S,"getDefaultSprite",tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_getDefaultSprite00);
   tolua_function(tolua_S,"getActivatedSprite",tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_getActivatedSprite00);
   tolua_function(tolua_S,"getDisabledSprite",tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_getDisabledSprite00);
   tolua_function(tolua_S,"getPressSprite",tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_getPressSprite00);
   tolua_function(tolua_S,"getButton",tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_getButton00);
   tolua_function(tolua_S,"create",tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_create00);
   tolua_function(tolua_S,"delete",tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_delete00);
   tolua_function(tolua_S,"init",tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_init00);
   tolua_function(tolua_S,"watchSelf",tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_watchSelf00);
   tolua_function(tolua_S,"setContentSize",tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setContentSize00);
   tolua_function(tolua_S,"setDefaultSprite",tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setDefaultSprite00);
   tolua_function(tolua_S,"setActivatedSprite",tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setActivatedSprite00);
   tolua_function(tolua_S,"setDisabledSprite",tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setDisabledSprite00);
   tolua_function(tolua_S,"setPressSprite",tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setPressSprite00);
   tolua_function(tolua_S,"setButton",tolua_SneakyButtonSkinnedBase_SneakyButtonSkinnedBase_setButton00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_SneakyButtonSkinnedBase (lua_State* tolua_S) {
 return tolua_SneakyButtonSkinnedBase_open(tolua_S);
};
#endif

