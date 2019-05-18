
#ifndef MX2_VECTORENGINESITE_VECTORENGINESITE_H
#define MX2_VECTORENGINESITE_VECTORENGINESITE_H

#include <bbmonkey.h>

#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorSite.h"

BB_CLASS(t_VectorSite_VectorPage)

BB_CLASS(t_VectorSite_VectorEngineSite)

void bbMain();

struct t_VectorSite_VectorEngineSite : public t_VectorSite_VectorSite{
  typedef t_VectorSite_VectorEngineSite *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_VectorSite_VectorEngineSite";}

  bbGCVar<t_VectorSite_VectorPage> m_CurPage{};

  void gcMark();

  t_VectorSite_VectorEngineSite();
  ~t_VectorSite_VectorEngineSite();

  void m_DoRender();
};

#endif
