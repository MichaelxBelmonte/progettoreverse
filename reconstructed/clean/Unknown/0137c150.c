// Function: FUN_0137c150
// Address: 0137c150
// Size: 507 bytes
// Class: Unknown

void FUN_0137c150(void* param_1,void*param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  double dVar3;
  char cVar4;
  void *pvVar5;
  float *arg1;
  int64_t this_ptr;
  int64_t lVar6;
  uint32_t uVar7;
  float fVar8;
  int64_t local_48;
  char local_40;
  float local_38;
  float local_34;
  
  uVar7 = FUN_0137bae0();
  *param_2 = uVar7;
  *arg1 = NAN;
  lVar1 = *(int64_t *)(this_ptr + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  if (0 < *(int *)(lVar1 + 0xc)) {
    local_34 = 0.0;
    lVar6 = 0;
    local_38 = 0.0;
    do {
      lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_014bc070();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 == '\0') {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar3 = (double)FUN_013de9b0();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar8 = (float)FUN_013de3b0();
        local_34 = local_34 + fVar8 * (float)dVar3;
        local_38 = local_38 + (float)dVar3;
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar1 + 0xc));
    if (g_02394274 <= local_38) {
      *arg1 = local_34 / local_38;
    }
  }
  FUN_00d50b20();
  return;
}

