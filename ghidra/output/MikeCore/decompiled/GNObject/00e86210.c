// Function: FUN_00e86210
// Address: 00e86210
// Size: 899 bytes
// Class: GNObject


undefined8 FUN_00e86210(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0xb0) != 0) goto LAB_00e86231;
  lVar1 = *(longlong *)(unaff_RDI + 0x18);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xb0) == 0)) {
    FUN_00e86210();
  }
  FUN_00d7e190();
  if (local_a8 == '\0') {
    if (local_b0 != 0) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) goto LAB_00e8629f;
LAB_00e862ed:
    local_98 = '\0';
    local_a0 = 0;
LAB_00e86303:
    local_50 = 0;
  }
  else {
    local_a8 = '\0';
    if (lVar1 == 0) goto LAB_00e862ed;
LAB_00e8629f:
    FUN_00d7e190();
    local_48 = 0;
    if (local_98 == '\0') {
      if (local_a0 != 0) {
        FUN_00d50b00();
        local_50 = local_a0;
        goto LAB_00e8631c;
      }
      goto LAB_00e86303;
    }
    local_50 = local_a0;
    local_98 = '\0';
  }
LAB_00e8631c:
  local_48 = '\x01';
  FUN_00c81410(*(undefined8 *)(unaff_RDI + 0x10),&local_50,*(undefined4 *)(unaff_RDI + 8));
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_b0 != 0) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  *(longlong *)(unaff_RDI + 0xb0) = lVar1;
  if ((*(byte *)(unaff_RDI + 0xba) & 1) != 0) {
    FUN_00c83750();
  }
  for (lVar1 = *(longlong *)(unaff_RDI + 0x20);
      (lVar1 != 0 && (*(longlong *)(lVar1 + 8) == unaff_RDI)); lVar1 = *(longlong *)(lVar1 + 0x38))
  {
    lVar2 = FUN_00e85330();
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00c808f0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  for (lVar1 = *(longlong *)(unaff_RDI + 0x28);
      (lVar1 != 0 && (*(longlong *)(lVar1 + 8) == unaff_RDI)); lVar1 = *(longlong *)(lVar1 + 0x30))
  {
    lVar2 = FUN_00e85930();
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00c807f0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c811a0();
  for (lVar1 = *(longlong *)(unaff_RDI + 0xa8); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
    FUN_00d7e190();
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00c822a0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_00e86231:
  return *(undefined8 *)(unaff_RDI + 0xb0);
}


