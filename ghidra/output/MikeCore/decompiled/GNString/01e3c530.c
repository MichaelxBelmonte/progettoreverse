// Function: FUN_01e3c530
// Address: 01e3c530
// Size: 843 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01e3c831) */
/* WARNING: Removing unreachable block (ram,0x01e3c83a) */

void FUN_01e3c530(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  bool bVar6;
  longlong *unaff_RDI;
  float extraout_XMM0_Da;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_88;
  longlong local_68;
  char local_60;
  
  fVar10 = (float)((ulonglong)param_1 >> 0x20);
  fVar8 = (float)param_1;
  fVar11 = (float)*(undefined8 *)((longlong)unaff_RDI + 0x114);
  fVar12 = (float)((ulonglong)*(undefined8 *)((longlong)unaff_RDI + 0x114) >> 0x20);
  if (((fVar11 == fVar8) && (!NAN(fVar11) && !NAN(fVar8))) && (fVar12 == fVar10)) {
    return;
  }
  fVar9 = 0.0;
  fVar7 = fVar8;
  if (((0.0 < fVar11) && (fVar7 = fVar12, 0.0 < fVar12)) &&
     (*(int *)((longlong)unaff_RDI + 0xb4) == 0)) {
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
    fVar7 = extraout_XMM0_Da;
    if (cVar5 != '\0') {
      FUN_00d50b00();
      FUN_00d50b20();
      FUN_01e436c0();
      fVar7 = fVar9;
    }
  }
  cVar5 = (**(code **)(*unaff_RDI + 0x588))(fVar7);
  if ((cVar5 != '\0') && (plVar2 = (longlong *)unaff_RDI[6], plVar2 != (longlong *)0x0)) {
    FUN_00d50b00();
    uVar1 = *(undefined8 *)((longlong)unaff_RDI + 0x114);
    FUN_00d50b00();
    local_88 = (float)uVar1;
    (**(code **)(*plVar2 + 0x5a8))(fVar8 - local_88,&stack0xffffffffffffffb8);
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  plVar2 = (longlong *)unaff_RDI[6];
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*unaff_RDI + 0x500))();
    (**(code **)(*plVar2 + 0x788))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  fVar11 = (float)*(undefined8 *)((longlong)unaff_RDI + 0x114);
  if (((fVar11 == fVar8) && (!NAN(fVar11) && !NAN(fVar8))) &&
     ((float)((ulonglong)*(undefined8 *)((longlong)unaff_RDI + 0x114) >> 0x20) == fVar10)) {
    return;
  }
  *(int *)((longlong)unaff_RDI + 0x124) = *(int *)((longlong)unaff_RDI + 0x124) + 1;
  (**(code **)(*unaff_RDI + 0x528))();
  *(float *)((longlong)unaff_RDI + 0x114) = fVar8;
  *(float *)(unaff_RDI + 0x23) = fVar10;
  (**(code **)(*unaff_RDI + 0x620))();
  (**(code **)(*unaff_RDI + 0x590))(fVar11,fVar8);
  if (0.0 < *(float *)((longlong)unaff_RDI + 0x114)) {
    fVar8 = *(float *)(unaff_RDI + 0x23);
    fVar10 = 0.0;
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
        bVar6 = 0.0 < fVar8 && 0.0 < fVar10;
        goto LAB_01e3c7e9;
      }
    }
  }
  bVar6 = false;
LAB_01e3c7e9:
  FUN_01e3c350(1,bVar6);
  if (unaff_RDI[6] != 0) {
    (**(code **)(*unaff_RDI + 0x7b0))();
    if ((local_60 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    if (local_68 == unaff_RDI[6]) {
      FUN_01cf74e0();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x520))();
  *(int *)((longlong)unaff_RDI + 0x124) = *(int *)((longlong)unaff_RDI + 0x124) + -1;
  return;
}


