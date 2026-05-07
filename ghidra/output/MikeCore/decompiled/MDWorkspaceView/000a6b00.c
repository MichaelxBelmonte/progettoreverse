// Function: FUN_000a6b00
// Address: 000a6b00
// Size: 704 bytes
// Class: MDWorkspaceView
// String references:
//   "MDWorkspaceView"
//   "GNBorderStyle"
//   "_borderStyle"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_000a6b00(void)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_026daa20 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_026da9c0 = _DAT_0238fcc0;
      _DAT_026da9c8 = _UNK_0238fcc8;
      DAT_026da9d0 = _DAT_0238ff10;
      DAT_026da9d4 = _UNK_0238ff14;
      DAT_026da9d8 = _UNK_0238ff18;
      DAT_026da9dc = _UNK_0238ff1c;
      bVar1 = FUN_000a6df0(_DAT_0238ff10,8);
      DAT_026daa18 = (DAT_026da9c4 == 1 && DAT_026da9c8 == 2) &
                     (DAT_026da9cc == 3 && (DAT_026da9d0 == 4 && DAT_026da9d4 == 5)) &
                     (DAT_026da9d8 == 6 && DAT_026da9dc == 7) & bVar1 & DAT_026da9e0 == 8;
      ___cxa_guard_release();
    }
  }
  if (DAT_026daa58 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_026daa28 = "GNBorderStyle";
      _DAT_026daa30 = 0x16;
      DAT_026daa34 = DAT_026daa18;
      _DAT_026daa38 = &DAT_026da9c0;
      _DAT_026daa40 = &DAT_026da900;
      _DAT_026daa48 = 0;
      uRam00000000026daa50 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026da8f0 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if (DAT_026fddd0 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_026d9988 = FUN_0006d940();
          _DAT_026d9970 = "MDWorkspaceView";
          _DAT_026d9978 = 0x188;
          _DAT_026d9980 = FUN_000a3150;
          _DAT_026d9990 = 0;
          uRam00000000026d9998 = 0;
          _DAT_026d99a0 = 0;
          _DAT_026d9a18 = 0;
          uRam00000000026d9a20 = 0;
          _DAT_026d9a28 = 0;
          DAT_026d9a2a = 1;
          _DAT_026d99a8 = 0;
          uRam00000000026d99b0 = 0;
          _DAT_026d99b8 = 0;
          uRam00000000026d99c0 = 0;
          _DAT_026d99c8 = 0;
          uRam00000000026d99d0 = 0;
          _DAT_026d99d8 = 0;
          uRam00000000026d99e0 = 0;
          _DAT_026d99e8 = 0;
          uRam00000000026d99f0 = 0;
          _DAT_026d99f8 = 0;
          uRam00000000026d9a00 = 0;
          _DAT_026d9a08 = 0;
          uRam00000000026d9a10 = 0;
          DAT_026d9a33 = 0;
          _DAT_026d9a2b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026da8b0 = "_borderStyle";
      _DAT_026da8b8 = &DAT_026d9970;
      _DAT_026da8c0 = 0;
      _DAT_026da8c8 = 0x6500;
      _DAT_026da8d0 = "GNBorderStyle";
      _DAT_026da8d8 = &DAT_026daa28;
      _DAT_026da8e0 = 0;
      uRam00000000026da8e8 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026da8b0;
}


