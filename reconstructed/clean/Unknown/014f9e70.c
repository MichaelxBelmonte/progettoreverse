// Function: FUN_014f9e70
// Address: 014f9e70
// Size: 731 bytes
// Class: Unknown
// String references:
//   "MU12TETPitchSystem"

uint64_t FUN_014f9e70(void* param_1)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t unaff_R12;
  uint64_t uVar10;
  int64_t *plVar11;
  int64_t lVar12;
  
  plVar11 = (int64_t *)*arg1;
  uVar10 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
  if (plVar11 == this_ptr) goto LAB_014f9f74;
  if ((g_0278c570 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027c3448 = FUN_0015ea50();
    g_027c3430 = "MU12TETPitchSystem";
    g_027c3438 = 0x68;
    param_1 = 0x15ec50;
    g_027c3440 = FUN_0015ec50;
    g_027c3450 = 0;
    ram_00000000027c3458 = 0;
    g_027c3460 = 0;
    ram_00000000027c3468 = 0;
    g_027c3470 = 0;
    ram_00000000027c3478 = 0;
    g_027c3480 = 0;
    ram_00000000027c3488 = 0;
    g_027c3490 = 0;
    ram_00000000027c3498 = 0;
    g_027c34a0 = 0;
    ram_00000000027c34a8 = 0;
    g_027c34b0 = 0;
    ram_00000000027c34b8 = 0;
    g_027c34c0 = 0;
    ram_00000000027c34c8 = 0;
    g_027c34d0 = 0;
    ram_00000000027c34d8 = 0;
    g_027c34e0 = 0;
    ram_00000000027c34e8 = 0;
    g_027c34f0 = 0;
    ___cxa_guard_release();
  }
  if (plVar11 == (int64_t *)0x0) {
LAB_014f9ec8:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_014f9ec8;
  }
  lVar12 = *arg1;
  if (lVar12 != 0) {
    lVar8 = this_ptr[0xb];
    pvVar6 = _pthread_getspecific(param_1);
    if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
      iVar5 = *(int *)(lVar12 + 0x58);
    }
    else {
      iVar5 = *(int *)(*(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8)
                      + 0x58);
    }
    if ((int)lVar8 == iVar5) {
      fVar2 = *(float *)((int64_t)this_ptr + 0x5c);
      pvVar6 = _pthread_getspecific(param_1);
      if ((pvVar6 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        if ((fVar2 == *(float *)(lVar12 + 0x5c)) && (!NAN(fVar2) && !NAN(*(float *)(lVar12 + 0x5c)))
           ) goto LAB_014f9f86;
      }
      else {
        pfVar1 = (float *)(*(int64_t *)
                            (lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) + 0x5c);
        if ((fVar2 == *pfVar1) && (!NAN(fVar2) && !NAN(*pfVar1))) {
LAB_014f9f86:
          pvVar6 = _pthread_getspecific(param_1);
          lVar8 = lVar12;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar8 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          lVar7 = this_ptr[0xc];
          if (lVar7 == *(int64_t *)(lVar8 + 0x60)) goto LAB_014f9f74;
          if (lVar7 != 0) {
            pvVar6 = _pthread_getspecific((void*)lVar7);
            pVar9 = (void*)lVar7;
            lVar8 = lVar12;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              lVar8 = *(int64_t *)(lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
            if (*(int64_t *)(lVar8 + 0x60) != 0) {
              plVar11 = (int64_t *)this_ptr[0xc];
              pvVar6 = _pthread_getspecific(pVar9);
              if (pvVar6 != (void *)0x0) {
                plVar11 = (int64_t *)this_ptr[0xc];
                lVar8 = FUN_00e8b990();
                if (lVar8 != 0) {
                  plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
                }
              }
              pvVar6 = _pthread_getspecific(pVar9);
              if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                lVar12 = *(int64_t *)
                          (lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
              }
              lVar12 = *(int64_t *)(lVar12 + 0x60);
              if (lVar12 != 0) {
                FUN_00d50b00();
              }
              uVar4 = (**(code **)(*plVar11 + 0x50))();
              uVar10 = (uint64_t)uVar4;
              if (lVar12 != 0) {
                FUN_00d50b20();
              }
              goto LAB_014f9f74;
            }
          }
        }
      }
    }
  }
  uVar10 = 0;
LAB_014f9f74:
  return uVar10 & 0xffffffff;
}

