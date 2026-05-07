// Function: FUN_00e05610
// Address: 00e05610
// Size: 2233 bytes
// Class: GNDistinction
// String references:
//   "%lld"
//   "sysctl(HW_AVAILCPU) failure %I"
//   "sysctl(HW_MODEL) failure %I"
//   "machdep.cpu.brand_string"
//   "sysctlbyname(machdep.cpu.brand_string) failure %I"
//   "Duration: %f ms"

void FUN_00e05610(void)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  int64_t lVar4;
  int iVar5;
  int *piVar6;
  int64_t *arg1;
  void *pvVar7;
  u_int uVar8;
  int64_t lVar9;
  double dVar10;
  uint64_t uVar11;
  double local_1d0;
  size_t sVar12;
  void *in_stack_fffffffffffffe38;
  void*puVar13;
  char cVar14;
  size_t in_stack_fffffffffffffe40;
  uint32_t local_1a4;
  void*local_1a0;
  char local_198;
  int64_t local_190;
  void*local_180;
  void*local_178;
  uint local_170;
  int local_16c;
  void*local_168;
  uint local_160;
  double local_158;
  void*local_150;
  char local_148;
  uint64_t local_140;
  int64_t local_138;
  uint64_t uStack_130;
  uint64_t local_128;
  uint64_t uStack_120;
  uint64_t local_118;
  uint64_t uStack_110;
  uint64_t local_108;
  uint64_t uStack_100;
  uint64_t local_f8;
  uint64_t uStack_f0;
  uint64_t local_e8;
  uint64_t uStack_e0;
  uint64_t local_d8;
  uint64_t uStack_d0;
  uint64_t local_c8;
  uint64_t uStack_c0;
  uint64_t local_b8;
  uint64_t uStack_b0;
  uint64_t local_a8;
  uint64_t uStack_a0;
  uint64_t local_98;
  uint64_t uStack_90;
  uint64_t local_88;
  uint64_t uStack_80;
  uint64_t local_78;
  uint64_t uStack_70;
  uint64_t local_68;
  uint64_t uStack_60;
  uint64_t local_58;
  uint64_t uStack_50;
  uint64_t local_48;
  uint64_t uStack_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar8 = (u_int)&local_138;
  FUN_00d8ede0();
  lVar4 = local_138;
  if (((char)uStack_130 == '\0') && (local_138 != 0)) {
    FUN_00d50b00();
    if (((char)uStack_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  if (lVar1 == 0) {
    local_180 = (void*)0x0;
  }
  else {
    local_180 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_180 = &g_02572358;
    (*g_02572370)();
    lVar9 = g_027850c8;
    if (g_027850c8 != 0) {
      FUN_00d50b00();
    }
    local_138 = lVar9;
    uStack_130 = uStack_130 & 0xffffffffffffff00;
    FUN_00d21140();
    if (((char)uStack_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    local_1d0 = (double)FUN_00e7d6f0();
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_1a4 = 0;
  local_140 = 0x1900000006;
  local_190 = 4;
  iVar5 = _sysctl((int *)&local_190,(u_int)&local_1a4,(void *)0x0,(size_t *)0x0,
                  in_stack_fffffffffffffe38,in_stack_fffffffffffffe40);
  if (iVar5 == 0) {
    FUN_00e7df20(local_1a4,"%lld");
    iVar5 = FUN_00e7dde0();
    uVar8 = (int)&local_138 + iVar5;
    lVar9 = 0x100 - (int64_t)iVar5;
  }
  else {
    lVar9 = 0x100;
    if (*arg1 != 0) {
      piVar6 = ___error();
      local_16c = *piVar6;
      local_170 = 1;
      local_178 = &g_024cc6f0;
      FUN_00d8cb40(&g_024cc6f0,&local_178);
      puVar2 = local_150;
      if (local_148 == '\0') {
        if (local_150 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_148 = '\0';
      }
      local_168 = puVar2;
      local_160 = local_160 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_160 != '\0') && (local_168 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  local_140 = 0x200000006;
  pvVar7 = (void *)0x0;
  local_190 = lVar9;
  iVar5 = _sysctl((int *)&local_190,uVar8,(void *)0x0,(size_t *)0x0,in_stack_fffffffffffffe38,
                  in_stack_fffffffffffffe40);
  sVar12 = (size_t)in_stack_fffffffffffffe38;
  if (iVar5 == 0) {
    lVar9 = lVar9 - (local_190 + -1);
  }
  else if (*arg1 != 0) {
    piVar6 = ___error();
    local_16c = *piVar6;
    local_170 = 1;
    local_178 = &g_024cc6f0;
    FUN_00d8cb40(&g_024cc6f0,&local_178);
    puVar2 = local_150;
    if (local_148 == '\0') {
      if (local_150 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_148 = '\0';
    }
    local_168 = puVar2;
    local_160 = local_160 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_160 != '\0') && (local_168 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  local_190 = lVar9;
  iVar5 = _sysctlbyname((char *)0x0,&local_190,(size_t *)0x0,pvVar7,sVar12);
  if ((iVar5 != 0) && (*arg1 != 0)) {
    piVar6 = ___error();
    local_16c = *piVar6;
    local_170 = 1;
    local_178 = &g_024cc6f0;
    FUN_00d8cb40(&g_024cc6f0,&local_178);
    puVar2 = local_150;
    if (local_148 == '\0') {
      if (local_150 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_148 = '\0';
    }
    local_168 = puVar2;
    local_160 = local_160 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_160 != '\0') && (local_168 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00e07210(0x36,0x30,&local_138,*arg1 != 0);
  puVar2 = local_168;
  if (((char)local_160 == '\0') && (local_168 != (void*)0x0)) {
    FUN_00d50b00();
  }
  local_160 = local_160 & 0xffffff00;
  local_168 = puVar2;
  FUN_00d21140();
  if (((char)local_160 != '\0') && (local_168 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (*arg1 != 0) {
    dVar10 = (double)FUN_00e7d6f0();
    local_158 = (dVar10 - local_1d0) * g_023907c0;
    local_160 = 1;
    local_168 = (void*)&g_024de5e0;
    FUN_00d8cb40(local_158,&local_168);
    puVar13 = local_178;
    if ((char)local_170 == '\0') {
      if (local_178 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_170 = local_170 & 0xffffff00;
    }
    local_150 = puVar13;
    local_148 = '\0';
    FUN_00d21140();
    if ((local_148 != '\0') && (local_150 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar13 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_170 != '\0') && (local_178 != (void*)0x0)) {
      FUN_00d50b20();
    }
    cVar14 = '\0';
    puVar13 = local_180;
    uVar11 = FUN_00d92220();
    local_1a0 = local_178;
    local_198 = 0;
    if ((char)local_170 == '\0') {
      if (local_178 != (void*)0x0) {
        uVar11 = FUN_00d50b00();
      }
    }
    else {
      local_170 = local_170 & 0xffffff00;
    }
    local_198 = '\x01';
    FUN_00d95130(uVar11,&local_1a0);
    puVar3 = local_150;
    if (local_148 == '\0') {
      if (local_150 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_148 = '\0';
    }
    local_168 = puVar3;
    local_160 = local_160 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_160 != '\0') && (local_168 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_170 != '\0') && (local_178 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((cVar14 != '\0') && (puVar13 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((lVar1 != 0) && (local_180 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

