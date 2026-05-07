// Function: FUN_00e85930
// Address: 00e85930
// Size: 875 bytes
// Class: GNObject
// String references:
//   "GNObject"


undefined8 * FUN_00e85930(void)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong unaff_RDI;
  longlong local_70;
  longlong local_40;
  longlong local_30;
  char local_28;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_000276d0();
  *puVar2 = &DAT_025783f8;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x5b) = 0;
  *(undefined8 *)((longlong)puVar2 + 99) = 0;
  (*DAT_02578410)();
  FUN_00d7e190();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  FUN_00d73b40();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d73c80();
  *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)(unaff_RDI + 0x10);
  bVar1 = *(byte *)(unaff_RDI + 0x18);
  if ((bVar1 & 8) == 0) {
    if ((bVar1 & 0x20) == 0) {
      FUN_00d76d00();
    }
    else {
      FUN_00d76d00();
    }
  }
  else if ((bVar1 & 0x20) == 0) {
    FUN_00d76d00();
  }
  else {
    FUN_00d76d00();
  }
  FUN_00d77e00();
  FUN_00d77e20();
  if ((char)*(byte *)(unaff_RDI + 0x18) < '\0') {
    FUN_00d7e190();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_00d76cb0();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((*(byte *)(unaff_RDI + 0x18) & 0x40) == 0) {
      if (*(longlong *)(unaff_RDI + 0x20) != 0) goto LAB_00e85ada;
LAB_00e85b09:
      local_28 = '\0';
      local_30 = 0;
LAB_00e85b19:
      local_40 = 0;
    }
    else {
      if ((*(longlong *)(unaff_RDI + 0x20) == 0) ||
         (*(longlong *)(*(longlong *)(unaff_RDI + 0x20) + 8) == 0)) goto LAB_00e85b09;
LAB_00e85ada:
      FUN_00d7e190();
      if (local_28 == '\0') {
        if (local_30 == 0) goto LAB_00e85b19;
        FUN_00d50b00();
        local_40 = local_30;
      }
      else {
        local_40 = local_30;
        local_28 = '\0';
      }
    }
    FUN_00d76cb0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((*(byte *)(unaff_RDI + 0x18) & 0x40) == 0) || (*(longlong *)(unaff_RDI + 0x20) == 0)) {
    local_28 = '\0';
    local_30 = 0;
  }
  else {
    FUN_00d7e190();
    if (local_28 != '\0') {
      local_70 = local_30;
      local_28 = '\0';
      goto LAB_00e85c2c;
    }
    if (local_30 != 0) {
      FUN_00d50b00();
      local_70 = local_30;
      goto LAB_00e85c2c;
    }
  }
  local_70 = 0;
LAB_00e85c2c:
  FUN_00d76bf0();
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  puVar2[0xe] = unaff_RDI;
  *(undefined8 **)(unaff_RDI + 0x28) = puVar2;
  return puVar2;
}


