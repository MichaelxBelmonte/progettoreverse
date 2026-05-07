// Function: FUN_01937560
// Address: 01937560
// Size: 2537 bytes
// Class: MDMetaWindowController

uint64_t FUN_01937560(uint64_t param_1,char param_2)

{
  bool bVar1;
  code *pcVar2;
  int64_t *plVar3;
  void*puVar4;
  int64_t lVar5;
  void *pvVar6;
  void*puVar7;
  char *pcVar8;
  void* pVar9;
  int64_t lVar10;
  char *pcVar11;
  void*puVar12;
  int64_t *plVar13;
  uint64_t uVar14;
  int64_t *this_ptr;
  int64_t *plVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  uint64_t uVar20;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  void*local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_78;
  char local_70;
  int local_60;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  plVar3 = local_78;
  (**(code **)(*this_ptr + 0xe20))();
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_00243390();
  if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)((int64_t)local_78 + 0xc) == 0) {
    uVar14 = 0;
  }
  else {
    dVar16 = (double)(**(code **)(*this_ptr + 0xf08))();
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02572358;
    pcVar2 = g_02572370;
    (*g_02572370)();
    local_60 = -1;
    while( true ) {
      lVar5 = (int64_t)local_60;
      local_60 = local_60 + 1;
      if (*(int *)((int64_t)local_78 + 0xc) <= local_60) break;
      lVar10 = *(int64_t *)((int64_t)local_78 + 0x10);
      plVar15 = *(int64_t **)(lVar10 + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((void*)lVar10);
      pVar9 = (void*)lVar10;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar17 = (double)FUN_0125a280();
      if (dVar17 < dVar16) {
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar17 = (double)FUN_01259520();
        if (dVar16 < dVar17) {
          local_40[0] = '\0';
          FUN_00d21140();
          local_48 = plVar15;
          if ((local_40[0] != '\0') && (plVar15 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_001159b0();
    if ((*(int *)((int64_t)puVar4 + 0xc) == 0) || (param_2 == '\0')) {
      uVar14 = CONCAT71((int7)((uint64_t)puVar4 >> 8),*(int *)((int64_t)puVar4 + 0xc) != 0);
LAB_01937f56:
      FUN_00d50b20();
    }
    else {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_02572358;
      (*pcVar2)();
      local_78 = (int64_t *)0x0;
      local_60 = -1;
      bVar1 = false;
      plVar15 = (int64_t *)0x0;
      plVar13 = local_48;
      while( true ) {
        local_48 = plVar13;
        lVar5 = (int64_t)local_60;
        local_60 = local_60 + 1;
        if (*(int *)((int64_t)puVar4 + 0xc) <= local_60) break;
        lVar10 = puVar4[2];
        local_78 = *(int64_t **)(lVar10 + 8 + lVar5 * 8);
        pvVar6 = _pthread_getspecific((void*)lVar10);
        pVar9 = (void*)lVar10;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar17 = (double)FUN_0125a280();
        plVar13 = local_48;
        if (dVar17 < dVar16) {
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar17 = (double)FUN_01259520();
          if (dVar16 < dVar17) {
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            local_38[0] = local_40[0];
            pcVar11 = local_38;
            pcVar8 = local_40;
            if (local_40[0] == '\0') {
              pcVar8 = pcVar11;
            }
            *pcVar8 = '\0';
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pVar9 = (void*)pcVar11;
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar17 = (double)FUN_0125a280();
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264180();
            pvVar6 = _pthread_getspecific(pVar9);
            if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar13 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            dVar17 = (double)(**(code **)(*plVar13 + 0x380))(dVar16 - dVar17);
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar18 = (double)FUN_013de8d0();
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013df480();
            pvVar6 = _pthread_getspecific(pVar9);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar19 = (double)FUN_01327990();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_e8 = '\0';
            local_e0 = 0;
            local_d8 = '\0';
            local_f0 = local_78;
            FUN_01320250((dVar17 + dVar18) * dVar19,&local_f0);
            if (plVar15 == local_48) {
              plVar13 = plVar15;
              if ((!bVar1) && (plVar15 != (int64_t *)0x0)) {
                if (local_40[0] != '\0') goto LAB_01937be1;
                FUN_00d50b00();
                goto LAB_01937c36;
              }
joined_r0x01937c1d:
              if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              plVar13 = local_48;
              if (local_40[0] == '\0') {
                if (local_48 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar1) && (plVar15 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01937c36:
                bVar1 = true;
                goto joined_r0x01937c1d;
              }
              if ((bVar1) && (plVar15 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_01937be1:
              local_40[0] = '\0';
              bVar1 = true;
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_40[0] = '\0';
            FUN_00d21140();
            if ((local_40[0] != '\0') && (plVar13 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_40[0] = '\0';
            FUN_00d23f50();
            if ((local_40[0] != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            plVar15 = plVar13;
            plVar13 = local_78;
            if ((local_38[0] != '\0') && (plVar13 = local_78, local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
              plVar13 = local_78;
            }
          }
        }
      }
      puVar12 = puVar4;
      FUN_001159b0();
      pVar9 = (void*)puVar12;
      (**(code **)(&UNK_00001668 + *this_ptr))();
      pvVar6 = _pthread_getspecific(pVar9);
      if ((pvVar6 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        local_78 = (int64_t *)local_78[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      local_c8 = '\0';
      local_d0 = puVar7;
      uVar20 = FUN_01364ca0(dVar16);
      if ((local_c8 != '\0') && (local_d0 != (void*)0x0)) {
        uVar20 = FUN_00d50b20();
      }
      if (puVar7 != (void*)0x0) {
        local_60 = -1;
        while( true ) {
          lVar5 = (int64_t)local_60;
          local_60 = local_60 + 1;
          if (*(int *)((int64_t)puVar7 + 0xc) <= local_60) break;
          local_78 = *(int64_t **)(*(int64_t *)(puVar7[2] + 8 + lVar5 * 8) + 0x28);
          if (local_78 != (int64_t *)0x0) {
            uVar20 = FUN_00d50b00();
          }
          local_40[0] = '\0';
          uVar20 = FUN_00d214d0(uVar20,*(void*)((int64_t)plVar3 + 0xc));
          if ((local_40[0] != '\0') && (local_78 != (int64_t *)0x0)) {
            uVar20 = FUN_00d50b20();
          }
          if (local_78 != (int64_t *)0x0) {
            uVar20 = FUN_00d50b20();
          }
        }
        FUN_01954b60();
      }
      uVar20 = (**(code **)(*this_ptr + 0xda0))();
      local_c0 = (int64_t)plVar3;
      local_b8 = '\0';
      (**(code **)(*this_ptr + 0xdb8))(uVar20,1);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar1) && (plVar15 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar7 != (void*)0x0) {
        FUN_00d50b20();
      }
      uVar14 = CONCAT71((int7)((uint64_t)local_78 >> 8),1);
      if (puVar4 != (void*)0x0) goto LAB_01937f56;
    }
    if (plVar3 == (int64_t *)0x0) goto LAB_01937f69;
  }
  FUN_00d50b20();
LAB_01937f69:
  return uVar14 & 0xffffffff;
}

