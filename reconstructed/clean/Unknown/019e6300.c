// Function: FUN_019e6300
// Address: 019e6300
// Size: 1916 bytes
// Class: Unknown

int64_t * FUN_019e6300(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int iVar4;
  char *pcVar5;
  void *pvVar6;
  char *pcVar7;
  int64_t lVar8;
  uint uVar9;
  int64_t *arg1;
  int64_t *this_ptr;
  void* pVar10;
  double dVar11;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qa;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  char local_b0;
  undefined7 uStack_af;
  char local_a8;
  double local_a0;
  int64_t local_98;
  uint local_8c;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70 [8];
  int64_t local_68;
  void* local_60;
  int64_t local_5c;
  float local_4c;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  uint32_t local_34;
  
  (**(code **)(*arg1 + 0xe20))();
  FUN_00d23340();
  lVar3 = local_78;
  pcVar7 = local_70;
  local_b0 = local_70[0];
  pcVar5 = &local_b0;
  if (local_70[0] != '\0') {
    pcVar5 = pcVar7;
  }
  *pcVar5 = '\0';
  if ((local_70[0] != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  pVar10 = (void*)pcVar7;
  if ((local_b0 == '\0') && (lVar3 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  local_98 = lVar3;
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_a0 = (double)FUN_0125a280();
  pvVar6 = _pthread_getspecific(pVar10);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar11 = (double)FUN_01264170();
  (**(code **)(*arg1 + 0x9b8))(local_a0 + g_023b1e90,dVar11 + g_023b1e98);
  local_80 = 0;
  local_88 = CONCAT71(uStack_47,local_48);
  if (local_40 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_80 = '\x01';
  uVar12 = FUN_00243390();
  lVar3 = local_78;
  if (local_70[0] == '\0') {
    if (((local_78 != 0) && (uVar12 = FUN_00d50b00(), local_70[0] != '\0')) && (local_78 != 0)) {
      uVar12 = FUN_00d50b20();
    }
  }
  else {
    local_70[0] = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0xc) != 0)) {
    local_70[0] = '\0';
    local_78 = 0;
    local_68 = lVar3;
    local_5c = 0;
    pVar10 = 0xffffffff;
    uVar9 = 0;
    local_8c = 0;
LAB_019e6530:
    if (uVar9 == 0) {
      iVar4 = 0;
      pVar10 = pVar10 + 1;
      local_60 = pVar10;
      if (*(int *)(lVar3 + 0xc) <= (int)pVar10) goto LAB_019e69cf;
    }
    else {
      if ((int)uVar9 < 1) {
        iVar4 = -uVar9;
      }
      else {
        pVar10 = pVar10 - uVar9;
        local_60 = pVar10;
        FUN_00d23690(uVar12,uVar9);
        local_8c = local_8c + uVar9;
        local_5c = (uint64_t)local_8c << 0x20;
        iVar4 = 0;
      }
      local_5c = CONCAT44(local_5c._4_4_,iVar4);
      pVar10 = pVar10 + 1;
      local_60 = pVar10;
      if (*(int *)(lVar3 + 0xc) <= (int)pVar10) goto LAB_019e69cf;
    }
    local_a0 = (double)CONCAT44(local_a0._4_4_,iVar4);
    lVar8 = (int64_t)(int)pVar10;
    local_78 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar8 * 8);
    local_60 = pVar10;
    pvVar6 = _pthread_getspecific(pVar10);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e930();
    if (CONCAT71(uStack_47,local_48) == 0) {
      local_34 = 0;
      bVar2 = false;
LAB_019e6838:
      local_4c = (float)(**(code **)(*arg1 + 0xc38))();
      uVar12 = (**(code **)(*arg1 + 0xc38))();
      bVar1 = (float)uVar12 <= local_4c;
      if (bVar2) goto joined_r0x019e68e6;
      uVar9 = local_a0._0_4_;
    }
    else {
      pvVar6 = _pthread_getspecific((void*)lVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_0125e930();
      if (CONCAT71(uStack_af,local_b0) == 0) {
        local_34 = (uint32_t)CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
        bVar2 = false;
        goto LAB_019e6838;
      }
      pvVar6 = _pthread_getspecific((void*)lVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar6 = _pthread_getspecific((void*)lVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      pvVar6 = _pthread_getspecific((void*)lVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_4c = (float)FUN_01507f00();
      pvVar6 = _pthread_getspecific((void*)lVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      pvVar6 = _pthread_getspecific((void*)lVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      pvVar6 = _pthread_getspecific((void*)lVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_01507f00();
      local_34 = (uint32_t)CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
      bVar2 = true;
      bVar1 = true;
      uVar12 = extraout_XMM0_Qa;
      if ((int)local_4c < iVar4) goto LAB_019e6838;
joined_r0x019e68e6:
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      uVar9 = local_a0._0_4_;
      if ((local_110 != '\0') && (local_118 != 0)) {
        uVar12 = FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    if ((((char)local_34 != '\0') && (local_a8 != '\0')) && (CONCAT71(uStack_af,local_b0) != 0)) {
      uVar12 = FUN_00d50b20();
    }
    if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
      uVar12 = FUN_00d50b20();
    }
    if (bVar1) {
      uVar9 = ~uVar9;
      local_5c = CONCAT44(local_5c._4_4_,uVar9);
    }
    goto LAB_019e6530;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
joined_r0x019e69c4:
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return this_ptr;
LAB_019e69cf:
  uVar12 = FUN_001159b0();
  FUN_00d242c0(uVar12,arg1);
  FUN_00d23310();
  lVar8 = local_78;
  pcVar7 = local_70;
  if (local_70[0] == '\0') {
    pcVar7 = &local_48;
  }
  local_48 = local_70[0];
  *pcVar7 = '\0';
  if ((local_70[0] != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  if ((local_48 == '\0') && (lVar8 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = lVar8;
  *(void*)(this_ptr + 1) = 1;
  goto joined_r0x019e69c4;
}

