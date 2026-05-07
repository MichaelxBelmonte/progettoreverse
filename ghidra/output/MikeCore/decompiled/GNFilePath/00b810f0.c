// Function: FUN_00b810f0
// Address: 00b810f0
// Size: 934 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00b812c1) */
/* WARNING: Removing unreachable block (ram,0x00b812ce) */

undefined8 * FUN_00b810f0(void)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar5;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  undefined8 *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  undefined8 *local_40;
  char local_38;
  
  uVar5 = (**(code **)(*DAT_028a53a8 + 0x368))();
  local_b0 = *unaff_RSI;
  local_a8 = '\0';
  FUN_00b807b0(uVar5,&local_b0);
  if (local_38 == '\0') {
    if (local_40 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 == (undefined8 *)0x0) {
    bVar3 = true;
LAB_00b8131c:
    if (*unaff_RSI != 0) {
      local_40 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_40 = &DAT_02540e88;
      local_40[2] = 0;
      local_40[3] = 0;
      *(undefined1 *)(local_40 + 4) = 0;
      *(undefined8 *)((longlong)local_40 + 0x24) = 0;
      *(undefined8 *)((longlong)local_40 + 0x2c) = 0;
      *(undefined8 *)((longlong)local_40 + 0x34) = 0;
      *(undefined8 *)((longlong)local_40 + 0x3c) = 0;
      *(undefined8 *)((longlong)local_40 + 0x44) = 0;
      *(undefined8 *)((longlong)local_40 + 0x4c) = 0;
      local_40[0xb] = 0;
      local_40[0xc] = 0;
      local_40[0xd] = 0;
      local_40[0xe] = 0;
      local_40[0xf] = 0;
      local_40[0x10] = 0;
      local_40[0x11] = 0;
      local_40[0x12] = 0;
      FUN_00d500e0();
      uVar5 = FUN_00b81b20();
      local_70 = *unaff_RSI;
      local_78 = '\0';
      local_68 = '\0';
      local_80 = local_40;
      FUN_00b80860(uVar5,&local_70);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      bVar3 = true;
      if (local_78 == '\0') {
        bVar2 = true;
      }
      else {
        bVar2 = true;
        if (local_80 != (undefined8 *)0x0) {
          FUN_00d50b20();
          bVar3 = true;
          bVar2 = true;
        }
      }
      goto LAB_00b81416;
    }
    local_40 = (undefined8 *)0x0;
  }
  else {
    (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))();
    puVar1 = (undefined8 *)local_40[0xc];
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    if (local_40 == puVar1) {
      bVar4 = 0;
    }
    else {
      (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))();
      bVar4 = 1;
      if ((local_d8 != 0) && (local_40[0xc] != 0)) {
        FUN_00d50b00();
        (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))();
        local_a0 = local_40[0xc];
        if (local_a0 != 0) {
          FUN_00d50b00();
        }
        local_98 = '\x01';
        bVar4 = (**(code **)(*local_c8 + 0x50))();
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        bVar4 = bVar4 ^ 1;
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar4 != 0) {
      bVar3 = false;
      FUN_00d50b20();
      goto LAB_00b8131c;
    }
    bVar3 = true;
  }
  bVar2 = false;
LAB_00b81416:
  (**(code **)(*DAT_028a53a8 + 0x378))();
  if (bVar2) {
    (**(code **)(*(longlong *)local_40[9] + 0x368))();
    FUN_00e31650();
    FUN_00b822a0();
    (**(code **)(*(longlong *)local_40[9] + 0x378))();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar3) && (local_40 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = local_40;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


