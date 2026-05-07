// Function: FUN_0097ebcf
// Address: 0097ebcf
// Size: 1018 bytes
// Class: Unknown
// String references:
//   "not-a-date-time"
//   "-infinity"
//   "+infinity"

uint64_t FUN_0097ebcf(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *plVar4;
  void**this;
  ostream *this_00;
  ostream *poVar5;
  int64_t *arg1;
  uint64_t this_ptr;
  uint64_t auStack_138 [6];
  uint64_t local_108;
  uint64_t local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  uint32_t local_e8;
  void**local_e0;
  uint32_t auStack_c0 [26];
  uint64_t local_58;
  uint32_t local_50;
  uint64_t local_48;
  void*local_40;
  
  this = &PTR__ostream_02517318;
  local_e0 = &PTR__ostream_02517340;
  std::ios_base::init(&PTR__ostream_02517318);
  local_58 = 0;
  local_50 = 0xffffffff;
  local_40 = &g_025172a8;
  local_e0 = (void**)&g_025172d0;
  std::streambuf::streambuf((streambuf *)this);
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0x10;
  lVar1 = *arg1;
  this_00 = (ostream *)0x8000000000000000;
  if (lVar1 == -0x8000000000000000) {
    FUN_009ad920(0x8000000000000000,9);
  }
  else {
    this_00 = (ostream *)0x7ffffffffffffffe;
    if (lVar1 == 0x7ffffffffffffffe) {
      FUN_009ad920(0x7ffffffffffffffe,0xf);
    }
    else {
      this_00 = (ostream *)0x7fffffffffffffff;
      if (lVar1 == 0x7fffffffffffffff) {
        FUN_009ad920(0x7fffffffffffffff,9);
      }
      else {
        local_48 = 0;
        iVar3 = FUN_0098c910();
        if (iVar3 == -1) {
          local_48 = CONCAT71(local_48._1_7_,0x2d);
          FUN_009ad920();
        }
        *(void*)((int64_t)auStack_138 + g_02517290) = 2;
        *(void*)((int64_t)auStack_c0 + g_02517290) = 0x30;
        std::ostream::operator<<((ostream *)*arg1,*arg1 / 3600000000);
        FUN_009ad920();
        *(void*)((int64_t)auStack_138 + g_02517290) = 2;
        *(void*)((int64_t)auStack_c0 + g_02517290) = 0x30;
        std::ostream::operator<<((ostream *)0x8888888888888889,*arg1 / 3600000000);
        FUN_009ad920();
        *(void*)((int64_t)auStack_138 + g_02517290) = 2;
        *(void*)((int64_t)auStack_c0 + g_02517290) = 0x30;
        std::ostream::operator<<
                  ((ostream *)((*arg1 / 1000000) % 0x3c),(*arg1 / 1000000) / 0x3c);
        this_00 = (ostream *)(*arg1 % 1000000);
        poVar5 = (ostream *)-(int64_t)this_00;
        if (0 < (int64_t)this_00) {
          poVar5 = this_00;
        }
        if (poVar5 != (ostream *)0x0) {
          plVar4 = (int64_t *)FUN_009ad920(this_00,1);
          lVar1 = *plVar4;
          lVar2 = *(int64_t *)(lVar1 + -0x18);
          *(void*)((int64_t)plVar4 + lVar2 + 0x18) = 6;
          this_00 = *(ostream **)(lVar1 + -0x18);
          *(void*)((int64_t)(plVar4 + 0x12) + (int64_t)this_00) = 0x30;
          std::ostream::operator<<(this_00,lVar2);
        }
      }
    }
  }
  FUN_00892260();
  local_e0 = (void**)&g_025172d0;
  if ((local_108 & 1) != 0) {
    operator_delete(this_00);
  }
  std::streambuf::~streambuf((streambuf *)this_00);
  std::ostream::~ostream(this_00);
  std::ios::~ios((ios *)this_00);
  return this_ptr;
}

