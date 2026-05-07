// Function: FUN_015bea90
// Address: 015bea90
// Size: 2158 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_015bea90(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  void* pVar8;
  uint32_t uVar9;
  int64_t lVar10;
  int64_t *arg1;
  int64_t this_ptr;
  float fVar11;
  float fVar12;
  float fVar13;
  int64_t local_60;
  char local_58;
  
  uVar9 = (uint32_t)((uint64_t)param_1 >> 0x20);
  pVar8 = (void*)param_1;
  lVar10 = *arg1;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar10 = *arg1;
    lVar3 = FUN_00e8b990();
    if (lVar3 != 0) {
      lVar10 = *(int64_t *)(lVar10 + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
    }
  }
  lVar10 = *(int64_t *)(lVar10 + 0x58);
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  lVar3 = *arg1;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar3 = *arg1;
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      lVar3 = *(int64_t *)(lVar3 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
  }
  lVar3 = *(int64_t *)(lVar3 + 0x50);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  lVar4 = *arg1;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar4 = *arg1;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar4 = *(int64_t *)(lVar4 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  lVar4 = *(int64_t *)(lVar4 + 0x60);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00c8e690();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar5 = *arg1;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar5 = *arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  if (*(char *)(lVar5 + 0x9c) == '\0') {
    FUN_015bc030();
    *(void*)(lVar5 + 0x9c) = 1;
  }
  lVar5 = *arg1;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar5 = *arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  if (0 < *(int *)(this_ptr + 0x44)) {
    fVar13 = *(float *)(lVar5 + 0x94) + g_02390124;
    fVar13 = (float)(-(uint)(fVar13 < g_02390124) & (uint)(fVar13 + fVar13 + g_02390d00) |
                    ~-(uint)(fVar13 < g_02390124) & (uint)fVar13);
    plVar1 = (int64_t *)(lVar10 + 0x10);
    if (fVar13 <= g_02390124) {
      lVar5 = 0;
      fVar12 = g_0240d16c;
      if (g_02390124 < fVar13) {
        do {
          fVar13 = *(float *)(*(int64_t *)(lVar3 + 0x10) + lVar5 * 4);
          if (fVar12 <= fVar13) {
            fVar12 = fVar13;
          }
          pvVar2 = _pthread_getspecific(pVar8);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar13 = (float)FUN_015b8f00(fVar12,0);
          fVar12 = g_0240d16c;
          plVar7 = plVar1;
          if (lVar5 == 0) {
            plVar7 = (int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10);
          }
          fVar13 = fVar13 * *(float *)(*plVar7 + lVar5 * 4);
          fVar11 = g_0240d16c;
          if (g_0240d16c <= fVar13) {
            fVar11 = fVar13;
          }
          *(float *)(*(int64_t *)(local_60 + 0x10) + lVar5 * 4) = fVar11;
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(this_ptr + 0x44));
      }
      else {
        do {
          fVar13 = *(float *)(*(int64_t *)(lVar3 + 0x10) + lVar5 * 4);
          if (fVar12 <= fVar13) {
            fVar12 = fVar13;
          }
          pvVar2 = _pthread_getspecific(pVar8);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar13 = (float)FUN_015b8f00(fVar12,0);
          fVar12 = g_0240d16c;
          plVar7 = plVar1;
          if (lVar5 == 0) {
            plVar7 = (int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10);
          }
          fVar11 = fVar13 * *(float *)(*(int64_t *)(lVar4 + 0x10) + lVar5 * 4) *
                   *(float *)(*plVar7 + lVar5 * 4);
          fVar13 = g_0240d16c;
          if (g_0240d16c <= fVar11) {
            fVar13 = fVar11;
          }
          *(float *)(*(int64_t *)(local_60 + 0x10) + lVar5 * 4) = fVar13;
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(this_ptr + 0x44));
      }
    }
    else if (fVar13 <= g_02390124) {
      lVar5 = 0;
      do {
        fVar13 = *(float *)(*(int64_t *)(lVar3 + 0x10) + lVar5 * 4) *
                 *(float *)(*(int64_t *)(lVar4 + 0x10) + lVar5 * 4);
        pvVar2 = _pthread_getspecific(pVar8);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar12 = g_0240d16c;
        if (g_0240d16c <= fVar13) {
          fVar12 = fVar13;
        }
        fVar13 = (float)FUN_015b8f00(fVar12,0);
        plVar7 = plVar1;
        if (lVar5 == 0) {
          plVar7 = (int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10);
        }
        fVar12 = fVar13 * *(float *)(*(int64_t *)(lVar4 + 0x10) + lVar5 * 4) *
                 *(float *)(*plVar7 + lVar5 * 4);
        fVar13 = g_0240d16c;
        if (g_0240d16c <= fVar12) {
          fVar13 = fVar12;
        }
        *(float *)(*(int64_t *)(local_60 + 0x10) + lVar5 * 4) = fVar13;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(this_ptr + 0x44));
    }
    else {
      lVar5 = 0;
      do {
        fVar13 = *(float *)(*(int64_t *)(lVar3 + 0x10) + lVar5 * 4) *
                 *(float *)(*(int64_t *)(lVar4 + 0x10) + lVar5 * 4);
        pvVar2 = _pthread_getspecific(pVar8);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar12 = g_0240d16c;
        if (g_0240d16c <= fVar13) {
          fVar12 = fVar13;
        }
        fVar13 = (float)FUN_015b8f00(fVar12,0);
        plVar7 = plVar1;
        if (lVar5 == 0) {
          plVar7 = (int64_t *)(*(int64_t *)(this_ptr + 0x58) + 0x10);
        }
        fVar13 = fVar13 * *(float *)(*plVar7 + lVar5 * 4);
        fVar12 = g_0240d16c;
        if (g_0240d16c <= fVar13) {
          fVar12 = fVar13;
        }
        *(float *)(*(int64_t *)(local_60 + 0x10) + lVar5 * 4) = fVar12;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(this_ptr + 0x44));
    }
  }
  if ((*(float *)(this_ptr + 0x94) != 0.0) || (NAN(*(float *)(this_ptr + 0x94)))) {
    FUN_00d64850();
    *(void*)(this_ptr + 0x94) = 0;
    FUN_00d64910();
  }
  lVar5 = *arg1;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar5 = *arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  fVar13 = *(float *)(lVar5 + 0x90);
  if ((*(float *)(this_ptr + 0x90) != fVar13) || (NAN(*(float *)(this_ptr + 0x90)) || NAN(fVar13))
     ) {
    FUN_00d64850();
    *(float *)(this_ptr + 0x90) = fVar13;
    FUN_00d64910();
  }
  lVar5 = *arg1;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar5 = *arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  fVar13 = *(float *)(lVar5 + 0xa4);
  if ((*(float *)(this_ptr + 0xa4) != fVar13) || (NAN(*(float *)(this_ptr + 0xa4)) || NAN(fVar13))
     ) {
    FUN_00d64850();
    *(float *)(this_ptr + 0xa4) = fVar13;
    FUN_00d64910();
  }
  lVar5 = *arg1;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar5 = *arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  fVar13 = *(float *)(lVar5 + 0xa0);
  if ((*(float *)(this_ptr + 0xa0) != fVar13) || (NAN(*(float *)(this_ptr + 0xa0)) || NAN(fVar13))
     ) {
    FUN_00d64850();
    *(float *)(this_ptr + 0xa0) = fVar13;
    FUN_00d64910();
  }
  lVar5 = *arg1;
  pvVar2 = _pthread_getspecific(pVar8);
  if (pvVar2 != (void *)0x0) {
    lVar5 = *arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  fVar13 = *(float *)(lVar5 + 0xa8);
  if ((*(float *)(this_ptr + 0xa8) != fVar13) || (NAN(*(float *)(this_ptr + 0xa8)) || NAN(fVar13))
     ) {
    FUN_00d64850();
    *(float *)(this_ptr + 0xa8) = fVar13;
    FUN_00d64910();
  }
  FUN_015b7cb0();
  FUN_00c8e690();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_60 + 0x18)) {
    _memset_pattern16((void *)CONCAT44(uVar9,pVar8),
                      (void *)((uint64_t)((*(uint *)(local_60 + 0x18) >> 2) - 1) * 4 + 4),param_3);
  }
  FUN_015b92d0();
  FUN_00d50b20();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  return;
}

