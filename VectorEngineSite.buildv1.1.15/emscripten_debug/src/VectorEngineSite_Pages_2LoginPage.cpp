
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_Pages_2LoginPage.h"

#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_Forms_2PanelForm.h"
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_Forms_2WindowForm.h"
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorUI.h"
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorUIForm.h"
#include "std/std.buildv1.1.15/emscripten_debug/include/std_geom_2vec2.h"

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
  bbDBStmt(126978);
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
  bbDBStmt(151554);
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
  bbDBStmt(69640);
  f0.l_back=((t_VectorSite_VectorUIForm*)(bbGCNew<t_VectorSite_PanelForm>(bbInt(0),bbInt(0),bbInt((g_VectorSite_VectorSite_VirRes.m_x-20.0f)),bbInt((g_VectorSite_VectorSite_VirRes.m_y-20.0f)))));
  bbDBLocal("back",&f0.l_back);
  bbDBStmt(77826);
  this->m_UI.get()->m_Root=f0.l_back;
  bbDBStmt(86018);
  this->m_LoginWin=bbGCNew<t_VectorSite_WindowForm>(bbInt(((g_VectorSite_VectorSite_VirRes.m_x/2.0f)-200.0f)),bbInt(((g_VectorSite_VectorSite_VirRes.m_y/2.0f)-150.0f)),400,300,bbString(L"VectorEngine - Login",20));
  bbDBStmt(94210);
  bb_print((bbString(L"LX:",3)+bbString(this->m_LoginWin.get()->m_Pos.m_x)));
  bbDBStmt(98305);
  this->m_UI.get()->m_Root=((t_VectorSite_VectorUIForm*)(this->m_LoginWin.get()));
}
bbString bbDBType(t_VectorSite_LoginPage**){
  return "VectorSite.LoginPage";
}
bbString bbDBValue(t_VectorSite_LoginPage**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorEngineSite_Pages_2LoginPage_init_f(){
}
