// Function: FUN_01c723c0
// Address: 01c723c0
// Size: 2429 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c723c0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  byte bVar8;
  byte bVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong **pplVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  double dVar15;
  double dVar16;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined4 local_74;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  longlong *local_58;
  char local_50;
  ulonglong local_48;
  
  plVar10 = (longlong *)*unaff_RSI;
  if ((DAT_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026cd0e8 = FUN_00d4fe50();
    DAT_026cd0d0 = "GNDictionary";
    _DAT_026cd0d8 = 0x28;
    _DAT_026cd0e0 = FUN_00022d20;
    _DAT_026cd0f0 = 0;
    uRam00000000026cd0f8 = 0;
    _DAT_026cd100 = 0;
    _DAT_026cd178 = 0;
    uRam00000000026cd180 = 0;
    _DAT_026cd188 = 0;
    DAT_026cd18a = 6;
    _DAT_026cd108 = 0;
    uRam00000000026cd110 = 0;
    _DAT_026cd118 = 0;
    uRam00000000026cd120 = 0;
    _DAT_026cd128 = 0;
    uRam00000000026cd130 = 0;
    _DAT_026cd138 = 0;
    uRam00000000026cd140 = 0;
    _DAT_026cd148 = 0;
    uRam00000000026cd150 = 0;
    _DAT_026cd158 = 0;
    uRam00000000026cd160 = 0;
    _DAT_026cd168 = 0;
    uRam00000000026cd170 = 0;
    DAT_026cd193 = 0;
    _DAT_026cd18b = 0;
    ___cxa_guard_release();
  }
  plVar11 = &DAT_02802688;
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
      if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026d5e58 = FUN_00d4fe50();
        DAT_026d5e40 = "GNString";
        _DAT_026d5e48 = 0x40;
        _DAT_026d5e50 = FUN_0005d920;
        _DAT_026d5e60 = 0;
        uRam00000000026d5e68 = 0;
        _DAT_026d5e70 = 0;
        uRam00000000026d5e78 = 0;
        _DAT_026d5e80 = 0;
        uRam00000000026d5e88 = 0;
        _DAT_026d5e90 = 0;
        uRam00000000026d5e98 = 0;
        _DAT_026d5ea0 = 0;
        uRam00000000026d5ea8 = 0;
        _DAT_026d5eb0 = 0;
        uRam00000000026d5eb8 = 0;
        _DAT_026d5ec0 = 0;
        uRam00000000026d5ec8 = 0;
        _DAT_026d5ed0 = 0;
        uRam00000000026d5ed8 = 0;
        _DAT_026d5ee0 = 0;
        uRam00000000026d5ee8 = 0;
        _DAT_026d5ef0 = 0;
        uRam00000000026d5ef8 = 0;
        _DAT_026d5f00 = 0;
        ___cxa_guard_release();
      }
      cVar3 = FUN_00e8db60();
      plVar11 = unaff_RSI;
      if (cVar3 == '\0') {
        plVar11 = &DAT_02802688;
      }
    }
  }
  local_60 = *plVar11;
  lVar2 = plVar11[1];
  if (((char)lVar2 == '\0') || (local_60 == 0)) {
    if (local_60 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  plVar10 = (longlong *)unaff_RDI[0x46];
  if (plVar10 == (longlong *)0x0) {
    cVar3 = '\0';
    plVar10 = (longlong *)0x0;
    goto LAB_01c72b3d;
  }
  local_68 = plVar10;
  (**(code **)(*plVar10 + 0x10))();
  uVar14 = FUN_00d50b00();
  if ((longlong *)unaff_RDI[0x46] != (longlong *)0x0) {
    lVar5 = (**(code **)(*(longlong *)unaff_RDI[0x46] + 0x10))();
    unaff_RDI[0x46] = 0;
    uVar14 = extraout_XMM0_Da;
    if (lVar5 != 0) {
      uVar14 = FUN_00d50b20();
    }
  }
  lVar5 = DAT_027ebed8;
  if (DAT_027ebed8 != 0) {
    uVar14 = FUN_00d50b00();
  }
  local_b8 = lVar5;
  local_b0 = '\x01';
  pplVar12 = &local_58;
  FUN_000175c0(uVar14,&local_b8);
  plVar10 = local_58;
  uVar6 = FUN_00053ac0();
  if (plVar10 == (longlong *)0x0) {
LAB_01c72532:
    pplVar12 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    uVar6 = FUN_00e85ea0();
    if ((char)uVar6 == '\0') goto LAB_01c72532;
  }
  plVar11 = *pplVar12;
  if (plVar11 == (longlong *)0x0) {
    bVar8 = 1;
    bVar9 = 1;
    local_70 = 0;
    uVar7 = 0;
    plVar11 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar12 + 1) == '\0') {
      uVar6 = FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar12 + 1) = 0;
    }
    local_70 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    bVar8 = 0;
    bVar9 = 0;
    uVar7 = CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
  }
  if ((local_50 != '\0') && (bVar9 = bVar8, local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar11 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    uVar14 = FUN_00d459e0();
    local_a8 = DAT_027ebee0;
    local_74 = uVar14;
    local_48 = uVar7;
    if (DAT_027ebee0 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_a0 = '\x01';
    pplVar12 = &local_58;
    FUN_000175c0(uVar14,&local_a8);
    plVar10 = local_58;
    uVar14 = FUN_00053ac0();
    if (plVar10 == (longlong *)0x0) {
LAB_01c72632:
      pplVar12 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar3 = FUN_00e85ea0();
      uVar14 = extraout_XMM0_Da_00;
      if (cVar3 == '\0') goto LAB_01c72632;
    }
    plVar1 = *pplVar12;
    if (plVar1 == plVar11) {
      if ((bool)(bVar9 & plVar1 != (longlong *)0x0)) {
        if (*(char *)(pplVar12 + 1) != '\0') goto LAB_01c7267d;
        uVar14 = FUN_00d50b00();
        plVar1 = plVar11;
        goto joined_r0x01c726d1;
      }
      uVar7 = local_48 & 0xffffffff;
      plVar1 = plVar11;
    }
    else {
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar1 != (longlong *)0x0) {
          uVar14 = FUN_00d50b00();
        }
        if ((char)local_70 != '\0') {
          uVar14 = FUN_00d50b20();
        }
      }
      else {
        plVar11 = plVar1;
        if ((char)local_70 != '\0') {
          uVar14 = FUN_00d50b20();
        }
LAB_01c7267d:
        *(undefined1 *)(pplVar12 + 1) = 0;
        plVar1 = plVar11;
      }
joined_r0x01c726d1:
      uVar7 = CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      uVar14 = FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      dVar15 = (double)FUN_00d45bc0();
      uVar14 = SUB84(dVar15,0);
      if (((double)unaff_RDI[0x37] != dVar15) || (NAN((double)unaff_RDI[0x37]) || NAN(dVar15))) {
        dVar16 = DAT_0241ea58;
        if (dVar15 <= DAT_0241ea58) {
          dVar16 = dVar15;
        }
        unaff_RDI[0x37] = (longlong)dVar16;
        uVar13 = -(ulonglong)((double)unaff_RDI[0x38] == 0.0);
        dVar15 = (double)_log(SUB84(dVar16 / (double)(~uVar13 & unaff_RDI[0x38] |
                                                     DAT_0238fee8 & uVar13),0));
        *(float *)(unaff_RDI + 0x55) = (float)dVar15;
        uVar14 = (**(code **)(*unaff_RDI + 0x620))();
        *(undefined1 *)(unaff_RDI + 0x3a) = 1;
        if ((longlong *)unaff_RDI[0x46] != (longlong *)0x0) {
          uVar14 = (**(code **)(*(longlong *)unaff_RDI[0x46] + 0x40))();
        }
      }
    }
    lVar5 = DAT_027ebee8;
    if (DAT_027ebee8 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_98 = lVar5;
    local_90 = '\x01';
    pplVar12 = &local_58;
    FUN_000175c0(uVar14,&local_98);
    plVar10 = local_58;
    uVar14 = FUN_00053ac0();
    if (plVar10 == (longlong *)0x0) {
LAB_01c72807:
      pplVar12 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar3 = FUN_00e85ea0();
      uVar14 = extraout_XMM0_Da_01;
      if (cVar3 == '\0') goto LAB_01c72807;
    }
    plVar11 = *pplVar12;
    cVar3 = (char)uVar7;
    if (plVar11 == plVar1) {
      if ((cVar3 == '\0') && (plVar11 != (longlong *)0x0)) {
        plVar11 = plVar1;
        if (*(char *)(pplVar12 + 1) != '\0') goto LAB_01c72854;
        uVar14 = FUN_00d50b00();
        goto joined_r0x01c7288e;
      }
      uVar7 = uVar7 & 0xffffffff;
      plVar11 = plVar1;
    }
    else {
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar11 != (longlong *)0x0) {
          uVar14 = FUN_00d50b00();
        }
        if ((cVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
      }
      else {
        if ((cVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
LAB_01c72854:
        *(undefined1 *)(pplVar12 + 1) = 0;
      }
joined_r0x01c7288e:
      uVar7 = CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      uVar14 = FUN_00d50b20();
    }
    local_48 = uVar7;
    if (plVar11 != (longlong *)0x0) {
      dVar15 = (double)FUN_00d45bc0();
      uVar14 = SUB84(dVar15,0);
      if (((double)unaff_RDI[0x38] != dVar15) || (NAN((double)unaff_RDI[0x38]) || NAN(dVar15))) {
        dVar16 = _DAT_0241eeb8;
        if (_DAT_0241eeb8 <= dVar15) {
          dVar16 = dVar15;
        }
        unaff_RDI[0x38] = (longlong)dVar16;
        dVar15 = (double)_log(SUB84((double)unaff_RDI[0x37] /
                                    (double)(DAT_0238fee8 & -(ulonglong)(dVar16 == 0.0) |
                                            ~-(ulonglong)(dVar16 == 0.0) & (ulonglong)dVar16),0));
        *(float *)(unaff_RDI + 0x55) = (float)dVar15;
        uVar14 = (**(code **)(*unaff_RDI + 0x620))(local_48);
        *(undefined1 *)(unaff_RDI + 0x3a) = 1;
        if ((longlong *)unaff_RDI[0x46] != (longlong *)0x0) {
          uVar14 = (**(code **)(*(longlong *)unaff_RDI[0x46] + 0x40))();
        }
      }
    }
    lVar5 = DAT_027ebef0;
    if (DAT_027ebef0 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_88 = lVar5;
    local_80 = '\x01';
    pplVar12 = &local_58;
    FUN_000175c0(uVar14,&local_88);
    plVar10 = local_58;
    FUN_00053ac0();
    if (plVar10 == (longlong *)0x0) {
LAB_01c729cd:
      pplVar12 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01c729cd;
    }
    plVar10 = *pplVar12;
    if (plVar10 == plVar11) {
      if (((char)local_48 == '\0') && (plVar10 != (longlong *)0x0)) {
        plVar10 = plVar11;
        if (*(char *)(pplVar12 + 1) != '\0') goto LAB_01c72a1c;
        FUN_00d50b00();
        goto joined_r0x01c72a59;
      }
      uVar7 = local_48 & 0xffffffff;
      plVar10 = plVar11;
    }
    else {
      if (*(char *)(pplVar12 + 1) == '\0') {
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if (((char)local_48 != '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_48 != '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01c72a1c:
        *(undefined1 *)(pplVar12 + 1) = 0;
      }
joined_r0x01c72a59:
      uVar7 = 1;
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (plVar10 != (longlong *)0x0) {
      iVar4 = FUN_00d45870();
      if (iVar4 == 0) {
        FUN_01c4e0b0();
      }
      else {
        iVar4 = FUN_00d45870();
        if (iVar4 == 1) {
          FUN_01c4e0b0();
        }
      }
    }
    plVar11 = (longlong *)unaff_RDI[0x46];
    if (plVar11 != local_68) {
      if (plVar11 == (longlong *)0x0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (**(code **)(*plVar11 + 0x10))();
      }
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b00();
      unaff_RDI[0x46] = (longlong)local_68;
      plVar11 = local_68;
      if (lVar5 != 0) {
        FUN_00d50b20();
        plVar11 = (longlong *)unaff_RDI[0x46];
      }
    }
    (**(code **)(*plVar11 + 0x30))(local_74);
    *(undefined1 *)((longlong)unaff_RDI + 0x2e2) = 1;
  }
  cVar3 = (char)uVar7;
  (**(code **)(*local_68 + 0x10))();
  FUN_00d50b20();
LAB_01c72b3d:
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  if ((cVar3 != '\0') && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


