// Function: FUN_01f6fa60
// Address: 01f6fa60
// Size: 2104 bytes
// Class: GNLocaleExportController


void FUN_01f6fa60(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 uVar7;
  undefined7 extraout_var;
  longlong lVar6;
  longlong unaff_RDI;
  undefined7 uVar9;
  ulonglong uVar8;
  byte bVar10;
  longlong lVar11;
  bool bVar12;
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
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  ulonglong local_48;
  longlong local_40;
  char local_38;
  
  local_48 = 0;
  FUN_01e534b0();
  *(undefined2 *)(unaff_RDI + 0xa0) = 0;
  if (*(longlong *)(unaff_RDI + 0x70) != 0) {
    *(undefined8 *)(unaff_RDI + 0x70) = 0;
    local_48 = 0;
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x78) != 0) {
    *(undefined8 *)(unaff_RDI + 0x78) = 0;
    local_48 = 0;
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_118 = DAT_02800c50;
  if (DAT_02800c50 != 0) {
    FUN_00d50b00();
  }
  local_110 = '\x01';
  local_108 = 0;
  local_100 = '\0';
  uVar5 = FUN_00d710b0(&local_108,&local_118);
  lVar11 = local_40;
  if (local_40 == 0) {
    bVar10 = 1;
    lVar11 = 0;
    local_48 = 0;
  }
  else {
    if (local_38 == '\0') {
      uVar5 = FUN_00d50b00();
      local_48 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      bVar10 = 0;
      if ((local_38 == '\0') || (bVar10 = 0, local_40 == 0)) goto LAB_01f6fb7f;
      uVar5 = FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    local_48 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    bVar10 = 0;
  }
LAB_01f6fb7f:
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar11 != 0) && (iVar4 = FUN_00d8c7a0(), 0 < iVar4)) {
    local_f0 = '\0';
    local_f8 = lVar11;
    FUN_00cddf30();
    lVar1 = *(longlong *)(unaff_RDI + 0x70);
    lVar6 = lVar1;
    if (lVar1 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == 0) {
          lVar6 = 0;
          goto LAB_01f6fc1b;
        }
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x70);
        *(longlong *)(unaff_RDI + 0x70) = local_40;
        lVar6 = local_40;
      }
      else {
        local_38 = '\0';
        lVar6 = local_40;
LAB_01f6fc1b:
        *(longlong *)(unaff_RDI + 0x70) = lVar6;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar6 = local_40;
      }
    }
    if ((local_38 != '\0') && (lVar6 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if (((*(longlong **)(unaff_RDI + 0x70) != (longlong *)0x0) &&
        (cVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x3a0))(), cVar3 == '\0')) &&
       (*(longlong *)(unaff_RDI + 0x70) != 0)) {
      *(undefined8 *)(unaff_RDI + 0x70) = 0;
      FUN_00d50b20();
    }
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x88);
  if (*(longlong **)(unaff_RDI + 0x70) == (longlong *)0x0) {
    FUN_00d8ede0();
    local_78 = local_40;
    local_70 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x470))();
    local_88 = local_40;
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x98);
  if (*(longlong **)(unaff_RDI + 0x78) == (longlong *)0x0) {
    FUN_00d8ede0();
    local_58 = local_40;
    local_50 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_50 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x470))();
    local_68 = local_40;
    local_60 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_60 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d6f370();
  lVar1 = local_98;
  local_e8 = DAT_02800c58;
  if (DAT_02800c58 != 0) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  local_d8 = 0;
  local_d0 = '\0';
  uVar5 = FUN_00d710b0(&local_d8,&local_e8);
  lVar6 = local_40;
  uVar7 = (undefined7)((ulonglong)uVar5 >> 8);
  uVar9 = (undefined7)((ulonglong)lVar1 >> 8);
  if (local_40 == lVar11) {
    lVar6 = lVar11;
    if ((bool)(bVar10 & local_40 != 0)) {
      if (local_38 != '\0') goto LAB_01f6ff51;
      uVar8 = CONCAT71(uVar9,1);
      FUN_00d50b00();
    }
    else {
      uVar8 = local_48 & 0xffffffff;
    }
LAB_01f6ffb3:
    lVar11 = lVar6;
    if ((local_38 == '\0') || (local_40 == 0)) {
      local_48 = uVar8 & 0xffffffff;
    }
    else {
      FUN_00d50b20();
      local_48 = uVar8 & 0xffffffff;
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      uVar8 = CONCAT71(uVar9,1);
      if (((byte)local_48 & lVar11 != 0) == 1) {
        FUN_00d50b20();
      }
      goto LAB_01f6ffb3;
    }
    bVar12 = lVar11 != 0;
    lVar11 = lVar6;
    if (((byte)local_48 & bVar12) == 1) {
      FUN_00d50b20();
      uVar7 = extraout_var;
    }
LAB_01f6ff51:
    local_38 = '\0';
    local_48 = CONCAT71(uVar7,1);
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((lVar11 == 0) || (iVar4 = FUN_00d8c7a0(), iVar4 < 1)) goto LAB_01f70138;
  local_c0 = '\0';
  local_c8 = lVar11;
  FUN_00cddf30();
  lVar1 = *(longlong *)(unaff_RDI + 0x80);
  lVar6 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar6 = 0;
        goto LAB_01f70075;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x80);
      *(longlong *)(unaff_RDI + 0x80) = local_40;
      lVar6 = local_40;
    }
    else {
      local_38 = '\0';
      lVar6 = local_40;
LAB_01f70075:
      *(longlong *)(unaff_RDI + 0x80) = lVar6;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (((*(longlong **)(unaff_RDI + 0x80) != (longlong *)0x0) &&
      (cVar3 = (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x3a0))(), cVar3 == '\0')) &&
     (*(longlong *)(unaff_RDI + 0x80) != 0)) {
    *(undefined8 *)(unaff_RDI + 0x80) = 0;
    FUN_00d50b20();
  }
LAB_01f70138:
  plVar2 = *(longlong **)(unaff_RDI + 0x90);
  if (*(longlong **)(unaff_RDI + 0x80) == (longlong *)0x0) {
    FUN_00d8ede0();
    local_a8 = local_40;
    local_a0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_a0 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x470))();
    local_b8 = local_40;
    local_b0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b0 = '\x01';
    (**(code **)(*plVar2 + 0x968))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((char)local_48 != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  return;
}


