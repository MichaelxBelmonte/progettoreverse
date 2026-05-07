// Function: FUN_00505840
// Address: 00505840
// Size: 2219 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00505840(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar8;
  double dVar9;
  undefined8 uVar10;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (unaff_RSI[0x40] == 0) {
    (**(code **)(*unaff_RSI + 0x640))();
    uVar8 = (**(code **)(*local_40 + 0x580))();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(puVar7 + 0x27) = 0;
    puVar7[0x2e] = 0;
    *(undefined4 *)(puVar7 + 0x2f) = 0;
    puVar7[0x30] = 0;
    *(undefined1 *)(puVar7 + 0x31) = 0;
    puVar7[0x28] = 0;
    puVar7[0x29] = 0;
    *(undefined4 *)(puVar7 + 0x2a) = 0;
    puVar7[0x2b] = 0;
    puVar7[0x2c] = 0;
    *(undefined8 *)((longlong)puVar7 + 0x165) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x18c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x199) = 0;
    puVar7[0x35] = 0;
    puVar7[0x36] = 0;
    puVar7[0x37] = 0;
    puVar7[0x38] = 0;
    *puVar7 = &DAT_02677e10;
    puVar7[2] = &DAT_026788e8;
    puVar7[0x39] = &DAT_02678928;
    *(undefined4 *)((longlong)puVar7 + 500) = 0;
    *(undefined1 *)(puVar7 + 0x3f) = 0;
    puVar7[0x43] = 0;
    puVar7[0x3c] = 0;
    puVar7[0x3d] = 0;
    puVar7[0x3a] = 0;
    puVar7[0x3b] = 0;
    *(undefined1 *)(puVar7 + 0x3e) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x1fc) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x204) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x20c) = 0;
    (*DAT_02677e28)();
    puVar1 = (undefined8 *)unaff_RSI[0x40];
    if (puVar1 == puVar7) {
      FUN_00d50b20();
    }
    else {
      unaff_RSI[0x40] = (longlong)puVar7;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)unaff_RSI[0x40] + 0x4d0))(0,uVar8);
    lVar3 = DAT_02709e50;
    plVar2 = (longlong *)unaff_RSI[0x40];
    if (DAT_02709e50 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar2 + 0xa10))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_026e1800;
    if (DAT_026e1800 != 0) {
      FUN_00d50b00();
    }
    dVar9 = (double)FUN_00e7d6f0();
    uVar6 = (ulonglong)(dVar9 * DAT_023907c0);
    dVar9 = dVar9 * DAT_023907c0 - _DAT_023907c8;
    uVar10 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar10 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    bVar5 = (byte)(((longlong)dVar9 & (longlong)uVar6 >> 0x3f | uVar6) / 3);
    local_50 = lVar3;
    local_48 = '\0';
    FUN_000175c0(uVar10,&local_50);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar2;
      bVar5 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_02709e60;
    if ((plVar2 != (longlong *)0x0 & bVar5) != 0) {
      if (DAT_02709e60 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      local_70 = local_40;
      local_68 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = '\x01';
      FUN_01cef3b0();
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01cef450();
    FUN_01cef4c0();
    FUN_01d0fe80();
    lVar3 = DAT_026f6f70;
    plVar2 = (longlong *)unaff_RSI[0x40];
    if (DAT_026f6f70 != 0) {
      FUN_00d50b00();
    }
    lVar4 = DAT_026deab8;
    if (DAT_026deab8 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar4;
    local_b8 = '\x01';
    local_b0 = 0;
    local_a8 = '\0';
    FUN_00d31230(&local_b0,&local_c0);
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    (**(code **)(*plVar2 + 0x6a8))();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  lVar3 = DAT_026f6fd0;
  if (DAT_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar9 = (double)FUN_00e7d6f0();
  uVar6 = (ulonglong)(dVar9 * DAT_023907c0);
  dVar9 = dVar9 * DAT_023907c0 - _DAT_023907c8;
  uVar10 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
      (uVar10 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  bVar5 = (byte)(((longlong)dVar9 & (longlong)uVar6 >> 0x3f | uVar6) / 3);
  local_50 = lVar3;
  local_48 = '\0';
  FUN_000175c0(uVar10,&local_50);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    local_38 = '\0';
    local_40 = plVar2;
    bVar5 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((plVar2 != (longlong *)0x0 & bVar5) == 0) {
    FUN_01cef410();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      local_88 = '\0';
      local_90 = 0;
      FUN_01cef3b0();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01cef410();
    plVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_02709e60;
    if (plVar2 == (longlong *)0x0) {
      if (DAT_02709e60 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar3;
      local_98 = '\x01';
      FUN_01d51a40();
      local_80 = local_40;
      local_78 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = '\x01';
      FUN_01cef3b0();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar3 = unaff_RSI[0x40];
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


