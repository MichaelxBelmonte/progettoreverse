// Function: FUN_0097f1da
// Address: 0097f1da
// Size: 812 bytes
// Class: Unknown


undefined8 FUN_0097f1da(void)

{
  char cVar1;
  locale *plVar2;
  longlong *plVar3;
  undefined **this;
  id *piVar4;
  ios *this_00;
  ushort uVar5;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  id aiStack_168 [16];
  id aiStack_158 [32];
  ulonglong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined **local_110;
  id aiStack_f0 [104];
  undefined8 local_88;
  undefined4 local_80;
  locale local_48 [8];
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_38;
  
  local_40 = (undefined4)unaff_RSI;
  local_3c = (undefined2)((ulonglong)unaff_RSI >> 0x20);
  this = &PTR__ostream_02517318;
  local_110 = &PTR__ostream_02517340;
  std::ios_base::init(&PTR__ostream_02517318);
  local_88 = 0;
  local_80 = 0xffffffff;
  local_110 = (undefined **)&DAT_025172d0;
  std::streambuf::streambuf((streambuf *)this);
  piVar4 = DAT_02517290;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0x10;
  plVar2 = (locale *)std::locale::classic();
  std::ios_base::getloc();
  std::ios_base::imbue((locale *)this);
  std::locale::~locale((locale *)this);
  if (*(longlong **)(aiStack_158 + (longlong)piVar4) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(aiStack_158 + (longlong)piVar4) + 0x10))();
    std::locale::locale((locale *)this,plVar2);
    std::locale::operator=((locale *)this,plVar2);
    std::locale::~locale((locale *)this);
  }
  uVar5 = (ushort)plVar2;
  std::locale::~locale((locale *)this);
  std::ostream::operator<<((ostream *)this,uVar5);
  piVar4 = DAT_02517290;
  std::locale::locale((locale *)this);
  std::ios_base::getloc();
  plVar2 = local_48;
  std::ios_base::imbue((locale *)this);
  std::locale::~locale((locale *)this);
  if (*(longlong **)(aiStack_158 + (longlong)piVar4) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(aiStack_158 + (longlong)piVar4) + 0x10))();
    std::locale::locale((locale *)this,plVar2);
    std::locale::operator=((locale *)this,plVar2);
    std::locale::~locale((locale *)this);
  }
  std::locale::~locale((locale *)this);
  std::locale::~locale((locale *)this);
  local_38 = 0x2d;
  FUN_009ad920();
  FUN_0097f5b2();
  local_38 = 0x2d;
  uVar5 = 1;
  FUN_009ad920();
  *(undefined8 *)(aiStack_168 + (longlong)DAT_02517290) = 2;
  piVar4 = DAT_02517290;
  std::ios_base::getloc();
  plVar3 = (longlong *)std::locale::use_facet(piVar4);
  plVar2 = (locale *)*plVar3;
  cVar1 = (**(code **)(plVar2 + 0x38))();
  std::locale::~locale(plVar2);
  this_00 = (ios *)(ulonglong)(uint)(int)cVar1;
  *(int *)(aiStack_f0 + (longlong)DAT_02517290) = (int)cVar1;
  std::ostream::operator<<((ostream *)this_00,uVar5);
  FUN_00892260();
  local_110 = (undefined **)&DAT_025172d0;
  if ((local_138 & 1) != 0) {
    operator_delete(this_00);
  }
  std::streambuf::~streambuf((streambuf *)this_00);
  std::ostream::~ostream((ostream *)this_00);
  std::ios::~ios(this_00);
  return unaff_RDI;
}


