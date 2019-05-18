
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorUI.h"

#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorUIForm.h"
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_std_collections_2list.h"
#include "mojo/mojo.buildv1.1.15/emscripten_debug/include/mojo_input_2mouse.h"
#include "std/std.buildv1.1.15/emscripten_debug/include/std_geom_2vec2.h"

bbGCVar<t_VectorSite_VectorUIForm> g_VectorSite_VectorUI_ActiveForm;
bbGCVar<t_VectorSite_VectorUIForm> g_VectorSite_VectorUI_OverForm;
bbArray<bbGCVar<t_VectorSite_VectorUIForm>> g_VectorSite_VectorUI_PressedForm;

void t_VectorSite_VectorUI::gcMark(){
  bbGCMark(m_Root);
}

void t_VectorSite_VectorUI::dbEmit(){
  puts( "[VectorSite.VectorUI]");
  bbDBEmit("Root",&m_Root);
  bbDBEmit("LastMx",&m_LastMx);
  bbDBEmit("LastMy",&m_LastMy);
}

t_VectorSite_VectorUI::t_VectorSite_VectorUI(){
  bbDBFrame db_f{"new:Void()","D:/Git/VectorCMS/VectorUI.monkey2"};
  t_VectorSite_VectorUI*self=this;
  bbDBLocal("Self",&self);
}
t_VectorSite_VectorUI::~t_VectorSite_VectorUI(){
}

void t_VectorSite_VectorUI::m_Update(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_update_0list{};
    t_VectorSite_VectorUIForm* t0{};
    void gcMark(){
      bbGCMark(l_update_0list);
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Update:Void()","D:/Git/VectorCMS/VectorUI.monkey2"};
  t_VectorSite_VectorUI*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(90120);
  f0.l_update_0list=bbGCNew<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2>();
  bbDBLocal("update_list",&f0.l_update_0list);
  bbDBStmt(98306);
  this->m_AddToListForward(f0.t0=this->m_Root.get(),f0.l_update_0list);
  bbDBStmt(106498);
  f0.l_update_0list=this->m_InvertList(f0.l_update_0list);
  bbDBStmt(114696);
  bbInt l_mx{};
  bbDBLocal("mx",&l_mx);
  bbInt l_my{};
  bbDBLocal("my",&l_my);
  bbDBStmt(122882);
  l_mx=g_mojo_input_Mouse.get()->m_Location().m_x;
  bbDBStmt(126978);
  l_my=g_mojo_input_Mouse.get()->m_Location().m_y;
  bbDBStmt(135176);
  bbInt l_dx{};
  bbDBLocal("dx",&l_dx);
  bbInt l_dy{};
  bbDBLocal("dy",&l_dy);
  bbDBStmt(143362);
  l_dx=(l_mx-this->m_LastMx);
  bbDBStmt(147458);
  l_dy=(l_my-this->m_LastMy);
  bbDBStmt(155650);
  this->m_LastMx=l_mx;
  bbDBStmt(159746);
  this->m_LastMy=l_my;
  bbDBStmt(167938);
  {
    struct f1_t : public bbGCFrame{
      t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator l_0{};
      void gcMark(){
        bbGCMark(l_0);
      }
    }f1{};
    bbDBLoop db_loop;
    f1.l_0=f0.l_update_0list->m_All();
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
      bbDBStmt(176131);
      if(f2.l_form->m_InBounds(l_mx,l_my)){
        bbDBBlock db_blk;
        bbDBStmt(184324);
        if((g_VectorSite_VectorUI_OverForm.get()==f2.l_form)){
          struct f4_t : public bbGCFrame{
            t_VectorSite_VectorUIForm* t0{};
            void gcMark(){
              bbGCMark(t0);
            }
          }f4{};
          bbDBBlock db_blk;
          bbDBStmt(192517);
          (f4.t0=g_VectorSite_VectorUI_OverForm.get())->m_OnMouseMove(l_mx,l_my,l_dx,l_dy);
        }else{
          bbDBStmt(200708);
          struct f4_t : public bbGCFrame{
            t_VectorSite_VectorUIForm* t0{};
            void gcMark(){
              bbGCMark(t0);
            }
          }f4{};
          bbDBBlock db_blk;
          bbDBStmt(208901);
          if((!bbBool(g_VectorSite_VectorUI_OverForm.get())==false)){
            struct f5_t : public bbGCFrame{
              t_VectorSite_VectorUIForm* t0{};
              void gcMark(){
                bbGCMark(t0);
              }
            }f5{};
            bbDBBlock db_blk;
            bbDBStmt(217094);
            (f5.t0=g_VectorSite_VectorUI_OverForm.get())->m_OnMouseLeave();
          }
          bbDBStmt(233477);
          g_VectorSite_VectorUI_OverForm=f2.l_form;
          bbDBStmt(237573);
          (f4.t0=g_VectorSite_VectorUI_OverForm.get())->m_OnMouseEnter();
        }
        bbDBStmt(253956);
        break;
      }
    }
  }
}

