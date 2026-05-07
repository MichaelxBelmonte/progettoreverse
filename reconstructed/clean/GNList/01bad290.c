// Function: FUN_01bad290
// Address: 01bad290
// Size: 1073 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int64_t * FUN_01bad290(void *param_1,int64_t *param_2,size_t param_3)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint32_t uVar6;
  void *pvVar7;
  void* pVar8;
  int64_t *this_ptr;
  int64_t lVar9;
  int64_t local_80;
  char local_78;
  int local_68;
  int64_t local_48;
  char local_40;
  
  lVar1 = *param_2;
  lVar4 = param_2[1];
  if (((char)lVar4 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c8e690();
  if ((local_78 == '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_80 + 0x18)) {
    _memset_pattern16(param_1,(void *)((uint64_t)((*(uint *)(local_80 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  local_68 = -1;
  bVar2 = false;
  lVar9 = 0;
  do {
    while( true ) {
      local_68 = local_68 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_68) {
        FUN_001159b0();
        *this_ptr = local_80;
        *(void*)(this_ptr + 1) = 1;
        if ((char)lVar4 != '\0') {
          FUN_00d50b20();
        }
        if ((bVar2) && (lVar9 != 0)) {
          FUN_00d50b20();
        }
        return this_ptr;
      }
      pVar8 = (void*)*(void*)(lVar1 + 0x10);
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      if (local_48 == lVar9) break;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        lVar5 = local_48;
        if ((bVar2) && (lVar9 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01bad4b7;
      }
      lVar5 = local_48;
      if ((bVar2) && (lVar9 != 0)) {
        FUN_00d50b20();
      }
joined_r0x01bad46a:
      lVar9 = lVar5;
      bVar2 = true;
      if (lVar9 != 0) goto LAB_01bad4d7;
LAB_01bad380:
      lVar9 = 0;
    }
    lVar5 = lVar9;
    bVar3 = bVar2;
    if ((!bVar2) && (local_48 != 0)) {
      if (local_40 != '\0') goto joined_r0x01bad46a;
      FUN_00d50b00();
      bVar3 = true;
    }
LAB_01bad4b7:
    lVar9 = lVar5;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    bVar2 = bVar3;
    if (lVar9 == 0) goto LAB_01bad380;
LAB_01bad4d7:
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152ebe0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_019a54a0();
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      if (local_48 == 0) {
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        pvVar7 = _pthread_getspecific(pVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar6 = FUN_01507f00();
        *(void*)(*(int64_t *)(local_80 + 0x10) + (int64_t)local_68 * 4) = uVar6;
      }
      else {
        uVar6 = FUN_00d45870();
        *(void*)(*(int64_t *)(local_80 + 0x10) + (int64_t)local_68 * 4) = uVar6;
        FUN_00d50b20();
      }
    }
  } while( true );
}

