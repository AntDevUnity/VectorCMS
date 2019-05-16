
#include "VectorSite.buildv1.1.15/emscripten_debug/include/VectorSite_VectorUIForm.h"

void t_VectorSite_VectorUIForm::dbEmit(){
  t_VectorSite_VectorObject::dbEmit();
  puts( "[VectorSite.VectorUIForm]");
}
t_VectorSite_VectorUIForm::~t_VectorSite_VectorUIForm(){
}
bbString bbDBType(t_VectorSite_VectorUIForm**){
  return "VectorSite.VectorUIForm";
}
bbString bbDBValue(t_VectorSite_VectorUIForm**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorSite_VectorUIForm_init_f(){
}
