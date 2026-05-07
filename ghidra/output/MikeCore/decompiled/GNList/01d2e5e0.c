// Function: FUN_01d2e5e0
// Address: 01d2e5e0
// Size: 513 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01d2e705) */
/* WARNING: Removing unreachable block (ram,0x01d2e70e) */
/* WARNING: Removing unreachable block (ram,0x01d2e6d6) */
/* WARNING: Removing unreachable block (ram,0x01d2e6df) */
/* WARNING: Removing unreachable block (ram,0x01d2e747) */
/* WARNING: Removing unreachable block (ram,0x01d2e754) */
/* WARNING: Removing unreachable block (ram,0x01d2e7b2) */
/* WARNING: Removing unreachable block (ram,0x01d2e7bb) */

void FUN_01d2e5e0(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong unaff_RDI;
  longlong lVar5;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8);
        cVar3 = (**(code **)(*plVar2 + 0x488))();
        if (((cVar3 != '\0') && (cVar3 = FUN_01ccd030(), cVar3 != '\0')) &&
           (cVar3 = FUN_00d24090(), cVar3 == '\0')) {
          (**(code **)(*plVar2 + 0x490))();
          FUN_00d21140();
        }
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_01d300d0();
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x40);
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0x78))();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


