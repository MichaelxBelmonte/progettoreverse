// Function: FUN_018bf220
// Address: 018bf220
// Size: 502 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_018bf220(int64_t param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t lVar6;
  int64_t this_ptr;
  int64_t lVar7;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific((void*)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018c2810();
  FUN_00c8e690();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  ___bzero();
  lVar1 = *(int64_t *)(this_ptr + 0x50);
  if (lVar1 == local_68) {
    FUN_00d50b20();
  }
  else {
    *(int64_t *)(this_ptr + 0x50) = local_68;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x48);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        uVar2 = *(void*)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
        pVar5 = (void*)param_1;
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_018220f0();
        pvVar3 = _pthread_getspecific(pVar5);
        lVar6 = local_40;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar6 = *(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        param_1 = *(int64_t *)(*(int64_t *)(this_ptr + 0x50) + 0x10);
        *(void*)(param_1 + (int64_t)*(int *)(lVar6 + 0x98) * 8) = uVar2;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_01894d60();
  }
  return;
}

