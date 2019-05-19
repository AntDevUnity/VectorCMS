
#include <bbmonkey.h>
#include <bbtypeinfo_r.h>
#include <bbdeclinfo_r.h>

#include "_r.h"

#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Forms_2ButtonForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Forms_2LabelForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Forms_2PanelForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Forms_2TextBoxForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Forms_2WindowForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Pages_2LoginPage.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorEngineSite.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorObject.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorPage.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorSite.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorUI.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorUIForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_std_collections_2container.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_std_collections_2deque.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_std_collections_2list.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_std_collections_2stack.h"
#include "mojo/mojo.buildv1.1.15/windows_release_mx/include/mojo_graphics_2canvas.h"
#include "mojo/mojo.buildv1.1.15/windows_release_mx/include/mojo_graphics_2image.h"
#include "monkey/monkey.buildv1.1.15/windows_release_mx/include/monkey_types.h"
#include "std/std.buildv1.1.15/windows_release_mx/include/std_geom_2vec2.h"
#include "std/std.buildv1.1.15/windows_release_mx/include/std_graphics_2color.h"

BB_CLASS(t_mojo_app_Window)
BB_ENUM(t_mojo_app_WindowFlags)

#if BB_R_VectorSite || BB_R_VectorSite__
static struct mx2_VectorEngineSite_VectorEngineSite_typeinfo : public bbClassDecls{
  mx2_VectorEngineSite_VectorEngineSite_typeinfo():bbClassDecls(bbClassTypeInfo::getNamespace("VectorSite")){
  }
  bbDeclInfo **initDecls(){
    return bbMembers(bbFunctionDecl<void>("Main",&bbMain));
  }
}_mx2_VectorEngineSite_VectorEngineSite_typeinfo;

struct rt_VectorSite_VectorEngineSite : public bbClassTypeInfo{
  static rt_VectorSite_VectorEngineSite instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_VectorSite_VectorEngineSite>(),bbFieldDecl("CurPage",&t_VectorSite_VectorEngineSite::m_CurPage),bbMethodDecl<t_VectorSite_VectorEngineSite,void>("DoRender",&t_VectorSite_VectorEngineSite::m_DoRender));
    }
  }decls;
  rt_VectorSite_VectorEngineSite():bbClassTypeInfo("VectorSite.VectorEngineSite","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<t_VectorSite_VectorSite*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_VectorSite_VectorEngineSite*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_VectorSite_VectorEngineSite>>(length));
  }
};
rt_VectorSite_VectorEngineSite rt_VectorSite_VectorEngineSite::instance;
rt_VectorSite_VectorEngineSite::decls_t rt_VectorSite_VectorEngineSite::decls;

bbTypeInfo *bbGetType(t_VectorSite_VectorEngineSite*const&){
  return &rt_VectorSite_VectorEngineSite::instance;
}
bbTypeInfo *t_VectorSite_VectorEngineSite::typeof()const{
  return &rt_VectorSite_VectorEngineSite::instance;
}

struct rt_VectorSite_VectorSite : public bbClassTypeInfo{
  static rt_VectorSite_VectorSite instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_VectorSite_VectorSite,bbString,bbInt,bbInt,t_mojo_app_WindowFlags>(),bbFieldDecl("Settings",&t_VectorSite_VectorSite::m_Settings),bbFieldDecl("UI",&t_VectorSite_VectorSite::m_UI),bbMethodDecl<t_VectorSite_VectorSite,void>("UpdateUI",&t_VectorSite_VectorSite::m_UpdateUI),bbMethodDecl<t_VectorSite_VectorSite,void>("RenderUI",&t_VectorSite_VectorSite::m_RenderUI),bbMethodDecl<t_VectorSite_VectorSite,void,t_mojo_graphics_Canvas*>("OnRender",&t_VectorSite_VectorSite::m_OnRender),bbMethodDecl<t_VectorSite_VectorSite,void>("InitSite",&t_VectorSite_VectorSite::m_InitSite),bbMethodDecl<t_VectorSite_VectorSite,void>("EndRender",&t_VectorSite_VectorSite::m_EndRender),bbMethodDecl<t_VectorSite_VectorSite,void,bbString,bbInt,bbInt>("DrawString",&t_VectorSite_VectorSite::m_DrawString),bbMethodDecl<t_VectorSite_VectorSite,void>("DoRender",&t_VectorSite_VectorSite::m_DoRender),bbMethodDecl<t_VectorSite_VectorSite,void>("BeginRender",&t_VectorSite_VectorSite::m_BeginRender),bbGlobalDecl("CC",&g_VectorSite_VectorSite_CC),bbGlobalDecl("Can",&g_VectorSite_VectorSite_Can),bbGlobalDecl("ClearCol",&g_VectorSite_VectorSite_ClearCol),bbGlobalDecl("VirRes",&g_VectorSite_VectorSite_VirRes),bbFunctionDecl<bbInt,bbString>("TextW",&g_VectorSite_VectorSite_TextW),bbFunctionDecl<bbInt,bbString>("TextH",&g_VectorSite_VectorSite_TextH),bbFunctionDecl<void,t_mojo_graphics_Image*,bbInt,bbInt,bbInt,bbInt,t_std_graphics_Color>("RectImg",&g_VectorSite_VectorSite_RectImg),bbFunctionDecl<void,bbInt,bbInt,bbInt,bbInt,t_std_graphics_Color>("Rect",&g_VectorSite_VectorSite_Rect),bbFunctionDecl<void,bbString,bbInt,bbInt,t_std_graphics_Color>("DrawText",&g_VectorSite_VectorSite_DrawText));
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

