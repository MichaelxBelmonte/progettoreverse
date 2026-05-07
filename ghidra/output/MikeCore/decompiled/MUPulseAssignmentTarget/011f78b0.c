// Function: FUN_011f78b0
// Address: 011f78b0
// Size: 638 bytes
// Class: MUPulseAssignmentTarget


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_011f78b0(double param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  lVar4 = *unaff_RDI;
  if ((*(int *)(lVar4 + 0xc) < 2) || (param_1 <= 0.0)) {
    uVar6 = FUN_00e7bdb0();
    return uVar6;
  }
  if (DAT_0238fee8 <= param_1) {
    uVar6 = FUN_00e7bcc0();
    return uVar6;
  }
  lVar8 = 0;
  lVar7 = 0;
  bVar2 = false;
  lVar5 = 0;
  bVar3 = false;
  do {
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar8 * 8);
    if (lVar7 == lVar4) {
      if ((!bVar2) && (lVar7 != 0)) {
        bVar2 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      if ((bVar2) && (lVar7 != 0)) {
        FUN_00d50b20();
        bVar2 = true;
        lVar7 = lVar4;
      }
      else {
        bVar2 = true;
        lVar7 = lVar4;
      }
    }
    lVar4 = *(longlong *)(*(longlong *)(*unaff_RDI + 0x10) + 8 + lVar8 * 8);
    if (lVar5 == lVar4) {
      if ((!bVar3) && (lVar5 != 0)) {
        bVar3 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      if ((bVar3) && (lVar5 != 0)) {
        FUN_00d50b20();
        bVar3 = true;
        lVar5 = lVar4;
      }
      else {
        bVar3 = true;
        lVar5 = lVar4;
      }
    }
    dVar9 = (double)FUN_00e7c860();
    if (dVar9 <= param_1) {
      dVar9 = (double)FUN_00e7c860();
      if (param_1 <= dVar9) break;
    }
    lVar8 = lVar8 + 1;
    lVar4 = *unaff_RDI;
  } while (lVar8 < (longlong)*(int *)(lVar4 + 0xc) + -1);
  fVar12 = *(float *)(lVar7 + 0x14);
  fVar1 = *(float *)(lVar5 + 0x14);
  if ((double)(float)((uint)(fVar12 - fVar1) & _DAT_02390140) < DAT_023934c8) {
    fVar12 = fVar12 * DAT_02394244;
  }
  dVar9 = (double)FUN_00e7c860();
  dVar10 = (double)FUN_00e7c860();
  auVar11 = insertps(ZEXT416((uint)fVar12),fVar1,0x10);
  if ((double)auVar11._0_4_ * (param_1 - dVar9) < (double)auVar11._4_4_ * (dVar10 - param_1)) {
    lVar5 = lVar7;
  }
  uVar6 = *(undefined8 *)(lVar5 + 0xc);
  if (bVar3) {
    FUN_00d50b20();
  }
  if (bVar2) {
    FUN_00d50b20();
  }
  return uVar6;
}


