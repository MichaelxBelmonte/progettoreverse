// Function: FUN_0015d630
// Address: 0015d630
// Size: 831 bytes
// Class: MDAudioSourceInsp

void* FUN_0015d630(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t arg1;
  void*this_ptr;
  void* pVar6;
  int64_t local_a0;
  char local_98;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int local_40;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar6 = 0x2572358;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  if (*(int64_t *)(arg1 + 0x88) != 0) {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (local_98 == '\0') {
      if (local_a0 == 0) goto LAB_0015d981;
      FUN_00d50b00();
    }
    else if (local_a0 == 0) goto LAB_0015d981;
    if (0 < *(int *)(local_a0 + 0xc)) {
      pVar6 = 0;
      do {
        lVar2 = local_58;
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01265b80();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
            goto LAB_0015d820;
          }
        }
        else if (local_58 != 0) {
LAB_0015d820:
          local_50 = '\0';
          local_58 = 0;
          local_40 = -1;
          while( true ) {
            lVar5 = (int64_t)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar2 + 0xc) <= local_40) break;
            lVar1 = *(int64_t *)(lVar2 + 0x10);
            local_58 = *(int64_t *)(lVar1 + 8 + lVar5 * 8);
            pvVar4 = _pthread_getspecific((void*)lVar1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_011ef640();
            if (local_60 == '\0') {
              if (local_68 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            FUN_00d235a0();
            if (local_68 != 0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_0015edf0();
          FUN_00d50b20();
        }
        pVar6 = pVar6 + 1;
      } while ((int)pVar6 < *(int *)(local_a0 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
LAB_0015d981:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

