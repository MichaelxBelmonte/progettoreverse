// Function: FUN_0135e480
// Address: 0135e480
// Size: 943 bytes
// Class: Unknown

void* FUN_0135e480(uint64_t param_1,int64_t *param_2)

{
  int iVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t arg1;
  void*this_ptr;
  double dVar9;
  double dVar10;
  uint8_t local_78 [8];
  int64_t local_70;
  uint8_t local_68;
  uint64_t local_60;
  int64_t local_48;
  char local_40;
  uint8_t local_31;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &g_02572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  if (((*(int64_t *)(arg1 + 0x1f8) == 0) && (*(int64_t *)(arg1 + 0x200) == 0)) &&
     (*(int64_t *)(arg1 + 0x148) != 0)) {
    pvVar3 = _pthread_getspecific((void*)puVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar1 = FUN_0141bab0();
    if (iVar1 == 3) goto LAB_0135e7b1;
  }
  plVar7 = (int64_t *)*param_2;
  if (plVar7 != (int64_t *)0x0) {
    pvVar3 = _pthread_getspecific((void*)puVar6);
    if (pvVar3 != (void *)0x0) {
      plVar7 = (int64_t *)*param_2;
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        plVar7 = (int64_t *)plVar7[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
    }
    local_60 = (**(code **)(*plVar7 + 0x3a0))();
    pvVar3 = _pthread_getspecific((void*)puVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar9 = (double)FUN_014bb640();
    lVar4 = *(int64_t *)(arg1 + 0x40);
    if (0 < *(int *)(lVar4 + 0xc)) {
      lVar8 = 0;
      do {
        pVar5 = (void*)puVar6;
        lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar8 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_013de8d0();
        if (dVar10 < dVar9) {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar10 = (double)FUN_013dea30();
          if (dVar9 < dVar10) {
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar10 = (double)FUN_013de8d0();
            if (g_0240f100 < dVar9 - dVar10) {
              pvVar3 = _pthread_getspecific(pVar5);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar10 = (double)FUN_013dea30();
              if (g_0240f100 < dVar10 - dVar9) {
                if (lVar4 != 0) {
                  FUN_00d50b00();
                  FUN_00d50b20();
                  local_31 = 0;
                  local_68 = 0;
                  local_70 = lVar4;
                  FUN_0135f200(local_60,&local_70,local_78,&local_31);
                  if (local_40 == '\0') {
                    if (local_48 == 0) goto LAB_0135e833;
                    FUN_00d50b00();
                  }
                  else if (local_48 == 0) goto LAB_0135e833;
                  FUN_00d21140();
                  FUN_00d21140();
                  FUN_00d50b20();
LAB_0135e833:
                  *this_ptr = puVar2;
                  *(void*)(this_ptr + 1) = 1;
                  FUN_00d50b20();
                  return this_ptr;
                }
                break;
              }
            }
          }
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
        lVar4 = *(int64_t *)(arg1 + 0x40);
        puVar6 = (void*)(int64_t)*(int *)(lVar4 + 0xc);
      } while (lVar8 < (int64_t)puVar6);
    }
  }
LAB_0135e7b1:
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

