// Function: FUN_01ede930
// Address: 01ede930
// Size: 1516 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01ededbc) */
/* WARNING: Removing unreachable block (ram,0x01ededc8) */
/* WARNING: Removing unreachable block (ram,0x01edecb5) */
/* WARNING: Removing unreachable block (ram,0x01edecc1) */
/* WARNING: Removing unreachable block (ram,0x01edeba7) */
/* WARNING: Removing unreachable block (ram,0x01edebb3) */
/* WARNING: Removing unreachable block (ram,0x01edea69) */
/* WARNING: Removing unreachable block (ram,0x01edea79) */
/* WARNING: Removing unreachable block (ram,0x01edea46) */
/* WARNING: Removing unreachable block (ram,0x01edea4f) */
/* WARNING: Removing unreachable block (ram,0x01edeb88) */
/* WARNING: Removing unreachable block (ram,0x01edeb91) */
/* WARNING: Removing unreachable block (ram,0x01edebee) */
/* WARNING: Removing unreachable block (ram,0x01edebfa) */
/* WARNING: Removing unreachable block (ram,0x01eded50) */
/* WARNING: Removing unreachable block (ram,0x01eded59) */
/* WARNING: Removing unreachable block (ram,0x01edee4a) */
/* WARNING: Removing unreachable block (ram,0x01edee53) */

