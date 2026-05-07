// Function: FUN_002ccab0
// Address: 002ccab0
// Size: 1796 bytes
// Class: GNScrollView
// String references:
//   "%d sec"
//   "%.1f kHz"
//   "%@, %@, %@"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_002ccab0(uint64_t param_1,double *param_2)

{
  int iVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  uint64_t uVar5;
  void* pVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int iVar9;
  double *arg1;
  void*this_ptr;
  int64_t *plVar10;
  void* pVar11;
  bool bVar12;
  bool bVar13;
  double dVar14;
  uint64_t uVar15;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  int64_t *local_a8;
  int64_t *local_a0;
  int64_t *local_90;
  uint32_t local_88;
  void* local_84;
  double *local_80;
  int64_t *local_78;
  uint local_70;
  double local_68;
  uint64_t local_60;
  int local_58;
  uint32_t uStack_54;
  char local_50;
  int64_t local_48;
  char local_40;
  double local_38;
  
  dVar14 = *arg1;
  if ((dVar14 == 0.0) || (*(int *)((int64_t)dVar14 + 0xc) == 0)) {
    if ((*param_2 == 0.0) || (*(int *)((int64_t)*param_2 + 0xc) == 0)) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    if (dVar14 != 0.0) goto LAB_002ccaee;
    uVar15 = 0;
    local_38 = 0.0;
    pVar11 = 0;
    bVar13 = false;
    iVar1 = 0;
    dVar14 = *param_2;
    if (dVar14 == 0.0) {
      uVar5 = 0;
      goto LAB_002ccef1;
    }
  }
  else {
LAB_002ccaee:
    local_70 = local_70 & 0xffffff00;
    local_78 = (int64_t *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    pVar11 = 0;
    bVar13 = false;
    iVar1 = 0;
    local_38 = 0.0;
    local_80 = param_2;
    local_68 = dVar14;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar9 = -local_60._4_4_;
        }
        else {
          iVar9 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar9);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar9 = 0;
        }
        local_60 = CONCAT44(iVar9,(int)local_60);
      }
      lVar2 = (int64_t)(int)local_60;
      iVar9 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar9);
      if (*(int *)((int64_t)local_68 + 0xc) <= iVar9) break;
      local_78 = *(int64_t **)(*(int64_t *)((int64_t)local_68 + 0x10) + 8 + lVar2 * 8);
      if (iVar1 == 0) {
        iVar1 = FUN_00b86c20();
        bVar13 = true;
      }
      else {
        iVar9 = FUN_00b86c20();
        if (iVar1 != iVar9) {
          bVar13 = false;
        }
      }
      lVar2 = FUN_00b7a710();
      dVar14 = (double)FUN_00b7a6d0();
      pVar6 = pVar11;
      if (pVar11 != (int)((double)lVar2 / dVar14)) {
        pVar6 = 0xffffffff;
      }
      bVar12 = pVar11 == 0;
      pVar11 = pVar6;
      if (bVar12) {
        pVar11 = (int)((double)lVar2 / dVar14);
      }
      if ((local_38 != g_02390448) || (NAN(local_38) || NAN(g_02390448))) {
        dVar14 = (double)FUN_00b7a6d0();
        if ((local_38 != dVar14) || (NAN(local_38) || NAN(dVar14))) {
          local_38 = g_023b19a0;
        }
      }
      else {
        local_38 = (double)FUN_00b7a6d0();
      }
    }
    uVar15 = FUN_002d7370();
    dVar14 = *local_80;
    uVar5 = 0;
    if (dVar14 == 0.0) goto LAB_002ccef1;
  }
  local_70 = local_70 & 0xffffff00;
  local_78 = (int64_t *)0x0;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_60._4_4_ = 0;
  local_68 = dVar14;
  while( true ) {
    if (local_60._4_4_ != 0) {
      if (local_60._4_4_ < 1) {
        iVar9 = -local_60._4_4_;
      }
      else {
        iVar9 = (int)local_60 - local_60._4_4_;
        local_60 = CONCAT44(local_60._4_4_,iVar9);
        FUN_00d23690();
        local_58 = local_58 + local_60._4_4_;
        iVar9 = 0;
      }
      local_60 = CONCAT44(iVar9,(int)local_60);
    }
    lVar2 = (int64_t)(int)local_60;
    iVar9 = (int)local_60 + 1;
    local_60 = CONCAT44(local_60._4_4_,iVar9);
    if (*(int *)((int64_t)local_68 + 0xc) <= iVar9) break;
    lVar4 = *(int64_t *)((int64_t)local_68 + 0x10);
    plVar7 = *(int64_t **)(lVar4 + 8 + lVar2 * 8);
    local_78 = plVar7;
    if (iVar1 == 0) {
      pvVar3 = _pthread_getspecific((void*)lVar4);
      plVar10 = local_78;
      pVar6 = (void*)lVar4;
      if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
        plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      iVar1 = (**(code **)(*plVar7 + 0x380))();
      bVar13 = true;
    }
    else {
      pvVar3 = _pthread_getspecific((void*)lVar4);
      plVar10 = local_78;
      pVar6 = (void*)lVar4;
      if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
        plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      iVar9 = (**(code **)(*plVar7 + 0x380))();
      if (iVar1 != iVar9) {
        bVar13 = false;
      }
    }
    plVar7 = local_78;
    pvVar3 = _pthread_getspecific(pVar6);
    plVar10 = local_78;
    if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
      plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
    lVar2 = (**(code **)(*plVar7 + 0x378))();
    plVar7 = local_78;
    pvVar3 = _pthread_getspecific(pVar6);
    plVar10 = local_78;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), plVar7 = plVar10, lVar4 != 0)) {
      plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    dVar14 = (double)(**(code **)(*plVar7 + 0x370))();
    plVar7 = local_78;
    pVar6 = 0xffffffff;
    if (pVar11 == (int)((double)lVar2 / dVar14)) {
      pVar6 = pVar11;
    }
    bVar12 = pVar11 == 0;
    pVar11 = pVar6;
    if (bVar12) {
      pVar11 = (int)((double)lVar2 / dVar14);
    }
    if ((local_38 != g_02390448) || (NAN(local_38) || NAN(g_02390448))) {
      pvVar3 = _pthread_getspecific(pVar6);
      plVar10 = local_78;
      if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
        plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      dVar14 = (double)(**(code **)(*plVar7 + 0x370))();
      if ((local_38 != dVar14) || (NAN(local_38) || NAN(dVar14))) {
        local_38 = g_023b19a0;
      }
    }
    else {
      pvVar3 = _pthread_getspecific(pVar6);
      plVar10 = local_78;
      if ((pvVar3 != (void *)0x0) && (lVar2 = FUN_00e8b990(), plVar7 = plVar10, lVar2 != 0)) {
        plVar7 = (int64_t *)plVar10[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      local_38 = (double)(**(code **)(*plVar7 + 0x370))();
    }
  }
  uVar5 = FUN_002d7290();
  uVar15 = extraout_XMM0_Qa;
LAB_002ccef1:
  plVar7 = g_02726ce0;
  if (bVar13) {
    uVar5 = FUN_00ae6870();
    plVar7 = local_78;
    uVar15 = extraout_XMM0_Qa_01;
    if (local_78 == (int64_t *)0x0) {
      plVar7 = (int64_t *)0x0;
      local_80 = (double *)0x0;
    }
    else {
      local_80 = (double *)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
      if ((char)local_70 == '\0') {
        uVar15 = FUN_00d50b00();
        if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          uVar15 = FUN_00d50b20();
        }
      }
    }
  }
  else {
    if (g_02726ce0 != (int64_t *)0x0) {
      uVar5 = FUN_00d50b00();
      uVar15 = extraout_XMM0_Qa_00;
    }
    local_80 = (double *)CONCAT71((int7)((uint64_t)uVar5 >> 8),plVar7 != (int64_t *)0x0);
  }
  plVar10 = g_02726ce0;
  if ((int)pVar11 < 1) {
    if (g_02726ce0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    bVar13 = plVar10 != (int64_t *)0x0;
    plVar8 = g_02726ce0;
  }
  else {
    local_88 = 1;
    local_90 = &g_024cc6f0;
    local_84 = pVar11;
    FUN_00d8cb40(uVar15,&local_90);
    plVar10 = local_78;
    plVar8 = g_02726ce0;
    if (local_78 == (int64_t *)0x0) {
      plVar10 = (int64_t *)0x0;
      bVar13 = false;
    }
    else {
      bVar13 = true;
      if ((char)local_70 == '\0') {
        FUN_00d50b00();
        plVar8 = g_02726ce0;
        if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar8 = g_02726ce0;
        }
      }
    }
  }
  g_02726ce0 = plVar8;
  if (local_38 <= 0.0) {
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    bVar12 = plVar8 != (int64_t *)0x0;
  }
  else {
    local_68 = local_38 / g_023907c0;
    local_70 = 1;
    local_78 = (int64_t *)&g_024de5e0;
    FUN_00d8cb40(0,&local_78);
    plVar8 = local_90;
    if (local_90 == (int64_t *)0x0) {
      plVar8 = (int64_t *)0x0;
      bVar12 = false;
    }
    else {
      bVar12 = true;
      if ((char)local_88 == '\0') {
        FUN_00d50b00();
        if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  local_a8 = plVar8;
  local_a0 = plVar10;
  local_90 = plVar7;
  uVar15 = FUN_002bd7b0(&local_a0,&local_a8,3);
  FUN_00d8cb40(uVar15,&local_78);
  local_78 = (int64_t *)&g_025df260;
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_78 = (int64_t *)&g_0253d630;
  if ((local_50 != '\0') && (CONCAT44(uStack_54,local_58) != 0)) {
    FUN_00d50b20();
  }
  local_78 = &g_024c5048;
  if (((char)local_60 != '\0') && (local_68 != 0.0)) {
    FUN_00d50b20();
  }
  if ((bVar12) && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar13) && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

