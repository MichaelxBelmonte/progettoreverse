// Function: FUN_01f2b280
// Address: 01f2b280
// Size: 1180 bytes
// Class: GNString


void FUN_01f2b280(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong unaff_RDI;
  char cVar8;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined8 local_40;
  longlong *local_38;
  
  if (*(longlong *)(unaff_RDI + 0x70) == 0) {
    plVar1 = *(longlong **)(unaff_RDI + 0x40);
    if (plVar1 == (longlong *)0x0) {
      local_38 = (longlong *)0x0;
      local_40 = 0;
    }
    else {
      uVar5 = FUN_00d50b00();
      local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      local_38 = plVar1;
    }
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_026846d0;
    puVar6[2] = &DAT_02684a60;
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x3a) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x42) = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    *(undefined2 *)(puVar6 + 0xe) = 0;
    (*DAT_026846e8)();
    puVar2 = *(undefined8 **)(unaff_RDI + 0x70);
    if (puVar2 == puVar6) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x70) = puVar6;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    lVar3 = DAT_027fff58;
    if (DAT_027fff58 != 0) {
      FUN_00d50b00();
    }
    lVar4 = DAT_027fff70;
    if (DAT_027fff70 != 0) {
      FUN_00d50b00();
    }
    local_100 = lVar4;
    local_f8 = '\x01';
    local_f0 = 0;
    local_e8 = '\0';
    FUN_00d31230(&local_f0,&local_100);
    local_70 = local_50;
    local_68 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_68 = '\x01';
    FUN_01d64eb0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    local_78 = 0;
    lVar3 = *(longlong *)(unaff_RDI + 0x70);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    local_80 = lVar3;
    FUN_01d5d8d0();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_001d7da0();
    (**(code **)(*plVar7 + 0x18))();
    if (plVar7 == local_38) {
      if (plVar1 == (longlong *)0x0) {
        cVar8 = '\x01';
        plVar7 = local_38;
      }
      else {
        FUN_00d50b20();
        cVar8 = (char)local_40;
        plVar7 = local_38;
      }
    }
    else if (plVar1 == (longlong *)0x0 || local_38 == (longlong *)0x0) {
      cVar8 = '\x01';
    }
    else {
      FUN_00d50b20();
      cVar8 = '\x01';
    }
    local_d8 = '\0';
    local_e0 = plVar7;
    FUN_01d654e0();
    if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar3 = DAT_027fff58;
    if (DAT_027fff58 != 0) {
      FUN_00d50b00();
    }
    lVar4 = DAT_027fff78;
    local_d0 = lVar3;
    local_c8 = '\x01';
    if (DAT_027fff78 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar4;
    local_b8 = '\x01';
    local_b0 = 0;
    local_a8 = '\0';
    FUN_00d31230(&local_b0,&local_c0);
    local_60 = local_50;
    local_58 = 0;
    local_a0 = DAT_027fff80;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
        local_a0 = DAT_027fff80;
      }
    }
    else {
      local_48 = '\0';
    }
    local_58 = '\x01';
    DAT_027fff80 = local_a0;
    if (local_a0 != 0) {
      local_58 = '\x01';
      FUN_00d50b00();
    }
    local_98 = '\x01';
    local_90 = 0;
    local_88 = '\0';
    FUN_01d5da10(&local_90,&local_a0);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((cVar8 != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}


