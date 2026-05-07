// Function: FUN_00c324e0
// Address: 00c324e0
// Size: 590 bytes
// Class: GNOverloudTapedesk


void FUN_00c324e0(float param_1)

{
  int unaff_ESI;
  longlong *unaff_RDI;
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = -1;
  fVar4 = 0.0;
  bVar1 = 0;
  if ((*(char *)((longlong)unaff_RDI + 0xdc) != '\0') && (bVar1 = 0, unaff_ESI - 7U < 2)) {
    fVar4 = (float)(**(code **)(*unaff_RDI + 0x458))();
    fVar4 = param_1 - fVar4;
    bVar1 = 1;
    if (unaff_ESI == 7) {
      iVar2 = 8;
    }
    else if (unaff_ESI == 8) {
      iVar2 = 7;
    }
    else {
      bVar1 = 0;
    }
  }
  fVar3 = *(float *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + (longlong)unaff_ESI * 4);
  if ((fVar3 != param_1) || (NAN(fVar3) || NAN(param_1))) {
    *(float *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + (longlong)unaff_ESI * 4) = param_1;
    (**(code **)(*unaff_RDI + 0x638))(param_1);
    FUN_00b32040();
  }
  if (!(bool)(bVar1 & (fVar4 != 0.0 && *(char *)((longlong)unaff_RDI + 0xdc) != '\0'))) {
    return;
  }
  fVar3 = *(float *)(unaff_RDI + 0x1c);
  if ((fVar3 == 0.0) && (!NAN(fVar3))) {
    fVar3 = (float)(**(code **)(*unaff_RDI + 0x458))();
  }
  fVar3 = fVar3 - fVar4;
  if ((0.0 <= fVar3) && (fVar3 <= DAT_02390124)) {
    *(undefined4 *)(unaff_RDI + 0x1c) = 0;
    fVar4 = *(float *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + (longlong)iVar2 * 4);
    if ((fVar4 == fVar3) && (!NAN(fVar4) && !NAN(fVar3))) {
      return;
    }
    *(float *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + (longlong)iVar2 * 4) = fVar3;
    (**(code **)(*unaff_RDI + 0x638))();
    FUN_00b32040();
    return;
  }
  if (((0.0 <= fVar3) || (*(float *)(unaff_RDI + 0x1c) != 0.0)) ||
     (NAN(*(float *)(unaff_RDI + 0x1c)))) {
    if (((fVar3 <= DAT_02390124) || (*(float *)(unaff_RDI + 0x1c) != 0.0)) ||
       (NAN(*(float *)(unaff_RDI + 0x1c)))) goto LAB_00c32718;
    fVar4 = *(float *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + (longlong)iVar2 * 4);
    if ((fVar4 == DAT_02390124) && (!NAN(fVar4) && !NAN(DAT_02390124))) goto LAB_00c32718;
    *(undefined4 *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + (longlong)iVar2 * 4) = 0x3f800000;
    fVar4 = DAT_02390124;
  }
  else {
    fVar4 = *(float *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + (longlong)iVar2 * 4);
    if ((fVar4 == 0.0) && (!NAN(fVar4))) goto LAB_00c32718;
    *(undefined4 *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + (longlong)iVar2 * 4) = 0;
    fVar4 = 0.0;
  }
  (**(code **)(*unaff_RDI + 0x638))(fVar4);
  FUN_00b32040();
LAB_00c32718:
  *(float *)(unaff_RDI + 0x1c) = fVar3;
  return;
}


