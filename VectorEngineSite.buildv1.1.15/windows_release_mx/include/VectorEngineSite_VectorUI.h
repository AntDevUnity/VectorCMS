
#ifndef MX2_VECTORENGINESITE_VECTORUI_H
#define MX2_VECTORENGINESITE_VECTORUI_H

#include <bbmonkey.h>

#include "monkey/monkey.buildv1.1.15/windows_release_mx/include/monkey_types.h"

BB_CLASS(t_VectorSite_VectorUIForm)
BB_CLASS(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2)

BB_CLASS(t_VectorSite_VectorUI)

extern bbGCVar<t_VectorSite_VectorUIForm> g_VectorSite_VectorUI_ActiveForm;
extern bbGCVar<t_VectorSite_VectorUIForm> g_VectorSite_VectorUI_OverForm;
extern bbArray<bbGCVar<t_VectorSite_VectorUIForm>> g_VectorSite_VectorUI_PressedForm;
extern bbInt g_VectorSite_VectorUI_ckey;
extern bbString g_VectorSite_VectorUI_okeys;

struct t_VectorSite_VectorUI : public bbObject{
  typedef t_VectorSite_VectorUI *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_VectorSite_VectorUI";}

  bbGCVar<t_VectorSite_VectorUIForm> m_Root{};
  bbInt m_LastMx{};
  bbInt m_LastMy{};

  void gcMark();

  t_VectorSite_VectorUI();
  ~t_VectorSite_VectorUI();

  void m_Update();
  void m_RenderList(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list);
  void m_Render();
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* m_InvertList(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list);
  void m_AddToListForward(t_VectorSite_VectorUIForm* l_ui,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list);
};

#endif
