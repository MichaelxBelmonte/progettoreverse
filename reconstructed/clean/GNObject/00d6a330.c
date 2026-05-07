// Function: FUN_00d6a330
// Address: 00d6a330
// Size: 2323 bytes
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


int64_t * FUN_00d6a330(void)

{
  char cVar1;
  code *pcVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  void*puVar6;
  int iVar7;
  uint64_t uVar8;
  int64_t lVar9;
  uint64_t uVar10;
  void*puVar11;
  uint64_t uVar12;
  int iVar13;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar14;
  int64_t local_118;
  int64_t local_110;
  int64_t local_108;
  int64_t local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  void*local_e8;
  char local_e0;
  int64_t local_d8;
  uint64_t local_d0;
  int local_c8;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  void*local_80;
  char local_78;
  int64_t local_70;
  int64_t local_68;
  char local_60;
  void*local_58;
  uint local_4c;
  int64_t local_48;
  byte local_31;
  
  if (*arg1 == 0) {
    *(void*)(this_ptr + 1) = 0;
    cVar1 = (char)arg1[1];
    lVar14 = 0;
joined_r0x00d6ab28:
    if (cVar1 == '\0') {
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar14;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      *this_ptr = lVar14;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(arg1 + 1) = 0;
    }
    return this_ptr;
  }
  iVar7 = FUN_00d8c7a0();
  lVar14 = g_02773310;
  if (iVar7 == 0) {
    lVar14 = *arg1;
    *(void*)(this_ptr + 1) = 0;
    cVar1 = (char)arg1[1];
    goto joined_r0x00d6ab28;
  }
  if (g_02773310 != 0) {
    FUN_00d50b00();
  }
  lVar9 = g_02773318;
  if (g_02773318 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_02773300;
  if (g_02773300 != 0) {
    FUN_00d50b00();
  }
  lVar5 = g_02773308;
  if (g_02773308 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_027732f8;
  if (g_027732f8 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar9;
  local_110 = lVar4;
  local_108 = lVar5;
  local_100 = lVar3;
  FUN_007f7a00(&local_110,&local_118,&local_108,&local_100);
  FUN_000b6830();
  local_70 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  local_e8 = &g_02511780;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  FUN_007f76c0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  lVar14 = g_027845f0;
  if (g_027845f0 != 0) {
    FUN_00d50b00();
  }
  lVar9 = g_0277e578;
  if (g_0277e578 != 0) {
    FUN_00d50b00();
  }
  lVar4 = g_0277e580;
  if (g_0277e580 != 0) {
    FUN_00d50b00();
  }
  lVar5 = g_0277e588;
  if (g_0277e588 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_0277e590;
  if (g_0277e590 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar9;
  local_110 = lVar4;
  local_108 = lVar5;
  local_100 = lVar3;
  FUN_007f7a00(&local_110,&local_118,&local_108,&local_100);
  FUN_000b6830();
  local_48 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  local_e8 = &g_02511780;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  FUN_007f76c0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  pcVar2 = g_025795c0;
  local_58 = (void*)0x0;
  local_f0 = 0;
  while( true ) {
    FUN_00d8c7a0();
    uVar8 = FUN_00e7b4e0();
    iVar7 = FUN_00d8c7a0();
    if ((iVar7 < 1) || (local_70 == 0)) break;
    local_f8 = uVar8 >> 0x20;
    local_e0 = '\0';
    local_e8 = (void*)0x0;
    local_d8 = local_70;
    local_d0 = 0xffffffff;
    local_c8 = 0;
    local_d0._4_4_ = 0;
    lVar14 = 0;
    local_4c = 0;
    while( true ) {
      iVar7 = (int)uVar8;
      if (local_d0._4_4_ != 0) {
        if (local_d0._4_4_ < 1) {
          iVar13 = -local_d0._4_4_;
        }
        else {
          iVar13 = (int)local_d0 - local_d0._4_4_;
          local_d0 = CONCAT44(local_d0._4_4_,iVar13);
          FUN_00d23690();
          local_c8 = local_c8 + local_d0._4_4_;
          iVar13 = 0;
        }
        local_d0 = CONCAT44(iVar13,(int)local_d0);
      }
      lVar9 = (int64_t)(int)local_d0;
      iVar13 = (int)local_d0 + 1;
      local_d0 = CONCAT44(local_d0._4_4_,iVar13);
      if (*(int *)(local_d8 + 0xc) <= iVar13) break;
      local_e8 = *(void**)(*(int64_t *)(local_d8 + 0x10) + 8 + lVar9 * 8);
      uVar10 = FUN_00d90650();
      iVar13 = (int)uVar10;
      if ((iVar13 != -1) && ((lVar14 == 0 || (iVar13 < iVar7)))) {
        lVar9 = *(int64_t *)
                 (*(int64_t *)(local_48 + 0x10) +
                 ((int64_t)local_c8 + (int64_t)(int)local_d0) * 8);
        if (lVar14 == lVar9) {
          local_31 = (byte)local_4c;
          if (((byte)local_4c == 0) && (lVar14 != 0)) {
            local_4c = 0;
            FUN_00d50b00();
            lVar9 = lVar14;
            goto LAB_00d6a810;
          }
        }
        else {
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          if (((byte)local_4c != '\0') && (lVar14 != 0)) {
            FUN_00d50b20();
          }
LAB_00d6a810:
          local_31 = 1;
          lVar14 = lVar9;
        }
        if (iVar13 == 0) {
          local_f8 = uVar10 >> 0x20;
          iVar7 = 0;
          goto LAB_00d6a866;
        }
        local_f8 = uVar10 >> 0x20;
        local_4c = (uint)local_31;
        uVar8 = uVar10 & 0xffffffff;
      }
    }
    local_31 = (byte)local_4c;
LAB_00d6a866:
    FUN_00018280();
    local_88 = lVar14;
    if (lVar14 == 0) break;
    if (local_58 == (void*)0x0) {
      puVar11 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &g_025795a8;
      uVar12 = (*pcVar2)();
      local_f0 = CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
      local_58 = puVar11;
    }
    if (0 < iVar7) {
      FUN_00d97ce0();
      puVar11 = local_e8;
      local_78 = 0;
      if (local_e0 == '\0') {
        if (local_e8 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_e0 = '\0';
      }
      local_78 = '\x01';
      local_80 = puVar11;
      FUN_00d8dbf0();
      if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d8dbf0();
    FUN_00d8f140();
    puVar6 = local_e8;
    puVar11 = (void*)*arg1;
    if (puVar11 == local_e8) {
      if (((char)arg1[1] != '\0') || (local_e8 == (void*)0x0)) goto LAB_00d6aa48;
      if (local_e0 == '\0') {
        FUN_00d50b00();
        goto LAB_00d6aa40;
      }
LAB_00d6aa04:
      *(void*)(arg1 + 1) = 1;
    }
    else {
      lVar14 = arg1[1];
      if (local_e0 != '\0') {
        *arg1 = (int64_t)local_e8;
        if (((char)lVar14 != '\0') && (puVar11 != (void*)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00d6aa04;
      }
      if (local_e8 != (void*)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)puVar6;
      if (((char)lVar14 != '\0') && (puVar11 != (void*)0x0)) {
        FUN_00d50b20();
      }
LAB_00d6aa40:
      *(void*)(arg1 + 1) = 1;
LAB_00d6aa48:
      if ((local_e0 != '\0') && (local_e8 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    if (local_31 != 0) {
      FUN_00d50b20();
    }
  }
  lVar9 = local_48;
  lVar14 = local_70;
  if (local_58 == (void*)0x0) {
    *(void*)(this_ptr + 1) = 0;
    puVar11 = (void*)*arg1;
    if ((char)arg1[1] != '\0') {
      *this_ptr = (int64_t)puVar11;
      *(void*)(this_ptr + 1) = 1;
      *(void*)(arg1 + 1) = 0;
      goto joined_r0x00d6ac05;
    }
    if (puVar11 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    iVar7 = FUN_00d8c7a0();
    if (0 < iVar7) {
      FUN_00d8dbf0();
    }
    FUN_00d8c7d0();
    puVar11 = local_58;
    *(void*)(this_ptr + 1) = 0;
    if ((char)local_f0 != '\0') {
      *this_ptr = (int64_t)local_58;
      *(void*)(this_ptr + 1) = 1;
      goto joined_r0x00d6ac05;
    }
    FUN_00d50b00();
  }
  *this_ptr = (int64_t)puVar11;
  *(void*)(this_ptr + 1) = 1;
joined_r0x00d6ac05:
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar14 == 0) {
    return this_ptr;
  }
  FUN_00d50b20();
  return this_ptr;
}

