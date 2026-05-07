// Function: FUN_01c67190
// Address: 01c67190
// Size: 1040 bytes
// Class: GNFilePath


void FUN_01c67190(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong unaff_RDI;
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined1 local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(int *)(unaff_RDI + 0x1c8) == 0) {
    *(undefined1 *)(unaff_RDI + 0x2e0) = 0;
    plVar1 = (longlong *)(unaff_RDI + 0x2a0);
    lVar4 = *(longlong *)(unaff_RDI + 0x170);
    lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 0x2a0) + 0x30);
    if (lVar4 != lVar2) {
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(unaff_RDI + 0x170) = lVar2;
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    lVar4 = *(longlong *)(*plVar1 + 0x20);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_01c51df0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x160) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar4 = *(longlong *)(unaff_RDI + 0x160);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      local_48 = 0;
      lVar2 = *(longlong *)(*plVar1 + 0x20);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\x01';
      local_50 = lVar2;
      FUN_01c87b20();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    lVar4 = *(longlong *)(*plVar1 + 0x10);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_01c67800();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    lVar4 = *plVar1;
    lVar2 = *(longlong *)(lVar4 + 0x18);
    if (lVar2 != 0) {
      FUN_00d50b00();
      lVar4 = *plVar1;
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    FUN_01c44d20();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = 1;
    uVar5 = FUN_00e7bdb0();
    FUN_01c45410(uVar5,local_80);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    local_58 = '\0';
    local_60 = 0;
    (**(code **)(**(longlong **)(*plVar1 + 0x30) + 0x3f8))();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (*(longlong *)(unaff_RDI + 0x2b0) != 0) {
      *(undefined8 *)(unaff_RDI + 0x2b0) = 0;
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x2b8) != 0) {
      *(undefined8 *)(unaff_RDI + 0x2b8) = 0;
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0x2c0) != 0) {
      *(undefined8 *)(unaff_RDI + 0x2c0) = 0;
      FUN_00d50b20();
    }
    lVar4 = *(longlong *)(*(longlong *)(unaff_RDI + 0x2a0) + 0x18);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    lVar2 = *(longlong *)(unaff_RDI + 0x188);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_01c44d20();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_68 = 1;
    FUN_01c44700();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  lVar4 = *(longlong *)(*(longlong *)(unaff_RDI + 0x2a0) + 0x18);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_01c62c70();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_01c67ce0();
  return;
}


