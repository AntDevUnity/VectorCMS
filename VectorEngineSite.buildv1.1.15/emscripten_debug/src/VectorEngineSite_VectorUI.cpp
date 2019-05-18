
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
  if((g_VectorSite_VectorUI_PressedForm[bbInt(0)].get()==((t_VectorSite_VectorUIForm*)0))){
    bbDBBlock db_blk;
    bbDBStmt(176130);
    {
      struct f2_t : public bbGCFrame{
        t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator l_0{};
        void gcMark(){
          bbGCMark(l_0);
        }
      }f2{};
      bbDBLoop db_loop;
      f2.l_0=f0.l_update_0list->m_All();
      bbDBLocal("0",&f2.l_0);
      for(;!f2.l_0.m_AtEnd();f2.l_0.m_Bump()){
        struct f3_t : public bbGCFrame{
          t_VectorSite_VectorUIForm* l_form{};
          void gcMark(){
            bbGCMark(l_form);
          }
        }f3{};
        bbDBBlock db_blk;
        f3.l_form=f2.l_0.m_Current();
        bbDBLocal("form",&f3.l_form);
        bbDBStmt(184323);
        if(f3.l_form->m_InBounds(l_mx,l_my)){
          bbDBBlock db_blk;
          bbDBStmt(192516);
          if((g_VectorSite_VectorUI_OverForm.get()==f3.l_form)){
            bbDBBlock db_blk;
            bbDBStmt(200709);
            if((!bbBool(g_VectorSite_VectorUI_PressedForm[bbInt(0)].get())==bbBool(g_VectorSite_VectorUI_OverForm.get()))){
              struct f6_t : public bbGCFrame{
                t_VectorSite_VectorUIForm* t0{};
                void gcMark(){
                  bbGCMark(t0);
                }
              }f6{};
              bbDBBlock db_blk;
              bbDBStmt(208902);
              (f6.t0=g_VectorSite_VectorUI_OverForm.get())->m_OnMouseMove(l_mx,l_my,l_dx,l_dy);
            }
          }else{
            bbDBStmt(225284);
            struct f5_t : public bbGCFrame{
              t_VectorSite_VectorUIForm* t0{};
              void gcMark(){
                bbGCMark(t0);
              }
            }f5{};
            bbDBBlock db_blk;
            bbDBStmt(233477);
            if((!bbBool(g_VectorSite_VectorUI_OverForm.get())==false)){
              struct f6_t : public bbGCFrame{
                t_VectorSite_VectorUIForm* t0{};
                void gcMark(){
                  bbGCMark(t0);
                }
              }f6{};
              bbDBBlock db_blk;
              bbDBStmt(241670);
              (f6.t0=g_VectorSite_VectorUI_OverForm.get())->m_OnMouseLeave();
            }
            bbDBStmt(258053);
            g_VectorSite_VectorUI_OverForm=f3.l_form;
            bbDBStmt(262149);
            (f5.t0=g_VectorSite_VectorUI_OverForm.get())->m_OnMouseEnter();
          }
          bbDBStmt(278532);
          break;
        }
      }
    }
  }
  bbDBStmt(315394);
  if(g_mojo_input_Mouse.get()->m_ButtonDown(t_mojo_input_MouseButton(1))){
    bbDBBlock db_blk;
    bbDBStmt(323587);
    if(bbBool(g_VectorSite_VectorUI_OverForm.get())){
      bbDBBlock db_blk;
      bbDBStmt(331780);
      if((g_VectorSite_VectorUI_PressedForm[bbInt(0)].get()==((t_VectorSite_VectorUIForm*)0))){
        struct f3_t : public bbGCFrame{
          t_VectorSite_VectorUIForm* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        bbDBBlock db_blk;
        bbDBStmt(339973);
        g_VectorSite_VectorUI_PressedForm[bbInt(0)]=g_VectorSite_VectorUI_OverForm.get();
        bbDBStmt(344069);
        g_VectorSite_VectorUI_ActiveForm=g_VectorSite_VectorUI_OverForm.get();
        bbDBStmt(352261);
        (f3.t0=g_VectorSite_VectorUI_PressedForm[bbInt(0)].get())->m_OnMouseDown(t_VectorSite_Button(0));
      }else if(bbDBStmt(360452),(g_VectorSite_VectorUI_PressedForm[bbInt(0)].get()==g_VectorSite_VectorUI_OverForm.get())){
        struct f3_t : public bbGCFrame{
          t_VectorSite_VectorUIForm* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        bbDBBlock db_blk;
        bbDBStmt(368645);
        (f3.t0=g_VectorSite_VectorUI_OverForm.get())->m_OnMouseMove(l_mx,l_my,l_dx,l_dy);
        bbDBStmt(372741);
        if((g_VectorSite_VectorUI_OverForm.get()->m_OnDrag!=bbFunction<bbBool(bbInt,bbInt)>{})){
          bbDBBlock db_blk;
          bbDBStmt(380934);
          g_VectorSite_VectorUI_OverForm.get()->m_OnDrag(l_dx,l_dy);
        }
      }
    }
  }else{
    bbDBStmt(413698);
    bbDBBlock db_blk;
    bbDBStmt(421891);
    if(bbBool(g_VectorSite_VectorUI_PressedForm[bbInt(0)].get())){
      struct f2_t : public bbGCFrame{
        t_VectorSite_VectorUIForm* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f2{};
      bbDBBlock db_blk;
      bbDBStmt(430084);
      (f2.t0=g_VectorSite_VectorUI_PressedForm[bbInt(0)].get())->m_OnMouseUp(t_VectorSite_Button(0));
      bbDBStmt(434180);
      g_VectorSite_VectorUI_PressedForm[bbInt(0)]=((t_VectorSite_VectorUIForm*)0);
    }
  }
}

void t_VectorSite_VectorUI::m_RenderList(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"RenderList:Void(list:std.collections.List<VectorSite.VectorUIForm>)","D:/Git/VectorCMS/VectorUI.monkey2"};
  t_VectorSite_VectorUI*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("list",&l_list);
  bbDBStmt(532482);
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
      bbDBStmt(540675);
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
  bbDBStmt(491528);
  f0.l_render_0list=bbGCNew<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2>();
  bbDBLocal("render_list",&f0.l_render_0list);
  bbDBStmt(499714);
  this->m_AddToListForward(f0.t0=this->m_Root.get(),f0.l_render_0list);
  bbDBStmt(507906);
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
  bbDBStmt(651272);
  bbInt l_item_0c=l_list->m_Count();
  bbDBLocal("item_c",&l_item_0c);
  bbDBStmt(659458);
  if((l_item_0c==bbInt(0))){
    bbDBBlock db_blk;
    bbDBStmt(667651);
    return l_list;
  }
  bbDBStmt(684040);
  f0.l_new_0list=bbGCNew<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2>();
  bbDBLocal("new_list",&f0.l_new_0list);
  bbDBStmt(692232);
  f0.l_items=l_list->m_ToArray();
  bbDBLocal("items",&f0.l_items);
  bbDBStmt(700418);
  {
    bbDBLoop db_loop;
    bbInt l_i=(l_item_0c-1);
    bbDBLocal("i",&l_i);
    for(;((false&&(l_i<=bbInt(0)))||(true&&(l_i>=bbInt(0))));l_i+=-1){
      struct f2_t : public bbGCFrame{
        t_VectorSite_VectorUIForm* l_item{};
        void gcMark(){
          bbGCMark(l_item);
        }
      }f2{};
      bbDBBlock db_blk;
      bbDBStmt(708617);
      f2.l_item=f0.l_items[l_i].get();
      bbDBLocal("item",&f2.l_item);
      bbDBStmt(720899);
      f0.l_new_0list->m_Add(f2.l_item);
    }
  }
  bbDBStmt(745474);
  return f0.l_new_0list;
}

void t_VectorSite_VectorUI::m_AddToListForward(t_VectorSite_VectorUIForm* l_ui,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"AddToListForward:Void(ui:VectorSite.VectorUIForm,list:std.collections.List<VectorSite.VectorUIForm>)","D:/Git/VectorCMS/VectorUI.monkey2"};
  t_VectorSite_VectorUI*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("ui",&l_ui);
  bbDBLocal("list",&l_list);
  bbDBStmt(577538);
  if((l_ui==((t_VectorSite_VectorUIForm*)0))){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(585730);
  l_list->m_Add(l_ui);
  bbDBStmt(593922);
  if((l_ui->m_Sub.get()==((t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*)0))){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(602114);
  if(((f0.t0=l_ui->m_Sub.get())->m_Count()==bbInt(0))){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(610306);
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
      bbDBStmt(618500);
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
