// Function: FUN_00df0b40
// Address: 00df0b40
// Size: 856 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00df0c4f) */
/* WARNING: Removing unreachable block (ram,0x00df0bea) */
/* WARNING: Removing unreachable block (ram,0x00df0bf3) */
/* WARNING: Removing unreachable block (ram,0x00df0b90) */
/* WARNING: Removing unreachable block (ram,0x00df0b99) */
/* WARNING: Removing unreachable block (ram,0x00df0c94) */
/* WARNING: Removing unreachable block (ram,0x00df0c9d) */

void FUN_00df0b40(void)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar5;
  bool bVar6;
  longlong *local_48;
  char local_40;
  
  (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_00df0bc6;
    FUN_00d50b00();
  }
  else if (local_48 == (longlong *)0x0) {
LAB_00df0bc6:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x498))();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00df0bf8;
    }
LAB_00df0c54:
    bVar6 = true;
LAB_00df0c5a:
    plVar5 = (longlong *)0x0;
    bVar1 = false;
LAB_00df0c63:
    FUN_00d8ed10();
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_00df0ca2;
      }
LAB_00df0cea:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      if (local_48 == (longlong *)0x0) goto LAB_00df0cea;
LAB_00df0ca2:
      FUN_00df0630();
      if (local_48 == plVar5) {
        if ((!bVar1) && (local_48 != (longlong *)0x0)) {
          local_48 = plVar5;
          if (local_40 == '\0') {
            FUN_00d50b00();
          }
          goto LAB_00df0db4;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar5 == (longlong *)0x0) goto LAB_00df0dd7;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (bVar1) goto LAB_00df0dc1;
        FUN_00d50b00();
        *unaff_RDI = plVar5;
LAB_00df0dc4:
        *(undefined1 *)(unaff_RDI + 1) = 1;
        bVar1 = false;
      }
      else {
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar1) && (plVar5 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if ((bVar1) && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_00df0db4:
        if (local_48 != (longlong *)0x0) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          plVar5 = local_48;
LAB_00df0dc1:
          *unaff_RDI = plVar5;
          goto LAB_00df0dc4;
        }
        bVar1 = true;
LAB_00df0dd7:
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        plVar5 = (longlong *)0x0;
      }
      FUN_00d50b20();
    }
    if (bVar6) goto LAB_00df0e54;
  }
  else {
    if (local_48 == (longlong *)0x0) goto LAB_00df0c54;
LAB_00df0bf8:
    iVar4 = FUN_00d8c7a0();
    lVar2 = DAT_02775660;
    if (iVar4 != 4) {
      bVar6 = false;
      goto LAB_00df0c5a;
    }
    if (DAT_02775660 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_48 + 0x50))();
    if (cVar3 == '\0') {
      FUN_00df0a30();
      if (local_48 == (longlong *)0x0) {
        bVar1 = false;
        plVar5 = (longlong *)0x0;
      }
      else {
        bVar1 = true;
        plVar5 = local_48;
        if (local_40 == '\0') {
          FUN_00d50b00();
        }
      }
      bVar6 = local_48 != (longlong *)0x0;
    }
    else {
      bVar1 = false;
      plVar5 = (longlong *)0x0;
      bVar6 = false;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (!bVar6) {
      bVar6 = false;
      goto LAB_00df0c63;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((!bVar1) && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    *unaff_RDI = plVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    bVar1 = false;
  }
  FUN_00d50b20();
LAB_00df0e54:
  FUN_00d50b20();
  if (!bVar1) {
    return;
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}


