// Function: FUN_01a9d1d0
// Address: 01a9d1d0
// Size: 546 bytes
// Class: Unknown

int64_t * FUN_01a9d1d0(uint64_t param_1,int64_t *param_2)

{
  uint uVar1;
  int64_t lVar2;
  double dVar3;
  double dVar4;
  void *pvVar5;
  void* in_ECX;
  int64_t *this_ptr;
  uint64_t uVar6;
  int64_t local_48;
  char local_40;
  
  if (*param_2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    dVar3 = (double)FUN_01a991f0();
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    uVar1 = *(uint *)(local_48 + 0xc);
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + uVar6 * 8);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        pvVar5 = _pthread_getspecific(in_ECX);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013faed0();
        dVar4 = (double)FUN_01a99d00();
        if ((double)((uint64_t)((double)(float)param_1 - dVar4) & g_023908f0) < g_02423860) {
          pvVar5 = _pthread_getspecific(in_ECX);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013faf20();
          dVar4 = (double)FUN_01a99230();
          if ((double)((uint64_t)
                       ((double)((float)dVar3 - (float)((uint64_t)param_1 >> 0x20)) - dVar4) &
                      g_023908f0) < g_02423860) {
            *this_ptr = lVar2;
            *(void*)(this_ptr + 1) = 1;
            goto LAB_01a9d3f1;
          }
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
LAB_01a9d3f1:
    FUN_00d50b20();
  }
  return this_ptr;
}

