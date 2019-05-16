
#include "VectorSite.buildv1.1.15/emscripten_debug/include/VectorSite_VectorObject.h"

void t_VectorSite_VectorObject::dbEmit(){
  puts( "[VectorSite.VectorObject]");
  bbDBEmit("Pos",&m_Pos);
  bbDBEmit("Size",&m_Size);
}
t_VectorSite_VectorObject::~t_VectorSite_VectorObject(){
}
bbString bbDBType(t_VectorSite_VectorObject**){
  return "VectorSite.VectorObject";
}
bbString bbDBValue(t_VectorSite_VectorObject**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorSite_VectorObject_init_f(){
}
