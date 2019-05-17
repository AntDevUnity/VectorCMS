
#ifndef MX2_VECTORENGINESITE_VECTORUIFORM_H
#define MX2_VECTORENGINESITE_VECTORUIFORM_H

#include <bbmonkey.h>

#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorObject.h"
#include "std/std.buildv1.1.15/emscripten_debug/include/std_graphics_2color.h"

BB_CLASS(t_mojo_graphics_Image)
BB_CLASS(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2)

BB_ENUM(t_VectorSite_Button)

BB_CLASS(t_VectorSite_VectorUIForm)

struct t_VectorSite_VectorUIForm : public t_VectorSite_VectorObject{
  typedef t_VectorSite_VectorUIForm *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_VectorSite_VectorUIForm";}

  bbGCVar<t_VectorSite_VectorUIForm> m_Root{};
  bbGCVar<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2> m_Sub{};
  bbGCVar<t_mojo_graphics_Image> m_BackImg{};
  bbString m_Text{};
  t_std_graphics_Color m_TextCol{};

  void init();

  void gcMark();
  void dbEmit();

  ~t_VectorSite_VectorUIForm();

  bbInt m_TextW(bbString l_text);
  bbInt m_TextH(bbString l_text);
  virtual void m_OnUpdate();
  void m_OnMouseMove(bbInt l_x,bbInt l_y,bbInt l_dx,bbInt l_dy);
  void m_OnMouseDown(t_VectorSite_Button l_b);
  virtual void m_OnDraw();
  bbInt m_DrawY();
  bbInt m_DrawX();
  void m_DrawText(bbString l_text,bbInt l_x,bbInt l_y,t_std_graphics_Color l_col);
  void m_DrawRect(bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,t_std_graphics_Color l_col);
  void m_DrawImage(t_mojo_graphics_Image* l_img,bbInt l_x,bbInt l_y,bbInt l_w,bbInt l_h,t_std_graphics_Color l_col);
  t_VectorSite_VectorUIForm* m_Add(t_VectorSite_VectorUIForm* l_add);

  t_VectorSite_VectorUIForm(){
    init();
  }
};

#endif