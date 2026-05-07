// Function: FUN_01d26620
// Address: 01d26620
// Size: 574 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01d267e0) */
/* WARNING: Removing unreachable block (ram,0x01d267e9) */
/* WARNING: Removing unreachable block (ram,0x01d26845) */
/* WARNING: Removing unreachable block (ram,0x01d2684e) */

longlong * FUN_01d26620(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar4;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  longlong local_40;
  char local_38;
  
  if (*(int *)(*(longlong *)(unaff_RSI + 0x20) + 0xc) < 2) {
    iVar1 = FUN_01d26e20();
    if (iVar1 == -1) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      local_88 = *param_2;
      local_80 = 0;
      FUN_01d26d00(iVar1,&local_88);
    }
  }
  else {
    FUN_01d26990();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_00d227d0();
    if ((local_40 != 0) && (3 < *(int *)(local_40 + 0x18))) {
      lVar4 = 0;
      do {
        local_98 = *param_2;
        local_90 = 0;
        FUN_01d26d00(*(undefined4 *)(*(longlong *)(local_40 + 0x10) + lVar4 * 4),&local_98);
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        iVar1 = *(int *)(local_40 + 0x18);
        iVar3 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar3 = iVar1;
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < iVar3 >> 2);
    }
    FUN_00e986f0();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        *unaff_RDI = 0;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      else {
        FUN_00d50b00();
        *unaff_RDI = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
    }
    else {
      *unaff_RDI = local_40;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


