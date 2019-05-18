
#ifndef MX2_VECTORENGINESITE_FORMS_2TEXTBOXFORM_H
#define MX2_VECTORENGINESITE_FORMS_2TEXTBOXFORM_H

#include <bbmonkey.h>

#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorUIForm.h"

BB_CLASS(t_VectorSite_TextBoxForm)

struct t_VectorSite_TextBoxForm : public t_VectorSite_VectorUIForm{
  typedef t_VectorSite_TextBoxForm *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_VectorSite_TextBoxForm";}

  t_VectorSite_TextBoxForm(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,bbString l_def);
  ~t_VectorSite_TextBoxForm();

  void m_OnDraw();

  t_VectorSite_TextBoxForm(){
  }
};

#endif
