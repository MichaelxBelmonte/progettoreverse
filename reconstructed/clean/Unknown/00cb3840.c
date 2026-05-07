// Function: FUN_00cb3840
// Address: 00cb3840
// Size: 658 bytes
// Class: Unknown

int64_t * FUN_00cb3840(int64_t *param_1,void*param_2)

{
  char cVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar4;
  uint64_t local_a8;
  uint8_t local_a0;
  int64_t *local_98;
  char local_90;
  void*local_88;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  local_88 = param_2;
  (**(code **)(*(int64_t *)*param_1 + 0x60))();
  if (local_40 == 0) {
    cVar1 = '\0';
  }
  else {
    (**(code **)(*(int64_t *)*param_1 + 0x60))();
    cVar1 = (**(code **)(*local_98 + 0x50))();
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    local_60 = *param_1;
    local_58 = '\0';
    (**(code **)(*arg1 + 0x400))(0,&local_60,0);
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      iVar2 = FUN_00c8d620();
      if (iVar2 < 1) {
        iVar2 = 0;
      }
      iVar4 = -1;
      do {
        if (iVar4 == iVar2 + -1) {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          goto LAB_00cb3abf;
        }
        iVar4 = iVar4 + 1;
        do {
          lVar3 = FUN_00c8df10();
        } while (lVar3 == 0);
        local_a8 = *local_88;
        local_a0 = 0;
        local_48 = '\0';
        local_50 = lVar3;
        FUN_00cb3840(&local_50,&local_a8);
        lVar3 = local_40;
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      } while (lVar3 == 0);
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
LAB_00cb3abf:
      FUN_00d50b20();
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    lVar3 = *param_1;
    if ((char)param_1[1] == '\0') {
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(param_1 + 1) = 0;
    }
  }
  return this_ptr;
}

