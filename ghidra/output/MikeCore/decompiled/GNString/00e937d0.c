// Function: FUN_00e937d0
// Address: 00e937d0
// Size: 1703 bytes
// Class: GNString
// String references:
//   "%@%@..."


void FUN_00e937d0(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *unaff_RDI;
  longlong local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  undefined8 *local_118;
  char local_110;
  undefined8 *local_108;
  char local_100;
  undefined8 *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  undefined8 *local_d8;
  char local_d0;
  undefined8 *local_c8;
  char local_c0;
  undefined8 *local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  undefined8 *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined8 *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  undefined8 *local_48;
  char local_40;
  undefined8 *local_38;
  
  local_80 = '\0';
  local_88 = 0;
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  pcVar1 = DAT_02572370;
  (*DAT_02572370)();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_02572358;
  (*pcVar1)();
  local_110 = '\0';
  local_100 = '\0';
  local_118 = puVar7;
  local_108 = puVar8;
  cVar5 = (**(code **)(*unaff_RDI + 0x3b8))(&local_108,&local_118);
  if ((local_100 != '\0') && (local_108 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') goto LAB_00e93e24;
  *(undefined1 *)((longlong)unaff_RDI + 0x35) = 1;
  lVar2 = DAT_02789568;
  if (local_88 == 0) {
    if (DAT_02789568 != 0) {
      FUN_00d50b00();
    }
    lVar3 = local_88;
    if (local_88 == lVar2) {
      if ((local_80 != '\0') || (lVar2 == 0)) {
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        goto LAB_00e9390e;
      }
    }
    else {
      local_88 = lVar2;
      if ((local_80 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
    }
    local_80 = '\x01';
  }
LAB_00e9390e:
  puVar9 = DAT_02789570;
  if (*(int *)((longlong)puVar7 + 0xc) == 0) {
    if (DAT_02789570 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    local_78 = puVar9;
    local_70 = '\0';
    FUN_00d235a0();
    if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar9 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  local_f0 = '\0';
  local_f8 = puVar7;
  FUN_00d92220();
  local_b8 = local_48;
  local_b0 = 0;
  if (local_40 == '\0') {
    if (local_48 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_b0 = '\x01';
  FUN_00d95130();
  puVar7 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (undefined8 *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_b0 != '\0') && (local_b8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar7 != (undefined8 *)0x0) {
    local_38 = puVar7;
    iVar6 = FUN_00d8c7a0();
    if (0x100 < iVar6) {
      local_70 = '\0';
      local_78 = puVar7;
      FUN_00d21140();
      if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d97ce0();
      FUN_00d92220();
      local_140 = local_128;
      FUN_00083ea0(2,&local_140);
      FUN_00d8cb40();
      puVar9 = local_48;
      puVar4 = puVar7;
      if (puVar7 == local_48) {
joined_r0x00e93b3f:
        puVar9 = puVar4;
        if ((local_40 != '\0') && (puVar7 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_40 == '\0') {
          if (local_48 != (undefined8 *)0x0) {
            local_38 = puVar7;
            FUN_00d50b00();
          }
          local_38 = puVar9;
          FUN_00d50b20();
          puVar4 = puVar9;
          puVar7 = local_48;
          goto joined_r0x00e93b3f;
        }
        local_38 = local_48;
        FUN_00d50b20();
        local_40 = '\0';
      }
      local_78 = (undefined8 *)&DAT_0253d630;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_78 = &DAT_024c5048;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      puVar7 = puVar9;
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  local_e8 = local_88;
  local_e0 = '\0';
  local_d0 = '\0';
  local_d8 = puVar7;
  local_38 = puVar7;
  FUN_00e97060(DAT_025908a0,&local_d8);
  puVar7 = (undefined8 *)unaff_RDI[7];
  puVar9 = puVar7;
  if (puVar7 != local_78) {
    if (local_70 == '\0') {
      if (local_78 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x0;
        goto LAB_00e93c45;
      }
      FUN_00d50b00();
      puVar7 = (undefined8 *)unaff_RDI[7];
      unaff_RDI[7] = (longlong)local_78;
      puVar9 = local_78;
    }
    else {
      local_70 = '\0';
      puVar9 = local_78;
LAB_00e93c45:
      unaff_RDI[7] = (longlong)puVar9;
    }
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00d50b20();
      puVar9 = local_78;
    }
  }
  if ((local_70 != '\0') && (puVar9 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)((longlong)puVar8 + 0xc) != 0) {
    local_c0 = '\0';
    local_c8 = puVar8;
    FUN_00d92220();
    local_98 = local_48;
    local_90 = 0;
    if (local_40 == '\0') {
      if (local_48 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_90 = '\x01';
    FUN_00d95130();
    local_a8 = local_78;
    local_a0 = 0;
    if (local_70 == '\0') {
      if (local_78 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_a0 = '\x01';
    FUN_00e97f60();
    if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00e971f0();
  if (local_38 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
LAB_00e93e24:
  FUN_00d50b20();
  FUN_00d50b20();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}


