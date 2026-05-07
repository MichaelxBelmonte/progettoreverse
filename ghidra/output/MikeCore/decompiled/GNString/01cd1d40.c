// Function: FUN_01cd1d40
// Address: 01cd1d40
// Size: 2208 bytes
// Class: GNString
// String references:
//   "color format mismatch"
//   "color format mismatch %@"
//   "color range mismatch %@"


undefined8 FUN_01cd1d40(undefined4 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 unaff_RDI;
  undefined8 *puVar9;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float fVar11;
  float extraout_XMM0_Da_06;
  longlong local_a8;
  char local_a0;
  undefined8 *local_98;
  char local_90;
  undefined8 *local_88;
  char local_80;
  undefined8 *local_78;
  char local_70;
  uint local_64;
  int local_60;
  int local_5c;
  undefined8 *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  
  lVar4 = DAT_027eec90;
  local_64 = 0xff;
  local_60 = 0xff;
  local_5c = 0xff;
  if (*param_2 == 0) {
    if (DAT_027eec90 != 0) {
      param_1 = FUN_00d50b00();
    }
    FUN_00cc7b40(param_1,DAT_025908a0);
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  iVar6 = FUN_00d8c7a0();
  lVar4 = DAT_0276cc80;
  if (iVar6 == 6) {
    fVar11 = extraout_XMM0_Da;
    if ((DAT_028b7520 == '\0') &&
       (iVar6 = ___cxa_guard_acquire(), fVar11 = extraout_XMM0_Da_06, iVar6 != 0)) {
      DAT_028b7518 = '\0';
      DAT_028b7519 = '\0';
      uRam00000000028b751a = 0;
      DAT_028b7510._0_7_ = 0;
      DAT_028b7510._7_1_ = 0;
      ___cxa_atexit(extraout_XMM0_Da_06,0);
      fVar11 = (float)___cxa_guard_release();
    }
    plVar2 = (longlong *)CONCAT17(DAT_028b7510._7_1_,(undefined7)DAT_028b7510);
    if ((plVar2 == (longlong *)0x0) || (DAT_028b7519 == '\0')) {
      FUN_00e8cb50();
      if (CONCAT17(DAT_028b7510._7_1_,(undefined7)DAT_028b7510) == 0) {
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &DAT_0257ef30;
        puVar7[5] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
        *(undefined4 *)(puVar7 + 4) = 0;
        (*DAT_0257ef48)();
        puVar9 = (undefined8 *)CONCAT17(DAT_028b7510._7_1_,(undefined7)DAT_028b7510);
        if (puVar9 == puVar7) {
          bVar3 = false;
        }
        else {
          DAT_028b7510._0_7_ = SUB87(puVar7,0);
          DAT_028b7510._7_1_ = (undefined1)((ulonglong)puVar7 >> 0x38);
          bVar3 = true;
          if (puVar9 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b7518 == '\0') {
          DAT_028b7518 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar3) {
          FUN_00d50b20();
        }
        DAT_028b7519 = '\x01';
        fVar11 = (float)FUN_00e8cb70();
      }
      else {
        DAT_028b7519 = '\x01';
        fVar11 = (float)FUN_00e8cb70();
      }
      plVar2 = (longlong *)CONCAT17(DAT_028b7510._7_1_,(undefined7)DAT_028b7510);
    }
    if (plVar2 != (longlong *)0x0) {
      uVar8 = FUN_00e7b4e0();
      FUN_00d8e3d0(extraout_XMM0_Da_00,uVar8);
      local_98 = local_58;
      local_90 = 0;
      if ((char)local_50 == '\0') {
        if (local_58 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = local_50 & 0xffffff00;
      }
      local_90 = '\x01';
      uVar10 = (**(code **)(*plVar2 + 0x368))();
      if ((local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      cVar5 = (**(code **)(*(longlong *)CONCAT17(DAT_028b7510._7_1_,(undefined7)DAT_028b7510) +
                          0x430))(uVar10,2);
      lVar4 = DAT_027eec90;
      if (cVar5 == '\0') {
        uVar10 = extraout_XMM0_Da_01;
        if (DAT_027eec90 != 0) {
          uVar10 = FUN_00d50b00();
        }
        FUN_00cc7b40(uVar10,DAT_025908a0);
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      plVar2 = (longlong *)CONCAT17(DAT_028b7510._7_1_,(undefined7)DAT_028b7510);
      uVar8 = FUN_00e7b4e0();
      FUN_00d8e3d0(extraout_XMM0_Da_02,uVar8);
      local_88 = local_58;
      local_80 = 0;
      if ((char)local_50 == '\0') {
        if (local_58 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = local_50 & 0xffffff00;
      }
      local_80 = '\x01';
      uVar10 = (**(code **)(*plVar2 + 0x368))();
      if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      cVar5 = (**(code **)(*(longlong *)CONCAT17(DAT_028b7510._7_1_,(undefined7)DAT_028b7510) +
                          0x430))(uVar10,2);
      lVar4 = DAT_027eec90;
      if (cVar5 == '\0') {
        uVar10 = extraout_XMM0_Da_03;
        if (DAT_027eec90 != 0) {
          uVar10 = FUN_00d50b00();
        }
        FUN_00cc7b40(uVar10,DAT_025908a0);
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      plVar2 = (longlong *)CONCAT17(DAT_028b7510._7_1_,(undefined7)DAT_028b7510);
      uVar8 = FUN_00e7b4e0();
      FUN_00d8e3d0(extraout_XMM0_Da_04,uVar8);
      local_78 = local_58;
      local_70 = 0;
      if ((char)local_50 == '\0') {
        if (local_58 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = local_50 & 0xffffff00;
      }
      local_70 = '\x01';
      uVar10 = (**(code **)(*plVar2 + 0x368))();
      if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      cVar5 = (**(code **)(*(longlong *)CONCAT17(DAT_028b7510._7_1_,(undefined7)DAT_028b7510) +
                          0x430))(uVar10,2);
      lVar4 = DAT_027eec90;
      fVar11 = extraout_XMM0_Da_05;
      if (cVar5 == '\0') {
        if (DAT_027eec90 != 0) {
          fVar11 = (float)FUN_00d50b00();
        }
        fVar11 = (float)FUN_00cc7b40(fVar11,DAT_025908a0);
        if (lVar4 != 0) {
          fVar11 = (float)FUN_00d50b20();
        }
      }
    }
    iVar6 = 0xff;
    bVar3 = false;
    puVar9 = (undefined8 *)0x0;
  }
  else {
    if (DAT_0276cc80 != 0) {
      FUN_00d50b00();
    }
    local_a8 = lVar4;
    local_a0 = '\x01';
    uVar10 = FUN_00d91000(1,&local_a8);
    puVar9 = local_58;
    if (local_58 == (undefined8 *)0x0) {
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      puVar9 = (undefined8 *)0x0;
      bVar3 = false;
      lVar4 = DAT_027eec90;
    }
    else {
      if ((char)local_50 == '\0') {
        uVar10 = FUN_00d50b00();
      }
      else {
        local_50 = local_50 & 0xffffff00;
      }
      iVar6 = *(int *)((longlong)puVar9 + 0xc);
      if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
        uVar10 = FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        uVar10 = FUN_00d50b20();
      }
      if (2 < iVar6) {
        fVar11 = (float)FUN_00d8d7b0();
        local_64 = (uint)(fVar11 * DAT_02394220);
        fVar11 = (float)FUN_00d8d7b0();
        local_60 = (int)(fVar11 * DAT_02394220);
        fVar11 = (float)FUN_00d8d7b0();
        fVar11 = fVar11 * DAT_02394220;
        local_5c = (int)fVar11;
        bVar3 = true;
        if (*(int *)((longlong)puVar9 + 0xc) == 4) {
          fVar11 = (float)FUN_00d8d7b0();
          fVar11 = fVar11 * DAT_02394220;
          iVar6 = (int)fVar11;
        }
        else {
          iVar6 = 0xff;
        }
        goto LAB_01cd2460;
      }
      bVar3 = true;
      lVar4 = DAT_027eec90;
    }
    DAT_027eec90 = lVar4;
    if (lVar4 != 0) {
      uVar10 = FUN_00d50b00();
    }
    lVar1 = *param_2;
    local_50 = 1;
    local_58 = &DAT_024c5048;
    local_40 = 0;
    if (lVar1 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar1;
    fVar11 = (float)FUN_00cc7b40(uVar10,&local_58);
    local_58 = &DAT_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      fVar11 = (float)FUN_00d50b20();
    }
    iVar6 = 0xff;
    if (lVar4 != 0) {
      fVar11 = (float)FUN_00d50b20();
    }
  }
LAB_01cd2460:
  lVar4 = DAT_027eec90;
  if (((((0xff < local_64) || (local_60 < 0)) || (0xff < local_60)) ||
      ((local_5c < 0 || (0xff < local_5c)))) || ((iVar6 < 0 || (0xff < iVar6)))) {
    if (DAT_027eec90 != 0) {
      fVar11 = (float)FUN_00d50b00();
    }
    lVar1 = *param_2;
    local_50 = 1;
    local_58 = &DAT_024c5048;
    if (lVar1 != 0) {
      fVar11 = (float)FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar1;
    FUN_00cc7b40(fVar11,&local_58);
    local_58 = &DAT_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01cfcdc0((float)(int)local_64 / DAT_02394220,(float)local_60 / DAT_02394220,
               (float)local_5c / DAT_02394220,(float)iVar6 / DAT_02394220);
  if ((bVar3) && (puVar9 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


