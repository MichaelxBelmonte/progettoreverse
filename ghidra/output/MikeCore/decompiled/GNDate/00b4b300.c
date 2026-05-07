// Function: FUN_00b4b300
// Address: 00b4b300
// Size: 793 bytes
// Class: GNDate


longlong FUN_00b4b300(void)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  char unaff_SIL;
  longlong unaff_RDI;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong local_40;
  char local_38;
  
  bVar1 = true;
  if ((*(longlong *)(unaff_RDI + 0x70) < 0x100000000) && (*(int *)(unaff_RDI + 0x8c) == 0)) {
    bVar1 = (ulonglong)(*(longlong *)(unaff_RDI + 0x48) + *(longlong *)(unaff_RDI + 0x40)) >> 0x20
            != 0;
  }
  iVar6 = *(int *)(*(longlong *)(unaff_RDI + 0x58) + 0x18);
  iVar8 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar8 = iVar6;
  }
  iVar6 = (uint)((iVar6 / 0x18) * 6 < iVar8 >> 2) + iVar6 / 0x18;
  if (bVar1) {
    uVar10 = (ulonglong)(iVar6 < -1);
    lVar9 = (longlong)(iVar6 * 8) + uVar10 * 8 + 0x10;
    if (unaff_SIL == '\0') {
      return lVar9;
    }
    uVar5 = 0x636f3634;
  }
  else {
    uVar10 = (ulonglong)(iVar6 < -2);
    lVar9 = (longlong)(iVar6 * 4) + uVar10 * 8 + 0x10;
    if (unaff_SIL == '\0') {
      return lVar9;
    }
    uVar5 = 0x7374636f;
  }
  FUN_00b45250(uVar10,uVar5);
  FUN_00b45190();
  FUN_00ccdf50();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar7 = DAT_027653a0;
  if (local_40 != 0) {
    if (DAT_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  if (bVar1) {
    if (3 < *(int *)(*(longlong *)(unaff_RDI + 0x58) + 0x18)) {
      lVar7 = *(longlong *)(unaff_RDI + 0x40);
      iVar6 = 0;
      uVar10 = 0;
      do {
        if ((int)((uVar10 & 0xffffffff) / 6) * 6 + iVar6 == 0) {
          FUN_00ccdf90(0xaaaaaaab,lVar7);
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          lVar2 = DAT_027653a0;
          if (local_40 != 0) {
            if (DAT_027653a0 != 0) {
              FUN_00d50b00();
            }
            FUN_00cc78b0();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
        }
        lVar7 = lVar7 + (ulonglong)
                        *(uint *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10) + uVar10 * 4
                                 );
        uVar10 = uVar10 + 1;
        iVar8 = *(int *)(*(longlong *)(unaff_RDI + 0x58) + 0x18);
        iVar3 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar3 = iVar8;
        }
        iVar6 = iVar6 + -1;
      } while ((longlong)uVar10 < (longlong)(iVar3 >> 2));
    }
  }
  else if (3 < *(int *)(*(longlong *)(unaff_RDI + 0x58) + 0x18)) {
    iVar6 = *(int *)(unaff_RDI + 0x40);
    iVar8 = 0;
    uVar10 = 0;
    do {
      if ((int)((uVar10 & 0xffffffff) / 6) * 6 + iVar8 == 0) {
        FUN_00ccdf50(0xaaaaaaab,iVar6);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar7 = DAT_027653a0;
        if (local_40 != 0) {
          if (DAT_027653a0 != 0) {
            FUN_00d50b00();
          }
          FUN_00cc78b0();
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
        }
      }
      iVar6 = iVar6 + *(int *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x58) + 0x10) + uVar10 * 4);
      uVar10 = uVar10 + 1;
      iVar3 = *(int *)(*(longlong *)(unaff_RDI + 0x58) + 0x18);
      iVar4 = iVar3 + 3;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      iVar8 = iVar8 + -1;
    } while ((longlong)uVar10 < (longlong)(iVar4 >> 2));
  }
  return lVar9;
}


