
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Forms_2TextBoxForm.h"

#include "mojo/mojo.buildv1.1.15/windows_release_mx/include/mojo_graphics_2image.h"
#include "std/std.buildv1.1.15/windows_release_mx/include/std_geom_2vec2.h"
#include "std/std.buildv1.1.15/windows_release_mx/include/std_graphics_2color.h"

BB_CLASS(t_mojo_graphics_Shader)
BB_ENUM(t_mojo_graphics_TextureFlags)

t_VectorSite_TextBoxForm::t_VectorSite_TextBoxForm(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,bbString l_def){
  this->m_Text=l_def;
  this->m_Pos=t_std_geom_Vec2_1f{bbFloat(l_x),bbFloat(l_y)};
  this->m_Size=t_std_geom_Vec2_1f{bbFloat(l_w),bbFloat(l_h)};
  this->m_BackImg=g_mojo_graphics_Image_Load(bbString(L"asset::textbox1.png",19),((t_mojo_graphics_Shader*)0),t_mojo_graphics_TextureFlags(12));
}
t_VectorSite_TextBoxForm::~t_VectorSite_TextBoxForm(){
}

void t_VectorSite_TextBoxForm::m_OnDraw(){
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Image* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbInt l_x=this->m_DrawX();
  bbInt l_y=this->m_DrawY();
  this->m_DrawImage(f0.t0=this->m_BackImg.get(),l_x,l_y,bbInt(this->m_Size.m_x),bbInt(this->m_Size.m_y),t_std_graphics_Color{1.0f,1.0f,1.0f,1.0f});
}

void mx2_VectorEngineSite_Forms_2TextBoxForm_init_f(){
}
