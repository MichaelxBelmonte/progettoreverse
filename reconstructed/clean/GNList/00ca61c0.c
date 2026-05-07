// Function: FUN_00ca61c0
// Address: 00ca61c0
// Size: 666 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int64_t * FUN_00ca61c0(uint64_t param_1)

{
  short sVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  uint32_t uVar6;
  int64_t lVar7;
  void*puVar8;
  void*puVar9;
  void*puVar10;
  int64_t lVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar12;
  short *psVar13;
  short *local_58;
  int64_t local_48;
  char local_40;
  void*local_38;
  
  lVar7 = FUN_00d8d520();
  iVar4 = FUN_00d8c7a0();
  if ((*arg1 == 0) || (iVar5 = FUN_00d8c7a0(), iVar5 == 0)) {
    FUN_00d8ede0();
  }
  else {
    FUN_00c8e690();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    psVar13 = *(short **)(local_48 + 0x10);
    local_58 = psVar13;
    if (0 < iVar4) {
      lVar12 = 0;
      puVar10 = (void*)0x0;
      local_38 = (void*)0x0;
      puVar9 = (void*)0x0;
      iVar5 = iVar4;
      do {
        lVar3 = g_02773338;
        lVar2 = g_02773330;
        lVar11 = g_02773328;
        sVar1 = *(short *)(lVar7 + lVar12 * 2);
        if (sVar1 == 10) {
          puVar8 = local_38;
          if (local_38 == (void*)0x0) {
            if (g_02773338 != 0) {
              FUN_00d50b00();
            }
            local_38 = (void*)FUN_00d8d520();
            puVar8 = local_38;
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
LAB_00ca6367:
          uVar6 = *puVar8;
LAB_00ca63ac:
          *(void*)psVar13 = uVar6;
          psVar13 = psVar13 + 2;
        }
        else {
          if (sVar1 == 0x22) {
            if (puVar9 == (void*)0x0) {
              if (g_02773330 != 0) {
                FUN_00d50b00();
              }
              puVar9 = (void*)FUN_00d8d520();
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
            }
            uVar6 = *puVar9;
            goto LAB_00ca63ac;
          }
          if (sVar1 == 0x5c) {
            puVar8 = puVar10;
            if (puVar10 == (void*)0x0) {
              if (g_02773328 != 0) {
                FUN_00d50b00();
              }
              puVar8 = (void*)FUN_00d8d520();
              puVar10 = puVar8;
              if (lVar11 != 0) {
                FUN_00d50b20();
              }
            }
            goto LAB_00ca6367;
          }
          *psVar13 = sVar1;
          psVar13 = psVar13 + 1;
        }
        lVar11 = (int64_t)psVar13 - (int64_t)local_58 >> 1;
        if (iVar5 <= lVar11) {
          FUN_00c8e340(param_1,0);
          iVar5 = iVar5 * 2;
          local_58 = *(short **)(local_48 + 0x10);
          psVar13 = local_58 + lVar11;
        }
        lVar12 = lVar12 + 1;
      } while (iVar4 != (int)lVar12);
    }
    FUN_00d920f0(param_1,(uint64_t)((int64_t)psVar13 - (int64_t)local_58) >> 1 & 0xffffffff);
    if (local_48 != 0) {
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
      *(void*)(this_ptr + 1) = 0;
    }
    *this_ptr = local_48;
    *(void*)(this_ptr + 1) = 1;
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}

