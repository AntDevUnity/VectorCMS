
#ifndef MX2_VECTORENGINESITE_FORMS_2WINDOWFORM_H
#define MX2_VECTORENGINESITE_FORMS_2WINDOWFORM_H

#include <bbmonkey.h>

#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_VectorUIForm.h"

BB_CLASS(t_VectorSite_ButtonForm)
BB_CLASS(t_VectorSite_PanelForm)

BB_CLASS(t_VectorSite_WindowForm)

struct t_VectorSite_WindowForm : public t_VectorSite_VectorUIForm{
  typedef t_VectorSite_WindowForm *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_VectorSite_WindowForm";}

  bbGCVar<t_VectorSite_PanelForm> m_Body{};
  bbGCVar<t_VectorSite_ButtonForm> m_Title{};
  bbGCVar<t_VectorSite_ButtonForm> m_Resize{};
  bbGCVar<t_VectorSite_ButtonForm> m_Close{};

  void gcMark();
  void dbEmit();

  t_VectorSite_WindowForm(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,bbString l_title);
  ~t_VectorSite_WindowForm();

  bbBool m_ON_0TitleDrag(bbInt l_x,bbInt l_y);

  t_VectorSite_WindowForm(){
  }
};

#endif
