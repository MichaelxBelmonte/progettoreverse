// Function: FUN_01715150
// Address: 01715150
// Size: 750 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01715150(void)

{
  int64_t lVar1;
  int iVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t *arg1;
  int iVar8;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  lVar1 = *arg1;
  if (lVar1 == this_ptr) {
    uVar5 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
  }
  else {
    if (lVar1 != 0) {
      FUN_00d4efa0();
      FUN_00d4efa0();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 == local_48) {
        iVar2 = *(int *)(this_ptr + 0xc) * 7;
        iVar2 = iVar2 + (((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f)) * -0xc;
        lVar1 = *arg1;
        iVar8 = *(int *)(lVar1 + 0xc) * 7;
        iVar8 = iVar8 + (((uint)(iVar8 / 6 + (iVar8 >> 0x1f)) >> 1) - (iVar8 >> 0x1f)) * -0xc;
        if ((iVar2 >> 0x1f & 0xcU) + iVar2 == (iVar8 >> 0x1f & 0xcU) + iVar8) {
          iVar2 = (*(int *)(this_ptr + 0xc) + *(int *)(this_ptr + 0x10)) * 7;
          iVar2 = iVar2 + (((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f)) * -0xc;
          iVar8 = (*(int *)(lVar1 + 0xc) + *(int *)(lVar1 + 0x10)) * 7;
          iVar8 = iVar8 + (((uint)(iVar8 / 6 + (iVar8 >> 0x1f)) >> 1) - (iVar8 >> 0x1f)) * -0xc;
          if ((iVar2 >> 0x1f & 0xcU) + iVar2 == (iVar8 >> 0x1f & 0xcU) + iVar8) {
            uVar6 = (uint)*(uint64_t *)(this_ptr + 0x18);
            uVar3 = (uint)*(uint64_t *)(lVar1 + 0x18);
            if (((((((~uVar3 & 0xf) != 0) == ((~uVar6 & 0xf) != 0)) &&
                  (((~uVar6 & 0xf0) != 0) == ((~uVar3 & 0xf0) != 0))) &&
                 (((~uVar3 & 0xf00) != 0) == ((~uVar6 & 0xf00) != 0))) &&
                ((((~uVar3 & 0xf000) != 0) == ((~uVar6 & 0xf000) != 0) &&
                 (((~uVar3 & 0xf0000) != 0) == ((~uVar6 & 0xf0000) != 0))))) &&
               ((((~uVar3 & 0xf00000) != 0) == ((~uVar6 & 0xf00000) != 0) &&
                ((((~uVar3 & 0xf000000) != 0) == ((~uVar6 & 0xf000000) != 0) &&
                 (((uVar3 & 0xf0000000) != 0xf0000000) == ((uVar6 & 0xf0000000) != 0xf0000000)))))))
            {
              uVar7 = ~*(uint64_t *)(this_ptr + 0x18);
              uVar4 = ~*(uint64_t *)(lVar1 + 0x18);
              if ((((uVar4 & 0xf00000000) != 0) == ((uVar7 & 0xf00000000) != 0)) &&
                 ((((uVar4 & 0xf000000000) != 0) == ((uVar7 & 0xf000000000) != 0) &&
                  (((uVar4 & 0xf0000000000) != 0) == ((uVar7 & 0xf0000000000) != 0))))) {
                return CONCAT71((int7)(uVar4 >> 8),
                                ((uVar4 & 0xf00000000000) != 0) != ((uVar7 & 0xf00000000000) == 0));
              }
            }
          }
        }
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}

