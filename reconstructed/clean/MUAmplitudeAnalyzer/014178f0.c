// Function: FUN_014178f0
// Address: 014178f0
// Size: 1563 bytes
// Class: MUAmplitudeAnalyzer

void FUN_014178f0(double param_1,double param_2)

{
  double dVar1;
  void*puVar2;
  double dVar3;
  void*puVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  void *pvVar8;
  int64_t lVar9;
  int64_t lVar10;
  void* pVar11;
  int iVar12;
  uint64_t uVar13;
  int64_t *plVar14;
  int64_t *this_ptr;
  uint32_t uVar15;
  void*local_e0;
  int64_t local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  float local_ac;
  double local_a8;
  void*local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_48;
  char local_40;
  
  local_a8 = param_1;
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)(puVar7 + 7) = 0;
  *(void*)((int64_t)puVar7 + 0x3c) = 0;
  *(void*)(puVar7 + 8) = 0;
  pVar11 = 0x25dc9e8;
  *puVar7 = &g_025dc9e8;
  puVar7[9] = 0;
  puVar7[10] = 0;
  (*g_025dca00)();
  pvVar8 = _pthread_getspecific(pVar11);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb950(SUB84(g_023934d0,0));
  lVar9 = this_ptr[0x10];
  iVar6 = *(int *)(lVar9 + 0x18);
  iVar12 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar12 = iVar6;
  }
  if (iVar12 >> 2 < (int)((local_a8 + param_2) * g_023934d0 + g_0238fee8)) {
    FUN_00d50b00();
    local_40 = '\0';
    FUN_00c8e4f0();
    puVar4 = local_a0;
    if (local_98 == '\0') {
      if (((local_a0 != (void*)0x0) && (FUN_00d50b00(), local_98 != '\0')) &&
         (local_a0 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_98 = '\0';
    }
    FUN_00c92170();
    FUN_00c92160();
    uVar15 = FUN_00d50b20();
    FUN_00c8e340(uVar15,0);
    puVar2 = (void*)this_ptr[0x10];
    if (puVar2 != puVar4) {
      if (puVar4 != (void*)0x0) {
        FUN_00d50b00();
      }
      this_ptr[0x10] = (int64_t)puVar4;
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    local_48 = lVar9;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00c8e340(iVar12 >> 2,0);
  }
  uVar13 = this_ptr[0x10];
  local_d8 = (int64_t)(int)(g_023934d0 * local_a8) * 4 + *(int64_t *)(uVar13 + 0x10);
  pvVar8 = _pthread_getspecific((void*)uVar13);
  if ((pvVar8 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
    lVar9 = this_ptr[0x10];
  }
  else {
    lVar9 = this_ptr[0x10];
  }
  if (lVar9 != 0) {
    local_68 = 0;
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_70 = lVar9;
  FUN_013eb890();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  iVar6 = (int)(param_2 * g_023934d0);
  if (0 < iVar6) {
    local_ac = (float)iVar6;
    lVar9 = 0;
    do {
      dVar1 = (double)this_ptr[0x11];
      plVar14 = (int64_t *)this_ptr[0xc];
      pvVar8 = _pthread_getspecific((void*)uVar13);
      if (pvVar8 != (void *)0x0) {
        plVar14 = (int64_t *)this_ptr[0xc];
        lVar10 = FUN_00e8b990();
        if (lVar10 != 0) {
          plVar14 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
        }
      }
      dVar3 = (double)(**(code **)(*plVar14 + 0x370))();
      uVar13 = (uint64_t)(uint)(int)(double)this_ptr[0x11];
      FUN_01418260(uVar13,(int64_t)(int)((double)(int)lVar9 * dVar1 + dVar3 * local_a8));
      uVar15 = (**(code **)(g_02786500 + 0x10))();
      *(void*)(local_d8 + lVar9 * 4) = uVar15;
      cVar5 = FUN_00e34a50();
      if (cVar5 != '\0') {
        FUN_00e34a60();
        goto LAB_01417e85;
      }
      pvVar8 = _pthread_getspecific((void*)uVar13);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_0124c5d0();
      if (cVar5 == '\0') {
        (**(code **)(*this_ptr + 0x380))((float)(int)lVar9 / local_ac);
      }
      lVar9 = lVar9 + 1;
    } while (iVar6 != (int)lVar9);
  }
  lVar9 = g_027c0df8;
  if (g_027c0df8 != 0) {
    FUN_00d50b00();
  }
  local_e0 = puVar7;
  FUN_00083ea0(2,&local_e0);
  FUN_0036bfe0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  local_a0 = (void*)&g_0253d630;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  local_a0 = &g_024c5048;
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_d0 = g_027c0df0;
  if (g_027c0df0 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  FUN_00d50b00();
  local_c0 = local_48;
  local_b8 = '\0';
  FUN_00d40470(&local_c0,&stack0xffffffffffffffa0,1,3);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
LAB_01417e85:
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

