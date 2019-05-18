
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_Forms_2PanelForm.h"

#include "mojo/mojo.buildv1.1.15/emscripten_debug/include/mojo_graphics_2image.h"
#include "std/std.buildv1.1.15/emscripten_debug/include/std_geom_2vec2.h"

BB_CLASS(t_mojo_graphics_Shader)
BB_ENUM(t_mojo_graphics_TextureFlags)

void t_VectorSite_PanelForm::dbEmit(){
  t_VectorSite_VectorUIForm::dbEmit();
  puts( "[VectorSite.PanelForm]");
  bbDBEmit("PanelCol",&m_PanelCol);
}

t_VectorSite_PanelForm::t_VectorSite_PanelForm(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h){
  bbDBFrame db_f{"new:Void(x:monkey.types.Int,y:monkey.types.Int,w:monkey.types.Int,h:monkey.types.Int)","D:/Git/VectorCMS/Forms/PanelForm.monkey2"};
  t_VectorSite_PanelForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBLocal("w",&l_w);
  bbDBLocal("h",&l_h);
  bbDBStmt(45058);
  this->m_Pos=t_std_geom_Vec2_1f{bbFloat(l_x),bbFloat(l_y)};
  bbDBStmt(49154);
  this->m_Size=t_std_geom_Vec2_1f{bbFloat(l_w),bbFloat(l_h)};
  bbDBStmt(57346);
  this->m_PanelCol=t_std_graphics_Color{1.0f,1.0f,1.0f,1.0f};
  bbDBStmt(65538);
  this->m_BackImg=g_mojo_graphics_Image_Load(bbString(L"asset::panel1.png",17),((t_mojo_graphics_Shader*)0),t_mojo_graphics_TextureFlags(12));
}
t_VectorSite_PanelForm::~t_VectorSite_PanelForm(){
}

void t_VectorSite_PanelForm::m_OnDraw(){
  bbDBFrame db_f{"OnDraw:Void()","D:/Git/VectorCMS/Forms/PanelForm.monkey2"};
  t_VectorSite_PanelForm*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(90120);
  bbInt l_dx{};
  bbDBLocal("dx",&l_dx);
  bbInt l_dy{};
  bbDBLocal("dy",&l_dy);
  bbDBStmt(98306);
  l_dx=this->m_DrawX();
  bbDBStmt(102402);
  l_dy=this->m_DrawY();
  bbDBStmt(110594);
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
