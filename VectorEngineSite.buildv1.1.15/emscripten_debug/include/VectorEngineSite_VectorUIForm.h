
#ifndef MX2_VECTORENGINESITE_VECTORUIFORM_H
#define MX2_VECTORENGINESITE_VECTORUIFORM_H

#include <bbmonkey.h>

#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorObject.h"

BB_CLASS(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2)
BB_STRUCT(t_std_graphics_Color)

BB_ENUM(t_VectorSite_Button)

BB_CLASS(t_VectorSite_VectorUIForm)

struct t_VectorSite_VectorUIForm : public t_VectorSite_VectorObject{
  typedef t_VectorSite_VectorUIForm *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_VectorSite_VectorUIForm";}

  bbGCVar<t_VectorSite_VectorUIForm> m_Root{};
  bbGCVar<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2> m_Sub{};

  void init();

  void gcMark();
  void dbEmit();

  ~t_VectorSite_VectorUIForm();

  virtual void m_OnUpdate();
  void m_OnMouseMove(bbInt l_x,bbInt l_y,bbInt l_dx,bbInt l_dy);
  void m_OnMouseDown(t_VectorSite_Button l_b);
  virtual void m_OnDraw();
  bbInt m_DrawY();
  bbInt m_DrawX();
  void m_DrawRect(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,t_std_graphics_Color l_col);

  t_VectorSite_VectorUIForm(){
    init();
  }
};

#endif
