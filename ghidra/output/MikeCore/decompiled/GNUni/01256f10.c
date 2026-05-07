// Function: FUN_01256f10
// Address: 01256f10
// Size: 904 bytes
// Class: GNUni


void FUN_01256f10(void)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_38;
  char local_30;
  
  FUN_00b31790();
  FUN_00d21370();
  FUN_005170f0();
  lVar1 = *(longlong *)(unaff_RDI + 0x98);
  lVar5 = lVar1;
  if (lVar1 != local_38) {
    lVar5 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar5 = 0;
        goto LAB_01256f60;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x98);
      *(longlong *)(unaff_RDI + 0x98) = local_38;
    }
    else {
      local_30 = '\0';
LAB_01256f60:
      *(longlong *)(unaff_RDI + 0x98) = lVar5;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar5 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  FUN_005170f0();
  lVar1 = *(longlong *)(unaff_RDI + 0xa0);
  lVar5 = lVar1;
  if (lVar1 == local_38) goto LAB_0125702e;
  lVar5 = local_38;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar5 = 0;
      goto LAB_01256fe3;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0xa0);
    *(longlong *)(unaff_RDI + 0xa0) = local_38;
  }
  else {
    local_30 = '\0';
LAB_01256fe3:
    *(longlong *)(unaff_RDI + 0xa0) = lVar5;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar5 = local_38;
  }
LAB_0125702e:
  if ((local_30 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 0xa8) = 0;
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined8 *)((longlong)puVar3 + 0x7c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x84) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x6c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x74) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar3 + 100) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x8c) = 0;
  *puVar3 = &DAT_0252ff98;
  puVar3[0x15] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  *(undefined1 *)(puVar3 + 0x14) = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  pcVar2 = DAT_0252ffb0;
  (*DAT_0252ffb0)();
  puVar4 = *(undefined8 **)(unaff_RDI + 200);
  if (puVar4 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 200) = puVar3;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *(undefined8 *)((longlong)puVar3 + 0x7c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x84) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x6c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x74) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar3 + 100) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x8c) = 0;
  *puVar3 = &DAT_0252ff98;
  puVar3[0x15] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  *(undefined1 *)(puVar3 + 0x14) = 0;
  puVar3[0x17] = 0;
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  (*pcVar2)();
  puVar4 = *(undefined8 **)(unaff_RDI + 0xd0);
  if (puVar4 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xd0) = puVar3;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02581c90;
  (*DAT_02581ca8)();
  lVar1 = *(longlong *)(unaff_RDI + 0x108);
  *(undefined8 **)(unaff_RDI + 0x108) = puVar4;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_68 = DAT_027e2660;
  if (DAT_027e2660 != 0) {
    FUN_00d50b00();
  }
  local_60 = '\x01';
  local_58 = 0;
  local_50 = '\0';
  FUN_00d41430(&local_58,&local_68);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}


