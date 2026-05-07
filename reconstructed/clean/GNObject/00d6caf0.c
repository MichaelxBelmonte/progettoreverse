// Function: FUN_00d6caf0
// Address: 00d6caf0
// Size: 1350 bytes
// Class: GNObject
// === GNObject properties ===
//   GNInt           _state
//   bool            _coding
//   bool            _isSecureSaveEnabled
//   bool            _encodesGlobalIDsOfReferredObjects
//   bool            _reflectsOwnerTree
//   GNInt           _usedCompressorIndex
//   bool            _gatherOnly
//   bool            _decoding
//   bool            _emtpySelectionAllowed
//   bool            _autoselectNewObjects
//   bool            _autoselectObjects
//   bool            _autofetchEnabled
//   bool            _fetchesOnDemand
//   bool            _selectionDidUpdateAssociations
//   bool            _isAddingObjectsEnabled
//   bool            _isRemovingObjectsEnabled
//   bool            _revertsObjectsByKeepingGlobalIDs
//   bool            _revertsObjectsByRefetching
//   GNInt           _lastSelectedRow
//   GNInt           _changeKindMask
//   GNInt           _currentBatchIndex
//   GNInt           _numberOfObjectsPerBatch
//   bool            _awakesObjectsAfterDecodig
//   GNInt           _predictedDecodedValuesIndex


void* FUN_00d6caf0(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  int64_t lVar6;
  short sVar7;
  int iVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  void*puVar11;
  int64_t arg1;
  void*this_ptr;
  void*puVar12;
  int iVar13;
  short sVar14;
  bool bVar15;
  uint16_t local_88;
  undefined6 uStack_86;
  char local_80;
  void*local_40;
  
  plVar9 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar9 + 0x18))();
  lVar1 = *(int64_t *)(arg1 + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
    puVar12 = *(void**)(arg1 + 0x18);
    if (puVar12 != (void*)0x0) {
      FUN_00d50b00();
      bVar2 = false;
      goto LAB_00d6cb5d;
    }
  }
  bVar2 = true;
  puVar12 = (void*)0x0;
LAB_00d6cb5d:
  bVar3 = true;
  FUN_00d6be80();
  if (!bVar2) {
    FUN_00d50b20();
  }
  if (local_80 == '\0') {
    if (CONCAT62(uStack_86,local_88) != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  uVar10 = FUN_00d90650();
  if (CONCAT62(uStack_86,local_88) != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (CONCAT62(uStack_86,local_88) != 0)) {
    FUN_00d50b20();
  }
  pcVar5 = g_025795c0;
  if ((int)uVar10 < 1) {
    *this_ptr = plVar9;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    iVar13 = (int)((uint64_t)uVar10 >> 0x20) + (int)uVar10;
    bVar4 = false;
    local_40 = (void*)0x0;
    puVar11 = (void*)0x0;
    sVar14 = 0;
    bVar2 = false;
    while (iVar8 = FUN_00d8c7a0(), iVar13 < iVar8) {
      sVar7 = FUN_00d8cbc0();
      if (local_40 == (void*)0x0) {
        if (puVar11 == (void*)0x0) {
          puVar11 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar11 = &g_025795a8;
          (*pcVar5)();
          bVar2 = true;
        }
        if (sVar7 != 0x3d) {
          FUN_00d8ea20();
          local_40 = (void*)0x0;
          goto LAB_00d6cdaa;
        }
        FUN_00d8c7d0();
        lVar6 = g_027259e0;
        if (g_027259e0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d97f20();
        if (puVar12 == puVar11) {
          bVar15 = bVar2;
          if ((!bVar2) && (puVar12 != (void*)0x0)) {
            if (!bVar3) {
              FUN_00d50b00();
              goto LAB_00d6ce5c;
            }
            goto LAB_00d6ce8a;
          }
joined_r0x00d6ce83:
          if ((bVar3) && (puVar12 != (void*)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          puVar11 = puVar12;
          if (bVar3) {
            if (bVar2) {
              FUN_00d50b20();
            }
LAB_00d6ce8a:
            bVar3 = false;
            bVar15 = true;
          }
          else {
            if (puVar12 != (void*)0x0) {
              FUN_00d50b00();
            }
            bVar15 = true;
            if (bVar2) {
              FUN_00d50b20();
LAB_00d6ce5c:
              bVar15 = true;
              goto joined_r0x00d6ce83;
            }
          }
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        local_40 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *local_40 = &g_025795a8;
        (*pcVar5)();
        bVar4 = true;
        sVar14 = 0;
        iVar13 = iVar13 + 1;
        bVar2 = bVar15;
      }
      else if ((sVar7 == 0x20) && (sVar14 == 0)) {
        sVar14 = 0;
        iVar13 = iVar13 + 1;
      }
      else {
        bVar15 = sVar14 == 0;
        if ((bVar15) && (sVar7 == 0x27)) {
          sVar14 = 0x27;
          iVar13 = iVar13 + 1;
        }
        else if (bVar15 && sVar7 == 0x22) {
          sVar14 = 0x22;
          iVar13 = iVar13 + 1;
        }
        else if (sVar14 == sVar7) {
          FUN_00d8c7d0();
          FUN_00d6a330();
          if (bVar3) {
            bVar3 = false;
          }
          else if (puVar12 != (void*)0x0) {
            FUN_00d50b00();
          }
          FUN_00cd2930();
          if (puVar12 != (void*)0x0) {
            FUN_00d50b20();
          }
          if (puVar11 != (void*)0x0) {
            if (bVar2) {
              FUN_00d50b20();
            }
            bVar2 = false;
          }
          if (bVar4) {
            FUN_00d50b20();
          }
          bVar4 = false;
          local_40 = (void*)0x0;
          puVar11 = (void*)0x0;
          iVar13 = iVar13 + 1;
        }
        else {
          FUN_00d8ea20(bVar15,1);
LAB_00d6cdaa:
          iVar13 = iVar13 + 1;
        }
      }
    }
    *this_ptr = plVar9;
    *(void*)(this_ptr + 1) = 1;
    if ((bVar2) && (puVar11 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

