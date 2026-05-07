// Function: FUN_01505340
// Address: 01505340
// Size: 583 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_01505340(int64_t *param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int unaff_ESI;
  void*this_ptr;
  int64_t local_48;
  char local_40;
  
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_000be3f0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific((void*)param_1);
  plVar4 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = plVar1;
    plVar4 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_016c0a70();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  if (plVar4[0xc] != local_48) {
    FUN_00d64850();
    lVar3 = plVar4[0xc];
    if (lVar3 != local_48) {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      plVar4[0xc] = local_48;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_0150c9f0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific((void*)param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = plVar1;
  }
  FUN_01505730();
  if (0 < unaff_ESI) {
    do {
      plVar4 = (int64_t *)FUN_00e8fc40();
      FUN_0013dd30();
      (**(code **)(*plVar4 + 0x18))();
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150f020();
      FUN_00d50b20();
      unaff_ESI = unaff_ESI + -1;
    } while (unaff_ESI != 0);
  }
  *this_ptr = plVar1;
  *(void*)(this_ptr + 1) = 1;
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

