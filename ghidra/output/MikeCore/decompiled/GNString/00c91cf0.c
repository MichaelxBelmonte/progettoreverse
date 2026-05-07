// Function: FUN_00c91cf0
// Address: 00c91cf0
// Size: 706 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00c91e3d) */
/* WARNING: Removing unreachable block (ram,0x00c91e46) */
/* WARNING: Removing unreachable block (ram,0x00c91f63) */
/* WARNING: Removing unreachable block (ram,0x00c91f6c) */
/* WARNING: Removing unreachable block (ram,0x00c91e99) */
/* WARNING: Removing unreachable block (ram,0x00c91ea2) */
/* WARNING: Removing unreachable block (ram,0x00c91ec3) */
/* WARNING: Removing unreachable block (ram,0x00c91ecc) */

ulonglong FUN_00c91cf0(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_48;
  longlong *local_40;
  char local_38;
  
  plVar5 = (longlong *)(param_2 & 0xffffffff);
  cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
  local_48 = 0;
  cVar2 = '\0';
  if ((cVar4 != '\0') && ((char)plVar5 != '\0')) {
    local_48 = *unaff_RSI;
    if (local_48 == 0) {
      cVar2 = '\0';
      local_48 = 0;
    }
    else {
      cVar2 = (char)unaff_RSI[1];
      if (cVar2 != '\0') {
        FUN_00d50b00();
      }
    }
    FUN_00ce9330(1,0x80);
    plVar1 = (longlong *)*unaff_RSI;
    plVar5 = local_40;
    if (plVar1 == local_40) {
      if (((char)unaff_RSI[1] != '\0') || (local_40 == (longlong *)0x0)) goto LAB_00c91dfc;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_00c91df7;
      }
    }
    else {
      lVar3 = unaff_RSI[1];
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RSI = (longlong)local_40;
        if (((char)lVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_00c91df7:
        *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_00c91dfc:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00c91e10;
      }
      *unaff_RSI = (longlong)local_40;
      if (((char)lVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
LAB_00c91e10:
  FUN_00ccb910();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (local_40 == (longlong *)0x0) {
    uVar6 = 0;
    goto LAB_00c91f8d;
  }
  if (*(int *)(unaff_RDI + 0x18) == 0) {
LAB_00c91f12:
    (**(code **)(*local_40 + 0x368))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    uVar6 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
    if ((local_48 != 0) && (cVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x438))(), cVar4 == '\0')
       ) {
      (**(code **)(*(longlong *)*unaff_RSI + 0x408))();
      goto LAB_00c91f83;
    }
  }
  else {
    (**(code **)(*local_40 + 0x388))(*(int *)(unaff_RDI + 0x18),*(undefined8 *)(unaff_RDI + 0x10));
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) goto LAB_00c91f12;
      FUN_00d50b00();
    }
    else if (local_40 == (longlong *)0x0) goto LAB_00c91f12;
    (**(code **)(*local_40 + 0x368))();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x408))();
    FUN_00d50b20();
LAB_00c91f83:
    uVar6 = 0;
  }
  FUN_00d50b20();
LAB_00c91f8d:
  if ((cVar2 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return uVar6 & 0xffffffff;
}


