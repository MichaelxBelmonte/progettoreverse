// Function: FUN_01d2a8f0
// Address: 01d2a8f0
// Size: 551 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01d2aa3c) */
/* WARNING: Removing unreachable block (ram,0x01d2aa45) */
/* WARNING: Removing unreachable block (ram,0x01d2a9a9) */
/* WARNING: Removing unreachable block (ram,0x01d2a9b2) */
/* WARNING: Removing unreachable block (ram,0x01d2aab4) */
/* WARNING: Removing unreachable block (ram,0x01d2aabd) */

void FUN_01d2a8f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 != (longlong *)0x0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x10);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      return;
    }
  }
  if (((*(char *)(unaff_RDI + 0x39) != '\0') && (*unaff_RSI != 0)) &&
     (*(int *)(*unaff_RSI + 0xc) == *(int *)(*(longlong *)(unaff_RDI + 0x10) + 0xc) + 1)) {
    FUN_00d50b00();
    cVar3 = FUN_00d23fd0();
    FUN_00d50b20();
    if ((cVar3 != '\0') && (lVar4 = *unaff_RSI, lVar4 != 0)) {
      lVar5 = 0;
      do {
        if (*(int *)(lVar4 + 0xc) <= (int)lVar5) goto LAB_01d2aa80;
        lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar5 * 8);
        cVar3 = FUN_00d23d70();
        lVar5 = lVar5 + 1;
      } while (cVar3 != '\0');
      lVar4 = *(longlong *)(unaff_RDI + 0xb8);
      if (lVar4 != lVar2) {
        if (lVar2 != 0) {
          FUN_00d50b00();
          lVar4 = *(longlong *)(unaff_RDI + 0xb8);
        }
        *(longlong *)(unaff_RDI + 0xb8) = lVar2;
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
LAB_01d2aa80:
      FUN_00083b20();
    }
  }
  FUN_01d2acc0();
  FUN_00d243f0();
  *(undefined4 *)(unaff_RDI + 0xac) = 8;
  FUN_01d2aeb0();
  if (*(int *)(unaff_RDI + 0xac) != 0) {
    FUN_01d2b270();
    *(undefined4 *)(unaff_RDI + 0xac) = 0;
  }
  if (*(longlong *)(unaff_RDI + 0xb8) != 0) {
    *(undefined8 *)(unaff_RDI + 0xb8) = 0;
    FUN_00d50b20();
  }
  return;
}


