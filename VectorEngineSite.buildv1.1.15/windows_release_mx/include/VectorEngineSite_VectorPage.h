
#ifndef MX2_VECTORENGINESITE_VECTORPAGE_H
#define MX2_VECTORENGINESITE_VECTORPAGE_H

#include <bbmonkey.h>

#include "monkey/monkey.buildv1.1.15/windows_release_mx/include/monkey_types.h"

BB_CLASS(t_VectorSite_VectorUI)

BB_CLASS(t_VectorSite_VectorPage)

struct t_VectorSite_VectorPage : public bbObject{
  typedef t_VectorSite_VectorPage *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_VectorSite_VectorPage";}

  bbGCVar<t_VectorSite_VectorUI> m_UI{};

  void gcMark();

  t_VectorSite_VectorPage();
  ~t_VectorSite_VectorPage();

  virtual void m_OnUpdate();
  virtual void m_OnRender();
  virtual void m_OnInit();
};

#endif
