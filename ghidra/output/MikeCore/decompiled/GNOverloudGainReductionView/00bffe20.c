// Function: FUN_00bffe20
// Address: 00bffe20
// Size: 1255 bytes
// Class: GNOverloudGainReductionView
// String references:
//   "%0.0f dB"


/* WARNING: Removing unreachable block (ram,0x00bffedf) */
/* WARNING: Removing unreachable block (ram,0x00bffeeb) */
/* WARNING: Removing unreachable block (ram,0x00c002d7) */
/* WARNING: Removing unreachable block (ram,0x00c002e3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bffe20(void)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar17;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  uVar13 = FUN_01e3f820();
  fVar12 = in_XMM1._4_4_;
  auVar18._4_4_ = fVar12;
  auVar18._0_4_ = fVar12;
  auVar18._8_4_ = in_XMM1._12_4_;
  auVar18._12_4_ = in_XMM1._12_4_;
  auVar15._4_12_ = auVar18._4_12_;
  auVar15._0_4_ = fVar12 + DAT_023941fc;
  auVar18 = insertps(in_XMM1,auVar15,0x10);
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_40 + 0x3f0))(2,0x27,0,1,auVar15);
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((longlong *)unaff_RDI[0x28] != (longlong *)0x0) {
    uVar11 = (**(code **)(*(longlong *)unaff_RDI[0x28] + 0x628))();
    (**(code **)(*unaff_RDI + 0x640))();
    local_b8 = auVar18._0_8_;
    uStack_b0 = auVar18._8_8_;
    (**(code **)(*local_40 + 0x548))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    fVar12 = (float)FUN_00aea6b0();
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_50 + 0x3a0))();
    plVar7 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar4._8_8_ = uStack_b0;
    auVar4._0_8_ = local_b8;
    uVar3 = (undefined4)((ulonglong)uStack_b0 >> 0x20);
    fVar17 = (float)((ulonglong)local_b8 >> 0x20);
    auVar16._4_4_ = fVar17;
    auVar16._0_4_ = fVar17;
    auVar16._8_4_ = uVar3;
    auVar16._12_4_ = uVar3;
    fVar22 = fVar17 - fVar12 * fVar17;
    fVar12 = 0.0;
    if (0.0 <= fVar22) {
      fVar12 = fVar22;
    }
    if (fVar12 <= fVar17) {
      auVar16._0_4_ = fVar12;
    }
    insertps(auVar4,auVar16,0x10);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
    lVar6 = unaff_RDI[0x2a];
    iVar9 = (int)lVar6 + 1;
    *(int *)(unaff_RDI + 0x2a) = iVar9;
    lVar2 = unaff_RDI[0x29];
    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + (longlong)(int)lVar6 * 4) = uVar11;
    iVar1 = *(int *)(lVar2 + 0x18);
    iVar10 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar10 = iVar1;
    }
    if (iVar10 >> 2 <= iVar9) {
      *(undefined4 *)(unaff_RDI + 0x2a) = 0;
    }
    fVar12 = (float)(**(code **)(DAT_02786500 + 8))();
    if (fVar12 < DAT_02390124) {
      uVar14 = FUN_00aea610();
      local_48 = 1;
      local_50 = &DAT_024d0b28;
      local_44 = (undefined4)uVar14;
      FUN_00d8cb40(uVar14,&local_50);
      plVar7 = local_40;
      if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_50 + 0x390))();
      plVar8 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_50 + 0x378))();
      plVar8 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d48a10();
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      fVar12 = auVar15._0_4_;
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
        fVar12 = auVar15._0_4_;
      }
      auVar5._8_8_ = extraout_XMM0_Qb;
      auVar5._0_8_ = uVar13;
      uVar11 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
      fVar17 = (float)((ulonglong)uVar13 >> 0x20);
      auVar19._4_4_ = fVar17;
      auVar19._0_4_ = fVar17;
      auVar19._8_4_ = uVar11;
      auVar19._12_4_ = uVar11;
      auVar20._4_12_ = auVar19._4_12_;
      auVar20._0_4_ = fVar17 + fVar12 + DAT_02390d00;
      insertps(auVar5,auVar20,0x10);
      auVar21._4_12_ = in_XMM1._4_12_;
      auVar21._0_4_ = in_XMM1._0_4_ + DAT_024112b0;
      blendps(auVar21,_DAT_02421240,0xe);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))();
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}


