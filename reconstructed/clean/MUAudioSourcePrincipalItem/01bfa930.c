// Function: FUN_01bfa930
// Address: 01bfa930
// Size: 1190 bytes
// Class: MUAudioSourcePrincipalItem

void FUN_01bfa930(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t *this_ptr;
  int iVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  float local_64;
  int64_t local_60;
  char local_58;
  int local_48;
  float local_34;
  
  lVar2 = local_60;
  FUN_01bfa890();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  if (*(int *)(local_60 + 0xc) == 0) {
    (**(code **)(*(int64_t *)this_ptr[0x1d] + 0x998))();
    plVar1 = (int64_t *)this_ptr[0x1d];
    FUN_00e9aaa0();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    (**(code **)(*plVar1 + 0x958))();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = 0;
    local_48 = -1;
    local_64 = g_02391074;
    local_34 = g_02391078;
    iVar9 = 0;
    fVar11 = local_64;
    while( true ) {
      local_64 = fVar11;
      lVar5 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_48) break;
      lVar8 = *(int64_t *)(lVar2 + 0x10);
      local_60 = *(int64_t *)(lVar8 + 8 + lVar5 * 8);
      pvVar6 = _pthread_getspecific((void*)lVar8);
      pVar7 = (void*)lVar8;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      if (local_c0 == 0) {
        bVar10 = false;
      }
      else {
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_01326de0();
        bVar10 = iVar4 == 3;
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      fVar11 = local_64;
      if (bVar10) {
        FUN_01bfa490();
        fVar11 = (float)FUN_01bf7000();
        iVar9 = iVar9 + 1;
        fVar12 = fVar11;
        if (local_34 <= fVar11) {
          fVar12 = local_34;
        }
        local_34 = fVar12;
        if (fVar11 <= local_64) {
          fVar11 = local_64;
        }
      }
    }
    FUN_001159b0();
    plVar1 = (int64_t *)this_ptr[0x1d];
    if (((iVar9 == 0) || (local_34 != local_64)) || (NAN(local_34) || NAN(local_64))) {
      FUN_00e99dd0();
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x958))();
      if (local_60 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(int64_t *)this_ptr[0x1e] + 0x378))(local_34);
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x958))();
      if (local_60 != 0) {
        FUN_00d50b20();
      }
    }
    plVar1 = (int64_t *)this_ptr[0x1d];
    cVar3 = (**(code **)(*this_ptr + 0x698))();
    if (cVar3 != '\0') {
      (**(code **)(*this_ptr + 0x688))();
    }
    (**(code **)(*plVar1 + 0x998))();
  }
  FUN_01bfe330();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}

