// Function: FUN_00d605b0
// Address: 00d605b0
// Size: 2095 bytes
// Class: GNObject
// String references:
//   "Cannot get stored value for key %@ directly"
//   "Cannot get value for property %@ directly. Ivar not registered."
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


int64_t * FUN_00d605b0(uint64_t param_1,int64_t *param_2)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  int extraout_var;
  int extraout_var_00;
  int64_t lVar5;
  uint uVar6;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar7;
  int64_t local_90;
  char local_88;
  int64_t local_60;
  char local_58;
  void*local_50;
  uint32_t local_48 [2];
  int64_t local_40;
  char local_38;
  
  lVar5 = g_0277ddb0;
  if (*(int *)((int64_t)param_2 + 0x24) == 0) {
    if (g_0277ddb0 != 0) {
      FUN_00e31530(param_1,0);
    }
    uVar7 = FUN_00d74120();
    lVar2 = g_0277ddc8;
    if (local_90 == 0) {
      if (g_0277ddc8 != 0) {
        uVar7 = FUN_00e31530(uVar7,0);
      }
      local_60 = lVar2;
      local_58 = '\x01';
    }
    else {
      uVar7 = FUN_00d74120();
    }
    local_48[0] = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (local_60 != 0) {
      uVar7 = FUN_00e31530(uVar7,0);
    }
    local_38 = '\x01';
    local_40 = local_60;
    FUN_00cc7b40(uVar7,&local_50);
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  cVar3 = (**(code **)(*param_2 + 0x368))();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_2 + 0x370))();
    uVar7 = extraout_XMM0_Qa_00;
    if (cVar3 != '\0') {
      FUN_00d77bd0();
      if (extraout_var < 2) {
        uVar7 = FUN_00d77bd0();
        if (extraout_var_00 != 1) goto switchD_00d6060d_caseD_2b;
        if ((param_2[0xe] != 0) && (*(char *)(param_2[0xe] + 0x18) < '\0')) {
          cVar3 = FUN_00d77e30();
          iVar1 = *(int *)((int64_t)param_2 + 0x24);
          if (cVar3 == '\0') {
            *(void*)(this_ptr + 1) = 0;
            plVar4 = *(int64_t **)(arg1 + iVar1);
            if (plVar4 != (int64_t *)0x0) {
              lVar5 = (**(code **)(*plVar4 + 0x10))();
              goto LAB_00d606b5;
            }
          }
          else {
            *(void*)(this_ptr + 1) = 0;
            plVar4 = *(int64_t **)(arg1 + iVar1);
            if (plVar4 != (int64_t *)0x0) {
              lVar5 = (**(code **)(*plVar4 + 0x10))();
              goto LAB_00d606b5;
            }
          }
          lVar5 = 0;
          goto LAB_00d606b5;
        }
        FUN_00d77e30();
      }
      lVar5 = *(int64_t *)(*(int *)((int64_t)param_2 + 0x24) + arg1);
LAB_00d606b5:
      *this_ptr = lVar5;
      *(void*)(this_ptr + 1) = 0;
      return this_ptr;
    }
switchD_00d6060d_caseD_2b:
    lVar5 = g_0277ddb0;
    if (g_0277ddb0 != 0) {
      FUN_00e31530(uVar7,0);
    }
    uVar7 = FUN_00d74120();
    local_48[0] = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    if (local_60 != 0) {
      uVar7 = FUN_00e31530(uVar7,0);
    }
    local_40 = local_60;
    local_38 = '\x01';
    FUN_00cc7b40(uVar7,&local_50);
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
LAB_00d607d7:
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    uVar6 = (int)*(char *)(param_2[0xc] + 0x19) - 0x2a;
    uVar7 = extraout_XMM0_Qa;
    if (0x49 < uVar6) goto switchD_00d6060d_caseD_2b;
    plVar4 = (int64_t *)(*(int *)((int64_t)param_2 + 0x24) + arg1);
    switch((int)*(char *)(param_2[0xc] + 0x19)) {
    case 0x2a:
      if (*plVar4 != 0) {
        FUN_00d91a70((int64_t)&switchD_00d6060d::switchdataD_00d61008 +
                     (int64_t)(int)(&switchD_00d6060d::switchdataD_00d61008)[uVar6],1);
        plVar4 = this_ptr + 1;
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = (int64_t)local_50;
        if ((char)local_48[0] != '\0') {
          *(void*)plVar4 = 1;
          plVar4 = (int64_t *)local_48;
        }
        *(void*)plVar4 = 0;
        if ((char)local_48[0] == '\0') {
          return this_ptr;
        }
        if (local_50 == (void*)0x0) {
          return this_ptr;
        }
        FUN_00d50b20();
        return this_ptr;
      }
      goto LAB_00d607d7;
    default:
      goto switchD_00d6060d_caseD_2b;
    case 0x40:
      lVar5 = *plVar4;
      goto LAB_00d606b5;
    case 0x43:
      FUN_00dd6690();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x45:
      FUN_00dd6530(*plVar4,plVar4[1]);
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x49:
      FUN_00d46530();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x50:
      FUN_00dd65e0(*plVar4);
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x52:
      FUN_00dd6480(*plVar4,plVar4[1]);
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x53:
      FUN_00dd6740(*plVar4);
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x55:
      FUN_00dd6950();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x5e:
      FUN_00dd6a00();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x62:
      FUN_00d46300();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 99:
      FUN_00dd68a0();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 100:
      FUN_00d470c0(*plVar4);
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x65:
    case 0x69:
      FUN_00d46aa0();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x66:
      FUN_00d46dc0((int)*plVar4);
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x6c:
      FUN_00d468f0();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x71:
      FUN_00dd67f0();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x73:
      FUN_00d46530();
      plVar4 = this_ptr + 1;
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = (int64_t)local_50;
      if ((char)local_48[0] != '\0') {
        *(void*)plVar4 = 1;
        plVar4 = (int64_t *)local_48;
      }
      *(void*)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return this_ptr;
}

