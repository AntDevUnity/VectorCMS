
#ifndef MX2_VECTORENGINESITE_FORMS_2PANELFORM_H
#define MX2_VECTORENGINESITE_FORMS_2PANELFORM_H

#include <bbmonkey.h>

#include "std/std.buildv1.1.15/emscripten_debug/include/std_graphics_2color.h"
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorUIForm.h"

BB_CLASS(t_VectorSite_PanelForm)

struct t_VectorSite_PanelForm : public t_VectorSite_VectorUIForm{
  typedef t_VectorSite_PanelForm *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_VectorSite_PanelForm";}

  t_std_graphics_Color m_PanelCol{};
  void dbEmit();

  t_VectorSite_PanelForm(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h);
  ~t_VectorSite_PanelForm();

  void m_OnDraw();

  t_VectorSite_PanelForm(){
  }
};

#endif
