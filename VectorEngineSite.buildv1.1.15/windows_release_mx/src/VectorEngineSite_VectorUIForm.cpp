
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorUIForm.h"

#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_std_collections_2list.h"
#include "mojo/mojo.buildv1.1.15/windows_release_mx/include/mojo_graphics_2image.h"
#include "std/std.buildv1.1.15/windows_release_mx/include/std_geom_2vec2.h"

extern void g_VectorSite_VectorSite_DrawText(bbString l_text,bbInt l_x,bbInt l_y,t_std_graphics_Color l_col);
extern void g_VectorSite_VectorSite_Rect(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,t_std_graphics_Color l_col);
extern void g_VectorSite_VectorSite_RectImg(t_mojo_graphics_Image* l_img,bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,t_std_graphics_Color l_col);
extern bbInt g_VectorSite_VectorSite_TextH(bbString l_text);
extern bbInt g_VectorSite_VectorSite_TextW(bbString l_text);
bbString bbDBType(t_VectorSite_Button*p){
  	return "VectorSite.Button";
}
bbString bbDBValue(t_VectorSite_Button*p){
  	return bbString( *(int*)p );
}

void t_VectorSite_VectorUIForm::init(){
  m_Sub=bbGCNew<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2>();
  m_TextCol=t_std_graphics_Color{1.0f,1.0f,1.0f,1.0f};
}

void t_VectorSite_VectorUIForm::gcMark(){
  t_VectorSite_VectorObject::gcMark();
  bbGCMark(m_Root);
  bbGCMark(m_Sub);
  bbGCMark(m_BackImg);
  bbGCMark(m_OnClick);
  bbGCMark(m_OnDrag);
}
t_VectorSite_VectorUIForm::~t_VectorSite_VectorUIForm(){
}

bbInt t_VectorSite_VectorUIForm::m_TextW(bbString l_text){
  return g_VectorSite_VectorSite_TextW(l_text);
}

bbInt t_VectorSite_VectorUIForm::m_TextH(bbString l_text){
  return g_VectorSite_VectorSite_TextH(this->m_Text);
}

void t_VectorSite_VectorUIForm::m_OnUpdate(){
}

void t_VectorSite_VectorUIForm::m_OnMouseUp(t_VectorSite_Button l_b){
}

void t_VectorSite_VectorUIForm::m_OnMouseMove(bbInt l_x,bbInt l_y,bbInt l_dx,bbInt l_dy){
}

void t_VectorSite_VectorUIForm::m_OnMouseLeave(){
}

void t_VectorSite_VectorUIForm::m_OnMouseEnter(){
}

void t_VectorSite_VectorUIForm::m_OnMouseDown(t_VectorSite_Button l_b){
}

void t_VectorSite_VectorUIForm::m_OnDraw(){
}

bbBool t_VectorSite_VectorUIForm::m_InBounds(bbInt l_mx,bbInt l_my){
  bbInt l_dx{};
  bbInt l_dy{};
  l_dx=this->m_DrawX();
  l_dy=this->m_DrawY();
  if(((((l_mx>=l_dx)&&(l_my>=l_dy))&&(bbFloat(l_mx)<=(bbFloat(l_dx)+this->m_Size.m_x)))&&(bbFloat(l_my)<=(bbFloat(l_dy)+this->m_Size.m_y)))){
    return true;
  }
  return false;
}

bbInt t_VectorSite_VectorUIForm::m_DrawY(){
  bbInt l_ry=bbInt(0);
  if((this->m_Root.get()==((t_VectorSite_VectorUIForm*)0))){
  }else{
    struct f1_t : public bbGCFrame{
      t_VectorSite_VectorUIForm* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    l_ry=(f1.t0=this->m_Root.get())->m_DrawY();
  }
  return (l_ry+bbInt(this->m_Pos.m_y));
}

bbInt t_VectorSite_VectorUIForm::m_DrawX(){
  bbInt l_rx=bbInt(0);
  if((this->m_Root.get()==((t_VectorSite_VectorUIForm*)0))){
  }else{
    struct f1_t : public bbGCFrame{
      t_VectorSite_VectorUIForm* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    l_rx=(f1.t0=this->m_Root.get())->m_DrawX();
  }
  return (l_rx+bbInt(this->m_Pos.m_x));
}

void t_VectorSite_VectorUIForm::m_DrawText(bbString l_text,bbInt l_x,bbInt l_y,t_std_graphics_Color l_col){
  g_VectorSite_VectorSite_DrawText(l_text,l_x,l_y,l_col);
}

void t_VectorSite_VectorUIForm::m_DrawRect(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,t_std_graphics_Color l_col){
  g_VectorSite_VectorSite_Rect(l_x,l_y,l_w,l_h,l_col);
}

void t_VectorSite_VectorUIForm::m_DrawImage(t_mojo_graphics_Image* l_img,bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,t_std_graphics_Color l_col){
  g_VectorSite_VectorSite_RectImg(l_img,l_x,l_y,l_w,l_h,l_col);
}

void t_VectorSite_VectorUIForm::m_Deactivate(){
}

t_VectorSite_VectorUIForm* t_VectorSite_VectorUIForm::m_Add(t_VectorSite_VectorUIForm* l_add){
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (f0.t0=this->m_Sub.get())->m_Add(l_add);
  l_add->m_Root=this;
  return l_add;
}

void t_VectorSite_VectorUIForm::m_Activate(){
}

void mx2_VectorEngineSite_VectorUIForm_init_f(){
}
