
#ifndef MX2_VECTORENGINESITE_STD_COLLECTIONS_2LIST_H
#define MX2_VECTORENGINESITE_STD_COLLECTIONS_2LIST_H

#include <bbmonkey.h>
#include "std/std.buildv1.1.15/emscripten_debug/include/std_collections_2list.h"

#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_std_collections_2container.h"
#include "monkey/monkey.buildv1.1.15/emscripten_debug/include/monkey_types.h"

BB_CLASS(t_VectorSite_VectorUIForm)
BB_CLASS(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2)

BB_CLASS(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node)
BB_STRUCT(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator)
BB_STRUCT(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator)
BB_CLASS(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2)

void g_std_collections_List_1Tt_VectorSite_VectorUIForm_2_AddAll_1Tt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_2(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_self,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_values);
void g_std_collections_List_1Tt_VectorSite_VectorUIForm_2_AddAll_1Tt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_2(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_self,t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_values);

struct t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node : public bbObject{
  typedef t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node";}

  bbGCVar<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node> m__0succ{};
  bbGCVar<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node> m__0pred{};
  bbGCVar<t_VectorSite_VectorUIForm> m__0value{};

  void gcMark();
  void dbEmit();

  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node(t_VectorSite_VectorUIForm* l_value,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_succ);
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node(t_VectorSite_VectorUIForm* l_value);
  ~t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node();

  void m_Value(t_VectorSite_VectorUIForm* l_value);
  t_VectorSite_VectorUIForm* m_Value();
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* m_Succ();
  void m_Remove();
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* m_Pred();
  void m_InsertBefore(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node);
  void m_InsertAfter(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node);

  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node(){
  }
};

struct t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator{
  typedef t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator bb_struct_type;
  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator";}

  bbGCVar<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2> m__0list{};
  bbGCVar<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node> m__0node{};
  static void dbEmit(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator*);

  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node);
  ~t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator();

  void m_Insert(t_VectorSite_VectorUIForm* l_value);
  void m_Erase();
  void m_Current(t_VectorSite_VectorUIForm* l_current);
  t_VectorSite_VectorUIForm* m_Current();
  void m_Bump();
  bbBool m_AtEnd();
  void m_AssertCurrent();

  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator(){
  }

  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator(bbNullCtor_t){
  }
};

int bbCompare(const t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator&x,const t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator&y);

void bbGCMark(const t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator&);

struct t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator{
  typedef t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator bb_struct_type;
  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator";}

  bbGCVar<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2> m__0list{};
  bbGCVar<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node> m__0node{};
  static void dbEmit(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*);

  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node);
  ~t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator();

  void m_Insert(t_VectorSite_VectorUIForm* l_value);
  void m_Erase();
  void m_Current(t_VectorSite_VectorUIForm* l_current);
  t_VectorSite_VectorUIForm* m_Current();
  void m_Bump();
  bbBool m_AtEnd();
  void m_AssertCurrent();

  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator(){
  }

  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator(bbNullCtor_t){
  }
};

int bbCompare(const t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator&x,const t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator&y);

void bbGCMark(const t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator&);

struct t_std_collections_List_1Tt_VectorSite_VectorUIForm_2 : public bbObject,public virtual t_std_collections_IContainer_1Tt_VectorSite_VectorUIForm_2{
  typedef t_std_collections_List_1Tt_VectorSite_VectorUIForm_2 *bb_object_type;

  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_std_collections_List_1Tt_VectorSite_VectorUIForm_2";}

  bbGCVar<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node> m__0head{};

  void gcMark();
  void dbEmit();

  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_values);
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_values);
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2(bbArray<bbGCVar<t_VectorSite_VectorUIForm>> l_values);
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2();
  ~t_std_collections_List_1Tt_VectorSite_VectorUIForm_2();

  bbArray<bbGCVar<t_VectorSite_VectorUIForm>> m_ToArray();
  void m_Sort(bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)> l_compareFunc);
  void m_Sort(bbInt l_ascending);
  t_VectorSite_VectorUIForm* m_RemoveLast();
  bbBool m_RemoveLast(t_VectorSite_VectorUIForm* l_value);
  bbInt m_RemoveIf(bbFunction<bbBool(t_VectorSite_VectorUIForm*)> l_condition);
  t_VectorSite_VectorUIForm* m_RemoveFirst();
  bbInt m_RemoveEach(t_VectorSite_VectorUIForm* l_value);
  bbBool m_Remove(t_VectorSite_VectorUIForm* l_value);
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* m_LastNode();
  t_VectorSite_VectorUIForm* m_Last();
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* m_HeadNode();
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* m_FirstNode();
  t_VectorSite_VectorUIForm* m_First();
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* m_FindNode(t_VectorSite_VectorUIForm* l_value);
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* m_FindLastNode(t_VectorSite_VectorUIForm* l_value);
  bbBool m_Empty();
  bbInt m_Count();
  void m_Clear();
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator m_Backwards();
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator m_All();
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* m_AddLast(t_VectorSite_VectorUIForm* l_value);
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* m_AddFirst(t_VectorSite_VectorUIForm* l_value);
  void m_AddAll(bbArray<bbGCVar<t_VectorSite_VectorUIForm>> l_values);
  void m_Add(t_VectorSite_VectorUIForm* l_value);
};

#endif
