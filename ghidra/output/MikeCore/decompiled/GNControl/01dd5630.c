// Function: FUN_01dd5630
// Address: 01dd5630
// Size: 2475 bytes
// Class: GNControl


bool FUN_01dd5630(int param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 in_EDX;
  ulonglong uVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar9;
  bool bVar10;
  float fVar11;
  undefined4 uVar12;
  float extraout_XMM0_Db;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  undefined4 local_64;
  longlong local_60;
  char local_51;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar14 = (float)param_2;
  lVar2 = *(longlong *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + (longlong)param_1 * 8);
  local_64 = in_EDX;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_51 = *(char *)((longlong)unaff_RDI + 0x1dc);
  local_60 = lVar2;
  if (local_51 != '\0') {
    lVar2 = unaff_RDI[0x28];
    if (lVar2 != 0) {
      local_e8 = 0;
      FUN_00d50b00();
      local_e8 = '\x01';
      local_f0 = lVar2;
      (**(code **)(*unaff_RDI + 0x470))();
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI[0x28] != 0) {
        unaff_RDI[0x28] = 0;
        FUN_00d50b20();
      }
    }
    goto LAB_01dd5fb4;
  }
  if ((*unaff_RSI != 0) && (iVar5 = FUN_01d3a5a0(), iVar5 == 1)) {
    FUN_01d3b620();
    FUN_01d3abf0();
    FUN_01e466c0();
    if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
      fVar11 = extraout_XMM0_Db /
               (*(float *)(unaff_RDI + 0x2d) + *(float *)((longlong)unaff_RDI + 0x174));
      iVar5 = -1;
      fVar14 = 0.0;
      if ((0.0 <= fVar11) && (fVar14 = (float)(int)unaff_RDI[0x30], fVar11 < fVar14)) {
        iVar5 = (int)fVar11;
      }
    }
    else {
      iVar5 = -1;
      fVar14 = 0.0;
      fVar11 = extraout_XMM0_Db;
      if ((0.0 <= extraout_XMM0_Db) && (lVar2 = unaff_RDI[0x52], lVar2 != 0)) {
        iVar1 = *(int *)(lVar2 + 0x18);
        iVar6 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar6 = iVar1;
        }
        uVar8 = 0;
        uVar7 = (ulonglong)(uint)(iVar6 >> 2);
        if (iVar6 >> 2 < 1) {
          uVar7 = uVar8;
        }
        do {
          if (uVar7 == uVar8) goto LAB_01dd57da;
          fVar14 = *(float *)(*(longlong *)(lVar2 + 0x10) + uVar8 * 4);
          uVar8 = uVar8 + 1;
        } while (fVar14 <= extraout_XMM0_Db);
        iVar5 = (int)uVar8 + -1;
      }
    }
LAB_01dd57da:
    uVar15 = 0;
    if ((int)unaff_RDI[0x36] != iVar5) {
      FUN_01dd3d20(fVar11,0);
    }
  }
  FUN_01db9a00();
  FUN_00d51d20();
  plVar3 = (longlong *)unaff_RDI[0x28];
  if (plVar3 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        unaff_RDI[0x28] = 0;
      }
      else {
        FUN_00d50b00();
        plVar3 = (longlong *)unaff_RDI[0x28];
        unaff_RDI[0x28] = (longlong)local_40;
      }
    }
    else {
      local_38 = '\0';
      unaff_RDI[0x28] = (longlong)local_40;
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x28] == 0) goto LAB_01dd5fb4;
  *(undefined1 *)((longlong)unaff_RDI + 0x1dc) = 1;
  (**(code **)(*unaff_RDI + 0x990))();
  FUN_01db9a00();
  (**(code **)(*local_50 + 0xa18))();
  plVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027f2a00;
  plVar9 = (longlong *)unaff_RDI[0x28];
  if (plVar3 == (longlong *)0x0) {
    if (DAT_027f2a00 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar9 + 0xa10))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar3 = (longlong *)unaff_RDI[0x28];
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0xa20))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01db9a00();
    (**(code **)(*local_50 + 0xa18))();
    local_98 = local_40;
    local_90 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_90 = '\x01';
    (**(code **)(*plVar9 + 0xa10))();
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = (longlong *)unaff_RDI[0x28];
    FUN_01db9a00();
    (**(code **)(*local_50 + 0xa28))();
    local_88 = local_40;
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    (**(code **)(*plVar3 + 0xa20))();
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar3 = (longlong *)unaff_RDI[0x28];
  FUN_01db9a00();
  (**(code **)(*local_50 + 0x9e0))();
  local_78 = local_40;
  local_70 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = '\x01';
  (**(code **)(*plVar3 + 0x9d8))();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x27) = local_64;
  *(int *)((longlong)unaff_RDI + 0x13c) = param_1;
  plVar3 = (longlong *)unaff_RDI[0x28];
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0xa08))(param_1,local_64);
  plVar9 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_40 = plVar9;
  local_38 = '\0';
  (**(code **)(*plVar3 + 0x978))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar12 = FUN_00d50b20();
  uVar13 = (**(code **)(*unaff_RDI + 0x950))(uVar12,param_1);
  *(undefined8 *)((longlong)unaff_RDI + 0x1cc) = uVar13;
  *(float *)((longlong)unaff_RDI + 0x1d4) = fVar14;
  *(undefined4 *)(unaff_RDI + 0x3b) = uVar15;
  (**(code **)(*(longlong *)unaff_RDI[0x28] + 0x4d0))();
  plVar3 = (longlong *)unaff_RDI[0x3e];
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
    local_120 = local_60;
    local_118 = '\0';
    local_b0 = 0;
    local_b8 = unaff_RDI[0x28];
    if (local_b8 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    (**(code **)(*plVar3 + 0x30))(&local_120,local_64,&local_b8);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  local_a0 = 0;
  lVar2 = unaff_RDI[0x28];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  local_a8 = lVar2;
  (**(code **)(*unaff_RDI + 0x450))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)unaff_RDI[0x28];
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar3 + 0x4a0))();
  if (local_40 == (longlong *)0x0) {
    bVar10 = false;
  }
  else {
    (**(code **)(*plVar3 + 0x4a0))();
    bVar10 = *(int *)((longlong)local_50 + 0xc) != 0;
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = plVar3;
  if (bVar10) {
    FUN_01d3abf0();
    FUN_01e466c0();
    (**(code **)(*plVar3 + 0x490))();
    plVar9 = local_40;
    plVar4 = plVar3;
    if (plVar3 != local_40) {
      if (local_38 != '\0') {
        FUN_00d50b20();
        goto LAB_01dd5ece;
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar4 = plVar9;
      plVar3 = local_40;
    }
    plVar9 = plVar4;
    if ((local_38 != '\0') && (plVar3 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01dd5ece:
  local_110 = *unaff_RSI;
  local_108 = '\0';
  (**(code **)(*plVar9 + 0x3c0))();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = unaff_RDI[0x28];
  if (lVar2 != 0) {
    local_f8 = 0;
    FUN_00d50b00();
    local_f8 = '\x01';
    local_100 = lVar2;
    (**(code **)(*unaff_RDI + 0x470))();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI[0x28] != 0) {
      unaff_RDI[0x28] = 0;
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x618))((int)uVar13,fVar14);
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1dc) = 0;
  FUN_00d50b20();
LAB_01dd5fb4:
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return local_51 == '\0';
}


