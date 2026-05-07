// Function: FUN_01ab6ab0
// Address: 01ab6ab0
// Size: 2487 bytes
// Class: Unknown

void FUN_01ab6ab0(uint32_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  void *pvVar7;
  void* pVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar11;
  uint64_t unaff_R14;
  undefined7 uVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar15;
  uint32_t uVar16;
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  float local_ac;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  uint32_t local_4c;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  uVar15 = param_2;
  (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_40;
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x3f0))(8,0x27,0,this_ptr[0x29] != 0);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_40;
  FUN_01e3f820();
  uVar13 = (**(code **)(*plVar1 + 0x3d0))();
  uVar16 = uVar15;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pplVar11 = &local_40;
  (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_40;
  uVar5 = FUN_00209700();
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    unaff_R14 = uVar5;
    if (cVar3 != '\0') goto LAB_01ab6c0a;
  }
  pplVar11 = (int64_t **)&g_02802688;
LAB_01ab6c0a:
  plVar1 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar11 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar12 = (undefined7)((uint64_t)unaff_R14 >> 8);
  if (plVar1 == (int64_t *)0x0) {
    FUN_01d39800(uVar13,uVar15,0);
    local_48 = local_40;
    plVar9 = local_40;
    if (local_40 == (int64_t *)0x0) {
      local_48 = (int64_t *)0x0;
      local_4c = 0;
      plVar10 = (int64_t *)0x0;
      bVar2 = false;
    }
    else {
      plVar6 = local_40;
      if (((local_38 == '\0') && (plVar6 = (int64_t *)FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        plVar6 = (int64_t *)FUN_00d50b20();
      }
      plVar10 = local_48;
      local_4c = (uint32_t)CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
      local_68 = (int64_t *)0x0;
      FUN_00d50b00();
      bVar2 = true;
    }
  }
  else {
    local_68 = (int64_t *)FUN_01e3f820();
    (**(code **)(*plVar1 + 0x6a0))((int)plVar1[0x36],(int)local_68,uVar16);
    local_48 = local_40;
    if (local_40 == (int64_t *)0x0) {
      local_4c = 0;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      local_4c = (uint32_t)CONCAT71(uVar12,1);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      local_4c = (uint32_t)CONCAT71(uVar12,1);
    }
    local_ac = *(float *)(plVar1 + 0x36);
    uVar14 = FUN_00d05530(local_68._0_4_,uVar16,g_02390118);
    plVar9 = (int64_t *)0x0;
    (**(code **)(*plVar1 + 0x6a0))(local_ac + g_02390118,uVar14,uVar16);
    plVar10 = local_40;
    if (local_40 == (int64_t *)0x0) {
      bVar2 = false;
      plVar10 = (int64_t *)0x0;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar2 = true;
    }
  }
  pVar8 = (void*)plVar9;
  local_68 = plVar10;
  FUN_01d48370();
  (**(code **)(*(int64_t *)*arg1 + 0x398))();
  if (this_ptr[0x29] == 0) {
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_1a8 + 0x470))();
    local_78 = local_40;
    local_70 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = '\x01';
    FUN_01d488d0();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01ab5170();
    local_a8 = local_40;
    local_a0 = 0;
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    FUN_01d488d0();
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_68 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_120 = local_48;
    local_118 = '\0';
    FUN_01ee9430(0,&local_120);
    if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_110 = local_68;
  local_108 = '\0';
  (**(code **)(*(int64_t *)*arg1 + 0x398))();
  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr[0x29] != 0) {
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_015b7ba0();
    if (iVar4 == 3) {
      local_100 = *arg1;
      local_f8 = '\0';
      FUN_01ab7b20(param_1,param_2,uVar13,uVar15);
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01abaae0(param_1,param_2,uVar13,uVar15);
    }
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_015b7b80();
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_017f2980();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_01ab6010();
      local_98 = local_40;
      local_90 = 0;
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_90 = '\x01';
      FUN_01d488d0();
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_f0 = local_68;
      local_e8 = '\0';
      (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
      if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01ab61b0();
      local_80 = 0;
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_88 = local_40;
      local_80 = '\x01';
      FUN_01d488d0();
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_e0 = local_68;
      local_d8 = '\0';
      (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    cVar3 = FUN_01e420b0();
    if ((cVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
      local_d0 = *arg1;
      local_c8 = '\0';
      local_c0 = local_48;
      local_b8 = '\0';
      (**(code **)(*plVar1 + 0x6a8))(extraout_XMM0_Da,&local_c0);
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_01d48390();
  if ((bVar2) && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_4c != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

