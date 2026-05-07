// Function: FUN_009b5820
// Address: 009b5820
// Size: 877 bytes
// Class: Unknown

int64_t FUN_009b5820(void *param_1,uint64_t param_2,void*param_3,int64_t *param_4)

{
  code *pcVar1;
  uint64_t uVar2;
  int64_t lVar3;
  streambuf *this;
  uint64_t arg1;
  int64_t lVar4;
  int64_t lVar5;
  int64_t local_68;
  uint8_t local_60;
  uint local_5c;
  int64_t *local_58;
  int local_4c;
  void*local_48;
  void*local_40;
  void*local_38;
  
  local_58 = param_4;
  FUN_009b5cae();
  local_60 = 0;
  local_5c = 0xffffffcc;
  local_68 = -0x3333333333333334;
  std::ios_base::init(param_1);
  this = (streambuf *)&g_025172a8;
  local_38 = &g_025172a8;
  local_40 = &g_025172d0;
  std::streambuf::streambuf((streambuf *)&g_025172a8);
  local_48 = &g_02523790;
  std::ios_base::init(this);
  std::streambuf::streambuf(this);
  pcVar1 = FUN_009b5cae();
  if (local_58 != (int64_t *)0x0) {
    *local_58 = 0;
  }
  if (pcVar1 == 0x0) {
    lVar5 = 0;
    lVar4 = 0;
  }
  else {
    uVar2 = 0xffffffcc;
    lVar4 = 0;
    lVar5 = 0;
    while( true ) {
      local_68 = (uVar2 & 0xff) * 0x101010101010101;
      this = (streambuf *)&local_4c;
      lVar3 = (*pcVar1)(this,&local_68,arg1,param_2);
      if (lVar3 != 0) {
        lVar3 = (int64_t)local_4c;
        this = *(streambuf **)*param_3;
        (**(code **)(this + 0x20))(this,local_4c);
        lVar5 = lVar5 + lVar3;
        lVar4 = lVar4 + 1;
      }
      pcVar1 = FUN_009b5d38();
      if (pcVar1 == 0x0) break;
      uVar2 = (uint64_t)local_5c;
    }
  }
  if (local_58 != (int64_t *)0x0) {
    *local_58 = lVar5;
  }
  std::streambuf::~streambuf(this);
  std::ostream::~ostream((ostream *)this);
  std::ios::~ios((ios *)this);
  std::streambuf::~streambuf(this);
  std::ostream::~ostream((ostream *)this);
  std::ios::~ios((ios *)this);
  return lVar4;
}

