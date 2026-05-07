// Function: FUN_011f6ad0
// Address: 011f6ad0
// Size: 507 bytes
// Class: MUPulseAssignmentTarget
// String references:
//   "MUPulseAssignmentTarget"


/* WARNING: Removing unreachable block (ram,0x011f6c0a) */
/* WARNING: Removing unreachable block (ram,0x011f6c13) */
/* WARNING: Removing unreachable block (ram,0x011f6c6d) */
/* WARNING: Removing unreachable block (ram,0x011f6c72) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_011f6ad0(void)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  undefined7 uVar5;
  ulonglong uVar4;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (*(int *)(*unaff_RDI + 0xc) == 0) {
    uVar4 = CONCAT71(uVar5,1);
  }
  else {
    plVar7 = (longlong *)**(longlong **)(*unaff_RDI + 0x10);
    if ((DAT_0272fca8 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_027902e0 = "MUPulseAssignmentTarget";
      DAT_027902f0 = 0;
      _DAT_027902e8 = 0;
      ___cxa_guard_release();
    }
    if (plVar7 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar7 + 0x360))();
      lVar3 = FUN_00e86120(uVar8,1);
    }
    plVar7 = (longlong *)((longlong)plVar7 + lVar3);
    lVar3 = *unaff_RDI;
    uVar4 = CONCAT71(uVar5,1);
    if (1 < *(int *)(lVar3 + 0xc)) {
      lVar6 = 1;
      do {
        plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x10) + lVar6 * 8);
        if ((DAT_0272fca8 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
          _DAT_027902e0 = "MUPulseAssignmentTarget";
          DAT_027902f0 = 0;
          _DAT_027902e8 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (longlong *)0x0) {
          lVar3 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar1 + 0x360))();
          lVar3 = FUN_00e86120(uVar8,1);
        }
        dVar9 = (double)(**(code **)(*(longlong *)((longlong)plVar1 + lVar3) + 0x18))();
        dVar10 = (double)(**(code **)(*plVar7 + 0x18))();
        uVar4 = CONCAT71((int7)(uVar4 >> 8),dVar10 < dVar9);
        if (dVar9 <= dVar10) goto LAB_011f6c83;
        if ((longlong *)((longlong)plVar1 + lVar3) != plVar7) {
          uVar4 = 0;
          (**(code **)(*plVar7 + 0x10))();
          plVar7 = (longlong *)((longlong)plVar1 + lVar3);
        }
        lVar3 = *unaff_RDI;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar3 + 0xc));
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
LAB_011f6c83:
  return uVar4 & 0xffffffff;
}


