// Function: FUN_01e1f2c0
// Address: 01e1f2c0
// Size: 2538 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01e1fc55) */
/* WARNING: Removing unreachable block (ram,0x01e1fbbe) */
/* WARNING: Removing unreachable block (ram,0x01e1f8ed) */
/* WARNING: Removing unreachable block (ram,0x01e1f523) */
/* WARNING: Removing unreachable block (ram,0x01e1f52f) */
/* WARNING: Removing unreachable block (ram,0x01e1f8f9) */
/* WARNING: Removing unreachable block (ram,0x01e1fbca) */
/* WARNING: Removing unreachable block (ram,0x01e1fc61) */
/* WARNING: Type propagation algorithm not settling */

void FUN_01e1f2c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  longlong *plVar9;
  longlong *plVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 uVar17;
  longlong lVar18;
  longlong unaff_RDI;
  bool bVar19;
  float fVar20;
  float fVar21;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar22;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar23 [16];
  float fVar26;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar27;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar28;
  float fStack_124;
  float fStack_c4;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  longlong *local_50;
  float local_48;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  fVar21 = (float)((ulonglong)param_2 >> 0x20);
  fVar28 = (float)param_2;
  if (*(int *)(unaff_RDI + 0xc) == -1) {
    return;
  }
  uVar14 = FUN_01cb4790();
  local_50 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01e1f321;
    }
LAB_01e1f338:
    local_48 = 0.0;
    local_44 = (undefined4)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
  }
  else {
    if (local_40 == (longlong *)0x0) goto LAB_01e1f338;
LAB_01e1f321:
    local_44 = 0;
    local_48 = (float)(**(code **)(*local_50 + 0x598))();
  }
  FUN_01e23600();
  fVar20 = (float)FUN_01e21f60();
  uVar14 = FUN_01e5b880();
  if ((longlong)*(int *)(unaff_RDI + 0xc) == -1) {
    lVar18 = 0;
    bVar7 = true;
  }
  else {
    lVar18 = *(longlong *)
              (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10) +
              (longlong)*(int *)(unaff_RDI + 0xc) * 8);
    if (lVar18 == 0) {
      bVar7 = false;
      lVar18 = 0;
    }
    else {
      FUN_00d50b00();
      bVar7 = false;
    }
  }
  FUN_01e25fd0();
  plVar9 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (!bVar7 && lVar18 != 0) {
    FUN_00d50b20();
  }
  if (((DAT_028b9519 != '\0') || (plVar9 == (longlong *)0x0)) ||
     (iVar12 = FUN_01d5b230(), iVar12 == 0)) {
    FUN_01e236a0();
    goto LAB_01e1f916;
  }
  lVar18 = *(longlong *)(unaff_RDI + 0x20);
  if (lVar18 != 0) {
    FUN_00d50b00();
  }
  FUN_01d62b10();
  if (lVar18 != 0) {
    FUN_00d50b20();
  }
  cVar11 = FUN_01d5e5b0();
  if (cVar11 != '\0') {
    FUN_01d5e350();
  }
  iVar12 = 0;
  do {
    iVar13 = FUN_01d5b230();
    if (iVar13 <= iVar12) {
      uVar17 = 0;
      goto LAB_01e1f4f5;
    }
    FUN_01d5b240(extraout_XMM0_Qa,iVar12);
    cVar11 = FUN_01d65e30();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    iVar12 = iVar12 + 1;
  } while (cVar11 == '\0');
  uVar17 = 1;
