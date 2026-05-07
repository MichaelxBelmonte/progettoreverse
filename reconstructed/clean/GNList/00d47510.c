// Function: FUN_00d47510
// Address: 00d47510
// Size: 1001 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d47510(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  char cVar7;
  uint8_t uVar8;
  int iVar9;
  int iVar10;
  void*arg1;
  int64_t this_ptr;
  float fVar11;
  int64_t local_e0;
  int64_t *local_d8;
  char local_d0;
  
  lVar3 = g_02774da0;
  if (g_02774da0 != 0) {
    FUN_00d50b00();
  }
  iVar9 = FUN_00d90650();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_0277ddb8;
  plVar1 = (int64_t *)*arg1;
  if (iVar9 != -1) {
    iVar10 = FUN_00d8c7a0();
    fVar11 = (float)FUN_00d8d7b0();
    if (iVar10 - iVar9 < 8) {
      *(void*)(this_ptr + 0xc) = 0x66;
      *(float *)(this_ptr + 0x10) = fVar11;
      return;
    }
    *(void*)(this_ptr + 0xc) = 100;
    *(double *)(this_ptr + 0x10) = (double)fVar11;
    return;
  }
  if (g_0277ddb8 != 0) {
    FUN_00d50b00();
  }
  cVar6 = (**(code **)(*plVar1 + 0x50))();
  lVar2 = g_0275e480;
  cVar7 = '\x01';
  if (cVar6 == '\0') {
    plVar1 = (int64_t *)*arg1;
    if (g_0275e480 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar1 + 0x50))();
    lVar4 = g_0277ddc0;
    cVar7 = '\x01';
    if (cVar6 == '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_0277ddc0 != 0) {
        FUN_00d50b00();
      }
      cVar6 = (**(code **)(*plVar1 + 0x50))();
      lVar5 = g_027e3c48;
      cVar7 = '\x01';
      if (cVar6 == '\0') {
        plVar1 = (int64_t *)*arg1;
        if (g_027e3c48 != 0) {
          FUN_00d50b00();
        }
        cVar7 = (**(code **)(*plVar1 + 0x50))();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_0277daf0;
  if (cVar7 != '\0') {
    *(void*)(this_ptr + 0xc) = 0x62;
    *(void*)(this_ptr + 0x10) = 1;
    return;
  }
  plVar1 = (int64_t *)*arg1;
  if (g_0277daf0 != 0) {
    FUN_00d50b00();
  }
  cVar6 = (**(code **)(*plVar1 + 0x50))();
  lVar2 = g_02789050;
  cVar7 = '\x01';
  if (cVar6 == '\0') {
    plVar1 = (int64_t *)*arg1;
    if (g_02789050 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar1 + 0x50))();
    lVar4 = g_0277daf8;
    cVar7 = '\x01';
    if (cVar6 == '\0') {
      plVar1 = (int64_t *)*arg1;
      if (g_0277daf8 != 0) {
        FUN_00d50b00();
      }
      cVar6 = (**(code **)(*plVar1 + 0x50))();
      lVar5 = g_02787960;
      cVar7 = '\x01';
      if (cVar6 == '\0') {
        plVar1 = (int64_t *)*arg1;
        if (g_02787960 != 0) {
          FUN_00d50b00();
        }
        cVar7 = (**(code **)(*plVar1 + 0x50))();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (cVar7 != '\0') {
    *(void*)(this_ptr + 0xc) = 0x62;
    *(void*)(this_ptr + 0x10) = 0;
    return;
  }
  FUN_00ddb860();
  cVar6 = (**(code **)(*local_d8 + 0x3f8))();
  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    local_e0 = 0;
  }
  else if ((int)local_e0 != local_e0) {
    *(int64_t *)(this_ptr + 0x10) = local_e0;
    uVar8 = 0x6c;
    goto LAB_00d478e5;
  }
  *(int *)(this_ptr + 0x10) = (int)local_e0;
  uVar8 = 0x49;
LAB_00d478e5:
  *(void*)(this_ptr + 0xc) = uVar8;
  return;
}

