// Function: FUN_00099fa0
// Address: 00099fa0
// Size: 664 bytes
// Class: GNString


void FUN_00099fa0(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_28;
  char local_20;
  
  FUN_00d50100();
  FUN_00d46530();
  lVar1 = *(longlong *)(unaff_RDI + 0xb8);
  lVar4 = lVar1;
  if (lVar1 != local_28) {
    lVar4 = local_28;
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar4 = 0;
        goto LAB_00099fdb;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0xb8);
      *(longlong *)(unaff_RDI + 0xb8) = local_28;
    }
    else {
      local_20 = '\0';
LAB_00099fdb:
      *(longlong *)(unaff_RDI + 0xb8) = lVar4;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  lVar1 = *(longlong *)(unaff_RDI + 0xc0);
  *(longlong **)(unaff_RDI + 0xc0) = plVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *(longlong *)(unaff_RDI + 0xd0);
  *(undefined8 **)(unaff_RDI + 0xd0) = puVar3;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  lVar1 = *(longlong *)(unaff_RDI + 200);
  *(longlong **)(unaff_RDI + 200) = plVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_68 = DAT_026d8e30;
  if (DAT_026d8e30 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026d8e38;
  local_60 = '\x01';
  if (DAT_026d8e38 != 0) {
    FUN_00d50b00();
  }
  local_58 = lVar1;
  local_50 = '\x01';
  FUN_00d50b00();
  FUN_000bf690(&local_58,&local_68,&stack0xffffffffffffffc8);
  lVar1 = *(longlong *)(unaff_RDI + 0xe0);
  lVar4 = lVar1;
  if (lVar1 == local_28) goto LAB_0009a1c1;
  lVar4 = local_28;
  if (local_20 == '\0') {
    if (local_28 == 0) {
      lVar4 = 0;
      goto LAB_0009a176;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0xe0);
    *(longlong *)(unaff_RDI + 0xe0) = local_28;
  }
  else {
    local_20 = '\0';
LAB_0009a176:
    *(longlong *)(unaff_RDI + 0xe0) = lVar4;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar4 = local_28;
  }
LAB_0009a1c1:
  if ((local_20 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  return;
}


