
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorUIForm.h"

#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_std_collections_2list.h"
#include "mojo/mojo.buildv1.1.15/emscripten_debug/include/mojo_graphics_2image.h"
#include "std/std.buildv1.1.15/emscripten_debug/include/std_geom_2vec2.h"

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

void t_VectorSite_VectorUIForm::dbEmit(){
  t_VectorSite_VectorObject::dbEmit();
  puts( "[VectorSite.VectorUIForm]");
  bbDBEmit("Root",&m_Root);
  bbDBEmit("Sub",&m_Sub);
  bbDBEmit("BackImg",&m_BackImg);
  bbDBEmit("Text",&m_Text);
  bbDBEmit("TextCol",&m_TextCol);
  bbDBEmit("OnClick",&m_OnClick);
  bbDBEmit("OnDrag",&m_OnDrag);
}
t_VectorSite_VectorUIForm::~t_VectorSite_VectorUIForm(){
}

bbInt t_VectorSite_VectorUIForm::m_TextW(bbString l_text){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"TextW:monkey.types.Int(text:monkey.types.String)","D:/Git/VectorCMS/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("text",&l_text);
  bbDBStmt(471042);
  return g_VectorSite_VectorSite_TextW(l_text);
}

bbInt t_VectorSite_VectorUIForm::m_TextH(bbString l_text){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"TextH:monkey.types.Int(text:monkey.types.String)","D:/Git/VectorCMS/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("text",&l_text);
  bbDBStmt(495618);
  return g_VectorSite_VectorSite_TextH(this->m_Text);
}

