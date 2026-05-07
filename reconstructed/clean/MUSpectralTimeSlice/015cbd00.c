// Function: FUN_015cbd00
// Address: 015cbd00
// Size: 2110 bytes
// Class: MUSpectralTimeSlice
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void FUN_015cbd00(int64_t *param_1)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  code *pcVar4;
  int64_t *plVar5;
  char cVar6;
  void*puVar7;
  void*puVar8;
  int64_t lVar9;
  void *pvVar10;
  int64_t lVar11;
  void*puVar12;
  void* pVar13;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar14;
  int64_t lVar15;
  uint32_t uVar16;
  uint32_t uVar17;
  int64_t local_98;
  char local_90;
  int64_t *local_50;
  int64_t *local_40;
  char local_38;
  
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  pcVar4 = g_02572370;
  (*g_02572370)();
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  (*pcVar4)();
  lVar9 = *arg1;
  if (0 < *(int *)(lVar9 + 0xc)) {
    lVar15 = 0;
    do {
      plVar5 = local_40;
      lVar9 = *(int64_t *)(*(int64_t *)(lVar9 + 0x10) + lVar15 * 8);
      if (lVar9 != 0) {
        FUN_00d50b00();
      }
      pvVar10 = _pthread_getspecific((void*)param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        pvVar10 = _pthread_getspecific((void*)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        pvVar10 = _pthread_getspecific((void*)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_014bc070();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar6 == '\0') {
          pvVar10 = _pthread_getspecific((void*)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013df480();
          if (local_40 == (int64_t *)0x0) {
            cVar6 = '\0';
          }
          else {
            pvVar10 = _pthread_getspecific((void*)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013df480();
            pvVar10 = _pthread_getspecific((void*)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar6 = FUN_013c8ce0();
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar6 != '\0') {
            *(void*)(this_ptr + 0x94) = 1;
          }
          pvVar10 = _pthread_getspecific((void*)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          pvVar10 = _pthread_getspecific((void*)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dfdd0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 == (int64_t *)0x0) {
            bVar3 = false;
            local_50 = (int64_t *)0x0;
          }
          else {
            pvVar10 = _pthread_getspecific((void*)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e5500();
            local_50 = local_40;
            if (local_40 == (int64_t *)0x0) {
              local_50 = (int64_t *)0x0;
              bVar3 = false;
              param_1 = local_40;
            }
            else {
              bVar3 = true;
              param_1 = local_40;
              if (local_38 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          pvVar10 = _pthread_getspecific((void*)param_1);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            param_1 = local_40;
          }
          dVar1 = (double)FUN_014bb640();
          pvVar10 = _pthread_getspecific((void*)param_1);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            param_1 = local_40;
          }
          dVar2 = (double)FUN_014bb710();
          pvVar10 = _pthread_getspecific((void*)param_1);
          plVar14 = local_40;
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            param_1 = local_40;
            plVar14 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
          }
          pVar13 = (void*)param_1;
          uVar16 = (**(code **)(*plVar14 + 0x3e0))();
          pvVar10 = _pthread_getspecific(pVar13);
          if ((pvVar10 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
            pVar13 = (void*)local_40;
          }
          uVar17 = FUN_014ecb20();
          puVar12 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar12 = &g_025f30f8;
          puVar12[2] = 0;
          puVar12[3] = 0;
          *(void*)((int64_t)puVar12 + 0x1c) = 0;
          *(void*)((int64_t)puVar12 + 0x24) = 0;
          FUN_00d500e0();
          puVar12[2] = dVar1;
          *(void*)(puVar12 + 4) = uVar17;
          *(void*)(puVar12 + 5) = uVar17;
          *(void*)((int64_t)puVar12 + 0x24) = uVar16;
          puVar12[3] = dVar2 - dVar1;
          FUN_00d21140();
          if (local_50 == (int64_t *)0x0) {
            lVar11 = puVar12[2];
            uVar16 = *(void*)(puVar12 + 4);
            local_40 = (int64_t *)FUN_00e8fc40();
            FUN_00d4ff40();
            *local_40 = (int64_t)&g_025f30f8;
            local_40[2] = 0;
            local_40[3] = 0;
            *(void*)((int64_t)local_40 + 0x1c) = 0;
            *(void*)((int64_t)local_40 + 0x24) = 0;
            FUN_00d500e0();
            local_40[2] = lVar11;
            *(void*)(local_40 + 4) = uVar16;
            FUN_00d21140();
            FUN_00d50b20();
          }
          else {
            local_40 = local_50;
            cVar6 = FUN_00d23d70();
            if (cVar6 == '\0') {
              pvVar10 = _pthread_getspecific(pVar13);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar16 = FUN_014bae60();
              puVar12 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar12 = &g_025f30f8;
              puVar12[2] = 0;
              puVar12[3] = 0;
              *(void*)((int64_t)puVar12 + 0x1c) = 0;
              *(void*)((int64_t)puVar12 + 0x24) = 0;
              FUN_00d500e0();
              puVar12[2] = dVar1;
              *(void*)(puVar12 + 4) = uVar16;
              FUN_00d21140();
              FUN_00d50b20();
              FUN_00d21140();
            }
          }
          local_38 = '\0';
          FUN_00d50b20();
          if ((bVar3) && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar5 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      if (lVar9 != 0) {
        FUN_00d50b20();
      }
      lVar15 = lVar15 + 1;
      lVar9 = *arg1;
      param_1 = (int64_t *)(int64_t)*(int *)(lVar9 + 0xc);
    } while (lVar15 < (int64_t)param_1);
  }
  FUN_015cabc0();
  if (puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

