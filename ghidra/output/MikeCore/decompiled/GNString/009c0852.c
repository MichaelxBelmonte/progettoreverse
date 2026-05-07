// Function: FUN_009c0852
// Address: 009c0852
// Size: 845 bytes
// Class: GNString
// String references:
//   "  Derived class data members (toString overridden):  "
//   "    iLokErrorCodeNumber..: "


/* WARNING: Removing unreachable block (ram,0x009c0b56) */

void FUN_009c0852(char param_1,undefined8 param_2)

{
  longlong *plVar1;
  id *piVar2;
  locale *plVar3;
  void *pvVar4;
  ios *this;
  int iVar5;
  byte *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  std::ios_base::init(&PTR__ostream_02517318);
  piVar2 = (id *)&DAT_025172a8;
  std::streambuf::streambuf((streambuf *)&DAT_025172a8);
  if (param_1 == '\0') {
    piVar2 = (id *)0x0;
    (**(code **)(*unaff_RDI + 0x60))(0,param_2,1);
  }
  if ((char)unaff_RDI[0x1a] == '\0') {
    piVar2 = (id *)0x0;
    FUN_009cb542(0,param_2,1);
  }
  FUN_009ad920();
  FUN_009ad920();
  std::ios_base::getloc();
  plVar1 = (longlong *)std::locale::use_facet(piVar2);
  plVar3 = (locale *)*plVar1;
  (**(code **)(plVar3 + 0x38))();
  std::locale::~locale(plVar3);
  std::ostream::put((char)plVar3);
  std::ostream::flush();
  FUN_009ad920();
  iVar5 = 0x1b;
  FUN_009ad920();
  std::ostream::operator<<((ostream *)plVar3,iVar5);
  std::ios_base::getloc();
  plVar1 = (longlong *)std::locale::use_facet((id *)plVar3);
  plVar3 = (locale *)*plVar1;
  (**(code **)(plVar3 + 0x38))();
  std::locale::~locale(plVar3);
  std::ostream::put((char)plVar3);
  std::ostream::flush();
  (**(code **)(*unaff_RDI + 0x68))(0,param_2,1);
  (**(code **)(*unaff_RDI + 0x70))(0,param_2,0,1);
  pvVar4 = (void *)((longlong)&MACH_HEADER.magic + 1);
  (**(code **)(*unaff_RDI + 0x78))(1,param_2,1);
  FUN_00892260();
  if ((*unaff_RSI & 1) != 0) {
    operator_delete(pvVar4);
  }
  *(undefined8 *)(unaff_RSI + 0x10) = local_38;
  *(undefined8 *)(unaff_RSI + 8) = local_40;
  *(undefined8 *)unaff_RSI = local_48;
  this = (ios *)&DAT_02523790;
  std::streambuf::~streambuf((streambuf *)&DAT_02523790);
  std::ostream::~ostream((ostream *)this);
  std::ios::~ios(this);
  return;
}


