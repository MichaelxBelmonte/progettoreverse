// Function: FUN_00dabfc0
// Address: 00dabfc0
// Size: 563 bytes
// Class: GNForeignThreadPool
// === GNForeignThreadPool properties ===
//   GNThreadPriorityGroup _priority
//                   _threadPool
//                   _allocCount
//                   _allocLock
//                   _allocThread
//                   _indexHint


void FUN_00dabfc0(uint64_t param_1,int param_2,size_t param_3)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  int64_t arg1;
  int64_t *this_ptr;
  bool bVar5;
  int64_t local_48;
  char local_40;
  char local_35;
  int local_34;
  
  if (*(int64_t *)(arg1 + 0x20) == 0) {
    iVar2 = *(int *)(arg1 + 0x18);
    bVar1 = *(byte *)(arg1 + 0x28);
    pvVar4 = (void *)(uint64_t)bVar1;
    if ((int)(iVar2 + (uint)bVar1) < *(int *)(*(int64_t *)(arg1 + 0x10) + 0x18)) {
      if (bVar1 != 0) {
        if (*(char *)(*(int64_t *)(*(int64_t *)(arg1 + 0x10) + 0x10) + (int64_t)iVar2) !=
            'b') goto LAB_00dac1d5;
        *(int *)(arg1 + 0x18) = iVar2 + 1;
      }
      iVar2 = param_2;
      if ((param_2 != -1) || (cVar3 = FUN_00dab510(), iVar2 = local_34, cVar3 != '\0')) {
        local_34 = iVar2;
        FUN_00c8e690();
        if ((local_40 == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        _memcpy(pvVar4,(void *)(int64_t)local_34,param_3);
        FUN_00c92150();
        *(int *)(arg1 + 0x18) = *(int *)(arg1 + 0x18) + local_34;
        *this_ptr = local_48;
        *(void*)(this_ptr + 1) = 1;
        return;
      }
    }
  }
  else {
    if (*(char *)(arg1 + 0x28) != '\0') {
      FUN_00ccd300(&local_34,&local_35);
      bVar5 = local_34 != 1;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != 0 || bVar5) || (local_35 != 'b')) goto LAB_00dac1d5;
    }
    iVar2 = param_2;
    if ((param_2 != -1) || (cVar3 = FUN_00dab510(), iVar2 = local_34, cVar3 != '\0')) {
      local_34 = iVar2;
      iVar2 = local_34;
      FUN_00c8e690();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      (**(code **)(**(int64_t **)(arg1 + 0x20) + 0x380))
                (&local_34,*(void*)(local_48 + 0x10));
      bVar5 = local_34 != iVar2;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0 || bVar5) {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        FUN_00d50b20();
        return;
      }
      FUN_00c92150();
      *this_ptr = local_48;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
  }
LAB_00dac1d5:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

