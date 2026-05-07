// Function: FUN_0091d5a3
// Address: 0091d5a3
// Size: 502 bytes
// Class: Unknown
// String references:
//   ", "


/* WARNING: Removing unreachable block (ram,0x0091d751) */

undefined8 FUN_0091d5a3(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  void *pvVar2;
  streambuf *this;
  longlong *unaff_RSI;
  undefined8 unaff_RDI;
  longlong lVar3;
  byte local_60;
  
  std::ios_base::init(&PTR__ostream_02517318);
  this = (streambuf *)&DAT_025172a8;
  std::streambuf::streambuf((streambuf *)&DAT_025172a8);
  lVar3 = *unaff_RSI;
  uVar1 = *(uint *)(unaff_RSI + 1);
  while ((lVar3 != *param_2 || (uVar1 != *(uint *)(param_2 + 1)))) {
    if ((lVar3 != *unaff_RSI) || (uVar1 != *(uint *)(unaff_RSI + 1))) {
      FUN_009ad920();
    }
    pvVar2 = (void *)(ulonglong)uVar1;
    FUN_0091d85b();
    FUN_009ad920();
    if ((local_60 & 1) != 0) {
      operator_delete(pvVar2);
    }
    this = (streambuf *)(ulonglong)(uVar1 + 1);
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
  return unaff_RDI;
}


