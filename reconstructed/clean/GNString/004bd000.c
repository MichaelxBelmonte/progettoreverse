// Function: FUN_004bd000
// Address: 004bd000
// Size: 206391 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_004bd000(uint64_t param_1,int param_2,size_t param_3)

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
    if (iVar1 < 0x20) {
      if (0x20 < *piVar7 + param_2) {
        param_2 = 0x20;
      }
      _memcpy(&segment_command_00000020,(void *)(int64_t)param_2,param_3);
      *(void*)(arg1 + param_2) = 0;
      *piVar7 = *piVar7 + param_2;
      iVar6 = param_2;
    }
    else {
      if (iVar1 < 0x61) {
        uVar3 = *piVar7 + -0x20 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0xa2) {
        uVar3 = *piVar7 + -0x61 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0xe3) {
        uVar3 = *piVar7 + -0xa2 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x124) {
        uVar3 = *piVar7 + -0xe3 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x165) {
        uVar3 = *piVar7 + -0x124 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x1a6) {
        uVar3 = *piVar7 + -0x165 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x1e7) {
        uVar3 = *piVar7 + -0x1a6 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x228) {
        uVar3 = *piVar7 + -0x1e7 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x269) {
        uVar3 = *piVar7 + -0x228 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x2aa) {
        uVar3 = *piVar7 + -0x269 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x2eb) {
        uVar3 = *piVar7 + -0x2aa + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x32c) {
        uVar3 = *piVar7 + -0x2eb + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x36d) {
        uVar3 = *piVar7 + -0x32c + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x3ae) {
        uVar3 = *piVar7 + -0x36d + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x3ef) {
        uVar3 = *piVar7 + -0x3ae + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x430) {
        uVar3 = *piVar7 + -0x3ef + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x471) {
        uVar3 = *piVar7 + -0x430 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x4b2) {
        uVar3 = *piVar7 + -0x471 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x4f3) {
        uVar3 = *piVar7 + -0x4b2 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x534) {
        uVar3 = *piVar7 + -0x4f3 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x575) {
        uVar3 = *piVar7 + -0x534 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x5b6) {
        uVar3 = *piVar7 + -0x575 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x5f7) {
        uVar3 = *piVar7 + -0x5b6 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x638) {
        uVar3 = *piVar7 + -0x5f7 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x41;
        if ((int)uVar3 < 0x42) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else if (iVar1 < 0x66d) {
        uVar3 = *piVar7 + -0x638 + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x35;
        if ((int)uVar3 < 0x36) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      else {
        if (0x68a < iVar1) goto LAB_004ef610;
        uVar3 = *piVar7 + -0x66d + param_2;
        pvVar4 = (void *)(uint64_t)uVar3;
        iVar6 = 0x1e;
        if ((int)uVar3 < 0x1f) {
          iVar6 = param_2;
        }
        pvVar5 = (void *)(int64_t)iVar6;
      }
      _memcpy(pvVar4,pvVar5,param_3);
      *(void*)(arg1 + (int64_t)pvVar5) = 0;
      *piVar7 = *piVar7 + (int)pvVar5;
    }
  }
LAB_004ef610:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar2) {
                        ___stack_chk_fail();
  }
  return iVar6;
}

