
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_Pages_2LoginPage.h"

#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_Forms_2PanelForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_VectorUI.h"
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_VectorUIForm.h"
#include "std/std.buildv1.1.15/windows_debug_mx/include/std_geom_2vec2.h"

extern t_std_geom_Vec2_1f g_VectorSite_VectorSite_VirRes;

void t_VectorSite_LoginPage::dbEmit(){
  t_VectorSite_VectorPage::dbEmit();
  puts( "[VectorSite.LoginPage]");
}

t_VectorSite_LoginPage::t_VectorSite_LoginPage():t_VectorSite_VectorPage(){
  bbDBFrame db_f{"new:Void()","D:/Git/VectorCMS/Pages/LoginPage.monkey2"};
  t_VectorSite_LoginPage*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(32771);
  this->m_UI=bbGCNew<t_VectorSite_VectorUI>();
  bbDBStmt(36866);
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
  bbDBStmt(98306);
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
  bbDBStmt(122882);
  (f0.t0=this->m_UI.get())->m_Render();
}

void t_VectorSite_LoginPage::m_OnInit(){
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorUIForm* l_back{};
    void gcMark(){
      bbGCMark(l_back);
    }
  }f0{};
  bbDBFrame db_f{"OnInit:Void()","D:/Git/VectorCMS/Pages/LoginPage.monkey2"};
  t_VectorSite_LoginPage*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(65544);
  f0.l_back=((t_VectorSite_VectorUIForm*)(bbGCNew<t_VectorSite_PanelForm>(10,10,bbInt((g_VectorSite_VectorSite_VirRes.m_x-20.0f)),bbInt((g_VectorSite_VectorSite_VirRes.m_y-20.0f)))));
  bbDBLocal("back",&f0.l_back);
  bbDBStmt(73730);
  this->m_UI.get()->m_Root=f0.l_back;
}
bbString bbDBType(t_VectorSite_LoginPage**){
  return "VectorSite.LoginPage";
}
bbString bbDBValue(t_VectorSite_LoginPage**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorEngineSite_Pages_2LoginPage_init_f(){
}
