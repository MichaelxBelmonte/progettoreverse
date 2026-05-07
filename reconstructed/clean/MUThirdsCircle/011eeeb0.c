// Function: FUN_011eeeb0
// Address: 011eeeb0
// Size: 706 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


uint64_t FUN_011eeeb0(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t this_ptr;
  bool bVar4;
  int64_t *local_60;
  char local_58;
  uint64_t local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  local_50 = 0;
  if ((*(int64_t *)(this_ptr + 0x48) != 0) && (*(int64_t *)(this_ptr + 0x50) != 0)) {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264180();
    if (local_38 == (int64_t *)0x0) {
      bVar4 = false;
    }
    else {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264180();
      pvVar1 = _pthread_getspecific(param_1);
      plVar3 = local_60;
      if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
        plVar3 = (int64_t *)local_60[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar3 + 0x378))();
      bVar4 = local_48 != (int64_t *)0x0;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar4) {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264180();
      pvVar1 = _pthread_getspecific(param_1);
      plVar3 = local_48;
      if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
        plVar3 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar3 + 0x378))();
      pvVar1 = _pthread_getspecific(param_1);
      plVar3 = local_38;
      if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
        plVar3 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dd200();
      local_50 = (**(code **)(*plVar3 + 0x380))();
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = FUN_013dd200();
    }
  }
  return local_50;
}

