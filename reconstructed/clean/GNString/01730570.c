// Function: FUN_01730570
// Address: 01730570
// Size: 2334 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01730570(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void*puVar4;
  void *pvVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  void*puVar9;
  void* pVar10;
  uint64_t uVar11;
  void*puVar12;
  int64_t *plVar13;
  int64_t this_ptr;
  int64_t lVar14;
  bool bVar15;
  double dVar16;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar17 [16];
  uint64_t local_110;
  uint64_t local_108;
  uint64_t local_100;
  code *local_f8;
  uint32_t local_ec;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  int64_t *local_88;
  char local_80;
  uint64_t local_78;
  char local_70;
  uint64_t local_68;
  char local_60;
  int local_58;
  uint32_t uStack_54;
  char cStack_50;
  undefined7 uStack_4f;
  uint64_t local_48;
  double dStack_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar12 = &g_025683c0;
  *puVar4 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  puVar9 = *(void**)(this_ptr + 0x10);
  if (puVar9 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x10) = puVar4;
    if (puVar9 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d227d0();
  pvVar5 = _pthread_getspecific((void*)puVar12);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510d50();
  local_90 = CONCAT44(uStack_54,local_58);
  if ((((cStack_50 == '\0') && (local_90 != 0)) && (FUN_00d50b00(), cStack_50 != '\0')) &&
     (CONCAT44(uStack_54,local_58) != 0)) {
    FUN_00d50b20();
  }
  local_80 = '\0';
  local_88 = (int64_t *)0x0;
  local_ec = 0xffffffff;
  local_f8 = g_025795c0;
  do {
    pvVar5 = _pthread_getspecific((void*)puVar12);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_00e7bdb0();
    uVar7 = FUN_00e7bdb0();
    cVar2 = FUN_01252960(uVar7,uVar6,&local_88,&local_110);
    if (cVar2 == '\0') {
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_90 != 0) {
        FUN_00d50b20();
      }
      if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
        return;
      }
                          ___stack_chk_fail();
    }
    pvVar5 = _pthread_getspecific((void*)uVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_100 = FUN_01743720();
    local_58 = (int)local_100;
    iVar3 = local_58 * 7;
    uVar11 = (uint64_t)
             ((int)(iVar3 + (((uint)(iVar3 / 6 + (iVar3 >> 0x1f)) >> 1) - (iVar3 >> 0x1f)) * -0xc)
              >> 0x1f & 0xc);
    lVar14 = 0;
    do {
      plVar13 = local_88;
      pvVar5 = _pthread_getspecific((void*)uVar11);
      plVar1 = local_88;
      if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar13 = plVar1, lVar8 != 0)) {
        plVar13 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      iVar3 = (**(code **)(*plVar13 + 0x378))();
      if (iVar3 == -1000000) {
LAB_017307d0:
        *(void*)((int64_t)&uStack_54 + lVar14) = 0;
      }
      else {
        pvVar5 = _pthread_getspecific((void*)uVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01740240();
        if (local_68 == 0) goto LAB_017307d0;
        if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific((void*)uVar11);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_01739840();
        *(char *)((int64_t)&uStack_54 + lVar14) = -cVar2;
        FUN_00d50b20();
      }
      pVar10 = (void*)uVar11;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0xc);
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar5 = _pthread_getspecific(pVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736d70();
    if (local_68 == 0) {
      bVar15 = false;
    }
    else {
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01736d70();
      iVar3 = FUN_00d8c7a0();
      bVar15 = iVar3 != 0;
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (bVar15) {
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &g_025795a8;
      (*local_f8)();
      uVar6 = FUN_0177f010();
      FUN_01780260(uVar6,local_100);
      uVar11 = local_68;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_00d8dbf0();
      if (uVar11 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      FUN_016ab300();
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar5 = _pthread_getspecific(pVar10);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_01736d70();
      local_c0 = local_b0;
      local_b8 = 0;
      if (local_a8 == '\0') {
        if (local_b0 != 0) {
          uVar6 = FUN_00d50b00();
        }
      }
      else {
        local_a8 = '\0';
      }
      local_b8 = '\x01';
      FUN_016ac280(uVar6,&local_c0);
      uVar11 = local_68;
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      uVar6 = FUN_00d8dbf0();
      if (uVar11 != 0) {
        uVar6 = FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        uVar6 = FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        uVar6 = FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        uVar6 = FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        uVar6 = FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        uVar6 = FUN_00d50b20();
      }
      FUN_00d8cf90(uVar6,6);
      uVar11 = local_68;
      if ((((local_60 == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != 0)) {
        FUN_00d50b20();
      }
      local_60 = '\0';
      local_68 = uVar11;
      FUN_00d21140();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      local_48 = *(void*)(uVar11 + 0x10);
      FUN_00d50b20();
      FUN_00d50b20();
    }
    else {
      local_68 = 0;
      local_60 = '\0';
      FUN_00d21140();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      local_48 = 0;
    }
    local_68 = local_110;
    local_78 = local_108;
    puVar12 = (void*)(local_110 >> 0x20);
    if (puVar12 == (void*)0x0) {
      dVar16 = 0.0;
      if (local_108 >> 0x20 != 0) {
        auVar17._0_8_ = FUN_00e7c860();
        auVar17._8_8_ = extraout_XMM0_Qb;
        auVar17 = roundsd(auVar17,auVar17,0xb);
        dVar16 = auVar17._0_8_ + g_023b19a0;
      }
    }
    else {
      dVar16 = (double)FUN_00e7c860();
    }
    lVar14 = *(int64_t *)(this_ptr + 0x10);
    lVar8 = (int64_t)*(int *)(lVar14 + 0x18);
    dStack_40 = dVar16;
    FUN_00c8e340(dVar16,1);
    lVar14 = *(int64_t *)(lVar14 + 0x10);
    puVar9 = (void*)(lVar14 + 0x10 + lVar8);
    *puVar9 = local_48;
    puVar9[1] = dStack_40;
    puVar9 = (void*)(lVar14 + lVar8);
    *puVar9 = CONCAT44(uStack_54,local_58);
    puVar9[1] = CONCAT71(uStack_4f,cStack_50);
  } while( true );
}

