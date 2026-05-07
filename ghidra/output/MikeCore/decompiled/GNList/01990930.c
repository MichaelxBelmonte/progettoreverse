// Function: FUN_01990930
// Address: 01990930
// Size: 1251 bytes
// Class: GNList


void FUN_01990930(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *unaff_RDI;
  bool bVar4;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  (**(code **)(*unaff_RDI + 0x978))();
  plVar2 = local_30;
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*unaff_RDI + 0x978))();
    plVar2 = local_30;
    local_a8 = 0;
    local_b0 = unaff_RDI[0x27];
    if (local_b0 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (unaff_RDI[0x7f] == 0) {
    (**(code **)(*unaff_RDI + 0xec0))();
  }
  *(undefined4 *)(unaff_RDI + 0x5a) = 0xffffffff;
  *(undefined4 *)((longlong)unaff_RDI + 0x2d4) = 0xffffffff;
  *(undefined4 *)(unaff_RDI + 0x5b) = 0xffffffff;
  *(undefined4 *)((longlong)unaff_RDI + 0x2dc) = 0xffffffff;
  if (unaff_RDI[0x80] != 0) {
    local_98 = 0;
    lVar1 = unaff_RDI[0x7f];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    local_a0 = lVar1;
    FUN_01e26eb0();
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_026fb948;
  plVar2 = (longlong *)unaff_RDI[0x81];
  if (plVar2 != (longlong *)0x0) {
    if (DAT_026fb948 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0x948))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    FUN_01a17960();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar1 = unaff_RDI[0x84];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0xec8))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
              *unaff_RDI + 0x40))();
  (**(code **)(&DAT_000014b8 + *unaff_RDI))();
  uVar3 = FUN_01481010();
  (**(code **)(&DAT_000014c0 + *unaff_RDI))(*unaff_RDI,uVar3);
  (**(code **)(*unaff_RDI + 0x970))();
  if (local_30 == (longlong *)0x0) {
    bVar4 = false;
  }
  else {
    (**(code **)(*unaff_RDI + 0x970))();
    FUN_0197cd20();
    bVar4 = local_40 != 0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar4) {
    (**(code **)(*unaff_RDI + 0x970))();
    FUN_0197cd20();
    (**(code **)(*local_30 + 0x928))((int)unaff_RDI[0x6b]);
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e42030();
  if (local_30 == (longlong *)0x0) {
    bVar4 = false;
  }
  else {
    FUN_01e42030();
    FUN_01d8c6e0();
    bVar4 = local_40 != 0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar4) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_c0 = DAT_027e1378;
    if (DAT_027e1378 != 0) {
      FUN_00d50b00();
    }
    local_b8 = '\x01';
    FUN_01e42030();
    FUN_01d8c6e0();
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    FUN_00d41430(&local_60,&local_c0);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}


