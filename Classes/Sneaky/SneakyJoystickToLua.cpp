/*
** Lua binding: SneakyJoystick
** Generated automatically by tolua++-1.0.92 on 06/28/13 11:22:07.
*/

#ifndef __cplusplus
#include "stdlib.h"
#endif
#include "string.h"

#include "tolua++.h"


#include "cocos2d.h"
#include "SneakyJoystick.h"
#include "SneakyJoystickToLua.h"
using namespace cocos2d;


/* Exported function */
TOLUA_API int  tolua_SneakyJoystick_open (lua_State* tolua_S);


/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_CCPoint (lua_State* tolua_S)
{
 CCPoint* self = (CCPoint*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}

static int tolua_collect_SneakyJoystick (lua_State* tolua_S)
{
 SneakyJoystick* self = (SneakyJoystick*) tolua_tousertype(tolua_S,1,0);
	Mtolua_delete(self);
	return 0;
}
#endif


/* function to register type */
static void tolua_SneakyJoystick_types (lua_State* tolua_S)
{
#ifndef Mtolua_typeid
#define Mtolua_typeid(L,TI,T)
#endif
 tolua_usertype(tolua_S,"CCPoint");
 Mtolua_typeid(tolua_S,typeid(CCPoint), "CCPoint");
 tolua_usertype(tolua_S,"CCEvent");
 Mtolua_typeid(tolua_S,typeid(CCEvent), "CCEvent");
 tolua_usertype(tolua_S,"CCTouch");
 Mtolua_typeid(tolua_S,typeid(CCTouch), "CCTouch");
 tolua_usertype(tolua_S,"CCRect");
 Mtolua_typeid(tolua_S,typeid(CCRect), "CCRect");
 tolua_usertype(tolua_S,"CCNode");
 Mtolua_typeid(tolua_S,typeid(CCNode), "CCNode");
 tolua_usertype(tolua_S,"SneakyJoystick");
 Mtolua_typeid(tolua_S,typeid(SneakyJoystick), "SneakyJoystick");
 tolua_usertype(tolua_S,"CCTargetedTouchDelegate");
 Mtolua_typeid(tolua_S,typeid(CCTargetedTouchDelegate), "CCTargetedTouchDelegate");
}

/* method: new of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_new00
static int tolua_SneakyJoystick_SneakyJoystick_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SneakyJoystick* tolua_ret = (SneakyJoystick*)  Mtolua_new((SneakyJoystick)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SneakyJoystick");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_new00_local
static int tolua_SneakyJoystick_SneakyJoystick_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SneakyJoystick* tolua_ret = (SneakyJoystick*)  Mtolua_new((SneakyJoystick)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SneakyJoystick");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: createSneakyJoystick of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_createSneakyJoystick00
static int tolua_SneakyJoystick_SneakyJoystick_createSneakyJoystick00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   SneakyJoystick* tolua_ret = (SneakyJoystick*)  SneakyJoystick::createSneakyJoystick();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"SneakyJoystick");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createSneakyJoystick'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getStickPosition of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_getStickPosition00
static int tolua_SneakyJoystick_SneakyJoystick_getStickPosition00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getStickPosition'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getStickPosition();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getStickPosition'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDegrees of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_getDegrees00
static int tolua_SneakyJoystick_SneakyJoystick_getDegrees00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDegrees'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getDegrees();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDegrees'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getVelocity of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_getVelocity00
static int tolua_SneakyJoystick_SneakyJoystick_getVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getVelocity'", NULL);
#endif
  {
   CCPoint tolua_ret = (CCPoint)  self->getVelocity();
   {
#ifdef __cplusplus
    void* tolua_obj = Mtolua_new((CCPoint)(tolua_ret));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#else
    void* tolua_obj = tolua_copy(tolua_S,(void*)&tolua_ret,sizeof(CCPoint));
     tolua_pushusertype(tolua_S,tolua_obj,"CCPoint");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
#endif
   }
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getAutoCenter of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_getAutoCenter00
static int tolua_SneakyJoystick_SneakyJoystick_getAutoCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getAutoCenter'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getAutoCenter();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getAutoCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setAutoCenter of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_setAutoCenter00
static int tolua_SneakyJoystick_SneakyJoystick_setAutoCenter00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
  bool b = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setAutoCenter'", NULL);
#endif
  {
   self->setAutoCenter(b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setAutoCenter'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getIsDPad of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_getIsDPad00
static int tolua_SneakyJoystick_SneakyJoystick_getIsDPad00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getIsDPad'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getIsDPad();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getIsDPad'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getHasDeadzone of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_getHasDeadzone00
static int tolua_SneakyJoystick_SneakyJoystick_getHasDeadzone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getHasDeadzone'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getHasDeadzone();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getHasDeadzone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setHasDeadzone of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_setHasDeadzone00
static int tolua_SneakyJoystick_SneakyJoystick_setHasDeadzone00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
  bool b = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setHasDeadzone'", NULL);
#endif
  {
   self->setHasDeadzone(b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setHasDeadzone'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getNumberOfDirections of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_getNumberOfDirections00
static int tolua_SneakyJoystick_SneakyJoystick_getNumberOfDirections00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getNumberOfDirections'", NULL);
#endif
  {
   int tolua_ret = (int)  self->getNumberOfDirections();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getNumberOfDirections'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setNumberOfDirections of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_setNumberOfDirections00
static int tolua_SneakyJoystick_SneakyJoystick_setNumberOfDirections00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
  int b = ((int)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setNumberOfDirections'", NULL);
#endif
  {
   self->setNumberOfDirections(b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setNumberOfDirections'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getJoystickRadius of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_getJoystickRadius00
static int tolua_SneakyJoystick_SneakyJoystick_getJoystickRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getJoystickRadius'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getJoystickRadius();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getJoystickRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getThumbRadius of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_getThumbRadius00
static int tolua_SneakyJoystick_SneakyJoystick_getThumbRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getThumbRadius'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getThumbRadius();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getThumbRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getDeadRadius of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_getDeadRadius00
static int tolua_SneakyJoystick_SneakyJoystick_getDeadRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getDeadRadius'", NULL);
#endif
  {
   float tolua_ret = (float)  self->getDeadRadius();
   tolua_pushnumber(tolua_S,(lua_Number)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getDeadRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_delete00
static int tolua_SneakyJoystick_SneakyJoystick_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
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

/* method: initWithRect of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_initWithRect00
static int tolua_SneakyJoystick_SneakyJoystick_initWithRect00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCRect",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
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

/* method: onEnterTransitionDidFinish of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_onEnterTransitionDidFinish00
static int tolua_SneakyJoystick_SneakyJoystick_onEnterTransitionDidFinish00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
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

/* method: onExit of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_onExit00
static int tolua_SneakyJoystick_SneakyJoystick_onExit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
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

/* method: setIsDPad of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_setIsDPad00
static int tolua_SneakyJoystick_SneakyJoystick_setIsDPad00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
  bool b = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setIsDPad'", NULL);
#endif
  {
   self->setIsDPad(b);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setIsDPad'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setJoystickRadius of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_setJoystickRadius00
static int tolua_SneakyJoystick_SneakyJoystick_setJoystickRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setJoystickRadius'", NULL);
#endif
  {
   self->setJoystickRadius(r);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setJoystickRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setThumbRadius of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_setThumbRadius00
static int tolua_SneakyJoystick_SneakyJoystick_setThumbRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setThumbRadius'", NULL);
#endif
  {
   self->setThumbRadius(r);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setThumbRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setDeadRadius of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_setDeadRadius00
static int tolua_SneakyJoystick_SneakyJoystick_setDeadRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
  float r = ((float)  tolua_tonumber(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setDeadRadius'", NULL);
#endif
  {
   self->setDeadRadius(r);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setDeadRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchBegan of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_ccTouchBegan00
static int tolua_SneakyJoystick_SneakyJoystick_ccTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
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

/* method: ccTouchMoved of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_ccTouchMoved00
static int tolua_SneakyJoystick_SneakyJoystick_ccTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
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

/* method: ccTouchEnded of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_ccTouchEnded00
static int tolua_SneakyJoystick_SneakyJoystick_ccTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
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

/* method: ccTouchCancelled of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_ccTouchCancelled00
static int tolua_SneakyJoystick_SneakyJoystick_ccTouchCancelled00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
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

/* method: touchDelegateRelease of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_touchDelegateRelease00
static int tolua_SneakyJoystick_SneakyJoystick_touchDelegateRelease00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
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

/* method: touchDelegateRetain of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_touchDelegateRetain00
static int tolua_SneakyJoystick_SneakyJoystick_touchDelegateRetain00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
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

/* method: updateVelocity of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_updateVelocity00
static int tolua_SneakyJoystick_SneakyJoystick_updateVelocity00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     (tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"CCPoint",0,&tolua_err)) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
  CCPoint point = *((CCPoint*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'updateVelocity'", NULL);
#endif
  {
   self->updateVelocity(point);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'updateVelocity'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTouchRadius of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_SneakyJoystick_SneakyJoystick_setTouchRadius00
static int tolua_SneakyJoystick_SneakyJoystick_setTouchRadius00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"SneakyJoystick",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTouchRadius'", NULL);
#endif
  {
   self->setTouchRadius();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTouchRadius'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: __CCTargetedTouchDelegate__ of class  SneakyJoystick */
#ifndef TOLUA_DISABLE_tolua_get_SneakyJoystick___CCTargetedTouchDelegate__
static int tolua_get_SneakyJoystick___CCTargetedTouchDelegate__(lua_State* tolua_S)
{
  SneakyJoystick* self = (SneakyJoystick*)  tolua_tousertype(tolua_S,1,0);
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
TOLUA_API int tolua_SneakyJoystick_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_SneakyJoystick_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"SneakyJoystick","SneakyJoystick","CCNode",tolua_collect_SneakyJoystick);
  #else
  tolua_cclass(tolua_S,"SneakyJoystick","SneakyJoystick","CCNode",NULL);
  #endif
  tolua_beginmodule(tolua_S,"SneakyJoystick");
   tolua_function(tolua_S,"new",tolua_SneakyJoystick_SneakyJoystick_new00);
   tolua_function(tolua_S,"new_local",tolua_SneakyJoystick_SneakyJoystick_new00_local);
   tolua_function(tolua_S,".call",tolua_SneakyJoystick_SneakyJoystick_new00_local);
   tolua_function(tolua_S,"createSneakyJoystick",tolua_SneakyJoystick_SneakyJoystick_createSneakyJoystick00);
   tolua_function(tolua_S,"getStickPosition",tolua_SneakyJoystick_SneakyJoystick_getStickPosition00);
   tolua_function(tolua_S,"getDegrees",tolua_SneakyJoystick_SneakyJoystick_getDegrees00);
   tolua_function(tolua_S,"getVelocity",tolua_SneakyJoystick_SneakyJoystick_getVelocity00);
   tolua_function(tolua_S,"getAutoCenter",tolua_SneakyJoystick_SneakyJoystick_getAutoCenter00);
   tolua_function(tolua_S,"setAutoCenter",tolua_SneakyJoystick_SneakyJoystick_setAutoCenter00);
   tolua_function(tolua_S,"getIsDPad",tolua_SneakyJoystick_SneakyJoystick_getIsDPad00);
   tolua_function(tolua_S,"getHasDeadzone",tolua_SneakyJoystick_SneakyJoystick_getHasDeadzone00);
   tolua_function(tolua_S,"setHasDeadzone",tolua_SneakyJoystick_SneakyJoystick_setHasDeadzone00);
   tolua_function(tolua_S,"getNumberOfDirections",tolua_SneakyJoystick_SneakyJoystick_getNumberOfDirections00);
   tolua_function(tolua_S,"setNumberOfDirections",tolua_SneakyJoystick_SneakyJoystick_setNumberOfDirections00);
   tolua_function(tolua_S,"getJoystickRadius",tolua_SneakyJoystick_SneakyJoystick_getJoystickRadius00);
   tolua_function(tolua_S,"getThumbRadius",tolua_SneakyJoystick_SneakyJoystick_getThumbRadius00);
   tolua_function(tolua_S,"getDeadRadius",tolua_SneakyJoystick_SneakyJoystick_getDeadRadius00);
   tolua_function(tolua_S,"delete",tolua_SneakyJoystick_SneakyJoystick_delete00);
   tolua_function(tolua_S,"initWithRect",tolua_SneakyJoystick_SneakyJoystick_initWithRect00);
   tolua_function(tolua_S,"onEnterTransitionDidFinish",tolua_SneakyJoystick_SneakyJoystick_onEnterTransitionDidFinish00);
   tolua_function(tolua_S,"onExit",tolua_SneakyJoystick_SneakyJoystick_onExit00);
   tolua_function(tolua_S,"setIsDPad",tolua_SneakyJoystick_SneakyJoystick_setIsDPad00);
   tolua_function(tolua_S,"setJoystickRadius",tolua_SneakyJoystick_SneakyJoystick_setJoystickRadius00);
   tolua_function(tolua_S,"setThumbRadius",tolua_SneakyJoystick_SneakyJoystick_setThumbRadius00);
   tolua_function(tolua_S,"setDeadRadius",tolua_SneakyJoystick_SneakyJoystick_setDeadRadius00);
   tolua_function(tolua_S,"ccTouchBegan",tolua_SneakyJoystick_SneakyJoystick_ccTouchBegan00);
   tolua_function(tolua_S,"ccTouchMoved",tolua_SneakyJoystick_SneakyJoystick_ccTouchMoved00);
   tolua_function(tolua_S,"ccTouchEnded",tolua_SneakyJoystick_SneakyJoystick_ccTouchEnded00);
   tolua_function(tolua_S,"ccTouchCancelled",tolua_SneakyJoystick_SneakyJoystick_ccTouchCancelled00);
   tolua_function(tolua_S,"touchDelegateRelease",tolua_SneakyJoystick_SneakyJoystick_touchDelegateRelease00);
   tolua_function(tolua_S,"touchDelegateRetain",tolua_SneakyJoystick_SneakyJoystick_touchDelegateRetain00);
   tolua_function(tolua_S,"updateVelocity",tolua_SneakyJoystick_SneakyJoystick_updateVelocity00);
   tolua_function(tolua_S,"setTouchRadius",tolua_SneakyJoystick_SneakyJoystick_setTouchRadius00);
   tolua_variable(tolua_S,"__CCTargetedTouchDelegate__",tolua_get_SneakyJoystick___CCTargetedTouchDelegate__,NULL);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_SneakyJoystick (lua_State* tolua_S) {
 return tolua_SneakyJoystick_open(tolua_S);
};
#endif
