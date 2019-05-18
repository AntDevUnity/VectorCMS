
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Pages_2LoginPage.h"

#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Forms_2ButtonForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Forms_2LabelForm.h"
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
    t_VectorSite_ButtonForm* l_login{};
    t_VectorSite_TextBoxForm* l_pass{};
    t_VectorSite_LabelForm* l_pass_0lab{};
    t_VectorSite_ButtonForm* l_signup{};
    t_VectorSite_TextBoxForm* l_user{};
    t_VectorSite_LabelForm* l_user_0lab{};
    t_VectorSite_VectorUIForm* t0{};
    t_VectorSite_WindowForm* t1{};
    void gcMark(){
      bbGCMark(l_back);
      bbGCMark(l_login);
      bbGCMark(l_pass);
      bbGCMark(l_pass_0lab);
      bbGCMark(l_signup);
      bbGCMark(l_user);
      bbGCMark(l_user_0lab);
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  f0.l_back=((t_VectorSite_VectorUIForm*)(bbGCNew<t_VectorSite_PanelForm>(10,10,bbInt((g_VectorSite_VectorSite_VirRes.m_x-20.0f)),bbInt((g_VectorSite_VectorSite_VirRes.m_y-20.0f)))));
  this->m_UI.get()->m_Root=f0.l_back;
  this->m_LoginWin=bbGCNew<t_VectorSite_WindowForm>(bbInt(((g_VectorSite_VectorSite_VirRes.m_x/2.0f)-200.0f)),bbInt(((g_VectorSite_VectorSite_VirRes.m_y/2.0f)-150.0f)),400,300,bbString(L"VectorEngine - Login",20));
  bb_print((bbString(L"LX:",3)+bbString(this->m_LoginWin.get()->m_Pos.m_x)));
  f0.l_back->m_Add(f0.t0=((t_VectorSite_VectorUIForm*)(this->m_LoginWin.get())));
  f0.l_user_0lab=bbGCNew<t_VectorSite_LabelForm>(bbString(L"Username",8),10,46);
  f0.l_pass_0lab=bbGCNew<t_VectorSite_LabelForm>(bbString(L"Password",8),10,81);
  f0.l_user=bbGCNew<t_VectorSite_TextBoxForm>(85,40,300,25,bbString(L"Admin",5));
  f0.l_pass=bbGCNew<t_VectorSite_TextBoxForm>(85,75,300,25,bbString{});
  f0.l_login=bbGCNew<t_VectorSite_ButtonForm>(20,260,100,30,bbString(L"Login",5));
  f0.l_signup=bbGCNew<t_VectorSite_ButtonForm>(140,260,100,30,bbString(L"SignUp",6));
  (f0.t1=this->m_LoginWin.get())->m_Add(((t_VectorSite_VectorUIForm*)(f0.l_user)));
  (f0.t1=this->m_LoginWin.get())->m_Add(((t_VectorSite_VectorUIForm*)(f0.l_pass)));
  (f0.t1=this->m_LoginWin.get())->m_Add(((t_VectorSite_VectorUIForm*)(f0.l_user_0lab)));
  (f0.t1=this->m_LoginWin.get())->m_Add(((t_VectorSite_VectorUIForm*)(f0.l_pass_0lab)));
  (f0.t1=this->m_LoginWin.get())->m_Add(((t_VectorSite_VectorUIForm*)(f0.l_login)));
  (f0.t1=this->m_LoginWin.get())->m_Add(((t_VectorSite_VectorUIForm*)(f0.l_signup)));
}

void mx2_VectorEngineSite_Pages_2LoginPage_init_f(){
}
