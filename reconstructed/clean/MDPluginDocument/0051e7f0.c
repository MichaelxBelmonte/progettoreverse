// Function: FUN_0051e7f0
// Address: 0051e7f0
// Size: 2478 bytes
// Class: MDPluginDocument

void FUN_0051e7f0(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t *plVar7;
  void*puVar8;
  void*puVar9;
  int64_t lVar10;
  int64_t *this_ptr;
  bool bVar11;
  double dVar12;
  uint64_t uVar13;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  plVar2 = local_58;
  FUN_00757c60();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (this_ptr[0x61] == 0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_012e57e0();
    iVar4 = FUN_00b33590();
    bVar11 = true;
    if (iVar3 == iVar4) {
      FUN_0051b4f0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_012e57e0();
      iVar4 = FUN_00b33590();
      bVar11 = iVar3 != iVar4;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar11) {
      (**(code **)(*(int64_t *)this_ptr[0x21] + 0x498))();
      FUN_00cbb780();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)this_ptr[0x21] + 0x498))();
      FUN_00cb1f10();
      FUN_00db3260();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      FUN_0051b4f0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00b33590();
      FUN_012e57a0();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)this_ptr[0x21] + 0x498))();
      FUN_00cb1f10();
      FUN_00db3270();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)this_ptr[0x21] + 0x498))();
      (**(code **)(*local_58 + 0x3c8))();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar10 = this_ptr[0x5d];
  if (lVar10 != 0) {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_40 = -1;
    while( true ) {
      lVar6 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar10 + 0xc) <= local_40) break;
      local_58 = *(int64_t **)(*(int64_t *)(lVar10 + 0x10) + 8 + lVar6 * 8);
      FUN_00d50b00();
      (**(code **)(*local_58 + 0x3b8))();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      (**(code **)(*local_58 + 0x368))();
    }
    FUN_00540a20();
    param_1 = (void*)lVar10;
  }
  if (*(char *)((int64_t)this_ptr + 0x359) != '\0') {
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_0038cc50();
    (**(code **)(*plVar7 + 0x18))();
    plVar1 = (int64_t *)this_ptr[0x4f];
    if (plVar1 == plVar7) {
      FUN_00d50b20();
    }
    else {
      this_ptr[0x4f] = (int64_t)plVar7;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar1 = (int64_t *)this_ptr[0x4f];
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x3b8))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)this_ptr[0x4f] + 0x418))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_002dca80();
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_012dddb0();
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_025e1318;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    (*g_025e1330)();
    FUN_012d8bb0();
    if (puVar8 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_012dc370();
    if (this_ptr[0x61] != 0) {
      FUN_012dbeb0();
      FUN_012dbec0();
    }
    (**(code **)(*(int64_t *)this_ptr[0x4f] + 0x368))();
  }
  if ((char)this_ptr[0x6b] == '\0') goto LAB_0051f0c6;
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_0038cc50();
  (**(code **)(*plVar7 + 0x18))();
  plVar1 = (int64_t *)this_ptr[0x1d];
  if (plVar1 == plVar7) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x1d] = (int64_t)plVar7;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar1 = (int64_t *)this_ptr[0x1d];
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0x3b8))();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_012dc370();
  if (this_ptr[0x61] == 0) {
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = &g_025e1318;
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[10] = 0;
    (*g_025e1330)();
    puVar8 = (void*)this_ptr[0x1e];
    if (puVar8 == puVar9) {
      FUN_00d50b20();
    }
    else {
      this_ptr[0x1e] = (int64_t)puVar9;
      if (puVar8 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = &g_024c0af0;
    puVar9[7] = 0;
    puVar9[8] = 0;
    (*g_024c0b08)();
    puVar8 = (void*)this_ptr[0x1e];
    if (puVar8 == puVar9) {
      FUN_00d50b20();
    }
    else {
      this_ptr[0x1e] = (int64_t)puVar9;
      if (puVar8 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  lVar10 = this_ptr[0x1e];
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  FUN_012d8bb0();
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  FUN_012dbeb0();
  FUN_012dbec0();
  FUN_0051da80();
  if (this_ptr[0x61] == 0) {
    if (this_ptr[0x20] == 0) {
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &g_025c8348;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      *(void*)(puVar9 + 6) = 0;
      (*g_025c8360)();
      puVar8 = (void*)this_ptr[0x20];
      if (puVar8 == puVar9) {
        FUN_00d50b20();
      }
      else {
        this_ptr[0x20] = (int64_t)puVar9;
        if (puVar8 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00b33520();
    FUN_011edd90();
    dVar12 = (double)FUN_00b335d0();
    FUN_011edd50(dVar12 + dVar12);
    FUN_011edcc0();
    FUN_011edca0();
    lVar10 = this_ptr[0x20];
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    FUN_012ddb40();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if (this_ptr[0x61] != 0) goto LAB_0051f0a1;
  }
  else {
LAB_0051f0a1:
    *(void*)(this_ptr + 0x14) = 1;
    FUN_0051f6c0();
  }
  (**(code **)(*(int64_t *)this_ptr[0x1d] + 0x368))();
LAB_0051f0c6:
  uVar13 = (**(code **)(*this_ptr + 0x3a8))();
  FUN_00516d30(uVar13,0x24);
  this_ptr[0x48] = 0;
  *(void*)(this_ptr + 0x49) = 0;
  if (this_ptr[0x61] == 0) {
    *(void*)((int64_t)this_ptr + 0x371) = 0;
  }
  *(void*)((int64_t)this_ptr + 0x24f) = 0;
  *(void*)(this_ptr + 0x54) = 1;
  FUN_00b341c0();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

