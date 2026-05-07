// Function: FUN_011f6ad0
// Address: 011f6ad0
// Size: 507 bytes
// Class: MUPulseAssignmentTarget
// String references:
//   "MUPulseAssignmentTarget"

uint64_t FUN_011f6ad0(void)

{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  uint64_t unaff_RBX;
  undefined7 uVar5;
  uint64_t uVar4;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  double dVar9;
  double dVar10;
  
  uVar5 = (undefined7)((uint64_t)unaff_RBX >> 8);
  if (*(int *)(*this_ptr + 0xc) == 0) {
    uVar4 = CONCAT71(uVar5,1);
  }
  else {
    plVar7 = (int64_t *)**(int64_t **)(*this_ptr + 0x10);
    if ((g_0272fca8 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_027902e0 = "MUPulseAssignmentTarget";
      g_027902f0 = 0;
      g_027902e8 = 0;
      ___cxa_guard_release();
    }
    if (plVar7 == (int64_t *)0x0) {
      lVar3 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar7 + 0x360))();
      lVar3 = FUN_00e86120(uVar8,1);
    }
    plVar7 = (int64_t *)((int64_t)plVar7 + lVar3);
    lVar3 = *this_ptr;
    uVar4 = CONCAT71(uVar5,1);
    if (1 < *(int *)(lVar3 + 0xc)) {
      lVar6 = 1;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(lVar3 + 0x10) + lVar6 * 8);
        if ((g_0272fca8 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
          g_027902e0 = "MUPulseAssignmentTarget";
          g_027902f0 = 0;
          g_027902e8 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (int64_t *)0x0) {
          lVar3 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar1 + 0x360))();
          lVar3 = FUN_00e86120(uVar8,1);
        }
        dVar9 = (double)(**(code **)(*(int64_t *)((int64_t)plVar1 + lVar3) + 0x18))();
        dVar10 = (double)(**(code **)(*plVar7 + 0x18))();
        uVar4 = CONCAT71((int7)(uVar4 >> 8),dVar10 < dVar9);
        if (dVar9 <= dVar10) goto LAB_011f6c83;
        if ((int64_t *)((int64_t)plVar1 + lVar3) != plVar7) {
          uVar4 = 0;
          (**(code **)(*plVar7 + 0x10))();
          plVar7 = (int64_t *)((int64_t)plVar1 + lVar3);
        }
        lVar3 = *this_ptr;
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar3 + 0xc));
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
LAB_011f6c83:
  return uVar4 & 0xffffffff;
}

