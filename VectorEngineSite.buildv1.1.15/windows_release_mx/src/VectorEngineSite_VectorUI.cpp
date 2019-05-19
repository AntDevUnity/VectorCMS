
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorUI.h"

#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorUIForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_std_collections_2list.h"
#include "mojo/mojo.buildv1.1.15/windows_release_mx/include/mojo_input_2keyboard.h"
#include "mojo/mojo.buildv1.1.15/windows_release_mx/include/mojo_input_2mouse.h"
#include "std/std.buildv1.1.15/windows_release_mx/include/std_geom_2vec2.h"

BB_ENUM(t_mojo_input_Key)
BB_ENUM(t_mojo_input_Modifier)

bbGCVar<t_VectorSite_VectorUIForm> g_VectorSite_VectorUI_ActiveForm;
bbGCVar<t_VectorSite_VectorUIForm> g_VectorSite_VectorUI_OverForm;
bbArray<bbGCVar<t_VectorSite_VectorUIForm>> g_VectorSite_VectorUI_PressedForm;
bbInt g_VectorSite_VectorUI_ckey;
bbString g_VectorSite_VectorUI_okeys;

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
        if(((g_VectorSite_VectorUI_ActiveForm.get()!=g_VectorSite_VectorUI_OverForm.get())&&(g_VectorSite_VectorUI_ActiveForm.get()!=((t_VectorSite_VectorUIForm*)0)))){
          struct f4_t : public bbGCFrame{
            t_VectorSite_VectorUIForm* t0{};
            void gcMark(){
              bbGCMark(t0);
            }
          }f4{};
          (f4.t0=g_VectorSite_VectorUI_ActiveForm.get())->m_Deactivate();
        }
        g_VectorSite_VectorUI_ActiveForm=g_VectorSite_VectorUI_OverForm.get();
        (f3.t0=g_VectorSite_VectorUI_ActiveForm.get())->m_Activate();
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
  if((g_VectorSite_VectorUI_ActiveForm.get()!=((t_VectorSite_VectorUIForm*)0))){
    if((((g_mojo_input_Keyboard.get()->m_Modifiers()==t_mojo_input_Modifier(1))||(g_mojo_input_Keyboard.get()->m_Modifiers()==t_mojo_input_Modifier(2)))||(g_mojo_input_Keyboard.get()->m_Modifiers()==t_mojo_input_Modifier(3)))){
      struct f2_t : public bbGCFrame{
        t_VectorSite_VectorUIForm* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f2{};
      (f2.t0=g_VectorSite_VectorUI_ActiveForm.get())->m_ShiftDown();
    }else{
      struct f2_t : public bbGCFrame{
        t_VectorSite_VectorUIForm* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f2{};
      (f2.t0=g_VectorSite_VectorUI_ActiveForm.get())->m_ShiftUp();
    }
    while(true){
      bbInt l_c=g_mojo_input_Keyboard.get()->m_GetChar();
      if((l_c==bbInt(0))){
        break;
      }
      bbString l_cs=bbString::fromChar(l_c);
      if(g_VectorSite_VectorUI_okeys.contains(l_cs)){
        struct f3_t : public bbGCFrame{
          t_VectorSite_VectorUIForm* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        g_VectorSite_VectorUI_ckey=l_c;
        (f3.t0=g_VectorSite_VectorUI_ActiveForm.get())->m_OnKeyDown(l_c);
      }
    }
    if((g_VectorSite_VectorUI_ckey!=bbInt(0))){
      bbString l_cs=bbString::fromChar(g_VectorSite_VectorUI_ckey);
      l_cs=l_cs.toLower();
      t_mojo_input_Key l_ck=t_mojo_input_Key(200);
      if((l_cs==bbString(L"a",1))){
        l_ck=t_mojo_input_Key(97);
      }
      if((l_cs==bbString(L"{",1))){
        l_ck=t_mojo_input_Key(91);
      }
      if((l_cs==bbString(L"}",1))){
        l_ck=t_mojo_input_Key(93);
      }
      if((l_cs==bbString(L"(",1))){
        l_ck=t_mojo_input_Key(91);
      }
      if((l_cs==bbString(L")",1))){
        l_ck=t_mojo_input_Key(93);
      }
      if((l_cs==bbString(L"+",1))){
        l_ck=t_mojo_input_Key(61);
      }
      if((l_cs==bbString(L"=",1))){
        l_ck=t_mojo_input_Key(61);
      }
      if((l_cs==bbString(L"-",1))){
        l_ck=t_mojo_input_Key(45);
      }
      if((l_cs==bbString(L"b",1))){
        l_ck=t_mojo_input_Key(98);
      }
      if((l_cs==bbString(L"c",1))){
        l_ck=t_mojo_input_Key(99);
      }
      if((l_cs==bbString(L"d",1))){
        l_ck=t_mojo_input_Key(100);
      }
      if((l_cs==bbString(L"e",1))){
        l_ck=t_mojo_input_Key(101);
      }
      if((l_cs==bbString(L"f",1))){
        l_ck=t_mojo_input_Key(102);
      }
      if((l_cs==bbString(L"g",1))){
        l_ck=t_mojo_input_Key(103);
      }
      if((l_cs==bbString(L"h",1))){
        l_ck=t_mojo_input_Key(104);
      }
      if((l_cs==bbString(L"i",1))){
        l_ck=t_mojo_input_Key(105);
      }
      if((l_cs==bbString(L"j",1))){
        l_ck=t_mojo_input_Key(106);
      }
      if((l_cs==bbString(L"k",1))){
        l_ck=t_mojo_input_Key(107);
      }
      if((l_cs==bbString(L"l",1))){
        l_ck=t_mojo_input_Key(108);
      }
      if((l_cs==bbString(L"m",1))){
        l_ck=t_mojo_input_Key(109);
      }
      if((l_cs==bbString(L"n",1))){
        l_ck=t_mojo_input_Key(110);
      }
      if((l_cs==bbString(L"o",1))){
        l_ck=t_mojo_input_Key(111);
      }
      if((l_cs==bbString(L"p",1))){
        l_ck=t_mojo_input_Key(112);
      }
      if((l_cs==bbString(L"q",1))){
        l_ck=t_mojo_input_Key(113);
      }
      if((l_cs==bbString(L"r",1))){
        l_ck=t_mojo_input_Key(114);
      }
      if((l_cs==bbString(L"s",1))){
        l_ck=t_mojo_input_Key(115);
      }
      if((l_cs==bbString(L"t",1))){
        l_ck=t_mojo_input_Key(116);
      }
      if((l_cs==bbString(L"u",1))){
        l_ck=t_mojo_input_Key(117);
      }
      if((l_cs==bbString(L"v",1))){
        l_ck=t_mojo_input_Key(118);
      }
      if((l_cs==bbString(L"w",1))){
        l_ck=t_mojo_input_Key(119);
      }
      if((l_cs==bbString(L"x",1))){
        l_ck=t_mojo_input_Key(120);
      }
      if((l_cs==bbString(L"y",1))){
        l_ck=t_mojo_input_Key(121);
      }
      if((l_cs==bbString(L"z",1))){
        l_ck=t_mojo_input_Key(122);
      }
      if((l_cs==bbString(L"0",1))){
        l_ck=t_mojo_input_Key(48);
      }
      if((l_cs==bbString(L"1",1))){
        l_ck=t_mojo_input_Key(49);
      }
      if((l_cs==bbString(L"2",1))){
        l_ck=t_mojo_input_Key(50);
      }
      if((l_cs==bbString(L"3",1))){
        l_ck=t_mojo_input_Key(51);
      }
      if((l_cs==bbString(L"4",1))){
        l_ck=t_mojo_input_Key(52);
      }
      if((l_cs==bbString(L"5",1))){
        l_ck=t_mojo_input_Key(53);
      }
      if((l_cs==bbString(L"6",1))){
        l_ck=t_mojo_input_Key(54);
      }
      if((l_cs==bbString(L"7",1))){
        l_ck=t_mojo_input_Key(55);
      }
      if((l_cs==bbString(L"8",1))){
        l_ck=t_mojo_input_Key(56);
      }
      if((l_cs==bbString(L"9",1))){
        l_ck=t_mojo_input_Key(57);
      }
      if((l_cs==bbString(L"!",1))){
        l_ck=t_mojo_input_Key(49);
      }
      if((l_cs==bbString(L"@",1))){
        l_ck=t_mojo_input_Key(50);
      }
      if((l_cs==bbString(L"#",1))){
        l_ck=t_mojo_input_Key(51);
      }
      if((l_cs==bbString(L"$",1))){
        l_ck=t_mojo_input_Key(52);
      }
      if((l_cs==bbString(L"%",1))){
        l_ck=t_mojo_input_Key(53);
      }
      if((l_cs==bbString(L"^",1))){
        l_ck=t_mojo_input_Key(54);
      }
      if((l_cs==bbString(L"&",1))){
        l_ck=t_mojo_input_Key(55);
      }
      if((l_cs==bbString(L"*",1))){
        l_ck=t_mojo_input_Key(56);
      }
      if((l_cs==bbString(L"(",1))){
        l_ck=t_mojo_input_Key(57);
      }
      if((l_ck!=t_mojo_input_Key(200))){
        struct f3_t : public bbGCFrame{
          t_VectorSite_VectorUIForm* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f3{};
        (f3.t0=g_VectorSite_VectorUI_ActiveForm.get())->m_OnKeyUp(g_VectorSite_VectorUI_ckey);
        g_VectorSite_VectorUI_ckey=bbInt(0);
      }
    }
  }else{
    g_mojo_input_Keyboard.get()->m_FlushChars();
    g_mojo_input_Keyboard.get()->m_FlushKeys();
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
  g_VectorSite_VectorUI_ckey=bbInt(0);
  g_VectorSite_VectorUI_okeys=bbString(L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-=_+,.<>/?\\||}{[]()!@#$%^&*()",91);
}

struct mx2_VectorEngineSite_VectorUI_roots_t : bbGCRoot{
  void gcMark(){
    bbGCMark(g_VectorSite_VectorUI_ActiveForm.get());
    bbGCMark(g_VectorSite_VectorUI_OverForm.get());
    bbGCMark(g_VectorSite_VectorUI_PressedForm);
  }
}mx2_VectorEngineSite_VectorUI_roots;
