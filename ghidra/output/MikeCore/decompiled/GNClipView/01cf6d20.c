// Function: FUN_01cf6d20
// Address: 01cf6d20
// Size: 745 bytes
// Class: GNClipView


/* WARNING: Removing unreachable block (ram,0x01cf6df8) */
/* WARNING: Removing unreachable block (ram,0x01cf6e01) */
/* WARNING: Removing unreachable block (ram,0x01cf6d76) */
/* WARNING: Removing unreachable block (ram,0x01cf6d7f) */
/* WARNING: Removing unreachable block (ram,0x01cf6e4d) */
/* WARNING: Removing unreachable block (ram,0x01cf6e56) */

void FUN_01cf6d20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong *unaff_RDI;
  longlong *plVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar12 [12];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong *local_48;
  char local_40;
  
  fVar14 = (float)((ulonglong)param_2 >> 0x20);
  fVar16 = (float)param_2;
  if (unaff_RDI[0x27] == 0) {
    return;
  }
  (**(code **)(*unaff_RDI + 0x7b8))();
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_01cf6db0;
    FUN_00d50b00();
LAB_01cf6d84:
    FUN_01d97870();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 == unaff_RDI) {
      FUN_01d97e80();
      if (local_48 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        bVar5 = false;
      }
      else {
        bVar5 = true;
        plVar6 = local_48;
        if (local_40 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_01d97ec0();
      if (local_48 == (longlong *)0x0) {
        bVar4 = false;
        local_48 = (longlong *)0x0;
      }
      else {
        if (local_40 == '\0') {
          FUN_00d50b00();
        }
        bVar4 = true;
      }
      bVar3 = false;
      goto LAB_01cf6e63;
    }
    bVar3 = false;
  }
  else {
    if (local_48 != (longlong *)0x0) goto LAB_01cf6d84;
LAB_01cf6db0:
    bVar3 = true;
  }
  local_48 = (longlong *)0x0;
  bVar4 = false;
  bVar5 = false;
  plVar6 = (longlong *)0x0;
LAB_01cf6e63:
  FUN_01e3f820();
  fVar7 = fVar16;
  fVar13 = fVar14;
  (**(code **)(*unaff_RDI + 0x4d8))();
  if (plVar6 != (longlong *)0x0) {
    if ((fVar16 != 0.0) || (fVar15 = DAT_02390124, NAN(fVar16))) {
      fVar15 = fVar7 / fVar16;
    }
    fVar2 = DAT_02390124;
    if (fVar15 <= DAT_02390124) {
      fVar2 = fVar15;
    }
    FUN_01d91950();
    if (fVar2 < DAT_02390124) {
      fVar16 = fVar16 - fVar7;
      if ((fVar16 != 0.0) || (NAN(fVar16))) {
        if (unaff_RDI[0x27] == 0) {
          auVar8 = ZEXT816(0);
        }
        else {
          uVar1 = *(undefined8 *)(unaff_RDI[0x27] + 0x10c);
          auVar8._0_4_ = 0.0 - (float)uVar1;
          auVar8._4_4_ = 0.0 - (float)((ulonglong)uVar1 >> 0x20);
          auVar8._8_8_ = 0;
        }
        auVar9._4_12_ = auVar8._4_12_;
        auVar9._0_4_ = auVar8._0_4_ / fVar16;
        (**(code **)(*plVar6 + 0x928))(auVar9._0_8_);
      }
    }
  }
  if (local_48 != (longlong *)0x0) {
    fVar7 = (float)(~-(uint)(!NAN(fVar13) && !NAN(fVar13)) & (uint)DAT_02390124 |
                   (~-(uint)(fVar14 != 0.0) & (uint)DAT_02390124 |
                   (uint)(fVar13 / fVar14) & -(uint)(fVar14 != 0.0)) &
                   -(uint)(!NAN(fVar13) && !NAN(fVar13)));
    fVar16 = DAT_02390124;
    if (fVar7 <= DAT_02390124) {
      fVar16 = fVar7;
    }
    FUN_01d91950();
    if (fVar16 < DAT_02390124) {
      fVar14 = fVar14 - fVar13;
      if ((fVar14 != 0.0) || (NAN(fVar14))) {
        if (unaff_RDI[0x27] == 0) {
          auVar12 = ZEXT412(0);
        }
        else {
          auVar12._0_4_ = 0.0 - (float)((ulonglong)*(undefined8 *)(unaff_RDI[0x27] + 0x10c) >> 0x20)
          ;
          auVar12._4_8_ = 0;
        }
        auVar10._4_4_ = auVar12._0_4_;
        auVar10._0_4_ = auVar10._4_4_;
        auVar10._12_4_ = auVar12._8_4_;
        auVar10._8_4_ = auVar10._12_4_;
        auVar11._4_12_ = auVar10._4_12_;
        auVar11._0_4_ = auVar10._4_4_ / fVar14;
        (**(code **)(*local_48 + 0x928))(auVar11._0_8_);
      }
    }
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar5) && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


