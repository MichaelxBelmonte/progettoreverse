// Function: FUN_01f7ef70
// Address: 01f7ef70
// Size: 1822 bytes
// Class: GNRadialColorGradient


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f7ef70(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong *unaff_RDI;
  byte bVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar14;
  undefined4 uVar15;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  double local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_40;
  char local_38;
  
  uVar14 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar11 = (undefined4)param_2;
  local_60 = (double)FUN_00e7d6f0();
  cVar4 = FUN_01e4ad60();
  if (((cVar4 == '\0') || ((char)unaff_RDI[7] != '\0')) || (cVar4 = FUN_01d3a640(), cVar4 != '\0'))
  {
LAB_01f7f0b9:
    uVar13 = CONCAT44(local_58._4_4_,(undefined4)local_58);
    bVar7 = 0;
    plVar1 = (longlong *)unaff_RDI[9];
  }
  else {
    FUN_01f27fe0();
    iVar6 = *(int *)((longlong)local_40 + 0xdc);
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (iVar6 != 0) goto LAB_01f7f0b9;
    FUN_01f27fe0();
    cVar4 = FUN_01f45da0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_01f7f0b9;
    FUN_01f27fe0();
    FUN_01f45600();
    if (local_40 == (longlong *)0x0) {
      bVar9 = false;
    }
    else {
      FUN_01f27fe0();
      FUN_01f45600();
      FUN_01e5ca90();
      bVar9 = local_80 != unaff_RDI[9];
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    uVar13 = CONCAT44(local_58._4_4_,(undefined4)local_58);
    bVar7 = bVar9 ^ 1;
    plVar1 = (longlong *)unaff_RDI[9];
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x9b8))();
    if (local_40 == (longlong *)0x0) {
      bVar5 = 0;
    }
    else {
      (**(code **)(*(longlong *)unaff_RDI[9] + 0x9b8))();
      local_58 = FUN_01e466c0((int)*(undefined8 *)((longlong)unaff_RDI + 0x3c));
      (**(code **)(*(longlong *)unaff_RDI[9] + 0x9b8))();
      uVar10 = FUN_01e3f820();
      bVar5 = FUN_00d05410((undefined4)local_58,uVar10,CONCAT44(uVar14,uVar11));
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      bVar5 = bVar5 ^ 1;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar7 = bVar7 & ~bVar5;
    uVar13 = local_58;
  }
  local_58 = uVar13;
  uVar13 = FUN_01e466c0((int)*(undefined8 *)((longlong)unaff_RDI + 0x3c));
  if ((double)unaff_RDI[6] < 0.0) {
    return;
  }
  if (unaff_RDI[9] == 0) {
    return;
  }
  if (bVar7 != 1) {
    return;
  }
  uStack_50 = extraout_XMM0_Dc;
  uStack_4c = extraout_XMM0_Dd;
  local_58 = uVar13;
  cVar4 = (**(code **)(*unaff_RDI + 0x3a8))();
  uVar11 = (**(code **)(*(longlong *)unaff_RDI[9] + 0x490))((undefined4)local_58);
  plVar1 = local_40;
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    uVar11 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
  }
  local_c0 = plVar1;
  local_b8 = '\0';
  (**(code **)(*unaff_RDI + 0x3b0))(uVar11,&local_c0);
  plVar8 = local_40;
  if (plVar1 == local_40) {
LAB_01f7f2c4:
    plVar8 = plVar1;
    if (local_38 != '\0') {
LAB_01f7f2ca:
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar1 = plVar8;
        goto LAB_01f7f2c4;
      }
      if (local_38 == '\0') goto LAB_01f7f2d8;
      goto LAB_01f7f2ca;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    local_38 = '\0';
  }
