
#ifndef MX2_VECTORENGINESITE_STD_COLLECTIONS_2CONTAINER_H
#define MX2_VECTORENGINESITE_STD_COLLECTIONS_2CONTAINER_H

#include <bbmonkey.h>
#include "std/std.buildv1.1.15/emscripten_debug/include/std_collections_2container.h"

BB_CLASS(t_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2)
BB_CLASS(t_std_collections_IIterator_1Tt_VectorSite_VectorUIForm_2)

struct t_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2 : public virtual bbInterface{
  typedef t_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2 *bb_object_type;
  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2";}

  ~t_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2();

};

struct t_std_collections_IIterator_1Tt_VectorSite_VectorUIForm_2 : public virtual bbInterface{
  typedef t_std_collections_IIterator_1Tt_VectorSite_VectorUIForm_2 *bb_object_type;
  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_std_collections_IIterator_1Tt_VectorSite_VectorUIForm_2";}

  ~t_std_collections_IIterator_1Tt_VectorSite_VectorUIForm_2();

};

#endif
