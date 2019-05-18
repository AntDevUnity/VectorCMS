
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_Pages_2LoginPage.h"

#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_Forms_2PanelForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_Forms_2TextBoxForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_Forms_2WindowForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_VectorUI.h"
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_VectorUIForm.h"
#include "std/std.buildv1.1.15/windows_debug_mx/include/std_geom_2vec2.h"

extern t_std_geom_Vec2_1f g_VectorSite_VectorSite_VirRes;

void t_VectorSite_LoginPage::gcMark(){
  t_VectorSite_VectorPage::gcMark();
  bbGCMark(m_LoginWin);
}

void t_VectorSite_LoginPage::dbEmit(){
  t_VectorSite_VectorPage::dbEmit();
  puts( "[VectorSite.LoginPage]");
  bbDBEmit("LoginWin",&m_LoginWin);
}

t_VectorSite_LoginPage::t_VectorSite_LoginPage():t_VectorSite_VectorPage(){
  bbDBFrame db_f{"new:Void()","D:/Git/VectorCMS/Pages/LoginPage.monkey2"};
  t_VectorSite_LoginPage*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(36867);
  this->m_UI=bbGCNew<t_VectorSite_VectorUI>();
  bbDBStmt(40962);
  this->m_OnInit();
}
t_VectorSite_LoginPage::~t_VectorSite_LoginPage(){
}

void t_VectorSite_LoginPage::m_OnUpdate(){
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorUI* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"OnUpdate:Void()","D:/Git/VectorCMS/Pages/LoginPage.monkey2"};
  t_VectorSite_LoginPage*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(151554);
  (f0.t0=this->m_UI.get())->m_Update();
}

void t_VectorSite_LoginPage::m_OnRender(){
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorUI* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"OnRender:Void()","D:/Git/VectorCMS/Pages/LoginPage.monkey2"};
  t_VectorSite_LoginPage*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(176130);
  (f0.t0=this->m_UI.get())->m_Render();
}

void t_VectorSite_LoginPage::m_OnInit(){
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorUIForm* l_back{};
    t_VectorSite_TextBoxForm* l_pass{};
    t_VectorSite_TextBoxForm* l_user{};
    t_VectorSite_VectorUIForm* t0{};
    t_VectorSite_WindowForm* t1{};
    void gcMark(){
      bbGCMark(l_back);
      bbGCMark(l_pass);
      bbGCMark(l_user);
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"OnInit:Void()","D:/Git/VectorCMS/Pages/LoginPage.monkey2"};
  t_VectorSite_LoginPage*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(69640);
  f0.l_back=((t_VectorSite_VectorUIForm*)(bbGCNew<t_VectorSite_PanelForm>(10,10,bbInt((g_VectorSite_VectorSite_VirRes.m_x-20.0f)),bbInt((g_VectorSite_VectorSite_VirRes.m_y-20.0f)))));
  bbDBLocal("back",&f0.l_back);
  bbDBStmt(77826);
  this->m_UI.get()->m_Root=f0.l_back;
  bbDBStmt(86018);
  this->m_LoginWin=bbGCNew<t_VectorSite_WindowForm>(bbInt(((g_VectorSite_VectorSite_VirRes.m_x/2.0f)-200.0f)),bbInt(((g_VectorSite_VectorSite_VirRes.m_y/2.0f)-150.0f)),400,300,bbString(L"VectorEngine - Login",20));
  bbDBStmt(94210);
  bb_print((bbString(L"LX:",3)+bbString(this->m_LoginWin.get()->m_Pos.m_x)));
  bbDBStmt(102402);
  f0.l_back->m_Add(f0.t0=((t_VectorSite_VectorUIForm*)(this->m_LoginWin.get())));
  bbDBStmt(110600);
  f0.l_user=bbGCNew<t_VectorSite_TextBoxForm>(20,40,180,25,bbString(L"Admin",5));
  bbDBLocal("user",&f0.l_user);
  bbDBStmt(114696);
  f0.l_pass=bbGCNew<t_VectorSite_TextBoxForm>(20,75,180,25,bbString{});
  bbDBLocal("pass",&f0.l_pass);
  bbDBStmt(122882);
  (f0.t1=this->m_LoginWin.get())->m_Add(((t_VectorSite_VectorUIForm*)(f0.l_user)));
  bbDBStmt(126978);
  (f0.t1=this->m_LoginWin.get())->m_Add(((t_VectorSite_VectorUIForm*)(f0.l_pass)));
}
bbString bbDBType(t_VectorSite_LoginPage**){
  return "VectorSite.LoginPage";
}
bbString bbDBValue(t_VectorSite_LoginPage**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorEngineSite_Pages_2LoginPage_init_f(){
}
