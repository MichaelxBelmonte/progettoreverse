// Function: FUN_013206a0
// Address: 013206a0
// Size: 1170 bytes
// Class: Unknown

void FUN_013206a0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  void*puVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t *plVar8;
  int iVar9;
  int64_t lVar10;
  void*arg1;
  void*this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  void*local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_025d8858;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(void*)(puVar2 + 6) = 0;
  FUN_00d500e0();
  puVar2[2] = *arg1;
  lVar3 = *param_2;
  local_60 = puVar2;
  if (lVar3 != 0) {
    lVar10 = puVar2[3];
    if (lVar10 != lVar3) {
      FUN_00d50b00();
      puVar2[3] = lVar3;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00c8e690();
    lVar3 = local_58;
    if ((((local_50 == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    lVar10 = puVar2[4];
    if (lVar10 == lVar3) {
      FUN_00d50b20();
    }
    else {
      puVar2[4] = lVar3;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    plVar8 = (int64_t *)0x0;
    if (*param_2 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_48 = *param_2;
      while( true ) {
        lVar3 = (int64_t)(int)local_40;
        iVar9 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar9);
        if (*(int *)(local_48 + 0xc) <= iVar9) break;
        lVar10 = *(int64_t *)(local_48 + 0x10);
        lVar3 = *(int64_t *)(lVar10 + 8 + lVar3 * 8);
        local_58 = lVar3;
        pvVar4 = _pthread_getspecific((void*)lVar10);
        lVar1 = local_58;
        pVar7 = (void*)lVar10;
        if ((pvVar4 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar3 = lVar1, lVar10 != 0)) {
          lVar3 = *(int64_t *)(lVar1 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
        }
        plVar8 = *(int64_t **)(lVar3 + 0x38);
        pvVar4 = _pthread_getspecific(pVar7);
        if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
          plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        lVar3 = (**(code **)(*plVar8 + 0x378))();
        *(float *)(puVar2 + 6) = (float)lVar3 + *(float *)(puVar2 + 6);
        if (local_40._4_4_ != 0) {
          if (local_40 < 0) {
            iVar9 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar9 = 0;
          }
          local_40 = CONCAT44(iVar9,(int)local_40);
        }
      }
      FUN_00115190();
      plVar8 = (int64_t *)*param_2;
    }
    FUN_00c8e690();
    lVar3 = local_58;
    if ((((local_50 == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    lVar10 = puVar2[5];
    if (lVar10 == lVar3) {
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      puVar2[5] = lVar3;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    lVar3 = *param_2;
    if (lVar3 != 0) {
      local_50 = 0;
      local_58 = 0;
      local_38 = 0;
      local_40 = 0;
      local_48 = lVar3;
      if (0 < *(int *)(lVar3 + 0xc)) {
        lVar10 = 0;
        do {
          lVar1 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar10 * 8);
          pVar7 = (void*)plVar8;
          local_58 = lVar1;
          pvVar4 = _pthread_getspecific(pVar7);
          lVar6 = lVar1;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            lVar6 = *(int64_t *)(lVar1 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
          plVar8 = *(int64_t **)(lVar6 + 0x38);
          pvVar4 = _pthread_getspecific(pVar7);
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          lVar6 = (**(code **)(*plVar8 + 0x378))();
          *(float *)(*(int64_t *)(local_60[5] + 0x10) + lVar10 * 4) =
               (float)lVar6 / *(float *)(local_60 + 6);
          FUN_00d403d0();
          lVar6 = g_02729590;
          if (g_02729590 != 0) {
            FUN_00d50b00();
          }
          local_80 = lVar6;
          local_78 = '\x01';
          local_68 = '\0';
          plVar8 = &local_70;
          local_70 = lVar1;
          FUN_00d41430(plVar8,&local_80);
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
          local_40 = CONCAT44(local_40._4_4_,(int)lVar10);
        } while ((int)lVar10 < *(int *)(lVar3 + 0xc));
      }
      FUN_00115190();
    }
  }
  *this_ptr = local_60;
  *(void*)(this_ptr + 1) = 1;
  return;
}

