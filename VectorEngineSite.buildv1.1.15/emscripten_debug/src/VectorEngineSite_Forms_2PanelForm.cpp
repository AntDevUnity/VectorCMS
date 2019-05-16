
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_Forms_2PanelForm.h"

#include "std/std.buildv1.1.15/emscripten_debug/include/std_geom_2vec2.h"

void t_VectorSite_PanelForm::dbEmit(){
  t_VectorSite_VectorUIForm::dbEmit();
  puts( "[VectorSite.PanelForm]");
  bbDBEmit("PanelCol",&m_PanelCol);
}

t_VectorSite_PanelForm::t_VectorSite_PanelForm(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h){
  bbDBFrame db_f{"new:Void(x:monkey.types.Int,y:monkey.types.Int,w:monkey.types.Int,h:monkey.types.Int)","D:/VectorSite/Forms/PanelForm.monkey2"};
  t_VectorSite_PanelForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBLocal("w",&l_w);
  bbDBLocal("h",&l_h);
  bbDBStmt(36866);
  this->m_Pos=t_std_geom_Vec2_1f{bbFloat(l_x),bbFloat(l_y)};
  bbDBStmt(40962);
  this->m_Size=t_std_geom_Vec2_1f{bbFloat(l_w),bbFloat(l_h)};
  bbDBStmt(49154);
  this->m_PanelCol=t_std_graphics_Color{0.69999999999999996f,0.69999999999999996f,0.69999999999999996f,0.69999999999999996f};
}
t_VectorSite_PanelForm::~t_VectorSite_PanelForm(){
}

void t_VectorSite_PanelForm::m_OnDraw(){
  bbDBFrame db_f{"OnDraw:Void()","D:/VectorSite/Forms/PanelForm.monkey2"};
  t_VectorSite_PanelForm*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(73736);
  bbInt l_dx{};
  bbDBLocal("dx",&l_dx);
  bbInt l_dy{};
  bbDBLocal("dy",&l_dy);
  bbDBStmt(81922);
  l_dx=this->m_DrawX();
  bbDBStmt(86018);
  l_dy=this->m_DrawY();
  bbDBStmt(94210);
  this->m_DrawRect(l_dx,l_dy,bbInt(this->m_Size.m_x),bbInt(this->m_Size.m_y),this->m_PanelCol);
}
bbString bbDBType(t_VectorSite_PanelForm**){
  return "VectorSite.PanelForm";
}
bbString bbDBValue(t_VectorSite_PanelForm**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorEngineSite_Forms_2PanelForm_init_f(){
}
