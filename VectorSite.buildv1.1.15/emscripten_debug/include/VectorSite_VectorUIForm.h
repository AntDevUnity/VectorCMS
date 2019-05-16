
#ifndef MX2_VECTORSITE_VECTORUIFORM_H
#define MX2_VECTORSITE_VECTORUIFORM_H

#include <bbmonkey.h>

#include "VectorSite.buildv1.1.15/emscripten_debug/include/VectorSite_VectorObject.h"

BB_CLASS(t_VectorSite_VectorUIForm)

struct t_VectorSite_VectorUIForm : public t_VectorSite_VectorObject{
  typedef t_VectorSite_VectorUIForm *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_VectorSite_VectorUIForm";}

  void dbEmit();

  ~t_VectorSite_VectorUIForm();

  t_VectorSite_VectorUIForm(){
  }
};

#endif
