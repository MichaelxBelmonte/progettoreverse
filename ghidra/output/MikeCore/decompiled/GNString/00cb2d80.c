// Function: FUN_00cb2d80
// Address: 00cb2d80
// Size: 803 bytes
// Class: GNString


void FUN_00cb2d80(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
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
  longlong local_40;
  char local_38;
  
  *(undefined1 *)(unaff_RDI + 0x100) = 1;
  if (((*(longlong *)(unaff_RDI + 0x90) != 0) && (*(char *)(unaff_RDI + 0xe0) != '\0')) &&
     (*(int *)(unaff_RDI + 0xd0) == 0)) {
    lVar1 = *(longlong *)(unaff_RDI + 0x88);
    if (lVar1 == 0) {
      *(undefined1 *)(unaff_RDI + 0x100) = 0;
      return;
    }
    if (*(int *)(lVar1 + 0x18) < 0) {
      lVar2 = *(longlong *)(lVar1 + 0x10);
      FUN_00d50b00();
      if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x10) == 0) {
        *(undefined4 *)(lVar1 + 0x18) = 0;
      }
      else {
        FUN_00c8d630();
        *(undefined4 *)(lVar1 + 0x18) = 0;
      }
      FUN_00cad910();
      puVar3 = local_80;
      lVar4 = *(longlong *)(lVar1 + 0x10);
      if ((undefined8 *)lVar4 == local_80) {
        if ((local_78 != '\0') && (lVar4 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((local_78 == '\0') && (local_80 != (undefined8 *)0x0)) {
          FUN_00d50b00();
          lVar4 = *(longlong *)(lVar1 + 0x10);
        }
        *(undefined8 **)(lVar1 + 0x10) = puVar3;
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_00cb2bc0();
    }
    else {
      FUN_00cb32e0();
    }
  }
  FUN_00cb1e70();
  puVar3 = local_80;
  if ((((local_78 == '\0') && (local_80 != (undefined8 *)0x0)) && (FUN_00d50b00(), local_78 != '\0')
      ) && (local_80 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d7a2d0();
  FUN_00d403d0();
  local_a0 = DAT_027ebc50;
  if (DAT_027ebc50 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_00d50b00();
  lVar1 = DAT_027edfd0;
  if (DAT_027edfd0 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar1;
  FUN_00083ea0(2,&local_b8);
  FUN_000b4da0();
  local_40 = local_90;
  local_38 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_38 = '\x01';
  FUN_00d40470(&local_40,&stack0xffffffffffffffb0,3,3);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
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
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 0x100) = 0;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}