struct rt_VectorSite_LoginPage : public bbClassTypeInfo{
  static rt_VectorSite_LoginPage instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_VectorSite_LoginPage>(),bbFieldDecl("LoginWin",&t_VectorSite_LoginPage::m_LoginWin),bbMethodDecl<t_VectorSite_LoginPage,void>("OnUpdate",&t_VectorSite_LoginPage::m_OnUpdate),bbMethodDecl<t_VectorSite_LoginPage,void>("OnRender",&t_VectorSite_LoginPage::m_OnRender),bbMethodDecl<t_VectorSite_LoginPage,void>("OnInit",&t_VectorSite_LoginPage::m_OnInit));
    }
  }decls;
  rt_VectorSite_LoginPage():bbClassTypeInfo("VectorSite.LoginPage","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<t_VectorSite_VectorPage*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_VectorSite_LoginPage*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_VectorSite_LoginPage>>(length));
  }
};
rt_VectorSite_LoginPage rt_VectorSite_LoginPage::instance;
rt_VectorSite_LoginPage::decls_t rt_VectorSite_LoginPage::decls;

bbTypeInfo *bbGetType(t_VectorSite_LoginPage*const&){
  return &rt_VectorSite_LoginPage::instance;
}
bbTypeInfo *t_VectorSite_LoginPage::typeof()const{
  return &rt_VectorSite_LoginPage::instance;
}

struct rt_VectorSite_VectorPage : public bbClassTypeInfo{
  static rt_VectorSite_VectorPage instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_VectorSite_VectorPage>(),bbFieldDecl("UI",&t_VectorSite_VectorPage::m_UI),bbMethodDecl<t_VectorSite_VectorPage,void>("OnUpdate",&t_VectorSite_VectorPage::m_OnUpdate),bbMethodDecl<t_VectorSite_VectorPage,void>("OnRender",&t_VectorSite_VectorPage::m_OnRender),bbMethodDecl<t_VectorSite_VectorPage,void>("OnInit",&t_VectorSite_VectorPage::m_OnInit));
    }
  }decls;
  rt_VectorSite_VectorPage():bbClassTypeInfo("VectorSite.VectorPage","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<bbObject*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_VectorSite_VectorPage*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_VectorSite_VectorPage>>(length));
  }
};
rt_VectorSite_VectorPage rt_VectorSite_VectorPage::instance;
rt_VectorSite_VectorPage::decls_t rt_VectorSite_VectorPage::decls;

bbTypeInfo *bbGetType(t_VectorSite_VectorPage*const&){
  return &rt_VectorSite_VectorPage::instance;
}
bbTypeInfo *t_VectorSite_VectorPage::typeof()const{
  return &rt_VectorSite_VectorPage::instance;
}

