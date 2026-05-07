// Function: FUN_00e58c60
// Address: 00e58c60
// Size: 536 bytes
// Class: GNBinaryKeyValueUnarchiver
// String references:
//   "GNBinaryKeyValueUnarchiver::decodeInt32ForKey: exceeded value range while reading SInt64 as SInt32 ...
//   "GNBinaryKeyValueUnarchiver::decodeInt32ForKey: failed for key:%@ of cTypeID:%c"


/* WARNING: Removing unreachable block (ram,0x00e58c93) */
/* WARNING: Removing unreachable block (ram,0x00e58c9c) */

int FUN_00e58c60(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *unaff_RSI;
  int iVar4;
  int local_90;
  undefined4 uStack_8c;
  int local_58;
  
  cVar3 = FUN_00e58720();
  iVar4 = 0;
  if (cVar3 != '\0') {
    cVar3 = FUN_00e58390();
    lVar2 = DAT_02786e30;
    switch(cVar3 + -99) {
    case '\0':
      FUN_00dabce0();
      iVar4 = (int)(char)local_58;
      break;
    default:
      if (DAT_02786e30 != 0) {
        FUN_00d50b00();
      }
      lVar1 = *unaff_RSI;
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
      lVar2 = DAT_02786e30;
      iVar4 = local_90;
      if ((longlong)local_90 != CONCAT44(uStack_8c,local_90)) {
        if (DAT_02786e30 != 0) {
          FUN_00d50b00();
        }
        lVar1 = *unaff_RSI;
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


