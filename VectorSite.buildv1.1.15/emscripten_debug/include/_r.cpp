
#include <bbmonkey.h>
#include <bbtypeinfo_r.h>
#include <bbdeclinfo_r.h>

#include "_r.h"

#include "mojo/mojo.buildv1.1.15/emscripten_debug/include/mojo_graphics_2canvas.h"
#include "monkey/monkey.buildv1.1.15/emscripten_debug/include/monkey_types.h"
#include "std/std.buildv1.1.15/emscripten_debug/include/std_geom_2vec2.h"
#include "VectorSite.buildv1.1.15/emscripten_debug/include/VectorSite_VectorObject.h"
#include "VectorSite.buildv1.1.15/emscripten_debug/include/VectorSite_VectorSite.h"
#include "VectorSite.buildv1.1.15/emscripten_debug/include/VectorSite_VectorUIForm.h"

BB_CLASS(t_mojo_app_Window)
BB_ENUM(t_mojo_app_WindowFlags)

#if BB_R_VectorSite || BB_R_VectorSite__
static struct mx2_VectorSite_VectorSite_typeinfo : public bbClassDecls{
  mx2_VectorSite_VectorSite_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("VectorSite")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbFunctionDecl<void>("Main",&bbMain));
  }
}_mx2_VectorSite_VectorSite_typeinfo;

struct rt_VectorSite_VectorSite : public bbClassTypeInfo{
  static rt_VectorSite_VectorSite instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_VectorSite_VectorSite,bbString,bbInt,bbInt,t_mojo_app_WindowFlags>(),bbFieldDecl("Settings",&t_VectorSite_VectorSite::m_Settings),bbMethodDecl<t_VectorSite_VectorSite,void,t_mojo_graphics_Canvas*>("OnRender",&t_VectorSite_VectorSite::m_OnRender),bbMethodDecl<t_VectorSite_VectorSite,void>("InitSite",&t_VectorSite_VectorSite::m_InitSite));
    }
  }decls;
  rt_VectorSite_VectorSite():bbClassTypeInfo("VectorSite.VectorSite","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<t_mojo_app_Window*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_VectorSite_VectorSite*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_VectorSite_VectorSite>>(length));
  }
};
rt_VectorSite_VectorSite rt_VectorSite_VectorSite::instance;
rt_VectorSite_VectorSite::decls_t rt_VectorSite_VectorSite::decls;

bbTypeInfo *bbGetType(t_VectorSite_VectorSite*const&){
  return &rt_VectorSite_VectorSite::instance;
}
bbTypeInfo *t_VectorSite_VectorSite::typeof()const{
  return &rt_VectorSite_VectorSite::instance;
}

struct rt_VectorSite_VectorUIForm : public bbClassTypeInfo{
  static rt_VectorSite_VectorUIForm instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_VectorSite_VectorUIForm>());
    }
  }decls;
  rt_VectorSite_VectorUIForm():bbClassTypeInfo("VectorSite.VectorUIForm","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<t_VectorSite_VectorObject*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_VectorSite_VectorUIForm*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_VectorSite_VectorUIForm>>(length));
  }
};
rt_VectorSite_VectorUIForm rt_VectorSite_VectorUIForm::instance;
rt_VectorSite_VectorUIForm::decls_t rt_VectorSite_VectorUIForm::decls;

bbTypeInfo *bbGetType(t_VectorSite_VectorUIForm*const&){
  return &rt_VectorSite_VectorUIForm::instance;
}
bbTypeInfo *t_VectorSite_VectorUIForm::typeof()const{
  return &rt_VectorSite_VectorUIForm::instance;
}

struct rt_VectorSite_VectorObject : public bbClassTypeInfo{
  static rt_VectorSite_VectorObject instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_VectorSite_VectorObject>(),bbFieldDecl("Pos",&t_VectorSite_VectorObject::m_Pos),bbFieldDecl("Size",&t_VectorSite_VectorObject::m_Size));
    }
  }decls;
  rt_VectorSite_VectorObject():bbClassTypeInfo("VectorSite.VectorObject","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<bbObject*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_VectorSite_VectorObject*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_VectorSite_VectorObject>>(length));
  }
};
rt_VectorSite_VectorObject rt_VectorSite_VectorObject::instance;
rt_VectorSite_VectorObject::decls_t rt_VectorSite_VectorObject::decls;

bbTypeInfo *bbGetType(t_VectorSite_VectorObject*const&){
  return &rt_VectorSite_VectorObject::instance;
}
bbTypeInfo *t_VectorSite_VectorObject::typeof()const{
  return &rt_VectorSite_VectorObject::instance;
}
#else
static bbUnknownTypeInfo rt_VectorSite_VectorSite("VectorSite.VectorSite");
bbTypeInfo *bbGetType(t_VectorSite_VectorSite*const&){
  return &rt_VectorSite_VectorSite;
}
bbTypeInfo *t_VectorSite_VectorSite::typeof()const{
  return &rt_VectorSite_VectorSite;
}
static bbUnknownTypeInfo rt_VectorSite_VectorUIForm("VectorSite.VectorUIForm");
bbTypeInfo *bbGetType(t_VectorSite_VectorUIForm*const&){
  return &rt_VectorSite_VectorUIForm;
}
bbTypeInfo *t_VectorSite_VectorUIForm::typeof()const{
  return &rt_VectorSite_VectorUIForm;
}
static bbUnknownTypeInfo rt_VectorSite_VectorObject("VectorSite.VectorObject");
bbTypeInfo *bbGetType(t_VectorSite_VectorObject*const&){
  return &rt_VectorSite_VectorObject;
}
bbTypeInfo *t_VectorSite_VectorObject::typeof()const{
  return &rt_VectorSite_VectorObject;
}
#endif