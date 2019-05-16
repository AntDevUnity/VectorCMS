
#include "VectorSite.buildv1.1.15/emscripten_debug/include/VectorSite_VectorSite.h"

#include "mojo/mojo.buildv1.1.15/emscripten_debug/include/mojo_app_2app.h"
#include "VectorSite.buildv1.1.15/emscripten_debug/include/VectorSite_VectorUIForm.h"

void bbMain(){
  static bool done;
  if(done) return;
  done=true;
  void mx2_monkey_main();mx2_monkey_main();
  void mx2_mojo_main();mx2_mojo_main();
  void mx2_std_main();mx2_std_main();
  void mx2_VectorSite_VectorObject_init_f();mx2_VectorSite_VectorObject_init_f();
  void mx2_VectorSite_VectorUIForm_init_f();mx2_VectorSite_VectorUIForm_init_f();
  void mx2_VectorSite_VectorSite_init_f();mx2_VectorSite_VectorSite_init_f();
  struct f0_t : public bbGCFrame{
    t_mojo_app_AppInstance* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Main:Void()","D:/VectorSite/VectorSite.monkey2"};
  bbDBStmt(180225);
  bbGCNew<t_mojo_app_AppInstance>();
  bbDBStmt(188417);
  bbGCNew<t_VectorSite_VectorSite>(bbString(L"VectorSite",10),1024,768,t_mojo_app_WindowFlags(8));
  bbDBStmt(196609);
  (f0.t0=g_mojo_app_App.get())->m_Run();
}

void t_VectorSite_VectorSite::gcMark(){
  t_mojo_app_Window::gcMark();
  bbGCMark(m_Settings);
}

void t_VectorSite_VectorSite::dbEmit(){
  t_mojo_app_Window::dbEmit();
  puts( "[VectorSite.VectorSite]");
  bbDBEmit("Settings",&m_Settings);
}

t_VectorSite_VectorSite::t_VectorSite_VectorSite(bbString l_title,bbInt l_width,bbInt l_height,t_mojo_app_WindowFlags l_flags):t_mojo_app_Window(l_title,l_width,l_height,l_flags){
  bbDBFrame db_f{"new:Void(title:monkey.types.String,width:monkey.types.Int,height:monkey.types.Int,flags:mojo.app.WindowFlags)","D:/VectorSite/VectorSite.monkey2"};
  t_VectorSite_VectorSite*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("title",&l_title);
  bbDBLocal("width",&l_width);
  bbDBLocal("height",&l_height);
  bbDBLocal("flags",&l_flags);
  bbDBStmt(102402);
  this->m_InitSite();
}
t_VectorSite_VectorSite::~t_VectorSite_VectorSite(){
}

void t_VectorSite_VectorSite::m_OnRender(t_mojo_graphics_Canvas* l_canvas){
  bbDBFrame db_f{"OnRender:Void(canvas:mojo.graphics.Canvas)","D:/VectorSite/VectorSite.monkey2"};
  t_VectorSite_VectorSite*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("canvas",&l_canvas);
}

void t_VectorSite_VectorSite::m_InitSite(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"InitSite:Void()","D:/VectorSite/VectorSite.monkey2"};
  t_VectorSite_VectorSite*self=this;
  bbDBLocal("Self",&self);
}
bbString bbDBType(t_VectorSite_VectorSite**){
  return "VectorSite.VectorSite";
}
bbString bbDBValue(t_VectorSite_VectorSite**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorSite_VectorSite_init_f(){
}
