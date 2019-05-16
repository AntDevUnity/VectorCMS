
#ifndef MX2_VECTORSITE_VECTORSITE_H
#define MX2_VECTORSITE_VECTORSITE_H

#include <bbmonkey.h>

#include "mojo/mojo.buildv1.1.15/emscripten_debug/include/mojo_app_2window.h"

BB_CLASS(t_VectorSite_VectorUIForm)
BB_CLASS(t_mojo_graphics_Canvas)

BB_CLASS(t_VectorSite_VectorSite)

void bbMain();

struct t_VectorSite_VectorSite : public t_mojo_app_Window{
  typedef t_VectorSite_VectorSite *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_VectorSite_VectorSite";}

  bbGCVar<t_VectorSite_VectorUIForm> m_Settings{};

  void gcMark();
  void dbEmit();

  t_VectorSite_VectorSite(bbString l_title,bbInt l_width,bbInt l_height,t_mojo_app_WindowFlags l_flags);
  ~t_VectorSite_VectorSite();

  void m_OnRender(t_mojo_graphics_Canvas* l_canvas);
  void m_InitSite();

  t_VectorSite_VectorSite(){
  }
};

#endif
