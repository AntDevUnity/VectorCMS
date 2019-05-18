
#ifndef MX2_VECTORENGINESITE_PAGES_2LOGINPAGE_H
#define MX2_VECTORENGINESITE_PAGES_2LOGINPAGE_H

#include <bbmonkey.h>

#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_VectorPage.h"

BB_CLASS(t_VectorSite_LoginPage)

struct t_VectorSite_LoginPage : public t_VectorSite_VectorPage{
  typedef t_VectorSite_LoginPage *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_VectorSite_LoginPage";}

  void dbEmit();

  t_VectorSite_LoginPage();
  ~t_VectorSite_LoginPage();

  void m_OnUpdate();
  void m_OnRender();
  void m_OnInit();
};

#endif
