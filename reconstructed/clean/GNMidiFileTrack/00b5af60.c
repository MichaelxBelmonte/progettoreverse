// Function: FUN_00b5af60
// Address: 00b5af60
// Size: 536 bytes
// Class: GNMidiFileTrack

void FUN_00b5af60(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t this_ptr;
  int64_t *local_58;
  int local_40;
  
  lVar1 = *(int64_t *)(this_ptr + 0x10);
  if (*(int *)(lVar1 + 0xc) == 0) {
    if (*(int64_t *)(this_ptr + 0x18) != 0) {
      *(void*)(this_ptr + 0x18) = 0;
      FUN_00d50b20();
      return;
    }
  }
  else {
    local_58 = (int64_t *)0x0;
    local_40 = -1;
    while( true ) {
      lVar4 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      local_58 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
      (**(code **)(*local_58 + 0x370))();
    }
    FUN_00b671d0();
    FUN_00c8e690();
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    lVar1 = *(int64_t *)(this_ptr + 0x10);
    if (lVar1 != 0) {
      local_40 = -1;
      while( true ) {
        lVar4 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_40) break;
        pvVar5 = *(void **)(lVar1 + 0x10);
        plVar2 = *(int64_t **)((int64_t)pvVar5 + lVar4 * 8 + 8);
        iVar3 = (**(code **)(*plVar2 + 0x370))();
        (**(code **)(*plVar2 + 0x378))();
        _memcpy(pvVar5,(void *)(int64_t)iVar3,param_3);
      }
      FUN_00b671d0();
    }
    plVar2 = *(int64_t **)(this_ptr + 0x18);
    if (plVar2 != local_58) {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *(int64_t **)(this_ptr + 0x18) = local_58;
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

