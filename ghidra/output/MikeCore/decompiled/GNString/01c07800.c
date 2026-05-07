// Function: FUN_01c07800
// Address: 01c07800
// Size: 630 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c079ca) */
/* WARNING: Removing unreachable block (ram,0x01c079d3) */
/* WARNING: Removing unreachable block (ram,0x01c079ff) */
/* WARNING: Removing unreachable block (ram,0x01c07a08) */
/* WARNING: Removing unreachable block (ram,0x01c078d7) */
/* WARNING: Removing unreachable block (ram,0x01c078e3) */

longlong * FUN_01c07800(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int iVar5;
  longlong local_98;
  char local_90;
  longlong local_50;
  char local_48;
  
  if (*(longlong *)(unaff_RSI + 0x38) == 0) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar4 = 0x2572358;
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    lVar1 = *(longlong *)(unaff_RSI + 0x38);
    *(undefined8 **)(unaff_RSI + 0x38) = puVar2;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017d5720();
    if (local_90 == '\0') {
      if (local_98 == 0) goto LAB_01c07a50;
      FUN_00d50b00();
    }
    else if (local_98 == 0) goto LAB_01c07a50;
    if (0 < *(int *)(local_98 + 0xc)) {
      iVar5 = 0;
      do {
        FUN_00d50b00();
        FUN_01bb9520();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_00d21140();
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (unaff_RSI != 0) {
          FUN_00d50b20();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(local_98 + 0xc));
    }
    FUN_01c0a2d0();
    FUN_00d50b20();
  }
LAB_01c07a50:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = *(longlong *)(unaff_RSI + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


