// Function: FUN_00dad420
// Address: 00dad420
// Size: 638 bytes
// Class: GNForeignThreadPool
// === GNForeignThreadPool properties ===
//   GNThreadPriorityGroup _priority
//                   _threadPool
//                   _allocCount
//                   _allocLock
//                   _allocThread
//                   _indexHint


void FUN_00dad420(uint64_t param_1,int64_t *param_2)

{
  char cVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  int64_t local_48;
  char local_40;
  char local_31;
  
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0x18) == 0)) goto LAB_00dad620;
  (**(code **)(*arg1 + 0x608))();
  lVar2 = local_48;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    (**(code **)(*arg1 + 0x608))();
    local_80 = *param_2;
    local_78 = '\0';
    (**(code **)(*local_90 + 0x370))(param_1,&local_80);
    lVar3 = local_48;
    lVar2 = *param_2;
    if (lVar2 == local_48) {
      if (((char)param_2[1] == '\0') && (local_48 != 0)) {
        local_50 = param_2 + 1;
        if (local_40 != '\0') goto LAB_00dad508;
        FUN_00d50b00();
        goto LAB_00dad546;
      }
LAB_00dad54d:
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = param_2 + 1;
      cVar1 = (char)param_2[1];
      if (local_40 == '\0') {
        local_31 = cVar1;
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *param_2 = lVar3;
        if ((local_31 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
LAB_00dad546:
        *(void*)local_50 = 1;
        goto LAB_00dad54d;
      }
      *param_2 = local_48;
      if ((cVar1 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
LAB_00dad508:
      *(void*)local_50 = 1;
      local_40 = '\0';
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_70 = *param_2;
  local_68 = '\0';
  FUN_00daa910();
  lVar2 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_60 = lVar2;
    local_58 = '\0';
    (**(code **)(*arg1 + 0x618))(param_1,&local_60);
    lVar2 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    *this_ptr = lVar2;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
    return;
  }
LAB_00dad620:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

