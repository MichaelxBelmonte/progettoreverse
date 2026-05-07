// Function: FUN_009f3f64
// Address: 009f3f64
// Size: 1825 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libpaceutil/TimeUtils.cpp"
//   "The time string \"%s\" contains offset information, but you also passed inLocal as true. These are ...
//   "boost::posix_time::ptime pace::getTimeFromDelimitedIsoString(const std::__1::string &, const bool)"
//   "Zz"
//   "makeIsoTimeOffsetInfoForIso8601TimeString() does not understand the time string: \"%s\""
//   "void pace::makeIsoTimeOffsetInfoForIso8601TimeString(const std::__1::string &, pace::IsoTimeOffsetI...

uint64_t FUN_009f3f64(uint64_t param_1,string *param_2,uint64_t param_3,ulong param_4)

{
  char *pcVar1;
  allocator aVar2;
  bool bVar3;
  uint64_t uVar4;
  int64_t lVar5;
  string *psVar6;
  facet *pfVar7;
  char *pcVar8;
  uint64_t uVar9;
  string *this;
  void *pvVar10;
  void**this_00;
  locale *plVar11;
  char unaff_SIL;
  char *pcVar12;
  char *pcVar13;
  byte *this_ptr;
  ulong uVar14;
  long lVar15;
  char *pcVar16;
  allocator *paVar17;
  uint64_t in_stack_fffffffffffffe30;
  allocator *in_stack_fffffffffffffe38;
  char *local_1c0;
  int64_t alStack_1a8 [6];
  uint64_t local_178;
  uint64_t local_170;
  uint64_t local_168;
  uint64_t local_160;
  uint32_t local_158;
  void**local_150;
  uint64_t local_c8;
  uint32_t local_c0;
  uint64_t local_b8;
  uint64_t local_60;
  allocator *local_58;
  char *local_50;
  uint32_t local_48;
  uint64_t local_40;
  char local_31;
  
  if ((*this_ptr & 1) == 0) {
    uVar4 = (uint64_t)(*this_ptr >> 1);
  }
  else {
    uVar4 = *(uint64_t *)(this_ptr + 8);
  }
  if (uVar4 == 0) {
    uVar9 = FUN_009585b8();
    return uVar9;
  }
  pcVar8 = (char *)&local_60;
  local_60 = 0;
  local_58 = (allocator *)0x0;
  local_50 = (char *)0x0;
  bVar3 = false;
  local_31 = unaff_SIL;
  std::string::operator=((string *)CONCAT71((int7)((uint64_t)param_1 >> 8),1),param_2);
  pcVar16 = local_50;
  paVar17 = local_58;
  if ((local_60 & 1) == 0) {
    pcVar16 = (char *)((int64_t)&local_60 + 1);
    paVar17 = (allocator *)(local_60 >> 1 & 0x7f);
  }
  this = (string *)(paVar17 + -1);
  psVar6 = (string *)0xffffffffffffffff;
  if (paVar17 != (allocator *)0x0) {
    pcVar1 = pcVar16 + (int64_t)paVar17;
    pcVar12 = pcVar16;
    do {
      lVar5 = 0;
      do {
        pcVar13 = pcVar12;
        if (*pcVar12 == "Zz"[lVar5]) goto LAB_009f4033;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 2);
      pcVar12 = pcVar12 + 1;
      pcVar13 = pcVar1;
    } while (pcVar12 != pcVar1);
LAB_009f4033:
    psVar6 = (string *)0xffffffffffffffff;
    if (pcVar13 != pcVar1) {
      psVar6 = (string *)(pcVar13 + -(int64_t)pcVar16);
    }
  }
  uVar14 = (ulong)pcVar8;
  if (psVar6 == this) {
    std::string::string(this,(string *)0x0,uVar14,param_4,in_stack_fffffffffffffe38);
    goto LAB_009f4060;
  }
  if ((pcVar16[(int64_t)this] < '\0') ||
     ((PTR___DefaultRuneLocale_0249c238[(uint64_t)(byte)pcVar16[(int64_t)this] * 4 + 0x3d] & 4) ==
      0)) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("void pace::makeIsoTimeOffsetInfoForIso8601TimeString(const std::__1::string &, pace::IsoTimeOffsetInfo_T &)"
                 ,0x1ea);
    FUN_009cbbdb();
    goto LAB_009f429a;
  }
  aVar2 = (paVar17 + -2)[(int64_t)pcVar16];
  if ((char)aVar2 < '\0') {
LAB_009f4296:
    bVar3 = false;
  }
  else {
    if (((((PTR___DefaultRuneLocale_0249c238[(uint64_t)(byte)aVar2 * 4 + 0x3d] & 4) == 0) ||
         ((paVar17 + -3)[(int64_t)pcVar16] != (allocator)0x3a)) ||
        ((char)(paVar17 + -4)[(int64_t)pcVar16] < '\0')) ||
       ((((PTR___DefaultRuneLocale_0249c238
           [(uint64_t)(byte)(paVar17 + -4)[(int64_t)pcVar16] * 4 + 0x3d] & 4) == 0 ||
         ((char)(paVar17 + -5)[(int64_t)pcVar16] < '\0')) ||
        (((PTR___DefaultRuneLocale_0249c238
           [(uint64_t)(byte)(paVar17 + -5)[(int64_t)pcVar16] * 4 + 0x3d] & 4) == 0 ||
         (((pcVar16 + -6)[(int64_t)paVar17] != '-' && ((pcVar16 + -6)[(int64_t)paVar17] != '+'))))
        )))) {
      if (((PTR___DefaultRuneLocale_0249c238[(uint64_t)(byte)aVar2 * 4 + 0x3d] & 4) == 0) ||
         (((((paVar17 + -3)[(int64_t)pcVar16] != (allocator)0x3a ||
            ((char)(paVar17 + -4)[(int64_t)pcVar16] < '\0')) ||
           ((PTR___DefaultRuneLocale_0249c238
             [(uint64_t)(byte)(paVar17 + -4)[(int64_t)pcVar16] * 4 + 0x3d] & 4) == 0)) ||
          (((pcVar16 + -5)[(int64_t)paVar17] != '-' && ((pcVar16 + -5)[(int64_t)paVar17] != '+')))
          ))) goto LAB_009f4296;
      this = (string *)(paVar17 + -5);
      pvVar10 = (void *)0xffffffffffffffff;
      std::string::string((string *)0xffffffffffffffff,this,uVar14,param_4,in_stack_fffffffffffffe38
                         );
      FUN_009f5145();
      if ((in_stack_fffffffffffffe30 & 1) != 0) {
        operator_delete(pvVar10);
      }
      std::string::string(this,(string *)0x0,uVar14,param_4,in_stack_fffffffffffffe38);
    }
    else {
      this = (string *)(paVar17 + -6);
      pvVar10 = (void *)0xffffffffffffffff;
      std::string::string((string *)0xffffffffffffffff,this,uVar14,param_4,in_stack_fffffffffffffe38
                         );
      FUN_009f5145();
      if ((in_stack_fffffffffffffe30 & 1) != 0) {
        operator_delete(pvVar10);
      }
      std::string::string(this,(string *)0x0,uVar14,param_4,in_stack_fffffffffffffe38);
    }
LAB_009f4060:
    if ((local_60 & 1) != 0) {
      operator_delete(this);
    }
    local_50 = local_1c0;
    bVar3 = true;
    pcVar16 = pcVar8;
    local_60 = in_stack_fffffffffffffe30;
    local_58 = in_stack_fffffffffffffe38;
  }
