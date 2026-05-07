// Function: FUN_01525150
// Address: 01525150
// Size: 2111 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_01525150(int64_t param_1,uint64_t param_2)

{
  void*puVar1;
  int iVar2;
  void*puVar3;
  bool bVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  void*puVar8;
  void* pVar9;
  int64_t lVar10;
  int64_t this_ptr;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t unaff_R15;
  undefined7 uVar13;
  double dVar14;
  uint64_t uVar15;
  int64_t local_d0;
  uint8_t local_c8;
  int64_t local_c0;
  uint8_t local_b8;
  int64_t local_b0;
  uint8_t local_a8;
  int64_t local_a0;
  uint8_t local_98;
  void*local_90;
  uint8_t local_88;
  void*local_80;
  uint8_t local_78;
  void*local_70;
  uint8_t local_68;
  void*local_60;
  uint8_t local_58;
  code *local_50;
  void*local_48;
  double local_38;
  
  local_38 = *(double *)(this_ptr + 0x38);
  lVar7 = *(int64_t *)(this_ptr + 0x48);
  if (*(int *)(lVar7 + 0xc) < 1) {
    param_2 = 0;
    lVar10 = 0;
    lVar7 = *(int64_t *)(this_ptr + 0x50);
    iVar2 = *(int *)(lVar7 + 0xc);
  }
  else {
    lVar11 = 0;
    lVar10 = 0;
    local_48 = (void*)0x0;
    uVar12 = 0;
    do {
      lVar7 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + lVar11 * 8);
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
      pVar9 = (void*)param_1;
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = FUN_01524a20();
      pvVar5 = _pthread_getspecific(pVar9);
      lVar7 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar7 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      *(void**)(lVar7 + 0x38) = local_48;
      pvVar5 = _pthread_getspecific(pVar9);
      lVar7 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar7 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      *(double *)(lVar7 + 0x40) = local_38;
      if (((double)local_50 == g_02390448) && (!NAN((double)local_50) && !NAN(g_02390448)))
      break;
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_01524a10();
      local_48 = (void*)((double)local_48 + (double)local_50);
      local_38 = local_38 + dVar14 * (double)local_50;
      lVar11 = lVar11 + 1;
      lVar7 = *(int64_t *)(this_ptr + 0x48);
      param_1 = (int64_t)*(int *)(lVar7 + 0xc);
      uVar12 = param_2;
      unaff_R15 = param_2;
    } while (lVar11 < param_1);
    local_38 = *(double *)(this_ptr + 0x38);
    lVar7 = *(int64_t *)(this_ptr + 0x50);
    iVar2 = *(int *)(lVar7 + 0xc);
  }
  if (0 < iVar2) {
    lVar11 = 0;
    local_48 = (void*)0x0;
    uVar12 = param_2 & 0xffffffff;
    do {
      pVar9 = (void*)param_2;
      lVar7 = *(int64_t *)(*(int64_t *)(lVar7 + 0x10) + lVar11 * 8);
      uVar13 = (undefined7)((uint64_t)this_ptr >> 8);
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
      local_50 = FUN_01524a20();
      pvVar5 = _pthread_getspecific(pVar9);
      lVar7 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar7 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      *(void**)(lVar7 + 0x38) = local_48;
      pvVar5 = _pthread_getspecific(pVar9);
      lVar7 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar7 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      *(double *)(lVar7 + 0x40) = local_38;
      if (((double)local_50 == g_02390448) && (!NAN((double)local_50) && !NAN(g_02390448)))
      break;
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_01524a10();
      local_48 = (void*)((double)local_48 - (double)local_50);
      local_38 = local_38 - dVar14 * (double)local_50;
      lVar11 = lVar11 + 1;
      lVar7 = *(int64_t *)(this_ptr + 0x50);
      uVar12 = param_2;
    } while (lVar11 < *(int *)(lVar7 + 0xc));
  }
  puVar1 = (void*)(this_ptr + 0x60);
  FUN_00d64850();
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  local_48 = &g_025683c0;
  *puVar8 = &g_025683c0;
  local_50 = g_025683d8;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  puVar3 = (void*)*puVar1;
  if (puVar3 == puVar8) {
    uVar15 = FUN_00d50b20();
LAB_01525621:
    puVar8 = (void*)*puVar1;
    if (puVar8 != (void*)0x0) goto LAB_0152563c;
    bVar4 = true;
    puVar8 = (void*)0x0;
  }
  else {
    *puVar1 = puVar8;
    if (puVar3 != (void*)0x0) {
      uVar15 = FUN_00d50b20();
      goto LAB_01525621;
    }
LAB_0152563c:
    local_88 = 0;
    uVar15 = FUN_00d50b00();
    bVar4 = false;
  }
  local_88 = 1;
  lVar7 = *(int64_t *)(this_ptr + 0x48);
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
  puVar1 = (void*)(this_ptr + 0x68);
  FUN_00d64850();
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = local_48;
  (*local_50)();
  FUN_00c92170();
  FUN_00c92160();
  puVar3 = (void*)*puVar1;
  if (puVar3 == puVar8) {
    uVar15 = FUN_00d50b20();
LAB_01525727:
    puVar8 = (void*)*puVar1;
    if (puVar8 != (void*)0x0) goto LAB_0152573f;
    bVar4 = true;
    puVar8 = (void*)0x0;
  }
  else {
    *puVar1 = puVar8;
    if (puVar3 != (void*)0x0) {
      uVar15 = FUN_00d50b20();
      goto LAB_01525727;
    }
LAB_0152573f:
    local_78 = 0;
    uVar15 = FUN_00d50b00();
    bVar4 = false;
  }
  local_78 = 1;
  lVar7 = *(int64_t *)(this_ptr + 0x50);
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
  puVar1 = (void*)(this_ptr + 0x78);
  FUN_00d64850();
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = local_48;
  (*local_50)();
  FUN_00c92170();
  FUN_00c92160();
  puVar3 = (void*)*puVar1;
  if (puVar3 == puVar8) {
    uVar15 = FUN_00d50b20();
LAB_01525821:
    puVar8 = (void*)*puVar1;
    if (puVar8 != (void*)0x0) goto LAB_01525839;
    bVar4 = true;
    puVar8 = (void*)0x0;
  }
  else {
    *puVar1 = puVar8;
    if (puVar3 != (void*)0x0) {
      uVar15 = FUN_00d50b20();
      goto LAB_01525821;
    }
LAB_01525839:
    local_68 = 0;
    uVar15 = FUN_00d50b00();
    bVar4 = false;
  }
  local_68 = 1;
  lVar7 = *(int64_t *)(this_ptr + 0x48);
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
  puVar1 = (void*)(this_ptr + 0x80);
  FUN_00d64850();
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = local_48;
  (*local_50)();
  FUN_00c92170();
  FUN_00c92160();
  puVar3 = (void*)*puVar1;
  if (puVar3 == puVar8) {
    uVar15 = FUN_00d50b20();
LAB_0152591e:
    puVar8 = (void*)*puVar1;
    if (puVar8 == (void*)0x0) {
      bVar4 = true;
      puVar8 = (void*)0x0;
      goto LAB_01525941;
    }
  }
  else {
    *puVar1 = puVar8;
    if (puVar3 != (void*)0x0) {
      uVar15 = FUN_00d50b20();
      goto LAB_0152591e;
    }
  }
  local_58 = 0;
  uVar15 = FUN_00d50b00();
  bVar4 = false;
LAB_01525941:
  local_58 = 1;
  lVar7 = *(int64_t *)(this_ptr + 0x50);
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

