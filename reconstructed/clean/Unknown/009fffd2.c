// Function: FUN_009fffd2
// Address: 009fffd2
// Size: 513 bytes
// Class: Unknown

uint64_t FUN_009fffd2(uint64_t param_1,int param_2)

{
  locale *plVar1;
  void**this;
  ostream *poVar2;
  uint64_t this_ptr;
  ostream aoStack_150 [16];
  ostream aoStack_140 [32];
  uint64_t local_120;
  uint64_t local_118;
  uint64_t local_110;
  uint64_t local_108;
  uint32_t local_100;
  void**local_f8;
  ostream aoStack_d8 [104];
  uint64_t local_70;
  uint32_t local_68;
  
  this = &PTR__ostream_02517318;
  local_f8 = &PTR__ostream_02517340;
  std::ios_base::init(&PTR__ostream_02517318);
  local_70 = 0;
  local_68 = 0xffffffff;
  local_f8 = (void**)&g_025172d0;
  std::streambuf::streambuf((streambuf *)this);
  poVar2 = g_02517290;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0x10;
  plVar1 = (locale *)std::locale::classic();
  std::ios_base::getloc();
  std::ios_base::imbue((locale *)this);
  std::locale::~locale((locale *)this);
  if (*(int64_t **)(aoStack_140 + (int64_t)poVar2) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(aoStack_140 + (int64_t)poVar2) + 0x10))();
    std::locale::locale((locale *)this,plVar1);
    std::locale::operator=((locale *)this,plVar1);
    std::locale::~locale((locale *)this);
  }
  std::locale::~locale((locale *)this);
  *(int64_t *)(aoStack_150 + (int64_t)g_02517290) = (int64_t)param_2;
  *(void*)(aoStack_d8 + (int64_t)g_02517290) = 0x30;
  poVar2 = g_02517290;
  std::ostream::operator<<(g_02517290,(int64_t)param_2);
  FUN_00892260();
  local_f8 = (void**)&g_025172d0;
  if ((local_120 & 1) != 0) {
    operator_delete(poVar2);
  }
  std::streambuf::~streambuf((streambuf *)poVar2);
  std::ostream::~ostream(poVar2);
  std::ios::~ios((ios *)poVar2);
  return this_ptr;
}

