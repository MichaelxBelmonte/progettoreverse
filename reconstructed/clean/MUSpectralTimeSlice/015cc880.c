// Function: FUN_015cc880
// Address: 015cc880
// Size: 1395 bytes
// Class: MUSpectralTimeSlice
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void FUN_015cc880(int64_t param_1)

{
  uint64_t uVar1;
  int64_t *plVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  code *pcVar6;
  char cVar7;
  void*puVar8;
  void*puVar9;
  void *pvVar10;
  int64_t lVar11;
  int64_t lVar12;
  void*puVar13;
  void*puVar14;
  void* pVar15;
  int64_t *arg1;
  int64_t *plVar16;
  int64_t lVar17;
  float fVar18;
  uint32_t uVar19;
  uint32_t uVar20;
  
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  pcVar6 = g_02572370;
  (*g_02572370)();
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02572358;
  (*pcVar6)();
  lVar11 = *arg1;
  if (0 < *(int *)(lVar11 + 0xc)) {
    lVar17 = 0;
    do {
      plVar2 = *(int64_t **)(*(int64_t *)(lVar11 + 0x10) + lVar17 * 8);
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pvVar10 = _pthread_getspecific((void*)param_1);
      if ((pvVar10 == (void *)0x0) || (lVar11 = FUN_00e8b990(), lVar11 == 0)) {
        lVar11 = plVar2[0x28];
      }
      else {
        lVar11 = *(int64_t *)(plVar2[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4] + 0x140);
      }
      if (lVar11 != 0) {
        FUN_00d50b00();
      }
      pvVar10 = _pthread_getspecific((void*)param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar3 = (double)FUN_014bb640();
      pvVar10 = _pthread_getspecific((void*)param_1);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar18 = (float)FUN_014ecc50();
      if (fVar18 <= g_02411268) {
        if (lVar11 != 0) {
          puVar13 = (void*)0x0;
          goto LAB_015ccbc1;
        }
      }
      else {
        pvVar10 = _pthread_getspecific((void*)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar4 = (double)FUN_014bb710();
        pvVar10 = _pthread_getspecific((void*)param_1);
        plVar16 = plVar2;
        if ((pvVar10 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
          plVar16 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
        uVar19 = (**(code **)(*plVar16 + 0x3e0))();
        pvVar10 = _pthread_getspecific((void*)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar20 = FUN_014ecb20();
        puVar13 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar13 = &g_025f30f8;
        puVar13[2] = 0;
        puVar13[3] = 0;
        *(void*)((int64_t)puVar13 + 0x1c) = 0;
        *(void*)((int64_t)puVar13 + 0x24) = 0;
        FUN_00d500e0();
        puVar13[2] = dVar3;
        *(void*)(puVar13 + 4) = uVar20;
        *(void*)(puVar13 + 5) = uVar20;
        *(void*)((int64_t)puVar13 + 0x24) = uVar19;
        puVar13[3] = dVar4 - dVar3;
        FUN_00d21140();
        if (lVar11 == 0) {
          uVar1 = puVar13[2];
          uVar19 = *(void*)(puVar13 + 4);
          puVar14 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar14 = &g_025f30f8;
          puVar14[2] = 0;
          puVar14[3] = 0;
          *(void*)((int64_t)puVar14 + 0x1c) = 0;
          *(void*)((int64_t)puVar14 + 0x24) = 0;
          FUN_00d500e0();
          puVar14[2] = uVar1;
          *(void*)(puVar14 + 4) = uVar19;
          FUN_00d21140();
          FUN_00d50b20();
LAB_015ccd24:
          if (puVar13 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        else {
LAB_015ccbc1:
          bVar5 = fVar18 <= g_02411268;
          pVar15 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),bVar5);
          cVar7 = FUN_00d23d70();
          if (cVar7 == '\0') {
            pvVar10 = _pthread_getspecific(pVar15);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar19 = FUN_014bae60();
            puVar14 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar14 = &g_025f30f8;
            puVar14[2] = 0;
            puVar14[3] = 0;
            *(void*)((int64_t)puVar14 + 0x1c) = 0;
            *(void*)((int64_t)puVar14 + 0x24) = 0;
            FUN_00d500e0();
            puVar14[2] = dVar3;
            *(void*)(puVar14 + 4) = uVar19;
            FUN_00d21140();
            FUN_00d50b20();
            FUN_00d21140();
          }
          if (!bVar5) goto LAB_015ccd24;
        }
        if (lVar11 != 0) {
          FUN_00d50b20();
        }
      }
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar17 = lVar17 + 1;
      lVar11 = *arg1;
      param_1 = (int64_t)*(int *)(lVar11 + 0xc);
    } while (lVar17 < param_1);
  }
  FUN_015cabc0();
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

