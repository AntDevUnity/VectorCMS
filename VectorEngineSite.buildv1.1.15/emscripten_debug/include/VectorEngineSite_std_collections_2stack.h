
#ifndef MX2_VECTORENGINESITE_STD_COLLECTIONS_2STACK_H
#define MX2_VECTORENGINESITE_STD_COLLECTIONS_2STACK_H

#include <bbmonkey.h>
#include "std/std.buildv1.1.15/emscripten_debug/include/std_collections_2stack.h"

#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_std_collections_2container.h"
#include "monkey/monkey.buildv1.1.15/emscripten_debug/include/monkey_types.h"

BB_CLASS(t_VectorSite_VectorUIForm)
BB_CLASS(t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2)
BB_CLASS(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2)

BB_STRUCT(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator)
BB_STRUCT(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator)
BB_CLASS(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2)

void g_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_AddAll_1Tt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_2(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_self,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_values);

struct t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator{
  typedef t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator bb_struct_type;
  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator";}

  bbGCVar<t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2> m__0stack{};
  bbInt m__0index{};
  static void dbEmit(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator*);

  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_stack,bbInt l_index);
  ~t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator();

  void m_Insert(t_VectorSite_VectorUIForm* l_value);
  void m_Erase();
  void m_Current(t_VectorSite_VectorUIForm* l_current);
  t_VectorSite_VectorUIForm* m_Current();
  void m_Bump();
  bbBool m_AtEnd();
  void m_AssertCurrent();

  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator(){
  }

  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator(bbNullCtor_t){
  }
};

int bbCompare(const t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator&x,const t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator&y);

void bbGCMark(const t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator&);

struct t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator{
  typedef t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator bb_struct_type;
  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator";}

  bbGCVar<t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2> m__0stack{};
  bbInt m__0index{};
  static void dbEmit(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*);

  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_stack,bbInt l_index);
  ~t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator();

  void m_Insert(t_VectorSite_VectorUIForm* l_value);
  void m_Erase();
  void m_Current(t_VectorSite_VectorUIForm* l_current);
  t_VectorSite_VectorUIForm* m_Current();
  void m_Bump();
  bbBool m_AtEnd();
  void m_AssertCurrent();

  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator(){
  }

  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator(bbNullCtor_t){
  }
};

int bbCompare(const t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator&x,const t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator&y);

void bbGCMark(const t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator&);

struct t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2 : public bbObject,public virtual t_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2{
  typedef t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2 *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2";}

  bbArray<bbGCVar<t_VectorSite_VectorUIForm>> m__0data{};
  bbInt m__0length{};

  void gcMark();
  void dbEmit();

  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_values);
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2(t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2* l_values);
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_values);
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2(bbArray<bbGCVar<t_VectorSite_VectorUIForm>> l_values);
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2(bbInt l_length);
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2();
  ~t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2();

  void m__idxeq(bbInt l_index,t_VectorSite_VectorUIForm* l_value);
  t_VectorSite_VectorUIForm* m__idx(bbInt l_index);
  t_VectorSite_VectorUIForm* m_Top();
  bbArray<bbGCVar<t_VectorSite_VectorUIForm>> m_ToArray();
  void m_Swap(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_stack);
  void m_Swap(bbInt l_index1,bbInt l_index2);
  void m_Sort(bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)> l_compareFunc,bbInt l_lo,bbInt l_hi);
  void m_Sort(bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)> l_compareFunc);
  void m_Sort(bbInt l_ascending);
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* m_Slice(bbInt l_index1,bbInt l_index2);
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* m_Slice(bbInt l_index);
  void m_Set(bbInt l_index,t_VectorSite_VectorUIForm* l_value);
  void m_Resize(bbInt l_length);
  void m_Reserve(bbInt l_capacity);
  bbBool m_RemoveLast(t_VectorSite_VectorUIForm* l_value,bbInt l_start);
  bbInt m_RemoveIf(bbFunction<bbBool(t_VectorSite_VectorUIForm*)> l_condition);
  bbInt m_RemoveEach(t_VectorSite_VectorUIForm* l_value);
  bbBool m_Remove(t_VectorSite_VectorUIForm* l_value,bbInt l_start);
  void m_Push(t_VectorSite_VectorUIForm* l_value);
  t_VectorSite_VectorUIForm* m_Pop();
  bbInt m_Length();
  void m_Insert(bbInt l_index,t_VectorSite_VectorUIForm* l_value);
  t_VectorSite_VectorUIForm* m_Get(bbInt l_index);
  bbInt m_FindLastIndex(t_VectorSite_VectorUIForm* l_value,bbInt l_start);
  bbInt m_FindIndex(t_VectorSite_VectorUIForm* l_value,bbInt l_start);
  void m_Erase(bbInt l_index1,bbInt l_index2);
  void m_Erase(bbInt l_index);
  bbBool m_Empty();
  bbArray<bbGCVar<t_VectorSite_VectorUIForm>> m_Data();
  bbBool m_Contains(t_VectorSite_VectorUIForm* l_value);
  void m_Compact();
  void m_Clear();
  bbInt m_Capacity();
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator m_Backwards();
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator m_All();
  void m_AddAll(bbArray<bbGCVar<t_VectorSite_VectorUIForm>> l_values);
  void m_Add(t_VectorSite_VectorUIForm* l_value);
};

#endif
