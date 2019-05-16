
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorUIForm.h"

#include "std/std.buildv1.1.15/emscripten_debug/include/std_geom_2vec2.h"
#include "std/std.buildv1.1.15/emscripten_debug/include/std_graphics_2color.h"
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_std_collections_2list.h"

extern void g_VectorSite_VectorSite_Rect(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,t_std_graphics_Color l_col);
bbString bbDBType(t_VectorSite_Button*p){
  	return "VectorSite.Button";
}
bbString bbDBValue(t_VectorSite_Button*p){
  	return bbString( *(int*)p );
}

void t_VectorSite_VectorUIForm::init(){
  m_Sub=bbGCNew<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2>();
}

void t_VectorSite_VectorUIForm::gcMark(){
  t_VectorSite_VectorObject::gcMark();
  bbGCMark(m_Root);
  bbGCMark(m_Sub);
}

void t_VectorSite_VectorUIForm::dbEmit(){
  t_VectorSite_VectorObject::dbEmit();
  puts( "[VectorSite.VectorUIForm]");
  bbDBEmit("Root",&m_Root);
  bbDBEmit("Sub",&m_Sub);
}
t_VectorSite_VectorUIForm::~t_VectorSite_VectorUIForm(){
}

void t_VectorSite_VectorUIForm::m_OnUpdate(){
  bbDBFrame db_f{"OnUpdate:Void()","D:/VectorSite/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
}

void t_VectorSite_VectorUIForm::m_OnMouseMove(bbInt l_x,bbInt l_y,bbInt l_dx,bbInt l_dy){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"OnMouseMove:Void(x:monkey.types.Int,y:monkey.types.Int,dx:monkey.types.Int,dy:monkey.types.Int)","D:/VectorSite/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBLocal("dx",&l_dx);
  bbDBLocal("dy",&l_dy);
}

void t_VectorSite_VectorUIForm::m_OnMouseDown(t_VectorSite_Button l_b){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"OnMouseDown:Void(b:VectorSite.Button)","D:/VectorSite/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("b",&l_b);
}

void t_VectorSite_VectorUIForm::m_OnDraw(){
  bbDBFrame db_f{"OnDraw:Void()","D:/VectorSite/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
}

bbInt t_VectorSite_VectorUIForm::m_DrawY(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"DrawY:monkey.types.Int()","D:/VectorSite/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(143368);
  bbInt l_ry=bbInt(0);
  bbDBLocal("ry",&l_ry);
  bbDBStmt(151554);
  if((this->m_Root.get()==((t_VectorSite_VectorUIForm*)0))){
    bbDBBlock db_blk;
  }else{
    bbDBStmt(159746);
    struct f1_t : public bbGCFrame{
      t_VectorSite_VectorUIForm* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(167939);
    l_ry=(f1.t0=this->m_Root.get())->m_DrawX();
  }
  bbDBStmt(184322);
  return (l_ry+bbInt(this->m_Pos.m_y));
}

bbInt t_VectorSite_VectorUIForm::m_DrawX(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"DrawX:monkey.types.Int()","D:/VectorSite/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(77832);
  bbInt l_rx=bbInt(0);
  bbDBLocal("rx",&l_rx);
  bbDBStmt(86018);
  if((this->m_Root.get()==((t_VectorSite_VectorUIForm*)0))){
    bbDBBlock db_blk;
  }else{
    bbDBStmt(94210);
    struct f1_t : public bbGCFrame{
      t_VectorSite_VectorUIForm* t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(102403);
    l_rx=(f1.t0=this->m_Root.get())->m_DrawX();
  }
  bbDBStmt(118786);
  return (l_rx+bbInt(this->m_Pos.m_x));
}

void t_VectorSite_VectorUIForm::m_DrawRect(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,t_std_graphics_Color l_col){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"DrawRect:Void(x:monkey.types.Int,y:monkey.types.Int,w:monkey.types.Int,h:monkey.types.Int,col:std.graphics.Color)","D:/VectorSite/VectorUIForm.monkey2"};
  t_VectorSite_VectorUIForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBLocal("w",&l_w);
  bbDBLocal("h",&l_h);
  bbDBLocal("col",&l_col);
  bbDBStmt(282626);
  g_VectorSite_VectorSite_Rect(l_x,l_y,l_w,l_h,l_col);
}
bbString bbDBType(t_VectorSite_VectorUIForm**){
  return "VectorSite.VectorUIForm";
}
bbString bbDBValue(t_VectorSite_VectorUIForm**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorEngineSite_VectorUIForm_init_f(){
}
