// Function: FUN_00bb9440
// Address: 00bb9440
// Size: 1125 bytes
// Class: GNSoundFileChunk


void FUN_00bb9440(void)

{
  bool bVar1;
  undefined8 *puVar2;
  int unaff_ESI;
  undefined8 *unaff_RDI;
  undefined8 *puVar3;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined8 *local_40;
  char local_38;
  
  if (unaff_ESI == 6) {
    FUN_00d46530();
    FUN_00d46530();
    FUN_00d46530();
    local_c0 = local_a0;
    local_b8 = local_90;
    FUN_002bd7b0(&local_b8,&local_c0,3);
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
    local_80 = (undefined8 *)&DAT_025df260;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_80 = (undefined8 *)&DAT_0253d630;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar1 || puVar3 == (undefined8 *)0x0) goto LAB_00bb96b1;
  }
  else {
    FUN_00d46530();
    FUN_00d46530();
    FUN_00d46530();
    local_c0 = local_a0;
    local_b8 = local_90;
    FUN_002bd7b0(&local_b8,&local_c0,3);
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
        if ((local_38 == '\0') || (local_40 == (undefined8 *)0x0)) goto LAB_00bb96f3;
        FUN_00d50b20();
      }
      else {
        local_38 = '\0';
      }
      bVar1 = true;
    }
LAB_00bb96f3:
    local_80 = (undefined8 *)&DAT_025df260;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_80 = (undefined8 *)&DAT_0253d630;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_ESI == 2) {
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
      local_80 = puVar2;
      local_78 = '\0';
      FUN_00d21140();
      if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
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
      local_80 = puVar2;
      local_78 = '\0';
      FUN_00d21140();
      if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar1 || puVar3 == (undefined8 *)0x0) goto LAB_00bb96b1;
  }
  FUN_00d50b00();
LAB_00bb96b1:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


