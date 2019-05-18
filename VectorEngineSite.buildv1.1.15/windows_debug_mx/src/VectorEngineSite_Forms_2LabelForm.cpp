
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_Forms_2LabelForm.h"

#include "std/std.buildv1.1.15/windows_debug_mx/include/std_geom_2vec2.h"
#include "std/std.buildv1.1.15/windows_debug_mx/include/std_graphics_2color.h"

void t_VectorSite_LabelForm::dbEmit(){
  t_VectorSite_VectorUIForm::dbEmit();
  puts( "[VectorSite.LabelForm]");
}

t_VectorSite_LabelForm::t_VectorSite_LabelForm(bbString l_text,bbInt l_x,bbInt l_y){
  bbDBFrame db_f{"new:Void(text:monkey.types.String,x:monkey.types.Int,y:monkey.types.Int)","D:/Git/VectorCMS/Forms/LabelForm.monkey2"};
  t_VectorSite_LabelForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("text",&l_text);
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBStmt(28674);
  this->m_Pos=t_std_geom_Vec2_1f{bbFloat(l_x),bbFloat(l_y)};
  bbDBStmt(36866);
  this->m_Text=l_text;
}
t_VectorSite_LabelForm::~t_VectorSite_LabelForm(){
}

void t_VectorSite_LabelForm::m_OnDraw(){
  bbDBFrame db_f{"OnDraw:Void()","D:/Git/VectorCMS/Forms/LabelForm.monkey2"};
  t_VectorSite_LabelForm*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(61442);
  this->m_DrawText(this->m_Text,this->m_DrawX(),this->m_DrawY(),this->m_TextCol);
}
bbString bbDBType(t_VectorSite_LabelForm**){
  return "VectorSite.LabelForm";
}
bbString bbDBValue(t_VectorSite_LabelForm**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorEngineSite_Forms_2LabelForm_init_f(){
}
