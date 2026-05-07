// Function: FUN_00b1bad0
// Address: 00b1bad0
// Size: 712 bytes
// Class: GNUni


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b1bad0(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong unaff_RDI;
  undefined8 extraout_XMM0_Qa;
  double dVar6;
  float fVar7;
  float fVar8;
  
  if (DAT_028a0de0 == 0) {
    FUN_00e830b0();
    DAT_028a0de4 = 1;
    DAT_028a0e00 = (double)FUN_00e7d6f0();
    if ((*(longlong **)(unaff_RDI + 0x30) != (longlong *)0x0) &&
       (cVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x30) + 0x598))(), cVar4 != '\0')) {
      plVar3 = *(longlong **)(unaff_RDI + 0x30);
      uVar2 = *(undefined4 *)(unaff_RDI + 0x10);
      uVar1 = *(undefined8 *)(unaff_RDI + 0x18);
      FUN_00d50b00();
      (**(code **)(*plVar3 + 0x540))(uVar1,uVar2);
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
    }
    if (*(longlong **)(unaff_RDI + 0x38) == (longlong *)0x0) {
      if (0 < *(int *)(unaff_RDI + 0xa4)) {
        lVar5 = 0;
        do {
          ___bzero();
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(unaff_RDI + 0xa4));
      }
    }
    else {
      cVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x38) + 0x4f8))();
      if (cVar4 != '\0') {
        plVar3 = *(longlong **)(unaff_RDI + 0x38);
        uVar1 = *(undefined8 *)(unaff_RDI + 0x18);
        uVar2 = *(undefined4 *)(unaff_RDI + 0xc);
        FUN_00d50b00();
        (**(code **)(*plVar3 + 0x500))(uVar1,uVar2,&stack0xffffffffffffffa8);
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
      }
      cVar4 = (**(code **)(**(longlong **)(unaff_RDI + 0x38) + 0x4f0))();
      if (cVar4 == '\0') {
        (**(code **)(**(longlong **)(unaff_RDI + 0x38) + 0x538))
                  (extraout_XMM0_Qa,*(undefined4 *)(unaff_RDI + 0xc));
      }
      else {
        (**(code **)(**(longlong **)(unaff_RDI + 0x38) + 0x400))
                  (*(undefined4 *)(unaff_RDI + 0xc),*(undefined8 *)(unaff_RDI + 0x98));
      }
    }
    dVar6 = (double)FUN_00e7d6f0();
    fVar8 = (float)*(int *)(unaff_RDI + 0xc) / (float)*(double *)(unaff_RDI + 0x18);
    fVar7 = (float)((dVar6 - DAT_028a0e00) / (double)fVar8);
    if ((0.0 < DAT_028a0df8) && (DAT_028a0e08 + DAT_02422df0 < dVar6)) {
      DAT_028a0df8 = DAT_028a0df8 + fVar8 / _DAT_023d5650;
    }
    if (DAT_028a0df8 < fVar7) {
      DAT_028a0e08 = DAT_028a0e00;
      DAT_028a0df8 = fVar7;
    }
    fVar7 = DAT_02390124;
    if ((DAT_02390124 < DAT_028a0df8) || (fVar7 = 0.0, DAT_028a0df8 < 0.0)) {
      DAT_028a0df8 = fVar7;
    }
    _DAT_028a0dfc = FUN_00e830c0();
    if ((DAT_028a0dc8 == '\0') && (DAT_02394234 <= DAT_028a0df8)) {
      *(int *)(unaff_RDI + 0xb4) = *(int *)(unaff_RDI + 0xb4) + 1;
    }
    DAT_028a0de4 = 0;
  }
  else if (0 < *(int *)(unaff_RDI + 0xa4)) {
    lVar5 = 0;
    do {
      ___bzero();
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(unaff_RDI + 0xa4));
  }
  return;
}


