// Function: FUN_0135c990
// Address: 0135c990
// Size: 1623 bytes
// Class: Unknown

void FUN_0135c990(uint64_t param_1)

{
  bool bVar1;
  int64_t *plVar2;
  bool bVar3;
  char cVar4;
  void*puVar5;
  void*puVar6;
  void *pvVar7;
  int64_t lVar8;
  void*puVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int64_t *arg1;
  int64_t *plVar12;
  bool bVar13;
  int64_t *plVar14;
  uint uVar15;
  int64_t local_100;
  uint8_t local_f8;
  int64_t *local_f0;
  uint8_t local_e8;
  int64_t *local_e0;
  uint8_t local_d8;
  int64_t *local_d0;
  uint8_t local_c8;
  uint8_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  void*local_a0;
  uint8_t local_98;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  uint64_t local_38;
  
  plVar2 = local_50;
  local_100 = *arg1;
  if (*(int *)(local_100 + 0xc) != 0) {
    local_f8 = 0;
    FUN_013514e0(param_1,&local_100);
    if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar9 = &g_02572358;
    *puVar6 = &g_02572358;
    (*g_02572370)();
    if (local_50 != (int64_t *)0x0) {
      lVar8 = local_50[2];
      for (lVar11 = 0; lVar11 < *(int *)(lVar8 + 0xc); lVar11 = lVar11 + 1) {
        pvVar7 = _pthread_getspecific((void*)puVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5f50();
      }
    }
    plVar10 = (int64_t *)*arg1;
    uVar15 = *(uint *)((int64_t)plVar10 + 0xc);
    local_38 = (uint64_t)uVar15;
    if (0 < (int)uVar15) {
      local_40 = (int64_t *)0x0;
      bVar1 = false;
      bVar13 = false;
      plVar12 = (int64_t *)0x0;
      do {
        uVar15 = uVar15 - 1;
        plVar14 = plVar10 + 2;
        plVar10 = (int64_t *)(uint64_t)uVar15;
        plVar14 = *(int64_t **)(*plVar14 + (int64_t)plVar10 * 8);
        if (local_40 == plVar14) {
          plVar14 = local_40;
          bVar3 = bVar1;
          if ((!bVar1) && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b00();
            bVar3 = true;
          }
        }
        else {
          plVar10 = plVar14;
          if (plVar14 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar1) && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar1 = bVar3;
        local_40 = plVar14;
        pvVar7 = _pthread_getspecific((void*)plVar10);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar10 = local_40;
        }
        FUN_013de560();
        if (local_50 == plVar12) {
          if ((bVar13) || (local_50 == (int64_t *)0x0)) {
joined_r0x0135cc59:
            plVar14 = plVar12;
            bVar3 = bVar13;
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar14 = plVar12;
            bVar3 = true;
            if (local_48 == '\0') {
              FUN_00d50b00();
              goto LAB_0135cc45;
            }
          }
        }
        else {
          plVar14 = local_50;
          if (local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            if ((bVar13) && (plVar12 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar12 = local_50;
LAB_0135cc45:
              bVar13 = true;
              goto joined_r0x0135cc59;
            }
          }
          else {
            bVar3 = true;
            if ((bVar13) && (plVar12 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        bVar13 = bVar3;
        pvVar7 = _pthread_getspecific((void*)plVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_014bc070();
        if (cVar4 == '\0') {
          pvVar7 = _pthread_getspecific((void*)plVar10);
          plVar12 = plVar14;
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar12 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar12 + 0x380))();
          pvVar7 = _pthread_getspecific((void*)plVar10);
          plVar12 = plVar14;
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar12 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar12 + 0x388))();
          FUN_00e7b4e0();
          local_f0 = local_40;
          local_e8 = 0;
          cVar4 = FUN_01353c30();
          if (cVar4 != '\0') {
            cVar4 = FUN_00d24090();
            if (cVar4 != '\0') {
              local_e0 = local_40;
              local_d8 = 0;
              FUN_0134afd0();
            }
            cVar4 = FUN_00d24090();
            if (cVar4 == '\0') {
              local_c8 = 0;
              local_d0 = plVar14;
              FUN_0134a9a0();
            }
            FUN_015b4ee0();
            local_50 = local_40;
            local_48 = '\0';
            FUN_00d21140();
          }
        }
        if ((int64_t)local_38 < 2) goto LAB_0135cef3;
        local_38 = local_38 - 1;
        plVar10 = (int64_t *)*arg1;
        plVar12 = plVar14;
      } while( true );
    }
    bVar13 = false;
    plVar14 = (int64_t *)0x0;
    bVar1 = false;
    local_40 = (int64_t *)0x0;
LAB_0135cef3:
    if (plVar2 != (int64_t *)0x0) {
      lVar8 = plVar2[2];
      for (lVar11 = 0; lVar11 < *(int *)(lVar8 + 0xc); lVar11 = lVar11 + 1) {
        pvVar7 = _pthread_getspecific((void*)plVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5f60();
      }
    }
    if (0xe < *(int *)(puVar5 + 3) + 7U) {
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      FUN_013469e0();
      local_98 = 0;
      local_a0 = puVar5;
      FUN_01353f80();
    }
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((bVar13) && (plVar14 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar1) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

