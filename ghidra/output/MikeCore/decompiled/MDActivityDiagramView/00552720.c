// Function: FUN_00552720
// Address: 00552720
// Size: 2010 bytes
// Class: MDActivityDiagramView
// String references:
//   "%@ (%@)"


/* WARNING: Removing unreachable block (ram,0x00552a95) */
/* WARNING: Removing unreachable block (ram,0x00552aa1) */
/* WARNING: Removing unreachable block (ram,0x005527d1) */
/* WARNING: Removing unreachable block (ram,0x005527dd) */
/* WARNING: Removing unreachable block (ram,0x00552e91) */
/* WARNING: Removing unreachable block (ram,0x00552e9d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00552720(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar9;
  longlong lVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined8 in_XMM1_Qb;
  undefined1 auVar18 [16];
  float fVar17;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 local_140 [8];
  longlong local_128;
  char local_120;
  float local_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  float local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  dVar11 = (double)FUN_00e7d6f0();
  uVar12 = FUN_01e3f820();
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_70 + 0x3f0))(uVar12,param_2,0,1);
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d05530();
  local_d8 = (float)param_2;
  fStack_d4 = (float)((ulonglong)param_2 >> 0x20);
  uStack_d0 = (undefined4)in_XMM1_Qb;
  uStack_cc = (uint)((ulonglong)in_XMM1_Qb >> 0x20);
  FUN_01d48370();
  (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_40 + 0x3a0))();
  plVar6 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_01d488d0();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02680400;
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  *(undefined8 *)((longlong)puVar7 + 0x39) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x41) = 0;
  (*DAT_02680418)();
  dVar13 = (double)FUN_00e7d6f0();
  FUN_00e7d850(dVar13 * (double)*(float *)(unaff_RDI + 0x27));
  lVar2 = unaff_RDI[0x28];
  fVar17 = 0.0;
  if (3 < *(int *)(lVar2 + 0x18)) {
    lVar10 = 0;
    fVar16 = 0.0;
    do {
      fVar17 = *(float *)(*(longlong *)(lVar2 + 0x10) + lVar10 * 4);
      iVar1 = *(int *)(unaff_RDI[0x28] + 0x18);
      iVar8 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar8 = iVar1;
      }
      auVar20._4_4_ = fStack_d4;
      auVar20._0_4_ = fStack_d4;
      auVar20._8_4_ = uStack_cc;
      auVar20._12_4_ = uStack_cc;
      auVar18._4_12_ = auVar20._4_12_;
      auVar18._0_4_ = fStack_d4 - (fVar17 / *(float *)((longlong)unaff_RDI + 0x13c)) * fStack_d4;
      FUN_01d38ba0(((float)(int)lVar10 * local_d8) / (float)(iVar8 >> 2),auVar18._0_8_);
      iVar1 = *(int *)(lVar2 + 0x18);
      iVar8 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar8 = iVar1;
      }
      if (fVar17 <= fVar16) {
        fVar17 = fVar16;
      }
      lVar10 = lVar10 + 1;
      fVar16 = fVar17;
    } while ((int)lVar10 < iVar8 >> 2);
  }
  FUN_01d38ba0(param_2,CONCAT44(fStack_d4,fStack_d4));
  FUN_01d38ba0(0,CONCAT44(fStack_d4,fStack_d4));
  FUN_01d38b10();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  if (unaff_RDI[0x29] == 0) goto LAB_00552eaf;
  fVar17 = fStack_d4 - (fVar17 / *(float *)((longlong)unaff_RDI + 0x13c)) * fStack_d4;
  auVar14._0_4_ = _DAT_023945e0 & (uint)fVar17;
  auVar14._4_4_ = _UNK_023945e4 & (uint)fStack_d4;
  auVar14._8_4_ = _UNK_023945e8 & uStack_cc;
  auVar14._12_4_ = _UNK_023945ec & uStack_cc;
  auVar15._4_12_ = SUB1612(auVar14 | _DAT_023945f0,4);
  auVar15._0_4_ = SUB164(auVar14 | _DAT_023945f0,0) + fVar17;
  auVar19._0_12_ = ZEXT812(0);
  auVar19._12_4_ = 0;
  auVar20 = roundss(auVar19,auVar15,0xb);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  local_b8 = auVar20._0_4_;
  uStack_b4 = auVar20._4_4_;
  uStack_b0 = auVar20._8_4_;
  uStack_ac = auVar20._12_4_;
  local_b8 = local_b8 + DAT_023941fc;
  if (local_b8 < DAT_02390d34) {
    auVar4._4_4_ = uStack_b4;
    auVar4._0_4_ = local_b8 + DAT_023942a8;
    auVar4._8_4_ = uStack_b0;
    auVar4._12_4_ = uStack_ac;
    insertps(_DAT_023b5520,auVar4,0x1c);
  }
  else {
    auVar3._4_4_ = uStack_b4;
    auVar3._0_4_ = local_b8;
    auVar3._8_4_ = uStack_b0;
    auVar3._12_4_ = uStack_ac;
    insertps(_DAT_023b5520,auVar3,0x10);
  }
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_40 + 0x378))();
  plVar6 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_01d48a10();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_40 + 0x390))();
  plVar6 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_01d488d0();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)unaff_RDI[0x29] + 0x378))();
  plVar6 = local_70;
  if ((((local_68 == '\0') && (local_70 != (longlong *)0x0)) && (FUN_00d50b00(), local_68 != '\0'))
     && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = plVar6;
  if ((longlong *)unaff_RDI[0x2a] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x2a] + 0x378))();
    uVar12 = FUN_00083ea0(2,local_140);
    FUN_00d8cb40(uVar12,&local_70);
    plVar9 = local_40;
    if (plVar6 == local_40) {
LAB_00552de1:
      plVar9 = plVar6;
      if (local_38 != '\0') {
LAB_00552de7:
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (plVar6 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar6 = plVar9;
          goto LAB_00552de1;
        }
        if (local_38 == '\0') goto LAB_00552df5;
        goto LAB_00552de7;
      }
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
    }
LAB_00552df5:
    local_70 = (longlong *)&DAT_0253d630;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &DAT_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
  }
  auVar5._8_4_ = uStack_d0;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = uStack_cc;
  blendps(auVar5,_DAT_023b27c0,0xe);
  (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))();
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00552eaf:
  FUN_01d48390();
  dVar13 = (double)FUN_00e7d6f0();
  FUN_01d428f0(dVar13 - dVar11);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


