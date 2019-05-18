
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_Forms_2ButtonForm.h"

#include "mojo/mojo.buildv1.1.15/windows_release_mx/include/mojo_graphics_2image.h"
#include "std/std.buildv1.1.15/windows_release_mx/include/std_geom_2vec2.h"

BB_CLASS(t_mojo_graphics_Shader)
BB_ENUM(t_mojo_graphics_TextureFlags)

void t_VectorSite_ButtonForm::init(){
  m_ButCol=t_std_graphics_Color{1.0f,1.0f,1.0f,1.0f};
}

t_VectorSite_ButtonForm::t_VectorSite_ButtonForm(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,bbString l_text){
  init();
  this->m_Pos=t_std_geom_Vec2_1f{bbFloat(l_x),bbFloat(l_y)};
  this->m_Size=t_std_geom_Vec2_1f{bbFloat(l_w),bbFloat(l_h)};
  this->m_Text=l_text;
  this->m_TextCol=t_std_graphics_Color{0.10000000000000001f,0.10000000000000001f,0.10000000000000001f,1.0f};
  this->m_BackImg=g_mojo_graphics_Image_Load(bbString(L"asset::button1.png",18),((t_mojo_graphics_Shader*)0),t_mojo_graphics_TextureFlags(12));
}
t_VectorSite_ButtonForm::~t_VectorSite_ButtonForm(){
}

void t_VectorSite_ButtonForm::m_OnMouseUp(t_VectorSite_Button l_b){
  this->m_ButCol=t_std_graphics_Color{1.0f,1.0f,1.0f,1.0f};
  this->m_Down=false;
}

void t_VectorSite_ButtonForm::m_OnMouseMove(bbInt l_x,bbInt l_y,bbInt l_dx,bbInt l_dy){
  if(!this->m_Down){
    return;
  }
}

void t_VectorSite_ButtonForm::m_OnMouseLeave(){
  this->m_ButCol=t_std_graphics_Color{1.0f,1.0f,1.0f,1.0f};
}

void t_VectorSite_ButtonForm::m_OnMouseEnter(){
  this->m_ButCol=t_std_graphics_Color{0.59999999999999998f,1.0f,1.0f,1.0f};
}

void t_VectorSite_ButtonForm::m_OnMouseDown(t_VectorSite_Button l_b){
  this->m_ButCol=t_std_graphics_Color{1.0f,0.59999999999999998f,1.0f,1.0f};
  this->m_Down=true;
  if((this->m_OnClick!=bbFunction<bbBool(bbInt)>{})){
    this->m_OnClick(bbInt(0));
  }
}

void t_VectorSite_ButtonForm::m_OnDraw(){
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Image* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  this->m_DrawImage(f0.t0=this->m_BackImg.get(),this->m_DrawX(),this->m_DrawY(),bbInt(this->m_Size.m_x),bbInt(this->m_Size.m_y),this->m_ButCol);
  this->m_DrawText(this->m_Text,bbInt(((bbFloat(this->m_DrawX())+(this->m_Size.m_x/2.0f))-bbFloat((this->m_TextW(this->m_Text)/2)))),bbInt(((bbFloat(this->m_DrawY())+(this->m_Size.m_y/2.0f))-bbFloat((this->m_TextH(this->m_Text)/2)))),this->m_TextCol);
}

void mx2_VectorEngineSite_Forms_2ButtonForm_init_f(){
}
