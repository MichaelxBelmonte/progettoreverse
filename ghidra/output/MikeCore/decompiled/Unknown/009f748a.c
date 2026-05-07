// Function: FUN_009f748a
// Address: 009f748a
// Size: 787 bytes
// Class: Unknown


undefined8 * FUN_009f748a(char *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  id *this;
  locale *this_00;
  ios *this_01;
  undefined8 *unaff_RDI;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined **local_1d0;
  undefined *local_1c8;
  ulonglong local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined **local_160;
  int aiStack_140 [26];
  undefined8 local_d8;
  undefined4 local_d0;
  byte local_c8;
  undefined **local_b0;
  undefined **local_a8;
  byte local_80;
  undefined1 local_7f [15];
  undefined1 *local_70;
  int local_64;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined **local_48;
  
  unaff_RDI[2] = 0;
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
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
  ppuVar5 = (undefined **)&DAT_025172a8;
  puVar6 = &DAT_025172d0;
  local_60 = &DAT_02523790;
  local_58 = &DAT_025172e8;
  this = (id *)0x0;
  local_50 = &DAT_025172d0;
  local_48 = (undefined **)&DAT_025172a8;
  do {
    local_64 = (int)this;
    local_1f8 = CONCAT44(local_1f8._4_4_,local_64);
    local_1d0 = local_a8;
    local_160 = local_b0;
    std::ios_base::init(this);
    local_d8 = 0;
    local_d0 = 0xffffffff;
    local_1d0 = ppuVar5;
    local_160 = (undefined **)puVar6;
    std::streambuf::streambuf((streambuf *)this);
    local_1c8 = local_60;
    local_170 = 0;
    local_178 = 0;
    local_180 = 0;
    local_188 = 0;
    local_168 = 0x10;
    std::locale::use_facet(this);
    puVar6 = local_1d0[-3];
    iVar2 = *(int *)((longlong)aiStack_140 + (longlong)puVar6);
    if (iVar2 == -1) {
      std::ios_base::getloc();
      plVar4 = (longlong *)std::locale::use_facet(this);
      this_00 = (locale *)*plVar4;
      cVar1 = (**(code **)(this_00 + 0x38))();
      std::locale::~locale(this_00);
      iVar2 = (int)cVar1;
      *(int *)((longlong)aiStack_140 + (longlong)puVar6) = iVar2;
    }
    this_01 = (ios *)(ulonglong)(uint)(int)(char)iVar2;
    std::time_put<char,std::ostreambuf_iterator<char,std::char_traits<char>>>::put
              (this_01,(undefined *)((longlong)&local_1d0 + (longlong)puVar6),&local_208,puVar3);
    FUN_00892260();
    ppuVar5 = local_48;
    puVar6 = local_50;
    FUN_009f7c5a();
    if ((local_c8 & 1) != 0) {
      operator_delete(this_01);
    }
    local_1d0 = ppuVar5;
    local_160 = (undefined **)puVar6;
    local_1c8 = local_60;
    if ((local_188 & 1) != 0) {
      operator_delete(this_01);
    }
    std::streambuf::~streambuf((streambuf *)this_01);
    std::ostream::~ostream((ostream *)this_01);
    std::ios::~ios(this_01);
    this = (id *)(ulonglong)(local_64 + 1U);
  } while (local_64 + 1U != 0xc);
  if ((local_80 & 1) != 0) {
    operator_delete(&MACH_HEADER.filetype);
  }
  return unaff_RDI;
}


