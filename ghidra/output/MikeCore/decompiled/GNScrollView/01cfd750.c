// Function: FUN_01cfd750
// Address: 01cfd750
// Size: 2969 bytes
// Class: GNScrollView
// String references:
//   "color format mismatch"
//   "color format mismatch %@"
//   "color range mismatch %@"


undefined8 * FUN_01cfd750(undefined4 param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar9;
  bool bVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  float extraout_XMM0_Da_08;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  longlong local_b0;
  char local_a8;
  undefined8 *local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  undefined8 *local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  uint local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined8 *local_50;
  uint local_48;
  longlong local_40;
  char local_38;
  
  lVar3 = DAT_027ef220;
  local_60 = 0xff;
  local_5c = 0xff;
  local_58 = 0xff;
  local_54 = 0xff;
  if (*unaff_RSI == 0) {
    if (DAT_027ef220 != 0) {
      param_1 = FUN_00d50b00();
    }
    FUN_00cc7b40(param_1,DAT_025908a0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  iVar5 = FUN_00d8c7a0();
  if ((iVar5 == 7) || (iVar5 = FUN_00d8c7a0(), iVar5 == 9)) {
    lVar3 = DAT_027cd570;
    if (DAT_027cd570 != 0) {
      FUN_00d50b00();
    }
    cVar4 = FUN_00d90870();
    uVar11 = extraout_XMM0_Da;
    if (lVar3 != 0) {
      uVar11 = FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d8f140(uVar11,1);
      puVar8 = local_50;
      puVar9 = (undefined8 *)*unaff_RSI;
      if (puVar9 == local_50) {
        if (((char)unaff_RSI[1] != '\0') || (local_50 == (undefined8 *)0x0)) goto LAB_01cfd91c;
        if ((char)local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_01cfd917;
        }
      }
      else {
        lVar3 = unaff_RSI[1];
        if ((char)local_48 == '\0') {
          if (local_50 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          *unaff_RSI = (longlong)puVar8;
          if (((char)lVar3 != '\0') && (puVar9 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
LAB_01cfd917:
          *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01cfd91c:
          if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01cfd930;
        }
        *unaff_RSI = (longlong)local_50;
        if (((char)lVar3 != '\0') && (puVar9 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      *(undefined1 *)(unaff_RSI + 1) = 1;
    }
  }
LAB_01cfd930:
  iVar5 = FUN_00d8c7a0();
  if ((iVar5 != 6) && (iVar5 = FUN_00d8c7a0(), lVar3 = DAT_0276cc80, iVar5 != 8)) {
    if (DAT_0276cc80 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar3;
    local_a8 = '\x01';
    uVar11 = FUN_00d91000(1,&local_b0);
    puVar9 = local_50;
    if (local_50 == (undefined8 *)0x0) {
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      puVar9 = (undefined8 *)0x0;
      bVar2 = false;
      lVar3 = DAT_027ef220;
    }
    else {
      if ((char)local_48 == '\0') {
        uVar11 = FUN_00d50b00();
      }
      else {
        local_48 = local_48 & 0xffffff00;
      }
      iVar5 = *(int *)((longlong)puVar9 + 0xc);
      if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      if (2 < iVar5) {
        fVar12 = (float)FUN_00d8d7b0();
        local_60 = (uint)(fVar12 * DAT_02394220);
        fVar12 = (float)FUN_00d8d7b0();
        local_5c = (int)(fVar12 * DAT_02394220);
        fVar12 = (float)FUN_00d8d7b0();
        fVar12 = fVar12 * DAT_02394220;
        local_58 = (int)fVar12;
        bVar2 = true;
        if (*(int *)((longlong)puVar9 + 0xc) == 4) {
          fVar12 = (float)FUN_00d8d7b0();
          fVar12 = fVar12 * DAT_02394220;
          local_54 = (int)fVar12;
        }
        goto LAB_01cfe119;
      }
      bVar2 = true;
      lVar3 = DAT_027ef220;
    }
    DAT_027ef220 = lVar3;
    if (lVar3 != 0) {
      uVar11 = FUN_00d50b00();
    }
    lVar1 = *unaff_RSI;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (lVar1 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    fVar12 = (float)FUN_00cc7b40(uVar11,&local_50);
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      fVar12 = (float)FUN_00d50b20();
    }
    if (lVar3 != 0) {
      fVar12 = (float)FUN_00d50b20();
    }
    goto LAB_01cfe119;
  }
  FUN_00da5ad0();
  cVar4 = *(char *)(local_50 + 3);
  if ((char)local_48 != '\0') {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    *plVar6 = (longlong)&DAT_0257ef30;
    plVar6[5] = 0;
    plVar6[2] = 0;
    plVar6[3] = 0;
    *(undefined4 *)(plVar6 + 4) = 0;
    (*DAT_0257ef48)();
    bVar2 = false;
  }
  else {
    if ((DAT_028b7938 == (longlong *)0x0) || (DAT_028b7941 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028b7938 == (longlong *)0x0) {
        plVar6 = (longlong *)FUN_00e8fc40();
        FUN_00d4ff40();
        *plVar6 = (longlong)&DAT_0257ef30;
        plVar6[5] = 0;
        plVar6[2] = 0;
        plVar6[3] = 0;
        *(undefined4 *)(plVar6 + 4) = 0;
        (*DAT_0257ef48)();
        if (DAT_028b7938 == plVar6) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
          bVar10 = DAT_028b7938 != (longlong *)0x0;
          DAT_028b7938 = plVar6;
          if (bVar10) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b7940 == '\0') {
          DAT_028b7940 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        DAT_028b7941 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028b7941 = '\x01';
        FUN_00e8cb70();
      }
      if (DAT_028b7938 == (longlong *)0x0) {
        bVar2 = true;
        plVar6 = (longlong *)0x0;
        goto LAB_01cfdcdc;
      }
    }
    plVar6 = DAT_028b7938;
    FUN_00d50b00();
    bVar2 = false;
  }
LAB_01cfdcdc:
  uVar7 = FUN_00e7b4e0();
  FUN_00d8e3d0(extraout_XMM0_Da_00,uVar7);
  local_a0 = local_50;
  local_98 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_98 = '\x01';
  uVar11 = (**(code **)(*plVar6 + 0x368))();
  if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  cVar4 = (**(code **)(*plVar6 + 0x430))(uVar11,2);
  lVar3 = DAT_027ef220;
  if (cVar4 == '\0') {
    uVar11 = extraout_XMM0_Da_01;
    if (DAT_027ef220 != 0) {
      uVar11 = FUN_00d50b00();
    }
    FUN_00cc7b40(uVar11,DAT_025908a0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  uVar7 = FUN_00e7b4e0();
  FUN_00d8e3d0(extraout_XMM0_Da_02,uVar7);
  local_90 = local_50;
  local_88 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_88 = '\x01';
  uVar11 = (**(code **)(*plVar6 + 0x368))();
  if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  cVar4 = (**(code **)(*plVar6 + 0x430))(uVar11,2);
  lVar3 = DAT_027ef220;
  if (cVar4 == '\0') {
    uVar11 = extraout_XMM0_Da_03;
    if (DAT_027ef220 != 0) {
      uVar11 = FUN_00d50b00();
    }
    FUN_00cc7b40(uVar11,DAT_025908a0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  uVar7 = FUN_00e7b4e0();
  FUN_00d8e3d0(extraout_XMM0_Da_04,uVar7);
  local_80 = local_50;
  local_78 = 0;
  if ((char)local_48 == '\0') {
    if (local_50 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  local_78 = '\x01';
  uVar11 = (**(code **)(*plVar6 + 0x368))();
  if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  cVar4 = (**(code **)(*plVar6 + 0x430))(uVar11,2);
  lVar3 = DAT_027ef220;
  if (cVar4 == '\0') {
    uVar11 = extraout_XMM0_Da_05;
    if (DAT_027ef220 != 0) {
      uVar11 = FUN_00d50b00();
    }
    FUN_00cc7b40(uVar11,DAT_025908a0);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  iVar5 = FUN_00d8c7a0();
  fVar12 = extraout_XMM0_Da_06;
  if (iVar5 == 8) {
    uVar7 = FUN_00e7b4e0();
    FUN_00d8e3d0(extraout_XMM0_Da_07,uVar7);
    local_70 = local_50;
    local_68 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_68 = '\x01';
    uVar11 = (**(code **)(*plVar6 + 0x368))();
    if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (undefined8 *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    cVar4 = (**(code **)(*plVar6 + 0x430))(uVar11,2);
    lVar3 = DAT_027ef220;
    fVar12 = extraout_XMM0_Da_08;
    if (cVar4 == '\0') {
      if (DAT_027ef220 != 0) {
        fVar12 = (float)FUN_00d50b00();
      }
      fVar12 = (float)FUN_00cc7b40(fVar12,DAT_025908a0);
      if (lVar3 != 0) {
        fVar12 = (float)FUN_00d50b20();
      }
    }
  }
  if (!bVar2) {
    fVar12 = (float)FUN_00d50b20();
  }
  bVar2 = false;
  puVar9 = (undefined8 *)0x0;
LAB_01cfe119:
  lVar3 = DAT_027ef220;
  if (((((0xff < local_60) || (local_5c < 0)) || (0xff < local_5c)) ||
      ((local_58 < 0 || (0xff < local_58)))) || ((local_54 < 0 || (0xff < local_54)))) {
    if (DAT_027ef220 != 0) {
      fVar12 = (float)FUN_00d50b00();
    }
    lVar1 = *unaff_RSI;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    if (lVar1 != 0) {
      fVar12 = (float)FUN_00d50b00();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    FUN_00cc7b40(fVar12,&local_50);
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  fVar12 = (float)(int)local_60;
  fVar13 = (float)local_5c;
  fVar14 = (float)local_58;
  fVar15 = (float)local_54;
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_026792c0;
  puVar8[5] = 0;
  *(undefined8 *)((longlong)puVar8 + 0xc) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x14) = 0;
  *(undefined8 *)((longlong)puVar8 + 0x19) = 0;
  FUN_00d500e0();
  FUN_01cfce50(fVar12 / DAT_02394220,fVar13 / DAT_02394220,fVar14 / DAT_02394220,
               fVar15 / DAT_02394220);
  *unaff_RDI = puVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar2) && (puVar9 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


