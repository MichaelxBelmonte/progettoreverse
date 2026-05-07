// Function: FUN_01525150
// Address: 01525150
// Size: 2111 bytes
// Class: MUScalePitchSystem


void FUN_01525150(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  longlong unaff_RDI;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong unaff_R15;
  undefined7 uVar13;
  double dVar14;
  undefined8 uVar15;
  longlong local_d0;
  undefined1 local_c8;
  longlong local_c0;
  undefined1 local_b8;
  longlong local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined1 local_98;
  undefined8 *local_90;
  undefined1 local_88;
  undefined8 *local_80;
  undefined1 local_78;
  undefined8 *local_70;
  undefined1 local_68;
  undefined8 *local_60;
  undefined1 local_58;
  code *local_50;
  undefined *local_48;
  double local_38;
  
  local_38 = *(double *)(unaff_RDI + 0x38);
  lVar7 = *(longlong *)(unaff_RDI + 0x48);
  if (*(int *)(lVar7 + 0xc) < 1) {
    param_2 = 0;
    lVar10 = 0;
    lVar7 = *(longlong *)(unaff_RDI + 0x50);
    iVar2 = *(int *)(lVar7 + 0xc);
  }
  else {
    lVar11 = 0;
    lVar10 = 0;
    local_48 = (undefined *)0x0;
    uVar12 = 0;
    do {
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar11 * 8);
      uVar13 = (undefined7)(unaff_R15 >> 8);
      if (lVar10 == lVar7) {
        lVar7 = lVar10;
        if (((char)uVar12 == '\0') && (lVar10 != 0)) {
          FUN_00d50b00(param_1,param_2);
          param_2 = CONCAT71(uVar13,1);
        }
        else {
          param_2 = uVar12 & 0xffffffff;
        }
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00(param_1,param_2);
        }
        param_2 = CONCAT71(uVar13,1);
        if (((char)uVar12 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar10 = lVar7;
      pVar9 = (pthread_key_t)param_1;
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = (code *)FUN_01524a20();
      pvVar5 = _pthread_getspecific(pVar9);
      lVar7 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar7 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      *(undefined **)(lVar7 + 0x38) = local_48;
      pvVar5 = _pthread_getspecific(pVar9);
      lVar7 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar7 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      *(double *)(lVar7 + 0x40) = local_38;
      if (((double)local_50 == DAT_02390448) && (!NAN((double)local_50) && !NAN(DAT_02390448)))
      break;
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_01524a10();
      local_48 = (undefined *)((double)local_48 + (double)local_50);
      local_38 = local_38 + dVar14 * (double)local_50;
      lVar11 = lVar11 + 1;
      lVar7 = *(longlong *)(unaff_RDI + 0x48);
      param_1 = (longlong)*(int *)(lVar7 + 0xc);
      uVar12 = param_2;
      unaff_R15 = param_2;
    } while (lVar11 < param_1);
    local_38 = *(double *)(unaff_RDI + 0x38);
    lVar7 = *(longlong *)(unaff_RDI + 0x50);
    iVar2 = *(int *)(lVar7 + 0xc);
  }
  if (0 < iVar2) {
    lVar11 = 0;
    local_48 = (undefined *)0x0;
    uVar12 = param_2 & 0xffffffff;
    do {
      pVar9 = (pthread_key_t)param_2;
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar11 * 8);
      uVar13 = (undefined7)((ulonglong)unaff_RDI >> 8);
      if (lVar10 == lVar7) {
        lVar7 = lVar10;
        if (((char)uVar12 == '\0') && (lVar10 != 0)) {
          param_2 = CONCAT71(uVar13,1);
          FUN_00d50b00();
        }
        else {
          param_2 = uVar12 & 0xffffffff;
        }
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        param_2 = CONCAT71(uVar13,1);
        if (((char)uVar12 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar10 = lVar7;
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = (code *)FUN_01524a20();
      pvVar5 = _pthread_getspecific(pVar9);
      lVar7 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar7 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      *(undefined **)(lVar7 + 0x38) = local_48;
      pvVar5 = _pthread_getspecific(pVar9);
      lVar7 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar7 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      *(double *)(lVar7 + 0x40) = local_38;
      if (((double)local_50 == DAT_02390448) && (!NAN((double)local_50) && !NAN(DAT_02390448)))
      break;
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_01524a10();
      local_48 = (undefined *)((double)local_48 - (double)local_50);
      local_38 = local_38 - dVar14 * (double)local_50;
      lVar11 = lVar11 + 1;
      lVar7 = *(longlong *)(unaff_RDI + 0x50);
      uVar12 = param_2;
    } while (lVar11 < *(int *)(lVar7 + 0xc));
  }
  puVar1 = (undefined8 *)(unaff_RDI + 0x60);
  FUN_00d64850();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  local_48 = &DAT_025683c0;
  *puVar8 = &DAT_025683c0;
  local_50 = DAT_025683d8;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  puVar3 = (undefined8 *)*puVar1;
  if (puVar3 == puVar8) {
    uVar15 = FUN_00d50b20();
LAB_01525621:
    puVar8 = (undefined8 *)*puVar1;
    if (puVar8 != (undefined8 *)0x0) goto LAB_0152563c;
    bVar4 = true;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = puVar8;
    if (puVar3 != (undefined8 *)0x0) {
      uVar15 = FUN_00d50b20();
      goto LAB_01525621;
    }
LAB_0152563c:
    local_88 = 0;
    uVar15 = FUN_00d50b00();
    bVar4 = false;
  }
  local_88 = 1;
  lVar7 = *(longlong *)(unaff_RDI + 0x48);
  local_90 = puVar8;
  if (lVar7 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_c8 = 1;
  local_d0 = lVar7;
  FUN_01525c50(uVar15,&local_d0);
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  FUN_00d64910();
  puVar1 = (undefined8 *)(unaff_RDI + 0x68);
  FUN_00d64850();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = local_48;
  (*local_50)();
  FUN_00c92170();
  FUN_00c92160();
  puVar3 = (undefined8 *)*puVar1;
  if (puVar3 == puVar8) {
    uVar15 = FUN_00d50b20();
LAB_01525727:
    puVar8 = (undefined8 *)*puVar1;
    if (puVar8 != (undefined8 *)0x0) goto LAB_0152573f;
    bVar4 = true;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = puVar8;
    if (puVar3 != (undefined8 *)0x0) {
      uVar15 = FUN_00d50b20();
      goto LAB_01525727;
    }
LAB_0152573f:
    local_78 = 0;
    uVar15 = FUN_00d50b00();
    bVar4 = false;
  }
  local_78 = 1;
  lVar7 = *(longlong *)(unaff_RDI + 0x50);
  local_80 = puVar8;
  if (lVar7 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_b8 = 1;
  local_c0 = lVar7;
  FUN_01525c50(uVar15,&local_c0);
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  FUN_00d64910();
  puVar1 = (undefined8 *)(unaff_RDI + 0x78);
  FUN_00d64850();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = local_48;
  (*local_50)();
  FUN_00c92170();
  FUN_00c92160();
  puVar3 = (undefined8 *)*puVar1;
  if (puVar3 == puVar8) {
    uVar15 = FUN_00d50b20();
LAB_01525821:
    puVar8 = (undefined8 *)*puVar1;
    if (puVar8 != (undefined8 *)0x0) goto LAB_01525839;
    bVar4 = true;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = puVar8;
    if (puVar3 != (undefined8 *)0x0) {
      uVar15 = FUN_00d50b20();
      goto LAB_01525821;
    }
LAB_01525839:
    local_68 = 0;
    uVar15 = FUN_00d50b00();
    bVar4 = false;
  }
  local_68 = 1;
  lVar7 = *(longlong *)(unaff_RDI + 0x48);
  local_70 = puVar8;
  if (lVar7 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_a8 = 1;
  local_b0 = lVar7;
  FUN_01525fb0(uVar15,&local_b0);
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  FUN_00d64910();
  puVar1 = (undefined8 *)(unaff_RDI + 0x80);
  FUN_00d64850();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = local_48;
  (*local_50)();
  FUN_00c92170();
  FUN_00c92160();
  puVar3 = (undefined8 *)*puVar1;
  if (puVar3 == puVar8) {
    uVar15 = FUN_00d50b20();
LAB_0152591e:
    puVar8 = (undefined8 *)*puVar1;
    if (puVar8 == (undefined8 *)0x0) {
      bVar4 = true;
      puVar8 = (undefined8 *)0x0;
      goto LAB_01525941;
    }
  }
  else {
    *puVar1 = puVar8;
    if (puVar3 != (undefined8 *)0x0) {
      uVar15 = FUN_00d50b20();
      goto LAB_0152591e;
    }
  }
  local_58 = 0;
  uVar15 = FUN_00d50b00();
  bVar4 = false;
LAB_01525941:
  local_58 = 1;
  lVar7 = *(longlong *)(unaff_RDI + 0x50);
  local_60 = puVar8;
  if (lVar7 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_98 = 1;
  local_a0 = lVar7;
  FUN_01525fb0(uVar15,&local_a0);
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  FUN_00d64910();
  if (((char)param_2 != '\0') && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return;
}


