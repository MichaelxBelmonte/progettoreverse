// Function: FUN_01e3c0a0
// Address: 01e3c0a0
// Size: 620 bytes
// Class: GNString


void FUN_01e3c0a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  bool bVar6;
  longlong *unaff_RDI;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 local_68;
  
  fVar9 = (float)((ulonglong)param_2 >> 0x20);
  fVar11 = (float)param_2;
  fVar8 = (float)((ulonglong)param_1 >> 0x20);
  if ((*(float *)((longlong)unaff_RDI + 0x10c) == (float)param_1) &&
     (!NAN(*(float *)((longlong)unaff_RDI + 0x10c)) && !NAN((float)param_1))) {
    if ((*(float *)(unaff_RDI + 0x22) == fVar8) &&
       (!NAN(*(float *)(unaff_RDI + 0x22)) && !NAN(fVar8))) {
      if ((*(float *)((longlong)unaff_RDI + 0x114) == fVar11) &&
         (!NAN(*(float *)((longlong)unaff_RDI + 0x114)) && !NAN(fVar11))) {
        if ((*(float *)(unaff_RDI + 0x23) == fVar9) &&
           (!NAN(*(float *)(unaff_RDI + 0x23)) && !NAN(fVar9))) {
          return;
        }
      }
    }
  }
  *(int *)((longlong)unaff_RDI + 0x124) = *(int *)((longlong)unaff_RDI + 0x124) + 1;
  uVar7 = 0;
  if (((*(float *)((longlong)unaff_RDI + 0x114) <= 0.0) ||
      (uVar10 = 0, *(float *)(unaff_RDI + 0x23) <= 0.0)) ||
     (*(int *)((longlong)unaff_RDI + 0xb4) != 0)) {
LAB_01e3c1b2:
    plVar2 = (longlong *)unaff_RDI[6];
    uVar10 = uVar7;
  }
  else {
    plVar4 = (longlong *)unaff_RDI[6];
    plVar2 = unaff_RDI;
    while (plVar3 = plVar4, plVar3 != (longlong *)0x0) {
      plVar4 = (longlong *)plVar3[6];
      plVar2 = plVar3;
      if ((longlong *)plVar3[6] == plVar3) {
        plVar4 = plVar3;
      }
    }
    cVar5 = (**(code **)(*plVar2 + 0x4b8))();
    uVar7 = extraout_XMM0_Da;
    if (cVar5 == '\0') goto LAB_01e3c1b2;
    FUN_00d50b00();
    FUN_00d50b20();
    FUN_01e436c0();
    plVar2 = (longlong *)unaff_RDI[6];
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00(uVar10);
    (**(code **)(*unaff_RDI + 0x500))();
    (**(code **)(*plVar2 + 0x788))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  uVar1 = *(undefined8 *)((longlong)unaff_RDI + 0x114);
  *(undefined8 *)((longlong)unaff_RDI + 0x10c) = param_1;
  *(float *)((longlong)unaff_RDI + 0x114) = fVar11;
  *(float *)(unaff_RDI + 0x23) = fVar9;
  (**(code **)(*unaff_RDI + 0x620))();
  local_68 = (undefined4)uVar1;
  (**(code **)(*unaff_RDI + 0x590))(local_68,(int)*(undefined8 *)((longlong)unaff_RDI + 0x114));
  if (0.0 < *(float *)((longlong)unaff_RDI + 0x114)) {
    fVar8 = *(float *)(unaff_RDI + 0x23);
    fVar11 = 0.0;
    if ((0.0 < fVar8) && (*(int *)((longlong)unaff_RDI + 0xb4) == 0)) {
      plVar4 = (longlong *)unaff_RDI[6];
      plVar2 = unaff_RDI;
      while (plVar3 = plVar4, plVar3 != (longlong *)0x0) {
        plVar4 = (longlong *)plVar3[6];
        plVar2 = plVar3;
        if ((longlong *)plVar3[6] == plVar3) {
          plVar4 = plVar3;
        }
      }
      cVar5 = (**(code **)(*plVar2 + 0x4b8))();
      if (cVar5 != '\0') {
        FUN_00d50b00();
        FUN_00d50b20();
        FUN_01e436c0();
        bVar6 = 0.0 < fVar8 && 0.0 < fVar11;
        goto LAB_01e3c2d9;
      }
    }
  }
  bVar6 = false;
LAB_01e3c2d9:
  FUN_01e3c350(1,bVar6);
  (**(code **)(*unaff_RDI + 0x520))();
  *(int *)((longlong)unaff_RDI + 0x124) = *(int *)((longlong)unaff_RDI + 0x124) + -1;
  return;
}


