// Function: FUN_0193ebc0
// Address: 0193ebc0
// Size: 1812 bytes
// Class: Unknown
// String references:
//   "%2d"


/* WARNING: Removing unreachable block (ram,0x0193ed7b) */
/* WARNING: Removing unreachable block (ram,0x0193ed87) */
/* WARNING: Removing unreachable block (ram,0x0193f00f) */
/* WARNING: Removing unreachable block (ram,0x0193f01b) */
/* WARNING: Removing unreachable block (ram,0x0193ec41) */
/* WARNING: Removing unreachable block (ram,0x0193ec4a) */
/* WARNING: Removing unreachable block (ram,0x0193efd3) */
/* WARNING: Removing unreachable block (ram,0x0193efdc) */
/* WARNING: Removing unreachable block (ram,0x0193f0bf) */
/* WARNING: Removing unreachable block (ram,0x0193f0cb) */
/* WARNING: Removing unreachable block (ram,0x0193f206) */
/* WARNING: Removing unreachable block (ram,0x0193f212) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0193ebc0(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  uint uVar7;
  bool bVar8;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  byte bVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 local_108;
  longlong *local_b0;
  undefined4 local_a8;
  uint local_a4;
  float local_9c;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  float local_64;
  longlong local_50;
  longlong local_48;
  char local_40;
  undefined8 extraout_XMM0_Qb_00;
  
  FUN_01cb4790();
  (**(code **)(*local_b0 + 0x370))();
  local_50 = local_48;
  if (local_48 == 0) {
    bVar9 = 1;
    local_50 = 0;
    bVar6 = false;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar9 = 0;
    bVar6 = true;
  }
  else {
    local_40 = '\0';
    bVar6 = true;
    bVar9 = 0;
  }
  if (((char)local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d44d80();
  if (local_48 == local_50) {
    if ((bool)(bVar9 & local_48 != 0)) {
      bVar6 = true;
      if (local_40 != '\0') goto LAB_0193ed51;
      bVar6 = true;
      FUN_00d50b00();
    }
  }
  else {
    if (local_40 != '\0') {
      bVar8 = (bool)(bVar6 & local_50 != 0);
      bVar6 = true;
      if (bVar8) {
        local_50 = local_48;
        FUN_00d50b20();
      }
      else {
        local_50 = local_48;
      }
      goto LAB_0193ed51;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    bVar8 = (bool)(bVar6 & local_50 != 0);
    bVar6 = true;
    local_50 = local_48;
    if (!bVar8) goto LAB_0193ed51;
    local_50 = local_48;
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_0193ed51:
  FUN_01d48a10();
  FUN_01d48b40();
  FUN_01cfcdc0();
  local_90 = 0;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_90 = '\x01';
  local_98 = local_48;
  FUN_01d488d0();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  auVar16._0_8_ = (**(code **)(*unaff_RDI + 0xc00))();
  auVar16._8_8_ = extraout_XMM0_Qb;
  auVar20._4_12_ = auVar16._4_12_;
  auVar20._0_4_ = (float)auVar16._0_8_ * DAT_023941f4;
  local_9c = (float)_exp2f(auVar20._0_8_);
  local_9c = local_9c * DAT_023941f8;
  uVar11 = 0xfffffff8;
  iVar10 = 8;
  do {
    uVar7 = -uVar11;
    if (0 < (int)uVar11) {
      uVar7 = uVar11;
    }
    if (1 < uVar7) {
      if ((int)uVar11 < 1) {
        fVar12 = local_9c / (float)iVar10;
      }
      else {
        fVar12 = (float)(int)uVar11 * local_9c;
      }
      auVar14._0_8_ = _logf(fVar12 * DAT_02394204);
      auVar14._8_8_ = extraout_XMM0_Qb_00;
      auVar15._4_12_ = auVar14._4_12_;
      auVar15._0_4_ = (float)auVar14._0_8_ * DAT_02394208;
      local_64 = (float)(**(code **)(*unaff_RDI + 0xbf8))(auVar15._0_8_);
      FUN_01cfcdc0();
      local_80 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_80 = '\x01';
      local_88 = local_48;
      uVar13 = FUN_01d488d0();
      if ((local_80 != '\0') && (local_88 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      local_a8 = 1;
      local_b0 = &DAT_024cc6f0;
      local_a4 = uVar11;
      FUN_00d8cb40(uVar13,&local_b0);
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      uVar13 = FUN_01d43d10();
      fVar12 = (float)uVar13;
      fVar1 = (float)((ulonglong)uVar13 >> 0x20);
      uVar2 = (undefined4)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
      fVar17 = (*(float *)((longlong)unaff_RDI + 0x5b4) - fVar12) + DAT_02394210 + DAT_02394248 +
               DAT_02390124;
      auVar18._4_4_ = fVar1;
      auVar18._0_4_ = fVar1;
      auVar18._8_4_ = uVar2;
      auVar18._12_4_ = uVar2;
      auVar19._4_12_ = auVar18._4_12_;
      auVar19._0_4_ = fVar1 * DAT_02390118 + local_64 + DAT_02390124;
      auVar16 = insertps(ZEXT416((uint)fVar17),auVar19,0x10);
      unique0x100001d3 = fVar12;
      DAT_028b0c88 = auVar16._0_8_;
      unique0x100001d7 = fVar1;
      (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))(auVar16._0_8_,1);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))
                (*(float *)((longlong)unaff_RDI + 0x5b4) + DAT_02394248 + DAT_02390124,
                 local_64 + DAT_02390124,
                 *(float *)((longlong)unaff_RDI + 0x5b4) + DAT_023908ec + DAT_02390124);
      FUN_01cfcdc0();
      local_70 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_70 = '\x01';
      local_78 = local_48;
      FUN_01d488d0();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      auVar3._4_4_ = fVar1;
      auVar3._0_4_ = auVar19._0_4_ + DAT_02390d00;
      auVar3._8_4_ = uVar2;
      auVar3._12_4_ = uVar2;
      auVar16 = insertps(ZEXT416((uint)(fVar17 + DAT_02390d00)),auVar3,0x10);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))(auVar16._0_8_,uVar13);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))
                (*(float *)((longlong)unaff_RDI + 0x5b4) + DAT_02394248,local_64,
                 *(float *)((longlong)unaff_RDI + 0x5b4) + DAT_023908ec);
      auVar5._8_8_ = extraout_XMM0_Qb_01;
      auVar5._0_8_ = uVar13;
      auVar4._4_4_ = fVar1;
      auVar4._0_4_ = fVar12 + DAT_0241fd58;
      auVar4._8_4_ = (int)extraout_XMM0_Qb_01;
      auVar4._12_4_ = uVar2;
      auVar20 = blendps(auVar5,auVar4,1);
      local_108 = auVar16._0_4_;
      DAT_028b0c88 = FUN_00d052e0(DAT_028b0c88,DAT_028b0c90,local_108,auVar20._0_8_);
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
    uVar11 = uVar11 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != -9);
  if ((bVar6) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  return;
}


