// Function: FUN_01268710
// Address: 01268710
// Size: 1247 bytes
// Class: MUSampledFunction

int64_t * FUN_01268710(void* param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  void* pVar10;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar11;
  int64_t lVar12;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x100) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5ae0();
  if (local_40 == 0) {
    bVar5 = true;
    lVar11 = 0;
  }
  else {
    lVar11 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar5 = false;
    }
    else {
      bVar5 = false;
    }
  }
  FUN_0125e7c0();
  if (local_40 != 0) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      param_1 = (void*)local_40;
    }
    FUN_013e5de0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      if (*(int64_t *)(arg1 + 0xa8) == 0) {
LAB_01268986:
        if (*(int *)(lVar11 + 0xc) < 1) {
          lVar7 = 0;
          bVar4 = false;
        }
        else {
          lVar7 = 0;
          bVar4 = false;
          lVar12 = 0;
          do {
            lVar9 = *(int64_t *)(*(int64_t *)(lVar11 + 0x10) + lVar12 * 8);
            lVar8 = lVar11;
            if (lVar7 == lVar9) {
              if ((!bVar4) && (lVar7 != 0)) {
                bVar4 = true;
                FUN_00d50b00();
              }
            }
            else {
              if (lVar9 != 0) {
                FUN_00d50b00();
              }
              if ((bVar4) && (lVar7 != 0)) {
                FUN_00d50b20();
                bVar4 = true;
                lVar7 = lVar9;
              }
              else {
                bVar4 = true;
                lVar7 = lVar9;
              }
            }
            pVar10 = (void*)lVar8;
            pvVar6 = _pthread_getspecific(pVar10);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e7c0();
            pvVar6 = _pthread_getspecific(pVar10);
            lVar9 = lVar7;
            if ((pvVar6 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
              lVar9 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            dVar1 = *(double *)(lVar9 + 0xe8);
            dVar2 = *(double *)(lVar9 + 0xf0);
            dVar3 = *(double *)(arg1 + 0xe8);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((double)((uint64_t)((dVar1 + dVar2) - dVar3) & g_023908f0) < g_02391038) {
              *(void*)(this_ptr + 1) = 0;
              local_40 = lVar7;
              if (bVar4) {
                *this_ptr = lVar7;
                *(void*)(this_ptr + 1) = 1;
                bVar4 = false;
              }
              else {
                if (lVar7 != 0) {
                  FUN_00d50b00();
                }
                *this_ptr = lVar7;
                *(void*)(this_ptr + 1) = 1;
                bVar4 = false;
              }
              goto LAB_01268b86;
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(lVar11 + 0xc));
        }
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
        local_40 = lVar7;
      }
      else {
        pvVar6 = _pthread_getspecific(param_1);
        lVar7 = arg1;
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar10 = (void*)lVar7;
        FUN_012dff70();
        if (local_40 == 0) goto LAB_01268986;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar10);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        *this_ptr = local_40;
        *(void*)(this_ptr + 1) = 1;
        bVar4 = false;
      }
LAB_01268b86:
      FUN_00d50b20();
      if ((bVar4) && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01268ba5;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01268ba5:
  if (!bVar5 && lVar11 != 0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

