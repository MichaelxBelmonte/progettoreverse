// Function: FUN_01a608f0
// Address: 01a608f0
// Size: 1758 bytes
// Class: MUTool

void FUN_01a608f0(void* param_1)

{
  bool bVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  void *pvVar5;
  int64_t lVar6;
  double *pdVar7;
  int64_t *plVar8;
  int64_t this_ptr;
  int64_t *plVar9;
  uint32_t uVar10;
  double dVar11;
  double dVar12;
  uint64_t uVar13;
  double dVar14;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  int64_t *local_b8;
  char local_b0;
  uint8_t local_78 [16];
  uint32_t local_58;
  uint32_t uStack_54;
  int64_t *local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  
  local_78._8_8_ = 0;
  local_78._0_8_ = g_023dccdc;
  FUN_01989f80();
  if (local_40 == (int64_t *)0x0) {
    bVar1 = true;
    plVar9 = (int64_t *)0x0;
  }
  else {
    plVar9 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
    }
    else {
      bVar1 = false;
    }
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012dff00();
  if (local_40 != (int64_t *)0x0) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_0125a280();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_01264170();
    plVar8 = *(int64_t **)(this_ptr + 0x170);
    dVar14 = 0.0;
    if ((plVar8 != (int64_t *)0x0) && (*(int64_t *)(this_ptr + 0x178) != 0)) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        plVar8 = *(int64_t **)(this_ptr + 0x170);
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      pdVar7 = (double *)(**(code **)(*plVar8 + 0x218))();
      dVar14 = *pdVar7;
    }
    uVar13 = (**(code **)(*plVar9 + 0x938))(dVar11 + dVar12 * dVar14 * g_023942d0);
    FUN_00d74120();
    lVar6 = g_027e1e80;
    if (g_027e1e80 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_40 + 0x50))();
    cVar4 = '\x01';
    if (cVar3 == '\0') {
      FUN_00d74120();
      lVar2 = g_027bf050;
      if (g_027bf050 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*local_b8 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar16._8_8_ = extraout_XMM0_Qb;
    auVar16._0_8_ = uVar13;
    local_78 = blendps(local_78,auVar16,1);
    if (cVar4 != '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_01264170();
      local_58 = SUB84(dVar11,0);
      uStack_54 = (uint32_t)((uint64_t)dVar11 >> 0x20);
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_01264170();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (dVar14 < dVar11) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff70();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar13 = FUN_01264170();
        local_58 = (uint32_t)uVar13;
        uStack_54 = (uint32_t)((uint64_t)uVar13 >> 0x20);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_0125a280();
      plVar8 = *(int64_t **)(this_ptr + 0x170);
      dVar11 = 0.0;
      if ((plVar8 != (int64_t *)0x0) && (*(int64_t *)(this_ptr + 0x178) != 0)) {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          plVar8 = *(int64_t **)(this_ptr + 0x170);
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
        }
        pdVar7 = (double *)(**(code **)(*plVar8 + 0x218))();
        dVar11 = *pdVar7;
      }
      auVar15._0_8_ =
           (**(code **)(*plVar9 + 0x938))
                     (dVar14 + (double)CONCAT44(uStack_54,local_58) * dVar11 * g_023942d0);
      auVar15._8_8_ = extraout_XMM0_Qb_00;
      local_78 = blendps(local_78,auVar15,1);
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125a2c0();
    uVar10 = FUN_0198a7d0();
    FUN_00d74120();
    lVar6 = g_027bf050;
    if (g_027bf050 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*local_40 + 0x50))();
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar16 = insertps(local_78,uVar10,0x10);
    if (cVar3 != '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a2c0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01265b70();
      auVar17._0_8_ = FUN_0198a7d0();
      auVar17._8_8_ = extraout_XMM0_Qb_01;
      insertps(auVar16,auVar17,0x10);
    }
    FUN_00d50b20();
  }
  if (!bVar1 && plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

