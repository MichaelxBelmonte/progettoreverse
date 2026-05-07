// Function: FUN_000a9c40
// Address: 000a9c40
// Size: 1176 bytes
// Class: MDNotificationObserver


void FUN_000a9c40(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_30;
  char local_28;
  
  FUN_004b3c80();
  FUN_004b4d40();
  lVar2 = DAT_026daff8;
  if (DAT_026daff8 != 0) {
    FUN_00d50b00();
  }
  FUN_003b6200();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 0x88) = 1;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar4 = &DAT_024cd8a0;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  (*DAT_024cd8b8)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xa0);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xa0) = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar4 = &DAT_024cde70;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  (*DAT_024cde88)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xa8);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xa8) = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)(unaff_RDI + 0xb0) == 0) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_000161a0();
    *puVar4 = &DAT_024f08f0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    (*DAT_024f0908)();
    puVar1 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar1 == puVar4) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0xb0) = puVar4;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar4 = &DAT_02515cb0;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  (*DAT_02515cc8)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x90);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x90) = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar4 = &DAT_024f6e28;
  *(undefined1 *)(puVar4 + 0xe) = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  (*DAT_024f6e40)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0x98);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0x98) = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_000161a0();
  *puVar4 = &DAT_0250a0d8;
  puVar4[0xe] = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  (*DAT_0250a0f0)();
  puVar1 = *(undefined8 **)(unaff_RDI + 0xb8);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(undefined8 **)(unaff_RDI + 0xb8) = puVar4;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  iVar3 = FUN_000030b0();
  if (iVar3 != 2) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_000161a0();
    *puVar4 = &DAT_024c53f8;
    (*DAT_024c5410)();
    puVar1 = *(undefined8 **)(unaff_RDI + 200);
    if (puVar1 == puVar4) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 200) = puVar4;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b00();
  local_70 = DAT_02709de0;
  if (DAT_02709de0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026f6cf0;
  local_68 = '\x01';
  if (DAT_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_000bf690(&local_60,&local_70,&local_50);
  lVar2 = *(longlong *)(unaff_RDI + 0xc0);
  lVar5 = lVar2;
  if (lVar2 == local_30) goto LAB_000aa051;
  lVar5 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar5 = 0;
      goto LAB_000aa006;
    }
    FUN_00d50b00();
    lVar2 = *(longlong *)(unaff_RDI + 0xc0);
    *(longlong *)(unaff_RDI + 0xc0) = local_30;
  }
  else {
    local_28 = '\0';
LAB_000aa006:
    *(longlong *)(unaff_RDI + 0xc0) = lVar5;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar5 = local_30;
  }
LAB_000aa051:
  if ((local_28 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_000aa260();
  return;
}


