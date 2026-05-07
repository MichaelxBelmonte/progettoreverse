// Function: FUN_012eb1d0
// Address: 012eb1d0
// Size: 1022 bytes
// Class: MULSSGenerator

void* FUN_012eb1d0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*puVar4;
  void *pvVar5;
  void*puVar6;
  int64_t arg1;
  void*this_ptr;
  int iVar7;
  int64_t lVar8;
  int64_t local_70;
  char local_68;
  int64_t local_40;
  char local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &g_02572358;
  *puVar4 = &g_02572358;
  (*g_02572370)();
  if (*(int64_t *)(arg1 + 0x58) == 0) {
    pvVar5 = _pthread_getspecific((void*)puVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    pvVar5 = _pthread_getspecific((void*)puVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd790();
    if ((local_68 == '\0') && (local_70 != 0)) {
      FUN_00d50b00();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      if (0 < *(int *)(local_70 + 0xc)) {
        iVar7 = 0;
        do {
          pvVar5 = _pthread_getspecific((void*)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_011ef8d0();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
              goto LAB_012eb500;
            }
          }
          else if (local_40 != 0) {
LAB_012eb500:
            pvVar5 = _pthread_getspecific((void*)puVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_40 == arg1) {
              local_38 = '\0';
              FUN_00d235a0();
            }
            FUN_00d50b20();
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(local_70 + 0xc));
      }
      FUN_0015edf0();
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(arg1 + 0xb0);
    if (lVar1 != 0) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar8 = 0;
        do {
          lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar8 * 8);
          pvVar5 = _pthread_getspecific((void*)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          lVar3 = *param_2;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == lVar3) {
            local_38 = '\0';
            FUN_00d235a0();
            local_40 = lVar2;
          }
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
      }
      FUN_001159b0();
    }
  }
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

