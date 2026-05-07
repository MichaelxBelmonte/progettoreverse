// Function: FUN_009f7870
// Address: 009f7870
// Size: 791 bytes
// Class: Unknown

void* FUN_009f7870(char *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  void*puVar3;
  int64_t *plVar4;
  id *this;
  locale *this_00;
  ios *this_01;
  void*this_ptr;
  void**ppuVar5;
  void*puVar6;
  uint64_t local_208;
  uint64_t uStack_200;
  uint64_t local_1f8;
  uint64_t uStack_1f0;
  uint64_t local_1e8;
  uint64_t uStack_1e0;
  uint64_t local_1d8;
  void**local_1d0;
  void*local_1c8;
  uint64_t local_188;
  uint64_t local_180;
  uint64_t local_178;
  uint64_t local_170;
  uint32_t local_168;
  void**local_160;
  int aiStack_140 [26];
  uint64_t local_d8;
  uint32_t local_d0;
  byte local_c8;
  void**local_b0;
  void**local_a8;
  byte local_80;
  uint8_t local_7f [15];
  void*local_70;
  int local_64;
  void*local_60;
  void*local_58;
  void*local_50;
  void**local_48;
  
  this_ptr[2] = 0;
  this_ptr[1] = 0;
  *this_ptr = 0;
  FUN_009f4e38();
  if (param_2 == '\0') {
    std::string::assign(param_1);
  }
  puVar3 = local_70;
  if ((local_80 & 1) == 0) {
    puVar3 = local_7f;
  }
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1d8 = 0;
  local_a8 = &PTR__ostream_02517318;
  local_b0 = &PTR__ostream_02517340;
  ppuVar5 = (void**)&g_025172a8;
  puVar6 = &g_025172d0;
  local_60 = &g_02523790;
  local_58 = &g_025172e8;
  this = (id *)0x0;
  local_50 = &g_025172d0;
  local_48 = (void**)&g_025172a8;
  do {
    local_64 = (int)this;
    uStack_1f0 = CONCAT44(uStack_1f0._4_4_,local_64);
    local_1d0 = local_a8;
    local_160 = local_b0;
    std::ios_base::init(this);
    local_d8 = 0;
    local_d0 = 0xffffffff;
    local_1d0 = ppuVar5;
    local_160 = (void**)puVar6;
    std::streambuf::streambuf((streambuf *)this);
    local_1c8 = local_60;
    local_170 = 0;
    local_178 = 0;
    local_180 = 0;
    local_188 = 0;
    local_168 = 0x10;
    std::locale::use_facet(this);
    puVar6 = local_1d0[-3];
    iVar2 = *(int *)((int64_t)aiStack_140 + (int64_t)puVar6);
    if (iVar2 == -1) {
      std::ios_base::getloc();
      plVar4 = (int64_t *)std::locale::use_facet(this);
      this_00 = (locale *)*plVar4;
      cVar1 = (**(code **)(this_00 + 0x38))();
      std::locale::~locale(this_00);
      iVar2 = (int)cVar1;
      *(int *)((int64_t)aiStack_140 + (int64_t)puVar6) = iVar2;
    }
    this_01 = (ios *)(uint64_t)(uint)(int)(char)iVar2;
    std::time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>::put
              (this_01,(void*)((int64_t)&local_1d0 + (int64_t)puVar6),&local_208,puVar3);
    FUN_00892260();
    ppuVar5 = local_48;
    puVar6 = local_50;
    FUN_009f7c5a();
    if ((local_c8 & 1) != 0) {
      operator_delete(this_01);
    }
    local_1d0 = ppuVar5;
    local_160 = (void**)puVar6;
    local_1c8 = local_60;
    if ((local_188 & 1) != 0) {
      operator_delete(this_01);
    }
    std::streambuf::~streambuf((streambuf *)this_01);
    std::ostream::~ostream((ostream *)this_01);
    std::ios::~ios(this_01);
    this = (id *)(uint64_t)(local_64 + 1U);
  } while (local_64 + 1U != 7);
  if ((local_80 & 1) != 0) {
    operator_delete((void *)((int64_t)&MACH_HEADER.cputype + 3));
  }
  return this_ptr;
}

