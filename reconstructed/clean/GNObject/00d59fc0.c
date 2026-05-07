// Function: FUN_00d59fc0
// Address: 00d59fc0
// Size: 1644 bytes
// Class: GNObject
// String references:
//   "GNObject"
//   "GNString"
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


uint64_t FUN_00d59fc0(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar6;
  int64_t *plVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  uint32_t extraout_XMM0_Da_08;
  uint32_t extraout_XMM0_Da_09;
  uint32_t uVar8;
  uint32_t extraout_XMM0_Da_10;
  uint32_t extraout_XMM0_Da_11;
  uint32_t extraout_XMM0_Da_12;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int local_54;
  int64_t *local_48;
  char local_40;
  
  if ((int64_t *)*param_1 == (int64_t *)0x0) {
    return 0;
  }
  local_d8 = *param_2;
  local_d0 = '\0';
  (**(code **)(*(int64_t *)*param_1 + 0x88))(param_1,&local_d8);
  local_88 = local_48;
  uVar8 = extraout_XMM0_Da;
  if (local_40 == '\0') {
    if (local_48 == (int64_t *)0x0) {
      local_88 = (int64_t *)0x0;
    }
    else {
      FUN_00e31530(extraout_XMM0_Da,0);
      uVar8 = extraout_XMM0_Da_03;
    }
  }
  else {
    local_40 = '\0';
  }
  plVar7 = local_88;
  local_80 = '\x01';
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
    uVar8 = extraout_XMM0_Da_00;
  }
  plVar6 = (int64_t *)*arg1;
  local_54 = 1;
  if (plVar6 == plVar7) goto LAB_00d5a4a8;
  if (plVar6 == (int64_t *)0x0) {
    plVar6 = (int64_t *)0x0;
    if (this_ptr == (int64_t *)0x0) goto LAB_00d5a10c;
  }
  else {
    if (plVar7 != (int64_t *)0x0) {
      local_c0 = '\0';
      local_c8 = plVar7;
      cVar3 = (**(code **)(*plVar6 + 0x50))();
      uVar8 = extraout_XMM0_Da_01;
      if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
        uVar8 = extraout_XMM0_Da_02;
      }
      if (cVar3 != '\0') goto LAB_00d5a4a8;
      plVar6 = (int64_t *)*arg1;
    }
    if (plVar6 == this_ptr) {
LAB_00d5a10c:
      if ((int64_t *)*param_1 == plVar7) goto LAB_00d5a4a8;
    }
  }
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x148))();
    if (local_48 == (int64_t *)0x0) {
      cVar3 = '\0';
      uVar8 = extraout_XMM0_Da_04;
    }
    else {
      (**(code **)(*plVar7 + 0x148))();
      local_b8 = *arg1;
      local_b0 = '\0';
      cVar3 = (**(code **)(*local_78 + 0x50))();
      uVar8 = extraout_XMM0_Da_05;
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
        uVar8 = extraout_XMM0_Da_06;
      }
      if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
        uVar8 = extraout_XMM0_Da_07;
      }
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
      uVar8 = extraout_XMM0_Da_08;
    }
    if (cVar3 != '\0') goto LAB_00d5a4a8;
    plVar6 = (int64_t *)*arg1;
  }
  if ((g_026fd0c0 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_12, iVar5 != 0)) {
    if ((g_028a7d98 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_028a7cd0 = "GNObject";
      g_028a7cd8 = 0x10;
      g_028a7ce0 = FUN_00d4ff10;
      g_028a7ce8 = 0;
      ram_00000000028a7cf0 = 0;
      g_028a7cf8 = 0;
      ram_00000000028a7d00 = 0;
      g_028a7d08 = 0;
      ram_00000000028a7d10 = 0;
      g_028a7d18 = 0;
      ram_00000000028a7d20 = 0;
      g_028a7d28 = 0;
      ram_00000000028a7d30 = 0;
      g_028a7d38 = 0;
      ram_00000000028a7d40 = 0;
      g_028a7d48 = 0;
      ram_00000000028a7d50 = 0;
      g_028a7d58 = 0;
      ram_00000000028a7d60 = 0;
      g_028a7d68 = 0;
      ram_00000000028a7d70 = 0;
      g_028a7d78 = 0;
      ram_00000000028a7d80 = 0;
      g_028a7d84 = 0;
      ram_00000000028a7d88 = 0;
      ram_00000000028a7d8c = 0;
      ___cxa_guard_release();
    }
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    g_026d5e50 = FUN_0005d920;
    g_026d5e58 = &g_028a7cd0;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    uVar8 = ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_00d5a208:
    arg1 = (int64_t *)&g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da_09;
    if (cVar3 == '\0') goto LAB_00d5a208;
  }
  plVar6 = (int64_t *)*arg1;
  lVar2 = arg1[1];
  if (((char)lVar2 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00e31530(uVar8,0);
  }
  plVar7 = local_88;
  uVar8 = FUN_00d68120();
  plVar1 = g_02802688;
  cVar3 = g_02802690;
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da_10;
    plVar1 = g_02802688;
    cVar3 = g_02802690;
    if (cVar4 != '\0') {
      plVar1 = local_88;
      cVar3 = local_80;
    }
  }
  if ((cVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00e31530(uVar8,0);
  }
  local_54 = 0;
  if ((plVar6 != (int64_t *)0x0) && (plVar1 != (int64_t *)0x0)) {
    (**(code **)(*this_ptr + 0x360))();
    FUN_00e86210();
    local_a8 = *param_2;
    local_a0 = '\0';
    FUN_00c837f0(local_a8,&local_a8);
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00e31530(extraout_XMM0_Da_11,0);
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      FUN_00c77cd0();
      cVar4 = FUN_00c7b220();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == 'e') {
        uVar8 = FUN_00c77cd0();
        local_90 = '\0';
        local_98 = plVar1;
        uVar8 = FUN_00c7b3d0(uVar8,&local_98);
        local_60 = 0;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00e31530(uVar8,0);
          }
        }
        else {
          local_40 = '\0';
        }
        local_60 = '\x01';
        local_68 = local_48;
        cVar4 = (**(code **)(*plVar6 + 0x50))();
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          local_54 = 1;
          FUN_00d50b20();
          goto LAB_00d5a484;
        }
      }
      FUN_00d50b20();
    }
  }
LAB_00d5a484:
  if ((cVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)lVar2 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00d5a4a8:
  if ((local_80 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_54 == 0) {
    return 0;
  }
  return 1;
}