LAB_009f429a:
  lVar15 = (long)pcVar16;
  FUN_009f3507();
  FUN_00ad1060();
  this_00 = &PTR__istream_025175a8;
  local_150 = &PTR__istream_025175d0;
  std::ios_base::init(&PTR__istream_025175a8);
  local_c8 = 0;
  local_c0 = 0xffffffff;
  local_150 = (void**)&g_025174b8;
  std::streambuf::streambuf((streambuf *)this_00);
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0x18;
  if (g_028a0490 == (facet *)0x0) {
    pfVar7 = operator_new((ulong)this_00);
    FUN_009f6eaa();
    g_028a0490 = pfVar7;
    FUN_009d485c();
  }
  (**(code **)(*(int64_t *)g_028a0490 + 0x20))();
  lVar5 = g_02517450;
  std::ios_base::getloc();
  pfVar7 = g_028a0490;
  if (g_028a0490 == (facet *)0x0) {
    pcVar8 = (char *)0x0;
  }
  else {
    pcVar8 = (char *)std::locale::id::__get();
  }
  std::locale::__install_ctor((locale *)pcVar8,pfVar7,lVar15);
  std::ios_base::getloc();
  plVar11 = (locale *)&local_40;
  std::ios_base::imbue((locale *)pcVar8);
  std::locale::~locale((locale *)pcVar8);
  if (*(int64_t **)((int64_t)alStack_1a8 + lVar5) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)((int64_t)alStack_1a8 + lVar5) + 0x10))();
    std::locale::locale((locale *)pcVar8,plVar11);
    std::locale::operator=((locale *)pcVar8,plVar11);
    std::locale::~locale((locale *)pcVar8);
  }
  std::locale::~locale((locale *)pcVar8);
  std::locale::~locale((locale *)pcVar8);
  std::locale::~locale((locale *)pcVar8);
  FUN_00ad9400();
  local_48 = 0xfffffffe;
  local_b8 = 0x7ffffffffffffffe;
  FUN_00953fa0();
  FUN_009f47aa();
  uVar9 = FUN_009f6c90();
  if (local_31 != '\0') {
    local_40 = uVar9;
    if (bVar3) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00983230();
      pcVar8 = 
      "boost::posix_time::ptime pace::getTimeFromDelimitedIsoString(const std::__1::string &, const bool)"
      ;
      FUN_00928ab0("boost::posix_time::ptime pace::getTimeFromDelimitedIsoString(const std::__1::string &, const bool)"
                   ,0x122);
      FUN_009cbbdb();
    }
    FUN_009f3b8d();
    uVar9 = FUN_009f6c90();
  }
  local_150 = (void**)&g_025174b8;
  local_40 = uVar9;
  if ((local_178 & 1) != 0) {
    operator_delete(pcVar8);
  }
  std::streambuf::~streambuf((streambuf *)pcVar8);
  std::iostream::~iostream((iostream *)pcVar8);
  std::ios::~ios((ios *)pcVar8);
  FUN_009583dc();
  if ((local_60 & 1) != 0) {
    operator_delete(pcVar8);
  }
  return uVar9;
}

