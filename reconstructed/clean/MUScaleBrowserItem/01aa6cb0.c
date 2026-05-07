// Function: FUN_01aa6cb0
// Address: 01aa6cb0
// Size: 2436 bytes
// Class: MUScaleBrowserItem

void FUN_01aa6cb0(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int64_t *plVar6;
  void *pvVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *plVar10;
  void* pVar11;
  uint uVar12;
  int64_t *arg1;
  int64_t *this_ptr;
  char cVar13;
  int64_t lVar14;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar14 = *arg1;
  if (lVar14 == 0) {
    return;
  }
  if (this_ptr[5] == 0) {
    return;
  }
  if (this_ptr[3] != 0) {
    return;
  }
  lVar9 = this_ptr[4];
  if (lVar9 != lVar14) {
    FUN_00d50b00();
    this_ptr[4] = lVar14;
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar14 = g_02703b10;
  if (g_02703b10 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_e8 = 0;
  local_e0 = '\0';
  plVar10 = &local_e8;
  FUN_00d40470(plVar10,&stack0xffffffffffffff70,3,3);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  iVar5 = *(int *)((int64_t)this_ptr + 0x34);
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_00039550();
  (**(code **)(*plVar6 + 0x18))();
  plVar8 = (int64_t *)this_ptr[2];
  if (plVar8 == plVar6) {
    FUN_00d50b20();
  }
  else {
    this_ptr[2] = (int64_t)plVar6;
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00cafd20();
  plVar8 = (int64_t *)this_ptr[2];
  lVar14 = this_ptr[4];
  if (lVar14 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar8 + 0x3a0))();
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific((void*)plVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar7 = _pthread_getspecific((void*)plVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar7 = _pthread_getspecific((void*)plVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e57a0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pVar11 = (void*)plVar10;
  if (iVar5 < 0) goto LAB_01aa71ae;
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar7 = _pthread_getspecific((void*)plVar10);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pVar11 = (void*)plVar10;
  local_98 = local_40;
  if (local_40 == 0) {
LAB_01aa715c:
    bVar3 = false;
LAB_01aa7165:
    cVar13 = '\x01';
    uVar12 = 1;
    bVar4 = true;
    bVar1 = true;
    bVar2 = false;
joined_r0x01aa7181:
    if (local_98 != 0) goto LAB_01aa7183;
  }
  else {
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8a60();
    pVar11 = (void*)plVar10;
    if (local_40 == 0) goto LAB_01aa715c;
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific((void*)plVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01313ad0();
    pvVar7 = _pthread_getspecific((void*)plVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb450();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    pVar11 = (void*)plVar10;
    if (local_40 == 0) {
      bVar3 = true;
      goto LAB_01aa7165;
    }
    pvVar7 = _pthread_getspecific(pVar11);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01240a80();
    if (local_40 == 0) {
      lVar14 = 0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      lVar14 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    FUN_00d50b20();
    pVar11 = (void*)plVar10;
    uVar12 = 0;
    if (lVar14 != 0) {
      while( true ) {
        pVar11 = (void*)plVar10;
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar5 = FUN_0124a860();
        if (iVar5 <= (int)uVar12) break;
        pvVar7 = _pthread_getspecific(pVar11);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_d8 = local_40;
        local_d0 = '\0';
        plVar10 = (int64_t *)(uint64_t)uVar12;
        FUN_01240490(plVar10,&local_d8);
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar7 = _pthread_getspecific((void*)plVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0123fae0();
          FUN_00d50b20();
        }
        uVar12 = uVar12 + 1;
      }
      bVar3 = true;
      uVar12 = 0;
      cVar13 = '\0';
      bVar4 = false;
      bVar1 = false;
      goto joined_r0x01aa7181;
    }
    bVar3 = true;
    bVar4 = true;
LAB_01aa7183:
    bVar1 = bVar4;
    cVar13 = (char)uVar12;
    FUN_00d50b20();
  }
  if ((bVar2) && (!bVar1)) {
    FUN_00d50b20();
  }
  if (bVar3 && cVar13 == '\0') {
    FUN_00d50b20();
  }
LAB_01aa71ae:
  local_c0 = '\0';
  local_c8 = (int64_t *)0x0;
  FUN_00cb1fa0();
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    (**(code **)(*local_c8 + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[2] + 0x3c8))();
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_0038cc50();
  (**(code **)(*plVar8 + 0x18))();
  plVar10 = (int64_t *)this_ptr[3];
  if (plVar10 == plVar8) {
    FUN_00d50b20();
  }
  else {
    this_ptr[3] = (int64_t)plVar8;
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar8 = (int64_t *)FUN_002dd0f0();
  (**(code **)(*plVar8 + 0x18))();
  lVar14 = (**(code **)(*this_ptr + 0x380))();
  pvVar7 = _pthread_getspecific(pVar11);
  plVar10 = plVar8;
  if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    plVar10 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
  }
  plVar10[10] = lVar14;
  local_b0 = '\0';
  local_b8 = plVar8;
  FUN_012dddb0();
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar11);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_012d1940();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar10 = (int64_t *)this_ptr[5];
  local_a0 = 0;
  lVar14 = this_ptr[3];
  if (lVar14 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  local_a8 = lVar14;
  (**(code **)(*plVar10 + 0x120))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

