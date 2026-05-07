// Function: FUN_00acfb20
// Address: 00acfb20
// Size: 518 bytes
// Class: Unknown


void FUN_00acfb20(void)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong unaff_RDI;
  bool bVar11;
  
  plVar3 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_00acfd31:
    FUN_00acfd90();
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar7 = *(uint *)(plVar3 + 1);
  do {
    if (uVar7 == 0) goto LAB_00acfd31;
    plVar10 = (longlong *)(ulonglong)(uVar7 + 1);
    LOCK();
    uVar2 = *(uint *)(plVar3 + 1);
    bVar11 = uVar7 == uVar2;
    if (bVar11) {
      *(uint *)(plVar3 + 1) = uVar7 + 1;
      uVar2 = uVar7;
    }
    uVar7 = uVar2;
    UNLOCK();
  } while (!bVar11);
  lVar4 = *(longlong *)(unaff_RDI + 8);
  if (lVar4 != 0) {
    lVar8 = *(longlong *)(lVar4 + 0x100);
    bVar11 = lVar8 == 0;
LAB_00acfb72:
    plVar9 = *(longlong **)(lVar4 + 0xe8);
    if (bVar11) {
      if (plVar9 == (longlong *)0x0) goto LAB_00acfcc9;
LAB_00acfbd4:
      do {
        *(longlong *)(lVar4 + 0xe8) = plVar9[1];
        if ((longlong *)*plVar9 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar9 + 0x10))();
          if ((longlong *)*plVar9 != (longlong *)0x0) {
            (**(code **)(*(longlong *)*plVar9 + 8))();
          }
        }
        operator_delete(plVar10);
        plVar9 = *(longlong **)(lVar4 + 0xe8);
      } while (plVar9 != (longlong *)0x0);
      lVar5 = *(longlong *)(lVar4 + 0x100);
    }
    else {
      lVar5 = lVar8;
      if (plVar9 != (longlong *)0x0) goto LAB_00acfbd4;
    }
    bVar11 = true;
    lVar8 = 0;
    if (lVar5 != 0) {
      do {
        bVar11 = true;
        lVar8 = *(longlong *)(lVar4 + 0xf0);
        if ((*(longlong *)(lVar8 + 0x30) != 0) && (*(longlong *)(lVar8 + 0x38) != 0)) {
          (**(code **)(lVar8 + 0x28))();
        }
        plVar10 = *(longlong **)(lVar8 + 8);
        if (*(longlong **)(lVar8 + 8) == (longlong *)0x0) {
          plVar9 = *(longlong **)(lVar8 + 0x10);
          plVar10 = (longlong *)0x0;
          if (*plVar9 != lVar8) {
            plVar10 = (longlong *)(lVar8 + 0x10);
            do {
              lVar5 = *plVar10;
              plVar9 = *(longlong **)(lVar5 + 0x10);
              plVar10 = (longlong *)(lVar5 + 0x10);
            } while (*plVar9 != lVar5);
          }
        }
        else {
          do {
            plVar9 = plVar10;
            plVar10 = (longlong *)*plVar9;
          } while ((longlong *)*plVar9 != (longlong *)0x0);
          plVar10 = (longlong *)0x0;
        }
        if (*(longlong *)(lVar4 + 0xf0) == lVar8) {
          *(longlong **)(lVar4 + 0xf0) = plVar9;
        }
        *(longlong *)(lVar4 + 0x100) = *(longlong *)(lVar4 + 0x100) + -1;
        FUN_0098ca80();
        operator_delete(plVar10);
      } while (*(longlong *)(lVar4 + 0x100) != 0);
      lVar8 = 0;
    }
    goto LAB_00acfb72;
  }
LAB_00acfcf8:
  LOCK();
  plVar10 = plVar3 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)(*plVar3 + 0x10))();
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00acfd21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))();
      return;
    }
  }
  return;
LAB_00acfcc9:
  plVar10 = *(longlong **)(lVar4 + 0x20);
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(undefined8 *)(lVar4 + 0x20) = 0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar10 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)(*plVar10 + 0x10))();
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x18))();
      }
    }
  }
  goto LAB_00acfcf8;
}


