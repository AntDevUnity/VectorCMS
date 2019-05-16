
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorEngineSite.h"

#include "mojo/mojo.buildv1.1.15/emscripten_debug/include/mojo_app_2app.h"
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_Forms_2PanelForm.h"
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorUI.h"
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorUIForm.h"

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
  void mx2_VectorEngineSite_VectorSite_init_f();mx2_VectorEngineSite_VectorSite_init_f();
  void mx2_VectorEngineSite_VectorEngineSite_init_f();mx2_VectorEngineSite_VectorEngineSite_init_f();
  struct f0_t : public bbGCFrame{
    t_mojo_app_AppInstance* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Main:Void()","D:/VectorSite/VectorEngineSite.monkey2"};
  bbDBStmt(151553);
  bbGCNew<t_mojo_app_AppInstance>();
  bbDBStmt(159745);
  bbGCNew<t_VectorSite_VectorEngineSite>();
  bbDBStmt(167937);
  (f0.t0=g_mojo_app_App.get())->m_Run();
}

void t_VectorSite_VectorEngineSite::dbEmit(){
  t_VectorSite_VectorSite::dbEmit();
  puts( "[VectorSite.VectorEngineSite]");
}

t_VectorSite_VectorEngineSite::t_VectorSite_VectorEngineSite():t_VectorSite_VectorSite(bbString(L"VectorEngine-Official Website",29),1024,768,t_mojo_app_WindowFlags(8)){
  bbDBFrame db_f{"new:Void()","D:/VectorSite/VectorEngineSite.monkey2"};
  t_VectorSite_VectorEngineSite*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(53250);
  this->m_UI.get()->m_Root=((t_VectorSite_VectorUIForm*)(bbGCNew<t_VectorSite_PanelForm>(10,10,400,400)));
}
t_VectorSite_VectorEngineSite::~t_VectorSite_VectorEngineSite(){
}

void t_VectorSite_VectorEngineSite::m_DoRender(){
  bbDBFrame db_f{"DoRender:Void()","D:/VectorSite/VectorEngineSite.monkey2"};
  t_VectorSite_VectorEngineSite*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(90114);
  this->m_BeginRender();
  bbDBStmt(98306);
  this->m_RenderUI();
  bbDBStmt(106498);
  this->m_EndRender();
  bbDBStmt(114690);
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
