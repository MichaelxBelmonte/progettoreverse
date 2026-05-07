// Function: FUN_00162ad0
// Address: 00162ad0
// Size: 58160 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


int FUN_00162ad0(uint64_t param_1,int param_2,size_t param_3)

{
  int iVar1;
  int64_t lVar2;
  uint uVar3;
  void *pvVar5;
  int64_t arg1;
  int64_t this_ptr;
  int iVar6;
  int *piVar7;
  void *pvVar4;
  
  lVar2 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  iVar1 = *(int *)(this_ptr + 0x30);
  iVar6 = 0;
  if (-1 < iVar1) {
    piVar7 = (int *)(this_ptr + 0x30);
    if (iVar1 < 0x1b) {
      if (0x1b < *piVar7 + param_2) {
        param_2 = 0x1b;
      }
      _memcpy((void *)((int64_t)&MACH_HEADER.flags + 3),(void *)(int64_t)param_2,param_3);
      *(void*)(arg1 + param_2) = 0;
      *piVar7 = *piVar7 + param_2;
      iVar6 = param_2;
    }
    else {
      if (iVar1 < 0x5c) {
        uVar3 = *piVar7 + -0x1b + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x9d) {
        uVar3 = *piVar7 + -0x5c + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0xde) {
        uVar3 = *piVar7 + -0x9d + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x11f) {
        uVar3 = *piVar7 + -0xde + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x160) {
        uVar3 = *piVar7 + -0x11f + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x1a1) {
        uVar3 = *piVar7 + -0x160 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x1aa) {
        uVar3 = *piVar7 + -0x1a1 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 9;
        if ((int)uVar3 < 10) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else {
        if (0x1c2 < iVar1) goto LAB_00170dd9;
        uVar3 = *piVar7 + -0x1aa + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x19;
        if ((int)uVar3 < 0x1a) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      _memcpy(pvVar4,pvVar5,param_3);
      *(void*)(arg1 + (int64_t)pvVar5) = 0;
      *piVar7 = *piVar7 + (int)pvVar5;
    }
  }
LAB_00170dd9:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar2) {
                        ___stack_chk_fail();
  }
  return iVar6;
}

