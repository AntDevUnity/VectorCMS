
#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_std_collections_2deque.h"

#include "VectorEngineSite.buildv1.1.15/windows_debug_mx/include/VectorEngineSite_VectorUIForm.h"
#include "monkey/monkey.buildv1.1.15/windows_debug_mx/include/monkey_debug.h"

extern bbInt g_monkey_math_Max_1i(bbInt l_x,bbInt l_y);
void t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator::dbEmit(t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator*p){
  bbDBEmit("_deque",&p->m__0deque);
  bbDBEmit("_index",&p->m__0index);
}

t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator::t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator(t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2* l_deque,bbInt l_index){
  bbDBFrame db_f{"new:Void(deque:std.collections.Deque<VectorSite.VectorUIForm>,index:monkey.types.Int)","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("deque",&l_deque);
  bbDBLocal("index",&l_index);
  bbDBStmt(176131);
  (*this).m__0deque=l_deque;
  bbDBStmt(180227);
  (*this).m__0index=l_index;
}
t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator::~t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator(){
}

void t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator::m_Insert(t_VectorSite_VectorUIForm* l_value){
  bbDBFrame db_f{"Insert:Void(value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("value",&l_value);
  bbDBStmt(339971);
  bbDB::error(bbString(L"Insert not supported for Deques",31));
}

void t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator::m_Erase(){
  bbDBFrame db_f{"Erase:Void()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(303107);
  bbDB::error(bbString(L"Erase not supported for Deques",30));
}

void t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator::m_Current(t_VectorSite_VectorUIForm* l_current){
  bbDBFrame db_f{"Current:Void(current:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("current",&l_current);
  bbDBStmt(249859);
  (*this).m_AssertCurrent();
  bbDBStmt(253955);
  (*this).m__0deque.get()->m__0data[(*this).m__0index]=l_current;
}

t_VectorSite_VectorUIForm* t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator::m_Current(){
  bbDBFrame db_f{"Current:VectorSite.VectorUIForm()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(237571);
  (*this).m_AssertCurrent();
  bbDBStmt(241667);
  return (*this).m__0deque.get()->m__0data[(*this).m__0index].get();
}

void t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator::m_Bump(){
  struct f0_t : public bbGCFrame{
    t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2* t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Bump:Void()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(278531);
  (*this).m_AssertCurrent();
  bbDBStmt(282627);
  (*this).m__0index+=1;
  bbDBStmt(286723);
  if(((*this).m__0index==(f0.t0=(*this).m__0deque.get())->m_Capacity())){
    bbDBBlock db_blk;
    (*this).m__0index=bbInt(0);
  }
}

bbBool t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator::m_AtEnd(){
  bbDBFrame db_f{"AtEnd:monkey.types.Bool()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(212995);
  return ((*this).m__0index==(*this).m__0deque.get()->m__0tail);
}

void t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator::m_AssertCurrent(){
  bbDBFrame db_f{"AssertCurrent:Void()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(159747);
  bbDebugAssert(((*this).m__0index!=(*this).m__0deque.get()->m__0tail),bbString(L"Invalid deque iterator",22));
}
bbString bbDBType(t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator*){
  return "std.collections.Deque<VectorSite.VectorUIForm>.Iterator";
}
bbString bbDBValue(t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator&x,const t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator&y){
  if(int t=bbCompare(x.m__0deque,y.m__0deque)) return t;
  if(int t=bbCompare(x.m__0index,y.m__0index)) return t;
  return 0;
}

void bbGCMark(const t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator&t){
  bbGCMark(t.m__0deque);
}

void t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::gcMark(){
  bbGCMark(m__0data);
}

void t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::dbEmit(){
  puts( "[std.collections.Deque<VectorSite.VectorUIForm>]");
  bbDBEmit("_data",&m__0data);
  bbDBEmit("_head",&m__0head);
  bbDBEmit("_tail",&m__0tail);
}

t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2(bbInt l_length){
  bbDBFrame db_f{"new:Void(length:monkey.types.Int)","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("length",&l_length);
  bbDBStmt(507906);
  this->m__0tail=l_length;
  bbDBStmt(512002);
  this->m__0data=bbArray<bbGCVar<t_VectorSite_VectorUIForm>>((this->m__0tail+1));
}

t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2(){
  bbDBFrame db_f{"new:Void()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(491522);
  this->m__0data=bbArray<bbGCVar<t_VectorSite_VectorUIForm>>(10);
}
t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::~t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2(){
}

void t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m__idxeq(bbInt l_index,t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"[]=:Void(index:monkey.types.Int,value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBLocal("value",&l_value);
  bbDBStmt(1593346);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<this->m_Length())),bbString(L"Deque index out of range",24));
  bbDBStmt(1601538);
  this->m__0data[((l_index+this->m__0head)%this->m_Capacity())]=l_value;
}

t_VectorSite_VectorUIForm* t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m__idx(bbInt l_index){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"[]:VectorSite.VectorUIForm(index:monkey.types.Int)","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(1548290);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<this->m_Length())),bbString(L"Deque index out of range",24));
  bbDBStmt(1556482);
  return this->m__0data[((l_index+this->m__0head)%this->m_Capacity())].get();
}

bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_ToArray(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> l_data{};
    void gcMark(){
      bbGCMark(l_data);
    }
  }f0{};
  bbDBFrame db_f{"ToArray:VectorSite.VectorUIForm[]()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(798728);
  f0.l_data=bbArray<bbGCVar<t_VectorSite_VectorUIForm>>(this->m_Length());
  bbDBLocal("data",&f0.l_data);
  bbDBStmt(806914);
  if((this->m__0head<=this->m__0tail)){
    struct f1_t : public bbGCFrame{
      bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(811011);
    (f1.t0=this->m__0data).copyTo(f0.l_data,this->m__0head,bbInt(0),this->m_Length());
  }else{
    bbDBStmt(815106);
    struct f1_t : public bbGCFrame{
      bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(819209);
    bbInt l_n=(this->m_Capacity()-this->m__0head);
    bbDBLocal("n",&l_n);
    bbDBStmt(823299);
    (f1.t0=this->m__0data).copyTo(f0.l_data,this->m__0head,bbInt(0),l_n);
    bbDBStmt(827395);
    (f1.t0=this->m__0data).copyTo(f0.l_data,bbInt(0),l_n,this->m__0tail);
  }
  bbDBStmt(839682);
  return f0.l_data;
}

void t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_Set(bbInt l_index,t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Set:Void(index:monkey.types.Int,value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBLocal("value",&l_value);
  bbDBStmt(1503234);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<this->m_Length())),bbString(L"Deque index out of range",24));
  bbDBStmt(1511426);
  this->m__0data[((l_index+this->m__0head)%this->m_Capacity())]=l_value;
}

void t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_Reserve(bbInt l_capacity){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Reserve:Void(capacity:monkey.types.Int)","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("capacity",&l_capacity);
  bbDBStmt(901122);
  bbDebugAssert((l_capacity>=bbInt(0)),bbString(L"Debug assert failed",19));
  bbDBStmt(909314);
  if((this->m_Capacity()>=l_capacity)){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(917506);
  l_capacity=g_monkey_math_Max_1i(((this->m_Length()*2)+this->m_Length()),l_capacity);
  bbDBStmt(925698);
  this->m_Normalize(l_capacity);
}

t_VectorSite_VectorUIForm* t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_RemoveLast(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorUIForm* l_value{};
    void gcMark(){
      bbGCMark(l_value);
    }
  }f0{};
  bbDBFrame db_f{"RemoveLast:VectorSite.VectorUIForm()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1241090);
  bbDebugAssert(!this->m_Empty(),bbString(L"Illegal operation on empty deque",32));
  bbDBStmt(1249282);
  this->m__0tail-=1;
  bbDBStmt(1253378);
  if((this->m__0tail==-1)){
    bbDBBlock db_blk;
    this->m__0tail=(this->m_Capacity()-1);
  }
  bbDBStmt(1257480);
  f0.l_value=this->m__0data[this->m__0tail].get();
  bbDBLocal("value",&f0.l_value);
  bbDBStmt(1261570);
  this->m__0data[this->m__0tail]=((t_VectorSite_VectorUIForm*)0);
  bbDBStmt(1265666);
  return f0.l_value;
}

t_VectorSite_VectorUIForm* t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_RemoveFirst(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    t_VectorSite_VectorUIForm* l_value{};
    void gcMark(){
      bbGCMark(l_value);
    }
  }f0{};
  bbDBFrame db_f{"RemoveFirst:VectorSite.VectorUIForm()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1179650);
  bbDebugAssert(!this->m_Empty(),bbString(L"Illegal operation on empty deque",32));
  bbDBStmt(1187848);
  f0.l_value=this->m__0data[this->m__0head].get();
  bbDBLocal("value",&f0.l_value);
  bbDBStmt(1191938);
  this->m__0data[this->m__0head]=((t_VectorSite_VectorUIForm*)0);
  bbDBStmt(1196034);
  this->m__0head+=1;
  bbDBStmt(1200130);
  if((this->m__0head==this->m_Capacity())){
    bbDBBlock db_blk;
    this->m__0head=bbInt(0);
  }
  bbDBStmt(1204226);
  return f0.l_value;
}

void t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_PushLast(t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"PushLast:Void(value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1142786);
  this->m_AddLast(l_value);
}

void t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_PushFirst(t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"PushFirst:Void(value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1114114);
  this->m_AddFirst(l_value);
}

t_VectorSite_VectorUIForm* t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_PopLast(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"PopLast:VectorSite.VectorUIForm()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1323010);
  return this->m_RemoveLast();
}

t_VectorSite_VectorUIForm* t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_PopFirst(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"PopFirst:VectorSite.VectorUIForm()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1294338);
  return this->m_RemoveFirst();
}

void t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_Normalize(bbInt l_capacity){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> l_data{};
    void gcMark(){
      bbGCMark(l_data);
    }
  }f0{};
  bbDBFrame db_f{"Normalize:Void(capacity:monkey.types.Int)","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("capacity",&l_capacity);
  bbDBStmt(389128);
  bbInt l_length=this->m_Length();
  bbDBLocal("length",&l_length);
  bbDBStmt(397320);
  f0.l_data=bbArray<bbGCVar<t_VectorSite_VectorUIForm>>(l_capacity);
  bbDBLocal("data",&f0.l_data);
  bbDBStmt(405506);
  if((this->m__0head<=this->m__0tail)){
    struct f1_t : public bbGCFrame{
      bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(409603);
    (f1.t0=this->m__0data).copyTo(f0.l_data,this->m__0head,bbInt(0),l_length);
  }else{
    bbDBStmt(413698);
    struct f1_t : public bbGCFrame{
      bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t0{};
      void gcMark(){
        bbGCMark(t0);
      }
    }f1{};
    bbDBBlock db_blk;
    bbDBStmt(417801);
    bbInt l_n=(this->m_Capacity()-this->m__0head);
    bbDBLocal("n",&l_n);
    bbDBStmt(421891);
    (f1.t0=this->m__0data).copyTo(f0.l_data,this->m__0head,bbInt(0),l_n);
    bbDBStmt(425987);
    (f1.t0=this->m__0data).copyTo(f0.l_data,bbInt(0),l_n,this->m__0tail);
  }
  bbDBStmt(438274);
  this->m__0data=f0.l_data;
  bbDBStmt(442370);
  this->m__0tail=l_length;
  bbDBStmt(446466);
  this->m__0head=bbInt(0);
}

bbInt t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_Length(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Length:monkey.types.Int()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(638978);
  if((this->m__0head<=this->m__0tail)){
    bbDBBlock db_blk;
    return (this->m__0tail-this->m__0head);
  }
  bbDBStmt(643074);
  return ((this->m_Capacity()-this->m__0head)+this->m__0tail);
}

t_VectorSite_VectorUIForm* t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_Last(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Last:VectorSite.VectorUIForm()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1413122);
  bbDebugAssert(!this->m_Empty(),bbString(L"Illegal operation on empty deque",32));
  bbDBStmt(1421314);
  return this->m__0data[((this->m__0tail>bbInt(0)) ? (this->m__0tail-1) : (this->m_Capacity()-1))].get();
}

t_VectorSite_VectorUIForm* t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_Get(bbInt l_index){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Get:VectorSite.VectorUIForm(index:monkey.types.Int)","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("index",&l_index);
  bbDBStmt(1458178);
  bbDebugAssert(((l_index>=bbInt(0))&&(l_index<this->m_Length())),bbString(L"Deque index out of range",24));
  bbDBStmt(1466370);
  return this->m__0data[((l_index+this->m__0head)%this->m_Capacity())].get();
}

t_VectorSite_VectorUIForm* t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_First(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"First:VectorSite.VectorUIForm()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(1368066);
  bbDebugAssert(!this->m_Empty(),bbString(L"Illegal operation on empty deque",32));
  bbDBStmt(1376258);
  return this->m__0data[this->m__0head].get();
}

bbBool t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_Empty(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Empty:monkey.types.Bool()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(536578);
  return (this->m__0head==this->m__0tail);
}

bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_Data(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Data:VectorSite.VectorUIForm[]()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(692226);
  if(!bbBool(this->m__0head)){
    bbDBBlock db_blk;
    return this->m__0data;
  }
  bbDBStmt(700418);
  this->m_Normalize(this->m_Capacity());
  bbDBStmt(708610);
  return this->m__0data;
}

void t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_Clear(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"Clear:Void()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(950274);
  if((this->m__0head<=this->m__0tail)){
    bbDBBlock db_blk;
    bbDBStmt(954371);
    {
      bbDBLoop db_loop;
      bbInt l_i=this->m__0head;
      bbDBLocal("i",&l_i);
      for(;(l_i<this->m__0tail);l_i+=1){
        bbDBBlock db_blk;
        bbDBStmt(958468);
        this->m__0data[l_i]=((t_VectorSite_VectorUIForm*)0);
      }
    }
  }else{
    bbDBStmt(966658);
    bbDBBlock db_blk;
    bbDBStmt(970755);
    {
      bbDBLoop db_loop;
      bbInt l_i=bbInt(0);
      bbDBLocal("i",&l_i);
      for(;(l_i<this->m__0tail);l_i+=1){
        bbDBBlock db_blk;
        bbDBStmt(974852);
        this->m__0data[l_i]=((t_VectorSite_VectorUIForm*)0);
      }
    }
    bbDBStmt(983043);
    {
      bbDBLoop db_loop;
      bbInt l_i=this->m__0head;
      bbDBLocal("i",&l_i);
      for(;(l_i<this->m_Capacity());l_i+=1){
        bbDBBlock db_blk;
        bbDBStmt(987140);
        this->m__0data[l_i]=((t_VectorSite_VectorUIForm*)0);
      }
    }
  }
  bbDBStmt(999426);
  this->m__0head=bbInt(0);
  bbDBStmt(1003522);
  this->m__0tail=bbInt(0);
}

bbInt t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_Capacity(){
  bbDBAssertSelf(this);
  struct f0_t : public bbGCFrame{
    bbArray<bbGCVar<t_VectorSite_VectorUIForm>> t0{};
    void gcMark(){
      bbGCMark(t0);
    }
  }f0{};
  bbDBFrame db_f{"Capacity:monkey.types.Int()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(602114);
  return (f0.t0=this->m__0data).length();
}

t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_All(){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"All:std.collections.Deque<VectorSite.VectorUIForm>.Iterator()","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBStmt(757762);
  return t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2_Iterator{this,this->m__0head};
}

void t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_AddLast(t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"AddLast:Void(value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1069058);
  if(((this->m_Length()+1)==this->m_Capacity())){
    bbDBBlock db_blk;
    this->m_Reserve((this->m_Capacity()+1));
  }
  bbDBStmt(1077250);
  this->m__0data[this->m__0tail]=l_value;
  bbDBStmt(1081346);
  this->m__0tail+=1;
  bbDBStmt(1085442);
  if((this->m__0tail==this->m_Capacity())){
    bbDBBlock db_blk;
    this->m__0tail=bbInt(0);
  }
}

void t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2::m_AddFirst(t_VectorSite_VectorUIForm* l_value){
  bbDBAssertSelf(this);
  bbDBFrame db_f{"AddFirst:Void(value:VectorSite.VectorUIForm)","D:/monk2/modules/std/collections/deque.monkey2"};
  t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2*self=this;
  bbDBLocal("Self",&self);
  bbDBLocal("value",&l_value);
  bbDBStmt(1028098);
  if(((this->m_Length()+1)==this->m_Capacity())){
    bbDBBlock db_blk;
    this->m_Reserve((this->m_Capacity()+1));
  }
  bbDBStmt(1036290);
  this->m__0head-=1;
  bbDBStmt(1040386);
  if((this->m__0head==-1)){
    bbDBBlock db_blk;
    this->m__0head=(this->m_Capacity()-1);
  }
  bbDBStmt(1044482);
  this->m__0data[this->m__0head]=l_value;
}
bbString bbDBType(t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2**){
  return "std.collections.Deque<VectorSite.VectorUIForm>";
}
bbString bbDBValue(t_std_collections_Deque_1Tt_VectorSite_VectorUIForm_2**p){
  return bbDBObjectValue(*p);
}

void mx2_VectorEngineSite_std_collections_2deque_init_f(){
}
