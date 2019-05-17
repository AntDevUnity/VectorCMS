
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorUI.h"

#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorUIForm.h"
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_std_collections_2list.h"

void t_VectorSite_VectorUI::gcMark(){
  bbGCMark(m_Root);
}

void t_VectorSite_VectorUI::dbEmit(){
  puts( "[VectorSite.VectorUI]");
  bbDBEmit("Root",&m_Root);
}

t_VectorSite_VectorUI::t_VectorSite_VectorUI(){
  bbDBFrame db_f{"new:Void()","D:/Git/VectorCMS/VectorUI.monkey2"};
  t_VectorSite_VectorUI*self=this;
  bbDBLocal("Self",&self);
}
t_VectorSite_VectorUI::~t_VectorSite_VectorUI(){
}

void t_VectorSite_VectorUI::m_RenderList(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"RenderList:Void(list:std.collections.List<VectorSite.VectorUIForm>)","D:/Git/VectorCMS/VectorUI.monkey2"};
  t_VectorSite_VectorUI*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("list",&l_list);
  bbDBStmt(98306);
  {
    struct f1_t : public bbGCFrame{
      t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator l_0{};
      void gcMark(){
        bbGCMark(l_0);
      }
    }f1{};
    bbDBLoop db_loop;
    f1.l_0=l_list->m_All();
    bbDBLocal("0",&f1.l_0);
    for(;!f1.l_0.m_AtEnd();f1.l_0.m_Bump()){
      struct f2_t : public bbGCFrame{
        t_VectorSite_VectorUIForm* l_form{};
        void gcMark(){
          bbGCMark(l_form);
        }
      }f2{};
      bbDBBlock db_blk;
      f2.l_form=f1.l_0.m_Current();
      bbDBLocal("form",&f2.l_form);
      bbDBStmt(106499);
      f2.l_form->m_OnDraw();
    }
  }
}

void t_VectorSite_VectorUI::m_Render(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_render_0list{};
    t_VectorSite_VectorUIForm* t0{};
    void gcMark(){
      bbGCMark(l_render_0list);
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Render:Void()","D:/Git/VectorCMS/VectorUI.monkey2"};
  t_VectorSite_VectorUI*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(57352);
  f0.l_render_0list=bbGCNew<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2>();
  bbDBLocal("render_list",&f0.l_render_0list);
  bbDBStmt(65538);
  this->m_AddToListForward(f0.t0=this->m_Root.get(),f0.l_render_0list);
  bbDBStmt(73730);
  this->m_RenderList(f0.l_render_0list);
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* t_VectorSite_VectorUI::m_InvertList(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"InvertList:std.collections.List<VectorSite.VectorUIForm>(list:std.collections.List<VectorSite.VectorUIForm>)","D:/Git/VectorCMS/VectorUI.monkey2"};
  t_VectorSite_VectorUI*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("list",&l_list);
  bbDBStmt(192514);
  return l_list;
}

void t_VectorSite_VectorUI::m_AddToListForward(t_VectorSite_VectorUIForm* l_ui,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"AddToListForward:Void(ui:VectorSite.VectorUIForm,list:std.collections.List<VectorSite.VectorUIForm>)","D:/Git/VectorCMS/VectorUI.monkey2"};
  t_VectorSite_VectorUI*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("ui",&l_ui);
  bbDBLocal("list",&l_list);
  bbDBStmt(143362);
  l_list->m_Add(l_ui);
  bbDBStmt(151554);
  {
    struct f1_t : public bbGCFrame{
      t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator l_0{};
      t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* t0{};
      void gcMark(){
        bbGCMark(l_0);
        bbGCMark(t0);
      }
    }f1{};
    bbDBLoop db_loop;
    f1.l_0=(f1.t0=l_ui->m_Sub.get())->m_All();
    bbDBLocal("0",&f1.l_0);
    for(;!f1.l_0.m_AtEnd();f1.l_0.m_Bump()){
      struct f2_t : public bbGCFrame{
        t_VectorSite_VectorUIForm* l_form{};
        void gcMark(){
          bbGCMark(l_form);
        }
      }f2{};
      bbDBBlock db_blk;
      f2.l_form=f1.l_0.m_Current();
      bbDBLocal("form",&f2.l_form);
      bbDBStmt(159748);
      this->m_AddToListForward(f2.l_form,l_list);
    }
  }
}
bbString bbDBType(t_VectorSite_VectorUI**){
  return "VectorSite.VectorUI";
}
bbString bbDBValue(t_VectorSite_VectorUI**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorEngineSite_VectorUI_init_f(){
}
