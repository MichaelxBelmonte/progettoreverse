// Function: FUN_011f6270
// Address: 011f6270
// Size: 544 bytes
// Class: MUPulseAssignmentTarget
// String references:
//   "MUPulseAssignmentTarget"


/* WARNING: Removing unreachable block (ram,0x011f63c9) */
/* WARNING: Removing unreachable block (ram,0x011f63d2) */
/* WARNING: Removing unreachable block (ram,0x011f642d) */
/* WARNING: Removing unreachable block (ram,0x011f6432) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_011f6270(void)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int extraout_var;
  ulonglong uVar5;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong lVar7;
  undefined8 unaff_R15;
  undefined7 uVar8;
  
  uVar8 = (undefined7)((ulonglong)unaff_R15 >> 8);
  if (*(int *)(*unaff_RDI + 0xc) == 0) {
    uVar5 = CONCAT71(uVar8,1);
  }
  else {
    plVar6 = (longlong *)**(longlong **)(*unaff_RDI + 0x10);
    if ((DAT_0272fca8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_027902e0 = "MUPulseAssignmentTarget";
      DAT_027902f0 = 0;
      _DAT_027902e8 = 0;
      ___cxa_guard_release();
    }
    if (plVar6 == (longlong *)0x0) {
      lVar4 = 0;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      lVar4 = FUN_00e86120();
    }
    plVar6 = (longlong *)((longlong)plVar6 + lVar4);
    lVar4 = *unaff_RDI;
    uVar5 = CONCAT71(uVar8,1);
    if (1 < *(int *)(lVar4 + 0xc)) {
      lVar7 = 1;
      do {
        plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + lVar7 * 8);
        if ((DAT_0272fca8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          _DAT_027902e0 = "MUPulseAssignmentTarget";
          DAT_027902f0 = 0;
          _DAT_027902e8 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (longlong *)0x0) {
          lVar4 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x360))();
          lVar4 = FUN_00e86120();
        }
        (**(code **)(*(longlong *)((longlong)plVar1 + lVar4) + 0x38))();
        uVar5 = (**(code **)(*plVar6 + 0x38))();
        if ((extraout_var == 0) || (uVar5 >> 0x20 == 0)) {
          uVar5 = 0;
          break;
        }
        uVar2 = FUN_00e7c020();
        uVar5 = (ulonglong)uVar2;
        if ((char)uVar2 == '\0') break;
        if ((longlong *)((longlong)plVar1 + lVar4) != plVar6) {
          (**(code **)(*plVar6 + 0x10))();
          plVar6 = (longlong *)((longlong)plVar1 + lVar4);
        }
        lVar4 = *unaff_RDI;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar4 + 0xc));
    }
  }
  return uVar5 & 0xffffffff;
}


