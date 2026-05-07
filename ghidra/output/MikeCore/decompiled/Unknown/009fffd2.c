// Function: FUN_009fffd2
// Address: 009fffd2
// Size: 513 bytes
// Class: Unknown


undefined8 FUN_009fffd2(undefined8 param_1,int param_2)

{
  locale *plVar1;
  undefined **this;
  ostream *poVar2;
  undefined8 unaff_RDI;
  ostream aoStack_150 [16];
  ostream aoStack_140 [32];
  ulonglong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined **local_f8;
  ostream aoStack_d8 [104];
  undefined8 local_70;
  undefined4 local_68;
  
  this = &PTR__ostream_02517318;
  local_f8 = &PTR__ostream_02517340;
  std::ios_base::init(&PTR__ostream_02517318);
  local_70 = 0;
  local_68 = 0xffffffff;
  local_f8 = (undefined **)&DAT_025172d0;
  std::streambuf::streambuf((streambuf *)this);
  poVar2 = DAT_02517290;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0x10;
  plVar1 = (locale *)std::locale::classic();
  std::ios_base::getloc();
  std::ios_base::imbue((locale *)this);
  std::locale::~locale((locale *)this);
  if (*(longlong **)(aoStack_140 + (longlong)poVar2) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(aoStack_140 + (longlong)poVar2) + 0x10))();
    std::locale::locale((locale *)this,plVar1);
    std::locale::operator=((locale *)this,plVar1);
    std::locale::~locale((locale *)this);
  }
  std::locale::~locale((locale *)this);
  *(longlong *)(aoStack_150 + (longlong)DAT_02517290) = (longlong)param_2;
  *(undefined4 *)(aoStack_d8 + (longlong)DAT_02517290) = 0x30;
  poVar2 = DAT_02517290;
  std::ostream::operator<<(DAT_02517290,(longlong)param_2);
  FUN_00892260();
  local_f8 = (undefined **)&DAT_025172d0;
  if ((local_120 & 1) != 0) {
    operator_delete(poVar2);
  }
  std::streambuf::~streambuf((streambuf *)poVar2);
  std::ostream::~ostream(poVar2);
  std::ios::~ios((ios *)poVar2);
  return unaff_RDI;
}


