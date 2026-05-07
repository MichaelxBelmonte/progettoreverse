// Function: FUN_0128de60
// Address: 0128de60
// Size: 518 bytes
// Class: MUAudioSourceAttackItem

void FUN_0128de60(void* param_1)

{
  void *pvVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t this_ptr;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  uint64_t local_38;
  int64_t local_30;
  char local_28;
  
  if (*(int64_t *)(this_ptr + 0xd8) != 0) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = FUN_013dd130();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0128df77;
    }
  }
  local_38 = *(void*)(this_ptr + 0xf0);
LAB_0128df77:
  plVar2 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar2 + 0x18))();
  pvVar1 = _pthread_getspecific(param_1);
  plVar4 = plVar2;
  if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar4 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar4 + 0x410))(0,0);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar2 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar2 + 0x410))(*(void*)(this_ptr + 0xf0),local_38);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_01265f70();
  FUN_00d50b20();
  return;
}

