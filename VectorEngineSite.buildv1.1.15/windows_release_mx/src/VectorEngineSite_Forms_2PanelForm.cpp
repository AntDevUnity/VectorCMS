
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Forms_2PanelForm.h"

#include "mojo/mojo.buildv1.1.15/windows_release_mx/include/mojo_graphics_2image.h"
#include "std/std.buildv1.1.15/windows_release_mx/include/std_geom_2vec2.h"

BB_CLASS(t_mojo_graphics_Shader)
BB_ENUM(t_mojo_graphics_TextureFlags)

t_VectorSite_PanelForm::t_VectorSite_PanelForm(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h){
  this->m_Pos=t_std_geom_Vec2_1f{bbFloat(l_x),bbFloat(l_y)};
  this->m_Size=t_std_geom_Vec2_1f{bbFloat(l_w),bbFloat(l_h)};
  this->m_PanelCol=t_std_graphics_Color{1.0f,1.0f,1.0f,1.0f};
  this->m_BackImg=g_mojo_graphics_Image_Load(bbString(L"asset::panel1.png",17),((t_mojo_graphics_Shader*)0),t_mojo_graphics_TextureFlags(12));
}
t_VectorSite_PanelForm::~t_VectorSite_PanelForm(){
}

void t_VectorSite_PanelForm::m_OnDraw(){
  bbInt l_dx{};
  bbInt l_dy{};
  l_dx=this->m_DrawX();
  l_dy=this->m_DrawY();
  this->m_DrawRect(l_dx,l_dy,bbInt(this->m_Size.m_x),bbInt(this->m_Size.m_y),this->m_PanelCol);
}

void mx2_VectorEngineSite_Forms_2PanelForm_init_f(){
}
