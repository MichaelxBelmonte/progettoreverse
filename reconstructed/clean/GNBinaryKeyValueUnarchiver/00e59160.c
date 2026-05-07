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

