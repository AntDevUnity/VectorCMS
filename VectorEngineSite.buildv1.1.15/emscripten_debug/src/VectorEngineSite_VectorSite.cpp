
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorSite.h"

#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorUI.h"
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorUIForm.h"
#include "mojo/mojo.buildv1.1.15/emscripten_debug/include/mojo_app_2app.h"
#include "mojo/mojo.buildv1.1.15/emscripten_debug/include/mojo_graphics_2canvas.h"
#include "mojo/mojo.buildv1.1.15/emscripten_debug/include/mojo_graphics_2font.h"
#include "std/std.buildv1.1.15/emscripten_debug/include/std_geom_2rect.h"
#include "std/std.buildv1.1.15/emscripten_debug/include/std_geom_2vec2.h"
#include "std/std.buildv1.1.15/emscripten_debug/include/std_graphics_2color.h"

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
  bbDBFrame db_f{"TextW:monkey.types.Int(text:monkey.types.String)","D:/Git/VectorCMS/VectorSite.monkey2"};
  bbDBLocal("text",&l_text);
  bbDBStmt(303106);
  return bbInt((f0.t1=(f0.t0=g_VectorSite_VectorSite_Can.get())->m_Font())->m_TextWidth(l_text));
}

bbInt g_VectorSite_VectorSite_TextH(bbString l_text){
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Canvas* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"TextH:monkey.types.Int(text:monkey.types.String)","D:/Git/VectorCMS/VectorSite.monkey2"};
  bbDBLocal("text",&l_text);
  bbDBStmt(331778);
  return bbInt((f0.t0=g_VectorSite_VectorSite_Can.get())->m_Font()->m_Height());
}

void g_VectorSite_VectorSite_RectImg(t_mojo_graphics_Image* l_img,bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,t_std_graphics_Color l_col){
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Canvas* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"RectImg:Void(img:mojo.graphics.Image,x:monkey.types.Int,y:monkey.types.Int,w:monkey.types.Int,h:monkey.types.Int,col:std.graphics.Color)","D:/Git/VectorCMS/VectorSite.monkey2"};
  bbDBLocal("img",&l_img);
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBLocal("w",&l_w);
  bbDBLocal("h",&l_h);
  bbDBLocal("col",&l_col);
  bbDBStmt(356354);
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_Color(l_col);
  bbDBStmt(364546);
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_DrawRect(bbFloat(l_x),bbFloat(l_y),bbFloat(l_w),bbFloat(l_h),l_img);
}

void g_VectorSite_VectorSite_Rect(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,t_std_graphics_Color l_col){
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Canvas* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Rect:Void(x:monkey.types.Int,y:monkey.types.Int,w:monkey.types.Int,h:monkey.types.Int,col:std.graphics.Color)","D:/Git/VectorCMS/VectorSite.monkey2"};
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBLocal("w",&l_w);
  bbDBLocal("h",&l_h);
  bbDBLocal("col",&l_col);
  bbDBStmt(225288);
  t_std_geom_Rect_1f l_rr=t_std_geom_Rect_1f{bbFloat(l_x),bbFloat(l_y),bbFloat(l_w),bbFloat(l_h)};
  bbDBLocal("rr",&l_rr);
  bbDBStmt(233474);
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_Color(l_col);
  bbDBStmt(241666);
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_DrawRect(l_rr);
}

void g_VectorSite_VectorSite_DrawText(bbString l_text,bbInt l_x,bbInt l_y,t_std_graphics_Color l_col){
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Canvas* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"DrawText:Void(text:monkey.types.String,x:monkey.types.Int,y:monkey.types.Int,col:std.graphics.Color)","D:/Git/VectorCMS/VectorSite.monkey2"};
  bbDBLocal("text",&l_text);
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBLocal("col",&l_col);
  bbDBStmt(266242);
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_Color(l_col);
  bbDBStmt(274434);
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_DrawText(l_text,bbFloat(l_x),bbFloat(l_y),0.0f,0.0f);
}

void t_VectorSite_VectorSite::gcMark(){
  t_mojo_app_Window::gcMark();
  bbGCMark(m_Settings);
  bbGCMark(m_UI);
}

void t_VectorSite_VectorSite::dbEmit(){
  t_mojo_app_Window::dbEmit();
  puts( "[VectorSite.VectorSite]");
  bbDBEmit("Settings",&m_Settings);
  bbDBEmit("UI",&m_UI);
}

