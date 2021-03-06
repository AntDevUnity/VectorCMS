
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_std_collections_2list.h"

#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_VectorUIForm.h"
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_std_collections_2stack.h"
#include "monkey/monkey.buildv1.1.15/windows_debug_mx/include/monkey_debug.h"

extern bbInt invoke(t_VectorSite_VectorUIForm* l_x,t_VectorSite_VectorUIForm* l_y);
extern bbInt invoke(t_VectorSite_VectorUIForm* l_x,t_VectorSite_VectorUIForm* l_y);
void g_std_collections_List_1Tt_VectorSite_VectorUIForm_2_AddAll_1Tt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_2(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_self,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_values){
  bbDBFrame db_f{"AddAll<std.collections.List<VectorSite.VectorUIForm>>:Void(values:std.collections.List<VectorSite.VectorUIForm>)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("values",&l_values);
  bbDBStmt(2273282);
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
      bbDBStmt(2277379);
      l_self->m_AddLast(f2.l_value);
    }
  }
}

void g_std_collections_List_1Tt_VectorSite_VectorUIForm_2_AddAll_1Tt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_2(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_self,t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_values){
  bbDBFrame db_f{"AddAll<std.collections.Stack<VectorSite.VectorUIForm>>:Void(values:std.collections.Stack<VectorSite.VectorUIForm>)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=l_self;
  bbDBLocal("Self",&self);
  bbDBLocal("values",&l_values);
  bbDBStmt(2273282);
  {
    struct f1_t : public bbGCFrame{
      t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_Iterator l_0{};
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
      bbDBStmt(2277379);
      l_self->m_AddLast(f2.l_value);
    }
  }
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node::gcMark(){
  bbGCMark(m__0succ);
  bbGCMark(m__0pred);
  bbGCMark(m__0value);
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node::dbEmit(){
  puts( "[std.collections.List<VectorSite.VectorUIForm>.Node]");
  bbDBEmit("_succ",&m__0succ);
  bbDBEmit("_pred",&m__0pred);
  bbDBEmit("_value",&m__0value);
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node::t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node(t_VectorSite_VectorUIForm* l_value,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_succ){
  bbDBFrame db_f{"new:Void(value:VectorSite.VectorUIForm,succ:std.collections.List<VectorSite.VectorUIForm>.Node)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBLocal("succ",&l_succ);
  bbDBStmt(233475);
  this->m__0value=l_value;
  bbDBStmt(237571);
  this->m__0succ=l_succ;
  bbDBStmt(241667);
  this->m__0pred=l_succ->m__0pred.get();
  bbDBStmt(245763);
  this->m__0pred.get()->m__0succ=this;
  bbDBStmt(249859);
  l_succ->m__0pred=this;
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node::t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node(t_VectorSite_VectorUIForm* l_value){
  bbDBFrame db_f{"new:Void(value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(180227);
  this->m__0value=l_value;
  bbDBStmt(184323);
  this->m__0succ=this;
  bbDBStmt(188419);
  this->m__0pred=this;
}
t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node::~t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node(){
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node::m_Value(t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Value:Void(value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(331779);
  this->m__0value=l_value;
}

t_VectorSite_VectorUIForm* t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node::m_Value(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Value:VectorSite.VectorUIForm()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(323587);
  return this->m__0value.get();
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node::m_Succ(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Succ:std.collections.List<VectorSite.VectorUIForm>.Node()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(274435);
  return this->m__0succ.get();
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node::m_Remove(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Remove:Void()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(376835);
  if(((this->m__0succ.get()->m__0pred.get()!=this)||(this->m__0pred.get()->m__0succ.get()!=this))){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(380931);
  this->m__0succ.get()->m__0pred=this->m__0pred.get();
  bbDBStmt(385027);
  this->m__0pred.get()->m__0succ=this->m__0succ.get();
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node::m_Pred(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Pred:std.collections.List<VectorSite.VectorUIForm>.Node()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(299011);
  return this->m__0pred.get();
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node::m_InsertBefore(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"InsertBefore:Void(node:std.collections.List<VectorSite.VectorUIForm>.Node)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("node",&l_node);
  bbDBStmt(430083);
  this->m_Remove();
  bbDBStmt(438275);
  this->m__0succ=l_node;
  bbDBStmt(442371);
  this->m__0pred=l_node->m__0pred.get();
  bbDBStmt(446467);
  this->m__0pred.get()->m__0succ=this;
  bbDBStmt(450563);
  l_node->m__0pred=this;
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node::m_InsertAfter(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"InsertAfter:Void(node:std.collections.List<VectorSite.VectorUIForm>.Node)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("node",&l_node);
  bbDBStmt(495619);
  this->m_Remove();
  bbDBStmt(503811);
  this->m__0pred=l_node;
  bbDBStmt(507907);
  this->m__0succ=l_node->m__0succ.get();
  bbDBStmt(512003);
  this->m__0succ.get()->m__0pred=this;
  bbDBStmt(516099);
  l_node->m__0succ=this;
}
bbString bbDBType(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node**){
  return "std.collections.List<VectorSite.VectorUIForm>.Node";
}
bbString bbDBValue(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node**p){
  return bbDBObjectValue(*p);
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator::dbEmit(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator*p){
  bbDBEmit("_list",&p->m__0list);
  bbDBEmit("_node",&p->m__0node);
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator::t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node){
  bbDBFrame db_f{"new:Void(list:std.collections.List<VectorSite.VectorUIForm>,node:std.collections.List<VectorSite.VectorUIForm>.Node)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("list",&l_list);
  bbDBLocal("node",&l_node);
  bbDBStmt(610307);
  (*this).m__0list=l_list;
  bbDBStmt(614403);
  (*this).m__0node=l_node;
}
t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator::~t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator(){
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator::m_Insert(t_VectorSite_VectorUIForm* l_value){
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Insert:Void(value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("value",&l_value);
  bbDBStmt(806915);
  (*this).m__0node=bbGCNew<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node>(l_value,f0.t0=(*this).m__0node.get());
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator::m_Erase(){
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Erase:Void()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(761859);
  (*this).m_AssertCurrent();
  bbDBStmt(765955);
  (*this).m__0node=(*this).m__0node.get()->m__0succ.get();
  bbDBStmt(770051);
  (f0.t0=(*this).m__0node.get()->m__0pred.get())->m_Remove();
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator::m_Current(t_VectorSite_VectorUIForm* l_current){
  bbDBFrame db_f{"Current:Void(current:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("current",&l_current);
  bbDBStmt(679939);
  (*this).m_AssertCurrent();
  bbDBStmt(684035);
  (*this).m__0node.get()->m__0value=l_current;
}

t_VectorSite_VectorUIForm* t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator::m_Current(){
  bbDBFrame db_f{"Current:VectorSite.VectorUIForm()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(663555);
  (*this).m_AssertCurrent();
  bbDBStmt(667651);
  return (*this).m__0node.get()->m__0value.get();
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator::m_Bump(){
  bbDBFrame db_f{"Bump:Void()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(708611);
  (*this).m_AssertCurrent();
  bbDBStmt(712707);
  (*this).m__0node=(*this).m__0node.get()->m__0succ.get();
}

bbBool t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator::m_AtEnd(){
  bbDBFrame db_f{"AtEnd:monkey.types.Bool()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(638979);
  return ((*this).m__0node.get()==(*this).m__0list.get()->m__0head.get());
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator::m_AssertCurrent(){
  bbDBFrame db_f{"AssertCurrent:Void()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(577539);
  bbDebugAssert(((*this).m__0node.get()!=(*this).m__0list.get()->m__0head.get()),bbString(L"Invalid list iterator",21));
}
bbString bbDBType(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator*){
  return "std.collections.List<VectorSite.VectorUIForm>.Iterator";
}
bbString bbDBValue(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator&x,const t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator&y){
  if(int t=bbCompare(x.m__0list,y.m__0list)) return t;
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator&t){
  bbGCMark(t.m__0list);
  bbGCMark(t.m__0node);
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::dbEmit(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*p){
  bbDBEmit("_list",&p->m__0list);
  bbDBEmit("_node",&p->m__0node);
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_list,t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node){
  bbDBFrame db_f{"new:Void(list:std.collections.List<VectorSite.VectorUIForm>,node:std.collections.List<VectorSite.VectorUIForm>.Node)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("list",&l_list);
  bbDBLocal("node",&l_node);
  bbDBStmt(897027);
  (*this).m__0list=l_list;
  bbDBStmt(901123);
  (*this).m__0node=l_node;
}
t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::~t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator(){
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::m_Insert(t_VectorSite_VectorUIForm* l_value){
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Insert:Void(value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1093635);
  (*this).m__0node=bbGCNew<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node>(l_value,f0.t0=(*this).m__0node.get()->m__0succ.get());
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::m_Erase(){
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Erase:Void()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(1048579);
  (*this).m_AssertCurrent();
  bbDBStmt(1052675);
  (*this).m__0node=(*this).m__0node.get()->m__0pred.get();
  bbDBStmt(1056771);
  (f0.t0=(*this).m__0node.get()->m__0succ.get())->m_Remove();
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::m_Current(t_VectorSite_VectorUIForm* l_current){
  bbDBFrame db_f{"Current:Void(current:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("current",&l_current);
  bbDBStmt(966659);
  (*this).m_AssertCurrent();
  bbDBStmt(970755);
  (*this).m__0node.get()->m__0value=l_current;
}

t_VectorSite_VectorUIForm* t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::m_Current(){
  bbDBFrame db_f{"Current:VectorSite.VectorUIForm()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(950275);
  (*this).m_AssertCurrent();
  bbDBStmt(954371);
  return (*this).m__0node.get()->m__0value.get();
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::m_Bump(){
  bbDBFrame db_f{"Bump:Void()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(995331);
  (*this).m_AssertCurrent();
  bbDBStmt(999427);
  (*this).m__0node=(*this).m__0node.get()->m__0pred.get();
}

bbBool t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::m_AtEnd(){
  bbDBFrame db_f{"AtEnd:monkey.types.Bool()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(925699);
  return ((*this).m__0node.get()==(*this).m__0list.get()->m__0head.get());
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator::m_AssertCurrent(){
  bbDBFrame db_f{"AssertCurrent:Void()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(864259);
  bbDebugAssert(((*this).m__0node.get()!=(*this).m__0list.get()->m__0head.get()),bbString(L"Invalid list iterator",21));
}
bbString bbDBType(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*){
  return "std.collections.List<VectorSite.VectorUIForm>.BackwardsIterator";
}
bbString bbDBValue(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator&x,const t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator&y){
  if(int t=bbCompare(x.m__0list,y.m__0list)) return t;
  if(int t=bbCompare(x.m__0node,y.m__0node)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator&t){
  bbGCMark(t.m__0list);
  bbGCMark(t.m__0node);
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::gcMark(){
  bbGCMark(m__0head);
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::dbEmit(){
  puts( "[std.collections.List<VectorSite.VectorUIForm>]");
  bbDBEmit("_head",&m__0head);
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::t_std_collections_List_1Tt_VectorSite_VectorUIForm_2(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_values):t_std_collections_List_1Tt_VectorSite_VectorUIForm_2(){
  bbDBFrame db_f{"new:Void(values:std.collections.List<VectorSite.VectorUIForm>)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("values",&l_values);
  bbDBStmt(1253378);
  g_std_collections_List_1Tt_VectorSite_VectorUIForm_2_AddAll_1Tt_std_collections_List_1Tt_VectorSite_VectorUIForm_2_2(this,l_values);
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::t_std_collections_List_1Tt_VectorSite_VectorUIForm_2(t_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2* l_values):t_std_collections_List_1Tt_VectorSite_VectorUIForm_2(){
  bbDBFrame db_f{"new:Void(values:std.collections.Stack<VectorSite.VectorUIForm>)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("values",&l_values);
  bbDBStmt(1232898);
  g_std_collections_List_1Tt_VectorSite_VectorUIForm_2_AddAll_1Tt_std_collections_Stack_1Tt_VectorSite_VectorUIForm_2_2(this,l_values);
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::t_std_collections_List_1Tt_VectorSite_VectorUIForm_2(bbArray<bbGCVar<t_VectorSite_VectorUIForm>> l_values):t_std_collections_List_1Tt_VectorSite_VectorUIForm_2(){
  bbDBFrame db_f{"new:Void(values:VectorSite.VectorUIForm[])","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("values",&l_values);
  bbDBStmt(1212418);
  this->m_AddAll(l_values);
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::t_std_collections_List_1Tt_VectorSite_VectorUIForm_2(){
  bbDBFrame db_f{"new:Void()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1191938);
  this->m__0head=bbGCNew<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node>(((t_VectorSite_VectorUIForm*)0));
}
t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::~t_std_collections_List_1Tt_VectorSite_VectorUIForm_2(){
}

bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_ToArray(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> l_data{};
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_data);
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"ToArray:VectorSite.VectorUIForm[]()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1486856);
  bbInt l_n=this->m_Count();
  bbDBLocal("n",&l_n);
  bbDBStmt(1490952);
  f0.l_data=bbArray<bbGCVar<t_VectorSite_VectorUIForm>>(l_n);
  bbDBLocal("data",&f0.l_data);
  f0.l_node=this->m__0head.get()->m__0succ.get();
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1495042);
  {
    bbDBLoop db_loop;
    bbInt l_i=bbInt(0);
    bbDBLocal("i",&l_i);
    for(;(l_i<l_n);l_i+=1){
      bbDBBlock db_blk;
      bbDBStmt(1499139);
      f0.l_data[l_i]=f0.l_node->m__0value.get();
      bbDBStmt(1503235);
      f0.l_node=f0.l_node->m__0succ.get();
    }
  }
  bbDBStmt(1511426);
  return f0.l_data;
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_Sort(bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)> l_compareFunc){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Sort:Void(compareFunc:monkey.types.Int(VectorSite.VectorUIForm,VectorSite.VectorUIForm))","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("compareFunc",&l_compareFunc);
  bbDBStmt(2383880);
  bbInt l_insize=1;
  bbDBLocal("insize",&l_insize);
  bbDBStmt(2392066);
  {
    bbDBLoop db_loop;
    for(;;){
      struct f1_t : public bbGCFrame{
        t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_p{};
        t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_tail{};
        void gcMark(){
          bbGCMark(l_p);
          bbGCMark(l_tail);
        }
      }f1{};
      bbDBBlock db_blk;
      bbDBStmt(2400265);
      bbInt l_merges=bbInt(0);
      bbDBLocal("merges",&l_merges);
      bbDBStmt(2404361);
      f1.l_tail=this->m__0head.get();
      bbDBLocal("tail",&f1.l_tail);
      bbDBStmt(2408457);
      f1.l_p=this->m__0head.get()->m__0succ.get();
      bbDBLocal("p",&f1.l_p);
      bbDBStmt(2416643);
      {
        bbDBLoop db_loop;
        while((f1.l_p!=this->m__0head.get())){
          struct f2_t : public bbGCFrame{
            t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_q{};
            void gcMark(){
              bbGCMark(l_q);
            }
          }f2{};
          bbDBBlock db_blk;
          bbDBStmt(2420740);
          l_merges+=1;
          bbDBStmt(2424842);
          f2.l_q=f1.l_p->m__0succ.get();
          bbDBLocal("q",&f2.l_q);
          bbInt l_qsize=l_insize;
          bbDBLocal("qsize",&l_qsize);
          bbInt l_psize=1;
          bbDBLocal("psize",&l_psize);
          bbDBStmt(2433028);
          {
            bbDBLoop db_loop;
            while(((l_psize<l_insize)&&(f2.l_q!=this->m__0head.get()))){
              bbDBBlock db_blk;
              bbDBStmt(2437125);
              l_psize+=1;
              bbDBStmt(2441221);
              f2.l_q=f2.l_q->m__0succ.get();
            }
          }
          bbDBStmt(2453508);
          {
            bbDBLoop db_loop;
            for(;;){
              struct f3_t : public bbGCFrame{
                t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_t{};
                void gcMark(){
                  bbGCMark(l_t);
                }
              }f3{};
              bbDBBlock db_blk;
              bbDBStmt(2457611);
              bbDBLocal("t",&f3.l_t);
              bbDBStmt(2461701);
              if(((bbBool(l_psize)&&bbBool(l_qsize))&&(f2.l_q!=this->m__0head.get()))){
                struct f4_t : public bbGCFrame{
                  t_VectorSite_VectorUIForm* t0{};
                  t_VectorSite_VectorUIForm* t1{};
                  void gcMark(){
                    bbGCMark(t0);
                    bbGCMark(t1);
                  }
                }f4{};
                bbDBBlock db_blk;
                bbDBStmt(2465804);
                bbInt l_cc=l_compareFunc(f4.t0=f1.l_p->m__0value.get(),f4.t1=f2.l_q->m__0value.get());
                bbDBLocal("cc",&l_cc);
                bbDBStmt(2469894);
                if((l_cc<=bbInt(0))){
                  bbDBBlock db_blk;
                  bbDBStmt(2473991);
                  f3.l_t=f1.l_p;
                  bbDBStmt(2478087);
                  f1.l_p=f1.l_p->m__0succ.get();
                  bbDBStmt(2482183);
                  l_psize-=1;
                }else{
                  bbDBStmt(2486278);
                  bbDBBlock db_blk;
                  bbDBStmt(2490375);
                  f3.l_t=f2.l_q;
                  bbDBStmt(2494471);
                  f2.l_q=f2.l_q->m__0succ.get();
                  bbDBStmt(2498567);
                  l_qsize-=1;
                }
              }else if(bbDBStmt(2506757),bbBool(l_psize)){
                bbDBBlock db_blk;
                bbDBStmt(2510854);
                f3.l_t=f1.l_p;
                bbDBStmt(2514950);
                f1.l_p=f1.l_p->m__0succ.get();
                bbDBStmt(2519046);
                l_psize-=1;
              }else if(bbDBStmt(2523141),(bbBool(l_qsize)&&(f2.l_q!=this->m__0head.get()))){
                bbDBBlock db_blk;
                bbDBStmt(2527238);
                f3.l_t=f2.l_q;
                bbDBStmt(2531334);
                f2.l_q=f2.l_q->m__0succ.get();
                bbDBStmt(2535430);
                l_qsize-=1;
              }else{
                bbDBStmt(2539525);
                bbDBBlock db_blk;
                bbDBStmt(2543622);
                break;
              }
              bbDBStmt(2551813);
              f3.l_t->m__0pred=f1.l_tail;
              bbDBStmt(2555909);
              f1.l_tail->m__0succ=f3.l_t;
              bbDBStmt(2560005);
              f1.l_tail=f3.l_t;
            }
          }
          bbDBStmt(2568196);
          f1.l_p=f2.l_q;
        }
      }
      bbDBStmt(2576387);
      f1.l_tail->m__0succ=this->m__0head.get();
      bbDBStmt(2580483);
      this->m__0head.get()->m__0pred=f1.l_tail;
      bbDBStmt(2588675);
      if((l_merges<=1)){
        bbDBBlock db_blk;
        return;
      }
      bbDBStmt(2596867);
      l_insize*=2;
    }
  }
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_Sort(bbInt l_ascending){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Sort:Void(ascending:monkey.types.Int)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("ascending",&l_ascending);
  bbDBStmt(2330626);
  if(bbBool(l_ascending)){
    struct f1_t : public bbGCFrame{
      bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)> t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(2334723);
    struct lambda0 : public bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)>::Rep{
      t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_self;
      lambda0(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_self):l_self(l_self){
      }
      bbInt invoke(t_VectorSite_VectorUIForm* l_x,t_VectorSite_VectorUIForm* l_y){
        bbDBFrame db_f{"?????:monkey.types.Int(x:VectorSite.VectorUIForm,y:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/list.monkey2"};
        bbDBLocal("x",&l_x);
        bbDBLocal("y",&l_y);
        bbDBStmt(2338820);
        return bbCompare(l_x,l_y);
      }
      void gcMark(){
        bbGCMark(l_self);
      }
    };
    this->m_Sort(f1.t0=bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)>(new lambda0(this)));
  }else{
    bbDBStmt(2347010);
    struct f1_t : public bbGCFrame{
      bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)> t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(2351107);
    struct lambda1 : public bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)>::Rep{
      t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_self;
      lambda1(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2* l_self):l_self(l_self){
      }
      bbInt invoke(t_VectorSite_VectorUIForm* l_x,t_VectorSite_VectorUIForm* l_y){
        bbDBFrame db_f{"?????:monkey.types.Int(x:VectorSite.VectorUIForm,y:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/list.monkey2"};
        bbDBLocal("x",&l_x);
        bbDBLocal("y",&l_y);
        bbDBStmt(2355204);
        return -bbCompare(l_x,l_y);
      }
      void gcMark(){
        bbGCMark(l_self);
      }
    };
    this->m_Sort(f1.t0=bbFunction<bbInt(t_VectorSite_VectorUIForm*,t_VectorSite_VectorUIForm*)>(new lambda1(this)));
  }
}

t_VectorSite_VectorUIForm* t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_RemoveLast(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorUIForm* l_value{};
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t0{};
    void gcMark(){
      bbGCMark(l_value);
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"RemoveLast:VectorSite.VectorUIForm()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(2142210);
  bbDebugAssert(!this->m_Empty(),bbString(L"Debug assert failed",19));
  bbDBStmt(2150408);
  f0.l_value=this->m__0head.get()->m__0pred.get()->m__0value.get();
  bbDBLocal("value",&f0.l_value);
  bbDBStmt(2154498);
  (f0.t0=this->m__0head.get()->m__0pred.get())->m_Remove();
  bbDBStmt(2158594);
  return f0.l_value;
}

bbBool t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_RemoveLast(t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"RemoveLast:monkey.types.Bool(value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1851400);
  f0.l_node=this->m_FindLastNode(l_value);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1855490);
  if(!bbBool(f0.l_node)){
    bbDBBlock db_blk;
    return false;
  }
  bbDBStmt(1859586);
  f0.l_node->m_Remove();
  bbDBStmt(1863682);
  return true;
}

bbInt t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_RemoveIf(bbFunction<bbBool(t_VectorSite_VectorUIForm*)> l_condition){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"RemoveIf:monkey.types.Int(condition:monkey.types.Bool(VectorSite.VectorUIForm))","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("condition",&l_condition);
  bbDBStmt(1994760);
  f0.l_node=this->m__0head.get()->m__0succ.get();
  bbDBLocal("node",&f0.l_node);
  bbInt l_n=bbInt(0);
  bbDBLocal("n",&l_n);
  bbDBStmt(1998850);
  {
    bbDBLoop db_loop;
    while((f0.l_node!=this->m__0head.get())){
      struct f1_t : public bbGCFrame{
        t_VectorSite_VectorUIForm* t0{};
        void gcMark(){
          bbGCMark(t0);
        }
      }f1{};
      bbDBBlock db_blk;
      bbDBStmt(2002947);
      if(l_condition(f1.t0=f0.l_node->m__0value.get())){
        struct f2_t : public bbGCFrame{
          t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f2{};
        bbDBBlock db_blk;
        bbDBStmt(2007044);
        f0.l_node=f0.l_node->m__0succ.get();
        bbDBStmt(2011140);
        (f2.t0=f0.l_node->m__0pred.get())->m_Remove();
        bbDBStmt(2015236);
        l_n+=1;
      }else{
        bbDBStmt(2019331);
        bbDBBlock db_blk;
        bbDBStmt(2023428);
        f0.l_node=f0.l_node->m__0succ.get();
      }
    }
  }
  bbDBStmt(2035714);
  return l_n;
}

t_VectorSite_VectorUIForm* t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_RemoveFirst(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorUIForm* l_value{};
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t0{};
    void gcMark(){
      bbGCMark(l_value);
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"RemoveFirst:VectorSite.VectorUIForm()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(2080770);
  bbDebugAssert(!this->m_Empty(),bbString(L"Debug assert failed",19));
  bbDBStmt(2088968);
  f0.l_value=this->m__0head.get()->m__0succ.get()->m__0value.get();
  bbDBLocal("value",&f0.l_value);
  bbDBStmt(2093058);
  (f0.t0=this->m__0head.get()->m__0succ.get())->m_Remove();
  bbDBStmt(2097154);
  return f0.l_value;
}

bbInt t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_RemoveEach(t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"RemoveEach:monkey.types.Int(value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1908744);
  f0.l_node=this->m__0head.get()->m__0succ.get();
  bbDBLocal("node",&f0.l_node);
  bbInt l_n=bbInt(0);
  bbDBLocal("n",&l_n);
  bbDBStmt(1912834);
  {
    bbDBLoop db_loop;
    while((f0.l_node!=this->m__0head.get())){
      bbDBBlock db_blk;
      bbDBStmt(1916931);
      if((f0.l_node->m__0value.get()==l_value)){
        struct f2_t : public bbGCFrame{
          t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t0{};
          void gcMark(){
            bbGCMark(t0);
          }
        }f2{};
        bbDBBlock db_blk;
        bbDBStmt(1921028);
        f0.l_node=f0.l_node->m__0succ.get();
        bbDBStmt(1925124);
        (f2.t0=f0.l_node->m__0pred.get())->m_Remove();
        bbDBStmt(1929220);
        l_n+=1;
      }else{
        bbDBStmt(1933315);
        bbDBBlock db_blk;
        bbDBStmt(1937412);
        f0.l_node=f0.l_node->m__0succ.get();
      }
    }
  }
  bbDBStmt(1949698);
  return l_n;
}

bbBool t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_Remove(t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"Remove:monkey.types.Bool(value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1794056);
  f0.l_node=this->m_FindNode(l_value);
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1798146);
  if(!bbBool(f0.l_node)){
    bbDBBlock db_blk;
    return false;
  }
  bbDBStmt(1802242);
  f0.l_node->m_Remove();
  bbDBStmt(1806338);
  return true;
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_LastNode(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"LastNode:std.collections.List<VectorSite.VectorUIForm>.Node()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(2752514);
  if(!this->m_Empty()){
    bbDBBlock db_blk;
    return this->m__0head.get()->m__0pred.get();
  }
  bbDBStmt(2756610);
  return ((t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node*)0);
}

t_VectorSite_VectorUIForm* t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_Last(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Last:VectorSite.VectorUIForm()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1609730);
  bbDebugAssert(!this->m_Empty(),bbString(L"Debug assert failed",19));
  bbDBStmt(1617922);
  return this->m__0head.get()->m__0pred.get()->m__0value.get();
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_HeadNode(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"HeadNode:std.collections.List<VectorSite.VectorUIForm>.Node()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(2674690);
  return this->m__0head.get();
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_FirstNode(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"FirstNode:std.collections.List<VectorSite.VectorUIForm>.Node()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(2711554);
  if(!this->m_Empty()){
    bbDBBlock db_blk;
    return this->m__0head.get()->m__0succ.get();
  }
  bbDBStmt(2715650);
  return ((t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node*)0);
}

t_VectorSite_VectorUIForm* t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_First(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"First:VectorSite.VectorUIForm()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1556482);
  bbDebugAssert(!this->m_Empty(),bbString(L"Debug assert failed",19));
  bbDBStmt(1564674);
  return this->m__0head.get()->m__0succ.get()->m__0value.get();
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_FindNode(t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"FindNode:std.collections.List<VectorSite.VectorUIForm>.Node(value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(2801672);
  f0.l_node=this->m__0head.get()->m__0succ.get();
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(2805762);
  {
    bbDBLoop db_loop;
    while((f0.l_node!=this->m__0head.get())){
      bbDBBlock db_blk;
      bbDBStmt(2809859);
      if((f0.l_node->m__0value.get()==l_value)){
        bbDBBlock db_blk;
        return f0.l_node;
      }
      bbDBStmt(2813955);
      f0.l_node=f0.l_node->m__0succ.get();
    }
  }
  bbDBStmt(2822146);
  return ((t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node*)0);
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_FindLastNode(t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"FindLastNode:std.collections.List<VectorSite.VectorUIForm>.Node(value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(2867208);
  f0.l_node=this->m__0head.get()->m__0pred.get();
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(2871298);
  {
    bbDBLoop db_loop;
    while((f0.l_node!=this->m__0head.get())){
      bbDBBlock db_blk;
      bbDBStmt(2875395);
      if((f0.l_node->m__0value.get()==l_value)){
        bbDBBlock db_blk;
        return f0.l_node;
      }
      bbDBStmt(2879491);
      f0.l_node=f0.l_node->m__0pred.get();
    }
  }
  bbDBStmt(2887682);
  return ((t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node*)0);
}

bbBool t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_Empty(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Empty:monkey.types.Bool()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1380354);
  return (this->m__0head.get()->m__0succ.get()==this->m__0head.get());
}

bbInt t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_Count(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node{};
    void gcMark(){
      bbGCMark(l_node);
    }
  }f0{};
  bbDBFrame db_f{"Count:monkey.types.Int()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1429512);
  f0.l_node=this->m__0head.get()->m__0succ.get();
  bbDBLocal("node",&f0.l_node);
  bbInt l_n=bbInt(0);
  bbDBLocal("n",&l_n);
  bbDBStmt(1433602);
  {
    bbDBLoop db_loop;
    while((f0.l_node!=this->m__0head.get())){
      bbDBBlock db_blk;
      bbDBStmt(1437699);
      f0.l_node=f0.l_node->m__0succ.get();
      bbDBStmt(1441795);
      l_n+=1;
    }
  }
  bbDBStmt(1449986);
  return l_n;
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_Clear(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Clear:Void()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1646594);
  this->m__0head.get()->m__0succ=this->m__0head.get();
  bbDBStmt(1650690);
  this->m__0head.get()->m__0pred=this->m__0head.get();
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_Backwards(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Backwards:std.collections.List<VectorSite.VectorUIForm>.BackwardsIterator()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1343490);
  return t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_BackwardsIterator{this,f0.t0=this->m__0head.get()->m__0pred.get()};
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_All(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"All:std.collections.List<VectorSite.VectorUIForm>.Iterator()","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1298434);
  return t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Iterator{this,f0.t0=this->m__0head.get()->m__0succ.get()};
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_AddLast(t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node{};
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t0{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"AddLast:std.collections.List<VectorSite.VectorUIForm>.Node(value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1744904);
  f0.l_node=bbGCNew<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node>(l_value,f0.t0=this->m__0head.get());
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1748994);
  return f0.l_node;
}

t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_AddFirst(t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* l_node{};
    t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node* t0{};
    void gcMark(){
      bbGCMark(l_node);
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"AddFirst:std.collections.List<VectorSite.VectorUIForm>.Node(value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1695752);
  f0.l_node=bbGCNew<t_std_collections_List_1Tt_VectorSite_VectorUIForm_2_Node>(l_value,f0.t0=this->m__0head.get()->m__0succ.get());
  bbDBLocal("node",&f0.l_node);
  bbDBStmt(1699842);
  return f0.l_node;
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_AddAll(bbArray<bbGCVar<t_VectorSite_VectorUIForm>> l_values){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"AddAll:Void(values:VectorSite.VectorUIForm[])","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("values",&l_values);
  bbDBStmt(2248706);
  {
    bbDBLoop db_loop;
    bbInt l_0=bbInt(0);
    bbDBLocal("0",&l_0);
    bbInt l_1=l_values.length();
    bbDBLocal("1",&l_1);
    for(;(l_0<l_1);l_0+=1){
      struct f2_t : public bbGCFrame{
        t_VectorSite_VectorUIForm* l_value{};
        void gcMark(){
          bbGCMark(l_value);
        }
      }f2{};
      bbDBBlock db_blk;
      f2.l_value=l_values[l_0].get();
      bbDBLocal("value",&f2.l_value);
      bbDBStmt(2252803);
      this->m_AddLast(f2.l_value);
    }
  }
}

void t_std_collections_List_1Tt_VectorSite_VectorUIForm_2::m_Add(t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Add:Void(value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/list.monkey2"};
  t_std_collections_List_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(2203650);
  this->m_AddLast(l_value);
}
bbString bbDBType(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2**){
  return "std.collections.List<VectorSite.VectorUIForm>";
}
bbString bbDBValue(t_std_collections_List_1Tt_VectorSite_VectorUIForm_2**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorEngineSite_std_collections_2list_init_f(){
}
