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

