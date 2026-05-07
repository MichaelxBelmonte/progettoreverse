// Function: FUN_00e56ef0
// Address: 00e56ef0
// Size: 672 bytes
// Class: GNData
// String references:
//   "GNData"
//   "GNValue"
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00e56ef0(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *unaff_RSI;
  undefined8 unaff_R14;
  ulonglong uVar4;
  undefined7 uVar5;
  
  lVar1 = *unaff_RSI;
  if (DAT_026d0220 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_02789148 = FUN_00d4fe50();
      DAT_02789130 = "GNData";
      _DAT_02789138 = 0x28;
      _DAT_02789140 = FUN_000378a0;
      _DAT_02789150 = 0;
      uRam0000000002789158 = 0;
      _DAT_02789160 = 0;
      uRam0000000002789168 = 0;
      _DAT_02789170 = 0;
      uRam0000000002789178 = 0;
      _DAT_02789180 = 0;
      uRam0000000002789188 = 0;
      _DAT_02789190 = 0;
      uRam0000000002789198 = 0;
      _DAT_027891a0 = 0;
      uRam00000000027891a8 = 0;
      _DAT_027891b0 = 0;
      uRam00000000027891b8 = 0;
      _DAT_027891c0 = 0;
      uRam00000000027891c8 = 0;
      _DAT_027891d0 = 0;
      uRam00000000027891d8 = 0;
      _DAT_027891e0 = 0;
      uRam00000000027891e8 = 0;
      _DAT_027891f0 = 0;
      ___cxa_guard_release();
    }
  }
  lVar3 = FUN_00e86210();
  uVar5 = (undefined7)((ulonglong)unaff_R14 >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if (lVar1 != lVar3) {
    lVar1 = *unaff_RSI;
    if (DAT_026fd0c0 == '\0') {
      iVar2 = ___cxa_guard_acquire();
      if (iVar2 != 0) {
        _DAT_026d5e58 = FUN_00d4fe50();
        DAT_026d5e40 = "GNString";
        _DAT_026d5e48 = 0x40;
        _DAT_026d5e50 = FUN_0005d920;
        _DAT_026d5e60 = 0;
        uRam00000000026d5e68 = 0;
        _DAT_026d5e70 = 0;
        uRam00000000026d5e78 = 0;
        _DAT_026d5e80 = 0;
        uRam00000000026d5e88 = 0;
        _DAT_026d5e90 = 0;
        uRam00000000026d5e98 = 0;
        _DAT_026d5ea0 = 0;
        uRam00000000026d5ea8 = 0;
        _DAT_026d5eb0 = 0;
        uRam00000000026d5eb8 = 0;
        _DAT_026d5ec0 = 0;
        uRam00000000026d5ec8 = 0;
        _DAT_026d5ed0 = 0;
        uRam00000000026d5ed8 = 0;
        _DAT_026d5ee0 = 0;
        uRam00000000026d5ee8 = 0;
        _DAT_026d5ef0 = 0;
        uRam00000000026d5ef8 = 0;
        _DAT_026d5f00 = 0;
        ___cxa_guard_release();
      }
    }
    lVar3 = FUN_00e86210();
    if (lVar1 != lVar3) {
      lVar1 = *unaff_RSI;
      FUN_00053ac0();
      lVar3 = FUN_00e86210();
      if (lVar1 != lVar3) {
        lVar1 = *unaff_RSI;
        if (DAT_0270c850 == '\0') {
          iVar2 = ___cxa_guard_acquire();
          if (iVar2 != 0) {
            _DAT_026d4348 = FUN_00d4fe50();
            _DAT_026d4330 = "GNValue";
            _DAT_026d4338 = 0x18;
            _DAT_026d4340 = FUN_00053cb0;
            _DAT_026d4350 = 0;
            uRam00000000026d4358 = 0;
            _DAT_026d4360 = 0;
            uRam00000000026d4368 = 0;
            _DAT_026d4370 = 0;
            uRam00000000026d4378 = 0;
            _DAT_026d4380 = 0;
            uRam00000000026d4388 = 0;
            _DAT_026d4390 = 0;
            uRam00000000026d4398 = 0;
            _DAT_026d43a0 = 0;
            uRam00000000026d43a8 = 0;
            _DAT_026d43b0 = 0;
            uRam00000000026d43b8 = 0;
            _DAT_026d43c0 = 0;
            uRam00000000026d43c8 = 0;
            _DAT_026d43d0 = 0;
            uRam00000000026d43d8 = 0;
            _DAT_026d43e0 = 0;
            uRam00000000026d43e8 = 0;
            _DAT_026d43f0 = 0;
            ___cxa_guard_release();
          }
        }
        lVar3 = FUN_00e86210();
        uVar4 = CONCAT71(uVar5,lVar1 == lVar3);
      }
    }
  }
  return uVar4 & 0xffffffff;
}


