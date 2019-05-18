
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorEngineSite.h"

#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Pages_2LoginPage.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorPage.h"
#include "mojo/mojo.buildv1.1.15/windows_release_mx/include/mojo_app_2app.h"

BB_ENUM(t_mojo_app_WindowFlags)

void bbMain(){
  static bool done;
  if(done) return;
  done=true;
  void mx2_monkey_main();mx2_monkey_main();
  void mx2_mojo_main();mx2_mojo_main();
  void mx2_std_main();mx2_std_main();
  void mx2_VectorEngineSite_std_collections_2deque_init_f();mx2_VectorEngineSite_std_collections_2deque_init_f();
  void mx2_VectorEngineSite_std_collections_2stack_init_f();mx2_VectorEngineSite_std_collections_2stack_init_f();
  void mx2_VectorEngineSite_std_collections_2list_init_f();mx2_VectorEngineSite_std_collections_2list_init_f();
  void mx2_VectorEngineSite_std_collections_2container_init_f();mx2_VectorEngineSite_std_collections_2container_init_f();
  void mx2_VectorEngineSite_VectorObject_init_f();mx2_VectorEngineSite_VectorObject_init_f();
  void mx2_VectorEngineSite_VectorUIForm_init_f();mx2_VectorEngineSite_VectorUIForm_init_f();
  void mx2_VectorEngineSite_VectorUI_init_f();mx2_VectorEngineSite_VectorUI_init_f();
  void mx2_VectorEngineSite_Forms_2PanelForm_init_f();mx2_VectorEngineSite_Forms_2PanelForm_init_f();
  void mx2_VectorEngineSite_Forms_2LabelForm_init_f();mx2_VectorEngineSite_Forms_2LabelForm_init_f();
  void mx2_VectorEngineSite_Forms_2ButtonForm_init_f();mx2_VectorEngineSite_Forms_2ButtonForm_init_f();
  void mx2_VectorEngineSite_Forms_2WindowForm_init_f();mx2_VectorEngineSite_Forms_2WindowForm_init_f();
  void mx2_VectorEngineSite_Forms_2TextBoxForm_init_f();mx2_VectorEngineSite_Forms_2TextBoxForm_init_f();
  void mx2_VectorEngineSite_VectorPage_init_f();mx2_VectorEngineSite_VectorPage_init_f();
  void mx2_VectorEngineSite_Pages_2LoginPage_init_f();mx2_VectorEngineSite_Pages_2LoginPage_init_f();
  void mx2_VectorEngineSite_VectorSite_init_f();mx2_VectorEngineSite_VectorSite_init_f();
  void mx2_VectorEngineSite_VectorEngineSite_init_f();mx2_VectorEngineSite_VectorEngineSite_init_f();
  struct f0_t : public bbGCFrame{
    t_mojo_app_AppInstance* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbGCNew<t_mojo_app_AppInstance>();
  bbGCNew<t_VectorSite_VectorEngineSite>();
  (f0.t0=g_mojo_app_App.get())->m_Run();
}

void t_VectorSite_VectorEngineSite::gcMark(){
  t_VectorSite_VectorSite::gcMark();
  bbGCMark(m_CurPage);
}

t_VectorSite_VectorEngineSite::t_VectorSite_VectorEngineSite():t_VectorSite_VectorSite(bbString(L"VectorEngine-Official Website",29),1024,768,t_mojo_app_WindowFlags(8)){
  this->m_CurPage=((t_VectorSite_VectorPage*)(bbGCNew<t_VectorSite_LoginPage>()));
}
t_VectorSite_VectorEngineSite::~t_VectorSite_VectorEngineSite(){
}

void t_VectorSite_VectorEngineSite::m_DoRender(){
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorPage* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (f0.t0=this->m_CurPage.get())->m_OnUpdate();
  this->m_BeginRender();
  (f0.t0=this->m_CurPage.get())->m_OnRender();
  this->m_EndRender();
}

void mx2_VectorEngineSite_VectorEngineSite_init_f(){
}
