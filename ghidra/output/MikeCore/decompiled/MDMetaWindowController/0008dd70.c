// Function: FUN_0008dd70
// Address: 0008dd70
// Size: 1583 bytes
// Class: MDMetaWindowController


void FUN_0008dd70(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong unaff_RDI;
  float fVar7;
  undefined1 auVar5 [16];
  undefined4 uVar8;
  undefined1 auVar6 [16];
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  undefined8 *local_100;
  char local_f8;
  undefined8 *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb;
  
  FUN_01e534b0();
  plVar1 = *(longlong **)(unaff_RDI + 0x80);
  if (plVar1 != (longlong *)0x0) {
    FUN_00aea5e0();
    FUN_00aea6b0();
    (**(code **)(*plVar1 + 0xab8))();
    plVar1 = *(longlong **)(unaff_RDI + 0x80);
    FUN_00aea5e0();
    FUN_00aea6b0();
    (**(code **)(*plVar1 + 0xac8))();
    plVar1 = *(longlong **)(unaff_RDI + 0x80);
    FUN_00aea5e0();
    FUN_00aea6b0();
    FUN_00d46dc0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar1 + 0x988))();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x1a) = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x4c) = 0;
    *puVar4 = &DAT_0252f488;
    (*DAT_0252f4a0)();
    lVar2 = DAT_026d8928;
    if (DAT_026d8928 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_026d8930;
    if (DAT_026d8930 != 0) {
      FUN_00d50b00();
    }
    local_120 = lVar3;
    local_118 = '\x01';
    local_110 = 0;
    local_108 = '\0';
    FUN_00d31230(&local_110,&local_120);
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00d4c980();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    local_f8 = '\0';
    local_100 = puVar4;
    (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x9b8))();
    if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  local_b8 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
  FUN_00d50b00();
  local_b8 = '\x01';
  local_c0 = (longlong *)(unaff_RDI + 0x70);
  FUN_01b56760();
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    (**(code **)(*local_c0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01e06f80();
  plVar1 = *(longlong **)(unaff_RDI + 0x88);
  local_a8 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0x78) + 0x10))();
  FUN_00d50b00();
  local_a8 = '\x01';
  local_b0 = (longlong *)(unaff_RDI + 0x78);
  (**(code **)(*plVar1 + 0xae0))();
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    (**(code **)(*local_b0 + 0x10))();
    FUN_00d50b20();
  }
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_026016d8;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  (*DAT_026016f0)();
  local_e8 = '\x01';
  local_f0 = puVar4;
  FUN_01e058f0();
  if ((local_e8 != '\0') && (local_f0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x98);
  local_98 = 0;
  lVar2 = *(longlong *)(unaff_RDI + 0x128);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_a0 = lVar2;
  (**(code **)(*plVar1 + 0x978))();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e07450();
  local_88 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0x70) + 0x10))();
  FUN_00d50b00();
  local_88 = '\x01';
  local_90 = (longlong *)(unaff_RDI + 0x70);
  FUN_01b56760();
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x98);
  local_78 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0x78) + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_80 = (longlong *)(unaff_RDI + 0x78);
  (**(code **)(*plVar1 + 0xae0))();
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
  if (*(longlong **)(unaff_RDI + 0x90) != (longlong *)0x0) {
    auVar5._0_8_ = (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x4d8))();
    auVar5._8_8_ = extraout_XMM0_Qb;
    fVar7 = (float)((ulonglong)auVar5._0_8_ >> 0x20);
    uVar8 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
    auVar6._4_4_ = fVar7;
    auVar6._0_4_ = fVar7 + DAT_02390124;
    auVar6._8_4_ = uVar8;
    auVar6._12_4_ = uVar8;
    auVar6 = insertps(auVar5,auVar6,0x10);
    (**(code **)(**(longlong **)(unaff_RDI + 0x90) + 0x4d0))(auVar6._0_8_);
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_e0 = DAT_026f6cf0;
  if (DAT_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  FUN_00d41430(&local_d0,&local_e0);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}


