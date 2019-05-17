
#ifndef MX2_VECTORENGINESITE_VECTORUI_H
#define MX2_VECTORENGINESITE_VECTORUI_H

#include <bbmonkey.h>

#include "monkey/monkey.buildv1.1.15/emscripten_debug/include/monkey_types.h"

BB_CLASS(t_VectorSite_VectorUIForm)
BB_CLASS(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2)

BB_CLASS(t_VectorSite_VectorUI)

struct t_VectorSite_VectorUI : public bbObject{
  typedef t_VectorSite_VectorUI *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_VectorSite_VectorUI";}

  bbGCVar<t_VectorSite_VectorUIForm> m_Root{};

  void gcMark();
  void dbEmit();

  t_VectorSite_VectorUI();
  ~t_VectorSite_VectorUI();

  void m_RenderList(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list);
  void m_Render();
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* m_InvertList(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list);
  void m_AddToListForward(t_VectorSite_VectorUIForm* l_ui,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list);
};

#endif