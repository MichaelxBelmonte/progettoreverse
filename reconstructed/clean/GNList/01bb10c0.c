// Function: FUN_01bb10c0
// Address: 01bb10c0
// Size: 642 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01bb10c0(float param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t lVar3;
  void* in_ECX;
  uint64_t uVar4;
  uint64_t arg1;
  int64_t *plVar5;
  float fVar6;
  int64_t local_50;
  char local_48;
  int64_t *local_38;
  char local_30;
  
  if ((param_1 == g_02391078) && (!NAN(param_1) && !NAN(g_02391078))) {
    uVar4 = 0;
    goto LAB_01bb1329;
  }
  pvVar1 = _pthread_getspecific(in_ECX);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01bb1164;
    }
  }
  else if (local_38 != (int64_t *)0x0) {
LAB_01bb1164:
    pvVar1 = _pthread_getspecific(in_ECX);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 == (int64_t *)0x0) {
LAB_01bb131f:
      uVar4 = 0;
    }
    else {
      pvVar1 = _pthread_getspecific(in_ECX);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      pvVar1 = _pthread_getspecific(in_ECX);
      lVar3 = local_50;
      if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
        lVar3 = *(int64_t *)(local_50 + 0x20 + (uint64_t)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
      FUN_01507e40();
      if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      uVar4 = CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
      if (local_38 != (int64_t *)0x0) {
        pvVar1 = _pthread_getspecific(in_ECX);
        plVar5 = local_38;
        if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
          plVar5 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        fVar6 = (float)(**(code **)(*plVar5 + 0x390))();
        if (fVar6 <= param_1) {
          pvVar1 = _pthread_getspecific(in_ECX);
          if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
            local_38 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
          fVar6 = (float)(**(code **)(*local_38 + 0x398))();
          if (param_1 <= fVar6) {
            FUN_00d50b20();
            goto LAB_01bb1321;
          }
        }
        FUN_00d50b20();
        goto LAB_01bb131f;
      }
    }
LAB_01bb1321:
    FUN_00d50b20();
    goto LAB_01bb1329;
  }
  uVar4 = CONCAT71((int7)((uint64_t)arg1 >> 8),1);
LAB_01bb1329:
  return uVar4 & 0xffffffff;
}

