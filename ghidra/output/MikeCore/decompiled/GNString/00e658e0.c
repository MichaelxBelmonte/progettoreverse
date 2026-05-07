// Function: FUN_00e658e0
// Address: 00e658e0
// Size: 863 bytes
// Class: GNString


void FUN_00e658e0(undefined8 param_1)

{
  longlong lVar1;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar2;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_78;
  char local_70;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (*unaff_RSI == 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x48) == 0) {
    lVar2 = 0;
    if (*(longlong *)(unaff_RDI + 0x38) != 0) goto LAB_00e65a11;
LAB_00e65a2e:
    lVar1 = *unaff_RSI;
    if (lVar2 != lVar1) {
LAB_00e65a43:
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x38) = lVar1;
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d403d0();
    FUN_00d50b00();
    local_b8 = DAT_027ebc70;
    if (DAT_027ebc70 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    local_70 = 0;
    lVar2 = *(longlong *)(unaff_RDI + 0x48);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    local_78 = lVar2;
    FUN_00d41040(&local_78,&local_b8);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e34b70();
    if (*(longlong *)(unaff_RDI + 0x48) != 0) {
      *(undefined8 *)(unaff_RDI + 0x48) = 0;
      FUN_00d50b20();
    }
LAB_00e65a11:
    if (*(longlong *)(unaff_RDI + 0x38) != 0) {
      *(undefined8 *)(unaff_RDI + 0x38) = 0;
      FUN_00d50b20();
      lVar2 = *(longlong *)(unaff_RDI + 0x38);
      goto LAB_00e65a2e;
    }
    lVar2 = 0;
    lVar1 = *unaff_RSI;
    if (lVar1 != 0) goto LAB_00e65a43;
  }
  FUN_00d50b00();
  FUN_00dcce00(param_1);
  lVar2 = *(longlong *)(unaff_RDI + 0x48);
  lVar1 = lVar2;
  if (lVar2 == local_38) goto LAB_00e65ae8;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar1 = 0;
      goto LAB_00e65aa3;
    }
    FUN_00d50b00();
    lVar2 = *(longlong *)(unaff_RDI + 0x48);
    *(longlong *)(unaff_RDI + 0x48) = local_38;
    lVar1 = local_38;
  }
  else {
    local_30 = '\0';
    lVar1 = local_38;
LAB_00e65aa3:
    *(longlong *)(unaff_RDI + 0x48) = lVar1;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar1 = local_38;
  }
LAB_00e65ae8:
  if ((local_30 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_a8 = DAT_027ebc70;
  if (DAT_027ebc70 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  local_40 = 0;
  lVar2 = *(longlong *)(unaff_RDI + 0x48);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  local_48 = lVar2;
  FUN_00d41430(&local_48,&local_a8);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = *(longlong *)(unaff_RDI + 0x48);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_90 = '\x01';
  local_98 = lVar2;
  FUN_00e37890();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  return;
}


