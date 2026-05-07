// Function: FUN_01806b70
// Address: 01806b70
// Size: 16823 bytes
// Class: MUPitchMapper


/* WARNING: Removing unreachable block (ram,0x0180a830) */
/* WARNING: Removing unreachable block (ram,0x0180a804) */

void FUN_01806b70(void)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  size_t sVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  code **ppcVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  void *pvVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  pthread_key_t pVar23;
  ulonglong *puVar24;
  ulonglong uVar25;
  void *pvVar26;
  int iVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  bool bVar32;
  byte bVar33;
  byte bVar34;
  int iVar35;
  longlong lVar36;
  undefined8 *unaff_RSI;
  longlong lVar37;
  longlong *unaff_RDI;
  undefined8 **ppuVar38;
  void *in_R9;
  ulonglong uVar39;
  size_t sVar40;
  longlong lVar41;
  void *pvVar42;
  int iVar43;
  uint uVar44;
  ulonglong uVar45;
  bool bVar46;
  undefined4 uVar47;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  float extraout_XMM0_Da_12;
  float fVar48;
  undefined8 local_3a0;
  undefined1 uVar49;
  undefined7 in_stack_fffffffffffffc69;
  longlong local_360;
  char local_358;
  longlong local_350;
  ulonglong local_348;
  char local_340;
  ulonglong local_338;
  char local_330;
  ulonglong local_328;
  char local_320;
  ulonglong local_318;
  char local_310;
  ulonglong local_308;
  char local_300;
  ulonglong local_2f8;
  char local_2f0;
  longlong local_2e8;
  char local_2e0;
  ulonglong local_2d8;
  char local_2d0;
  ulonglong local_2c8;
  char local_2c0;
  ulonglong local_2b8;
  char local_2b0;
  ulonglong local_2a8;
  char local_2a0;
  longlong local_298;
  char local_290;
  ulonglong local_288;
  char local_280;
  longlong local_278;
  char local_270;
  longlong local_268;
  char local_260;
  ulonglong local_258;
  char local_250;
  ulonglong local_248;
  char local_240;
  ulonglong local_238;
  char local_230;
  float local_224;
  ulonglong local_220;
  longlong local_218;
  char local_210;
  ulonglong local_208;
  float local_1fc;
  ulonglong local_1f8;
  char local_1f0;
  undefined8 *local_1e8;
  char local_1e0;
  undefined8 *local_1d8;
  char local_1d0;
  ulonglong local_1c8;
  char local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  longlong local_190;
  ulonglong local_188;
  void *local_180;
  ulonglong local_178;
  longlong local_170;
  longlong local_168;
  void *local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  ulonglong local_138;
  ulonglong local_130;
  ulonglong local_128;
  ulonglong local_120;
  ulonglong local_118;
  undefined8 local_110;
  uint local_104;
  undefined8 *local_100;
  char local_f8;
  ulonglong local_f0;
  int local_e8;
  int iStack_e4;
  int local_e0;
  ulonglong local_d8;
  size_t local_d0;
  uint local_cc;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  uint local_a0;
  uint local_98;
  code *local_90;
  code *local_88;
  code *local_80;
  int local_6c;
  code *local_68;
  ulonglong local_60;
  ulonglong local_58;
  code *local_50;
  ulonglong local_48;
  undefined8 local_40;
  int local_38;
  
  uVar47 = FUN_017e1dd0();
  uVar6 = local_58;
  local_90._0_1_ = (char)local_50;
  ppcVar16 = &local_90;
  if ((char)local_50 != '\0') {
    ppcVar16 = &local_50;
  }
  *(undefined1 *)ppcVar16 = 0;
  if (((char)local_50 != '\0') && (uVar6 != 0)) {
    uVar47 = FUN_00d50b20();
  }
  local_168 = *(longlong *)(*(longlong *)(uVar6 + 0x78) + 0x10);
  *(undefined1 *)(local_168 + 0x78) = *(undefined1 *)((longlong)unaff_RDI + 0x5c);
  *(bool *)(local_168 + 0x79) = (int)unaff_RDI[0xc] != 0x7f;
  *(bool *)(local_168 + 0x7a) = *(int *)((longlong)unaff_RDI + 100) != 0x7f;
  *(undefined1 *)(local_168 + 0x7b) = *(undefined1 *)(uVar6 + 0x98);
  local_178 = *(ulonglong *)(local_168 + 0x18);
  local_b8 = *(ulonglong *)(local_168 + 0x20);
  local_170 = *(longlong *)(local_168 + 0x28);
  lVar36 = *(longlong *)(local_168 + 0x30);
  lVar29 = *(longlong *)(uVar6 + 0x50);
  if (lVar29 != 0) {
    uVar47 = FUN_00d50b00();
  }
  local_190 = lVar29;
  FUN_00c8e340(uVar47,0);
  FUN_00d216c0();
  FUN_00d216c0();
  FUN_00d216c0();
  FUN_00c8e690();
  local_120 = local_58;
  if (((char)local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_017e1b40();
  uVar45 = local_58;
  local_88._0_1_ = (char)local_50;
  ppcVar16 = &local_88;
  if ((char)local_50 != '\0') {
    ppcVar16 = &local_50;
  }
  *(undefined1 *)ppcVar16 = 0;
  if (((char)local_50 != '\0') && (uVar45 != 0)) {
    FUN_00d50b20();
  }
  local_148 = uVar45;
  FUN_017e1ac0();
  uVar45 = local_58;
  local_80._0_1_ = (char)local_50;
  ppcVar16 = &local_80;
  if ((char)local_50 != '\0') {
    ppcVar16 = &local_50;
  }
  *(undefined1 *)ppcVar16 = 0;
  if (((char)local_50 != '\0') && (uVar45 != 0)) {
    FUN_00d50b20();
  }
  local_188 = uVar45;
  FUN_017e1bf0();
  local_60 = local_58;
  if (((char)local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_017e1bc0();
  uVar45 = local_58;
  ppcVar16 = &local_50;
  if ((char)local_50 == '\0') {
    ppcVar16 = &local_68;
  }
  local_68._0_1_ = (char)local_50;
  *(undefined1 *)ppcVar16 = 0;
  if (((char)local_50 != '\0') && (uVar45 != 0)) {
    FUN_00d50b20();
  }
  local_348 = local_60;
  local_340 = '\0';
  local_130 = uVar45;
  local_338 = uVar45;
  local_330 = '\0';
  uVar47 = FUN_017e1d20();
  FUN_017e22f0(&local_338,&local_348,uVar47);
  local_1a8 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
  }
  if ((local_330 != '\0') && (local_338 != 0)) {
    FUN_00d50b20();
  }
  if ((local_340 != '\0') && (local_348 != 0)) {
    FUN_00d50b20();
  }
  local_328 = local_148;
  local_320 = '\0';
  local_318 = local_188;
  local_310 = '\0';
  uVar47 = FUN_017e1d20();
  FUN_017e22f0(&local_318,&local_328,uVar47);
  local_208 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
  }
  if ((local_310 != '\0') && (local_318 != 0)) {
    FUN_00d50b20();
  }
  if ((local_320 != '\0') && (local_328 != 0)) {
    FUN_00d50b20();
  }
  uVar47 = FUN_017154c0();
  local_3a0 = *unaff_RSI;
  uVar49 = 0;
  local_104 = FUN_018064c0(uVar47,&local_3a0);
  uVar47 = FUN_018064c0();
  local_150 = CONCAT44(local_150._4_4_,uVar47);
  FUN_00d227d0();
  iVar35 = 0x80;
  do {
    local_58 = 0;
    local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
    FUN_00d21140();
    if (((char)local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    iVar35 = iVar35 + -1;
  } while (iVar35 != 0);
  uVar47 = FUN_017e1d40();
  uVar45 = local_58;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_018070c2;
    }
  }
  else if (local_58 != 0) {
LAB_018070c2:
    local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = uVar45;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    iVar35 = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar12 = -local_40._4_4_;
        }
        else {
          iVar12 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar12);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar12 = 0;
        }
        local_40 = CONCAT44(iVar12,(int)local_40);
      }
      lVar29 = (longlong)(int)local_40;
      iVar12 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar12);
      if (*(int *)(local_48 + 0xc) <= iVar12) break;
      local_308 = *(ulonglong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar29 * 8);
      local_300 = '\0';
      local_58 = local_308;
      uVar13 = FUN_017e4480();
      if ((local_300 != '\0') && (local_308 != 0)) {
        FUN_00d50b20();
      }
      if ((uVar13 < 0x80) &&
         (*(longlong *)(*(longlong *)(local_170 + 0x10) + (ulonglong)uVar13 * 8) == 0)) {
        if (*(int *)(lVar36 + 0xc) <= iVar35) {
          puVar17 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar17 = &DAT_02608110;
          *(undefined4 *)((longlong)puVar17 + 0x1c) = 0;
          *(undefined8 *)((longlong)puVar17 + 0xc) = 0;
          *(undefined8 *)((longlong)puVar17 + 0x12) = 0;
          FUN_00d500e0();
          local_f8 = '\0';
          local_100 = puVar17;
          FUN_00d21140();
          if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        lVar29 = *(longlong *)(lVar36 + 0x10);
        puVar17 = *(undefined8 **)(lVar29 + (longlong)iVar35 * 8);
        *(uint *)((longlong)puVar17 + 0xc) = uVar13;
        *(undefined4 *)((longlong)puVar17 + 0x1c) = 0xffffffff;
        FUN_00c8e340(lVar29,0);
        uVar7 = FUN_01716980();
        *(undefined1 *)(puVar17 + 3) = uVar7;
        uVar7 = FUN_01716980();
        *(undefined1 *)((longlong)puVar17 + 0x19) = uVar7;
        local_f8 = '\0';
        local_100 = puVar17;
        FUN_00d233f0(extraout_XMM0_Da,uVar13);
        if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_f8 = '\0';
        local_100 = puVar17;
        FUN_00d21140();
        if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01715480();
        iVar35 = iVar35 + 1;
        if ((*(char *)(puVar17 + 3) != '\0') ||
           (((int)unaff_RDI[0xd] == 0 && (*(char *)((longlong)puVar17 + 0x19) != '\0')))) {
          local_f8 = '\0';
          local_100 = puVar17;
          FUN_00d21140();
          if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_01916320();
    uVar47 = FUN_00d50b20();
  }
  uVar45 = local_60;
  if (*(int *)(local_b8 + 0xc) == 0) goto LAB_0180adde;
  if (*(char *)((longlong)unaff_RDI + 0x5d) != '\0') {
    local_2f8 = local_60;
    local_2f0 = '\0';
    uVar47 = FUN_01716260();
    uVar18 = local_58;
    if (uVar45 == local_58) {
LAB_0180741e:
      if ((char)local_50 != '\0') {
LAB_01807424:
        if (local_58 != 0) {
          uVar47 = FUN_00d50b20();
        }
      }
    }
    else {
      if ((char)local_50 == '\0') {
        if (local_58 != 0) {
          uVar47 = FUN_00d50b00();
        }
        if (local_60 != 0) {
          local_60 = uVar18;
          uVar47 = FUN_00d50b20();
          goto LAB_0180741e;
        }
        local_60 = uVar18;
        if ((char)local_50 == '\0') goto LAB_01807432;
        goto LAB_01807424;
      }
      if (local_60 != 0) {
        local_60 = local_58;
        uVar47 = FUN_00d50b20();
      }
      local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
      local_60 = uVar18;
    }
LAB_01807432:
    if ((local_2f0 != '\0') && (local_2f8 != 0)) {
      uVar47 = FUN_00d50b20();
    }
    lVar36 = 0;
    do {
      iVar35 = *(int *)(local_190 + 0x18);
      iVar12 = iVar35 + 3;
      if (-1 < iVar35) {
        iVar12 = iVar35;
      }
      if (3 < iVar35) {
        lVar29 = 0;
        do {
          if (*(int *)(*(longlong *)(local_190 + 0x10) + lVar29 * 4) == (&DAT_024167b0)[lVar36])
          goto LAB_01807500;
          lVar29 = lVar29 + 1;
        } while (iVar12 >> 2 != (int)lVar29);
      }
      cVar8 = FUN_01716e70();
      uVar47 = extraout_XMM0_Da_00;
      if (cVar8 != '\0') {
        cVar8 = FUN_01716e70();
        if (cVar8 != '\0') {
          FUN_01716e90();
        }
        cVar8 = FUN_01716e70();
        uVar47 = extraout_XMM0_Da_01;
        if (cVar8 != '\0') {
          uVar47 = FUN_01716e90();
        }
      }
LAB_01807500:
    } while (((*(int *)(local_190 + 0x18) < 8) ||
             (iVar35 = FUN_01717720(), uVar47 = extraout_XMM0_Da_02, 2 < iVar35)) &&
            (lVar36 = lVar36 + 1, lVar36 != 7));
  }
  lVar36 = *(longlong *)(local_168 + 0x58);
  FUN_00c8e340(uVar47,0);
  uVar45 = local_60;
  iVar35 = FUN_01715480();
  uVar45 = *(ulonglong *)(uVar45 + 0x18);
  if ((~(uint)uVar45 & 0xf) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~(uint)uVar45,1);
    iVar10 = iVar35 + (((uint)(iVar35 / 6 + (iVar35 >> 0x1f)) >> 1) - (iVar35 >> 0x1f)) * -0xc;
    *(uint *)(*(longlong *)(lVar36 + 0x10) + (longlong)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(ulonglong *)(local_60 + 0x18);
  }
  if ((~(uint)uVar45 & 0xf0) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~(uint)uVar45,1);
    iVar10 = iVar35 + 1;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(longlong *)(lVar36 + 0x10) + (longlong)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(ulonglong *)(local_60 + 0x18);
  }
  if ((~(uint)uVar45 & 0xf00) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~(uint)uVar45,1);
    iVar10 = iVar35 + 2;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(longlong *)(lVar36 + 0x10) + (longlong)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(ulonglong *)(local_60 + 0x18);
  }
  if ((~(uint)uVar45 & 0xf000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~(uint)uVar45,1);
    iVar10 = iVar35 + 3;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(longlong *)(lVar36 + 0x10) + (longlong)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(ulonglong *)(local_60 + 0x18);
  }
  if ((~(uint)uVar45 & 0xf0000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~(uint)uVar45,1);
    iVar10 = iVar35 + 4;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(longlong *)(lVar36 + 0x10) + (longlong)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(ulonglong *)(local_60 + 0x18);
  }
  if ((~(uint)uVar45 & 0xf00000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~(uint)uVar45,1);
    iVar10 = iVar35 + 5;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(longlong *)(lVar36 + 0x10) + (longlong)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(ulonglong *)(local_60 + 0x18);
  }
  if ((~(uint)uVar45 & 0xf000000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~(uint)uVar45,1);
    iVar10 = iVar35 + 6;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(longlong *)(lVar36 + 0x10) + (longlong)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(ulonglong *)(local_60 + 0x18);
  }
  if ((~(uint)uVar45 & 0xf0000000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~(uint)uVar45,1);
    iVar10 = iVar35 + 7;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(longlong *)(lVar36 + 0x10) + (longlong)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(ulonglong *)(local_60 + 0x18);
  }
  if ((~uVar45 & 0xf00000000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~uVar45,1);
    iVar10 = iVar35 + 8;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(longlong *)(lVar36 + 0x10) + (longlong)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(ulonglong *)(local_60 + 0x18);
  }
  if ((~uVar45 & 0xf000000000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~uVar45,1);
    iVar10 = iVar35 + 9;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(longlong *)(lVar36 + 0x10) + (longlong)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(ulonglong *)(local_60 + 0x18);
  }
  if ((~uVar45 & 0xf0000000000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(~uVar45,1);
    iVar10 = iVar35 + 10;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(longlong *)(lVar36 + 0x10) + (longlong)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
    uVar45 = *(ulonglong *)(local_60 + 0x18);
  }
  if ((~uVar45 & 0xf00000000000) != 0) {
    iVar12 = *(int *)(lVar36 + 0x18);
    FUN_00c8e340(0xf00000000000,1);
    iVar10 = iVar35 + 0xb;
    iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
    *(uint *)(*(longlong *)(lVar36 + 0x10) + (longlong)iVar12) = (iVar10 >> 0x1f & 0xcU) + iVar10;
  }
  uVar47 = FUN_00d50b00();
  if ((int)unaff_RDI[0xd] == 0) {
    local_c0 = local_60;
    if (local_130 != local_60) {
      if ((char)local_68 == '\0') {
        if (local_130 != 0) {
          FUN_00d50b00();
        }
        local_c0 = local_130;
        uVar47 = FUN_00d50b20();
      }
      else {
        local_c0 = local_130;
        uVar47 = FUN_00d50b20();
        local_68._0_1_ = '\0';
        local_c0 = local_130;
      }
    }
    FUN_00c8e340(uVar47,0);
    FUN_017e1bf0();
    local_1f8 = local_58;
    local_1f0 = 0;
    if ((char)local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
    }
    local_1f0 = '\x01';
    FUN_017e1bc0();
    local_1e8 = local_100;
    local_1e0 = 0;
    if (local_f8 == '\0') {
      if (local_100 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_f8 = '\0';
    }
    local_1e0 = '\x01';
    uVar47 = FUN_017e1d20();
    local_2e0 = '\0';
    local_2e8 = 0;
    iVar12 = FUN_01794120(&local_2e8,uVar47);
    if ((local_2e0 != '\0') && (local_2e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1e0 != '\0') && (local_1e8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1f0 != '\0') && (local_1f8 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_017e1bf0();
    cVar8 = FUN_01716c00();
    if (((char)local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    iVar10 = -1;
    if (cVar8 != '\0') {
      FUN_017e1bc0();
      iVar10 = FUN_01715480();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_017e1bc0();
      cVar8 = FUN_01716c00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (cVar8 != '\0') {
        iVar10 = iVar10 + 3;
        iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
        iVar10 = (iVar10 >> 0x1f & 0xcU) + iVar10;
      }
      FUN_017e1bf0();
      iVar27 = FUN_01715480();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      iVar27 = iVar27 + -4;
      iVar27 = iVar27 + (((uint)(iVar27 / 6 + (iVar27 >> 0x1f)) >> 1) - (iVar27 >> 0x1f)) * -0xc;
      iVar10 = (uint)((iVar27 >> 0x1f & 0xcU) + iVar27 == iVar10) * 9 + -1;
    }
    iVar27 = iVar10 + iVar35;
    iVar27 = iVar27 + (((uint)(iVar27 / 6 + (iVar27 >> 0x1f)) >> 1) - (iVar27 >> 0x1f)) * -0xc;
    iVar27 = (iVar27 >> 0x1f & 0xcU) + iVar27;
    local_c8 = CONCAT44(local_c8._4_4_,iVar27);
    if (iVar12 == -1) {
      if (iVar10 == -1) {
        iVar35 = 0;
        uVar13 = local_104 | (uint)local_150;
        do {
          iVar12 = FUN_0171a210();
          if (iVar12 != -1) {
            iVar12 = FUN_0171a210();
            iVar12 = iVar12 % 7;
            uVar14 = (iVar12 >> 0x1f & 7U) + iVar12;
            if ((uVar14 != 0xffffffff) && ((uVar13 >> (uVar14 & 0x1f) & 1) != 0)) {
              iVar10 = *(int *)(lVar36 + 0x18);
              FUN_00c8e340(iVar12,1);
              *(int *)(*(longlong *)(lVar36 + 0x10) + (longlong)iVar10) = iVar35;
            }
          }
          iVar35 = iVar35 + 1;
        } while (iVar35 != 0xc);
        local_cc = 0;
      }
      else {
        local_cc = 0;
        iVar35 = 0;
        do {
          iVar12 = FUN_0171a210();
          if (iVar12 != -1) {
            iVar12 = FUN_0171a210();
            uVar13 = (iVar12 % 7 >> 0x1f & 7U) + iVar12 % 7;
            if ((uVar13 != 0xffffffff) &&
               ((((uint)local_150 | local_104) >> (uVar13 & 0x1f) & 1) != 0)) {
              uVar47 = extraout_XMM0_Da_06;
              if ((uint)local_c8 == iVar35) {
                iVar12 = -1;
                iVar10 = 0;
                uVar45 = 0xc;
                do {
                  FUN_017e1bf0();
                  uVar18 = FUN_01716980();
                  cVar8 = (char)uVar18;
                  uVar47 = extraout_XMM0_Da_07;
                  if (((char)local_50 != '\0') && (local_58 != 0)) {
                    uVar18 = FUN_00d50b20();
                    uVar47 = extraout_XMM0_Da_08;
                  }
                  if (cVar8 != '\0') {
                    iVar28 = iVar10 - iVar27;
                    iVar43 = -iVar28;
                    if (0 < iVar28) {
                      iVar43 = iVar28;
                    }
                    iVar43 = 6 - iVar43;
                    iVar28 = -iVar43;
                    if (0 < iVar43) {
                      iVar28 = iVar43;
                    }
                    uVar14 = iVar28 - 6;
                    uVar13 = -uVar14;
                    if (0 < (int)uVar14) {
                      uVar13 = uVar14;
                    }
                    uVar18 = (ulonglong)uVar13;
                    if ((int)uVar13 < (int)uVar45) {
                      uVar45 = uVar18;
                      iVar12 = iVar10;
                    }
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 != 0xc);
                if (iVar12 == -1) goto LAB_01807f70;
                iVar10 = *(int *)(lVar36 + 0x18);
                local_cc = (uint)CONCAT71((int7)(uVar18 >> 8),1);
                FUN_00c8e340(uVar47,1);
              }
              else {
LAB_01807f70:
                iVar10 = *(int *)(lVar36 + 0x18);
                FUN_00c8e340(uVar47,1);
                iVar12 = iVar35;
              }
              *(int *)(*(longlong *)(lVar36 + 0x10) + (longlong)iVar10) = iVar12;
            }
          }
          iVar35 = iVar35 + 1;
        } while (iVar35 != 0xc);
      }
    }
    else {
      iVar12 = iVar12 + iVar35;
      iVar12 = iVar12 + (((uint)(iVar12 / 6 + (iVar12 >> 0x1f)) >> 1) - (iVar12 >> 0x1f)) * -0xc;
      iVar12 = (iVar12 >> 0x1f & 0xcU) + iVar12;
      if (iVar10 == -1) {
        iVar35 = 0;
        local_cc = 0;
        iVar10 = 0;
        do {
          iVar27 = FUN_0171a210();
          if (iVar27 != -1) {
            iVar27 = FUN_0171a210();
            uVar13 = (iVar27 % 7 >> 0x1f & 7U) + iVar27 % 7;
            if ((uVar13 != 0xffffffff) &&
               ((((uint)local_150 | local_104) >> (uVar13 & 0x1f) & 1) != 0)) {
              uVar47 = extraout_XMM0_Da_09;
              if (iVar12 == iVar10) {
                iVar27 = -1;
                iVar43 = 0;
                uVar13 = 0xc;
                do {
                  FUN_017e1bf0();
                  uVar45 = FUN_01716980();
                  cVar8 = (char)uVar45;
                  uVar47 = extraout_XMM0_Da_10;
                  if (((char)local_50 != '\0') && (local_58 != 0)) {
                    uVar45 = FUN_00d50b20();
                    uVar47 = extraout_XMM0_Da_11;
                  }
                  if (cVar8 != '\0') {
                    iVar11 = iVar35 + iVar43;
                    iVar28 = -iVar11;
                    if (0 < iVar11) {
                      iVar28 = iVar11;
                    }
                    iVar28 = 6 - iVar28;
                    iVar11 = -iVar28;
                    if (0 < iVar28) {
                      iVar11 = iVar28;
                    }
                    uVar15 = iVar11 - 6;
                    uVar14 = -uVar15;
                    if (0 < (int)uVar15) {
                      uVar14 = uVar15;
                    }
                    uVar45 = (ulonglong)uVar14;
                    if ((int)uVar14 < (int)uVar13) {
                      uVar13 = uVar14;
                      iVar27 = iVar43;
                    }
                  }
                  iVar43 = iVar43 + 1;
                } while (iVar43 != 0xc);
                if (iVar27 == -1) goto LAB_018080fe;
                iVar43 = *(int *)(lVar36 + 0x18);
                local_cc = (uint)CONCAT71((int7)(uVar45 >> 8),1);
                FUN_00c8e340(uVar47,1);
              }
              else {
LAB_018080fe:
                iVar43 = *(int *)(lVar36 + 0x18);
                FUN_00c8e340(uVar47,1);
                iVar27 = iVar10;
              }
              *(int *)(*(longlong *)(lVar36 + 0x10) + (longlong)iVar43) = iVar27;
            }
          }
          iVar10 = iVar10 + 1;
          iVar35 = iVar35 + -1;
        } while (iVar10 != 0xc);
      }
      else {
        iVar35 = 0;
        local_cc = 0;
        iVar10 = 0;
        do {
          iVar27 = FUN_0171a210();
          if (iVar27 != -1) {
            iVar27 = FUN_0171a210();
            uVar13 = (iVar27 % 7 >> 0x1f & 7U) + iVar27 % 7;
            if ((uVar13 != 0xffffffff) &&
               ((((uint)local_150 | local_104) >> (uVar13 & 0x1f) & 1) != 0)) {
              if ((iVar12 == iVar10 || (uint)local_c8 != iVar10) &&
                 (uVar47 = extraout_XMM0_Da_03, iVar12 != iVar10)) {
LAB_01807db7:
                iVar43 = *(int *)(lVar36 + 0x18);
                FUN_00c8e340(uVar47,1);
                iVar27 = iVar10;
              }
              else {
                iVar27 = -1;
                iVar43 = 0;
                uVar13 = 0xc;
                do {
                  FUN_017e1bf0();
                  uVar45 = FUN_01716980();
                  cVar8 = (char)uVar45;
                  uVar47 = extraout_XMM0_Da_04;
                  if (((char)local_50 != '\0') && (local_58 != 0)) {
                    uVar45 = FUN_00d50b20();
                    uVar47 = extraout_XMM0_Da_05;
                  }
                  if (cVar8 != '\0') {
                    iVar11 = iVar35 + iVar43;
                    iVar28 = -iVar11;
                    if (0 < iVar11) {
                      iVar28 = iVar11;
                    }
                    iVar28 = 6 - iVar28;
                    iVar11 = -iVar28;
                    if (0 < iVar28) {
                      iVar11 = iVar28;
                    }
                    uVar15 = iVar11 - 6;
                    uVar14 = -uVar15;
                    if (0 < (int)uVar15) {
                      uVar14 = uVar15;
                    }
                    uVar45 = (ulonglong)uVar14;
                    if ((int)uVar14 < (int)uVar13) {
                      uVar13 = uVar14;
                      iVar27 = iVar43;
                    }
                  }
                  iVar43 = iVar43 + 1;
                } while (iVar43 != 0xc);
                if (iVar27 == -1) goto LAB_01807db7;
                iVar43 = *(int *)(lVar36 + 0x18);
                local_cc = (uint)CONCAT71((int7)(uVar45 >> 8),1);
                FUN_00c8e340(uVar47,1);
              }
              *(int *)(*(longlong *)(lVar36 + 0x10) + (longlong)iVar43) = iVar27;
            }
          }
          iVar10 = iVar10 + 1;
          iVar35 = iVar35 + -1;
        } while (iVar10 != 0xc);
      }
    }
    if ((local_cc & 1) != 0) {
      local_58 = 0;
      local_50 = FUN_00e8b540;
      _qsort_r(&local_58,4,0x370b80,in_R9,(int *)CONCAT71(in_stack_fffffffffffffc69,uVar49));
    }
  }
  else {
    local_cc = 0;
    local_c0 = local_60;
  }
  uVar47 = FUN_00d242c0();
  FUN_00d242c0(uVar47,unaff_RDI);
  iVar35 = FUN_01715480();
  iVar12 = FUN_01715480();
  if ((int)unaff_RDI[0xd] == 0) {
    iVar35 = FUN_01715480();
    iVar12 = FUN_01715480();
  }
  iVar35 = iVar35 - iVar12;
  iVar12 = 6;
  if (iVar35 < 6) {
    iVar12 = iVar35;
  }
  uVar13 = (iVar35 - iVar12) + 0xb;
  iVar35 = (uVar13 % 0xc - uVar13) + iVar35;
  iVar12 = -6;
  if (-6 < iVar35) {
    iVar12 = iVar35;
  }
  uVar13 = (uint)(iVar12 - iVar35 != 0);
  uVar13 = iVar35 + (((iVar12 - iVar35) - uVar13) / 0xc + uVar13) * 0xc;
  uVar14 = -uVar13;
  if (0 < (int)uVar13) {
    uVar14 = uVar13;
  }
  local_140 = 0;
  if (uVar14 < 3) {
    local_140 = (ulonglong)uVar13;
  }
  _expf(DAT_024167a0 / (float)*(int *)(local_b8 + 0xc));
  iVar35 = FUN_00e7d780();
  if (6 < *(int *)(lVar36 + 0x18) + 3U) {
    local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = local_b8;
    local_40._0_4_ = -1;
    local_40._4_4_ = 0;
    local_38 = 0;
    uVar13 = (int)local_140 + 9;
    ppuVar38 = (undefined8 **)(ulonglong)uVar13;
    local_d0 = (int)local_140 - 9;
    local_118 = CONCAT44(local_118._4_4_,uVar13);
    sVar40 = local_d0;
    iVar12 = 0;
LAB_018084fa:
    iVar10 = 0;
    if (iVar12 != 0) {
      if (iVar12 < 1) {
        iVar10 = -iVar12;
        local_40._4_4_ = iVar10;
      }
      else {
        local_40._0_4_ = (int)local_40 - iVar12;
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar10 = 0;
        ppuVar38 = (undefined8 **)(local_118 & 0xffffffff);
        sVar40 = local_d0;
        local_40._4_4_ = iVar10;
      }
    }
    lVar29 = (longlong)(int)local_40;
    local_40._0_4_ = (int)local_40 + 1;
    if ((int)local_40 < *(int *)(local_48 + 0xc)) {
      local_58 = *(ulonglong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar29 * 8);
      iVar27 = *(int *)(lVar36 + 0x18);
      iVar12 = iVar10;
      if (3 < iVar27) {
        iVar43 = *(int *)(local_58 + 0xc) + (int)local_140;
        bVar46 = false;
        uVar13 = 0xffffffff;
        bVar32 = false;
        iVar10 = 0;
        do {
          iVar12 = iVar27 + 3;
          if (-1 < iVar27) {
            iVar12 = iVar27;
          }
          if (3 < iVar27) {
            iVar27 = iVar43 + (((uint)(iVar43 / 6 + (iVar43 >> 0x1f)) >> 1) - (iVar43 >> 0x1f)) *
                              -0xc;
            lVar29 = 0;
            do {
              if (*(int *)(*(longlong *)(lVar36 + 0x10) + lVar29 * 4) ==
                  (iVar27 >> 0x1f & 0xcU) + iVar27) {
                iVar12 = iVar43 - *(int *)(local_58 + 0xc);
                if (iVar12 < (int)ppuVar38) {
                  if ((int)sVar40 < iVar12) {
                    if (iVar43 - 1U < 0x7e) {
                      lVar29 = *(longlong *)(local_58 + 0x10);
                      local_c8 = (ulonglong)*(int *)(lVar29 + 0x18);
                      FUN_00c8e340(local_c8,1);
                      *(int *)(*(longlong *)(lVar29 + 0x10) + local_c8) = iVar43;
                      ppuVar38 = (undefined8 **)(local_118 & 0xffffffff);
                      sVar40 = local_d0;
                    }
                    iVar10 = iVar10 + 1;
                  }
                  else {
                    bVar46 = true;
                  }
                }
                else {
                  bVar32 = true;
                }
                break;
              }
              lVar29 = lVar29 + 1;
            } while (iVar12 >> 2 != (int)lVar29);
          }
          iVar12 = local_40._4_4_;
          if ((bVar46 && bVar32) || (iVar35 <= iVar10)) break;
          iVar43 = iVar43 + uVar13;
          uVar14 = 1 - uVar13;
          bVar3 = (int)uVar13 < 1;
          uVar13 = ~uVar13;
          if (bVar3) {
            uVar13 = uVar14;
          }
          iVar27 = *(int *)(lVar36 + 0x18);
        } while( true );
      }
      goto LAB_018084fa;
    }
    FUN_0180d270();
    iVar35 = *(int *)(local_b8 + 0xc);
    lVar29 = (longlong)iVar35;
    uVar45 = *(ulonglong *)(local_168 + 0x38);
    pvVar20 = *(void **)(local_168 + 0x40);
    lVar36 = *(longlong *)(local_168 + 0x48);
    local_160 = pvVar20;
    FUN_00c8e690();
    uVar18 = local_58;
    if (((char)local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    local_d8 = uVar18;
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    FUN_00c8e710();
    local_128 = local_58;
    if (((char)local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
      if (((char)local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    uVar47 = FUN_00c92160();
    FUN_00c8e340(uVar47,0);
    uVar47 = ___bzero();
    FUN_00c8e340(uVar47,0);
    uVar47 = ___bzero();
    local_220 = 0;
    FUN_00c8e340(uVar47,0);
    local_198 = 0;
    local_350 = 0;
    lVar31 = 0;
    local_138 = uVar45;
LAB_01808883:
    FUN_00c8e340();
    uVar47 = ___bzero();
    uVar47 = FUN_00c8e340(uVar47,0);
    uVar47 = FUN_00c8e340(uVar47,0);
    lVar30 = *(longlong *)(uVar6 + 0x68);
    if ((lVar30 != 0) && (3 < *(int *)(lVar30 + 0x18))) {
      lVar41 = 0;
      do {
        uVar2 = *(undefined4 *)(*(longlong *)(lVar30 + 0x10) + lVar41 * 4);
        iVar12 = *(int *)(lVar36 + 0x18);
        uVar47 = FUN_00c8e340(uVar47,1);
        *(undefined4 *)(*(longlong *)(lVar36 + 0x10) + (longlong)iVar12) = uVar2;
        iVar12 = *(int *)(lVar30 + 0x18);
        iVar10 = iVar12 + 3;
        if (-1 < iVar12) {
          iVar10 = iVar12;
        }
        pvVar20 = (void *)(ulonglong)(uint)(iVar10 >> 2);
        lVar41 = lVar41 + 1;
      } while ((int)lVar41 < iVar10 >> 2);
    }
    lVar30 = *(longlong *)(uVar6 + 0x60);
    if ((lVar30 != 0) && (3 < *(int *)(lVar30 + 0x18))) {
      pvVar20 = *(void **)(lVar30 + 0x10);
      lVar41 = *(longlong *)((longlong)local_160 + 0x10);
      lVar37 = 0;
      do {
        piVar1 = (int *)(lVar41 + (longlong)*(int *)((longlong)pvVar20 + lVar37 * 4) * 4);
        *piVar1 = *piVar1 + 1;
        iVar12 = *(int *)(lVar30 + 0x18);
        iVar10 = iVar12 + 3;
        if (-1 < iVar12) {
          iVar10 = iVar12;
        }
        lVar37 = lVar37 + 1;
      } while ((int)lVar37 < iVar10 >> 2);
    }
    lVar30 = *(longlong *)(uVar6 + 0x70);
    if (lVar30 != 0) {
      uVar47 = FUN_00d50b00();
    }
    FUN_00c8e340(uVar47,0);
    _memcpy(pvVar20,(void *)(longlong)*(int *)(lVar30 + 0x18),(size_t)ppuVar38);
    FUN_00d50b20();
    local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = local_b8;
    local_40._0_4_ = -1;
    local_40._4_4_ = 0;
    local_38 = 0;
    local_110 = CONCAT44(local_110._4_4_,0xffffffff);
    local_d0 = 0;
    local_1b8 = local_1b8 & 0xffffffff00000000;
    local_180 = (void *)((ulonglong)local_180 & 0xffffffff00000000);
    uVar13 = 0;
    local_1b0 = local_1b0 & 0xffffffff00000000;
    local_118 = local_118 & 0xffffffff00000000;
    local_158 = local_158 & 0xffffffff00000000;
    local_1a0 = local_1a0 & 0xffffffff00000000;
    iVar12 = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          local_40._4_4_ = -local_40._4_4_;
        }
        else {
          local_40._0_4_ = (int)local_40 - local_40._4_4_;
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          local_40._4_4_ = 0;
        }
      }
      lVar30 = (longlong)(int)local_40;
      local_40._0_4_ = (int)local_40 + 1;
      if (*(int *)(local_48 + 0xc) <= (int)local_40) break;
      local_58 = *(ulonglong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar30 * 8);
      iVar10 = *(int *)(local_58 + 0xc);
      iVar27 = *(int *)(*(longlong *)(*(longlong *)(local_58 + 0x10) + 0x10) +
                       (longlong)
                       *(int *)(*(longlong *)(local_138 + 0x10) +
                               ((longlong)(int)local_40 + (longlong)local_38) * 4) * 4);
      uVar14 = (uint)local_118 & 0xff;
      if (iVar27 < iVar12) {
        uVar14 = 1;
      }
      local_118 = CONCAT44(local_118._4_4_,uVar14);
      if (((int)local_40 == *(int *)(local_48 + 0xc) + -1) &&
         (iVar43 = FUN_0171a290(), iVar43 != -1)) {
        iVar43 = FUN_0171a290();
        iVar43 = iVar43 % 7;
        uVar14 = (iVar43 >> 0x1f & 7U) + iVar43;
        if (uVar14 != 0xffffffff) {
          local_1a0 = CONCAT44(local_1a0._4_4_,(int)CONCAT71((uint7)(uint3)((uint)iVar43 >> 8),1));
          if ((((uint)local_150 >> (uVar14 & 0x1f) & 1) == 0) &&
             ((((uVar14 & 0xfffffffd) != 1 || (cVar8 = FUN_01716e70(), cVar8 != '\0')) ||
              ((local_150 & 4) == 0)))) {
            local_1a0 = local_1a0 & 0xffffffff00000000;
          }
        }
      }
      uVar19 = FUN_01717260();
      iVar43 = iVar27 >> 0x1f;
      if ((local_38 + (int)local_40 == 1) && ((int)uVar19 != -1)) {
        iVar28 = iVar27 + (((uint)(iVar27 / 6 + iVar43) >> 1) - iVar43) * -0xc;
        iVar12 = iVar12 + (((uint)(iVar12 / 6 + (iVar12 >> 0x1f)) >> 1) - (iVar12 >> 0x1f)) * -0xc;
        iVar28 = ((iVar12 >> 0x1f & 0xfffffff4U) - iVar12) + iVar28 + (iVar28 >> 0x1f & 0xcU);
        iVar12 = -iVar28;
        if (0 < iVar28) {
          iVar12 = iVar28;
        }
        iVar12 = 6 - iVar12;
        iVar28 = -iVar12;
        if (0 < iVar12) {
          iVar28 = iVar12;
        }
        iVar28 = iVar28 + -6;
        iVar12 = -iVar28;
        if (0 < iVar28) {
          iVar12 = iVar28;
        }
        if (((iVar28 == 0) || (iVar12 == 5)) || (iVar12 == (int)uVar19)) {
          local_1b0 = CONCAT44(local_1b0._4_4_,(int)CONCAT71((int7)((ulonglong)uVar19 >> 8),1));
        }
      }
      sVar40 = iVar27 - iVar10;
      if (((((int)sVar40 < (int)unaff_RDI[9]) ||
           (*(int *)((longlong)unaff_RDI + 0x4c) < (int)sVar40)) || (iVar27 < (int)unaff_RDI[10]))
         || (*(int *)((longlong)unaff_RDI + 0x54) < iVar27)) {
        uVar13 = 1;
      }
      cVar8 = FUN_017e4320();
      uVar13 = uVar13 & 0xff;
      if (cVar8 == '\0') {
        uVar13 = 1;
      }
      local_c8 = CONCAT44(local_c8._4_4_,uVar13);
      iVar28 = iVar27 + (((uint)(iVar27 / 6 + iVar43) >> 1) - iVar43) * -0xc;
      iVar28 = (iVar28 >> 0x1f & 0xcU) + iVar28;
      iVar12 = *(int *)(lVar36 + 0x18);
      lVar30 = (longlong)iVar12;
      iVar43 = iVar12 + 3;
      if (-1 < lVar30) {
        iVar43 = iVar12;
      }
      if (3 < lVar30) {
        iVar43 = iVar43 >> 2;
        lVar41 = 0;
        do {
          if (*(int *)(*(longlong *)(lVar36 + 0x10) + lVar41 * 4) == iVar28) goto LAB_01808d8e;
          lVar41 = lVar41 + 1;
        } while (iVar43 != (int)lVar41);
      }
      FUN_00c8e340(iVar43,1);
      *(int *)(*(longlong *)(lVar36 + 0x10) + lVar30) = iVar28;
LAB_01808d8e:
      uVar45 = local_128;
      iVar12 = *(int *)(*(longlong *)((longlong)local_160 + 0x10) + (longlong)iVar27 * 4);
      *(int *)(*(longlong *)((longlong)local_160 + 0x10) + (longlong)iVar27 * 4) = iVar12 + 1;
      local_140 = CONCAT71(local_140._1_7_,0 < iVar12);
      sVar4 = -sVar40;
      if (0 < (int)sVar40) {
        sVar4 = sVar40;
      }
      if ((int)local_d0 < (int)sVar4) {
        local_d0 = sVar4;
      }
      iVar12 = *(int *)(local_128 + 0x18);
      FUN_00c8e340();
      *(size_t *)(*(longlong *)(uVar45 + 0x10) + (longlong)iVar12) = sVar40;
      pVar23 = (pthread_key_t)local_110;
      if (((pthread_key_t)local_110 == 0xffffffff) ||
         ((pthread_key_t)local_110 == local_38 + (int)local_40)) {
        if (((int)unaff_RDI[0xc] == 1) && ((int)unaff_RDI[0xd] != 0)) {
          uVar19 = FUN_017154c0();
          local_158 = CONCAT44(local_158._4_4_,
                               (int)CONCAT71((int7)((ulonglong)uVar19 >> 8),(int)uVar19 == iVar28));
          uVar13 = (uint)local_c8;
        }
        else {
          uVar14 = local_104;
          if ((iVar27 < 0x40) && ((int)unaff_RDI[0xd] != 0)) {
            local_2d8 = local_60;
            local_2d0 = '\0';
            FUN_017e1da0();
            puVar17 = local_100;
            local_1d0 = 0;
            if (local_f8 == '\0') {
              if (local_100 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_f8 = '\0';
            }
            local_1d0 = '\x01';
            local_1d8 = puVar17;
            local_2c8 = local_130;
            local_2c0 = '\0';
            FUN_017e1d20();
            FUN_017e1dd0();
            puVar24 = &local_2d8;
            ppuVar38 = &local_1d8;
            iVar12 = (**(code **)(*unaff_RDI + 0x3d0))(puVar24,iVar27,ppuVar38,&local_2c8);
            pVar23 = (pthread_key_t)puVar24;
            if ((local_358 != '\0') && (local_360 != 0)) {
              FUN_00d50b20();
            }
            if ((local_2c0 != '\0') && (local_2c8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_1d0 != '\0') && (local_1d8 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_2d0 != '\0') && (local_2d8 != 0)) {
              FUN_00d50b20();
            }
            if (iVar12 != (int)unaff_RDI[0xc]) {
              *(undefined1 *)(local_168 + 0x79) = 1;
            }
            uVar14 = FUN_018064c0();
          }
          iVar12 = FUN_0171a290();
          uVar13 = (uint)local_c8;
          if (iVar12 != -1) {
            iVar12 = FUN_0171a290();
            pVar23 = iVar12 % 7;
            uVar15 = ((int)pVar23 >> 0x1f & 7U) + pVar23;
            if (uVar15 != 0xffffffff) {
              pVar23 = (pthread_key_t)CONCAT71((uint7)(uint3)(pVar23 >> 8),1);
              local_158 = CONCAT44(local_158._4_4_,pVar23);
              if (((uVar14 >> (uVar15 & 0x1f) & 1) == 0) &&
                 ((((uVar15 & 0xfffffffd) != 1 || (cVar8 = FUN_01716e70(), cVar8 != '\0')) ||
                  ((uVar14 & 4) == 0)))) {
                local_158 = local_158 & 0xffffffff00000000;
              }
            }
          }
        }
        local_110 = CONCAT44(local_110._4_4_,local_38 + (int)local_40);
        iVar12 = *(int *)((longlong)unaff_RDI + 0x6c);
      }
      else {
        iVar12 = *(int *)((longlong)unaff_RDI + 0x6c);
        uVar13 = (uint)local_c8;
      }
      if ((iVar12 != 0) && (*(longlong *)(uVar6 + 0xb8) != 0)) {
        pvVar20 = _pthread_getspecific(pVar23);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01531cc0();
        iVar12 = *(int *)(local_100 + 3);
        iVar43 = iVar12 + 3;
        if (-1 < iVar12) {
          iVar43 = iVar12;
        }
        iVar28 = -1;
        if (3 < iVar12) {
          lVar30 = 0;
          do {
            if (*(int *)(local_100[2] + lVar30 * 4) == iVar10) {
              iVar28 = (int)lVar30;
              break;
            }
            lVar30 = lVar30 + 1;
          } while (iVar43 >> 2 != (int)lVar30);
        }
        if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar28 != -1) {
          iVar12 = *(int *)(local_d8 + 0x18);
          lVar30 = (longlong)iVar12;
          iVar10 = iVar12 + 3;
          if (-1 < lVar30) {
            iVar10 = iVar12;
          }
          if (3 < lVar30) {
            iVar10 = iVar10 >> 2;
            lVar41 = 0;
            do {
              if (*(int *)(*(longlong *)(local_d8 + 0x10) + lVar41 * 4) == iVar27)
              goto LAB_01808a80;
              lVar41 = lVar41 + 1;
            } while (iVar10 != (int)lVar41);
          }
          FUN_00c8e340(iVar10,1);
          *(int *)(*(longlong *)(local_d8 + 0x10) + lVar30) = iVar27;
          uVar13 = (uint)local_c8;
        }
      }
LAB_01808a80:
      local_180 = (void *)CONCAT44(local_180._4_4_,(int)local_180 + (uint)(byte)local_140);
      local_1b8 = CONCAT44(local_1b8._4_4_,(int)local_1b8 + sVar4);
      iVar12 = iVar27;
    }
    FUN_0180d270();
    local_1fc = DAT_02390124;
    if ((int)unaff_RDI[0xd] != 0) {
      local_2b8 = local_148;
      local_2b0 = '\0';
      local_210 = 0;
      lVar30 = *(longlong *)(uVar6 + 0x58);
      if (lVar30 != 0) {
        FUN_00d50b00();
      }
      local_210 = '\x01';
      local_2a8 = local_60;
      local_2a0 = '\0';
      local_290 = '\0';
      local_298 = lVar36;
      local_218 = lVar30;
      local_1fc = (float)FUN_017dd520(&local_298,&local_2a8);
      if ((local_290 != '\0') && (local_298 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2a0 != '\0') && (local_2a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2b0 != '\0') && (local_2b8 != 0)) {
        FUN_00d50b20();
      }
    }
    if (local_120 != 0) {
      FUN_00d50b00();
    }
    lVar30 = *(longlong *)((longlong)local_160 + 0x10);
    lVar41 = 0;
    uVar14 = 0;
    while( true ) {
      if (*(int *)(lVar30 + lVar41 * 4) != 0) {
        lVar37 = (longlong)(int)uVar14;
        uVar14 = uVar14 + 1;
        *(int *)(*(longlong *)(local_120 + 0x10) + lVar37 * 4) = (int)lVar41;
      }
      if (lVar41 == 0x7e) break;
      if (*(int *)(lVar30 + 4 + lVar41 * 4) != 0) {
        lVar37 = (longlong)(int)uVar14;
        uVar14 = uVar14 + 1;
        *(int *)(*(longlong *)(local_120 + 0x10) + lVar37 * 4) = (int)lVar41 + 1;
      }
      lVar41 = lVar41 + 2;
    }
    local_c8 = CONCAT44(local_c8._4_4_,uVar13);
    if ((int)uVar14 < 1) {
      local_6c = 0;
      local_110 = (ulonglong)local_110._4_4_ << 0x20;
    }
    else {
      local_140 = (ulonglong)(uVar14 - 1);
      uVar45 = 0;
      local_110 = (ulonglong)local_110._4_4_ << 0x20;
      local_6c = 0;
      do {
        iVar12 = *(int *)(*(longlong *)(local_120 + 0x10) + uVar45 * 4);
        iVar10 = FUN_0171a210();
        if (iVar10 != -1) {
          if (uVar45 != 0) {
            iVar27 = *(int *)(*(longlong *)(local_120 + 0x10) + -4 + uVar45 * 4);
            iVar43 = FUN_0171a210();
            uVar15 = iVar12 - iVar27;
            uVar13 = -uVar15;
            if (0 < (int)uVar15) {
              uVar13 = uVar15;
            }
            if (uVar13 < 4) {
              local_110 = CONCAT44(local_110._4_4_,
                                   (pthread_key_t)local_110 + (iVar10 == 1 && iVar43 == 0));
              local_6c = local_6c + (uint)(iVar10 == 8 && iVar43 == 0) +
                         (uint)(iVar43 == 2 && iVar10 == 10);
            }
          }
          if (uVar45 < local_140) {
            iVar27 = *(int *)(*(longlong *)(local_120 + 0x10) + 4 + uVar45 * 4);
            iVar43 = FUN_0171a210();
            uVar15 = iVar12 - iVar27;
            uVar13 = -uVar15;
            if (0 < (int)uVar15) {
              uVar13 = uVar15;
            }
            if (uVar13 < 4) {
              local_110 = CONCAT44(local_110._4_4_,
                                   (pthread_key_t)local_110 + (iVar10 == 3 && iVar43 == 4));
              local_6c = local_6c + (uint)(iVar43 == 2 && iVar10 == 8) +
                         (uint)(iVar10 == 10 && iVar43 == 4);
            }
          }
        }
        uVar45 = uVar45 + 1;
      } while (uVar14 != uVar45);
    }
    local_288 = local_128;
    local_280 = '\0';
    uVar47 = FUN_017dd2b0();
    uVar45 = local_c8;
    if ((local_280 != '\0') && (local_288 != 0)) {
      FUN_00d50b20();
    }
    uVar21 = FUN_00e7bcc0();
    local_58 = uVar21;
    FUN_00e7bac0();
    uVar18 = local_58;
    sVar40 = (size_t)ppuVar38;
    fVar48 = 0.0;
    if ((*(int *)((longlong)unaff_RDI + 0x6c) != 0) && (*(longlong *)(uVar6 + 0xb0) != 0)) {
      pvVar20 = _pthread_getspecific((pthread_key_t)local_58);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01531cc0();
      uVar39 = local_58;
      local_140 = local_58;
      if ((char)local_50 == '\0') {
        if (local_58 == 0) goto LAB_018097d4;
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
LAB_018096a0:
        uVar13 = *(uint *)(uVar39 + 0x18);
        uVar15 = uVar13 + 3;
        if (-1 < (int)uVar13) {
          uVar15 = uVar13;
        }
        uVar15 = (int)uVar15 >> 2;
        local_224 = 0.0;
        if ((int)uVar14 < 1) {
          if (3 < (int)uVar13) {
            uVar14 = *(uint *)(local_d8 + 0x18);
            uVar44 = uVar14;
            if ((int)uVar14 < 0) {
              uVar44 = uVar14 + 3;
            }
            if ((uVar14 + 3 < 7) || ((int)uVar14 < 4)) {
              uVar13 = uVar15 & 7;
              if (6 < uVar15 - 1) {
                iVar12 = -(uVar15 & 0xfffffff8);
                do {
                  iVar12 = iVar12 + 8;
                } while (iVar12 != 0);
              }
              for (; uVar13 != 0; uVar13 = uVar13 - 1) {
              }
            }
            else {
              ppuVar38 = *(undefined8 ***)(uVar39 + 0x10);
              iVar12 = (int)uVar44 >> 2;
              if ((uVar13 & 0xfffffffc) == 4) {
                local_224 = 0.0;
                uVar13 = 0;
              }
              else {
                uVar14 = uVar15 & 0xfffffffe;
                local_224 = 0.0;
                uVar13 = 0;
                do {
                  lVar30 = 0;
                  do {
                    if (*(int *)(*(longlong *)(local_d8 + 0x10) + lVar30 * 4) ==
                        *(int *)((longlong)ppuVar38 + (ulonglong)uVar13 * 4)) {
                      local_224 = local_224 + DAT_02390124;
                      break;
                    }
                    lVar30 = lVar30 + 1;
                  } while (iVar12 != (int)lVar30);
                  lVar30 = 0;
                  do {
                    if (*(int *)(*(longlong *)(local_d8 + 0x10) + lVar30 * 4) ==
                        *(int *)((longlong)ppuVar38 + (ulonglong)(uVar13 | 1) * 4)) {
                      local_224 = local_224 + DAT_02390124;
                      break;
                    }
                    lVar30 = lVar30 + 1;
                  } while (iVar12 != (int)lVar30);
                  uVar13 = uVar13 + 2;
                  uVar14 = uVar14 - 2;
                } while (uVar14 != 0);
              }
              if ((uVar15 & 1) != 0) {
                lVar30 = 0;
                do {
                  if (*(int *)(*(longlong *)(local_d8 + 0x10) + lVar30 * 4) ==
                      *(int *)((longlong)ppuVar38 + (ulonglong)uVar13 * 4)) goto LAB_0180998f;
                  lVar30 = lVar30 + 1;
                } while (iVar12 != (int)lVar30);
              }
            }
          }
        }
        else if (3 < (int)uVar13) {
          ppuVar38 = *(undefined8 ***)(uVar39 + 0x10);
          uVar44 = *(uint *)(local_d8 + 0x18);
          uVar5 = uVar44;
          if ((int)uVar44 < 0) {
            uVar5 = uVar44 + 3;
          }
          if (uVar44 + 3 < 7) {
            lVar30 = *(longlong *)(local_120 + 0x10);
            local_224 = 0.0;
            uVar39 = 0;
            do {
              iVar12 = *(int *)((longlong)ppuVar38 + uVar39 * 4);
              uVar25 = 0;
              if (2 < (ulonglong)uVar14 - 1) {
                do {
                  if (*(int *)(lVar30 + uVar25 * 4) == iVar12) {
                    local_224 = local_224 + DAT_02390124;
                    if (*(int *)(lVar30 + 4 + uVar25 * 4) != iVar12) goto LAB_01809784;
LAB_018097ae:
                    local_224 = local_224 + DAT_02390124;
                    if (*(int *)(lVar30 + 8 + uVar25 * 4) != iVar12) goto LAB_0180978a;
LAB_018097bc:
                    local_224 = local_224 + DAT_02390124;
                    iVar10 = *(int *)(lVar30 + 0xc + uVar25 * 4);
                  }
                  else {
                    if (*(int *)(lVar30 + 4 + uVar25 * 4) == iVar12) goto LAB_018097ae;
LAB_01809784:
                    if (*(int *)(lVar30 + 8 + uVar25 * 4) == iVar12) goto LAB_018097bc;
LAB_0180978a:
                    iVar10 = *(int *)(lVar30 + 0xc + uVar25 * 4);
                  }
                  if (iVar10 == iVar12) {
                    local_224 = local_224 + DAT_02390124;
                  }
                  uVar25 = uVar25 + 4;
                } while ((uVar14 & 0xfffffffc) != uVar25);
              }
              if ((ulonglong)(uVar14 & 3) != 0) {
                uVar22 = 0;
                do {
                  fVar48 = local_224 + DAT_02390124;
                  if (*(int *)(lVar30 + uVar25 * 4 + uVar22 * 4) != iVar12) {
                    fVar48 = local_224;
                  }
                  local_224 = fVar48;
                  uVar22 = uVar22 + 1;
                } while ((uVar14 & 3) != uVar22);
              }
              uVar13 = (int)uVar39 + 1;
              uVar39 = (ulonglong)uVar13;
            } while ((int)uVar13 < (int)uVar15);
          }
          else if ((int)uVar44 < 4) {
            uVar13 = uVar15 & 7;
            if (6 < uVar15 - 1) {
              iVar12 = -(uVar15 & 0xfffffff8);
              do {
                iVar12 = iVar12 + 8;
              } while (iVar12 != 0);
            }
            for (; uVar13 != 0; uVar13 = uVar13 - 1) {
            }
          }
          else {
            iVar12 = (int)uVar5 >> 2;
            if ((uVar13 & 0xfffffffc) == 4) {
              local_224 = 0.0;
              uVar13 = 0;
            }
            else {
              uVar14 = uVar15 & 0xfffffffe;
              local_224 = 0.0;
              uVar13 = 0;
              do {
                lVar30 = 0;
                do {
                  if (*(int *)(*(longlong *)(local_d8 + 0x10) + lVar30 * 4) ==
                      *(int *)((longlong)ppuVar38 + (ulonglong)uVar13 * 4)) {
                    local_224 = local_224 + DAT_02390124;
                    break;
                  }
                  lVar30 = lVar30 + 1;
                } while (iVar12 != (int)lVar30);
                lVar30 = 0;
                do {
                  if (*(int *)(*(longlong *)(local_d8 + 0x10) + lVar30 * 4) ==
                      *(int *)((longlong)ppuVar38 + (ulonglong)(uVar13 | 1) * 4)) {
                    local_224 = local_224 + DAT_02390124;
                    break;
                  }
                  lVar30 = lVar30 + 1;
                } while (iVar12 != (int)lVar30);
                uVar13 = uVar13 + 2;
                uVar14 = uVar14 - 2;
              } while (uVar14 != 0);
            }
            if ((uVar15 & 1) != 0) {
              lVar30 = 0;
              do {
                if (*(int *)(*(longlong *)(local_d8 + 0x10) + lVar30 * 4) ==
                    *(int *)((longlong)ppuVar38 + (ulonglong)uVar13 * 4)) goto LAB_0180998f;
                lVar30 = lVar30 + 1;
              } while (iVar12 != (int)lVar30);
            }
          }
        }
      }
      else {
        if (local_58 != 0) goto LAB_018096a0;
LAB_018097d4:
        local_224 = 0.0;
      }
      goto LAB_018099a0;
    }
    goto LAB_018099dc;
  }
  goto LAB_0180adcd;
LAB_0180998f:
  local_224 = local_224 + DAT_02390124;
LAB_018099a0:
  sVar40 = (size_t)ppuVar38;
  iVar12 = *(int *)(local_140 + 0x18);
  iVar10 = iVar12 + 3;
  if (-1 < iVar12) {
    iVar10 = iVar12;
  }
  FUN_00d50b20();
  fVar48 = local_224 / (float)(iVar10 >> 2);
LAB_018099dc:
  lVar30 = local_198;
  if ((local_350 == 0) && (local_350 = *(longlong *)(local_168 + 0x68), local_350 == local_198)) {
    local_350 = *(longlong *)(local_168 + 0x70);
  }
  *(char *)(local_350 + 0x48) = (char)local_118;
  *(int *)(local_350 + 0x1c) = (int)local_180;
  *(int *)(local_350 + 0x24) = (int)local_1b8;
  *(ulonglong *)(local_350 + 0x28) = uVar21;
  *(size_t *)(local_350 + 0x30) = local_d0;
  *(ulonglong *)(local_350 + 0x34) = uVar18;
  *(undefined4 *)(local_350 + 0x3c) = uVar47;
  *(float *)(local_350 + 0x40) = fVar48;
  *(char *)(local_350 + 0x49) = (char)uVar45;
  *(byte *)(local_350 + 0x4a) = ((byte)local_158 | (byte)local_cc) & 1;
  *(char *)(local_350 + 0x4c) = (char)local_1b0;
  pvVar20 = (void *)((ulonglong)CONCAT31((int3)(local_1a0 >> 8),(byte)local_1a0 | (byte)local_cc) &
                    0xffffffffffffff01);
  *(char *)(local_350 + 0x4d) = (char)pvVar20;
  *(float *)(local_350 + 0x18) = local_1fc;
  *(pthread_key_t *)(local_350 + 0x44) = (pthread_key_t)local_110 - local_6c;
  fVar48 = local_1fc;
  if (*(longlong *)(local_350 + 0x58) != 0) {
    *(undefined8 *)(local_350 + 0x58) = 0;
    fVar48 = (float)FUN_00d50b20();
  }
  uVar45 = local_138;
  *(undefined4 *)(local_350 + 0x20) = 0;
  *(undefined1 *)(local_350 + 0x4b) = 0;
  local_198 = lVar30;
  if (lVar30 != 0) {
    local_270 = '\0';
    local_268 = lVar30;
    local_260 = '\0';
    local_278 = local_350;
    iVar12 = FUN_018048e0(fVar48,local_168);
    fVar48 = extraout_XMM0_Da_12;
    if ((local_260 != '\0') && (local_268 != 0)) {
      fVar48 = (float)FUN_00d50b20();
    }
    if ((local_270 != '\0') && (local_278 != 0)) {
      fVar48 = (float)FUN_00d50b20();
    }
    lVar30 = local_350;
    if (iVar12 != -1) goto LAB_01809b7f;
  }
  FUN_00c8e340(fVar48,0);
  _memcpy(pvVar20,(void *)(longlong)*(int *)(uVar45 + 0x18),sVar40);
  lVar30 = 0;
  local_198 = local_350;
LAB_01809b7f:
  iVar27 = (int)lVar31;
  lVar41 = (longlong)iVar27;
  ppuVar38 = *(undefined8 ***)(local_b8 + 0x10);
  iVar12 = *(int *)(ppuVar38[lVar41][2] + 0x18);
  iVar10 = iVar12 + 3;
  if (-1 < iVar12) {
    iVar10 = iVar12;
  }
  if ((int)local_220 < (iVar10 >> 2) + -1) {
    uVar13 = (int)local_220 + 1;
    local_220 = (ulonglong)uVar13;
    pvVar20 = *(void **)(uVar45 + 0x10);
    *(uint *)((longlong)pvVar20 + lVar41 * 4) = uVar13;
  }
  else {
    lVar37 = lVar41 + 1;
    lVar31 = lVar29;
    if (lVar29 < lVar37) {
      lVar31 = lVar37;
    }
    lVar41 = lVar41 * 4 + -4;
    iVar27 = iVar27 + -1;
    do {
      if (lVar29 <= lVar37) {
        bVar34 = 0;
        bVar33 = 0;
        goto joined_r0x01809c6c;
      }
      iVar12 = *(int *)(*(longlong *)(uVar45 + 0x10) + 8 + lVar41);
      uVar13 = *(uint *)(*(longlong *)(*(longlong *)((longlong)ppuVar38 + lVar41 * 2 + 0x10) + 0x10)
                        + 0x18);
      pvVar20 = (void *)(ulonglong)uVar13;
      uVar14 = uVar13 + 3;
      if (-1 < (int)uVar13) {
        uVar14 = uVar13;
      }
      lVar41 = lVar41 + 4;
      iVar27 = iVar27 + 1;
      lVar37 = lVar37 + 1;
    } while (iVar12 == ((int)uVar14 >> 2) + -1);
    *(int *)(*(longlong *)(uVar45 + 0x10) + 4 + lVar41) = iVar12 + 1;
    local_220 = 0;
    if (-1 < iVar27) {
      ___bzero();
    }
    lVar31 = 0;
  }
  bVar34 = 1;
  bVar33 = 1;
joined_r0x01809c6c:
  if (local_120 != 0) {
    FUN_00d50b20();
    bVar33 = bVar34;
  }
  local_350 = lVar30;
  if (!(bool)(bVar33 & (int)lVar31 < iVar35)) goto LAB_01809cef;
  goto LAB_01808883;
LAB_01809cef:
  if (local_128 != 0) {
    FUN_00d50b20();
  }
  lVar36 = local_198;
  if (local_d8 != 0) {
    FUN_00d50b20();
  }
  local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
  local_58 = 0;
  local_48 = local_b8;
  local_40 = 0xffffffff;
  local_38 = 0;
  while( true ) {
    lVar29 = (longlong)(int)local_40;
    iVar35 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar35);
    if (*(int *)(local_48 + 0xc) <= iVar35) break;
    local_58 = *(ulonglong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar29 * 8);
    *(undefined4 *)(local_58 + 0x1c) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(local_58 + 0x10) + 0x10) +
          (longlong)
          *(int *)(*(longlong *)(*(longlong *)(lVar36 + 0x10) + 0x10) +
                  ((longlong)iVar35 + (longlong)local_38) * 4) * 4);
    FUN_01715480();
    if (local_40._4_4_ != 0) {
      if (local_40 < 0) {
        iVar35 = -local_40._4_4_;
      }
      else {
        local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar35 = 0;
      }
      local_40 = CONCAT44(iVar35,(int)local_40);
    }
  }
  FUN_0180d270();
  local_118 = *(longlong *)(local_168 + 0x40);
  uVar45 = *(ulonglong *)(local_168 + 0x50);
  pvVar20 = *(void **)(local_168 + 0x60);
  FUN_00d216c0();
  FUN_00c8e340();
  ___bzero();
  FUN_00c8e340();
  ___bzero();
  if (local_178 != 0) {
    local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
    local_58 = 0;
    local_48 = local_178;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    local_158 = 0;
    local_138 = 0;
    uVar21 = 0;
    uVar18 = 0;
    local_160 = pvVar20;
    local_128 = uVar45;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar35 = -local_40._4_4_;
        }
        else {
          iVar35 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar35);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar35 = 0;
        }
        local_40 = CONCAT44(iVar35,(int)local_40);
      }
      iVar35 = (int)local_40;
      lVar36 = (longlong)(int)local_40;
      iVar12 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar12);
      if (*(int *)(local_48 + 0xc) <= iVar12) break;
      local_58 = *(ulonglong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar36 * 8);
      if ((*(char *)(local_58 + 0x18) == '\0') &&
         (((int)unaff_RDI[0xd] != 0 || (*(char *)(local_58 + 0x19) == '\0')))) {
        uVar13 = (uint)uVar18;
        uVar39 = uVar21;
        if (iVar12 == *(int *)(local_48 + 0xc) + -1) {
          uVar14 = iVar12 + local_38;
          uVar45 = (ulonglong)uVar14;
          if (local_138 == 0) {
            fVar48 = 0.0;
            local_110 = 0x7f;
            local_158 = 0;
            local_138 = 0;
            uVar21 = 0;
            uVar39 = uVar18;
            local_b8 = uVar45;
          }
          else {
            iVar12 = *(int *)(local_138 + 0xc);
            uVar21 = (ulonglong)*(uint *)(local_138 + 0x1c);
            uVar25 = (ulonglong)(uVar13 + 1);
            local_158 = local_138;
            uVar39 = uVar18;
LAB_0180a065:
            fVar48 = (float)((int)uVar21 - iVar12);
            local_110 = 0x7f;
            local_138 = 0;
            uVar18 = uVar25;
            uVar14 = (uint)uVar45;
            local_b8 = uVar45;
          }
LAB_0180a0f0:
          iVar35 = (int)((double)fVar48 + DAT_023942d0);
          if (fVar48 <= 0.0) {
            iVar35 = 0;
          }
          iVar12 = (int)((double)fVar48 + DAT_02394dd0);
          if (0.0 <= fVar48) {
            iVar12 = iVar35;
          }
          iVar35 = (int)uVar18;
          if (iVar35 <= (int)uVar14) {
            pvVar42 = (void *)(longlong)iVar35;
            uVar15 = uVar14 + 1;
            uVar45 = (ulonglong)uVar15;
            lVar36 = *(longlong *)(local_178 + 0x10);
            uVar44 = uVar15 - iVar35;
            pvVar26 = pvVar42;
            for (uVar13 = uVar44 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
              lVar29 = *(longlong *)(lVar36 + (longlong)pvVar26 * 8);
              *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0xc) + iVar12;
              pvVar26 = (void *)((longlong)pvVar26 + 1);
            }
            if (2 < uVar14 - iVar35) {
              do {
                lVar29 = *(longlong *)(lVar36 + (longlong)pvVar26 * 8);
                *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0xc) + iVar12;
                lVar29 = *(longlong *)(lVar36 + 8 + (longlong)pvVar26 * 8);
                *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0xc) + iVar12;
                lVar29 = *(longlong *)(lVar36 + 0x10 + (longlong)pvVar26 * 8);
                *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0xc) + iVar12;
                lVar29 = *(longlong *)(lVar36 + 0x18 + (longlong)pvVar26 * 8);
                *(int *)(lVar29 + 0x1c) = *(int *)(lVar29 + 0xc) + iVar12;
                pvVar26 = (void *)((longlong)pvVar26 + 4);
              } while (uVar15 != (uint)pvVar26);
            }
            local_1b8 = uVar21;
            local_1a0 = uVar39;
            FUN_00d216c0();
            do {
              puVar17 = *(undefined8 **)(*(longlong *)(local_178 + 0x10) + (longlong)pvVar42 * 8);
              if (puVar17 != (undefined8 *)0x0) {
                FUN_00d50b00();
              }
              local_f8 = '\0';
              local_100 = puVar17;
              uVar47 = FUN_00d21140();
              if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
                uVar47 = FUN_00d50b20();
              }
              if (puVar17 != (undefined8 *)0x0) {
                uVar47 = FUN_00d50b20();
              }
              uVar18 = local_128;
              sVar40 = (size_t)uVar45;
              pvVar42 = (void *)((longlong)pvVar42 + 1);
              uVar44 = uVar44 - 1;
            } while (uVar44 != 0);
            local_1b0 = (ulonglong)*(uint *)(local_128 + 0xc);
            FUN_00c8e340(uVar47,0);
            if (3 < (int)*(uint *)((longlong)pvVar20 + 0x18)) {
              _memset_pattern16(pvVar26,(void *)((ulonglong)
                                                 ((*(uint *)((longlong)pvVar20 + 0x18) >> 2) - 1) *
                                                 4 + 4),sVar40);
            }
            FUN_00c8e340();
            ___bzero();
            iVar35 = 1;
            if (1 < (int)local_1b0) {
              iVar35 = (int)local_1b0;
            }
            local_180 = (void *)((ulonglong)(iVar35 - 1) << 2);
            uVar45 = 0;
            local_d8 = 0;
            uVar13 = 0xfffffffe;
            do {
              local_104 = uVar13;
              ___bzero();
              if (uVar18 == 0) {
                iVar35 = 0;
                uVar47 = 0;
                uVar49 = 0;
                bVar34 = 0;
                bVar33 = 0;
                uVar7 = 0;
                sVar40 = 0;
              }
              else {
                local_f8 = '\0';
                local_100 = (undefined8 *)0x0;
                local_e8 = -1;
                iStack_e4 = 0;
                local_e0 = 0;
                local_d0 = 0;
                iVar35 = 0;
                local_140 = local_140 & 0xffffffff00000000;
                local_c8 = local_c8 & 0xffffffff00000000;
                uVar49 = 0;
                uVar21 = 0;
                bVar34 = 0;
                bVar33 = 0;
                local_150 = uVar45;
                local_f0 = uVar18;
                while( true ) {
                  if (iStack_e4 != 0) {
                    if (iStack_e4 < 1) {
                      iStack_e4 = -iStack_e4;
                    }
                    else {
                      local_e8 = local_e8 - iStack_e4;
                      FUN_00d23690();
                      local_e0 = local_e0 + iStack_e4;
                      iStack_e4 = 0;
                    }
                  }
                  lVar36 = (longlong)local_e8;
                  local_e8 = local_e8 + 1;
                  if (*(int *)(local_f0 + 0xc) <= local_e8) break;
                  local_100 = *(undefined8 **)(*(longlong *)(local_f0 + 0x10) + 8 + lVar36 * 8);
                  uVar45 = (longlong)
                           *(int *)(*(longlong *)((longlong)pvVar20 + 0x10) +
                                   ((longlong)local_e8 + (longlong)local_e0) * 4) +
                           (longlong)*(int *)((longlong)local_100 + 0x1c);
                  iVar12 = (int)uVar45;
                  if (iVar12 < (int)uVar21) {
                    bVar33 = 1;
                  }
                  iVar10 = iVar12 - *(int *)((longlong)local_100 + 0xc);
                  if ((((iVar10 < (int)unaff_RDI[9]) ||
                       (*(int *)((longlong)unaff_RDI + 0x4c) < iVar10)) ||
                      (iVar12 < (int)unaff_RDI[10])) ||
                     (*(int *)((longlong)unaff_RDI + 0x54) < iVar12)) {
                    uVar49 = 1;
                  }
                  cVar8 = FUN_017e4320();
                  if (cVar8 == '\0') {
                    uVar49 = 1;
                  }
                  iVar27 = *(int *)(*(longlong *)(local_118 + 0x10) + uVar45 * 4);
                  *(int *)(*(longlong *)(local_118 + 0x10) + uVar45 * 4) = iVar27 + 1;
                  if (*(char *)((longlong)local_100 + 0x19) == '\0') {
                    bVar9 = FUN_01716980();
                    bVar9 = bVar9 ^ 1;
                  }
                  else {
                    bVar9 = FUN_01716980();
                  }
                  local_d0 = local_d0 + (0 < iVar27);
                  local_140 = CONCAT44(local_140._4_4_,(int)local_140 + (uint)bVar9);
                  iVar27 = -iVar10;
                  if (0 < iVar10) {
                    iVar27 = iVar10;
                  }
                  iVar35 = iVar35 + iVar27;
                  bVar9 = bVar34;
                  if ((int)(pthread_key_t)local_110 < iVar12) {
                    bVar9 = 1;
                  }
                  if (iVar12 < (int)local_1b8) {
                    bVar9 = 1;
                  }
                  uVar13 = (uint)local_c8 & 0xff;
                  if (iVar12 == (int)local_1b8 || iVar12 == (pthread_key_t)local_110) {
                    uVar13 = 1;
                  }
                  local_c8 = CONCAT44(local_c8._4_4_,uVar13);
                  if (iVar12 == (int)local_1b8 || iVar12 == (pthread_key_t)local_110) {
                    bVar9 = bVar34;
                  }
                  bVar34 = bVar9;
                  uVar21 = uVar45 & 0xffffffff;
                  pvVar20 = local_160;
                }
                FUN_0180d270();
                uVar47 = (undefined4)local_140;
                uVar45 = local_150;
                uVar7 = (undefined1)local_c8;
                sVar40 = local_d0;
              }
              uVar21 = local_d8;
              if ((local_d8 == 0) && (uVar21 = *(ulonglong *)(local_168 + 0x68), uVar21 == uVar45))
              {
                uVar21 = *(ulonglong *)(local_168 + 0x70);
              }
              *(byte *)(uVar21 + 0x48) = bVar33 | bVar34;
              *(size_t *)(uVar21 + 0x1c) = sVar40;
              *(int *)(uVar21 + 0x24) = iVar35;
              *(undefined1 *)(uVar21 + 0x4b) = uVar7;
              *(undefined1 *)(uVar21 + 0x49) = uVar49;
              *(undefined4 *)(uVar21 + 0x20) = uVar47;
              if (*(longlong *)(uVar21 + 0x58) != 0) {
                *(undefined8 *)(uVar21 + 0x58) = 0;
                FUN_00d50b20();
              }
              uVar18 = local_128;
              uVar39 = local_1a0;
              *(undefined1 *)(uVar21 + 0x4a) = 0;
              *(undefined1 *)(uVar21 + 0x4d) = 0;
              if (uVar45 == 0) {
LAB_0180a6c0:
                pvVar26 = local_180;
                FUN_00c8e340(local_180,0);
                _memcpy(pvVar26,(void *)(longlong)*(int *)((longlong)pvVar20 + 0x18),sVar40);
                uVar25 = 0;
                uVar45 = uVar21;
              }
              else {
                uVar25 = uVar21;
                if (*(char *)(uVar21 + 0x48) == '\0') {
                  if (*(char *)(uVar45 + 0x48) == '\0') goto LAB_0180a694;
                  goto LAB_0180a6c0;
                }
                if (*(char *)(uVar45 + 0x48) != '\0') {
LAB_0180a694:
                  if (*(char *)(uVar21 + 0x49) == '\0') {
                    if (*(char *)(uVar45 + 0x49) != '\0') goto LAB_0180a6c0;
                  }
                  else if (*(char *)(uVar45 + 0x49) == '\0') goto LAB_0180a6f2;
                  if (*(int *)(uVar21 + 0x1c) < *(int *)(uVar45 + 0x1c)) goto LAB_0180a6c0;
                  if (*(int *)(uVar21 + 0x1c) <= *(int *)(uVar45 + 0x1c)) {
                    if (*(char *)(uVar21 + 0x4b) == '\0') {
                      if (*(char *)(uVar45 + 0x4b) != '\0') goto LAB_0180a6c0;
                    }
                    else if (*(char *)(uVar45 + 0x4b) == '\0') goto LAB_0180a6f2;
                    if ((*(int *)(uVar45 + 0x20) < *(int *)(uVar21 + 0x20)) ||
                       ((*(int *)(uVar45 + 0x20) <= *(int *)(uVar21 + 0x20) &&
                        (*(int *)(uVar21 + 0x24) < *(int *)(uVar45 + 0x24))))) goto LAB_0180a6c0;
                  }
                }
              }
LAB_0180a6f2:
              local_d8 = uVar25;
              if ((int)local_104 < 2) {
                uVar13 = local_104 + 1;
                **(uint **)((longlong)pvVar20 + 0x10) = uVar13;
              }
              else {
                pvVar26 = (void *)0x0;
                do {
                  if (local_180 == pvVar26) goto LAB_0180a790;
                  iVar35 = *(int *)(*(longlong *)((longlong)pvVar20 + 0x10) + 4 + (longlong)pvVar26)
                  ;
                  pvVar26 = (void *)((longlong)pvVar26 + 4);
                } while (iVar35 == 2);
                *(int *)(*(longlong *)((longlong)pvVar20 + 0x10) + (longlong)pvVar26) = iVar35 + 1;
                _memset_pattern16(local_180,pvVar26,sVar40);
                uVar13 = 0xfffffffe;
              }
            } while (0 < (int)local_1b0);
LAB_0180a790:
            if (uVar18 != 0) {
              local_f8 = '\0';
              local_100 = (undefined8 *)0x0;
              local_f0 = uVar18;
              local_e0 = 0;
              lVar36 = 0xffffffff;
              while( true ) {
                iStack_e4 = 0;
                lVar36 = (longlong)(int)lVar36 + 1;
                local_e8 = (int)lVar36;
                if (*(int *)(uVar18 + 0xc) <= local_e8) break;
                local_100 = *(undefined8 **)(*(longlong *)(uVar18 + 0x10) + (longlong)local_e8 * 8);
                *(int *)((longlong)local_100 + 0x1c) =
                     *(int *)((longlong)local_100 + 0x1c) +
                     *(int *)(*(longlong *)(*(longlong *)(uVar45 + 0x10) + 0x10) + lVar36 * 4);
              }
              FUN_0180d270();
            }
          }
          uVar13 = (uint)local_b8;
        }
      }
      else {
        uVar45 = local_58;
        if (local_58 == local_138) {
          uVar45 = local_138;
        }
        uVar39 = uVar18;
        uVar18 = local_138;
        if (local_138 == 0) {
          uVar39 = uVar21;
          uVar45 = local_58;
          uVar18 = local_158;
        }
        local_158 = uVar18;
        local_138 = uVar45;
        uVar13 = local_38 + iVar12;
        uVar45 = (ulonglong)uVar13;
        if (iVar12 != 0 || local_38 != 0) {
          local_b8 = uVar45;
          if (local_158 == 0) {
            uVar18 = uVar39;
            if (local_138 == 0) {
              fVar48 = 0.0;
              local_110 = 0x7f;
              local_158 = 0;
              local_138 = 0;
              uVar21 = 0;
              uVar14 = uVar13;
            }
            else {
              local_110 = (ulonglong)*(uint *)(local_138 + 0x1c);
              fVar48 = (float)(int)(*(uint *)(local_138 + 0x1c) - *(int *)(local_138 + 0xc));
              local_158 = 0;
              uVar21 = 0;
              uVar14 = local_38 + iVar35;
            }
          }
          else {
            iVar12 = *(int *)(local_158 + 0xc);
            uVar21 = (ulonglong)*(uint *)(local_158 + 0x1c);
            uVar25 = (ulonglong)((int)uVar39 + 1);
            if (local_138 == 0) goto LAB_0180a065;
            local_110 = (ulonglong)*(uint *)(local_138 + 0x1c);
            fVar48 = (float)(int)((*(uint *)(local_138 + 0x1c) + *(uint *)(local_158 + 0x1c)) -
                                 (iVar12 + *(int *)(local_138 + 0xc))) * DAT_0239011c;
            uVar18 = uVar25;
            uVar14 = local_38 + iVar35;
          }
          goto LAB_0180a0f0;
        }
      }
      uVar21 = uVar39 & 0xffffffff;
      uVar18 = (ulonglong)uVar13;
    }
    FUN_0180d270();
  }
  FUN_017e1d40();
  iVar35 = *(int *)(local_58 + 0xc);
  if ((char)local_50 != '\0') {
    FUN_00d50b20();
  }
  if (iVar35 != 0) {
    FUN_017e1d40();
    uVar45 = local_58;
    if ((char)local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_0180a8dd;
      }
    }
    else if (local_58 != 0) {
LAB_0180a8dd:
      local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
      local_58 = 0;
      local_48 = uVar45;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_a0 = 0xfff0bdc0;
      local_40._4_4_ = 0;
      local_98 = 0xfff0bdc0;
      local_c8 = uVar45;
      while( true ) {
        if (local_40._4_4_ != 0) {
          if (local_40._4_4_ < 1) {
            iVar35 = -local_40._4_4_;
          }
          else {
            iVar35 = (int)local_40 - local_40._4_4_;
            local_40 = CONCAT44(local_40._4_4_,iVar35);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar35 = 0;
          }
          local_40 = CONCAT44(iVar35,(int)local_40);
        }
        lVar36 = (longlong)(int)local_40;
        iVar35 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar35);
        if (*(int *)(local_48 + 0xc) <= iVar35) break;
        local_258 = *(ulonglong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar36 * 8);
        local_250 = '\0';
        local_58 = local_258;
        uVar13 = FUN_017e4480();
        if ((local_250 != '\0') && (local_258 != 0)) {
          FUN_00d50b20();
        }
        bVar32 = true;
        if (uVar13 < 0x80) {
          lVar36 = *(longlong *)(*(longlong *)(local_170 + 0x10) + (ulonglong)uVar13 * 8);
          if (lVar36 == 0) goto LAB_0180a9f0;
          uVar14 = *(uint *)(*(longlong *)(*(longlong *)(local_170 + 0x10) + (ulonglong)uVar13 * 8)
                            + 0x1c);
          bVar32 = false;
          cVar8 = (char)unaff_RDI[7];
        }
        else {
LAB_0180a9f0:
          lVar36 = 0;
          cVar8 = (char)unaff_RDI[7];
          uVar14 = uVar13;
        }
        if (cVar8 != '\0') {
          FUN_017e4290();
        }
        local_248 = local_58;
        local_240 = '\0';
        FUN_017e4370();
        if ((local_240 != '\0') && (local_248 != 0)) {
          FUN_00d50b20();
        }
        uVar15 = local_a0;
        if ((int)local_a0 < (int)uVar14) {
          uVar15 = uVar14;
        }
        bVar46 = local_a0 == 0xfff0bdc0;
        local_a0 = uVar15;
        if (bVar46) {
          local_a0 = uVar14;
        }
        uVar15 = local_98;
        if ((int)uVar14 < (int)local_98) {
          uVar15 = uVar14;
        }
        if (local_98 == 0xfff0bdc0) {
          uVar15 = uVar14;
        }
        if ((!bVar32) && (*(char *)(lVar36 + 0x18) != '\0')) {
          lVar36 = *(longlong *)(uVar6 + 0x68);
          iVar10 = uVar14 + (((uint)((int)uVar14 / 6 + ((int)uVar14 >> 0x1f)) >> 1) -
                            ((int)uVar14 >> 0x1f)) * -0xc;
          iVar10 = (iVar10 >> 0x1f & 0xcU) + iVar10;
          iVar35 = *(int *)(lVar36 + 0x18);
          lVar29 = (longlong)iVar35;
          iVar12 = iVar35 + 3;
          if (-1 < lVar29) {
            iVar12 = iVar35;
          }
          if (3 < lVar29) {
            lVar31 = 0;
            do {
              if (*(int *)(*(longlong *)(lVar36 + 0x10) + lVar31 * 4) == iVar10) goto LAB_0180ab27;
              lVar31 = lVar31 + 1;
            } while (iVar12 >> 2 != (int)lVar31);
          }
          FUN_00c8e340();
          *(int *)(*(longlong *)(lVar36 + 0x10) + lVar29) = iVar10;
LAB_0180ab27:
          lVar36 = *(longlong *)(uVar6 + 0x60);
          pVar23 = *(pthread_key_t *)(lVar36 + 0x18);
          lVar29 = (longlong)(int)pVar23;
          local_98 = pVar23 + 3;
          if (-1 < lVar29) {
            local_98 = pVar23;
          }
          if (3 < lVar29) {
            local_98 = (int)local_98 >> 2;
            lVar31 = 0;
            do {
              if (*(uint *)(*(longlong *)(lVar36 + 0x10) + lVar31 * 4) == uVar14) goto LAB_0180ab86;
              lVar31 = lVar31 + 1;
            } while (local_98 != (pthread_key_t)lVar31);
          }
          FUN_00c8e340();
          *(uint *)(*(longlong *)(lVar36 + 0x10) + lVar29) = uVar14;
        }
LAB_0180ab86:
        if ((*(int *)((longlong)unaff_RDI + 0x6c) != 0) && (*(longlong *)(uVar6 + 0xb8) != 0)) {
          pvVar20 = _pthread_getspecific(local_98);
          if (pvVar20 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01531cc0();
          iVar35 = *(int *)(local_100 + 3);
          iVar12 = iVar35 + 3;
          if (-1 < iVar35) {
            iVar12 = iVar35;
          }
          iVar10 = -1;
          if (3 < iVar35) {
            lVar36 = 0;
            do {
              if (*(uint *)(local_100[2] + lVar36 * 4) == uVar13) {
                iVar10 = (int)lVar36;
                break;
              }
              lVar36 = lVar36 + 1;
            } while (iVar12 >> 2 != (int)lVar36);
          }
          if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar10 != -1) {
            lVar36 = *(longlong *)(uVar6 + 0x70);
            iVar35 = *(int *)(lVar36 + 0x18);
            lVar29 = (longlong)iVar35;
            iVar12 = iVar35 + 3;
            if (-1 < lVar29) {
              iVar12 = iVar35;
            }
            if (3 < lVar29) {
              iVar12 = iVar12 >> 2;
              lVar31 = 0;
              do {
                if (*(uint *)(*(longlong *)(lVar36 + 0x10) + lVar31 * 4) == uVar14)
                goto LAB_0180a920;
                lVar31 = lVar31 + 1;
              } while (iVar12 != (int)lVar31);
            }
            FUN_00c8e340(iVar12,1);
            *(uint *)(*(longlong *)(lVar36 + 0x10) + lVar29) = uVar14;
          }
        }
LAB_0180a920:
        local_98 = uVar15;
      }
      FUN_01916320();
      FUN_00d50b20();
      if ((local_a0 != 0xfff0bdc0) && (*(char *)((longlong)unaff_RDI + 0x39) != '\0')) {
        FUN_017e42c0();
      }
      if ((local_98 != 0xfff0bdc0) && (*(char *)((longlong)unaff_RDI + 0x3a) != '\0')) {
        FUN_017e42f0();
      }
    }
  }
  FUN_017e1d40();
  local_1c8 = local_58;
  local_1c0 = 0;
  if ((char)local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = (code *)((ulonglong)local_50 & 0xffffffffffffff00);
  }
  local_1c0 = '\x01';
  local_238 = uVar6;
  local_230 = '\0';
  FUN_017dce10();
  if ((local_230 != '\0') && (local_238 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_0180adcd:
  if (local_c0 != 0) {
    FUN_00d50b20();
  }
LAB_0180adde:
  if (local_208 != 0) {
    FUN_00d50b20();
  }
  if (local_1a8 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_88 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if (local_120 != 0) {
    FUN_00d50b20();
  }
  if (local_190 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (uVar6 != 0)) {
    FUN_00d50b20();
  }
  return;
}


