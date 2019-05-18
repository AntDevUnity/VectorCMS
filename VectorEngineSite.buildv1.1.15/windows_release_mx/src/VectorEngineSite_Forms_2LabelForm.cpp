
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Forms_2LabelForm.h"

#include "std/std.buildv1.1.15/windows_release_mx/include/std_geom_2vec2.h"
#include "std/std.buildv1.1.15/windows_release_mx/include/std_graphics_2color.h"

t_VectorSite_LabelForm::t_VectorSite_LabelForm(bbString l_text,bbInt l_x,bbInt l_y){
  this->m_Pos=t_std_geom_Vec2_1f{bbFloat(l_x),bbFloat(l_y)};
  this->m_Text=l_text;
}
t_VectorSite_LabelForm::~t_VectorSite_LabelForm(){
}

void t_VectorSite_LabelForm::m_OnDraw(){
  this->m_DrawText(this->m_Text,this->m_DrawX(),this->m_DrawY(),this->m_TextCol);
}

void mx2_VectorEngineSite_Forms_2LabelForm_init_f(){
}
