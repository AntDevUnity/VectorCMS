
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_Forms_2ButtonForm.h"

#include "mojo/mojo.buildv1.1.15/emscripten_debug/include/mojo_graphics_2image.h"
#include "std/std.buildv1.1.15/emscripten_debug/include/std_geom_2vec2.h"

BB_CLASS(t_mojo_graphics_Shader)
BB_ENUM(t_mojo_graphics_TextureFlags)

void t_VectorSite_ButtonForm::init(){
  m_ButCol=t_std_graphics_Color{0.80000000000000004f,0.80000000000000004f,0.80000000000000004f,1.0f};
}

void t_VectorSite_ButtonForm::dbEmit(){
  t_VectorSite_VectorUIForm::dbEmit();
  puts( "[VectorSite.ButtonForm]");
  bbDBEmit("ButCol",&m_ButCol);
  bbDBEmit("Down",&m_Down);
}

t_VectorSite_ButtonForm::t_VectorSite_ButtonForm(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,bbString l_text){
  init();
  bbDBFrame db_f{"new:Void(x:monkey.types.Int,y:monkey.types.Int,w:monkey.types.Int,h:monkey.types.Int,text:monkey.types.String)","D:/Git/VectorCMS/Forms/ButtonForm.monkey2"};
  t_VectorSite_ButtonForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBLocal("w",&l_w);
  bbDBLocal("h",&l_h);
  bbDBLocal("text",&l_text);
  bbDBStmt(40962);
  this->m_Pos=t_std_geom_Vec2_1f{bbFloat(l_x),bbFloat(l_y)};
  bbDBStmt(45058);
  this->m_Size=t_std_geom_Vec2_1f{bbFloat(l_w),bbFloat(l_h)};
  bbDBStmt(49154);
  this->m_Text=l_text;
  this->m_TextCol=t_std_graphics_Color{0.10000000000000001f,0.10000000000000001f,0.10000000000000001f,1.0f};
  bbDBStmt(57346);
  this->m_BackImg=g_mojo_graphics_Image_Load(bbString(L"asset::button1.png",18),((t_mojo_graphics_Shader*)0),t_mojo_graphics_TextureFlags(12));
}
t_VectorSite_ButtonForm::~t_VectorSite_ButtonForm(){
}

void t_VectorSite_ButtonForm::m_OnMouseUp(t_VectorSite_Button l_b){
  bbDBFrame db_f{"OnMouseUp:Void(b:VectorSite.Button)","D:/Git/VectorCMS/Forms/ButtonForm.monkey2"};
  t_VectorSite_ButtonForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("b",&l_b);
  bbDBStmt(192514);
  this->m_ButCol=t_std_graphics_Color{0.80000000000000004f,0.80000000000000004f,0.80000000000000004f,1.0f};
  bbDBStmt(196610);
  this->m_Down=false;
}

void t_VectorSite_ButtonForm::m_OnMouseMove(bbInt l_x,bbInt l_y,bbInt l_dx,bbInt l_dy){
  bbDBFrame db_f{"OnMouseMove:Void(x:monkey.types.Int,y:monkey.types.Int,dx:monkey.types.Int,dy:monkey.types.Int)","D:/Git/VectorCMS/Forms/ButtonForm.monkey2"};
  t_VectorSite_ButtonForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBLocal("dx",&l_dx);
  bbDBLocal("dy",&l_dy);
  bbDBStmt(225282);
  if(!this->m_Down){
    bbDBBlock db_blk;
    return;
  }
}

void t_VectorSite_ButtonForm::m_OnMouseLeave(){
  bbDBFrame db_f{"OnMouseLeave:Void()","D:/Git/VectorCMS/Forms/ButtonForm.monkey2"};
  t_VectorSite_ButtonForm*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(106498);
  this->m_ButCol=t_std_graphics_Color{0.80000000000000004f,0.80000000000000004f,0.80000000000000004f,1.0f};
}

void t_VectorSite_ButtonForm::m_OnMouseEnter(){
  bbDBFrame db_f{"OnMouseEnter:Void()","D:/Git/VectorCMS/Forms/ButtonForm.monkey2"};
  t_VectorSite_ButtonForm*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(81922);
  this->m_ButCol=t_std_graphics_Color{1.0f,1.0f,1.0f,1.0f};
}

void t_VectorSite_ButtonForm::m_OnMouseDown(t_VectorSite_Button l_b){
  bbDBFrame db_f{"OnMouseDown:Void(b:VectorSite.Button)","D:/Git/VectorCMS/Forms/ButtonForm.monkey2"};
  t_VectorSite_ButtonForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("b",&l_b);
  bbDBStmt(131074);
  this->m_ButCol=t_std_graphics_Color{1.0f,0.0f,0.0f,1.0f};
  bbDBStmt(135170);
  this->m_Down=true;
  bbDBStmt(143362);
  if((this->m_OnClick!=bbFunction<bbBool(bbInt)>{})){
    bbDBBlock db_blk;
    bbDBStmt(151555);
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
  bbDBFrame db_f{"OnDraw:Void()","D:/Git/VectorCMS/Forms/ButtonForm.monkey2"};
  t_VectorSite_ButtonForm*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(258050);
  this->m_DrawImage(f0.t0=this->m_BackImg.get(),this->m_DrawX(),this->m_DrawY(),bbInt(this->m_Size.m_x),bbInt(this->m_Size.m_y),this->m_ButCol);
  bbDBStmt(266242);
  this->m_DrawText(this->m_Text,bbInt(((bbFloat(this->m_DrawX())+(this->m_Size.m_x/2.0f))-bbFloat((this->m_TextW(this->m_Text)/2)))),bbInt(((bbFloat(this->m_DrawY())+(this->m_Size.m_y/2.0f))-bbFloat((this->m_TextH(this->m_Text)/2)))),this->m_TextCol);
}
bbString bbDBType(t_VectorSite_ButtonForm**){
  return "VectorSite.ButtonForm";
}
bbString bbDBValue(t_VectorSite_ButtonForm**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorEngineSite_Forms_2ButtonForm_init_f(){
}
