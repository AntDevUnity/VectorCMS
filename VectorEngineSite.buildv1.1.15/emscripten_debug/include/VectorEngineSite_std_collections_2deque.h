
#ifndef MX2_VECTORENGINESITE_STD_COLLECTIONS_2DEQUE_H
#define MX2_VECTORENGINESITE_STD_COLLECTIONS_2DEQUE_H

#include <bbmonkey.h>
#include "std/std.buildv1.1.15/emscripten_debug/include/std_collections_2deque.h"

#include "monkey/monkey.buildv1.1.15/emscripten_debug/include/monkey_types.h"
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_std_collections_2container.h"

BB_CLASS(t_VectorSite_VectorUIForm)

BB_STRUCT(t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator)
BB_CLASS(t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2)

struct t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator : public virtual t_std_collections_IIterator_1Tt_VectorSite_VectorUIForm_2{
  typedef t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator bb_struct_type;
  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator";}

  bbGCVar<t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2> m__0deque{};
  bbInt m__0index{};
  static void dbEmit(t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator*);

  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator(t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2* l_deque,bbInt l_index);
  ~t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator();

  void m_Insert(t_VectorSite_VectorUIForm* l_value);
  void m_Erase();
  void m_Current(t_VectorSite_VectorUIForm* l_current);
  t_VectorSite_VectorUIForm* m_Current();
  void m_Bump();
  bbBool m_AtEnd();
  void m_AssertCurrent();

  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator(){
  }

  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator(bbNullCtor_t){
  }
};

int bbCompare(const t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator&x,const t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator&y);

void bbGCMark(const t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator&);

struct t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2 : public bbObject,public virtual t_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2{
  typedef t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2 *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2";}

  bbArray<bbGCVar<t_VectorSite_VectorUIForm>> m__0data{};
  bbInt m__0head{};
  bbInt m__0tail{};

  void gcMark();
  void dbEmit();

  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2(bbInt l_length);
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2();
  ~t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2();

  void m__idxeq(bbInt l_index,t_VectorSite_VectorUIForm* l_value);
  t_VectorSite_VectorUIForm* m__idx(bbInt l_index);
  bbArray<bbGCVar<t_VectorSite_VectorUIForm>> m_ToArray();
  void m_Set(bbInt l_index,t_VectorSite_VectorUIForm* l_value);
  void m_Reserve(bbInt l_capacity);
  t_VectorSite_VectorUIForm* m_RemoveLast();
  t_VectorSite_VectorUIForm* m_RemoveFirst();
  void m_PushLast(t_VectorSite_VectorUIForm* l_value);
  void m_PushFirst(t_VectorSite_VectorUIForm* l_value);
  t_VectorSite_VectorUIForm* m_PopLast();
  t_VectorSite_VectorUIForm* m_PopFirst();
  void m_Normalize(bbInt l_capacity);
  bbInt m_Length();
  t_VectorSite_VectorUIForm* m_Last();
  t_VectorSite_VectorUIForm* m_Get(bbInt l_index);
  t_VectorSite_VectorUIForm* m_First();
  bbBool m_Empty();
  bbArray<bbGCVar<t_VectorSite_VectorUIForm>> m_Data();
  void m_Clear();
  bbInt m_Capacity();
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator m_All();
  void m_AddLast(t_VectorSite_VectorUIForm* l_value);
  void m_AddFirst(t_VectorSite_VectorUIForm* l_value);
};

#endif
