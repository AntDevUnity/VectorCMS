
#ifndef MX2_VECTORENGINESITE_VECTOROBJECT_H
#define MX2_VECTORENGINESITE_VECTOROBJECT_H

#include <bbmonkey.h>

#include "monkey/monkey.buildv1.1.15/windows_debug_mx/include/monkey_types.h"
#include "std/std.buildv1.1.15/windows_debug_mx/include/std_geom_2vec2.h"

BB_CLASS(t_VectorSite_VectorObject)

struct t_VectorSite_VectorObject : public bbObject{
  typedef t_VectorSite_VectorObject *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_VectorSite_VectorObject";}

  t_std_geom_Vec2_1f m_Pos{};
  t_std_geom_Vec2_1f m_Size{};
  void dbEmit();

  ~t_VectorSite_VectorObject();

  t_VectorSite_VectorObject(){
  }
};

#endif
