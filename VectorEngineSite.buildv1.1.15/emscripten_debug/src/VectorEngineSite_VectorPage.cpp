
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorPage.h"

#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorUI.h"

void t_VectorSite_VectorPage::gcMark(){
  bbGCMark(m_UI);
}

void t_VectorSite_VectorPage::dbEmit(){
  puts( "[VectorSite.VectorPage]");
  bbDBEmit("UI",&m_UI);
}

t_VectorSite_VectorPage::t_VectorSite_VectorPage(){
  bbDBFrame db_f{"new:Void()","D:/Git/VectorCMS/VectorPage.monkey2"};
  t_VectorSite_VectorPage*self=this;
  bbDBLocal("Self",&self);
}
t_VectorSite_VectorPage::~t_VectorSite_VectorPage(){
}

void t_VectorSite_VectorPage::m_OnUpdate(){
  bbDBFrame db_f{"OnUpdate:Void()","D:/Git/VectorCMS/VectorPage.monkey2"};
  t_VectorSite_VectorPage*self=this;
  bbDBLocal("Self",&self);
}

void t_VectorSite_VectorPage::m_OnRender(){
  bbDBFrame db_f{"OnRender:Void()","D:/Git/VectorCMS/VectorPage.monkey2"};
  t_VectorSite_VectorPage*self=this;
  bbDBLocal("Self",&self);
}

void t_VectorSite_VectorPage::m_OnInit(){
  bbDBFrame db_f{"OnInit:Void()","D:/Git/VectorCMS/VectorPage.monkey2"};
  t_VectorSite_VectorPage*self=this;
  bbDBLocal("Self",&self);
}
bbString bbDBType(t_VectorSite_VectorPage**){
  return "VectorSite.VectorPage";
}
bbString bbDBValue(t_VectorSite_VectorPage**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorEngineSite_VectorPage_init_f(){
}
