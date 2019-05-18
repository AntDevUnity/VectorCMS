
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorSite.h"

#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorUI.h"
#include "VectorEngineSite.buildv1.1.15/windows_release_mx/include/VectorEngineSite_VectorUIForm.h"
#include "mojo/mojo.buildv1.1.15/windows_release_mx/include/mojo_app_2app.h"
#include "mojo/mojo.buildv1.1.15/windows_release_mx/include/mojo_graphics_2canvas.h"
#include "mojo/mojo.buildv1.1.15/windows_release_mx/include/mojo_graphics_2font.h"
#include "std/std.buildv1.1.15/windows_release_mx/include/std_geom_2rect.h"
#include "std/std.buildv1.1.15/windows_release_mx/include/std_geom_2vec2.h"
#include "std/std.buildv1.1.15/windows_release_mx/include/std_graphics_2color.h"

bbGCVar<t_mojo_graphics_Canvas> g_VectorSite_VectorSite_CC;
bbGCVar<t_mojo_graphics_Canvas> g_VectorSite_VectorSite_Can;
t_std_graphics_Color g_VectorSite_VectorSite_ClearCol;
t_std_geom_Vec2_1f g_VectorSite_VectorSite_VirRes;

bbInt g_VectorSite_VectorSite_TextW(bbString l_text){
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Canvas* t0{};
    t_mojo_graphics_Font* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  return bbInt((f0.t1=(f0.t0=g_VectorSite_VectorSite_Can.get())->m_Font())->m_TextWidth(l_text));
}

bbInt g_VectorSite_VectorSite_TextH(bbString l_text){
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Canvas* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  return bbInt((f0.t0=g_VectorSite_VectorSite_Can.get())->m_Font()->m_Height());
}

void g_VectorSite_VectorSite_RectImg(t_mojo_graphics_Image* l_img,bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,t_std_graphics_Color l_col){
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Canvas* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_Color(l_col);
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_DrawRect(bbFloat(l_x),bbFloat(l_y),bbFloat(l_w),bbFloat(l_h),l_img);
}

void g_VectorSite_VectorSite_Rect(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,t_std_graphics_Color l_col){
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Canvas* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  t_std_geom_Rect_1f l_rr=t_std_geom_Rect_1f{bbFloat(l_x),bbFloat(l_y),bbFloat(l_w),bbFloat(l_h)};
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_Color(l_col);
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_DrawRect(bbFloat(l_x),bbFloat(l_y),bbFloat(l_w),bbFloat(l_h));
}

void g_VectorSite_VectorSite_DrawText(bbString l_text,bbInt l_x,bbInt l_y,t_std_graphics_Color l_col){
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Canvas* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_Color(l_col);
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_DrawText(l_text,bbFloat(l_x),bbFloat(l_y),0.0f,0.0f);
}

void t_VectorSite_VectorSite::gcMark(){
  t_mojo_app_Window::gcMark();
  bbGCMark(m_Settings);
  bbGCMark(m_UI);
}

t_VectorSite_VectorSite::t_VectorSite_VectorSite(bbString l_title,bbInt l_width,bbInt l_height,t_mojo_app_WindowFlags l_flags):t_mojo_app_Window(l_title,l_width,l_height,l_flags){
  g_VectorSite_VectorSite_VirRes=t_std_geom_Vec2_1f{bbFloat(l_width),bbFloat(l_height)};
  g_VectorSite_VectorSite_ClearCol=t_std_graphics_Color{0.0f,0.0f,0.0f,0.0f};
  this->m_InitSite();
}
t_VectorSite_VectorSite::~t_VectorSite_VectorSite(){
}

void t_VectorSite_VectorSite::m_UpdateUI(){
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorUI* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (f0.t0=this->m_UI.get())->m_Update();
}

void t_VectorSite_VectorSite::m_RenderUI(){
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorUI* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (f0.t0=this->m_UI.get())->m_Render();
}

void t_VectorSite_VectorSite::m_OnRender(t_mojo_graphics_Canvas* l_canvas){
  struct f0_t : public bbGCFrame{
    t_mojo_app_AppInstance* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  g_VectorSite_VectorSite_Can=l_canvas;
  g_VectorSite_VectorSite_CC=g_VectorSite_VectorSite_Can.get();
  (f0.t0=g_mojo_app_App.get())->m_RequestRender();
  l_canvas->m_Clear(g_VectorSite_VectorSite_ClearCol);
  this->m_DoRender();
}

void t_VectorSite_VectorSite::m_InitSite(){
  this->m_UI=bbGCNew<t_VectorSite_VectorUI>();
}

void t_VectorSite_VectorSite::m_EndRender(){
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Canvas* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_PopMatrix();
}

void t_VectorSite_VectorSite::m_DrawString(bbString l_txt,bbInt l_x,bbInt l_y){
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Canvas* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_DrawText(l_txt,bbFloat(l_x),bbFloat(l_y),0.0f,0.0f);
}

void t_VectorSite_VectorSite::m_DoRender(){
}

void t_VectorSite_VectorSite::m_BeginRender(){
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Canvas* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_PushMatrix();
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_Scale((bbFloat(this->m_Width())/g_VectorSite_VectorSite_VirRes.m_x),(bbFloat(this->m_Height())/g_VectorSite_VectorSite_VirRes.m_y));
}

void mx2_VectorEngineSite_VectorSite_init_f(){
}

struct mx2_VectorEngineSite_VectorSite_roots_t : bbGCRoot{
  void gcMark(){
    bbGCMark(g_VectorSite_VectorSite_CC.get());
    bbGCMark(g_VectorSite_VectorSite_Can.get());
  }
}mx2_VectorEngineSite_VectorSite_roots;
