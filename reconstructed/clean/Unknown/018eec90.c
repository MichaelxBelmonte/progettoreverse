// Function: FUN_018eec90
// Address: 018eec90
// Size: 1895 bytes
// Class: Unknown

void FUN_018eec90(uint32_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  byte bVar2;
  char cVar3;
  int64_t *plVar4;
  void *pvVar5;
  void* in_ECX;
  void* pVar6;
  int64_t lVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar8;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da;
  float fVar10;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  int64_t local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*param_2 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  if ((g_028b0680 == (int64_t *)0x0) || (g_028b0689 == '\0')) {
    FUN_00e8cb50();
    if (g_028b0680 == (int64_t *)0x0) {
      plVar4 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar4 + 0x18))();
      bVar8 = g_028b0680 == (int64_t *)0x0;
      g_028b0680 = plVar4;
      if (((bVar8) || (FUN_00d50b20(), g_028b0680 != (int64_t *)0x0)) && (g_028b0688 == '\0'))
      {
        g_028b0688 = '\x01';
        FUN_00e8cb90();
      }
      g_028b0689 = '\x01';
      param_1 = FUN_00e8cb70();
    }
    else {
      g_028b0689 = '\x01';
      param_1 = FUN_00e8cb70();
    }
  }
  local_130 = *param_2;
  local_128 = '\0';
  uVar9 = FUN_018ef910(param_1,&local_130);
  lVar7 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (uVar9 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if (lVar7 != 0) goto LAB_018ef366;
  local_a8 = lVar7;
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar7 = arg1[3];
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = lVar7;
  FUN_018ec350();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  plVar4 = local_50;
  local_98 = 0;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  lVar7 = local_a8;
  local_98 = '\x01';
  local_a0 = plVar4;
  bVar2 = (**(code **)(*arg1 + 0x3b8))();
  pVar6 = (void*)bVar2;
  uVar9 = FUN_018943d0(bVar2,&local_a0);
  plVar4 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (int64_t *)0x0) && (uVar9 = FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if (plVar4 == (int64_t *)0x0) goto LAB_018ef366;
  local_b0 = plVar4;
  cVar3 = (**(code **)(*plVar4 + 0x398))();
  if (cVar3 != '\0') {
    cVar3 = (**(code **)(*arg1 + 0x3b8))();
    plVar4 = local_b0;
    if (cVar3 != '\0') {
      local_120 = *param_2;
      local_118 = '\0';
      (**(code **)(*arg1 + 0x3e0))(extraout_XMM0_Da,&local_120);
      local_90 = local_40;
      local_88 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_88 = '\x01';
      FUN_00ce9f70();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      lVar7 = g_02704060;
      if (g_02704060 != 0) {
        FUN_00d50b00();
      }
      local_110 = lVar7;
      local_108 = '\x01';
      FUN_00cddf30();
      plVar1 = local_50;
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01893a50();
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar9 = FUN_018babe0();
      local_70 = local_c0;
      local_68 = 0;
      if (local_b8 == '\0') {
        if (local_c0 != 0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        local_b8 = '\0';
      }
      local_68 = '\x01';
      (**(code **)(*plVar1 + 0x400))(uVar9,&local_70);
      (**(code **)(*local_60 + 0x370))();
      local_80 = local_40;
      local_78 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      lVar7 = local_a8;
      local_78 = '\x01';
      (**(code **)(*plVar4 + 0x378))();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f8 != '\0') && (local_100 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
    }
    local_f0 = plVar4;
    local_e8 = '\0';
    FUN_01d4f320();
    if (local_40 != 0) {
      lVar7 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
    }
    if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      if ((g_028b06a4 != 0.0) || (NAN(g_028b06a4))) {
        if ((g_028b06a4 == g_02390124) && (!NAN(g_028b06a4) && !NAN(g_02390124)))
        goto LAB_018ef35a;
      }
      else {
        g_028b06a4 = 2.0;
      }
      cVar3 = FUN_01d526e0();
      if (cVar3 == '\0') {
        fVar10 = g_028b06a4;
        if ((g_028b06a4 == 0.0) && (!NAN(g_028b06a4))) {
          g_028b06a4 = 2.0;
          fVar10 = g_02390d34;
        }
        FUN_01d55740(fVar10);
      }
    }
  }
LAB_018ef35a:
  uVar9 = FUN_00d50b20();
LAB_018ef366:
  if (lVar7 != 0) {
    local_d8 = '\0';
    local_d0 = *param_2;
    local_c8 = '\0';
    local_e0 = lVar7;
    FUN_018ef9c0(uVar9,&local_d0);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = lVar7;
  *(void*)(this_ptr + 1) = 1;
  return;
}

