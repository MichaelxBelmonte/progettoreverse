// Function: FUN_01cf3b20
// Address: 01cf3b20
// Size: 708 bytes
// Class: GNClipView


void FUN_01cf3b20(void)

{
  int iVar1;
  undefined4 unaff_ESI;
  longlong *unaff_RDI;
  float fVar2;
  
  switch(unaff_ESI) {
  case 0:
    iVar1 = *(int *)((longlong)unaff_RDI + 0x154);
    if (iVar1 == 2) {
      fVar2 = (float)FUN_01cf4890();
      if ((*(float *)((longlong)unaff_RDI + 0x164) != fVar2) ||
         (NAN(*(float *)((longlong)unaff_RDI + 0x164)) || NAN(fVar2))) {
        *(float *)((longlong)unaff_RDI + 0x164) = fVar2;
        goto LAB_01cf3dc1;
      }
    }
    else if (iVar1 == 1) {
      if ((*(float *)((longlong)unaff_RDI + 0x164) != DAT_02390124) ||
         (NAN(*(float *)((longlong)unaff_RDI + 0x164)) || NAN(DAT_02390124))) {
        *(undefined4 *)((longlong)unaff_RDI + 0x164) = 0x3f800000;
        goto LAB_01cf3dc1;
      }
    }
    else if ((iVar1 == 0) &&
            ((*(float *)((longlong)unaff_RDI + 0x164) != 0.0 ||
             (NAN(*(float *)((longlong)unaff_RDI + 0x164)))))) {
      *(undefined4 *)((longlong)unaff_RDI + 0x164) = 0;
LAB_01cf3dc1:
      FUN_01cf41d0();
                    /* WARNING: Could not recover jumptable at 0x01cf3ddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_RDI + 0x618))();
      return;
    }
    break;
  case 1:
    iVar1 = *(int *)((longlong)unaff_RDI + 0x15c);
    if (iVar1 == 2) {
      fVar2 = (float)FUN_01cf4890();
      if ((*(float *)((longlong)unaff_RDI + 0x16c) != fVar2) ||
         (NAN(*(float *)((longlong)unaff_RDI + 0x16c)) || NAN(fVar2))) {
        *(float *)((longlong)unaff_RDI + 0x16c) = fVar2;
        goto LAB_01cf3dc1;
      }
    }
    else if (iVar1 == 1) {
      if ((*(float *)((longlong)unaff_RDI + 0x16c) != DAT_02390124) ||
         (NAN(*(float *)((longlong)unaff_RDI + 0x16c)) || NAN(DAT_02390124))) {
        *(undefined4 *)((longlong)unaff_RDI + 0x16c) = 0x3f800000;
        goto LAB_01cf3dc1;
      }
    }
    else if ((iVar1 == 0) &&
            ((*(float *)((longlong)unaff_RDI + 0x16c) != 0.0 ||
             (NAN(*(float *)((longlong)unaff_RDI + 0x16c)))))) {
      *(undefined4 *)((longlong)unaff_RDI + 0x16c) = 0;
      goto LAB_01cf3dc1;
    }
    break;
  case 2:
    iVar1 = (int)unaff_RDI[0x2b];
    if (iVar1 == 2) {
      fVar2 = (float)FUN_01cf4890();
      if ((*(float *)(unaff_RDI + 0x2d) != fVar2) ||
         (NAN(*(float *)(unaff_RDI + 0x2d)) || NAN(fVar2))) {
        *(float *)(unaff_RDI + 0x2d) = fVar2;
        goto LAB_01cf3dc1;
      }
    }
    else if (iVar1 == 1) {
      if ((*(float *)(unaff_RDI + 0x2d) != DAT_02390124) ||
         (NAN(*(float *)(unaff_RDI + 0x2d)) || NAN(DAT_02390124))) {
        *(undefined4 *)(unaff_RDI + 0x2d) = 0x3f800000;
        goto LAB_01cf3dc1;
      }
    }
    else if ((iVar1 == 0) &&
            ((*(float *)(unaff_RDI + 0x2d) != 0.0 || (NAN(*(float *)(unaff_RDI + 0x2d)))))) {
      *(undefined4 *)(unaff_RDI + 0x2d) = 0;
      goto LAB_01cf3dc1;
    }
    break;
  case 3:
    iVar1 = (int)unaff_RDI[0x2c];
    if (iVar1 == 2) {
      fVar2 = (float)FUN_01cf4890();
      if ((*(float *)(unaff_RDI + 0x2e) != fVar2) ||
         (NAN(*(float *)(unaff_RDI + 0x2e)) || NAN(fVar2))) {
        *(float *)(unaff_RDI + 0x2e) = fVar2;
        goto LAB_01cf3dc1;
      }
    }
    else if (iVar1 == 1) {
      if ((*(float *)(unaff_RDI + 0x2e) != DAT_02390124) ||
         (NAN(*(float *)(unaff_RDI + 0x2e)) || NAN(DAT_02390124))) {
        *(undefined4 *)(unaff_RDI + 0x2e) = 0x3f800000;
        goto LAB_01cf3dc1;
      }
    }
    else if ((iVar1 == 0) &&
            ((*(float *)(unaff_RDI + 0x2e) != 0.0 || (NAN(*(float *)(unaff_RDI + 0x2e)))))) {
      *(undefined4 *)(unaff_RDI + 0x2e) = 0;
      goto LAB_01cf3dc1;
    }
  }
  return;
}


