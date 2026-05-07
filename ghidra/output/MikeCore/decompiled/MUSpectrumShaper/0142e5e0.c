// Function: FUN_0142e5e0
// Address: 0142e5e0
// Size: 582 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x0142e6b9) */
/* WARNING: Removing unreachable block (ram,0x0142e6c2) */
/* WARNING: Removing unreachable block (ram,0x0142e7a8) */
/* WARNING: Removing unreachable block (ram,0x0142e7b1) */

longlong * FUN_0142e5e0(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar1 = *(uint *)(*(longlong *)(unaff_RSI + 0xf0) + 0xc);
  if ((int)uVar1 < 1) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  lVar6 = 0;
  lVar5 = 0;
  bVar2 = false;
  lVar8 = **(longlong **)(*(longlong *)(unaff_RSI + 0xf0) + 0x10);
  bVar3 = bVar2;
  if (lVar8 == 0) goto LAB_0142e660;
  do {
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    bVar2 = true;
    if ((bVar3) && (lVar5 != 0)) {
      FUN_00d50b20();
    }
LAB_0142e690:
    lVar5 = lVar8;
    cVar4 = FUN_012c2b70();
    if (cVar4 != '\0') goto LAB_0142e7fd;
    if ((ulonglong)uVar1 - 1 == lVar6) {
      uVar7 = 0;
      while( true ) {
        lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RSI + 0xf0) + 0x10) + uVar7 * 8);
        if (lVar5 == lVar8) {
          if ((!bVar2) && (lVar5 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (lVar5 != 0)) {
            bVar2 = true;
            FUN_00d50b20();
            lVar5 = lVar8;
          }
          else {
            bVar2 = true;
            lVar5 = lVar8;
          }
        }
        cVar4 = FUN_012c2b70();
        if (cVar4 != '\0') break;
        uVar7 = uVar7 + 1;
        if (uVar1 == uVar7) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          *unaff_RDI = 0;
          if ((bVar2) && (lVar5 != 0)) {
            FUN_00d50b20();
          }
          return unaff_RDI;
        }
      }
LAB_0142e7fd:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((!bVar2) && (lVar5 != 0)) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar5;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return unaff_RDI;
    }
    lVar6 = lVar6 + 1;
    lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RSI + 0xf0) + 0x10) + lVar6 * 8);
    bVar3 = bVar2;
  } while (lVar5 != lVar8);
LAB_0142e660:
  lVar8 = lVar5;
  if ((!bVar2) && (lVar5 != 0)) {
    bVar2 = true;
    FUN_00d50b00();
  }
  goto LAB_0142e690;
}


