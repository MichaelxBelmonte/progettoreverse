// Function: FUN_01d46b40
// Address: 01d46b40
// Size: 507 bytes
// Class: Unknown


void FUN_01d46b40(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_40;
  char local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02680ed8;
  *(undefined4 *)((longlong)puVar5 + 0x54) = 0;
  *(undefined8 *)((longlong)puVar5 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x24) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x2c) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x49) = 0;
  FUN_00d500e0();
  lVar1 = *(longlong *)(*unaff_RSI + 0x18);
  lVar6 = puVar5[3];
  if (lVar6 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    puVar5[3] = lVar1;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(longlong *)(*unaff_RSI + 0x20);
  lVar6 = puVar5[4];
  if (lVar6 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    puVar5[4] = lVar1;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  uVar2 = *(undefined4 *)(lVar1 + 0x34);
  uVar3 = *(undefined4 *)(lVar1 + 0x38);
  uVar4 = *(undefined4 *)(lVar1 + 0x3c);
  *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(lVar1 + 0x30);
  *(undefined4 *)((longlong)puVar5 + 0x34) = uVar2;
  *(undefined4 *)(puVar5 + 7) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = uVar4;
  *(undefined4 *)(puVar5 + 8) = *(undefined4 *)(*unaff_RSI + 0x40);
  *(undefined4 *)((longlong)puVar5 + 0x44) = *(undefined4 *)(*unaff_RSI + 0x44);
  *(undefined4 *)(puVar5 + 9) = *(undefined4 *)(*unaff_RSI + 0x48);
  *(undefined4 *)((longlong)puVar5 + 0x4c) = *(undefined4 *)(*unaff_RSI + 0x4c);
  *(undefined1 *)(puVar5 + 10) = *(undefined1 *)(*unaff_RSI + 0x50);
  *(undefined4 *)((longlong)puVar5 + 0xc) = *(undefined4 *)(*unaff_RSI + 0xc);
  *(undefined4 *)((longlong)puVar5 + 0x54) = *(undefined4 *)(*unaff_RSI + 0x54);
  lVar1 = *(longlong *)(*unaff_RSI + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01eb15c0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)(*unaff_RSI + 0x28) == 0) goto LAB_01d46d1d;
  FUN_01d38ce0();
  lVar1 = puVar5[5];
  lVar6 = lVar1;
  if (lVar1 != local_40) {
    lVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar6 = 0;
        goto LAB_01d46ccf;
      }
      FUN_00d50b00();
      lVar1 = puVar5[5];
      puVar5[5] = local_40;
    }
    else {
      local_38 = '\0';
LAB_01d46ccf:
      puVar5[5] = lVar6;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
LAB_01d46d1d:
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


