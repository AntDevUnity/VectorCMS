
#ifndef MX2_VECTORENGINESITE_FORMS_2BUTTONFORM_H
#define MX2_VECTORENGINESITE_FORMS_2BUTTONFORM_H

#include <bbmonkey.h>

#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorUIForm.h"
#include "std/std.buildv1.1.15/emscripten_debug/include/std_graphics_2color.h"

BB_CLASS(t_VectorSite_ButtonForm)

struct t_VectorSite_ButtonForm : public t_VectorSite_VectorUIForm{
  typedef t_VectorSite_ButtonForm *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_VectorSite_ButtonForm";}

  t_std_graphics_Color m_ButCol{};
  bbBool m_Down{false};

  void init();
  void dbEmit();

  t_VectorSite_ButtonForm(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,bbString l_text);
  ~t_VectorSite_ButtonForm();

  void m_OnMouseUp(t_VectorSite_Button l_b);
  void m_OnMouseMove(bbInt l_x,bbInt l_y,bbInt l_dx,bbInt l_dy);
  void m_OnMouseLeave();
  void m_OnMouseEnter();
  void m_OnMouseDown(t_VectorSite_Button l_b);
  void m_OnDraw();

  t_VectorSite_ButtonForm(){
    init();
  }
};

#endif
