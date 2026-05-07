// Function: FUN_0097f1da
// Address: 0097f1da
// Size: 812 bytes
// Class: Unknown

uint64_t FUN_0097f1da(void)

{
  char cVar1;
  locale *plVar2;
  int64_t *plVar3;
  void**this;
  id *piVar4;
  ios *this_00;
  ushort uVar5;
  uint64_t arg1;
  uint64_t this_ptr;
  id aiStack_168 [16];
  id aiStack_158 [32];
  uint64_t local_138;
  uint64_t local_130;
  uint64_t local_128;
  uint64_t local_120;
  uint32_t local_118;
  void**local_110;
  id aiStack_f0 [104];
  uint64_t local_88;
  uint32_t local_80;
  locale local_48 [8];
  uint32_t local_40;
  uint16_t local_3c;
  uint8_t local_38;
  
  local_40 = (uint32_t)arg1;
  local_3c = (uint16_t)((uint64_t)arg1 >> 0x20);
  this = &PTR__ostream_02517318;
  local_110 = &PTR__ostream_02517340;
  std::ios_base::init(&PTR__ostream_02517318);
  local_88 = 0;
  local_80 = 0xffffffff;
  local_110 = (void**)&g_025172d0;
  std::streambuf::streambuf((streambuf *)this);
  piVar4 = g_02517290;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0x10;
  plVar2 = (locale *)std::locale::classic();
  std::ios_base::getloc();
  std::ios_base::imbue((locale *)this);
  std::locale::~locale((locale *)this);
  if (*(int64_t **)(aiStack_158 + (int64_t)piVar4) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(aiStack_158 + (int64_t)piVar4) + 0x10))();
    std::locale::locale((locale *)this,plVar2);
    std::locale::operator=((locale *)this,plVar2);
    std::locale::~locale((locale *)this);
  }
  uVar5 = (ushort)plVar2;
  std::locale::~locale((locale *)this);
  std::ostream::operator<<((ostream *)this,uVar5);
  piVar4 = g_02517290;
  std::locale::locale((locale *)this);
  std::ios_base::getloc();
  plVar2 = local_48;
  std::ios_base::imbue((locale *)this);
  std::locale::~locale((locale *)this);
  if (*(int64_t **)(aiStack_158 + (int64_t)piVar4) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(aiStack_158 + (int64_t)piVar4) + 0x10))();
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
  *(void*)(aiStack_168 + (int64_t)g_02517290) = 2;
  piVar4 = g_02517290;
  std::ios_base::getloc();
  plVar3 = (int64_t *)std::locale::use_facet(piVar4);
  plVar2 = (locale *)*plVar3;
  cVar1 = (**(code **)(plVar2 + 0x38))();
  std::locale::~locale(plVar2);
  this_00 = (ios *)(uint64_t)(uint)(int)cVar1;
  *(int *)(aiStack_f0 + (int64_t)g_02517290) = (int)cVar1;
  std::ostream::operator<<((ostream *)this_00,uVar5);
  FUN_00892260();
  local_110 = (void**)&g_025172d0;
  if ((local_138 & 1) != 0) {
    operator_delete(this_00);
  }
  std::streambuf::~streambuf((streambuf *)this_00);
  std::ostream::~ostream((ostream *)this_00);
  std::ios::~ios(this_00);
  return this_ptr;
}