struct rt_VectorSite_TextBoxForm : public bbClassTypeInfo{
  static rt_VectorSite_TextBoxForm instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_VectorSite_TextBoxForm,bbInt,bbInt,bbInt,bbInt,bbString>(),bbFieldDecl("Active",&t_VectorSite_TextBoxForm::m_Active),bbFieldDecl("ClaretOn",&t_VectorSite_TextBoxForm::m_ClaretOn),bbFieldDecl("NextOn",&t_VectorSite_TextBoxForm::m_NextOn),bbFieldDecl("KeyDown",&t_VectorSite_TextBoxForm::m_KeyDown),bbFieldDecl("KeyNext",&t_VectorSite_TextBoxForm::m_KeyNext),bbFieldDecl("ClaretX",&t_VectorSite_TextBoxForm::m_ClaretX),bbFieldDecl("StartX",&t_VectorSite_TextBoxForm::m_StartX),bbMethodDecl<t_VectorSite_TextBoxForm,void,bbInt>("ProcessKey",&t_VectorSite_TextBoxForm::m_ProcessKey),bbMethodDecl<t_VectorSite_TextBoxForm,void,bbInt>("OnKeyUp",&t_VectorSite_TextBoxForm::m_OnKeyUp),bbMethodDecl<t_VectorSite_TextBoxForm,void,bbInt>("OnKeyDown",&t_VectorSite_TextBoxForm::m_OnKeyDown),bbMethodDecl<t_VectorSite_TextBoxForm,void>("OnDraw",&t_VectorSite_TextBoxForm::m_OnDraw),bbMethodDecl<t_VectorSite_TextBoxForm,void>("Deactivate",&t_VectorSite_TextBoxForm::m_Deactivate),bbMethodDecl<t_VectorSite_TextBoxForm,void>("Activate",&t_VectorSite_TextBoxForm::m_Activate));
    }
  }decls;
  rt_VectorSite_TextBoxForm():bbClassTypeInfo("VectorSite.TextBoxForm","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<t_VectorSite_VectorUIForm*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_VectorSite_TextBoxForm*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_VectorSite_TextBoxForm>>(length));
  }
};
rt_VectorSite_TextBoxForm rt_VectorSite_TextBoxForm::instance;
rt_VectorSite_TextBoxForm::decls_t rt_VectorSite_TextBoxForm::decls;

bbTypeInfo *bbGetType(t_VectorSite_TextBoxForm*const&){
  return &rt_VectorSite_TextBoxForm::instance;
}
bbTypeInfo *t_VectorSite_TextBoxForm::typeof()const{
  return &rt_VectorSite_TextBoxForm::instance;
}

struct rt_VectorSite_WindowForm : public bbClassTypeInfo{
  static rt_VectorSite_WindowForm instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_VectorSite_WindowForm,bbInt,bbInt,bbInt,bbInt,bbString>(),bbFieldDecl("Body",&t_VectorSite_WindowForm::m_Body),bbFieldDecl("Title",&t_VectorSite_WindowForm::m_Title),bbFieldDecl("Resize",&t_VectorSite_WindowForm::m_Resize),bbFieldDecl("Close",&t_VectorSite_WindowForm::m_Close),bbMethodDecl<t_VectorSite_WindowForm,bbBool,bbInt,bbInt>("ON_TitleDrag",&t_VectorSite_WindowForm::m_ON_0TitleDrag),bbMethodDecl<t_VectorSite_WindowForm,bbBool,bbInt,bbInt>("ON_SizeDrag",&t_VectorSite_WindowForm::m_ON_0SizeDrag));
    }
  }decls;
  rt_VectorSite_WindowForm():bbClassTypeInfo("VectorSite.WindowForm","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<t_VectorSite_VectorUIForm*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_VectorSite_WindowForm*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_VectorSite_WindowForm>>(length));
  }
};
rt_VectorSite_WindowForm rt_VectorSite_WindowForm::instance;
rt_VectorSite_WindowForm::decls_t rt_VectorSite_WindowForm::decls;

bbTypeInfo *bbGetType(t_VectorSite_WindowForm*const&){
  return &rt_VectorSite_WindowForm::instance;
}
bbTypeInfo *t_VectorSite_WindowForm::typeof()const{
  return &rt_VectorSite_WindowForm::instance;
}

