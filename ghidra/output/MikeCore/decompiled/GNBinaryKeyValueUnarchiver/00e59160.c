// Function: FUN_00e59160
// Address: 00e59160
// Size: 775 bytes
// Class: GNBinaryKeyValueUnarchiver
// String references:
//   "GNBinaryKeyValueUnarchiver::decodeFloatForKey: range overflow while reading double as float for key...
//   "GNBinaryKeyValueUnarchiver::decodeFloatForKey: range underflow while reading double as float for ke...
//   "GNBinaryKeyValueUnarchiver::decodeFloatForKey: failed for key:%@ of cTypeID:%c"


/* WARNING: Removing unreachable block (ram,0x00e591a0) */
/* WARNING: Removing unreachable block (ram,0x00e591ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00e59160(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *unaff_RSI;
  undefined8 extraout_XMM0_Qa;
  double dVar4;
  undefined8 uVar5;
  double local_a0;
  undefined8 *local_58;
  undefined4 local_50;
  longlong local_48;
  char local_40;
  char local_38;
  float local_2c;
  
  cVar3 = FUN_00e58720();
  local_2c = 0.0;
  if (cVar3 != '\0') {
    cVar3 = FUN_00e58390();
    lVar2 = DAT_02786e30;
    if (cVar3 == 'd') {
      FUN_00dabbc0();
      lVar2 = DAT_02786e30;
      if (((DAT_02411188 < local_a0) && (local_a0 < DAT_023e1698)) ||
         ((local_a0 < DAT_023e11c8 && (DAT_0241f388 < local_a0)))) {
        dVar4 = local_a0;
        if (DAT_02786e30 != 0) {
          dVar4 = (double)FUN_00d50b00();
        }
        lVar1 = *unaff_RSI;
        local_50 = 1;
        local_58 = &DAT_024c5048;
        if (lVar1 != 0) {
          dVar4 = (double)FUN_00d50b00();
        }
        local_40 = '\x01';
        local_48 = lVar1;
        FUN_00cc7b40(dVar4,&local_58);
        local_58 = &DAT_024c5048;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      else if ((((local_a0 != 0.0) || (NAN(local_a0))) && (local_a0 < DAT_02411158)) &&
              (_DAT_023e11d0 < local_a0)) {
        dVar4 = local_a0;
        if (DAT_02786e30 != 0) {
          dVar4 = (double)FUN_00d50b00();
        }
        lVar1 = *unaff_RSI;
        local_50 = 1;
        local_58 = &DAT_024c5048;
        if (lVar1 != 0) {
          dVar4 = (double)FUN_00d50b00();
        }
        local_40 = '\x01';
        local_48 = lVar1;
        FUN_00cc7b40(dVar4,&local_58);
        local_58 = &DAT_024c5048;
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
      if (DAT_02786e30 != 0) {
        uVar5 = FUN_00d50b00();
      }
      lVar1 = *unaff_RSI;
      local_50 = 2;
      if (lVar1 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_40 = '\x01';
      local_58 = (undefined8 *)&DAT_025ff270;
      local_48 = lVar1;
      local_38 = cVar3;
      FUN_00cc7b40(uVar5,&local_58);
      local_58 = &DAT_024c5048;
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


