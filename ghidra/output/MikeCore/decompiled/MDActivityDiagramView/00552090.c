// Function: FUN_00552090
// Address: 00552090
// Size: 1158 bytes
// Class: MDActivityDiagramView


void FUN_00552090(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  float fVar8;
  undefined4 uVar9;
  double dVar10;
  longlong *local_38;
  char local_30;
  float local_24;
  
  local_24 = (float)FUN_01256f00();
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00b160d0();
    fVar8 = (float)(**(code **)(*local_38 + 0x6e0))();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_24 = local_24 + fVar8;
  }
  plVar7 = *(longlong **)(unaff_RDI + 0x80);
  dVar10 = (double)FUN_00e7d6f0();
  iVar3 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
  iVar4 = *(int *)(plVar7[0x28] + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar3 = iVar3 % (iVar6 >> 2);
  iVar4 = (int)plVar7[0x2b];
  lVar1 = *(longlong *)(plVar7[0x28] + 0x10);
  do {
    iVar4 = iVar4 + 1;
    if (iVar6 >> 2 <= iVar4) {
      iVar4 = 0;
    }
    *(float *)(lVar1 + (longlong)iVar4 * 4) = local_24;
  } while (iVar4 != iVar3);
  *(int *)(plVar7 + 0x2b) = iVar3;
  (**(code **)(*plVar7 + 0x620))();
  iVar4 = FUN_012a7610();
  fVar8 = (float)iVar4;
  plVar7 = *(longlong **)(unaff_RDI + 0x88);
  if ((*(float *)((longlong)plVar7 + 0x13c) != fVar8) ||
     (NAN(*(float *)((longlong)plVar7 + 0x13c)) || NAN(fVar8))) {
    *(float *)((longlong)plVar7 + 0x13c) = fVar8;
    (**(code **)(*plVar7 + 0x620))();
    plVar7 = *(longlong **)(unaff_RDI + 0x88);
  }
  iVar3 = FUN_0142fdf0();
  dVar10 = (double)FUN_00e7d6f0();
  iVar5 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
  iVar4 = *(int *)(plVar7[0x28] + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar5 = iVar5 % (iVar6 >> 2);
  iVar4 = (int)plVar7[0x2b];
  lVar1 = *(longlong *)(plVar7[0x28] + 0x10);
  do {
    iVar4 = iVar4 + 1;
    if (iVar6 >> 2 <= iVar4) {
      iVar4 = 0;
    }
    *(float *)(lVar1 + (longlong)iVar4 * 4) = (float)iVar3;
  } while (iVar4 != iVar5);
  *(int *)(plVar7 + 0x2b) = iVar5;
  (**(code **)(*plVar7 + 0x620))();
  plVar7 = *(longlong **)(unaff_RDI + 0x90);
  uVar9 = FUN_01d428e0();
  dVar10 = (double)FUN_00e7d6f0();
  iVar3 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
  iVar4 = *(int *)(plVar7[0x28] + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar3 = iVar3 % (iVar6 >> 2);
  iVar4 = (int)plVar7[0x2b];
  lVar1 = *(longlong *)(plVar7[0x28] + 0x10);
  do {
    iVar4 = iVar4 + 1;
    if (iVar6 >> 2 <= iVar4) {
      iVar4 = 0;
    }
    *(undefined4 *)(lVar1 + (longlong)iVar4 * 4) = uVar9;
  } while (iVar4 != iVar3);
  *(int *)(plVar7 + 0x2b) = iVar3;
  (**(code **)(*plVar7 + 0x620))();
  plVar7 = *(longlong **)(unaff_RDI + 0x98);
  uVar9 = FUN_00bcacc0();
  dVar10 = (double)FUN_00e7d6f0();
  iVar3 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
  iVar4 = *(int *)(plVar7[0x28] + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar3 = iVar3 % (iVar6 >> 2);
  iVar4 = (int)plVar7[0x2b];
  lVar1 = *(longlong *)(plVar7[0x28] + 0x10);
  do {
    iVar4 = iVar4 + 1;
    if (iVar6 >> 2 <= iVar4) {
      iVar4 = 0;
    }
    *(undefined4 *)(lVar1 + (longlong)iVar4 * 4) = uVar9;
  } while (iVar4 != iVar3);
  *(int *)(plVar7 + 0x2b) = iVar3;
  (**(code **)(*plVar7 + 0x620))();
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_00b160d0();
    fVar8 = (float)(**(code **)(*local_38 + 0x6e8))();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar7 = *(longlong **)(unaff_RDI + 0xa0);
    if (*(float *)((longlong)plVar7 + 0x13c) <= fVar8 &&
        fVar8 != *(float *)((longlong)plVar7 + 0x13c)) {
      *(float *)((longlong)plVar7 + 0x13c) = fVar8;
      (**(code **)(*plVar7 + 0x620))();
      plVar7 = *(longlong **)(unaff_RDI + 0xa0);
    }
    dVar10 = (double)FUN_00e7d6f0();
    iVar3 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
    iVar4 = *(int *)(plVar7[0x28] + 0x18);
    iVar6 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar6 = iVar4;
    }
    iVar3 = iVar3 % (iVar6 >> 2);
    iVar4 = (int)plVar7[0x2b];
    lVar1 = *(longlong *)(plVar7[0x28] + 0x10);
    do {
      iVar4 = iVar4 + 1;
      if (iVar6 >> 2 <= iVar4) {
        iVar4 = 0;
      }
      *(float *)(lVar1 + (longlong)iVar4 * 4) = fVar8;
    } while (iVar4 != iVar3);
    *(int *)(plVar7 + 0x2b) = iVar3;
    (**(code **)(*plVar7 + 0x620))();
  }
  plVar7 = *(longlong **)(unaff_RDI + 0xa8);
  FUN_00e36840();
  iVar3 = FUN_00e37ca0();
  dVar10 = (double)FUN_00e7d6f0();
  iVar5 = FUN_00e7d850(dVar10 * (double)*(float *)(plVar7 + 0x27));
  iVar4 = *(int *)(plVar7[0x28] + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar5 = iVar5 % (iVar6 >> 2);
  iVar4 = (int)plVar7[0x2b];
  lVar1 = *(longlong *)(plVar7[0x28] + 0x10);
  do {
    iVar4 = iVar4 + 1;
    if (iVar6 >> 2 <= iVar4) {
      iVar4 = 0;
    }
    *(float *)(lVar1 + (longlong)iVar4 * 4) = (float)iVar3;
  } while (iVar4 != iVar5);
  *(int *)(plVar7 + 0x2b) = iVar5;
  (**(code **)(*plVar7 + 0x620))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


