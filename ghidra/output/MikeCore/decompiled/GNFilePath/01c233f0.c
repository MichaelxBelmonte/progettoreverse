// Function: FUN_01c233f0
// Address: 01c233f0
// Size: 550 bytes
// Class: GNFilePath


void FUN_01c233f0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong *unaff_RDI;
  longlong lVar2;
  bool bVar3;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar2 = DAT_027e9298;
  if (*param_2 == 0) {
    if (DAT_027e9298 != 0) {
      FUN_00d50b00();
    }
    bVar3 = lVar2 != 0;
LAB_01c2356b:
    if (lVar2 == 0) {
      bVar1 = true;
    }
    else {
      local_60 = '\0';
      local_68 = lVar2;
      FUN_01d51a40();
      lVar2 = local_38;
      if (local_30 == '\0') {
        if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        *unaff_RDI = lVar2;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        bVar1 = false;
        goto joined_r0x01c235b9;
      }
      bVar1 = false;
    }
  }
  else {
    FUN_01c1ada0();
    lVar2 = local_38;
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_01c1ada0();
      local_78 = DAT_027e92a0;
      if (DAT_027e92a0 != 0) {
        FUN_00d50b00();
      }
      local_70 = '\x01';
      FUN_00d8ede0();
      local_48 = local_58;
      local_40 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_40 = '\x01';
      FUN_00d98db0(&local_48,&local_78,0);
      lVar2 = local_38;
      if (local_38 == 0) {
        lVar2 = 0;
        bVar3 = false;
      }
      else if (local_30 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_30 = '\0';
        bVar3 = true;
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01c2356b;
    }
    bVar1 = true;
    bVar3 = false;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
joined_r0x01c235b9:
  if ((bVar3) && (!bVar1)) {
    FUN_00d50b20();
  }
  return;
}


