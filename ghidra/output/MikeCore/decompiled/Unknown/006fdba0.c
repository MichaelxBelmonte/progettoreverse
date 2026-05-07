// Function: FUN_006fdba0
// Address: 006fdba0
// Size: 1257 bytes
// Class: Unknown


void FUN_006fdba0(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  FUN_01e53f10();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02727ad0;
  if (DAT_02727ad0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026d8aa0;
  local_b8 = lVar1;
  local_b0 = '\x01';
  if (DAT_026d8aa0 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar3;
  local_a0 = '\x01';
  FUN_01e561b0();
  local_78 = local_48;
  local_70 = 0;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_70 = '\x01';
  FUN_000bf690(&local_a8,&local_b8,&local_78);
  lVar1 = unaff_RDI[0x1c];
  lVar3 = lVar1;
  if (lVar1 == local_38) goto LAB_006fdcdc;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar3 = 0;
      goto LAB_006fdc8e;
    }
    FUN_00d50b00();
    lVar1 = unaff_RDI[0x1c];
    unaff_RDI[0x1c] = local_38;
    lVar3 = local_38;
  }
  else {
    local_30 = '\0';
    lVar3 = local_38;
LAB_006fdc8e:
    unaff_RDI[0x1c] = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_38;
  }
LAB_006fdcdc:
  if ((local_30 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_006f3f00();
  if (local_38 != 0) {
    FUN_006f3f00();
    (**(code **)(*local_68 + 0x628))();
    lVar1 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_60 != '\0') {
      FUN_00d50b20();
    }
    if (local_30 != '\0') {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      (**(code **)(*unaff_RDI + 0x5d8))();
      FUN_006f3f00();
      (**(code **)(*local_c8 + 0x628))();
      local_58 = local_68;
      local_50 = 0;
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_50 = '\x01';
      FUN_0064e830();
      lVar1 = local_38;
      if (local_30 == '\0') {
        if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_c0 != '\0') {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        cVar2 = FUN_006e2020();
        lVar1 = unaff_RDI[2];
        if (cVar2 == '\0') {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_01bf0f50();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_01bf0f50();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
    }
  }
  if (unaff_RDI[2] != 0) {
    FUN_00d50b00();
    lVar1 = unaff_RDI[2];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01be8230();
    lVar3 = local_38;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar3 != 0) {
      lVar1 = unaff_RDI[2];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01be8230();
      local_90 = 0;
      local_98 = (longlong *)(unaff_RDI[0x11] + 0x10);
      if (unaff_RDI[0x11] == 0) {
        local_98 = (longlong *)0x0;
      }
      else {
        (**(code **)(*local_98 + 0x10))();
        FUN_00d50b00();
      }
      local_90 = '\x01';
      FUN_01a34e60();
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        (**(code **)(*local_98 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined4 *)(unaff_RDI + 0x1d) = 1;
  return;
}


