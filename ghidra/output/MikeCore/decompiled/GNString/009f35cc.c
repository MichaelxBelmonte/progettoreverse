// Function: FUN_009f35cc
// Address: 009f35cc
// Size: 692 bytes
// Class: GNString
// String references:
//   "%Y-%m-%dT%H:%M:%sZ"


void FUN_009f35cc(ulong param_1,undefined8 param_2,long param_3)

{
  longlong lVar1;
  facet *pfVar2;
  locale *this;
  undefined **this_00;
  ios *this_01;
  locale *plVar3;
  byte *unaff_RSI;
  longlong *unaff_RDI;
  longlong alStack_178 [6];
  ulonglong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined **local_120;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  locale local_38 [8];
  
  std::string::erase(param_1,0xffffffff);
  if (*unaff_RDI != 0x7ffffffffffffffe) {
    pfVar2 = operator_new(param_1);
    FUN_009fcfd6();
    this_00 = &PTR__istream_025175a8;
    local_120 = &PTR__istream_025175d0;
    std::ios_base::init(&PTR__istream_025175a8);
    local_98 = 0;
    local_90 = 0xffffffff;
    local_120 = (undefined **)&DAT_025174b8;
    std::streambuf::streambuf((streambuf *)this_00);
    lVar1 = DAT_02517450;
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
    if (*(longlong **)((longlong)alStack_178 + lVar1) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)alStack_178 + lVar1) + 0x10))();
      std::locale::locale(this,plVar3);
      std::locale::operator=(this,plVar3);
      std::locale::~locale(this);
    }
    std::locale::~locale(this);
    std::locale::~locale(this);
    std::string::assign((char *)this);
    FUN_009f4b13();
    FUN_00892260();
    if ((*unaff_RSI & 1) != 0) {
      operator_delete(this);
    }
    *(undefined8 *)(unaff_RSI + 0x10) = local_70;
    *(undefined8 *)(unaff_RSI + 8) = local_78;
    *(undefined8 *)unaff_RSI = local_80;
    local_120 = (undefined **)&DAT_025174b8;
    this_01 = (ios *)&DAT_02523790;
    if ((local_148 & 1) != 0) {
      operator_delete(&DAT_02523790);
    }
    std::streambuf::~streambuf((streambuf *)this_01);
    std::iostream::~iostream((iostream *)this_01);
    std::ios::~ios(this_01);
  }
  return;
}