struct rt_VectorSite_ButtonForm : public bbClassTypeInfo{
  static rt_VectorSite_ButtonForm instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_VectorSite_ButtonForm,bbInt,bbInt,bbInt,bbInt,bbString>(),bbFieldDecl("ButCol",&t_VectorSite_ButtonForm::m_ButCol),bbFieldDecl("Down",&t_VectorSite_ButtonForm::m_Down),bbMethodDecl<t_VectorSite_ButtonForm,void,t_VectorSite_Button>("OnMouseUp",&t_VectorSite_ButtonForm::m_OnMouseUp),bbMethodDecl<t_VectorSite_ButtonForm,void,bbInt,bbInt,bbInt,bbInt>("OnMouseMove",&t_VectorSite_ButtonForm::m_OnMouseMove),bbMethodDecl<t_VectorSite_ButtonForm,void>("OnMouseLeave",&t_VectorSite_ButtonForm::m_OnMouseLeave),bbMethodDecl<t_VectorSite_ButtonForm,void>("OnMouseEnter",&t_VectorSite_ButtonForm::m_OnMouseEnter),bbMethodDecl<t_VectorSite_ButtonForm,void,t_VectorSite_Button>("OnMouseDown",&t_VectorSite_ButtonForm::m_OnMouseDown),bbMethodDecl<t_VectorSite_ButtonForm,void>("OnDraw",&t_VectorSite_ButtonForm::m_OnDraw));
    }
  }decls;
  rt_VectorSite_ButtonForm():bbClassTypeInfo("VectorSite.ButtonForm","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<t_VectorSite_VectorUIForm*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_VectorSite_ButtonForm*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_VectorSite_ButtonForm>>(length));
  }
};
rt_VectorSite_ButtonForm rt_VectorSite_ButtonForm::instance;
rt_VectorSite_ButtonForm::decls_t rt_VectorSite_ButtonForm::decls;

bbTypeInfo *bbGetType(t_VectorSite_ButtonForm*const&){
  return &rt_VectorSite_ButtonForm::instance;
}
bbTypeInfo *t_VectorSite_ButtonForm::typeof()const{
  return &rt_VectorSite_ButtonForm::instance;
}

struct rt_VectorSite_LabelForm : public bbClassTypeInfo{
  static rt_VectorSite_LabelForm instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_VectorSite_LabelForm,bbString,bbInt,bbInt>(),bbMethodDecl<t_VectorSite_LabelForm,void>("OnDraw",&t_VectorSite_LabelForm::m_OnDraw));
    }
  }decls;
  rt_VectorSite_LabelForm():bbClassTypeInfo("VectorSite.LabelForm","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<t_VectorSite_VectorUIForm*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_VectorSite_LabelForm*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_VectorSite_LabelForm>>(length));
  }
};
rt_VectorSite_LabelForm rt_VectorSite_LabelForm::instance;
rt_VectorSite_LabelForm::decls_t rt_VectorSite_LabelForm::decls;

bbTypeInfo *bbGetType(t_VectorSite_LabelForm*const&){
  return &rt_VectorSite_LabelForm::instance;
}
bbTypeInfo *t_VectorSite_LabelForm::typeof()const{
  return &rt_VectorSite_LabelForm::instance;
}

struct rt_VectorSite_PanelForm : public bbClassTypeInfo{
  static rt_VectorSite_PanelForm instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_VectorSite_PanelForm,bbInt,bbInt,bbInt,bbInt>(),bbFieldDecl("PanelCol",&t_VectorSite_PanelForm::m_PanelCol),bbMethodDecl<t_VectorSite_PanelForm,void>("OnDraw",&t_VectorSite_PanelForm::m_OnDraw));
    }
  }decls;
  rt_VectorSite_PanelForm():bbClassTypeInfo("VectorSite.PanelForm","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<t_VectorSite_VectorUIForm*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_VectorSite_PanelForm*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_VectorSite_PanelForm>>(length));
  }
};
rt_VectorSite_PanelForm rt_VectorSite_PanelForm::instance;
rt_VectorSite_PanelForm::decls_t rt_VectorSite_PanelForm::decls;

bbTypeInfo *bbGetType(t_VectorSite_PanelForm*const&){
  return &rt_VectorSite_PanelForm::instance;
}
bbTypeInfo *t_VectorSite_PanelForm::typeof()const{
  return &rt_VectorSite_PanelForm::instance;
}

