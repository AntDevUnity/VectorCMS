
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorUI.h"

#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorUIForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_std_collections_2list.h"
#include "mojo/mojo.buildv1.1.15/windows_release_mx/include/mojo_input_2mouse.h"
#include "std/std.buildv1.1.15/windows_release_mx/include/std_geom_2vec2.h"

bbGCVar<t_VectorSite_VectorUIForm> g_VectorSite_VectorUI_ActiveForm;
bbGCVar<t_VectorSite_VectorUIForm> g_VectorSite_VectorUI_OverForm;
bbArray<bbGCVar<t_VectorSite_VectorUIForm>> g_VectorSite_VectorUI_PressedForm;

void t_VectorSite_VectorUI::gcMark(){
  bbGCMark(m_Root);
}

t_VectorSite_VectorUI::t_VectorSite_VectorUI(){
}
t_VectorSite_VectorUI::~t_VectorSite_VectorUI(){
}

void t_VectorSite_VectorUI::m_Update(){
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_update_0list{};
    t_VectorSite_VectorUIForm* t0{};
    void gcMark(){
      bbGCMark(l_update_0list);
      bbGCMark(t0);
    }
  }f0{};
  f0.l_update_0list=bbGCNew<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2>();
  this->m_AddToListForward(f0.t0=this->m_Root.get(),f0.l_update_0list);
  f0.l_update_0list=this->m_InvertList(f0.l_update_0list);
  bbInt l_mx{};
  bbInt l_my{};
  l_mx=g_mojo_input_Mouse.get()->m_Location().m_x;
  l_my=g_mojo_input_Mouse.get()->m_Location().m_y;
  bbInt l_dx{};
  bbInt l_dy{};
  l_dx=(l_mx-this->m_LastMx);
  l_dy=(l_my-this->m_LastMy);
  this->m_LastMx=l_mx;
  this->m_LastMy=l_my;
  if((g_VectorSite_VectorUI_PressedForm[bbInt(0)].get()==((t_VectorSite_VectorUIForm*)0))){
    {
      struct f2_t : public bbGCFrame{
        t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator l_0{};
        void gcMark(){
          bbGCMark(l_0);
        }
      }f2{};
      f2.l_0=f0.l_update_0list->m_All();
      for(;!f2.l_0.m_AtEnd();f2.l_0.m_Bump()){
        struct f3_t : public bbGCFrame{
          t_VectorSite_VectorUIForm* l_form{};
          void gcMark(){
            bbGCMark(l_form);
          }
        }f3{};
        f3.l_form=f2.l_0.m_Current();
        if(f3.l_form->m_InBounds(l_mx,l_my)){
          if((g_VectorSite_VectorUI_OverForm.get()==f3.l_form)){
            if((!bbBool(g_VectorSite_VectorUI_PressedForm[bbInt(0)].get())==bbBool(g_VectorSite_VectorUI_OverForm.get()))){
              struct f6_t : public bbGCFrame{
                t_VectorSite_VectorUIForm* t0{};
                void gcMark(){
                  bbGCMark(t0);
                }
              }f6{};
              (f6.t0=g_VectorSite_VectorUI_OverForm.get())->m_OnMouseMove(l_mx,l_my,l_dx,l_dy);
            }
          }else{
            struct f5_t : public bbGCFrame{
              t_VectorSite_VectorUIForm* t0{};
              void gcMark(){
                bbGCMark(t0);
              }
            }f5{};
            if((!bbBool(g_VectorSite_VectorUI_OverForm.get())==false)){
              struct f6_t : public bbGCFrame{
                t_VectorSite_VectorUIForm* t0{};
                void gcMark(){
                  bbGCMark(t0);
                }
              }f6{};
              (f6.t0=g_VectorSite_VectorUI_OverForm.get())->m_OnMouseLeave();
            }
            g_VectorSite_VectorUI_OverForm=f3.l_form;
            (f5.t0=g_VectorSite_VectorUI_OverForm.get())->m_OnMouseEnter();
          }
          break;
        }
      }
    }
  }
  if(g_mojo_input_Mouse.get()->m_ButtonDown(t_mojo_input_MouseButton(1))){
    if(bbBool(g_VectorSite_VectorUI_OverForm.get())){
      if((g_VectorSite_VectorUI_PressedForm[bbInt(0)].get()==((t_VectorSite_VectorUIForm*)0))){
        struct f3_t : public bbGCFrame{
          t_VectorSite_VectorUIForm* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        g_VectorSite_VectorUI_PressedForm[bbInt(0)]=g_VectorSite_VectorUI_OverForm.get();
        g_VectorSite_VectorUI_ActiveForm=g_VectorSite_VectorUI_OverForm.get();
        (f3.t0=g_VectorSite_VectorUI_PressedForm[bbInt(0)].get())->m_OnMouseDown(t_VectorSite_Button(0));
      }else if((g_VectorSite_VectorUI_PressedForm[bbInt(0)].get()==g_VectorSite_VectorUI_OverForm.get())){
        struct f3_t : public bbGCFrame{
          t_VectorSite_VectorUIForm* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        (f3.t0=g_VectorSite_VectorUI_OverForm.get())->m_OnMouseMove(l_mx,l_my,l_dx,l_dy);
        if((g_VectorSite_VectorUI_OverForm.get()->m_OnDrag!=bbFunction<bbBool(bbInt,bbInt)>{})){
          g_VectorSite_VectorUI_OverForm.get()->m_OnDrag(l_dx,l_dy);
        }
      }
    }
  }else{
    if(bbBool(g_VectorSite_VectorUI_PressedForm[bbInt(0)].get())){
      struct f2_t : public bbGCFrame{
        t_VectorSite_VectorUIForm* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f2{};
      (f2.t0=g_VectorSite_VectorUI_PressedForm[bbInt(0)].get())->m_OnMouseUp(t_VectorSite_Button(0));
      g_VectorSite_VectorUI_PressedForm[bbInt(0)]=((t_VectorSite_VectorUIForm*)0);
    }
  }
}

void t_VectorSite_VectorUI::m_RenderList(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list){
  {
    struct f1_t : public bbGCFrame{
      t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator l_0{};
      void gcMark(){
        bbGCMark(l_0);
      }
    }f1{};
    f1.l_0=l_list->m_All();
    for(;!f1.l_0.m_AtEnd();f1.l_0.m_Bump()){
      struct f2_t : public bbGCFrame{
        t_VectorSite_VectorUIForm* l_form{};
        void gcMark(){
          bbGCMark(l_form);
        }
      }f2{};
      f2.l_form=f1.l_0.m_Current();
      f2.l_form->m_OnDraw();
    }
  }
}

void t_VectorSite_VectorUI::m_Render(){
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_render_0list{};
    t_VectorSite_VectorUIForm* t0{};
    void gcMark(){
      bbGCMark(l_render_0list);
      bbGCMark(t0);
    }
  }f0{};
  f0.l_render_0list=bbGCNew<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2>();
  this->m_AddToListForward(f0.t0=this->m_Root.get(),f0.l_render_0list);
  this->m_RenderList(f0.l_render_0list);
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* t_VectorSite_VectorUI::m_InvertList(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list){
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> l_items{};
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_new_0list{};
    void gcMark(){
      bbGCMark(l_items);
      bbGCMark(l_new_0list);
    }
  }f0{};
  bbInt l_item_0c=l_list->m_Count();
  if((l_item_0c==bbInt(0))){
    return l_list;
  }
  f0.l_new_0list=bbGCNew<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2>();
  f0.l_items=l_list->m_ToArray();
  {
    bbInt l_i=(l_item_0c-1);
    for(;((false&&(l_i<=bbInt(0)))||(true&&(l_i>=bbInt(0))));l_i+=-1){
      struct f2_t : public bbGCFrame{
        t_VectorSite_VectorUIForm* l_item{};
        void gcMark(){
          bbGCMark(l_item);
        }
      }f2{};
      f2.l_item=f0.l_items[l_i].get();
      f0.l_new_0list->m_Add(f2.l_item);
    }
  }
  return f0.l_new_0list;
}

void t_VectorSite_VectorUI::m_AddToListForward(t_VectorSite_VectorUIForm* l_ui,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list){
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  if((l_ui==((t_VectorSite_VectorUIForm*)0))){
    return;
  }
  l_list->m_Add(l_ui);
  if((l_ui->m_Sub.get()==((t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*)0))){
    return;
  }
  if(((f0.t0=l_ui->m_Sub.get())->m_Count()==bbInt(0))){
    return;
  }
  {
    struct f1_t : public bbGCFrame{
      t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator l_0{};
      t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* t0{};
      void gcMark(){
        bbGCMark(l_0);
        bbGCMark(t0);
      }
    }f1{};
    f1.l_0=(f1.t0=l_ui->m_Sub.get())->m_All();
    for(;!f1.l_0.m_AtEnd();f1.l_0.m_Bump()){
      struct f2_t : public bbGCFrame{
        t_VectorSite_VectorUIForm* l_form{};
        void gcMark(){
          bbGCMark(l_form);
        }
      }f2{};
      f2.l_form=f1.l_0.m_Current();
      this->m_AddToListForward(f2.l_form,l_list);
    }
  }
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
