// Function: FUN_009f35cc
// Address: 009f35cc
// Size: 692 bytes
// Class: GNString
// String references:
//   "%Y-%m-%dT%H:%M:%sZ"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_009f35cc(ulong param_1,uint64_t param_2,long param_3)

{
  int64_t lVar1;
  facet *pfVar2;
  locale *this;
  void**this_00;
  ios *this_01;
  locale *plVar3;
  byte *arg1;
  int64_t *this_ptr;
  int64_t alStack_178 [6];
  uint64_t local_148;
  uint64_t local_140;
  uint64_t local_138;
  uint64_t local_130;
  uint32_t local_128;
  void**local_120;
  uint64_t local_98;
  uint32_t local_90;
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  locale local_38 [8];
  
  std::string::erase(param_1,0xffffffff);
  if (*this_ptr != 0x7ffffffffffffffe) {
    pfVar2 = operator_new(param_1);
    FUN_009fcfd6();
    this_00 = &PTR__istream_025175a8;
    local_120 = &PTR__istream_025175d0;
    std::ios_base::init(&PTR__istream_025175a8);
    local_98 = 0;
    local_90 = 0xffffffff;
    local_120 = (void**)&g_025174b8;
    std::streambuf::streambuf((streambuf *)this_00);
    lVar1 = g_02517450;
    local_148 = 0;
    local_140 = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = 0x18;
    std::locale::classic();
    this = (locale *)std::locale::id::__get();
    std::locale::__install_ctor(this,pfVar2,param_3);
    std::ios_base::getloc();
    plVar3 = local_38;
    std::ios_base::imbue(this);
    std::locale::~locale(this);
    if (*(int64_t **)((int64_t)alStack_178 + lVar1) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)((int64_t)alStack_178 + lVar1) + 0x10))();
      std::locale::locale(this,plVar3);
      std::locale::operator=(this,plVar3);
      std::locale::~locale(this);
    }
    std::locale::~locale(this);
    std::locale::~locale(this);
    std::string::assign((char *)this);
    FUN_009f4b13();
    FUN_00892260();
    if ((*arg1 & 1) != 0) {
      operator_delete(this);
    }
    *(void*)(arg1 + 0x10) = local_70;
    *(void*)(arg1 + 8) = local_78;
    *(void*)arg1 = local_80;
    local_120 = (void**)&g_025174b8;
    this_01 = (ios *)&g_02523790;
    if ((local_148 & 1) != 0) {
      operator_delete(&g_02523790);
    }
    std::streambuf::~streambuf((streambuf *)this_01);
    std::iostream::~iostream((iostream *)this_01);
    std::ios::~ios(this_01);
  }
  return;
}