undefined8 * FUN_01ede930(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *in_RCX;
  int in_EDX;
  undefined8 *unaff_RDI;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined8 uVar13;
  undefined8 in_XMM1_Qb;
  undefined8 uVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  longlong local_f8;
  char local_f0;
  undefined8 local_e8;
  float fStack_e0;
  float fStack_dc;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  longlong local_40;
  char local_38;
  
  uVar9 = param_2;
  uVar17 = in_XMM1_Qb;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  if (*in_RCX == 0) {
    FUN_01d3a560();
    FUN_01d3abf0();
    FUN_01f514b0();
    lVar1 = *in_RCX;
    if (lVar1 == local_40) {
      if (((char)in_RCX[1] == '\0') && (local_40 != 0)) {
        if (local_38 != '\0') goto LAB_01edeea1;
        FUN_00d50b00();
        goto LAB_01edeeda;
      }
LAB_01edeee1:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      lVar3 = in_RCX[1];
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        *in_RCX = local_40;
        if (((char)lVar3 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
LAB_01edeeda:
        *(undefined1 *)(in_RCX + 1) = 1;
        goto LAB_01edeee1;
      }
      *in_RCX = local_40;
      if (((char)lVar3 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
LAB_01edeea1:
      *(undefined1 *)(in_RCX + 1) = 1;
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (in_EDX != 5) {
    if (in_EDX == 4) {
      uVar8 = FUN_01f51370();
      uVar13 = uVar9;
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_026b0a08;
      *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
      FUN_00d500e0();
      *(undefined8 *)((longlong)puVar6 + 0xc) = uVar8;
      *(undefined8 *)((longlong)puVar6 + 0x14) = uVar9;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
      FUN_00d21140();
      FUN_00d50b20();
      goto LAB_01edebb8;
    }
    uVar13 = uVar9;
    if (in_EDX != 3) goto LAB_01edebb8;
  }
  uVar8 = FUN_01f51370();
  uVar13 = uVar9;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_026b0a08;
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
  FUN_00d500e0();
  *(undefined8 *)((longlong)puVar6 + 0xc) = uVar8;
  *(undefined8 *)((longlong)puVar6 + 0x14) = uVar9;
  *(undefined4 *)((longlong)puVar6 + 0x1c) = 1;
  FUN_00d21140();
  FUN_00d50b20();
LAB_01edebb8:
  uVar9 = FUN_01f51370();
  local_88 = (float)uVar9;
  fStack_84 = (float)((ulonglong)uVar9 >> 0x20);
  fStack_80 = (float)extraout_XMM0_Qb;
  fStack_7c = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  local_58 = (float)uVar13;
  fStack_54 = (float)((ulonglong)uVar13 >> 0x20);
  fStack_50 = (float)uVar17;
  fStack_4c = (float)((ulonglong)uVar17 >> 0x20);
  local_e8._0_4_ = (float)param_2;
  fVar12 = (float)local_e8;
  cVar4 = FUN_00d054a0();
  if (cVar4 != '\0') {
    uVar7 = FUN_01f51370();
    auVar11._8_4_ = fStack_80;
    auVar11._0_8_ = uVar9;
    auVar11._12_4_ = fStack_7c;
    fStack_54 = fStack_54 + fStack_84;
    fStack_4c = fStack_4c + fStack_7c;
    local_e8._4_4_ = (float)((ulonglong)param_2 >> 0x20);
    fStack_e0 = (float)in_XMM1_Qb;
    fStack_dc = (float)((ulonglong)in_XMM1_Qb >> 0x20);
    local_108 = (float)param_1;
    fStack_104 = (float)((ulonglong)param_1 >> 0x20);
    fStack_100 = (float)in_XMM0_Qb;
    fStack_fc = (float)((ulonglong)in_XMM0_Qb >> 0x20);
    auVar10._0_4_ = (float)local_e8 + local_108;
    auVar10._4_4_ = local_e8._4_4_ + fStack_104;
    auVar10._8_4_ = fStack_e0 + fStack_100;
    auVar10._12_4_ = fStack_dc + fStack_fc;
    fVar18 = (local_58 + local_88 + DAT_02390d00) - local_88;
    auVar11 = blendps(auVar10,auVar11,0xd);
    auVar14._4_4_ = fStack_54;
    auVar14._0_4_ = fVar18;
    auVar14._8_4_ = fStack_50 + fStack_80;
    auVar14._12_4_ = fStack_4c;
    auVar15._4_4_ = fStack_54;
    auVar15._0_4_ = (fStack_54 + DAT_02390d00) - auVar10._4_4_;
    auVar15._8_4_ = fStack_4c;
    auVar15._12_4_ = fStack_4c;
    auVar15 = insertps(auVar14,auVar15,0x10);
    uVar9 = FUN_00d05360(auVar11._0_8_,auVar15._0_8_,uVar7,fVar12);
    local_e8._0_4_ = auVar15._0_4_;
    local_e8._4_4_ = auVar15._4_4_;
    if ((0.0 < (float)local_e8) && (0.0 < local_e8._4_4_)) {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_026b0a08;
      *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
      FUN_00d500e0();
      local_e8 = auVar15._0_8_;
      *(undefined8 *)((longlong)puVar6 + 0xc) = uVar9;
      *(undefined8 *)((longlong)puVar6 + 0x14) = local_e8;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = 0x101;
      FUN_00d21140();
      FUN_00d50b20();
    }
    FUN_01f51370();
    auVar16._0_4_ = local_108 - local_88;
    auVar16._4_4_ = fStack_104 - fStack_84;
    auVar16._8_4_ = fStack_100 - fStack_80;
    auVar16._12_4_ = fStack_fc - fStack_7c;
    auVar2._4_4_ = fStack_54;
    auVar2._0_4_ = fVar18;
    auVar2._8_4_ = fStack_50 + fStack_80;
    auVar2._12_4_ = fStack_4c;
    auVar15 = blendps(auVar16,auVar2,1);
    uVar9 = FUN_00d05360();
    if ((0.0 < auVar15._0_4_) && (0.0 < auVar15._4_4_)) {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_026b0a08;
      *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar6 + 0x14) = 0;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
      FUN_00d500e0();
      *(undefined8 *)((longlong)puVar6 + 0xc) = uVar9;
      *(longlong *)((longlong)puVar6 + 0x14) = auVar15._0_8_;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = 0x101;
      FUN_00d21140();
      FUN_00d50b20();
    }
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


