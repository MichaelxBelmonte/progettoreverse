// Function: FUN_013fc290
// Address: 013fc290
// Size: 617 bytes
// Class: MUDataPointFunction


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013fc290(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 local_1850;
  int local_184c [5];
  undefined1 local_1838 [2048];
  undefined1 local_1038 [4096];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)((longlong)unaff_RDI + 0x39) == '\0') && (unaff_RDI[2] != -1)) {
    iVar1 = FUN_011edec0();
    lVar3 = FUN_011edcb0();
    lVar5 = unaff_RDI[3];
    lVar8 = 0;
    if (lVar5 == -1) {
      lVar8 = (longlong)iVar1;
    }
    lVar8 = lVar3 - lVar8;
    if ((unaff_RDI[2] < lVar8) && (lVar6 = unaff_RDI[6], lVar6 < lVar8)) {
      if (unaff_RDI[9] == 0) {
        FUN_013fb700();
        (**(code **)(*unaff_RDI + 0x3a8))();
        lVar5 = unaff_RDI[3];
        lVar6 = unaff_RDI[6];
      }
      plVar4 = unaff_RDI + 2;
      if (lVar6 != 0) {
        plVar4 = unaff_RDI + 6;
      }
      lVar3 = *plVar4;
      lVar6 = lVar8;
      if (lVar5 < lVar8) {
        lVar6 = lVar5;
      }
      if (lVar5 == -1) {
        lVar6 = lVar8;
      }
      iVar7 = (int)lVar6 - (int)lVar3;
      if (0 < iVar7) {
        iVar2 = FUN_011edd80();
        if (iVar2 < iVar7) {
          FUN_011edd80();
          FUN_00b87ec0();
          FUN_011edd80();
        }
        uVar9 = FUN_011ee140(local_1038,&local_1850,local_184c,lVar3);
        uVar9 = FUN_013fc010(uVar9,local_1838);
        uVar9 = FUN_00b87ba0(uVar9,local_1850);
        if (local_184c[0] != 0) {
          uVar9 = FUN_013fc010(uVar9,local_1838);
          FUN_00b87ba0(uVar9,local_184c[0]);
        }
        (**(code **)(*unaff_RDI + 0x3b0))();
        lVar5 = unaff_RDI[3];
      }
      if ((lVar5 != -1) && (lVar5 < lVar8)) {
        FUN_00b881a0();
        if (0 < iVar1) {
          FUN_00da6b00(((double)iVar1 / (double)unaff_RDI[5]) * _DAT_0240d7f8);
        }
        (**(code **)(*unaff_RDI + 0x3b8))();
      }
      unaff_RDI[6] = lVar6;
    }
    else if ((lVar5 != -1) && (lVar5 < lVar3)) {
      FUN_00b881a0();
      if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
                    /* WARNING: Could not recover jumptable at 0x013fc4ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_RDI + 0x3b8))();
        return;
      }
      goto LAB_013fc4f4;
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
LAB_013fc4f4:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


