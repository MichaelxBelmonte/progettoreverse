// Function: FUN_009ca8f2
// Address: 009ca8f2
// Size: 521 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x009caaae) */

void FUN_009ca8f2(char param_1,undefined8 param_2)

{
  undefined **this;
  void *pvVar1;
  byte *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 local_60;
  streambuf *local_58;
  undefined8 local_50;
  
  this = &PTR__ostream_02517318;
  std::ios_base::init(&PTR__ostream_02517318);
  std::streambuf::streambuf((streambuf *)this);
  if (param_1 == '\0') {
    (**(code **)(*unaff_RDI + 0x60))(0,param_2,1);
  }
  if ((char)unaff_RDI[0x1a] == '\0') {
    FUN_009cb542(0,param_2,1);
  }
  (**(code **)(*unaff_RDI + 0x68))(0,param_2,1);
  (**(code **)(*unaff_RDI + 0x70))(0,param_2,0,1);
  pvVar1 = (void *)((longlong)&MACH_HEADER.magic + 1);
  (**(code **)(*unaff_RDI + 0x78))(1,param_2,0);
  FUN_00892260();
  if ((*unaff_RSI & 1) != 0) {
    operator_delete(pvVar1);
  }
  *(undefined8 *)(unaff_RSI + 0x10) = local_50;
  *(streambuf **)(unaff_RSI + 8) = local_58;
  *(undefined8 *)unaff_RSI = local_60;
  std::streambuf::~streambuf(local_58);
  std::ostream::~ostream((ostream *)local_58);
  std::ios::~ios((ios *)local_58);
  return;
}


