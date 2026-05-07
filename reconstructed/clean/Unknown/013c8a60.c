// Function: FUN_013c8a60
// Address: 013c8a60
// Size: 510 bytes
// Class: Unknown

float FUN_013c8a60(void* param_1)

{
  int64_t lVar1;
  float fVar2;
  char cVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t *plVar6;
  int iVar7;
  uint32_t uVar8;
  double dVar9;
  int64_t *local_48;
  char local_40;
  float local_34;
  
  lVar1 = *(int64_t *)(this_ptr + 200);
  if (lVar1 == 0) {
    local_34 = 0.0;
  }
  else {
    if (*(int *)(lVar1 + 0xc) < 1) {
      local_34 = 0.0;
    }
    else {
      local_34 = 0.0;
      iVar7 = 0;
      do {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_014bc070();
        fVar2 = local_34;
        if (cVar3 == '\0') {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc240();
          if (local_40 == '\0') {
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b00();
              goto LAB_013c8bb0;
            }
          }
          else if (local_48 != (int64_t *)0x0) {
LAB_013c8bb0:
            pvVar4 = _pthread_getspecific(param_1);
            plVar6 = local_48;
            if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar6 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            pvVar4 = _pthread_getspecific(param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = FUN_014bb310();
            dVar9 = (double)(**(code **)(*plVar6 + 0x3a8))(0,uVar8);
            FUN_00d50b20();
            fVar2 = (float)dVar9;
            if ((float)dVar9 <= local_34) {
              fVar2 = local_34;
            }
          }
        }
        local_34 = fVar2;
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_0131c8b0();
  }
  return local_34;
}

