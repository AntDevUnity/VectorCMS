
#ifndef MX2_VECTORENGINESITE_FORMS_2LABELFORM_H
#define MX2_VECTORENGINESITE_FORMS_2LABELFORM_H

#include <bbmonkey.h>

#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorUIForm.h"

BB_CLASS(t_VectorSite_LabelForm)

struct t_VectorSite_LabelForm : public t_VectorSite_VectorUIForm{
  typedef t_VectorSite_LabelForm *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_VectorSite_LabelForm";}

  void dbEmit();

  t_VectorSite_LabelForm(bbString l_text,bbInt l_x,bbInt l_y);
  ~t_VectorSite_LabelForm();

  void m_OnDraw();

  t_VectorSite_LabelForm(){
  }
};

#endif
