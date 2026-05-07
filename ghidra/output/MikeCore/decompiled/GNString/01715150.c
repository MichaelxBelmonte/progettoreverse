// Function: FUN_01715150
// Address: 01715150
// Size: 750 bytes
// Class: GNString


undefined8 FUN_01715150(void)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *unaff_RSI;
  int iVar8;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar1 = *unaff_RSI;
  if (lVar1 == unaff_RDI) {
    uVar5 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
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
        iVar2 = *(int *)(unaff_RDI + 0xc) * 7;
        iVar2 = iVar2 + (((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f)) * -0xc;
        lVar1 = *unaff_RSI;
        iVar8 = *(int *)(lVar1 + 0xc) * 7;
        iVar8 = iVar8 + (((uint)(iVar8 / 6 + (iVar8 >> 0x1f)) >> 1) - (iVar8 >> 0x1f)) * -0xc;
        if ((iVar2 >> 0x1f & 0xcU) + iVar2 == (iVar8 >> 0x1f & 0xcU) + iVar8) {
          iVar2 = (*(int *)(unaff_RDI + 0xc) + *(int *)(unaff_RDI + 0x10)) * 7;
          iVar2 = iVar2 + (((uint)(iVar2 / 6 + (iVar2 >> 0x1f)) >> 1) - (iVar2 >> 0x1f)) * -0xc;
          iVar8 = (*(int *)(lVar1 + 0xc) + *(int *)(lVar1 + 0x10)) * 7;
          iVar8 = iVar8 + (((uint)(iVar8 / 6 + (iVar8 >> 0x1f)) >> 1) - (iVar8 >> 0x1f)) * -0xc;
          if ((iVar2 >> 0x1f & 0xcU) + iVar2 == (iVar8 >> 0x1f & 0xcU) + iVar8) {
            uVar6 = (uint)*(ulonglong *)(unaff_RDI + 0x18);
            uVar3 = (uint)*(ulonglong *)(lVar1 + 0x18);
            if (((((((~uVar3 & 0xf) != 0) == ((~uVar6 & 0xf) != 0)) &&
                  (((~uVar6 & 0xf0) != 0) == ((~uVar3 & 0xf0) != 0))) &&
                 (((~uVar3 & 0xf00) != 0) == ((~uVar6 & 0xf00) != 0))) &&
                ((((~uVar3 & 0xf000) != 0) == ((~uVar6 & 0xf000) != 0) &&
                 (((~uVar3 & 0xf0000) != 0) == ((~uVar6 & 0xf0000) != 0))))) &&
               ((((~uVar3 & 0xf00000) != 0) == ((~uVar6 & 0xf00000) != 0) &&
                ((((~uVar3 & 0xf000000) != 0) == ((~uVar6 & 0xf000000) != 0) &&
                 (((uVar3 & 0xf0000000) != 0xf0000000) == ((uVar6 & 0xf0000000) != 0xf0000000)))))))
            {
              uVar7 = ~*(ulonglong *)(unaff_RDI + 0x18);
              uVar4 = ~*(ulonglong *)(lVar1 + 0x18);
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