void t_VectorSite_VectorUIForm::m_OnUpdate(){
  bbDBFrame db_f{"OnUpdate:Void()","D:/Git/VectorCMS/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
}

void t_VectorSite_VectorUIForm::m_OnMouseUp(t_VectorSite_Button l_b){
  bbDBFrame db_f{"OnMouseUp:Void(b:VectorSite.Button)","D:/Git/VectorCMS/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("b",&l_b);
}

void t_VectorSite_VectorUIForm::m_OnMouseMove(bbInt l_x,bbInt l_y,bbInt l_dx,bbInt l_dy){
  bbDBFrame db_f{"OnMouseMove:Void(x:monkey.types.Int,y:monkey.types.Int,dx:monkey.types.Int,dy:monkey.types.Int)","D:/Git/VectorCMS/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBLocal("dx",&l_dx);
  bbDBLocal("dy",&l_dy);
}

void t_VectorSite_VectorUIForm::m_OnMouseLeave(){
  bbDBFrame db_f{"OnMouseLeave:Void()","D:/Git/VectorCMS/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
}

void t_VectorSite_VectorUIForm::m_OnMouseEnter(){
  bbDBFrame db_f{"OnMouseEnter:Void()","D:/Git/VectorCMS/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
}

void t_VectorSite_VectorUIForm::m_OnMouseDown(t_VectorSite_Button l_b){
  bbDBFrame db_f{"OnMouseDown:Void(b:VectorSite.Button)","D:/Git/VectorCMS/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("b",&l_b);
}

void t_VectorSite_VectorUIForm::m_OnDraw(){
  bbDBFrame db_f{"OnDraw:Void()","D:/Git/VectorCMS/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
}

bbBool t_VectorSite_VectorUIForm::m_InBounds(bbInt l_mx,bbInt l_my){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"InBounds:monkey.types.Bool(mx:monkey.types.Int,my:monkey.types.Int)","D:/Git/VectorCMS/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("mx",&l_mx);
  bbDBLocal("my",&l_my);
  bbDBStmt(262152);
  bbInt l_dx{};
  bbDBLocal("dx",&l_dx);
  bbInt l_dy{};
  bbDBLocal("dy",&l_dy);
  bbDBStmt(270338);
  l_dx=this->m_DrawX();
  bbDBStmt(274434);
  l_dy=this->m_DrawY();
  bbDBStmt(282626);
  if(((((l_mx>=l_dx)&&(l_my>=l_dy))&&(bbFloat(l_mx)<=(bbFloat(l_dx)+this->m_Size.m_x)))&&(bbFloat(l_my)<=(bbFloat(l_dy)+this->m_Size.m_y)))){
    bbDBBlock db_blk;
    bbDBStmt(290819);
    return true;
  }
  bbDBStmt(307202);
  return false;
}

bbInt t_VectorSite_VectorUIForm::m_DrawY(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"DrawY:monkey.types.Int()","D:/Git/VectorCMS/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(196616);
  bbInt l_ry=bbInt(0);
  bbDBLocal("ry",&l_ry);
  bbDBStmt(204802);
  if((this->m_Root.get()==((t_VectorSite_VectorUIForm*)0))){
    bbDBBlock db_blk;
  }else{
    bbDBStmt(212994);
    struct f1_t : public bbGCFrame{
      t_VectorSite_VectorUIForm* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(221187);
    l_ry=(f1.t0=this->m_Root.get())->m_DrawY();
  }
  bbDBStmt(237570);
  return (l_ry+bbInt(this->m_Pos.m_y));
}

bbInt t_VectorSite_VectorUIForm::m_DrawX(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"DrawX:monkey.types.Int()","D:/Git/VectorCMS/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(131080);
  bbInt l_rx=bbInt(0);
  bbDBLocal("rx",&l_rx);
  bbDBStmt(139266);
  if((this->m_Root.get()==((t_VectorSite_VectorUIForm*)0))){
    bbDBBlock db_blk;
  }else{
    bbDBStmt(147458);
    struct f1_t : public bbGCFrame{
      t_VectorSite_VectorUIForm* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(155651);
    l_rx=(f1.t0=this->m_Root.get())->m_DrawX();
  }
  bbDBStmt(172034);
  return (l_rx+bbInt(this->m_Pos.m_x));
}

void t_VectorSite_VectorUIForm::m_DrawText(bbString l_text,bbInt l_x,bbInt l_y,t_std_graphics_Color l_col){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"DrawText:Void(text:monkey.types.String,x:monkey.types.Int,y:monkey.types.Int,col:std.graphics.Color)","D:/Git/VectorCMS/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("text",&l_text);
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBLocal("col",&l_col);
  bbDBStmt(446466);
  g_VectorSite_VectorSite_DrawText(l_text,l_x,l_y,l_col);
}

void t_VectorSite_VectorUIForm::m_DrawRect(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,t_std_graphics_Color l_col){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"DrawRect:Void(x:monkey.types.Int,y:monkey.types.Int,w:monkey.types.Int,h:monkey.types.Int,col:std.graphics.Color)","D:/Git/VectorCMS/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBLocal("w",&l_w);
  bbDBLocal("h",&l_h);
  bbDBLocal("col",&l_col);
  bbDBStmt(544770);
  g_VectorSite_VectorSite_Rect(l_x,l_y,l_w,l_h,l_col);
}

void t_VectorSite_VectorUIForm::m_DrawImage(t_mojo_graphics_Image* l_img,bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,t_std_graphics_Color l_col){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"DrawImage:Void(img:mojo.graphics.Image,x:monkey.types.Int,y:monkey.types.Int,w:monkey.types.Int,h:monkey.types.Int,col:std.graphics.Color)","D:/Git/VectorCMS/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("img",&l_img);
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBLocal("w",&l_w);
  bbDBLocal("h",&l_h);
  bbDBLocal("col",&l_col);
  bbDBStmt(520194);
  g_VectorSite_VectorSite_RectImg(l_img,l_x,l_y,l_w,l_h,l_col);
}

t_VectorSite_VectorUIForm* t_VectorSite_VectorUIForm::m_Add(t_VectorSite_VectorUIForm* l_add){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Add:VectorSite.VectorUIForm(add:VectorSite.VectorUIForm)","D:/Git/VectorCMS/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("add",&l_add);
  bbDBStmt(98306);
  (f0.t0=this->m_Sub.get())->m_Add(l_add);
  bbDBStmt(102402);
  l_add->m_Root=this;
  bbDBStmt(106498);
  return l_add;
}
bbString bbDBType(t_VectorSite_VectorUIForm**){
  return "VectorSite.VectorUIForm";
}
bbString bbDBValue(t_VectorSite_VectorUIForm**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorEngineSite_VectorUIForm_init_f(){
}
