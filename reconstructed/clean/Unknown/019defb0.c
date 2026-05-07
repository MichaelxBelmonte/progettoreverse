// Function: FUN_019defb0
// Address: 019defb0
// Size: 2363 bytes
// Class: Unknown

void FUN_019defb0(int64_t *param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  void* pVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  int64_t *plVar10;
  double dVar11;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qa_00;
  double dVar13;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  uint local_8c;
  int64_t *local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  uint32_t local_50;
  uint64_t local_4c;
  int64_t *local_40;
  
  plVar8 = param_1;
  pvVar6 = _pthread_getspecific((void*)param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar11 = (double)FUN_0125a280();
  if (this_ptr[0x69] == 0) {
    return;
  }
  local_40 = (int64_t *)0x0;
  pvVar6 = _pthread_getspecific((void*)plVar8);
  if (pvVar6 != (void *)0x0) {
    local_40 = (int64_t *)0x0;
    FUN_00e8b990();
  }
  local_40 = (int64_t *)0x0;
  cVar4 = FUN_01263cd0();
  plVar10 = (int64_t *)((uint64_t)param_1 & 0xff);
  if (cVar4 != '\0') {
    local_70 = (int64_t *)0x0;
    local_40 = (int64_t *)0x0;
    uVar12 = extraout_XMM0_Qa;
    goto LAB_019df5d8;
  }
  local_8c = (uint)plVar10;
  local_40 = (int64_t *)0x0;
  pvVar6 = _pthread_getspecific((void*)plVar8);
  if (pvVar6 != (void *)0x0) {
    local_40 = (int64_t *)0x0;
    FUN_00e8b990();
  }
  local_40 = (int64_t *)0x0;
  FUN_0142c150(g_0238fee8);
  local_40 = (int64_t *)0x0;
  pvVar6 = _pthread_getspecific((void*)plVar8);
  if (pvVar6 != (void *)0x0) {
    local_40 = (int64_t *)0x0;
    FUN_00e8b990();
  }
  local_40 = (int64_t *)0x0;
  FUN_0142c160(0);
  pvVar6 = _pthread_getspecific((void*)plVar8);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  plVar10 = local_68;
  local_40 = (int64_t *)CONCAT44(local_40._4_4_,(void*)param_1);
  if ((((local_60 == '\0') && (local_68 != (int64_t *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
     && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_88 = plVar10;
  pvVar6 = _pthread_getspecific((void*)plVar8);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265ae0();
  plVar3 = local_68;
  pVar7 = (void*)plVar8;
  plVar10 = (int64_t *)*arg1;
  if (plVar10 == local_68) {
    if (((char)arg1[1] != '\0') || (local_68 == (int64_t *)0x0)) goto LAB_019df2c6;
    local_70 = arg1 + 1;
    if (local_60 == '\0') {
      FUN_00d50b00();
      goto LAB_019df2bf;
    }
LAB_019df286:
    pVar7 = (void*)plVar8;
    *(void*)local_70 = 1;
  }
  else {
    plVar8 = arg1 + 1;
    lVar2 = arg1[1];
    local_70 = plVar8;
    if (local_60 != '\0') {
      *arg1 = (int64_t)local_68;
      if (((char)lVar2 != '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019df286;
    }
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    pVar7 = (void*)plVar8;
    *arg1 = (int64_t)plVar3;
    if (((char)lVar2 != '\0') && (plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_019df2bf:
    *(void*)local_70 = 1;
LAB_019df2c6:
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264970();
  local_78 = 0;
  local_80 = this_ptr[0x6f];
  if (local_80 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  FUN_01539260();
  plVar3 = local_88;
  plVar10 = (int64_t *)(uint64_t)local_8c;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar7);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264970();
  FUN_01d3abf0();
  FUN_01e466c0();
  dVar13 = (double)(**(code **)(*this_ptr + 0x930))();
  FUN_015392e0(dVar13 - dVar11);
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_d0 = plVar3;
  local_c8 = '\0';
  plVar8 = plVar10;
  (**(code **)((int64_t)&linkedit_data_command_000013f8.dataoff + *this_ptr))(plVar10,&local_d0);
  pvVar6 = _pthread_getspecific((void*)plVar8);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar12 = FUN_01264970();
  plVar1 = *(int64_t **)(local_e8 + 0x28);
  if (plVar1 != local_68) {
    if (local_60 == '\0') {
      if (local_68 == (int64_t *)0x0) {
        *(void*)(local_e8 + 0x28) = 0;
      }
      else {
        uVar12 = FUN_00d50b00();
        plVar1 = *(int64_t **)(local_e8 + 0x28);
        *(int64_t **)(local_e8 + 0x28) = local_68;
      }
    }
    else {
      local_60 = '\0';
      *(int64_t **)(local_e8 + 0x28) = local_68;
    }
    if (plVar1 != (int64_t *)0x0) {
      uVar12 = FUN_00d50b20();
    }
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((char)local_40 == '\0') {
    local_c0 = *arg1;
    local_b8 = '\0';
    uVar12 = FUN_016779b0();
    local_40 = local_68;
    plVar8 = local_68;
    if (local_68 == (int64_t *)0x0) {
      local_70 = (int64_t *)0x0;
    }
    else if (local_60 == '\0') {
      uVar12 = FUN_00d50b00();
      local_70 = (int64_t *)CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
      uVar12 = extraout_XMM0_Qa_00;
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
      local_70 = (int64_t *)CONCAT71((int7)((uint64_t)local_68 >> 8),1);
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  else {
    local_70 = (int64_t *)0x0;
    local_40 = (int64_t *)0x0;
  }
  if (plVar3 != (int64_t *)0x0) {
    uVar12 = FUN_00d50b20();
  }
LAB_019df5d8:
  local_b0 = *arg1;
  local_a8 = '\0';
  (**(code **)("/usr/lib/libobjc.A.dylib" + *this_ptr))(uVar12,plVar10);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = *arg1;
  local_98 = '\0';
  (**(code **)(*(int64_t *)this_ptr[0x69] + 0xf0))();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  do {
    (**(code **)(*this_ptr + 0x658))();
    plVar3 = local_68;
    plVar10 = (int64_t *)*param_2;
    if (plVar10 == local_68) {
      if (((char)param_2[1] == '\0') && (local_68 != (int64_t *)0x0)) {
        if (local_60 == '\0') {
          FUN_00d50b00();
          goto LAB_019df70c;
        }
LAB_019df6c2:
        *(void*)(param_2 + 1) = 1;
        local_60 = '\0';
      }
      pVar7 = (void*)plVar8;
      lVar2 = *param_2;
    }
    else {
      lVar2 = param_2[1];
      if (local_60 != '\0') {
        *param_2 = (int64_t)local_68;
        if (((char)lVar2 != '\0') && (plVar10 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_019df6c2;
      }
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *param_2 = (int64_t)plVar3;
      if (((char)lVar2 != '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_019df70c:
      pVar7 = (void*)plVar8;
      *(void*)(param_2 + 1) = 1;
      lVar2 = *param_2;
    }
    if (lVar2 == 0) {
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_019df7d4:
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264970();
      FUN_01539300();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = this_ptr[0x99];
      if (lVar2 != 0) {
        local_60 = '\0';
        local_68 = (int64_t *)0x0;
        local_4c = 0;
        local_58 = lVar2;
        for (lVar9 = 0; local_50 = (uint32_t)lVar9, lVar9 < *(int *)(lVar2 + 0xc);
            lVar9 = lVar9 + 1) {
          plVar8 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar9 * 8);
          local_68 = plVar8;
          (**(code **)(*plVar8 + 0x9c0))();
          (**(code **)(*plVar8 + 0x620))();
        }
        FUN_01a02090();
      }
      plVar8 = local_70;
      FUN_00d216c0();
      (**(code **)((int64_t)&linkedit_data_command_000013f8.cmd + *this_ptr))();
      if (((char)plVar8 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      return;
    }
    iVar5 = FUN_01d3a5a0();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pVar7 = (void*)plVar8;
    if (iVar5 == 6) goto LAB_019df7d4;
    iVar5 = FUN_01d3a5a0();
    if (iVar5 != 6) {
      pvVar6 = _pthread_getspecific((void*)plVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01d3abf0();
      FUN_01e466c0();
      dVar13 = (double)(**(code **)(*this_ptr + 0x930))();
      FUN_0142c160(dVar13 - dVar11);
    }
  } while( true );
}

