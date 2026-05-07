// ===================================================================
// GNBinaryKeyValueUnarchiver — Complete reconstructed pseudocode
// 4 functions
// ===================================================================

// Registered properties (4):
//                   _archiveVersion
//                   _awakesObjectsAfterDecoding
//                   _isCancelled
//                   _allObjectsMarker


// ============================================================
// 00e579d0
// ============================================================
// Function: FUN_00e579d0
// Address: 00e579d0
// Size: 1004 bytes
// Class: GNBinaryKeyValueUnarchiver
// String references:
//   "Assertion failed in GNBinaryKeyValueUnarchiver.cpp at line %i: %s."
//   "obj"
//   "result != placeholder"
// === GNBinaryKeyValueUnarchiver properties ===
//                   _archiveVersion
//                   _awakesObjectsAfterDecoding
//                   _isCancelled
//                   _allObjectsMarker


int64_t * FUN_00e579d0(uint64_t param_1,int param_2)

{
  int iVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t *plVar4;
  bool bVar5;
  uint32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int local_5c;
  int64_t *local_48;
  char local_40;
  
  lVar8 = (int64_t)param_2;
  plVar10 = *(int64_t **)(*(int64_t *)(arg1[8] + 0x10) + lVar8 * 8);
  if (g_028a8c38 == plVar10) {
    lVar7 = (int64_t)*(int *)(*(int64_t *)(arg1[0xe] + 0x10) + lVar8 * 4);
    local_5c = param_2;
    if (arg1[0x16] == 0) {
      bVar3 = false;
LAB_00e57bf2:
      plVar4 = g_028a8c48;
      if (*(int64_t *)(*(int64_t *)(arg1[0xc] + 0x10) + lVar7 * 8) == 0) {
        plVar9 = (int64_t *)0x0;
        if (g_028a8c48 != (int64_t *)0x0) {
          FUN_00d50b00();
          bVar3 = true;
          plVar9 = plVar4;
        }
      }
      else {
        FUN_00c811e0();
        lVar8 = g_027815a8;
        if (local_48 == (int64_t *)0x0) {
          if (g_027815a8 != 0) {
            FUN_00d50b00();
          }
          local_90 = lVar8;
          local_88 = '\x01';
          FUN_00cc7b40();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          local_48 = (int64_t *)0x0;
        }
        else {
          if (local_40 == '\0') {
            FUN_00d50b00();
          }
          bVar3 = true;
        }
        (**(code **)(*local_48 + 0x20))();
        plVar9 = local_48;
      }
    }
    else {
      lVar2 = arg1[0x12];
      iVar1 = *(int *)(lVar2 + 0x18);
      FUN_00c8e340(lVar7,1);
      *(int *)(*(int64_t *)(lVar2 + 0x10) + (int64_t)iVar1) = (int)arg1[0x11];
      arg1[0x15] = *(int64_t *)(*(int64_t *)(arg1[0x14] + 0x10) + lVar8 * 8);
      *(int *)(arg1 + 0x11) = param_2;
      lVar8 = *(int64_t *)(*(int64_t *)(arg1[0xb] + 0x10) + lVar7 * 8);
      uVar6 = (**(code **)(*arg1 + 0x598))();
      plVar9 = (int64_t *)arg1[0x16];
      FUN_00d50b00();
      local_98 = '\0';
      local_a0 = lVar8;
      (**(code **)(*plVar9 + 0x18))(&local_a0,&stack0xffffffffffffffa8,uVar6);
      if (local_48 == (int64_t *)0x0) {
        plVar9 = (int64_t *)0x0;
        bVar3 = false;
      }
      else {
        plVar9 = local_48;
        if (local_40 == '\0') {
          FUN_00d50b00();
          bVar3 = true;
        }
        else {
          local_40 = '\0';
          bVar3 = true;
        }
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (arg1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar8 = arg1[0x12];
      iVar1 = *(int *)((int64_t)*(int *)(lVar8 + 0x18) + -4 + *(int64_t *)(lVar8 + 0x10));
      *(int *)(arg1 + 0x11) = iVar1;
      arg1[0x15] = *(int64_t *)(*(int64_t *)(arg1[0x14] + 0x10) + (int64_t)iVar1 * 8);
      if (*(int *)(lVar8 + 0x18) != 0) {
        FUN_00c8e340((int64_t)iVar1,0);
      }
      if (plVar9 == (int64_t *)0x0) goto LAB_00e57bf2;
    }
    local_78 = '\0';
    local_80 = plVar9;
    FUN_00d233f0();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 != plVar9) {
      plVar10 = plVar9;
    }
    bVar5 = bVar3;
    if (plVar10 != g_028a8c38) goto LAB_00e57d8c;
  }
  else {
    bVar3 = false;
    plVar9 = (int64_t *)0x0;
    bVar5 = false;
    if (plVar10 != g_028a8c38) goto LAB_00e57d8c;
  }
  bVar3 = bVar5;
  lVar8 = g_027815a8;
  if (g_027815a8 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar8;
  local_68 = '\x01';
  FUN_00cc7b40();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
LAB_00e57d8c:
  *this_ptr = (int64_t)plVar10;
  *(void*)(this_ptr + 1) = 0;
  if ((bVar3) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 00e59160
// ============================================================
// Function: FUN_00e59160
// Address: 00e59160
// Size: 775 bytes
// Class: GNBinaryKeyValueUnarchiver
// String references:
//   "GNBinaryKeyValueUnarchiver::decodeFloatForKey: range overflow while reading double as float for key...
//   "GNBinaryKeyValueUnarchiver::decodeFloatForKey: range underflow while reading double as float for ke...
//   "GNBinaryKeyValueUnarchiver::decodeFloatForKey: failed for key:%@ of cTypeID:%c"
// === GNBinaryKeyValueUnarchiver properties ===
//                   _archiveVersion
//                   _awakesObjectsAfterDecoding
//                   _isCancelled
//                   _allObjectsMarker


float FUN_00e59160(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *arg1;
  uint64_t extraout_XMM0_Qa;
  double dVar4;
  uint64_t uVar5;
  double local_a0;
  void*local_58;
  uint32_t local_50;
  int64_t local_48;
  char local_40;
  char local_38;
  float local_2c;
  
  cVar3 = FUN_00e58720();
  local_2c = 0.0;
  if (cVar3 != '\0') {
    cVar3 = FUN_00e58390();
    lVar2 = g_02786e30;
    if (cVar3 == 'd') {
      FUN_00dabbc0();
      lVar2 = g_02786e30;
      if (((g_02411188 < local_a0) && (local_a0 < g_023e1698)) ||
         ((local_a0 < g_023e11c8 && (g_0241f388 < local_a0)))) {
        dVar4 = local_a0;
        if (g_02786e30 != 0) {
          dVar4 = (double)FUN_00d50b00();
        }
        lVar1 = *arg1;
        local_50 = 1;
        local_58 = &g_024c5048;
        if (lVar1 != 0) {
          dVar4 = (double)FUN_00d50b00();
        }
        local_40 = '\x01';
        local_48 = lVar1;
        FUN_00cc7b40(dVar4,&local_58);
        local_58 = &g_024c5048;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      else if ((((local_a0 != 0.0) || (NAN(local_a0))) && (local_a0 < g_02411158)) &&
              (g_023e11d0 < local_a0)) {
        dVar4 = local_a0;
        if (g_02786e30 != 0) {
          dVar4 = (double)FUN_00d50b00();
        }
        lVar1 = *arg1;
        local_50 = 1;
        local_58 = &g_024c5048;
        if (lVar1 != 0) {
          dVar4 = (double)FUN_00d50b00();
        }
        local_40 = '\x01';
        local_48 = lVar1;
        FUN_00cc7b40(dVar4,&local_58);
        local_58 = &g_024c5048;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      local_2c = (float)local_a0;
    }
    else if (cVar3 == 'f') {
      FUN_00dabaa0();
      local_2c = local_58._0_4_;
    }
    else {
      uVar5 = extraout_XMM0_Qa;
      if (g_02786e30 != 0) {
        uVar5 = FUN_00d50b00();
      }
      lVar1 = *arg1;
      local_50 = 2;
      if (lVar1 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_40 = '\x01';
      local_58 = (void*)&g_025ff270;
      local_48 = lVar1;
      local_38 = cVar3;
      FUN_00cc7b40(uVar5,&local_58);
      local_58 = &g_024c5048;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return local_2c;
}



// ============================================================
// 00e5b2a0
// ============================================================
// Function: FUN_00e5b2a0
// Address: 00e5b2a0
// Size: 513 bytes
// Class: GNBinaryKeyValueUnarchiver
// String references:
//   "Assertion failed in GNBinaryKeyValueUnarchiver.cpp at line %i: %s."
//   "offset < _dataLength"
//   "offset != GNNotFound"
//   "offset < _excessDataLength"
// === GNBinaryKeyValueUnarchiver properties ===
//                   _archiveVersion
//                   _awakesObjectsAfterDecoding
//                   _isCancelled
//                   _allObjectsMarker


int64_t FUN_00e5b2a0(uint64_t param_1)

{
  void*puVar1;
  int64_t lVar2;
  int iVar3;
  int64_t this_ptr;
  int64_t *plVar4;
  void*local_40;
  uint64_t local_38;
  char *local_30;
  
  local_40 = *(void**)(this_ptr + 0x10);
  local_38 = local_38 & 0xffffffffffffff00;
  iVar3 = FUN_00e5d7f0();
  if (((char)local_38 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_027815a8;
  if (iVar3 == -1) {
    puVar1 = *(void**)(this_ptr + 0x18);
    if (puVar1 != (void*)0x0) {
      FUN_00d50b00();
    }
    local_38 = CONCAT71(local_38._1_7_,1);
    local_40 = puVar1;
    iVar3 = FUN_00e5d7f0();
    if (((char)local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027815a8;
    if (iVar3 == -1) {
      if (g_027815a8 != 0) {
        FUN_00d50b00();
      }
      local_38 = 0x7f00000002;
      local_40 = &g_0258e798;
      local_30 = "offset != GNNotFound";
      FUN_00cc7b40(param_1,&local_40);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    lVar2 = g_027815a8;
    if (*(int *)(this_ptr + 0x24) <= iVar3) {
      if (g_027815a8 != 0) {
        FUN_00d50b00();
      }
      local_38 = 0x8000000002;
      local_40 = &g_0258e760;
      local_30 = "offset < _excessDataLength";
      FUN_00cc7b40(param_1,&local_40);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    plVar4 = (int64_t *)(this_ptr + 0x30);
  }
  else {
    if (*(int *)(this_ptr + 0x20) <= iVar3) {
      if (g_027815a8 != 0) {
        FUN_00d50b00();
      }
      local_38 = 0x7b00000002;
      local_40 = &g_0258e798;
      local_30 = "offset < _dataLength";
      FUN_00cc7b40(param_1,&local_40);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    plVar4 = (int64_t *)(this_ptr + 0x28);
  }
  return (int64_t)iVar3 + *plVar4;
}



// ============================================================
// 00e58c60
// ============================================================
// Function: FUN_00e58c60
// Address: 00e58c60
// Size: 536 bytes
// Class: GNBinaryKeyValueUnarchiver
// String references:
//   "GNBinaryKeyValueUnarchiver::decodeInt32ForKey: exceeded value range while reading SInt64 as SInt32 ...
//   "GNBinaryKeyValueUnarchiver::decodeInt32ForKey: failed for key:%@ of cTypeID:%c"
// === GNBinaryKeyValueUnarchiver properties ===
//                   _archiveVersion
//                   _awakesObjectsAfterDecoding
//                   _isCancelled
//                   _allObjectsMarker


int FUN_00e58c60(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *arg1;
  int iVar4;
  int local_90;
  uint32_t uStack_8c;
  int local_58;
  
  cVar3 = FUN_00e58720();
  iVar4 = 0;
  if (cVar3 != '\0') {
    cVar3 = FUN_00e58390();
    lVar2 = g_02786e30;
    switch(cVar3 + -99) {
    case '\0':
      FUN_00dabce0();
      iVar4 = (int)(char)local_58;
      break;
    default:
      if (g_02786e30 != 0) {
        FUN_00d50b00();
      }
      lVar1 = *arg1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      iVar4 = 0;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      break;
    case '\x02':
    case '\x06':
      FUN_00dab660();
      iVar4 = local_58;
      break;
    case '\t':
      FUN_00dab880();
      lVar2 = g_02786e30;
      iVar4 = local_90;
      if ((int64_t)local_90 != CONCAT44(uStack_8c,local_90)) {
        if (g_02786e30 != 0) {
          FUN_00d50b00();
        }
        lVar1 = *arg1;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_00cc7b40();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return iVar4;
}