void t_VectorSite_VectorUI::m_RenderList(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"RenderList:Void(list:std.collections.List<VectorSite.VectorUIForm>)","D:/Git/VectorCMS/VectorUI.monkey2"};
  t_VectorSite_VectorUI*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("list",&l_list);
  bbDBStmt(335874);
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
      bbDBStmt(344067);
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
  bbDBStmt(294920);
  f0.l_render_0list=bbGCNew<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2>();
  bbDBLocal("render_list",&f0.l_render_0list);
  bbDBStmt(303106);
  this->m_AddToListForward(f0.t0=this->m_Root.get(),f0.l_render_0list);
  bbDBStmt(311298);
  this->m_RenderList(f0.l_render_0list);
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* t_VectorSite_VectorUI::m_InvertList(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> l_items{};
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_new_0list{};
    void gcMark(){
      bbGCMark(l_items);
      bbGCMark(l_new_0list);
    }
  }f0{};
  bbDBFrame db_f{"InvertList:std.collections.List<VectorSite.VectorUIForm>(list:std.collections.List<VectorSite.VectorUIForm>)","D:/Git/VectorCMS/VectorUI.monkey2"};
  t_VectorSite_VectorUI*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("list",&l_list);
  bbDBStmt(430088);
  bbInt l_item_0c=l_list->m_Count();
  bbDBLocal("item_c",&l_item_0c);
  bbDBStmt(438280);
  f0.l_new_0list=bbGCNew<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2>();
  bbDBLocal("new_list",&f0.l_new_0list);
  bbDBStmt(446472);
  f0.l_items=l_list->m_ToArray();
  bbDBLocal("items",&f0.l_items);
  bbDBStmt(454658);
  {
    bbDBLoop db_loop;
    bbInt l_i=l_item_0c;
    bbDBLocal("i",&l_i);
    for(;((false&&(l_i<=bbInt(0)))||(true&&(l_i>=bbInt(0))));l_i+=-1){
      struct f2_t : public bbGCFrame{
        t_VectorSite_VectorUIForm* l_item{};
        void gcMark(){
          bbGCMark(l_item);
        }
      }f2{};
      bbDBBlock db_blk;
      bbDBStmt(462857);
      f2.l_item=f0.l_items[(l_i-1)].get();
      bbDBLocal("item",&f2.l_item);
      bbDBStmt(475139);
      f0.l_new_0list->m_Add(f2.l_item);
    }
  }
  bbDBStmt(499714);
  return f0.l_new_0list;
}

void t_VectorSite_VectorUI::m_AddToListForward(t_VectorSite_VectorUIForm* l_ui,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"AddToListForward:Void(ui:VectorSite.VectorUIForm,list:std.collections.List<VectorSite.VectorUIForm>)","D:/Git/VectorCMS/VectorUI.monkey2"};
  t_VectorSite_VectorUI*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("ui",&l_ui);
  bbDBLocal("list",&l_list);
  bbDBStmt(380930);
  l_list->m_Add(l_ui);
  bbDBStmt(389122);
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
      bbDBStmt(397316);
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
  g_VectorSite_VectorUI_PressedForm=bbArray<bbGCVar<t_VectorSite_VectorUIForm>>(32);
}

struct mx2_VectorEngineSite_VectorUI_roots_t : bbGCRoot{
  void gcMark(){
    bbGCMark(g_VectorSite_VectorUI_ActiveForm.get());
    bbGCMark(g_VectorSite_VectorUI_OverForm.get());
    bbGCMark(g_VectorSite_VectorUI_PressedForm);
  }
}mx2_VectorEngineSite_VectorUI_roots;