struct rt_VectorSite_VectorUI : public bbClassTypeInfo{
  static rt_VectorSite_VectorUI instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_VectorSite_VectorUI>(),bbFieldDecl("Root",&t_VectorSite_VectorUI::m_Root),bbFieldDecl("LastMx",&t_VectorSite_VectorUI::m_LastMx),bbFieldDecl("LastMy",&t_VectorSite_VectorUI::m_LastMy),bbMethodDecl<t_VectorSite_VectorUI,void>("Update",&t_VectorSite_VectorUI::m_Update),bbMethodDecl<t_VectorSite_VectorUI,void,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*>("RenderList",&t_VectorSite_VectorUI::m_RenderList),bbMethodDecl<t_VectorSite_VectorUI,void>("Render",&t_VectorSite_VectorUI::m_Render),bbMethodDecl<t_VectorSite_VectorUI,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*>("InvertList",&t_VectorSite_VectorUI::m_InvertList),bbMethodDecl<t_VectorSite_VectorUI,void,t_VectorSite_VectorUIForm*,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*>("AddToListForward",&t_VectorSite_VectorUI::m_AddToListForward),bbGlobalDecl("ActiveForm",&g_VectorSite_VectorUI_ActiveForm),bbGlobalDecl("OverForm",&g_VectorSite_VectorUI_OverForm),bbGlobalDecl("PressedForm",&g_VectorSite_VectorUI_PressedForm),bbGlobalDecl("ckey",&g_VectorSite_VectorUI_ckey),bbGlobalDecl("okeys",&g_VectorSite_VectorUI_okeys));
    }
  }decls;
  rt_VectorSite_VectorUI():bbClassTypeInfo("VectorSite.VectorUI","Class"){
  }
  bbTypeInfo *superType(){
    return bbGetType<bbObject*>();
  }
  bbVariant nullValue(){
    return bbVariant((t_VectorSite_VectorUI*)0);
  }
  bbVariant newArray( int length ){
    return bbVariant(bbArray<bbGCVar<t_VectorSite_VectorUI>>(length));
  }
};
rt_VectorSite_VectorUI rt_VectorSite_VectorUI::instance;
rt_VectorSite_VectorUI::decls_t rt_VectorSite_VectorUI::decls;

bbTypeInfo *bbGetType(t_VectorSite_VectorUI*const&){
  return &rt_VectorSite_VectorUI::instance;
}
bbTypeInfo *t_VectorSite_VectorUI::typeof()const{
  return &rt_VectorSite_VectorUI::instance;
}

struct et_VectorSite_Button : public bbEnumTypeInfo{
  static et_VectorSite_Button instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbLiteralDecl<t_VectorSite_Button>("Left",(t_VectorSite_Button)0),bbLiteralDecl<t_VectorSite_Button>("Middle",(t_VectorSite_Button)2),bbLiteralDecl<t_VectorSite_Button>("Right",(t_VectorSite_Button)1));
    }
  }decls;
  et_VectorSite_Button():bbEnumTypeInfo("VectorSite.Button"){
  }
  bbVariant makeEnum( int i ){
    return bbVariant( (t_VectorSite_Button)i );
  }
  int getEnum( bbVariant v ){
    return (int)v.get<t_VectorSite_Button>();
  }
};
et_VectorSite_Button et_VectorSite_Button::instance;
et_VectorSite_Button::decls_t et_VectorSite_Button::decls;

bbTypeInfo *bbGetType(t_VectorSite_Button const&){
  return &et_VectorSite_Button::instance;
}

