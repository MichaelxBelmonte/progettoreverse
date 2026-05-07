// Function: FUN_007dd2b0
// Address: 007dd2b0
// Size: 781 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_007dd2b0(void* param_1)

{
  uint64_t uVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  int64_t local_50;
  char local_48;
  
  lVar6 = *(int64_t *)(this_ptr + 0x38);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = *(int64_t *)(lVar6 + 0x38);
  }
  else {
    lVar3 = *(int64_t *)
             (*(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8) + 0x38);
  }
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    if (0 < *(int *)(lVar3 + 0xc)) {
      lVar6 = 0;
      do {
        lVar7 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar6 * 8);
        pvVar2 = _pthread_getspecific(param_1);
        lVar5 = lVar7;
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        uVar1 = *(void*)(lVar5 + 0x38);
        pvVar2 = _pthread_getspecific(param_1);
        lVar5 = lVar7;
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        FUN_00361f80(uVar1,*(void*)(lVar5 + 0x40));
        if ((local_48 == '\0') && (local_50 != 0)) {
          FUN_00d50b00();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(param_1);
        lVar5 = lVar7;
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        FUN_003621a0(*(void*)(lVar5 + 0x48));
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if ((pvVar2 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        FUN_00362200(*(void*)(lVar7 + 0x50));
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0054ddf0();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(lVar3 + 0xc));
    }
    FUN_007e1c20();
    FUN_00d50b20();
  }
  return;
}

