
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Pages_2LoginPage.h"

#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Forms_2PanelForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Forms_2TextBoxForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Forms_2WindowForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorUI.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorUIForm.h"
#include "std/std.buildv1.1.15/windows_release_mx/include/std_geom_2vec2.h"

extern t_std_geom_Vec2_1f g_VectorSite_VectorSite_VirRes;

void t_VectorSite_LoginPage::gcMark(){
  t_VectorSite_VectorPage::gcMark();
  bbGCMark(m_LoginWin);
}

t_VectorSite_LoginPage::t_VectorSite_LoginPage():t_VectorSite_VectorPage(){
  this->m_UI=bbGCNew<t_VectorSite_VectorUI>();
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
  (f0.t0=this->m_UI.get())->m_Update();
}

void t_VectorSite_LoginPage::m_OnRender(){
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorUI* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
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
  f0.l_back=((t_VectorSite_VectorUIForm*)(bbGCNew<t_VectorSite_PanelForm>(10,10,bbInt((g_VectorSite_VectorSite_VirRes.m_x-20.0f)),bbInt((g_VectorSite_VectorSite_VirRes.m_y-20.0f)))));
  this->m_UI.get()->m_Root=f0.l_back;
  this->m_LoginWin=bbGCNew<t_VectorSite_WindowForm>(bbInt(((g_VectorSite_VectorSite_VirRes.m_x/2.0f)-200.0f)),bbInt(((g_VectorSite_VectorSite_VirRes.m_y/2.0f)-150.0f)),400,300,bbString(L"VectorEngine - Login",20));
  bb_print((bbString(L"LX:",3)+bbString(this->m_LoginWin.get()->m_Pos.m_x)));
  f0.l_back->m_Add(f0.t0=((t_VectorSite_VectorUIForm*)(this->m_LoginWin.get())));
  f0.l_user=bbGCNew<t_VectorSite_TextBoxForm>(20,40,180,25,bbString(L"Admin",5));
  f0.l_pass=bbGCNew<t_VectorSite_TextBoxForm>(20,75,180,25,bbString{});
  (f0.t1=this->m_LoginWin.get())->m_Add(((t_VectorSite_VectorUIForm*)(f0.l_user)));
  (f0.t1=this->m_LoginWin.get())->m_Add(((t_VectorSite_VectorUIForm*)(f0.l_pass)));
}

void mx2_VectorEngineSite_Pages_2LoginPage_init_f(){
}
