// Function: FUN_011f6270
// Address: 011f6270
// Size: 544 bytes
// Class: MUPulseAssignmentTarget
// String references:
//   "MUPulseAssignmentTarget"

uint64_t FUN_011f6270(void)

{
  int64_t *plVar1;
  uint uVar2;
  int iVar3;
  int64_t lVar4;
  int extraout_var;
  uint64_t uVar5;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t unaff_R15;
  undefined7 uVar8;
  
  uVar8 = (undefined7)((uint64_t)unaff_R15 >> 8);
  if (*(int *)(*this_ptr + 0xc) == 0) {
    uVar5 = CONCAT71(uVar8,1);
  }
  else {
    plVar6 = (int64_t *)**(int64_t **)(*this_ptr + 0x10);
    if ((g_0272fca8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_027902e0 = "MUPulseAssignmentTarget";
      g_027902f0 = 0;
      g_027902e8 = 0;
      ___cxa_guard_release();
    }
    if (plVar6 == (int64_t *)0x0) {
      lVar4 = 0;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      lVar4 = FUN_00e86120();
    }
    plVar6 = (int64_t *)((int64_t)plVar6 + lVar4);
    lVar4 = *this_ptr;
    uVar5 = CONCAT71(uVar8,1);
    if (1 < *(int *)(lVar4 + 0xc)) {
      lVar7 = 1;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(lVar4 + 0x10) + lVar7 * 8);
        if ((g_0272fca8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          g_027902e0 = "MUPulseAssignmentTarget";
          g_027902f0 = 0;
          g_027902e8 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (int64_t *)0x0) {
          lVar4 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x360))();
          lVar4 = FUN_00e86120();
        }
        (**(code **)(*(int64_t *)((int64_t)plVar1 + lVar4) + 0x38))();
        uVar5 = (**(code **)(*plVar6 + 0x38))();
        if ((extraout_var == 0) || (uVar5 >> 0x20 == 0)) {
          uVar5 = 0;
          break;
        }
        uVar2 = FUN_00e7c020();
        uVar5 = (uint64_t)uVar2;
        if ((char)uVar2 == '\0') break;
        if ((int64_t *)((int64_t)plVar1 + lVar4) != plVar6) {
          (**(code **)(*plVar6 + 0x10))();
          plVar6 = (int64_t *)((int64_t)plVar1 + lVar4);
        }
        lVar4 = *this_ptr;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar4 + 0xc));
    }
  }
  return uVar5 & 0xffffffff;
}

