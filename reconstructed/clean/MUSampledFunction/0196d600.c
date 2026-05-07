// Function: FUN_0196d600
// Address: 0196d600
// Size: 934 bytes
// Class: MUSampledFunction

void FUN_0196d600(void* param_1)

{
  void*puVar1;
  int64_t lVar2;
  int64_t lVar3;
  double dVar4;
  uint64_t uVar5;
  char cVar6;
  uint8_t uVar7;
  void *pvVar8;
  void*puVar9;
  int64_t this_ptr;
  int64_t local_60;
  char local_58;
  int64_t local_30;
  char local_28;
  
  if ((*(int64_t *)(this_ptr + 0x178) != 0) &&
     (g_02390124 < *(float *)(this_ptr + 0x114) || g_02390124 == *(float *)(this_ptr + 0x114))
     ) {
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0126bcd0();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 != 0) {
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126ef70();
      if (local_30 == 0) {
        cVar6 = '\0';
      }
      else {
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0126ef70();
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar6 = FUN_0124c5d0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if (cVar6 == '\0') {
        puVar9 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &g_02513860;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        *(void*)((int64_t)puVar9 + 0x29) = 0;
        *(void*)((int64_t)puVar9 + 0x31) = 0;
        FUN_00d500e0();
        puVar1 = *(void**)(this_ptr + 0x1d8);
        if (puVar1 == puVar9) {
          FUN_00d50b20();
        }
        else {
          *(void**)(this_ptr + 0x1d8) = puVar9;
          if (puVar1 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*(int64_t *)(this_ptr + 0x170) + 0x10))();
        FUN_00d50b00();
        FUN_01a05b20();
        if ((int64_t *)(this_ptr + 0x170) != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)(this_ptr + 0x170) + 0x10))();
          FUN_00d50b20();
        }
        uVar7 = FUN_01968c50();
        *(void*)(*(int64_t *)(this_ptr + 0x1d8) + 0x38) = uVar7;
        if (*(int64_t *)(this_ptr + 0x1e0) == 0) {
          return;
        }
        *(void*)(this_ptr + 0x1e0) = 0;
      }
      else {
        dVar4 = (double)FUN_00e7d6f0();
        if (dVar4 - *(double *)(this_ptr + 0x1e8) <= g_023942d0) {
          return;
        }
        puVar9 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &g_02513860;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        *(void*)((int64_t)puVar9 + 0x29) = 0;
        *(void*)((int64_t)puVar9 + 0x31) = 0;
        FUN_00d500e0();
        puVar1 = *(void**)(this_ptr + 0x1d8);
        if (puVar1 == puVar9) {
          FUN_00d50b20();
        }
        else {
          *(void**)(this_ptr + 0x1d8) = puVar9;
          if (puVar1 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*(int64_t *)(this_ptr + 0x170) + 0x10))();
        FUN_00d50b00();
        FUN_01a05b20();
        if ((int64_t *)(this_ptr + 0x170) != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)(this_ptr + 0x170) + 0x10))();
          FUN_00d50b20();
        }
        uVar5 = FUN_00e7d6f0();
        *(void*)(this_ptr + 0x1e8) = uVar5;
        lVar2 = *(int64_t *)(this_ptr + 0x1d8);
        lVar3 = *(int64_t *)(this_ptr + 0x1e0);
        if (lVar3 == lVar2) {
          return;
        }
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        *(int64_t *)(this_ptr + 0x1e0) = lVar2;
        if (lVar3 == 0) {
          return;
        }
      }
      FUN_00d50b20();
    }
  }
  return;
}

