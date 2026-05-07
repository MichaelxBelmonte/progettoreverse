// Function: FUN_0091d5a3
// Address: 0091d5a3
// Size: 502 bytes
// Class: Unknown
// String references:
//   ", "

uint64_t FUN_0091d5a3(uint64_t param_1,int64_t *param_2)

{
  uint uVar1;
  void *pvVar2;
  streambuf *this;
  int64_t *arg1;
  uint64_t this_ptr;
  int64_t lVar3;
  byte local_60;
  
  std::ios_base::init(&PTR__ostream_02517318);
  this = (streambuf *)&g_025172a8;
  std::streambuf::streambuf((streambuf *)&g_025172a8);
  lVar3 = *arg1;
  uVar1 = *(uint *)(arg1 + 1);
  while ((lVar3 != *param_2 || (uVar1 != *(uint *)(param_2 + 1)))) {
    if ((lVar3 != *arg1) || (uVar1 != *(uint *)(arg1 + 1))) {
      FUN_009ad920();
    }
    pvVar2 = (void *)(uint64_t)uVar1;
    FUN_0091d85b();
    FUN_009ad920();
    if ((local_60 & 1) != 0) {
      operator_delete(pvVar2);
    }
    this = (streambuf *)(uint64_t)(uVar1 + 1);
    if (uVar1 == 0x3f) {
      this = (streambuf *)0x0;
      lVar3 = lVar3 + 8;
    }
    uVar1 = (uint)this;
  }
  FUN_00892260();
  std::streambuf::~streambuf(this);
  std::ostream::~ostream((ostream *)this);
  std::ios::~ios((ios *)this);
  return this_ptr;
}

