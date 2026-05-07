// Function: FUN_009c0852
// Address: 009c0852
// Size: 845 bytes
// Class: GNString
// String references:
//   "  Derived class data members (toString overridden):  "
//   "    iLokErrorCodeNumber..: "
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_009c0852(char param_1,uint64_t param_2)

{
  int64_t *plVar1;
  id *piVar2;
  locale *plVar3;
  void *pvVar4;
  ios *this;
  int iVar5;
  byte *arg1;
  int64_t *this_ptr;
  uint64_t local_48;
  uint64_t local_40;
  uint64_t local_38;
  
  std::ios_base::init(&PTR__ostream_02517318);
  piVar2 = (id *)&g_025172a8;
  std::streambuf::streambuf((streambuf *)&g_025172a8);
  if (param_1 == '\0') {
    piVar2 = (id *)0x0;
    (**(code **)(*this_ptr + 0x60))(0,param_2,1);
  }
  if ((char)this_ptr[0x1a] == '\0') {
    piVar2 = (id *)0x0;
    FUN_009cb542(0,param_2,1);
  }
  FUN_009ad920();
  FUN_009ad920();
  std::ios_base::getloc();
  plVar1 = (int64_t *)std::locale::use_facet(piVar2);
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
  plVar1 = (int64_t *)std::locale::use_facet((id *)plVar3);
  plVar3 = (locale *)*plVar1;
  (**(code **)(plVar3 + 0x38))();
  std::locale::~locale(plVar3);
  std::ostream::put((char)plVar3);
  std::ostream::flush();
  (**(code **)(*this_ptr + 0x68))(0,param_2,1);
  (**(code **)(*this_ptr + 0x70))(0,param_2,0,1);
  pvVar4 = (void *)((int64_t)&MACH_HEADER.magic + 1);
  (**(code **)(*this_ptr + 0x78))(1,param_2,1);
  FUN_00892260();
  if ((*arg1 & 1) != 0) {
    operator_delete(pvVar4);
  }
  *(void*)(arg1 + 0x10) = local_38;
  *(void*)(arg1 + 8) = local_40;
  *(void*)arg1 = local_48;
  this = (ios *)&g_02523790;
  std::streambuf::~streambuf((streambuf *)&g_02523790);
  std::ostream::~ostream((ostream *)this);
  std::ios::~ios(this);
  return;
}

