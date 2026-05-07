// Function: FUN_01d09fc0
// Address: 01d09fc0
// Size: 521 bytes
// Class: GNMultipleValue


/* WARNING: Removing unreachable block (ram,0x01d0a0c7) */
/* WARNING: Removing unreachable block (ram,0x01d0a0d0) */
/* WARNING: Removing unreachable block (ram,0x01d0a06d) */
/* WARNING: Removing unreachable block (ram,0x01d0a076) */
/* WARNING: Removing unreachable block (ram,0x01d0a17e) */
/* WARNING: Removing unreachable block (ram,0x01d0a187) */
/* WARNING: Removing unreachable block (ram,0x01d0a156) */
/* WARNING: Removing unreachable block (ram,0x01d0a15f) */

longlong * FUN_01d09fc0(void)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  longlong local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar4 = *(longlong *)(unaff_RSI + 0x240);
  if (0 < *(int *)(lVar4 + 0xc)) {
    lVar5 = 0;
    do {
      local_40 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar5 * 8);
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_00d23d70();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        local_40 = *(longlong *)
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)(unaff_RSI + 0x240) + 0x10) + lVar5 * 8) + 0x10);
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
      local_38 = '\0';
      lVar5 = lVar5 + 1;
      lVar4 = *(longlong *)(unaff_RSI + 0x240);
    } while (lVar5 < *(int *)(lVar4 + 0xc));
  }
  lVar4 = *(longlong *)(unaff_RSI + 600);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (local_40 == 0) {
    bVar1 = false;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar1 = true;
  }
  else {
    bVar1 = true;
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (!bVar1 && local_40 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


