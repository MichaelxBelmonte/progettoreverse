// Function: FUN_01a99670
// Address: 01a99670
// Size: 794 bytes
// Class: GNString


ulonglong FUN_01a99670(void)

{
  bool bVar1;
  undefined8 in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_3c = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  if (*(longlong *)(unaff_RDI + 0x1e0) == 0) {
LAB_01a997ab:
    bVar5 = 0;
    bVar1 = false;
    uVar2 = 0;
LAB_01a997c5:
    lVar7 = *unaff_RSI;
    lVar4 = *(longlong *)(unaff_RDI + 0x1e0);
    uVar6 = uVar2;
    if (lVar4 != lVar7) {
LAB_01a997d8:
      local_38 = uVar2;
      if (lVar7 != 0) {
        uVar2 = FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x1e0) = lVar7;
      bVar8 = lVar4 != 0;
      uVar6 = local_38;
      lVar4 = lVar7;
      if (bVar8) {
        uVar2 = FUN_00d50b20();
        lVar4 = *(longlong *)(unaff_RDI + 0x1e0);
        uVar6 = local_38;
      }
    }
  }
  else {
    local_38 = 0;
    uVar2 = FUN_00cafdf0();
    if (uVar2 == 0) goto LAB_01a997ab;
    local_38 = 0;
    FUN_00d50b00();
    local_78 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x1c8) + 0x10))();
    FUN_00d50b00();
    local_78 = '\x01';
    local_68 = 0;
    local_70 = *(longlong *)(unaff_RDI + 0x1e0);
    local_80 = (longlong *)(unaff_RDI + 0x1c8);
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    local_a0 = 0;
    local_98 = '\0';
    FUN_00cbadd0(&local_a0,&local_70);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 == '\0') || (local_80 == (longlong *)0x0)) {
      bVar5 = 1;
      local_3c = 0;
      bVar1 = true;
      goto LAB_01a997c5;
    }
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
    bVar5 = 1;
    local_3c = 0;
    bVar1 = true;
    lVar7 = *unaff_RSI;
    lVar4 = *(longlong *)(unaff_RDI + 0x1e0);
    uVar6 = uVar2;
    if (lVar4 != lVar7) goto LAB_01a997d8;
  }
  local_38 = uVar6;
  if (lVar4 == 0) goto LAB_01a99969;
  uVar2 = FUN_00cafdf0();
  if (local_38 == uVar2) {
    uVar3 = (ulonglong)(uVar2 != 0);
    uVar6 = local_38;
    if (((byte)local_3c & uVar2 != 0) == 1) {
      uVar3 = FUN_00d50b00();
      goto LAB_01a99845;
    }
  }
  else {
    if (uVar2 != 0) {
      FUN_00d50b00();
    }
    uVar3 = (ulonglong)(local_38 != 0);
    if ((bool)(bVar5 & local_38 != 0)) {
      local_38 = uVar2;
      uVar3 = FUN_00d50b20();
LAB_01a99845:
      bVar1 = true;
      uVar6 = local_38;
    }
    else {
      bVar1 = true;
      uVar6 = uVar2;
    }
  }
  if (uVar6 == 0) {
    return uVar3;
  }
  local_58 = 0;
  local_38 = uVar6;
  (**(code **)(*(longlong *)(unaff_RDI + 0x1c8) + 0x10))();
  FUN_00d50b00();
  local_58 = '\x01';
  local_48 = 0;
  local_50 = *(longlong *)(unaff_RDI + 0x1e0);
  local_60 = (longlong *)(unaff_RDI + 0x1c8);
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  uVar2 = FUN_00cbad30(&local_90,&local_50,8);
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    uVar2 = FUN_00d50b20();
  }
LAB_01a99969:
  if ((bVar1) && (uVar6 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  return uVar2;
}