LAB_01f7f2d8:
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  dVar2 = (double)unaff_RDI[6] + (double)unaff_RDI[3];
  uVar11 = SUB84(local_60,0);
  uVar14 = (undefined4)((ulonglong)local_60 >> 0x20);
  uVar10 = 0;
  uVar15 = 0;
  if (local_60 < dVar2) {
    if ((longlong *)unaff_RDI[10] != plVar8) {
      unaff_RDI[6] = (longlong)local_60;
      unaff_RDI[10] = (longlong)plVar8;
    }
LAB_01f7f31e:
    if (plVar8 == (longlong *)0x0) {
      return;
    }
    goto LAB_01f7f674;
  }
  dVar3 = dVar2 + (double)unaff_RDI[4];
  if ((local_60 < dVar2) || (dVar3 <= local_60)) {
    if ((local_60 < dVar3) || (dVar3 + (double)unaff_RDI[5] <= local_60)) {
      if ((dVar3 + (double)unaff_RDI[5] <= local_60) && (cVar4 == '\x01')) {
        (**(code **)(*unaff_RDI + 0x388))();
      }
      goto LAB_01f7f31e;
    }
    local_98 = '\0';
    local_a0 = plVar8;
    uVar12 = FUN_01e48f80((undefined4)local_58);
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar8 + 0x6c8))(uVar12);
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01f7f564;
      }
LAB_01f7f611:
      bVar9 = true;
    }
    else {
      if (local_40 == (longlong *)0x0) goto LAB_01f7f611;
LAB_01f7f564:
      iVar6 = FUN_00d8c7a0();
      if (iVar6 != 0) {
        local_88 = '\0';
        local_90 = plVar8;
        uVar13 = FUN_01e48f80((undefined4)local_58);
        local_58 = uVar13;
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar8 + 0x6d0))((undefined4)local_58);
        local_58._0_4_ = uVar11;
        local_58._4_4_ = uVar14;
        uStack_50 = uVar10;
        uStack_4c = uVar15;
        uVar13 = FUN_01e49120();
        uVar11 = (**(code **)(*plVar8 + 0x6c0))();
        FUN_01f7ed90(SUB84(local_60,0),uVar11,uVar13,(undefined4)local_58);
      }
      bVar9 = false;
    }
    if ((cVar4 != '\0') &&
       (dVar2 = (local_60 - ((double)unaff_RDI[6] + (double)unaff_RDI[3] + (double)unaff_RDI[4])) /
                (double)unaff_RDI[5], _DAT_02423ba0 <= dVar2)) {
      (**(code **)(*unaff_RDI + 0x3a0))((float)((dVar2 + DAT_023b19a0) * _DAT_0241b688));
    }
    if (!bVar9) {
      FUN_00d50b20();
    }
    goto LAB_01f7f674;
  }
  local_a8 = '\0';
  local_b0 = plVar8;
  uVar13 = FUN_01e48f80((undefined4)local_58);
  uStack_50 = extraout_XMM0_Dc_00;
  uStack_4c = extraout_XMM0_Dd_00;
  local_58 = uVar13;
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar8 + 0x6c8))((undefined4)local_58);
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01f7f485;
    }
LAB_01f7f4f2:
    bVar9 = true;
LAB_01f7f50a:
    if (cVar4 != '\0') {
      unaff_RDI[6] = (longlong)((local_60 - (double)unaff_RDI[3]) - (double)unaff_RDI[4]);
    }
    if (bVar9) goto LAB_01f7f674;
  }
  else {
    if (local_40 == (longlong *)0x0) goto LAB_01f7f4f2;
LAB_01f7f485:
    iVar6 = FUN_00d8c7a0();
    if (iVar6 == 0) {
      bVar9 = false;
      goto LAB_01f7f50a;
    }
    (**(code **)(*plVar8 + 0x6d0))((undefined4)local_58);
    local_58._0_4_ = uVar11;
    local_58._4_4_ = uVar14;
    uStack_50 = uVar10;
    uStack_4c = uVar15;
    uVar13 = FUN_01e49120();
    uVar11 = (**(code **)(*plVar8 + 0x6c0))();
    FUN_01f7ed90(SUB84(local_60,0),uVar11,uVar13,(undefined4)local_58);
  }
  FUN_00d50b20();
LAB_01f7f674:
  FUN_00d50b20();
  return;
}


