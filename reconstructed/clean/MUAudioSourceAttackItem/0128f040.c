// Function: FUN_0128f040
// Address: 0128f040
// Size: 1669 bytes
// Class: MUAudioSourceAttackItem

double FUN_0128f040(void* param_1)

{
  bool bVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t this_ptr;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  float fVar12;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  double local_68;
  double local_58;
  int64_t local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb;
  
  FUN_0125e7c0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  dVar6 = (double)FUN_0128e760();
  if (NAN(dVar6)) {
    if (local_40 == 0) {
      return *(double *)(this_ptr + 0x150);
    }
    dVar6 = *(double *)(this_ptr + 0xf0);
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar7 = (double)FUN_013de9b0();
    dVar6 = dVar6 / dVar7;
    local_68 = dVar6;
    if (*(int64_t *)(this_ptr + 0xa8) != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        if (*(int64_t *)(this_ptr + 0xa8) == 0) {
          local_38 = '\0';
          local_40 = 0;
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
        }
        pvVar2 = _pthread_getspecific(param_1);
        lVar3 = local_40;
        if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar3 = *(int64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        dVar7 = *(double *)(lVar3 + 0xf0);
        if (*(int64_t *)(this_ptr + 0xa8) == 0) {
          local_80 = '\0';
          local_88 = 0;
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
        }
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_013de9b0();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        local_68 = dVar7 / dVar8;
      }
    }
    dVar7 = dVar6;
    if (dVar6 < g_0238fee8) {
      dVar7 = g_0238fee8 / dVar6;
    }
    bVar1 = dVar6 < g_0238fee8 && g_0238fee8 < local_68;
    dVar8 = local_68;
    if (local_68 < g_0238fee8) {
      bVar1 = bVar1 != dVar7 < g_0238fee8;
      dVar8 = g_0238fee8 / local_68;
    }
    if (bVar1) {
      dVar6 = dVar6 * local_68;
    }
    else {
      dVar6 = (double)(~-(uint64_t)(dVar7 < dVar8) & (uint64_t)local_68 |
                      (uint64_t)dVar6 & -(uint64_t)(dVar7 < dVar8));
    }
    local_58 = (g_0238fee8 / dVar6) * *(double *)(this_ptr + 0x150);
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar7 = (double)FUN_013de8d0();
    local_58 = (double)FUN_0128e2f0(dVar6 - dVar7);
    dVar7 = local_58;
    if (local_40 != 0) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_014bd180();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 == 0) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        auVar10._0_8_ = FUN_013de3b0();
        auVar10._8_8_ = extraout_XMM0_Qb;
        if ((!NAN((float)auVar10._0_8_)) && (!NAN(*(float *)(this_ptr + 0xf8)))) {
          auVar11._4_12_ = auVar10._4_12_;
          auVar11._0_4_ = ((float)auVar10._0_8_ - *(float *)(this_ptr + 0xf8)) * g_023941f4;
          fVar5 = (float)_exp2f(auVar11._0_8_);
          fVar12 = g_02390d2c;
          if (fVar5 <= g_02390d2c) {
            fVar12 = fVar5;
          }
          fVar5 = g_0239426c;
          if (g_0239426c <= fVar12) {
            fVar5 = fVar12;
          }
          dVar7 = (double)fVar5 * local_58;
        }
      }
    }
    dVar7 = dVar7 / *(double *)(this_ptr + 0x150);
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_011ef460();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar8 = (double)FUN_014bb4b0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    dVar9 = dVar8 - dVar6;
    if (g_023944e0 <= dVar8 - dVar6) {
      dVar9 = g_023944e0;
    }
    dVar9 = *(double *)(this_ptr + 0xf0) - dVar9;
    if (dVar7 <= dVar9) {
      dVar9 = dVar7;
    }
    if (dVar9 < 0.0) {
      dVar9 = *(double *)(this_ptr + 0xf0) / g_023b3bc0;
    }
    local_58 = local_58 / dVar9;
    if (local_40 == 0) {
      return local_58;
    }
  }
  FUN_00d50b20();
  return local_58;
}

