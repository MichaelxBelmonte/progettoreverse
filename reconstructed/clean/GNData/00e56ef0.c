// Function: FUN_00e56ef0
// Address: 00e56ef0
// Size: 672 bytes
// Class: GNData
// String references:
//   "GNData"
//   "GNValue"
//   "GNString"
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


uint64_t FUN_00e56ef0(void)

{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *arg1;
  uint64_t unaff_R14;
  uint64_t uVar4;
  undefined7 uVar5;
  
  lVar1 = *arg1;
  // [STATIC_INIT: property registration]
  lVar3 = FUN_00e86210();
  uVar5 = (undefined7)((uint64_t)unaff_R14 >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if (lVar1 != lVar3) {
    lVar1 = *arg1;
    // [STATIC_INIT: property registration]
    lVar3 = FUN_00e86210();
    if (lVar1 != lVar3) {
      lVar1 = *arg1;
      FUN_00053ac0();
      lVar3 = FUN_00e86210();
      if (lVar1 != lVar3) {
        lVar1 = *arg1;
        // [STATIC_INIT: property registration]
        lVar3 = FUN_00e86210();
        uVar4 = CONCAT71(uVar5,lVar1 == lVar3);
      }
    }
  }
  return uVar4 & 0xffffffff;
}

