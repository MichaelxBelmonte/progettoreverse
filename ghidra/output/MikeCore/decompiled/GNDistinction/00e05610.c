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
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  longlong *unaff_RSI;
  void *pvVar7;
  u_int uVar8;
  longlong lVar9;
  double dVar10;
  undefined8 uVar11;
  double local_1d0;
  size_t sVar12;
  void *in_stack_fffffffffffffe38;
  undefined8 *puVar13;
  char cVar14;
  size_t in_stack_fffffffffffffe40;
  undefined4 local_1a4;
  undefined8 *local_1a0;
  char local_198;
  longlong local_190;
  undefined8 *local_180;
  undefined8 *local_178;
  uint local_170;
  int local_16c;
  undefined8 *local_168;
  uint local_160;
  double local_158;
  undefined8 *local_150;
  char local_148;
  undefined8 local_140;
  longlong local_138;
  ulonglong uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar8 = (u_int)&local_138;
  FUN_00d8ede0();
  lVar4 = local_138;
  if (((char)uStack_130 == '\0') && (local_138 != 0)) {
    FUN_00d50b00();
    if (((char)uStack_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  if (lVar1 == 0) {
    local_180 = (undefined8 *)0x0;
  }
  else {
    local_180 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_180 = &DAT_02572358;
    (*DAT_02572370)();
    lVar9 = DAT_027850c8;
    if (DAT_027850c8 != 0) {
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
    lVar9 = 0x100 - (longlong)iVar5;
  }
  else {
    lVar9 = 0x100;
    if (*unaff_RSI != 0) {
      piVar6 = ___error();
      local_16c = *piVar6;
      local_170 = 1;
      local_178 = &DAT_024cc6f0;
      FUN_00d8cb40(&DAT_024cc6f0,&local_178);
      puVar2 = local_150;
      if (local_148 == '\0') {
        if (local_150 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_148 = '\0';
      }
      local_168 = puVar2;
      local_160 = local_160 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != (undefined8 *)0x0)) {
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
  else if (*unaff_RSI != 0) {
    piVar6 = ___error();
    local_16c = *piVar6;
    local_170 = 1;
    local_178 = &DAT_024cc6f0;
    FUN_00d8cb40(&DAT_024cc6f0,&local_178);
    puVar2 = local_150;
    if (local_148 == '\0') {
      if (local_150 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_148 = '\0';
    }
    local_168 = puVar2;
    local_160 = local_160 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_190 = lVar9;
  iVar5 = _sysctlbyname((char *)0x0,&local_190,(size_t *)0x0,pvVar7,sVar12);
  if ((iVar5 != 0) && (*unaff_RSI != 0)) {
    piVar6 = ___error();
    local_16c = *piVar6;
    local_170 = 1;
    local_178 = &DAT_024cc6f0;
    FUN_00d8cb40(&DAT_024cc6f0,&local_178);
    puVar2 = local_150;
    if (local_148 == '\0') {
      if (local_150 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_148 = '\0';
    }
    local_168 = puVar2;
    local_160 = local_160 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00e07210(0x36,0x30,&local_138,*unaff_RSI != 0);
  puVar2 = local_168;
  if (((char)local_160 == '\0') && (local_168 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  local_160 = local_160 & 0xffffff00;
  local_168 = puVar2;
  FUN_00d21140();
  if (((char)local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (*unaff_RSI != 0) {
    dVar10 = (double)FUN_00e7d6f0();
    local_158 = (dVar10 - local_1d0) * DAT_023907c0;
    local_160 = 1;
    local_168 = (undefined8 *)&DAT_024de5e0;
    FUN_00d8cb40(local_158,&local_168);
    puVar13 = local_178;
    if ((char)local_170 == '\0') {
      if (local_178 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_170 = local_170 & 0xffffff00;
    }
    local_150 = puVar13;
    local_148 = '\0';
    FUN_00d21140();
    if ((local_148 != '\0') && (local_150 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar13 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_170 != '\0') && (local_178 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    cVar14 = '\0';
    puVar13 = local_180;
    uVar11 = FUN_00d92220();
    local_1a0 = local_178;
    local_198 = 0;
    if ((char)local_170 == '\0') {
      if (local_178 != (undefined8 *)0x0) {
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
      if (local_150 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_148 = '\0';
    }
    local_168 = puVar3;
    local_160 = local_160 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_170 != '\0') && (local_178 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((cVar14 != '\0') && (puVar13 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((lVar1 != 0) && (local_180 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


