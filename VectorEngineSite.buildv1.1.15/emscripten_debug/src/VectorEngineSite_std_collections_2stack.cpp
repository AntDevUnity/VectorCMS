
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_std_collections_2stack.h"

#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_VectorUIForm.h"
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_std_collections_2deque.h"
#include "VectorEngineSite.buildv1.1.15/emscripten_debug/include/VectorEngineSite_std_collections_2list.h"
#include "monkey/monkey.buildv1.1.15/emscripten_debug/include/monkey_debug.h"

extern bbInt invoke(t_VectorSite_VectorUIForm* l_x,t_VectorSite_VectorUIForm* l_y);
extern bbInt invoke(t_VectorSite_VectorUIForm* l_x,t_VectorSite_VectorUIForm* l_y);
extern bbInt g_monkey_math_Max_1i(bbInt l_x,bbInt l_y);
void g_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_AddAll_1Tt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_2(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_self,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_values){
  bbDBFrame db_f{"AddAll<std.collections.List<VectorSite.VectorUIForm>>:Void(values:std.collections.List<VectorSite.VectorUIForm>)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("values",&l_values);
  bbDBStmt(1986562);
  {
    struct f1_t : public bbGCFrame{
      t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator l_0{};
      void gcMark(){
        bbGCMark(l_0);
      }
    }f1{};
    bbDBLoop db_loop;
    f1.l_0=l_values->m_All();
    bbDBLocal("0",&f1.l_0);
    for(;!f1.l_0.m_AtEnd();f1.l_0.m_Bump()){
      struct f2_t : public bbGCFrame{
        t_VectorSite_VectorUIForm* l_value{};
        void gcMark(){
          bbGCMark(l_value);
        }
      }f2{};
      bbDBBlock db_blk;
      f2.l_value=f1.l_0.m_Current();
      bbDBLocal("value",&f2.l_value);
      bbDBStmt(1990659);
      l_self->m_Add(f2.l_value);
    }
  }
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator::dbEmit(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator*p){
  bbDBEmit("_stack",&p->m__0stack);
  bbDBEmit("_index",&p->m__0index);
}

t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator::t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_stack,bbInt l_index){
  bbDBFrame db_f{"new:Void(stack:std.collections.Stack<VectorSite.VectorUIForm>,index:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("stack",&l_stack);
  bbDBLocal("index",&l_index);
  bbDBStmt(167939);
  (*this).m__0stack=l_stack;
  bbDBStmt(172035);
  (*this).m__0index=l_index;
}
t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator::~t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator(){
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator::m_Insert(t_VectorSite_VectorUIForm* l_value){
  struct f0_t : public bbGCFrame{
    t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Insert:Void(value:VectorSite.VectorUIForm)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("value",&l_value);
  bbDBStmt(360451);
  bbDebugAssert(((*this).m__0index<=(*this).m__0stack.get()->m__0length),bbString(L"Invalid stack iterator",22));
  bbDBStmt(364547);
  (f0.t0=(*this).m__0stack.get())->m_Insert((*this).m__0index,l_value);
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator::m_Erase(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Erase:Void()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(319491);
  (*this).m_AssertCurrent();
  bbDBStmt(323587);
  (f0.t0=(*this).m__0stack.get())->m_Erase((*this).m__0index);
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator::m_Current(t_VectorSite_VectorUIForm* l_current){
  bbDBFrame db_f{"Current:Void(current:VectorSite.VectorUIForm)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("current",&l_current);
  bbDBStmt(241667);
  (*this).m_AssertCurrent();
  bbDBStmt(245763);
  (*this).m__0stack.get()->m__0data[(*this).m__0index]=l_current;
}

t_VectorSite_VectorUIForm* t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator::m_Current(){
  bbDBFrame db_f{"Current:VectorSite.VectorUIForm()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(229379);
  (*this).m_AssertCurrent();
  bbDBStmt(233475);
  return (*this).m__0stack.get()->m__0data[(*this).m__0index].get();
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator::m_Bump(){
  bbDBFrame db_f{"Bump:Void()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(270339);
  (*this).m_AssertCurrent();
  bbDBStmt(274435);
  (*this).m__0index+=1;
}

bbBool t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator::m_AtEnd(){
  bbDBFrame db_f{"AtEnd:monkey.types.Bool()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(204803);
  return ((*this).m__0index>=(*this).m__0stack.get()->m__0length);
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator::m_AssertCurrent(){
  bbDBFrame db_f{"AssertCurrent:Void()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(151555);
  bbDebugAssert(((*this).m__0index<(*this).m__0stack.get()->m__0length),bbString(L"Invalid stack iterator",22));
}
bbString bbDBType(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator*){
  return "std.collections.Stack<VectorSite.VectorUIForm>.Iterator";
}
bbString bbDBValue(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator&x,const t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator&y){
  if(int t=bbCompare(x.m__0stack,y.m__0stack)) return t;
  if(int t=bbCompare(x.m__0index,y.m__0index)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator&t){
  bbGCMark(t.m__0stack);
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::dbEmit(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*p){
  bbDBEmit("_stack",&p->m__0stack);
  bbDBEmit("_index",&p->m__0index);
}

t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_stack,bbInt l_index){
  bbDBFrame db_f{"new:Void(stack:std.collections.Stack<VectorSite.VectorUIForm>,index:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("stack",&l_stack);
  bbDBLocal("index",&l_index);
  bbDBStmt(438275);
  (*this).m__0stack=l_stack;
  bbDBStmt(442371);
  (*this).m__0index=l_index;
}
t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::~t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator(){
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::m_Insert(t_VectorSite_VectorUIForm* l_value){
  struct f0_t : public bbGCFrame{
    t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Insert:Void(value:VectorSite.VectorUIForm)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("value",&l_value);
  bbDBStmt(638979);
  bbDebugAssert(((*this).m__0index<(*this).m__0stack.get()->m__0length),bbString(L"Invalid stack iterator",22));
  bbDBStmt(643075);
  (*this).m__0index+=1;
  bbDBStmt(647171);
  (f0.t0=(*this).m__0stack.get())->m_Insert((*this).m__0index,l_value);
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::m_Erase(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Erase:Void()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(593923);
  (*this).m_AssertCurrent();
  bbDBStmt(598019);
  (f0.t0=(*this).m__0stack.get())->m_Erase((*this).m__0index);
  bbDBStmt(602115);
  (*this).m__0index-=1;
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::m_Current(t_VectorSite_VectorUIForm* l_current){
  bbDBFrame db_f{"Current:Void(current:VectorSite.VectorUIForm)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("current",&l_current);
  bbDBStmt(512003);
  (*this).m_AssertCurrent();
  bbDBStmt(516099);
  (*this).m__0stack.get()->m__0data[(*this).m__0index]=l_current;
}

t_VectorSite_VectorUIForm* t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::m_Current(){
  bbDBFrame db_f{"Current:VectorSite.VectorUIForm()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(499715);
  (*this).m_AssertCurrent();
  bbDBStmt(503811);
  return (*this).m__0stack.get()->m__0data[(*this).m__0index].get();
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::m_Bump(){
  bbDBFrame db_f{"Bump:Void()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(540675);
  (*this).m_AssertCurrent();
  bbDBStmt(544771);
  (*this).m__0index-=1;
}

bbBool t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::m_AtEnd(){
  bbDBFrame db_f{"AtEnd:monkey.types.Bool()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(475139);
  return ((*this).m__0index==-1);
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::m_AssertCurrent(){
  bbDBFrame db_f{"AssertCurrent:Void()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(421891);
  bbDebugAssert(((*this).m__0index>=bbInt(0)),bbString(L"Invalid stack iterator",22));
}
bbString bbDBType(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*){
  return "std.collections.Stack<VectorSite.VectorUIForm>.BackwardsIterator";
}
bbString bbDBValue(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator&x,const t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator&y){
  if(int t=bbCompare(x.m__0stack,y.m__0stack)) return t;
  if(int t=bbCompare(x.m__0index,y.m__0index)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator&t){
  bbGCMark(t.m__0stack);
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::gcMark(){
  bbGCMark(m__0data);
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::dbEmit(){
  puts( "[std.collections.Stack<VectorSite.VectorUIForm>]");
  bbDBEmit("_data",&m__0data);
  bbDBEmit("_length",&m__0length);
}

t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_values){
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t0{};
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"new:Void(values:std.collections.Stack<VectorSite.VectorUIForm>)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("values",&l_values);
  bbDBStmt(868354);
  this->m__0length=l_values->m_Length();
  bbDBStmt(872450);
  this->m__0data=bbArray<bbGCVar<t_VectorSite_VectorUIForm>>(this->m__0length);
  bbDBStmt(876546);
  (f0.t1=l_values->m_Data()).copyTo(f0.t0=this->m__0data,bbInt(0),bbInt(0),this->m__0length);
}

t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2(t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2* l_values){
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t0{};
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"new:Void(values:std.collections.Deque<VectorSite.VectorUIForm>)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("values",&l_values);
  bbDBStmt(843778);
  this->m__0length=l_values->m_Length();
  bbDBStmt(847874);
  this->m__0data=bbArray<bbGCVar<t_VectorSite_VectorUIForm>>(this->m__0length);
  bbDBStmt(851970);
  (f0.t1=l_values->m_Data()).copyTo(f0.t0=this->m__0data,bbInt(0),bbInt(0),this->m__0length);
}

t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_values){
  bbDBFrame db_f{"new:Void(values:std.collections.List<VectorSite.VectorUIForm>)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("values",&l_values);
  bbDBStmt(827394);
  g_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_AddAll_1Tt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_2(this,l_values);
}

t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2(bbArray<bbGCVar<t_VectorSite_VectorUIForm>> l_values){
  bbDBFrame db_f{"new:Void(values:VectorSite.VectorUIForm[])","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("values",&l_values);
  bbDBStmt(811010);
  this->m_AddAll(l_values);
}

t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2(bbInt l_length){
  bbDBFrame db_f{"new:Void(length:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("length",&l_length);
  bbDBStmt(790530);
  this->m__0length=l_length;
  bbDBStmt(794626);
  this->m__0data=bbArray<bbGCVar<t_VectorSite_VectorUIForm>>(this->m__0length);
}

t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2(){
  bbDBFrame db_f{"new:Void()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(774146);
  this->m__0data=bbArray<bbGCVar<t_VectorSite_VectorUIForm>>(10);
}
t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::~t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2(){
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m__idxeq(bbInt l_index,t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"[]=:Void(index:monkey.types.Int,value:VectorSite.VectorUIForm)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBLocal("value",&l_value);
  bbDBStmt(1863682);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<this->m__0length)),bbString(L"Stack index out of range",24));
  bbDBStmt(1871874);
  this->m__0data[l_index]=l_value;
}

t_VectorSite_VectorUIForm* t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m__idx(bbInt l_index){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"[]:VectorSite.VectorUIForm(index:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(1802242);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<this->m__0length)),bbString(L"Stack index out of range",24));
  bbDBStmt(1810434);
  return this->m__0data[l_index].get();
}

t_VectorSite_VectorUIForm* t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Top(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Top:VectorSite.VectorUIForm()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(3166210);
  bbDebugAssert(bbBool(this->m__0length),bbString(L"Stack is empty",14));
  bbDBStmt(3174402);
  return this->m__0data[(this->m__0length-1)].get();
}

bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_ToArray(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"ToArray:VectorSite.VectorUIForm[]()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1040386);
  return (f0.t0=this->m__0data).slice(bbInt(0),this->m__0length);
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Swap(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_stack){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> l_data{};
    void gcMark(){
      bbGCMark(l_data);
    }
  }f0{};
  bbDBFrame db_f{"Swap:Void(stack:std.collections.Stack<VectorSite.VectorUIForm>)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("stack",&l_stack);
  bbDBStmt(2826248);
  f0.l_data=this->m__0data;
  bbDBLocal("data",&f0.l_data);
  bbInt l_length=this->m__0length;
  bbDBLocal("length",&l_length);
  bbDBStmt(2830338);
  this->m__0data=l_stack->m__0data;
  bbDBStmt(2834434);
  this->m__0length=l_stack->m__0length;
  bbDBStmt(2838530);
  l_stack->m__0data=f0.l_data;
  bbDBStmt(2842626);
  l_stack->m__0length=l_length;
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Swap(bbInt l_index1,bbInt l_index2){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorUIForm* l_t{};
    void gcMark(){
      bbGCMark(l_t);
    }
  }f0{};
  bbDBFrame db_f{"Swap:Void(index1:monkey.types.Int,index2:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index1",&l_index1);
  bbDBLocal("index2",&l_index2);
  bbDBStmt(2793474);
  bbDebugAssert(((((l_index1>=bbInt(0))&&(l_index1<this->m__0length))&&(l_index2>=bbInt(0)))&&(l_index2<this->m__0length)),bbString(L"Stack index out of range",24));
  bbDBStmt(2801672);
  f0.l_t=this->m__0data[l_index1].get();
  bbDBLocal("t",&f0.l_t);
  bbDBStmt(2805762);
  this->m__0data[l_index1]=this->m__0data[l_index2].get();
  bbDBStmt(2809858);
  this->m__0data[l_index2]=f0.l_t;
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Sort(bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)> l_compareFunc,bbInt l_lo,bbInt l_hi){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorUIForm* t0{};
    t_VectorSite_VectorUIForm* t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"Sort:Void(compareFunc:monkey.types.Int(VectorSite.VectorUIForm,VectorSite.VectorUIForm),lo:monkey.types.Int,hi:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("compareFunc",&l_compareFunc);
  bbDBLocal("lo",&l_lo);
  bbDBLocal("hi",&l_hi);
  bbDBStmt(2973698);
  if((l_hi<=l_lo)){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(2981890);
  if(((l_lo+1)==l_hi)){
    struct f1_t : public bbGCFrame{
      t_VectorSite_VectorUIForm* t0{};
      t_VectorSite_VectorUIForm* t1{};
      void gcMark(){
        bbGCMark(t0);
        bbGCMark(t1);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(2985987);
    if((l_compareFunc(f1.t0=this->m__0data[l_hi].get(),f1.t1=this->m__0data[l_lo].get())<bbInt(0))){
      bbDBBlock db_blk;
      this->m_Swap(l_hi,l_lo);
    }
    bbDBStmt(2990083);
    return;
  }
  bbDBStmt(3002376);
  bbInt l_i=((l_lo+l_hi)/2);
  bbDBLocal("i",&l_i);
  bbDBStmt(3010562);
  if((l_compareFunc(f0.t0=this->m__0data[l_i].get(),f0.t1=this->m__0data[l_lo].get())<bbInt(0))){
    bbDBBlock db_blk;
    this->m_Swap(l_i,l_lo);
  }
  bbDBStmt(3018754);
  if((l_compareFunc(f0.t0=this->m__0data[l_hi].get(),f0.t1=this->m__0data[l_i].get())<bbInt(0))){
    struct f1_t : public bbGCFrame{
      t_VectorSite_VectorUIForm* t0{};
      t_VectorSite_VectorUIForm* t1{};
      void gcMark(){
        bbGCMark(t0);
        bbGCMark(t1);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(3022851);
    this->m_Swap(l_hi,l_i);
    bbDBStmt(3026947);
    if((l_compareFunc(f1.t0=this->m__0data[l_i].get(),f1.t1=this->m__0data[l_lo].get())<bbInt(0))){
      bbDBBlock db_blk;
      this->m_Swap(l_i,l_lo);
    }
  }
  bbDBStmt(3039240);
  bbInt l_x=(l_lo+1);
  bbDBLocal("x",&l_x);
  bbDBStmt(3043336);
  bbInt l_y=(l_hi-1);
  bbDBLocal("y",&l_y);
  bbDBStmt(3047426);
  {
    bbDBLoop db_loop;
    do{
      struct f1_t : public bbGCFrame{
        t_VectorSite_VectorUIForm* l_p{};
        t_VectorSite_VectorUIForm* t0{};
        void gcMark(){
          bbGCMark(l_p);
          bbGCMark(t0);
        }
      }f1{};
      bbDBBlock db_blk;
      bbDBStmt(3051529);
      f1.l_p=this->m__0data[l_i].get();
      bbDBLocal("p",&f1.l_p);
      bbDBStmt(3055619);
      {
        bbDBLoop db_loop;
        while((l_compareFunc(f1.t0=this->m__0data[l_x].get(),f1.l_p)<bbInt(0))){
          bbDBBlock db_blk;
          bbDBStmt(3059716);
          l_x+=1;
        }
      }
      bbDBStmt(3067907);
      {
        bbDBLoop db_loop;
        while((l_compareFunc(f1.l_p,f1.t0=this->m__0data[l_y].get())<bbInt(0))){
          bbDBBlock db_blk;
          bbDBStmt(3072004);
          l_y-=1;
        }
      }
      bbDBStmt(3080195);
      if((l_x>l_y)){
        bbDBBlock db_blk;
        break;
      }
      bbDBStmt(3084291);
      if((l_x<l_y)){
        bbDBBlock db_blk;
        bbDBStmt(3088388);
        this->m_Swap(l_x,l_y);
        bbDBStmt(3092484);
        if((l_i==l_x)){
          bbDBBlock db_blk;
          l_i=l_y;
        }else if(bbDBStmt(3092495),(l_i==l_y)){
          bbDBBlock db_blk;
          l_i=l_x;
        }
      }
      bbDBStmt(3100675);
      l_x+=1;
      bbDBStmt(3104771);
      l_y-=1;
    }while(!((l_x>l_y)));
  }
  bbDBStmt(3117058);
  this->m_Sort(l_compareFunc,l_lo,l_y);
  bbDBStmt(3121154);
  this->m_Sort(l_compareFunc,l_x,l_hi);
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Sort(bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)> l_compareFunc){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Sort:Void(compareFunc:monkey.types.Int(VectorSite.VectorUIForm,VectorSite.VectorUIForm))","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("compareFunc",&l_compareFunc);
  bbDBStmt(2953218);
  this->m_Sort(l_compareFunc,bbInt(0),(this->m__0length-1));
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Sort(bbInt l_ascending){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Sort:Void(ascending:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("ascending",&l_ascending);
  bbDBStmt(2904066);
  if(bbBool(l_ascending)){
    struct f1_t : public bbGCFrame{
      bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)> t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(2908163);
    struct lambda0 : public bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)>::Rep{
      t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_self;
      lambda0(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_self):l_self(l_self){
      }
      bbInt invoke(t_VectorSite_VectorUIForm* l_x,t_VectorSite_VectorUIForm* l_y){
        bbDBFrame db_f{"?????:monkey.types.Int(x:VectorSite.VectorUIForm,y:VectorSite.VectorUIForm)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
        bbDBLocal("x",&l_x);
        bbDBLocal("y",&l_y);
        bbDBStmt(2912260);
        return bbCompare(l_x,l_y);
      }
      void gcMark(){
        bbGCMark(l_self);
      }
    };
    this->m_Sort(f1.t0=bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)>(new lambda0(this)));
  }else{
    bbDBStmt(2920450);
    struct f1_t : public bbGCFrame{
      bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)> t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(2924547);
    struct lambda1 : public bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)>::Rep{
      t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_self;
      lambda1(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_self):l_self(l_self){
      }
      bbInt invoke(t_VectorSite_VectorUIForm* l_x,t_VectorSite_VectorUIForm* l_y){
        bbDBFrame db_f{"?????:monkey.types.Int(x:VectorSite.VectorUIForm,y:VectorSite.VectorUIForm)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
        bbDBLocal("x",&l_x);
        bbDBLocal("y",&l_y);
        bbDBStmt(2928644);
        return bbCompare(l_y,l_x);
      }
      void gcMark(){
        bbGCMark(l_self);
      }
    };
    this->m_Sort(f1.t0=bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)>(new lambda1(this)));
  }
}

t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Slice(bbInt l_index1,bbInt l_index2){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t0{};
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"Slice:std.collections.Stack<VectorSite.VectorUIForm>(index1:monkey.types.Int,index2:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index1",&l_index1);
  bbDBLocal("index2",&l_index2);
  bbDBStmt(2658306);
  if((l_index1<bbInt(0))){
    bbDBBlock db_blk;
    bbDBStmt(2662403);
    l_index1=g_monkey_math_Max_1i((l_index1+this->m__0length),bbInt(0));
  }else if(bbDBStmt(2666498),(l_index1>this->m__0length)){
    bbDBBlock db_blk;
    bbDBStmt(2670595);
    l_index1=this->m__0length;
  }
  bbDBStmt(2682882);
  if((l_index2<bbInt(0))){
    bbDBBlock db_blk;
    bbDBStmt(2686979);
    l_index2=g_monkey_math_Max_1i((l_index2+this->m__0length),l_index1);
  }else if(bbDBStmt(2691074),(l_index2>this->m__0length)){
    bbDBBlock db_blk;
    bbDBStmt(2695171);
    l_index2=this->m__0length;
  }else if(bbDBStmt(2699266),(l_index2<l_index1)){
    bbDBBlock db_blk;
    bbDBStmt(2703363);
    l_index2=l_index1;
  }
  bbDBStmt(2715650);
  return bbGCNew<t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2>(f0.t1=(f0.t0=this->m__0data).slice(l_index1,l_index2));
}

t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Slice(bbInt l_index){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Slice:std.collections.Stack<VectorSite.VectorUIForm>(index:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(2637826);
  return this->m_Slice(l_index,this->m__0length);
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Set(bbInt l_index,t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Set:Void(index:monkey.types.Int,value:VectorSite.VectorUIForm)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBLocal("value",&l_value);
  bbDBStmt(1748994);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<this->m__0length)),bbString(L"Stack index out of range",24));
  bbDBStmt(1757186);
  this->m__0data[l_index]=l_value;
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Resize(bbInt l_length){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Resize:Void(length:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("length",&l_length);
  bbDBStmt(1265666);
  bbDebugAssert((l_length>=bbInt(0)),bbString(L"Debug assert failed",19));
  bbDBStmt(1273858);
  {
    bbDBLoop db_loop;
    bbInt l_i=l_length;
    bbDBLocal("i",&l_i);
    for(;(l_i<this->m__0length);l_i+=1){
      bbDBBlock db_blk;
      bbDBStmt(1277955);
      this->m__0data[l_i]=((t_VectorSite_VectorUIForm*)0);
    }
  }
  bbDBStmt(1290242);
  this->m_Reserve(l_length);
  bbDBStmt(1294338);
  this->m__0length=l_length;
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Reserve(bbInt l_capacity){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> l_data{};
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t0{};
    void gcMark(){
      bbGCMark(l_data);
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Reserve:Void(capacity:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("capacity",&l_capacity);
  bbDBStmt(1359874);
  bbDebugAssert((l_capacity>=bbInt(0)),bbString(L"Debug assert failed",19));
  bbDBStmt(1368066);
  if(((f0.t0=this->m__0data).length()>=l_capacity)){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(1376258);
  l_capacity=g_monkey_math_Max_1i((this->m__0length*2),l_capacity);
  bbDBStmt(1380360);
  f0.l_data=bbArray<bbGCVar<t_VectorSite_VectorUIForm>>(l_capacity);
  bbDBLocal("data",&f0.l_data);
  bbDBStmt(1384450);
  (f0.t0=this->m__0data).copyTo(f0.l_data,bbInt(0),bbInt(0),this->m__0length);
  bbDBStmt(1388546);
  this->m__0data=f0.l_data;
}

bbBool t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_RemoveLast(t_VectorSite_VectorUIForm* l_value,bbInt l_start){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"RemoveLast:monkey.types.Bool(value:VectorSite.VectorUIForm,start:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBLocal("start",&l_start);
  bbDBStmt(2371592);
  bbInt l_i=this->m_FindLastIndex(l_value,l_start);
  bbDBLocal("i",&l_i);
  bbDBStmt(2375682);
  if((l_i==-1)){
    bbDBBlock db_blk;
    return false;
  }
  bbDBStmt(2379778);
  this->m_Erase(l_i);
  bbDBStmt(2383874);
  return true;
}

bbInt t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_RemoveIf(bbFunction<bbBool(t_VectorSite_VectorUIForm*)> l_condition){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"RemoveIf:monkey.types.Int(condition:monkey.types.Bool(VectorSite.VectorUIForm))","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("condition",&l_condition);
  bbDBStmt(2514952);
  bbInt l_put=bbInt(0);
  bbDBLocal("put",&l_put);
  bbInt l_n=bbInt(0);
  bbDBLocal("n",&l_n);
  bbDBStmt(2519042);
  {
    bbDBLoop db_loop;
    bbInt l_get=bbInt(0);
    bbDBLocal("get",&l_get);
    for(;(l_get<this->m__0length);l_get+=1){
      struct f2_t : public bbGCFrame{
        t_VectorSite_VectorUIForm* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f2{};
      bbDBBlock db_blk;
      bbDBStmt(2523139);
      if(l_condition(f2.t0=this->m__0data[l_get].get())){
        bbDBBlock db_blk;
        bbDBStmt(2527236);
        l_n+=1;
        bbDBStmt(2531332);
        continue;
      }
      bbDBStmt(2539523);
      this->m__0data[l_put]=this->m__0data[l_get].get();
      bbDBStmt(2543619);
      l_put+=1;
    }
  }
  bbDBStmt(2551810);
  this->m_Resize(l_put);
  bbDBStmt(2555906);
  return l_n;
}

bbInt t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_RemoveEach(t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"RemoveEach:monkey.types.Int(value:VectorSite.VectorUIForm)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(2428936);
  bbInt l_put=bbInt(0);
  bbDBLocal("put",&l_put);
  bbInt l_n=bbInt(0);
  bbDBLocal("n",&l_n);
  bbDBStmt(2433026);
  {
    bbDBLoop db_loop;
    bbInt l_get=bbInt(0);
    bbDBLocal("get",&l_get);
    for(;(l_get<this->m__0length);l_get+=1){
      bbDBBlock db_blk;
      bbDBStmt(2437123);
      if((this->m__0data[l_get].get()==l_value)){
        bbDBBlock db_blk;
        bbDBStmt(2441220);
        l_n+=1;
        bbDBStmt(2445316);
        continue;
      }
      bbDBStmt(2453507);
      this->m__0data[l_put]=this->m__0data[l_get].get();
      bbDBStmt(2457603);
      l_put+=1;
    }
  }
  bbDBStmt(2465794);
  this->m_Resize(l_put);
  bbDBStmt(2469890);
  return l_n;
}

bbBool t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Remove(t_VectorSite_VectorUIForm* l_value,bbInt l_start){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Remove:monkey.types.Bool(value:VectorSite.VectorUIForm,start:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBLocal("start",&l_start);
  bbDBStmt(2306056);
  bbInt l_i=this->m_FindIndex(l_value,l_start);
  bbDBLocal("i",&l_i);
  bbDBStmt(2310146);
  if((l_i==-1)){
    bbDBBlock db_blk;
    return false;
  }
  bbDBStmt(2314242);
  this->m_Erase(l_i);
  bbDBStmt(2318338);
  return true;
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Push(t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Push:Void(value:VectorSite.VectorUIForm)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(3280898);
  this->m_Add(l_value);
}

t_VectorSite_VectorUIForm* t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Pop(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorUIForm* l_value{};
    void gcMark(){
      bbGCMark(l_value);
    }
  }f0{};
  bbDBFrame db_f{"Pop:VectorSite.VectorUIForm()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(3215362);
  bbDebugAssert(bbBool(this->m__0length),bbString(L"Stack is empty",14));
  bbDBStmt(3223554);
  this->m__0length-=1;
  bbDBStmt(3227656);
  f0.l_value=this->m__0data[this->m__0length].get();
  bbDBLocal("value",&f0.l_value);
  bbDBStmt(3231746);
  this->m__0data[this->m__0length]=((t_VectorSite_VectorUIForm*)0);
  bbDBStmt(3235842);
  return f0.l_value;
}

bbInt t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Length(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Length:monkey.types.Int()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1122306);
  return this->m__0length;
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Insert(bbInt l_index,t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t0{};
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"Insert:Void(index:monkey.types.Int,value:VectorSite.VectorUIForm)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBLocal("value",&l_value);
  bbDBStmt(1622018);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<=this->m__0length)),bbString(L"Debug assert failed",19));
  bbDBStmt(1630210);
  this->m_Reserve((this->m__0length+1));
  bbDBStmt(1634306);
  (f0.t1=this->m__0data).copyTo(f0.t0=this->m__0data,l_index,(l_index+1),(this->m__0length-l_index));
  bbDBStmt(1638402);
  this->m__0data[l_index]=l_value;
  bbDBStmt(1642498);
  this->m__0length+=1;
}

t_VectorSite_VectorUIForm* t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Get(bbInt l_index){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Get:VectorSite.VectorUIForm(index:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(1687554);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<this->m__0length)),bbString(L"Stack index out of range",24));
  bbDBStmt(1695746);
  return this->m__0data[l_index].get();
}

bbInt t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_FindLastIndex(t_VectorSite_VectorUIForm* l_value,bbInt l_start){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"FindLastIndex:monkey.types.Int(value:VectorSite.VectorUIForm,start:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBLocal("start",&l_start);
  bbDBStmt(2179074);
  bbDebugAssert(((l_start>=bbInt(0))&&(l_start<=this->m__0length)),bbString(L"Debug assert failed",19));
  bbDBStmt(2187272);
  bbInt l_i=this->m__0length;
  bbDBLocal("i",&l_i);
  bbDBStmt(2191362);
  {
    bbDBLoop db_loop;
    while((l_i>l_start)){
      bbDBBlock db_blk;
      bbDBStmt(2195459);
      l_i-=1;
      bbDBStmt(2199555);
      if((this->m__0data[l_i].get()==l_value)){
        bbDBBlock db_blk;
        return l_i;
      }
    }
  }
  bbDBStmt(2207746);
  return -1;
}

bbInt t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_FindIndex(t_VectorSite_VectorUIForm* l_value,bbInt l_start){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"FindIndex:monkey.types.Int(value:VectorSite.VectorUIForm,start:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBLocal("start",&l_start);
  bbDBStmt(2088962);
  bbDebugAssert(((l_start>=bbInt(0))&&(l_start<=this->m__0length)),bbString(L"Debug assert failed",19));
  bbDBStmt(2097160);
  bbInt l_i=l_start;
  bbDBLocal("i",&l_i);
  bbDBStmt(2101250);
  {
    bbDBLoop db_loop;
    while((l_i<this->m__0length)){
      bbDBBlock db_blk;
      bbDBStmt(2105347);
      if((this->m__0data[l_i].get()==l_value)){
        bbDBBlock db_blk;
        return l_i;
      }
      bbDBStmt(2109443);
      l_i+=1;
    }
  }
  bbDBStmt(2117634);
  return -1;
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Erase(bbInt l_index1,bbInt l_index2){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t0{};
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"Erase:Void(index1:monkey.types.Int,index2:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index1",&l_index1);
  bbDBLocal("index2",&l_index2);
  bbDBStmt(1544194);
  bbDebugAssert((((((l_index1>=bbInt(0))&&(l_index1<=this->m__0length))&&(l_index2>=bbInt(0)))&&(l_index2<=this->m__0length))&&(l_index1<=l_index2)),bbString(L"Debug assert failed",19));
  bbDBStmt(1552386);
  if((l_index1==this->m__0length)){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(1556482);
  (f0.t1=this->m__0data).copyTo(f0.t0=this->m__0data,l_index2,l_index1,(this->m__0length-l_index2));
  bbDBStmt(1560578);
  this->m_Resize(((this->m__0length-l_index2)+l_index1));
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Erase(bbInt l_index){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t0{};
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t1{};
    void gcMark(){
      bbGCMark(t0);
      bbGCMark(t1);
    }
  }f0{};
  bbDBFrame db_f{"Erase:Void(index:monkey.types.Int)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(1466370);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<=this->m__0length)),bbString(L"Debug assert failed",19));
  bbDBStmt(1470466);
  if((l_index==this->m__0length)){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(1478658);
  (f0.t1=this->m__0data).copyTo(f0.t0=this->m__0data,(l_index+1),l_index,((this->m__0length-l_index)-1));
  bbDBStmt(1482754);
  this->m_Resize((this->m__0length-1));
}

bbBool t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Empty(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Empty:monkey.types.Bool()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(913410);
  return (this->m__0length==bbInt(0));
}

bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Data(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Data:VectorSite.VectorUIForm[]()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1085442);
  return this->m__0data;
}

bbBool t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Contains(t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Contains:monkey.types.Bool(value:VectorSite.VectorUIForm)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(2252802);
  return (this->m_FindIndex(l_value,bbInt(0))!=-1);
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Compact(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Compact:Void()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1212418);
  if((this->m__0length!=(f0.t0=this->m__0data).length())){
    struct f1_t : public bbGCFrame{
      bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    this->m__0data=(f1.t0=this->m__0data).slice(bbInt(0),this->m__0length);
  }
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Clear(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Clear:Void()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1413122);
  this->m_Resize(bbInt(0));
}

bbInt t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Capacity(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Capacity:monkey.types.Int()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1187842);
  return (f0.t0=this->m__0data).length();
}

t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Backwards(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Backwards:std.collections.Stack<VectorSite.VectorUIForm>.BackwardsIterator()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1003522);
  return t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator{this,(this->m__0length-1)};
}

t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_All(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"All:std.collections.Stack<VectorSite.VectorUIForm>.Iterator()","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(958466);
  return t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator{this,bbInt(0)};
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_AddAll(bbArray<bbGCVar<t_VectorSite_VectorUIForm>> l_values){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"AddAll:Void(values:VectorSite.VectorUIForm[])","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("values",&l_values);
  bbDBStmt(1961986);
  this->m_Reserve((this->m__0length+l_values.length()));
  bbDBStmt(1966082);
  l_values.copyTo(f0.t0=this->m__0data,bbInt(0),this->m__0length,l_values.length());
  bbDBStmt(1970178);
  this->m_Resize((this->m__0length+l_values.length()));
}

void t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2::m_Add(t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Add:Void(value:VectorSite.VectorUIForm)","D:/Monkey2-v2018.09/modules/std/collections/stack.monkey2"};
  t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1916930);
  this->m_Reserve((this->m__0length+1));
  bbDBStmt(1921026);
  this->m__0data[this->m__0length]=l_value;
  bbDBStmt(1925122);
  this->m__0length+=1;
}
bbString bbDBType(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2**){
  return "std.collections.Stack<VectorSite.VectorUIForm>";
}
bbString bbDBValue(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorEngineSite_std_collections_2stack_init_f(){
}
