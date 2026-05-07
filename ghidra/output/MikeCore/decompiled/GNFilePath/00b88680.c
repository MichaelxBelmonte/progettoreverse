// Function: FUN_00b88680
// Address: 00b88680
// Size: 1499 bytes
// Class: GNFilePath


void FUN_00b88680(void)

{
  bool bVar1;
  undefined8 *puVar2;
  uint unaff_ESI;
  undefined8 *unaff_RDI;
  undefined8 *puVar3;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  char local_d8;
  undefined8 *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined8 *local_40;
  char local_38;
  
  if (unaff_ESI == 1) {
    FUN_00d46530();
    FUN_00d46530();
    FUN_00d46530();
    FUN_00d46530();
    local_80 = local_70;
    local_78 = local_60;
    local_f0 = local_50;
    local_e8 = local_e0;
    FUN_00b8f440(&local_f0,&local_78,&local_e8,4);
    FUN_00295b80();
    puVar3 = local_40;
    if (local_40 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    FUN_007f76c0();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
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
LAB_00b88c27:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((bVar1) || (puVar3 == (undefined8 *)0x0)) goto LAB_00b88c3e;
  }
  else {
    if ((unaff_ESI != 9) && (unaff_ESI != 6)) {
      FUN_00d46530();
      FUN_00d46530();
      FUN_00d46530();
      local_e0 = local_70;
      local_80 = local_60;
      local_78 = local_50;
      FUN_002bd7b0(&local_78,&local_80,3);
      FUN_00295b80();
      puVar3 = local_40;
      if (local_40 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
        bVar1 = false;
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar1 = true;
          if ((local_38 == '\0') || (local_40 == (undefined8 *)0x0)) goto LAB_00b889cc;
          FUN_00d50b20();
        }
        else {
          local_38 = '\0';
        }
        bVar1 = true;
      }
LAB_00b889cc:
      local_d0 = (undefined8 *)&DAT_025df260;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      local_d0 = (undefined8 *)&DAT_0253d630;
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      local_d0 = &DAT_024c5048;
      if ((local_b8 != '\0') && (local_c0 != 0)) {
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
      if ((unaff_ESI & 0xfffffffe) == 2) {
        FUN_00d46530();
        puVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_d0 = puVar2;
        local_c8 = '\0';
        FUN_00d21140();
        if ((local_c8 != '\0') && (local_d0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar2 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d46530();
        puVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_d0 = puVar2;
        local_c8 = '\0';
        FUN_00d21140();
        if ((local_c8 != '\0') && (local_d0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar2 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_00b88c27;
    }
    FUN_00d46530();
    FUN_00d46530();
    FUN_00d46530();
    local_e0 = local_70;
    local_80 = local_60;
    local_78 = local_50;
    FUN_002bd7b0(&local_78,&local_80,3);
    FUN_00295b80();
    puVar3 = local_40;
    if (local_40 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    local_d0 = (undefined8 *)&DAT_025df260;
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    local_d0 = (undefined8 *)&DAT_0253d630;
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    local_d0 = &DAT_024c5048;
    if ((local_b8 != '\0') && (local_c0 != 0)) {
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
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar1 || puVar3 == (undefined8 *)0x0) goto LAB_00b88c3e;
  }
  FUN_00d50b00();
LAB_00b88c3e:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


