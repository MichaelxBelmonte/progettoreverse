// Function: FUN_00e83120
// Address: 00e83120
// Size: 956 bytes
// Class: GNFastFourierTransformer
// String references:
//   "GNFastFourierTransformer initialized with inappropriate table size"


void FUN_00e83120(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint unaff_ESI;
  undefined8 *unaff_RDI;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_0258fad0;
  *(undefined8 *)((longlong)puVar2 + 0xc) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
  FUN_00d500e0();
  *(uint *)((longlong)puVar2 + 0xc) = unaff_ESI;
  *(uint *)(puVar2 + 2) = unaff_ESI >> 1;
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0;
  lVar4 = DAT_027bec98;
  if ((int)unaff_ESI < 0x10000) {
    if ((int)unaff_ESI < 0x200) {
      if ((int)unaff_ESI < 0x20) {
        if (unaff_ESI == 0x80000000) {
          uVar1 = 0x1f;
        }
        else {
          uVar1 = 3;
          if (unaff_ESI != 8) {
            if (unaff_ESI != 0x10) goto LAB_00e83485;
            uVar1 = 4;
          }
        }
      }
      else if ((int)unaff_ESI < 0x80) {
        if (unaff_ESI == 0x20) {
          uVar1 = 5;
        }
        else {
          if (unaff_ESI != 0x40) goto LAB_00e83485;
          uVar1 = 6;
        }
      }
      else if (unaff_ESI == 0x80) {
        uVar1 = 7;
      }
      else {
        if (unaff_ESI != 0x100) goto LAB_00e83485;
        uVar1 = 8;
      }
    }
    else if ((int)unaff_ESI < 0x1000) {
      if (unaff_ESI == 0x200) {
        uVar1 = 9;
      }
      else if (unaff_ESI == 0x400) {
        uVar1 = 10;
      }
      else {
        if (unaff_ESI != 0x800) goto LAB_00e83485;
        uVar1 = 0xb;
      }
    }
    else if ((int)unaff_ESI < 0x4000) {
      if (unaff_ESI == 0x1000) {
        uVar1 = 0xc;
      }
      else {
        if (unaff_ESI != 0x2000) goto LAB_00e83485;
        uVar1 = 0xd;
      }
    }
    else if (unaff_ESI == 0x4000) {
      uVar1 = 0xe;
    }
    else {
      if (unaff_ESI != 0x8000) goto LAB_00e83485;
      uVar1 = 0xf;
    }
  }
  else if ((int)unaff_ESI < 0x800000) {
    if ((int)unaff_ESI < 0x80000) {
      if (unaff_ESI == 0x10000) {
        uVar1 = 0x10;
      }
      else if (unaff_ESI == 0x20000) {
        uVar1 = 0x11;
      }
      else {
        if (unaff_ESI != 0x40000) goto LAB_00e83485;
        uVar1 = 0x12;
      }
    }
    else if ((int)unaff_ESI < 0x200000) {
      if (unaff_ESI == 0x80000) {
        uVar1 = 0x13;
      }
      else {
        if (unaff_ESI != 0x100000) goto LAB_00e83485;
        uVar1 = 0x14;
      }
    }
    else if (unaff_ESI == 0x200000) {
      uVar1 = 0x15;
    }
    else {
      if (unaff_ESI != 0x400000) goto LAB_00e83485;
      uVar1 = 0x16;
    }
  }
  else if ((int)unaff_ESI < 0x8000000) {
    if ((int)unaff_ESI < 0x2000000) {
      if (unaff_ESI == 0x800000) {
        uVar1 = 0x17;
      }
      else {
        if (unaff_ESI != 0x1000000) {
LAB_00e83485:
          if (DAT_027bec98 != 0) {
            FUN_00d50b00();
          }
          FUN_00cc7b40(param_1,DAT_025908a0);
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          goto LAB_00e83436;
        }
        uVar1 = 0x18;
      }
    }
    else if (unaff_ESI == 0x2000000) {
      uVar1 = 0x19;
    }
    else {
      if (unaff_ESI != 0x4000000) goto LAB_00e83485;
      uVar1 = 0x1a;
    }
  }
  else if ((int)unaff_ESI < 0x20000000) {
    if (unaff_ESI == 0x8000000) {
      uVar1 = 0x1b;
    }
    else {
      if (unaff_ESI != 0x10000000) goto LAB_00e83485;
      uVar1 = 0x1c;
    }
  }
  else if (unaff_ESI == 0x20000000) {
    uVar1 = 0x1d;
  }
  else {
    if (unaff_ESI != 0x40000000) goto LAB_00e83485;
    uVar1 = 0x1e;
  }
  *(undefined4 *)((longlong)puVar2 + 0x14) = uVar1;
LAB_00e83436:
  uVar3 = FUN_00e83020();
  puVar2[3] = uVar3;
  uVar3 = FUN_00e83020();
  puVar2[4] = uVar3;
  lVar4 = _vDSP_create_fftsetup();
  puVar2[5] = lVar4;
  if (lVar4 == 0) {
    FUN_00e8f250();
  }
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


