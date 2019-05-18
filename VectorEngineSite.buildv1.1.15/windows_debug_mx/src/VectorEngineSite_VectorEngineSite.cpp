
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_VectorEngineSite.h"

#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_Forms_2ButtonForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_Forms_2LabelForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_Forms_2PanelForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_VectorUI.h"
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_VectorUIForm.h"
#include "mojo/mojo.buildv1.1.15/windows_debug_mx/include/mojo_app_2app.h"

BB_ENUM(t_mojo_app_WindowFlags)

bbBool g_VectorSite_VectorEngineSite_But1(bbInt l_b){
  bbDBFrame db_f{"But1:monkey.types.Bool(b:monkey.types.Int)","D:/Git/VectorCMS/VectorEngineSite.monkey2"};
  bbDBLocal("b",&l_b);
  bbDBStmt(135170);
  bb_print(bbString(L"Button 1!",9));
  bbDBStmt(143362);
  return true;
}

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
  void mx2_VectorEngineSite_VectorSite_init_f();mx2_VectorEngineSite_VectorSite_init_f();
  void mx2_VectorEngineSite_VectorEngineSite_init_f();mx2_VectorEngineSite_VectorEngineSite_init_f();
  struct f0_t : public bbGCFrame{
    t_mojo_app_AppInstance* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Main:Void()","D:/Git/VectorCMS/VectorEngineSite.monkey2"};
  bbDBStmt(241665);
  bbGCNew<t_mojo_app_AppInstance>();
  bbDBStmt(249857);
  bbGCNew<t_VectorSite_VectorEngineSite>();
  bbDBStmt(258049);
  (f0.t0=g_mojo_app_App.get())->m_Run();
}

void t_VectorSite_VectorEngineSite::dbEmit(){
  t_VectorSite_VectorSite::dbEmit();
  puts( "[VectorSite.VectorEngineSite]");
}

t_VectorSite_VectorEngineSite::t_VectorSite_VectorEngineSite():t_VectorSite_VectorSite(bbString(L"VectorEngine-Official Website",29),1024,768,t_mojo_app_WindowFlags(8)){
  struct f0_t : public bbGCFrame{
    t_VectorSite_ButtonForm* l_but1{};
    t_VectorSite_ButtonForm* l_but2{};
    t_VectorSite_ButtonForm* l_but3{};
    t_VectorSite_LabelForm* l_test{};
    t_VectorSite_VectorUIForm* t0{};
    void gcMark(){
      bbGCMark(l_but1);
      bbGCMark(l_but2);
      bbGCMark(l_but3);
      bbGCMark(l_test);
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"new:Void()","D:/Git/VectorCMS/VectorEngineSite.monkey2"};
  t_VectorSite_VectorEngineSite*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(53250);
  this->m_UI.get()->m_Root=((t_VectorSite_VectorUIForm*)(bbGCNew<t_VectorSite_PanelForm>(10,10,700,400)));
  bbDBStmt(61448);
  f0.l_test=bbGCNew<t_VectorSite_LabelForm>(bbString(L"Welcome to our - VectorEngine - Website.",40),80,100);
  bbDBLocal("test",&f0.l_test);
  bbDBStmt(69634);
  (f0.t0=this->m_UI.get()->m_Root.get())->m_Add(((t_VectorSite_VectorUIForm*)(f0.l_test)));
  bbDBStmt(77832);
  f0.l_but1=bbGCNew<t_VectorSite_ButtonForm>(20,30,180,35,bbString(L"VectorEngine",12));
  bbDBLocal("but1",&f0.l_but1);
  bbDBStmt(81928);
  f0.l_but2=bbGCNew<t_VectorSite_ButtonForm>(220,30,180,35,bbString(L"Starlit Empire",14));
  bbDBLocal("but2",&f0.l_but2);
  bbDBStmt(86024);
  f0.l_but3=bbGCNew<t_VectorSite_ButtonForm>(420,30,180,35,bbString(L"Forums",6));
  bbDBLocal("but3",&f0.l_but3);
  bbDBStmt(94210);
  f0.l_but1->m_OnClick=g_VectorSite_VectorEngineSite_But1;
  bbDBStmt(102402);
  f0.l_test->m_Add(((t_VectorSite_VectorUIForm*)(f0.l_but1)));
  bbDBStmt(106498);
  f0.l_test->m_Add(((t_VectorSite_VectorUIForm*)(f0.l_but2)));
  bbDBStmt(110594);
  f0.l_test->m_Add(((t_VectorSite_VectorUIForm*)(f0.l_but3)));
}
t_VectorSite_VectorEngineSite::~t_VectorSite_VectorEngineSite(){
}

void t_VectorSite_VectorEngineSite::m_DoRender(){
  bbDBFrame db_f{"DoRender:Void()","D:/Git/VectorCMS/VectorEngineSite.monkey2"};
  t_VectorSite_VectorEngineSite*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(172034);
  this->m_UpdateUI();
  bbDBStmt(180226);
  this->m_BeginRender();
  bbDBStmt(188418);
  this->m_RenderUI();
  bbDBStmt(196610);
  this->m_EndRender();
  bbDBStmt(204802);
  this->m_DrawString(bbString(L"Hey!",4),5,5);
}
bbString bbDBType(t_VectorSite_VectorEngineSite**){
  return "VectorSite.VectorEngineSite";
}
bbString bbDBValue(t_VectorSite_VectorEngineSite**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorEngineSite_VectorEngineSite_init_f(){
}
