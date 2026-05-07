// Function: FUN_00cc9d90
// Address: 00cc9d90
// Size: 1902 bytes
// Class: GNBCFA


/* WARNING: Removing unreachable block (ram,0x00cc9f2c) */
/* WARNING: Removing unreachable block (ram,0x00cc9f38) */

undefined4 FUN_00cc9d90(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *local_138;
  char local_130;
  undefined8 *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  undefined8 *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x18) == 0) {
    return 0;
  }
  plVar7 = (longlong *)(unaff_RDI + 0x18);
  cVar5 = FUN_00cc9bd0();
  local_58 = plVar7;
  if (cVar5 == '\0') goto LAB_00cca392;
  FUN_00dac670();
  cVar5 = FUN_00daa980();
  if (cVar5 != '\0') {
    FUN_00daa970();
    cVar5 = FUN_00daaf60();
    if (cVar5 == '\0') goto LAB_00cca392;
    FUN_00daa970();
  }
  cVar5 = FUN_00daac70();
  if (cVar5 == '\0') goto LAB_00cca392;
  FUN_00dac670();
  FUN_00daa9c0();
  local_48 = 0;
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[4] = 0;
  *plVar6 = (longlong)&DAT_0258cea8;
  *(undefined4 *)(plVar6 + 5) = 0;
  *(undefined1 *)((longlong)plVar6 + 0x2c) = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar6[9] = 0;
  plVar6[10] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  plVar6[0xf] = 0;
  plVar6[0x10] = 0;
  plVar6[0x11] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0;
  plVar6[0x18] = 0;
  plVar6[0x19] = 0;
  plVar6[0x1a] = 0;
  (*DAT_0258cec0)();
  local_48 = '\x01';
  local_50 = plVar6;
  uVar8 = FUN_00e4b5a0();
  if (*param_4 != 0) {
    (**(code **)(*local_50 + 0x5e0))();
    local_c8 = (undefined8 *)*param_4;
    local_c0 = '\0';
    uVar8 = FUN_00ca1b70();
    if ((local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    puVar3 = DAT_02774ad0;
    if (DAT_02774ad0 != (undefined8 *)0x0) {
      uVar8 = FUN_00d50b00();
    }
    local_138 = puVar3;
    local_130 = '\x01';
    uVar8 = FUN_000175c0(uVar8,&local_138);
    plVar7 = local_58;
    puVar3 = local_c8;
    if (local_c0 == '\0') {
      if (((local_c8 != (undefined8 *)0x0) && (uVar8 = FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (undefined8 *)0x0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    else {
      local_c0 = '\0';
    }
    if ((local_130 != '\0') && (local_138 != (undefined8 *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    if (puVar3 != (undefined8 *)0x0) {
      local_128 = puVar3;
      local_120 = '\0';
      (**(code **)(*local_50 + 0x600))();
      if ((local_120 != '\0') && (local_128 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_50 + 0x5e0))();
      puVar3 = DAT_02774ad0;
      if (DAT_02774ad0 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_c8 = puVar3;
      local_c0 = '\0';
      FUN_00ca13a0();
      if ((local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = FUN_00d50b20();
    }
  }
  local_118 = *param_1;
  local_110 = '\0';
  local_60 = 0;
  lVar1 = *plVar7;
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_60 = '\x01';
  local_68 = lVar1;
  uVar8 = FUN_00e45630(uVar8,&local_68);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 == '\0') {
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      FUN_00daa970();
      FUN_00daa9c0();
      FUN_00daa990();
    }
    lVar1 = DAT_02774ad8;
    if (DAT_02774ad8 != 0) {
      FUN_00d50b00();
    }
    lVar4 = DAT_02774ae0;
    local_108 = lVar1;
    local_100 = '\x01';
    if (DAT_02774ae0 != 0) {
      FUN_00d50b00();
    }
    plVar7 = DAT_02774ae8;
    local_f8 = lVar4;
    local_f0 = '\x01';
    local_38 = 0;
    if (DAT_02774ae8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    lVar1 = DAT_02774af0;
    local_40 = plVar7;
    local_38 = '\x01';
    local_70 = 0;
    if (DAT_02774af0 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar1;
    local_70 = '\x01';
    uVar9 = FUN_00cca9a0(&local_78,local_58,&local_50);
    FUN_00e972c0(uVar9,&local_c8);
    FUN_002d10d0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
LAB_00cca374:
    bVar2 = false;
  }
  else {
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      FUN_00daa970();
      FUN_00daa9c0();
      FUN_00daa990();
    }
    FUN_00dac670();
    FUN_00dac5e0();
    cVar5 = FUN_00daac70();
    bVar2 = true;
    if (cVar5 != '\0') {
      FUN_00dac5e0();
      goto LAB_00cca374;
    }
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    return uVar8;
  }
LAB_00cca392:
  if (*(longlong *)(unaff_RDI + 0x18) != 0) {
    FUN_00daa970();
    FUN_00daa9c0();
    FUN_00daa990();
  }
  lVar1 = DAT_02774ad8;
  if (DAT_02774ad8 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_02774af8;
  local_e8 = lVar1;
  local_e0 = '\x01';
  if (DAT_02774af8 != 0) {
    FUN_00d50b00();
  }
  plVar7 = DAT_02774ae8;
  local_d8 = lVar4;
  local_d0 = '\x01';
  if (DAT_02774ae8 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_50 = plVar7;
  local_40 = (longlong *)*local_58;
  uVar8 = FUN_00083ea0(2,&local_40);
  FUN_00e972c0(uVar8,&local_c8);
  local_c8 = (undefined8 *)&DAT_0253d630;
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  local_c8 = &DAT_024c5048;
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  return 0;
}


