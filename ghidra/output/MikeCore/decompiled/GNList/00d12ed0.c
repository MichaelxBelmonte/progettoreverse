// Function: FUN_00d12ed0
// Address: 00d12ed0
// Size: 1341 bytes
// Class: GNList
// String references:
//   " %@"
//   "%@"


/* WARNING: Removing unreachable block (ram,0x00d1313a) */
/* WARNING: Removing unreachable block (ram,0x00d13146) */

undefined8 * FUN_00d12ed0(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RDI;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 *local_d8;
  char local_d0;
  undefined8 *local_c8;
  char local_c0;
  undefined8 *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  
  FUN_00d30620();
  puVar3 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 == (undefined8 *)0x0) goto LAB_00d12f29;
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
LAB_00d12f64:
    local_58 = puVar3;
  }
  else {
    local_58 = local_50;
    if (local_50 == (undefined8 *)0x0) {
LAB_00d12f29:
      FUN_00d30660();
      local_58 = local_50;
      if (local_50 == (undefined8 *)0x0) goto LAB_00d12f64;
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_00d13800();
  puVar3 = local_50;
  lVar1 = DAT_0277ca30;
  if ((char)local_48 == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00d12fa8;
    }
  }
  else if (local_50 != (undefined8 *)0x0) {
LAB_00d12fa8:
    FUN_00d30ec0();
    puVar6 = local_50;
    puVar5 = DAT_0277ca28;
    if ((char)local_48 == '\0') {
      if (local_50 == (undefined8 *)0x0) goto LAB_00d130ba;
      FUN_00d50b00();
      if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_50 == (undefined8 *)0x0) {
LAB_00d130ba:
      if (DAT_0277ca28 != (undefined8 *)0x0) {
        FUN_00d50b00();
        puVar6 = puVar5;
      }
    }
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar4 = (longlong)&DAT_0257fb38;
    plVar4[2] = 0;
    plVar4[3] = 0;
    plVar4[4] = 0;
    (*DAT_0257fb50)();
    (**(code **)(*plVar4 + 0x3c8))();
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_025795a8;
    uVar8 = (*DAT_025795c0)();
    local_d8 = puVar3;
    local_d0 = '\0';
    uVar8 = (**(code **)(*plVar4 + 0x388))(uVar8,&local_d8);
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (local_68 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_40 = local_68;
    local_38 = '\x01';
    FUN_00d94d80(uVar8,&local_50);
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d30ef0();
    puVar7 = local_50;
    if (local_50 == puVar6) {
LAB_00d1327f:
      puVar7 = puVar6;
      if ((char)local_48 != '\0') {
LAB_00d13285:
        if (local_50 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if ((char)local_48 == '\0') {
        if (local_50 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
        if (puVar6 != (undefined8 *)0x0) {
          FUN_00d50b20();
          puVar6 = puVar7;
          goto LAB_00d1327f;
        }
        if ((char)local_48 == '\0') goto LAB_00d13298;
        goto LAB_00d13285;
      }
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
LAB_00d13298:
    puVar6 = DAT_02800168;
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_02800168 == (undefined8 *)0x0) {
        puVar7 = (undefined8 *)0x0;
      }
      else {
        FUN_00d50b00();
        puVar7 = puVar6;
      }
    }
    local_c0 = '\0';
    local_c8 = puVar7;
    uVar8 = (**(code **)(*plVar4 + 0x3c8))();
    if ((local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    local_b8 = puVar3;
    local_b0 = '\0';
    uVar8 = (**(code **)(*plVar4 + 0x388))(uVar8,&local_b8);
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (local_68 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_40 = local_68;
    local_38 = '\x01';
    FUN_00d94d80(uVar8,&local_50);
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_00d133d8;
  }
  if (DAT_0277ca30 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_0277ca38;
  local_a8 = lVar1;
  local_a0 = '\x01';
  if (DAT_0277ca38 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  local_88 = 0;
  local_80 = '\0';
  FUN_00d31230(&local_88,&local_98);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
LAB_00d133d8:
  if (local_58 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


