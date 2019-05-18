
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_Forms_2WindowForm.h"

#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_Forms_2ButtonForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_Forms_2PanelForm.h"
#include "std/std.buildv1.1.15/windows_debug_mx/include/std_geom_2vec2.h"
#include "std/std.buildv1.1.15/windows_debug_mx/include/std_graphics_2color.h"

void t_VectorSite_WindowForm::gcMark(){
  t_VectorSite_VectorUIForm::gcMark();
  bbGCMark(m_Body);
  bbGCMark(m_Title);
  bbGCMark(m_Resize);
  bbGCMark(m_Close);
}

void t_VectorSite_WindowForm::dbEmit(){
  t_VectorSite_VectorUIForm::dbEmit();
  puts( "[VectorSite.WindowForm]");
  bbDBEmit("Body",&m_Body);
  bbDBEmit("Title",&m_Title);
  bbDBEmit("Resize",&m_Resize);
  bbDBEmit("Close",&m_Close);
}

t_VectorSite_WindowForm::t_VectorSite_WindowForm(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,bbString l_title){
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorUIForm* t0{};
    t_VectorSite_PanelForm* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"new:Void(x:monkey.types.Int,y:monkey.types.Int,w:monkey.types.Int,h:monkey.types.Int,title:monkey.types.String)","D:/Git/VectorCMS/Forms/WindowForm.monkey2"};
  t_VectorSite_WindowForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBLocal("w",&l_w);
  bbDBLocal("h",&l_h);
  bbDBLocal("title",&l_title);
  bbDBStmt(53250);
  this->m_Text=l_title;
  bbDBStmt(57346);
  this->m_Pos=t_std_geom_Vec2_1f{bbFloat(l_x),bbFloat(l_y)};
  bbDBStmt(61442);
  this->m_Size=t_std_geom_Vec2_1f{bbFloat(l_w),bbFloat(l_h)};
  bbDBStmt(69634);
  this->m_Body=bbGCNew<t_VectorSite_PanelForm>(bbInt(0),bbInt(0),l_w,l_h);
  bbDBStmt(73730);
  this->m_Title=bbGCNew<t_VectorSite_ButtonForm>(bbInt(0),bbInt(0),(l_w-24),25,l_title);
  bbDBStmt(77826);
  this->m_Resize=bbGCNew<t_VectorSite_ButtonForm>((l_w-24),(l_h-24),24,24,bbString(L"o",1));
  bbDBStmt(81922);
  this->m_Close=bbGCNew<t_VectorSite_ButtonForm>((l_w-24),bbInt(0),24,25,bbString(L"x",1));
  bbDBStmt(90114);
  this->m_Body.get()->m_PanelCol=t_std_graphics_Color{0.69999999999999996f,0.69999999999999996f,0.69999999999999996f,1.0f};
  bbDBStmt(98306);
  this->m_Title.get()->m_OnDrag=bbMethod<t_VectorSite_WindowForm,bbBool,bbInt,bbInt>((t_VectorSite_WindowForm*)(this),&t_VectorSite_WindowForm::m_ON_0TitleDrag);
  bbDBStmt(106498);
  this->m_Add(f0.t0=((t_VectorSite_VectorUIForm*)(this->m_Body.get())));
  bbDBStmt(114690);
  (f0.t1=this->m_Body.get())->m_Add(f0.t0=((t_VectorSite_VectorUIForm*)(this->m_Title.get())));
  bbDBStmt(118786);
  (f0.t1=this->m_Body.get())->m_Add(f0.t0=((t_VectorSite_VectorUIForm*)(this->m_Resize.get())));
  bbDBStmt(122882);
  (f0.t1=this->m_Body.get())->m_Add(f0.t0=((t_VectorSite_VectorUIForm*)(this->m_Close.get())));
}
t_VectorSite_WindowForm::~t_VectorSite_WindowForm(){
}

bbBool t_VectorSite_WindowForm::m_ON_0TitleDrag(bbInt l_x,bbInt l_y){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"ON_TitleDrag:monkey.types.Bool(x:monkey.types.Int,y:monkey.types.Int)","D:/Git/VectorCMS/Forms/WindowForm.monkey2"};
  t_VectorSite_WindowForm*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBStmt(159746);
  this->m_Pos.m_x=(this->m_Pos.m_x+bbFloat(l_x));
  bbDBStmt(163842);
  this->m_Pos.m_y=(this->m_Pos.m_y+bbFloat(l_y));
  bbDBStmt(172034);
  return false;
}
bbString bbDBType(t_VectorSite_WindowForm**){
  return "VectorSite.WindowForm";
}
bbString bbDBValue(t_VectorSite_WindowForm**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorEngineSite_Forms_2WindowForm_init_f(){
}