t_VectorSite_VectorSite::t_VectorSite_VectorSite(bbString l_title,bbInt l_width,bbInt l_height,t_mojo_app_WindowFlags l_flags):t_mojo_app_Window(l_title,l_width,l_height,l_flags){
  bbDBFrame db_f{"new:Void(title:monkey.types.String,width:monkey.types.Int,height:monkey.types.Int,flags:mojo.app.WindowFlags)","D:/Git/VectorCMS/VectorSite.monkey2"};
  t_VectorSite_VectorSite*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("title",&l_title);
  bbDBLocal("width",&l_width);
  bbDBLocal("height",&l_height);
  bbDBLocal("flags",&l_flags);
  bbDBStmt(126978);
  g_VectorSite_VectorSite_VirRes=t_std_geom_Vec2_1f{bbFloat(l_width),bbFloat(l_height)};
  bbDBStmt(135170);
  g_VectorSite_VectorSite_ClearCol=t_std_graphics_Color{0.0f,0.0f,0.0f,0.0f};
  bbDBStmt(143362);
  this->m_InitSite();
}
t_VectorSite_VectorSite::~t_VectorSite_VectorSite(){
}

void t_VectorSite_VectorSite::m_UpdateUI(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorUI* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"UpdateUI:Void()","D:/Git/VectorCMS/VectorSite.monkey2"};
  t_VectorSite_VectorSite*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(417794);
  (f0.t0=this->m_UI.get())->m_Update();
}

void t_VectorSite_VectorSite::m_RenderUI(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorUI* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"RenderUI:Void()","D:/Git/VectorCMS/VectorSite.monkey2"};
  t_VectorSite_VectorSite*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(442370);
  (f0.t0=this->m_UI.get())->m_Render();
}

void t_VectorSite_VectorSite::m_OnRender(t_mojo_graphics_Canvas* l_canvas){
  struct f0_t : public bbGCFrame{
    t_mojo_app_AppInstance* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"OnRender:Void(canvas:mojo.graphics.Canvas)","D:/Git/VectorCMS/VectorSite.monkey2"};
  t_VectorSite_VectorSite*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("canvas",&l_canvas);
  bbDBStmt(532482);
  g_VectorSite_VectorSite_Can=l_canvas;
  bbDBStmt(540674);
  g_VectorSite_VectorSite_CC=g_VectorSite_VectorSite_Can.get();
  bbDBStmt(548866);
  (f0.t0=g_mojo_app_App.get())->m_RequestRender();
  bbDBStmt(557058);
  l_canvas->m_Clear(g_VectorSite_VectorSite_ClearCol);
  bbDBStmt(565250);
  this->m_DoRender();
}

void t_VectorSite_VectorSite::m_InitSite(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"InitSite:Void()","D:/Git/VectorCMS/VectorSite.monkey2"};
  t_VectorSite_VectorSite*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(167938);
  this->m_UI=bbGCNew<t_VectorSite_VectorUI>();
}

void t_VectorSite_VectorSite::m_EndRender(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Canvas* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"EndRender:Void()","D:/Git/VectorCMS/VectorSite.monkey2"};
  t_VectorSite_VectorSite*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(466946);
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_PopMatrix();
}

void t_VectorSite_VectorSite::m_DrawString(bbString l_txt,bbInt l_x,bbInt l_y){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Canvas* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"DrawString:Void(txt:monkey.types.String,x:monkey.types.Int,y:monkey.types.Int)","D:/Git/VectorCMS/VectorSite.monkey2"};
  t_VectorSite_VectorSite*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("txt",&l_txt);
  bbDBLocal("x",&l_x);
  bbDBLocal("y",&l_y);
  bbDBStmt(491522);
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_DrawText(l_txt,bbFloat(l_x),bbFloat(l_y),0.0f,0.0f);
}

void t_VectorSite_VectorSite::m_DoRender(){
  bbDBFrame db_f{"DoRender:Void()","D:/Git/VectorCMS/VectorSite.monkey2"};
  t_VectorSite_VectorSite*self=this;
  bbDBLocal("Self",&self);
}

void t_VectorSite_VectorSite::m_BeginRender(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_mojo_graphics_Canvas* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"BeginRender:Void()","D:/Git/VectorCMS/VectorSite.monkey2"};
  t_VectorSite_VectorSite*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(385026);
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_PushMatrix();
  bbDBStmt(393218);
  (f0.t0=g_VectorSite_VectorSite_Can.get())->m_Scale((bbFloat(this->m_Width())/g_VectorSite_VectorSite_VirRes.m_x),(bbFloat(this->m_Height())/g_VectorSite_VectorSite_VirRes.m_y));
}
bbString bbDBType(t_VectorSite_VectorSite**){
  return "VectorSite.VectorSite";
}
bbString bbDBValue(t_VectorSite_VectorSite**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorEngineSite_VectorSite_init_f(){
}

struct mx2_VectorEngineSite_VectorSite_roots_t : bbGCRoot{
  void gcMark(){
    bbGCMark(g_VectorSite_VectorSite_CC.get());
    bbGCMark(g_VectorSite_VectorSite_Can.get());
  }
}mx2_VectorEngineSite_VectorSite_roots;