LAB_01e1f4f5:
  (**(code **)(*DAT_028b94f8 + 0x918))();
  *(undefined1 *)(DAT_028b94f8 + 0x2f) = uVar17;
  FUN_01e22190();
  lVar18 = *(longlong *)(DAT_028b94f8[0x2d] + 0x10);
  lVar15 = (longlong)*(int *)(DAT_028b94f8[0x2d] + 0x18);
  uVar22 = *(undefined8 *)(lVar18 + -0x10 + lVar15);
  uVar1 = *(undefined8 *)(lVar18 + -8 + lVar15);
  fStack_124 = (float)((ulonglong)uVar22 >> 0x20);
  _local_68 = ZEXT416((uint)(*(float *)(unaff_RDI + 0x6c) + (float)uVar22));
  uVar22 = (**(code **)(*local_50 + 0x3c8))(lVar18,2);
  fVar21 = (float)(**(code **)(*local_50 + 0x3c8))(uVar22,3);
  fStack_c4 = (float)((ulonglong)uVar1 >> 0x20);
  fVar28 = fStack_c4 + fStack_124 + (float)uVar22;
  local_68._0_4_ = (float)local_68._0_4_ + fVar21;
  if (DAT_028b94e8 == (undefined8 *)0x0) {
LAB_01e1f67a:
    puVar16 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined1 *)((longlong)puVar16 + 0xc) = 0;
    *puVar16 = &DAT_026a3350;
    puVar16[2] = &DAT_026a37c8;
    puVar16[3] = 0;
    puVar16[4] = 0;
    *(undefined2 *)(puVar16 + 5) = 0;
    puVar16[6] = 0;
    *(undefined4 *)((longlong)puVar16 + 0x37) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x3c) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x4c) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x5c) = 0;
    *(undefined8 *)((longlong)puVar16 + 100) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x69) = 0;
    puVar16[0xf] = 0;
    *(undefined4 *)((longlong)puVar16 + 0x7f) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x84) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x8c) = 0;
    *(undefined8 *)((longlong)puVar16 + 0x94) = 0;
    uVar22 = (*DAT_026a3368)();
    if (DAT_028b94e8 == puVar16) {
      bVar8 = false;
      bVar7 = false;
    }
    else {
      bVar8 = true;
      bVar7 = true;
      bVar19 = DAT_028b94e8 != (undefined8 *)0x0;
      DAT_028b94e8 = puVar16;
      if (bVar19) {
        uVar22 = FUN_00d50b20();
      }
    }
    if (DAT_028b94f0 == '\0') {
      DAT_028b94f0 = '\x01';
      uVar22 = FUN_00e8cb90();
      bVar7 = bVar8;
    }
    if (!bVar7) {
      uVar22 = FUN_00d50b20();
    }
    lVar18 = DAT_028b9508;
    local_a0 = 0;
    if (DAT_028b9508 != 0) {
      uVar22 = FUN_00d50b00();
    }
    local_a8 = lVar18;
    local_a0 = '\x01';
    FUN_01e5b6f0(uVar22,&local_a8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01e5ca90();
    plVar10 = local_40;
    local_98 = DAT_028b94f8;
    local_90 = 0;
    if (DAT_028b94f8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    (**(code **)(*plVar10 + 0x450))();
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e5ca90();
    (**(code **)(*local_40 + 0x570))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar22 = FUN_01e59910();
    if (((float)local_68._0_4_ != (float)uVar22) ||
       (NAN((float)local_68._0_4_) || NAN((float)uVar22))) {
LAB_01e1f665:
      FUN_01e236a0();
    }
    else {
      fVar21 = (float)((ulonglong)uVar22 >> 0x20);
      if ((fVar28 != fVar21) || (NAN(fVar28) || NAN(fVar21))) goto LAB_01e1f665;
    }
    if (DAT_028b94e8 == (undefined8 *)0x0) goto LAB_01e1f67a;
  }
  _local_68 = insertps(_local_68,fVar28,0x10);
  FUN_01e5bc80();
  (**(code **)(*DAT_028b94f8 + 0x4d0))();
  auVar4._8_8_ = extraout_XMM0_Qb;
  auVar4._0_8_ = uVar14;
  in_XMM1_Dc = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
  fVar21 = (float)((ulonglong)uVar14 >> 0x20);
  fVar28 = (fVar21 - fVar28) + DAT_023b1608;
  auVar23._4_4_ = fVar21;
  auVar23._0_4_ = fVar28;
  auVar23._8_4_ = in_XMM1_Dc;
  auVar23._12_4_ = in_XMM1_Dc;
  auVar23 = insertps(auVar4,auVar23,0x10);
  in_XMM1_Dd = in_XMM1_Dc;
  FUN_01e5bb70(auVar23._0_8_);
  FUN_01e5c980();
  FUN_01e5d9c0();
LAB_01e1f916:
  uVar14 = FUN_01e5b880();
  fVar27 = fVar21;
  if ((longlong)*(int *)(unaff_RDI + 0xc) == -1) {
    lVar18 = 0;
    bVar7 = true;
  }
  else {
    lVar18 = *(longlong *)
              (*(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10) +
              (longlong)*(int *)(unaff_RDI + 0xc) * 8);
    if (lVar18 == 0) {
      lVar18 = 0;
    }
    else {
      FUN_00d50b00();
    }
    bVar7 = false;
  }
  iVar12 = FUN_01e26080();
  if (!bVar7 && lVar18 != 0) {
    FUN_00d50b20();
  }
  if (iVar12 != 0) {
    iVar13 = FUN_01e26080();
    iVar12 = iVar13 + -1;
    if (iVar13 == 0) {
      iVar12 = 0;
    }
    local_68 = (undefined1  [8])FUN_01e21df0(0,iVar12);
    uStack_60 = extraout_XMM0_Qb_01;
    if (DAT_028b94d8 == (undefined8 *)0x0) {
      puVar16 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *(undefined1 *)((longlong)puVar16 + 0xc) = 0;
      *puVar16 = &DAT_026a3350;
      puVar16[2] = &DAT_026a37c8;
      puVar16[3] = 0;
      puVar16[4] = 0;
      *(undefined2 *)(puVar16 + 5) = 0;
      puVar16[6] = 0;
      *(undefined4 *)((longlong)puVar16 + 0x37) = 0;
      *(undefined8 *)((longlong)puVar16 + 0x3c) = 0;
      *(undefined8 *)((longlong)puVar16 + 0x44) = 0;
      *(undefined8 *)((longlong)puVar16 + 0x4c) = 0;
      *(undefined8 *)((longlong)puVar16 + 0x54) = 0;
      *(undefined8 *)((longlong)puVar16 + 0x5c) = 0;
      *(undefined8 *)((longlong)puVar16 + 100) = 0;
      *(undefined8 *)((longlong)puVar16 + 0x69) = 0;
      puVar16[0xf] = 0;
      *(undefined4 *)((longlong)puVar16 + 0x7f) = 0;
      *(undefined8 *)((longlong)puVar16 + 0x84) = 0;
      *(undefined8 *)((longlong)puVar16 + 0x8c) = 0;
      *(undefined8 *)((longlong)puVar16 + 0x94) = 0;
      uVar22 = (*DAT_026a3368)();
      if (DAT_028b94d8 == puVar16) {
        bVar8 = false;
        bVar7 = false;
      }
      else {
        bVar8 = true;
        bVar7 = true;
        bVar19 = DAT_028b94d8 != (undefined8 *)0x0;
        DAT_028b94d8 = puVar16;
        if (bVar19) {
          uVar22 = FUN_00d50b20();
        }
      }
      if (DAT_028b94e0 == '\0') {
        DAT_028b94e0 = '\x01';
        uVar22 = FUN_00e8cb90();
        bVar7 = bVar8;
      }
      if (!bVar7) {
        uVar22 = FUN_00d50b20();
      }
      lVar18 = DAT_028b9508;
      local_80 = 0;
      if (DAT_028b9508 != 0) {
        uVar22 = FUN_00d50b00();
      }
      local_88 = lVar18;
      local_80 = '\x01';
      FUN_01e5b6f0(uVar22,&local_88);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      FUN_01e5ca90();
      plVar10 = local_40;
      local_78 = DAT_028b94b8;
      local_70 = 0;
      if (DAT_028b94b8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      (**(code **)(*plVar10 + 0x450))();
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    auVar5._8_8_ = extraout_XMM0_Qb_00;
    auVar5._0_8_ = uVar14;
    uVar2 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    fVar26 = (float)((ulonglong)uVar14 >> 0x20);
    auVar24._4_12_ = auVar5._4_12_;
    auVar24._0_4_ = (float)uVar14 + fVar20;
    auVar3._4_4_ = fVar26;
    auVar3._0_4_ = fVar26 + (fVar21 - local_48);
    auVar3._8_4_ = uVar2;
    auVar3._12_4_ = uVar2;
    auVar23 = insertps(auVar24,auVar3,0x10);
    FUN_01e5bb70(auVar23._0_8_);
    auVar6._4_4_ = fVar27;
    auVar6._0_4_ = fVar28;
    auVar6._8_4_ = in_XMM1_Dc;
    auVar6._12_4_ = in_XMM1_Dd;
    auVar25._0_4_ = (float)local_68._0_4_ + fVar28;
    auVar25._4_4_ = (float)local_68._4_4_ + fVar27;
    auVar25._8_4_ = (float)uStack_60 + in_XMM1_Dc;
    auVar25._12_4_ = uStack_60._4_4_ + in_XMM1_Dd;
    _local_68 = blendps(auVar25,auVar6,0xd);
    FUN_01e5bc80();
    (**(code **)(*DAT_028b94b8 + 0x4d0))();
    FUN_01e5d9c0();
    FUN_01e5ca90();
    (**(code **)(*local_40 + 0x920))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_44 == '\0') {
    FUN_00d50b20();
  }
  return;
}