struct rt_VectorSite_VectorUIForm : public bbClassTypeInfo{
  static rt_VectorSite_VectorUIForm instance;
  static struct decls_t : public bbClassDecls{
    decls_t():bbClassDecls(&instance){}
    bbDeclInfo **initDecls(){
      return bbMembers(bbCtorDecl<t_VectorSite_VectorUIForm>(),bbFieldDecl("Root",&t_VectorSite_VectorUIForm::m_Root),bbFieldDecl("Sub",&t_VectorSite_VectorUIForm::m_Sub),bbFieldDecl("BackImg",&t_VectorSite_VectorUIForm::m_BackImg),bbFieldDecl("Text",&t_VectorSite_VectorUIForm::m_Text),bbFieldDecl("TextCol",&t_VectorSite_VectorUIForm::m_TextCol),bbFieldDecl("OnClick",&t_VectorSite_VectorUIForm::m_OnClick),bbFieldDecl("OnDrag",&t_VectorSite_VectorUIForm::m_OnDrag),bbMethodDecl<t_VectorSite_VectorUIForm,bbInt,bbString>("TextW",&t_VectorSite_VectorUIForm::m_TextW),bbMethodDecl<t_VectorSite_VectorUIForm,bbInt,bbString>("TextH",&t_VectorSite_VectorUIForm::m_TextH),bbMethodDecl<t_VectorSite_VectorUIForm,void>("OnUpdate",&t_VectorSite_VectorUIForm::m_OnUpdate),bbMethodDecl<t_VectorSite_VectorUIForm,void,t_VectorSite_Button>("OnMouseUp",&t_VectorSite_VectorUIForm::m_OnMouseUp),bbMethodDecl<t_VectorSite_VectorUIForm,void,bbInt,bbInt,bbInt,bbInt>("OnMouseMove",&t_VectorSite_VectorUIForm::m_OnMouseMove),bbMethodDecl<t_VectorSite_VectorUIForm,void>("OnMouseLeave",&t_VectorSite_VectorUIForm::m_OnMouseLeave),bbMethodDecl<t_VectorSite_VectorUIForm,void>("OnMouseEnter",&t_VectorSite_VectorUIForm::m_OnMouseEnter),bbMethodDecl<t_VectorSite_VectorUIForm,void,t_VectorSite_Button>("OnMouseDown",&t_VectorSite_VectorUIForm::m_OnMouseDown),bbMethodDecl<t_VectorSite_VectorUIForm,void,bbInt>("OnKeyUp",&t_VectorSite_VectorUIForm::m_OnKeyUp),bbMethodDecl<t_VectorSite_VectorUIForm,void,bbInt>("OnKeyDown",&t_VectorSite_VectorUIForm::m_OnKeyDown),bbMethodDecl<t_VectorSite_VectorUIForm,void>("OnDraw",&t_VectorSite_VectorUIForm::m_OnDraw),bbMethodDecl<t_VectorSite_VectorUIForm,bbBool,bbInt,bbInt>("InBounds",&t_VectorSite_VectorUIForm::m_InBounds),bbMethodDecl<t_VectorSite_VectorUIForm,bbInt>("DrawY",&t_VectorSite_VectorUIForm::m_DrawY),bbMethodDecl<t_VectorSite_VectorUIForm,bbInt>("DrawX",&t_VectorSite_VectorUIForm::m_DrawX),bbMethodDecl<t_VectorSite_VectorUIForm,void,bbString,bbInt,bbInt,t_std_graphics_Color>("DrawText",&t_VectorSite_VectorUIForm::m_DrawText),bbMethodDecl<t_VectorSite_VectorUIForm,void,bbInt,bbInt,bbInt,bbInt,t_std_graphics_Color>("DrawRect",&t_VectorSite_VectorUIForm::m_DrawRect),bbMethodDecl<t_VectorSite_VectorUIForm,void,t_mojo_graphics_Image*,bbInt,bbInt,bbInt,bbInt,t_std_graphics_Color>("DrawImage",&t_VectorSite_VectorUIForm::m_DrawImage),bbMethodDecl<t_VectorSite_VectorUIForm,void>("Deactivate",&t_VectorSite_VectorUIForm::m_Deactivate),bbMethodDecl<t_VectorSite_VectorUIForm,t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*>("Add",&t_VectorSite_VectorUIForm::m_Add),bbMethodDecl<t_VectorSite_VectorUIForm,void>("Activate",&t_VectorSite_VectorUIForm::m_Activate));
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
static bbUnknownTypeInfo rt_VectorSite_VectorEngineSite("VectorSite.VectorEngineSite");
bbTypeInfo *bbGetType(t_VectorSite_VectorEngineSite*const&){
  return &rt_VectorSite_VectorEngineSite;
}
bbTypeInfo *t_VectorSite_VectorEngineSite::typeof()const{
  return &rt_VectorSite_VectorEngineSite;
}
static bbUnknownTypeInfo rt_VectorSite_VectorSite("VectorSite.VectorSite");
bbTypeInfo *bbGetType(t_VectorSite_VectorSite*const&){
  return &rt_VectorSite_VectorSite;
}
bbTypeInfo *t_VectorSite_VectorSite::typeof()const{
  return &rt_VectorSite_VectorSite;
}
static bbUnknownTypeInfo rt_VectorSite_LoginPage("VectorSite.LoginPage");
bbTypeInfo *bbGetType(t_VectorSite_LoginPage*const&){
  return &rt_VectorSite_LoginPage;
}
bbTypeInfo *t_VectorSite_LoginPage::typeof()const{
  return &rt_VectorSite_LoginPage;
}
static bbUnknownTypeInfo rt_VectorSite_VectorPage("VectorSite.VectorPage");
bbTypeInfo *bbGetType(t_VectorSite_VectorPage*const&){
  return &rt_VectorSite_VectorPage;
}
bbTypeInfo *t_VectorSite_VectorPage::typeof()const{
  return &rt_VectorSite_VectorPage;
}
static bbUnknownTypeInfo rt_VectorSite_TextBoxForm("VectorSite.TextBoxForm");
bbTypeInfo *bbGetType(t_VectorSite_TextBoxForm*const&){
  return &rt_VectorSite_TextBoxForm;
}
bbTypeInfo *t_VectorSite_TextBoxForm::typeof()const{
  return &rt_VectorSite_TextBoxForm;
}
static bbUnknownTypeInfo rt_VectorSite_WindowForm("VectorSite.WindowForm");
bbTypeInfo *bbGetType(t_VectorSite_WindowForm*const&){
  return &rt_VectorSite_WindowForm;
}
bbTypeInfo *t_VectorSite_WindowForm::typeof()const{
  return &rt_VectorSite_WindowForm;
}
static bbUnknownTypeInfo rt_VectorSite_ButtonForm("VectorSite.ButtonForm");
bbTypeInfo *bbGetType(t_VectorSite_ButtonForm*const&){
  return &rt_VectorSite_ButtonForm;
}
bbTypeInfo *t_VectorSite_ButtonForm::typeof()const{
  return &rt_VectorSite_ButtonForm;
}
static bbUnknownTypeInfo rt_VectorSite_LabelForm("VectorSite.LabelForm");
bbTypeInfo *bbGetType(t_VectorSite_LabelForm*const&){
  return &rt_VectorSite_LabelForm;
}
bbTypeInfo *t_VectorSite_LabelForm::typeof()const{
  return &rt_VectorSite_LabelForm;
}
static bbUnknownTypeInfo rt_VectorSite_PanelForm("VectorSite.PanelForm");
bbTypeInfo *bbGetType(t_VectorSite_PanelForm*const&){
  return &rt_VectorSite_PanelForm;
}
bbTypeInfo *t_VectorSite_PanelForm::typeof()const{
  return &rt_VectorSite_PanelForm;
}
static bbUnknownTypeInfo rt_VectorSite_VectorUI("VectorSite.VectorUI");
bbTypeInfo *bbGetType(t_VectorSite_VectorUI*const&){
  return &rt_VectorSite_VectorUI;
}
bbTypeInfo *t_VectorSite_VectorUI::typeof()const{
  return &rt_VectorSite_VectorUI;
}
static bbUnknownTypeInfo rt_VectorSite_Button("VectorSite.Button");
bbTypeInfo *bbGetType(t_VectorSite_Button const&){
  return &rt_VectorSite_Button;
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

#if BB_R_std_collections || BB_R_std_collections__ || BB_R_std__
static bbUnknownTypeInfo rt_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2("std.collections.IContainer<VectorSite.VectorUIForm>");
bbTypeInfo *bbGetType(t_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2*const&){
  return &rt_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2;
}
bbTypeInfo *t_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2::typeof()const{
  return &rt_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2;
}
static bbUnknownTypeInfo rt_std_collections_IIterator_1Tt_VectorSite_VectorUIForm_2("std.collections.IIterator<VectorSite.VectorUIForm>");
bbTypeInfo *bbGetType(t_std_collections_IIterator_1Tt_VectorSite_VectorUIForm_2*const&){
  return &rt_std_collections_IIterator_1Tt_VectorSite_VectorUIForm_2;
}
bbTypeInfo *t_std_collections_IIterator_1Tt_VectorSite_VectorUIForm_2::typeof()const{
  return &rt_std_collections_IIterator_1Tt_VectorSite_VectorUIForm_2;
}
static bbUnknownTypeInfo rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node("std.collections.List<VectorSite.VectorUIForm>.Node");
bbTypeInfo *bbGetType(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node*const&){
  return &rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node;
}
bbTypeInfo *t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node::typeof()const{
  return &rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node;
}
static bbUnknownTypeInfo rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator("std.collections.List<VectorSite.VectorUIForm>.Iterator");
bbTypeInfo *bbGetType(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator const&){
  return &rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator;
}
bbTypeInfo *t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator::typeof()const{
  return &rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator;
}
static bbUnknownTypeInfo rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator("std.collections.List<VectorSite.VectorUIForm>.BackwardsIterator");
bbTypeInfo *bbGetType(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator const&){
  return &rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator;
}
bbTypeInfo *t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::typeof()const{
  return &rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator;
}
static bbUnknownTypeInfo rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2("std.collections.List<VectorSite.VectorUIForm>");
bbTypeInfo *bbGetType(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*const&){
  return &rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2;
}
bbTypeInfo *t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::typeof()const{
  return &rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2;
}
static bbUnknownTypeInfo rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator("std.collections.Stack<VectorSite.VectorUIForm>.Iterator");
bbTypeInfo *bbGetType(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator const&){
  return &rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator;
}
bbTypeInfo *t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator::typeof()const{
  return &rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator;
}
static bbUnknownTypeInfo rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator("std.collections.Stack<VectorSite.VectorUIForm>.BackwardsIterator");
bbTypeInfo *bbGetType(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator const&){
  return &rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator;
}
bbTypeInfo *t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::typeof()const{
  return &rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator;
}
static bbUnknownTypeInfo rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2("std.collections.Stack<VectorSite.VectorUIForm>");
bbTypeInfo *bbGetType(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*const&){
  return &rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2;
}
bbTypeInfo *t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::typeof()const{
  return &rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2;
}
static bbUnknownTypeInfo rt_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator("std.collections.Deque<VectorSite.VectorUIForm>.Iterator");
bbTypeInfo *bbGetType(t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator const&){
  return &rt_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator;
}
bbTypeInfo *t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator::typeof()const{
  return &rt_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator;
}
static bbUnknownTypeInfo rt_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2("std.collections.Deque<VectorSite.VectorUIForm>");
bbTypeInfo *bbGetType(t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*const&){
  return &rt_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2;
}
bbTypeInfo *t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::typeof()const{
  return &rt_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2;
}
#else
static bbUnknownTypeInfo rt_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2("std.collections.IContainer<VectorSite.VectorUIForm>");
bbTypeInfo *bbGetType(t_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2*const&){
  return &rt_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2;
}
bbTypeInfo *t_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2::typeof()const{
  return &rt_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2;
}
static bbUnknownTypeInfo rt_std_collections_IIterator_1Tt_VectorSite_VectorUIForm_2("std.collections.IIterator<VectorSite.VectorUIForm>");
bbTypeInfo *bbGetType(t_std_collections_IIterator_1Tt_VectorSite_VectorUIForm_2*const&){
  return &rt_std_collections_IIterator_1Tt_VectorSite_VectorUIForm_2;
}
bbTypeInfo *t_std_collections_IIterator_1Tt_VectorSite_VectorUIForm_2::typeof()const{
  return &rt_std_collections_IIterator_1Tt_VectorSite_VectorUIForm_2;
}
static bbUnknownTypeInfo rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node("std.collections.List<VectorSite.VectorUIForm>.Node");
bbTypeInfo *bbGetType(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node*const&){
  return &rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node;
}
bbTypeInfo *t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node::typeof()const{
  return &rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node;
}
static bbUnknownTypeInfo rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator("std.collections.List<VectorSite.VectorUIForm>.Iterator");
bbTypeInfo *bbGetType(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator const&){
  return &rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator;
}
bbTypeInfo *t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator::typeof()const{
  return &rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator;
}
static bbUnknownTypeInfo rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator("std.collections.List<VectorSite.VectorUIForm>.BackwardsIterator");
bbTypeInfo *bbGetType(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator const&){
  return &rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator;
}
bbTypeInfo *t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::typeof()const{
  return &rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator;
}
static bbUnknownTypeInfo rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2("std.collections.List<VectorSite.VectorUIForm>");
bbTypeInfo *bbGetType(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*const&){
  return &rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2;
}
bbTypeInfo *t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::typeof()const{
  return &rt_std_collections_List_1Tt_VectorSite_VectorUIForm_2;
}
static bbUnknownTypeInfo rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator("std.collections.Stack<VectorSite.VectorUIForm>.Iterator");
bbTypeInfo *bbGetType(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator const&){
  return &rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator;
}
bbTypeInfo *t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator::typeof()const{
  return &rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator;
}
static bbUnknownTypeInfo rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator("std.collections.Stack<VectorSite.VectorUIForm>.BackwardsIterator");
bbTypeInfo *bbGetType(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator const&){
  return &rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator;
}
bbTypeInfo *t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::typeof()const{
  return &rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator;
}
static bbUnknownTypeInfo rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2("std.collections.Stack<VectorSite.VectorUIForm>");
bbTypeInfo *bbGetType(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*const&){
  return &rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2;
}
bbTypeInfo *t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::typeof()const{
  return &rt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2;
}
static bbUnknownTypeInfo rt_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator("std.collections.Deque<VectorSite.VectorUIForm>.Iterator");
bbTypeInfo *bbGetType(t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator const&){
  return &rt_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator;
}
bbTypeInfo *t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator::typeof()const{
  return &rt_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator;
}
static bbUnknownTypeInfo rt_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2("std.collections.Deque<VectorSite.VectorUIForm>");
bbTypeInfo *bbGetType(t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*const&){
  return &rt_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2;
}
bbTypeInfo *t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::typeof()const{
  return &rt_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2;
}
#endif