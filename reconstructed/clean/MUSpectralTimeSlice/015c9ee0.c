// Function: FUN_015c9ee0
// Address: 015c9ee0
// Size: 2350 bytes
// Class: MUSpectralTimeSlice
// === MUSpectralTimeSlice properties ===
//                   _rightSpectrogramTimeSlices
//                   _attackItems
//                   _allFoundPropertyPoints
//                   _audioSourceItems
//                   _usedTonalPaths


void FUN_015c9ee0(void)

{
  uint *puVar1;
  uint64_t uVar2;
  void* pVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  void*puVar10;
  int64_t lVar11;
  void *pvVar12;
  int64_t lVar13;
  void*puVar14;
  void* pVar15;
  void*puVar16;
  int64_t *arg1;
  uint64_t uVar17;
  int64_t this_ptr;
  int64_t lVar18;
  uint32_t uVar19;
  int64_t local_88;
  char local_80;
  uint32_t local_64;
  void*local_60;
  void*local_58;
  void*local_48;
  char local_40;
  
  puVar10 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar16 = &g_02572358;
  *puVar10 = &g_02572358;
  (*g_02572370)();
  lVar11 = *arg1;
  if (0 < *(int *)(lVar11 + 0xc)) {
    lVar18 = 0;
    do {
      pVar15 = (void*)puVar16;
      lVar11 = *(int64_t *)(*(int64_t *)(lVar11 + 0x10) + lVar18 * 8);
      if (lVar11 != 0) {
        FUN_00d50b00();
      }
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_40 == '\0') {
        if (local_48 != (void*)0x0) {
          FUN_00d50b00();
          goto LAB_015ca020;
        }
LAB_015ca0b0:
        bVar8 = true;
        bVar6 = false;
        local_60 = (void*)0x0;
        bVar7 = false;
        local_58 = (void*)0x0;
LAB_015ca40f:
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar4 = (double)FUN_01259650();
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar5 = (double)FUN_012646c0();
        pvVar12 = _pthread_getspecific(pVar15);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar19 = FUN_0125a2c0();
        local_64 = g_02390124;
        if (local_60 != (void*)0x0) {
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_64 = FUN_014ecb20();
        }
        puVar14 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar14 = &g_025f30f8;
        puVar14[2] = 0;
        puVar14[3] = 0;
        *(void*)((int64_t)puVar14 + 0x1c) = 0;
        *(void*)((int64_t)puVar14 + 0x24) = 0;
        FUN_00d500e0();
        puVar14[2] = dVar4;
        *(void*)(puVar14 + 4) = local_64;
        *(void*)(puVar14 + 5) = local_64;
        *(void*)((int64_t)puVar14 + 0x24) = uVar19;
        puVar14[3] = dVar5 - dVar4;
        FUN_00d21140();
        if (local_58 == (void*)0x0) {
          uVar2 = puVar14[2];
          uVar19 = *(void*)(puVar14 + 4);
          local_48 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_48 = &g_025f30f8;
          local_48[2] = 0;
          local_48[3] = 0;
          *(void*)((int64_t)local_48 + 0x1c) = 0;
          *(void*)((int64_t)local_48 + 0x24) = 0;
          FUN_00d500e0();
          local_48[2] = uVar2;
          *(void*)(local_48 + 4) = uVar19;
          FUN_00d21140();
          FUN_00d50b20();
LAB_015ca7da:
          FUN_00d50b20();
        }
        else {
          lVar13 = *(int64_t *)(this_ptr + 0x60);
          puVar1 = (uint *)(lVar13 + 0xc);
          if (0 < (int)*puVar1) {
            lVar13 = *(int64_t *)(lVar13 + 0x10);
            uVar17 = 0;
            do {
              local_48 = puVar14;
              if ((double)((uint64_t)
                           (*(double *)(*(int64_t *)(lVar13 + uVar17 * 8) + 0x10) - dVar4) &
                          g_023908f0) < g_02391030) goto LAB_015ca7d5;
              uVar17 = uVar17 + 1;
            } while (*puVar1 != uVar17);
          }
          pvVar12 = _pthread_getspecific((void*)lVar13);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar19 = FUN_014bae60();
          local_48 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_48 = &g_025f30f8;
          local_48[2] = 0;
          local_48[3] = 0;
          *(void*)((int64_t)local_48 + 0x1c) = 0;
          *(void*)((int64_t)local_48 + 0x24) = 0;
          FUN_00d500e0();
          local_48[2] = dVar4;
          *(void*)(local_48 + 4) = uVar19;
          FUN_00d21140();
          FUN_00d50b20();
LAB_015ca7d5:
          if (puVar14 != (void*)0x0) goto LAB_015ca7da;
        }
        local_40 = '\0';
        if ((bVar6) && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((bVar7) && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar8) goto LAB_015ca817;
      }
      else {
        if (local_48 == (void*)0x0) goto LAB_015ca0b0;
LAB_015ca020:
        pvVar12 = _pthread_getspecific(pVar15);
        pVar3 = (void*)local_48;
        if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar15 = pVar3;
        }
        FUN_013dfcb0();
        if (local_48 == (void*)0x0) {
          cVar9 = '\0';
        }
        else {
          pvVar12 = _pthread_getspecific(pVar15);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar15 = pVar3;
          }
          FUN_013de560();
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar9 = FUN_014bc070();
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (cVar9 == '\0') {
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          local_60 = local_48;
          puVar14 = local_48;
          if (local_48 == (void*)0x0) {
            local_60 = (void*)0x0;
            bVar6 = false;
          }
          else {
            bVar6 = true;
            if (local_40 == '\0') {
              FUN_00d50b00();
            }
          }
          pvVar12 = _pthread_getspecific((void*)puVar14);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            puVar14 = local_48;
          }
          FUN_013dfdd0();
          if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (local_48 == (void*)0x0) {
            bVar7 = false;
            local_58 = (void*)0x0;
          }
          else {
            pvVar12 = _pthread_getspecific((void*)puVar14);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e5500();
            local_58 = local_48;
            if (local_48 == (void*)0x0) {
              local_58 = (void*)0x0;
              bVar7 = false;
              puVar14 = local_48;
            }
            else {
              bVar7 = true;
              puVar14 = local_48;
              if (local_40 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          pVar15 = (void*)puVar14;
          pvVar12 = _pthread_getspecific(pVar15);
          if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar15 = pVar3;
          }
          FUN_013df480();
          if (local_48 == (void*)0x0) {
            cVar9 = '\0';
          }
          else {
            pvVar12 = _pthread_getspecific(pVar15);
            if ((pvVar12 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              pVar15 = pVar3;
            }
            FUN_013df480();
            pvVar12 = _pthread_getspecific(pVar15);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar9 = FUN_013c8ce0();
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
            FUN_00d50b20();
          }
          if (cVar9 != '\0') {
            *(void*)(this_ptr + 0x94) = 1;
          }
          bVar8 = false;
          goto LAB_015ca40f;
        }
LAB_015ca817:
        FUN_00d50b20();
      }
      if (lVar11 != 0) {
        FUN_00d50b20();
      }
      lVar18 = lVar18 + 1;
      lVar11 = *arg1;
      puVar16 = (void*)(int64_t)*(int *)(lVar11 + 0xc);
    } while (lVar18 < (int64_t)puVar16);
  }
  FUN_015cabc0();
  if (puVar10 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

