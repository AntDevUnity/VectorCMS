
#ifndef MX2_VECTORENGINESITE_VECTORSITE_H
#define MX2_VECTORENGINESITE_VECTORSITE_H

#include <bbmonkey.h>

#include "mojo/mojo.buildv1.1.15/windows_release_mx/include/mojo_app_2window.h"

BB_CLASS(t_VectorSite_VectorUI)
BB_CLASS(t_VectorSite_VectorUIForm)
BB_CLASS(t_mojo_graphics_Canvas)
BB_CLASS(t_mojo_graphics_Image)
BB_STRUCT(t_std_geom_Vec2_1f)
BB_STRUCT(t_std_graphics_Color)

BB_CLASS(t_VectorSite_VectorSite)

extern bbGCVar<t_mojo_graphics_Canvas> g_VectorSite_VectorSite_CC;
extern bbGCVar<t_mojo_graphics_Canvas> g_VectorSite_VectorSite_Can;
extern t_std_graphics_Color g_VectorSite_VectorSite_ClearCol;
extern t_std_geom_Vec2_1f g_VectorSite_VectorSite_VirRes;

bbInt g_VectorSite_VectorSite_TextW(bbString l_text);
bbInt g_VectorSite_VectorSite_TextH(bbString l_text);
void g_VectorSite_VectorSite_RectImg(t_mojo_graphics_Image* l_img,bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,t_std_graphics_Color l_col);
void g_VectorSite_VectorSite_Rect(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,t_std_graphics_Color l_col);
void g_VectorSite_VectorSite_DrawText(bbString l_text,bbInt l_x,bbInt l_y,t_std_graphics_Color l_col);

struct t_VectorSite_VectorSite : public t_mojo_app_Window{
  typedef t_VectorSite_VectorSite *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_VectorSite_VectorSite";}

  bbGCVar<t_VectorSite_VectorUIForm> m_Settings{};
  bbGCVar<t_VectorSite_VectorUI> m_UI{};

  void gcMark();

  t_VectorSite_VectorSite(bbString l_title,bbInt l_width,bbInt l_height,t_mojo_app_WindowFlags l_flags);
  ~t_VectorSite_VectorSite();

  void m_UpdateUI();
  void m_RenderUI();
  void m_OnRender(t_mojo_graphics_Canvas* l_canvas);
  void m_InitSite();
  void m_EndRender();
  void m_DrawString(bbString l_txt,bbInt l_x,bbInt l_y);
  virtual void m_DoRender();
  void m_BeginRender();

  t_VectorSite_VectorSite(){
  }
};

#endif
