// Function: FUN_01b247c0
// Address: 01b247c0
// Size: 1589 bytes
// Class: MUAudioFileSource

void FUN_01b247c0(void)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  void *pvVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  void*puVar7;
  void* pVar8;
  int64_t lVar9;
  int iVar10;
  void*this_ptr;
  uint32_t extraout_XMM0_Da;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  uint32_t local_9c;
  uint64_t local_98;
  int64_t *local_90;
  void*local_88;
  uint64_t local_80;
  void*local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  void*local_48;
  uint64_t local_40;
  int local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar8 = 0x25795a8;
  *puVar3 = &g_025795a8;
  (*g_025795c0)();
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_01b24df0;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) goto LAB_01b24df0;
  local_88 = puVar3;
  pvVar4 = _pthread_getspecific(pVar8);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150eb60();
  lVar1 = local_58;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 == 0) {
    local_80 = 0;
    local_60 = 0;
  }
  else {
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    pvVar4 = _pthread_getspecific(pVar8);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    local_60 = local_58;
    if (local_58 == 0) {
      local_80 = 0;
    }
    else if (local_50 == '\0') {
      uVar6 = FUN_00d50b00();
      local_80 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
      local_80 = CONCAT71((int7)((uint64_t)local_58 >> 8),1);
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar5 = (int64_t)&g_025ce610;
  plVar5[2] = 0;
  plVar5[3] = 0;
  (*g_025ce628)();
  local_68 = '\0';
  local_70 = 0;
  local_90 = plVar5;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar7 = &g_02572358;
  *puVar3 = &g_02572358;
  (*g_02572370)();
  local_9c = 0xffffffff;
  local_78 = puVar3;
  FUN_01246780();
  local_98 = 0;
  while( true ) {
    pvVar4 = _pthread_getspecific((void*)puVar7);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_00e7bdb0();
    puVar7 = (void*)FUN_00e7bdb0();
    cVar2 = FUN_01252960(puVar7,uVar6,&local_70,0);
    puVar3 = local_88;
    if (cVar2 == '\0') break;
    if (local_70 != 0) {
      local_e0 = local_70;
      local_d8 = '\0';
      (**(code **)(*local_90 + 0x388))(extraout_XMM0_Da,&local_e0);
      lVar1 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      local_98 = (uint64_t)((int)local_98 + 1);
      if (lVar1 != 0) {
        local_50 = '\0';
        local_58 = lVar1;
        FUN_00d235a0();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
  }
  if (local_78 != (void*)0x0) {
    local_50 = '\0';
    local_58 = 0;
    local_48 = local_78;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar10 = -local_40._4_4_;
        }
        else {
          iVar10 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar10);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar10 = 0;
        }
        local_40 = CONCAT44(iVar10,(int)local_40);
      }
      lVar1 = g_027d64a0;
      lVar9 = (int64_t)(int)local_40;
      iVar10 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar10);
      if (*(int *)((int64_t)local_48 + 0xc) <= iVar10) break;
      local_58 = *(int64_t *)(local_48[2] + 8 + lVar9 * 8);
      if (1 < iVar10 + local_38) break;
      if (iVar10 + local_38 == 1) {
        if (g_027d64a0 != 0) {
          FUN_00d50b00();
        }
        local_d0 = lVar1;
        local_c8 = '\x01';
        FUN_00d8dbf0();
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
      }
      local_c0 = local_58;
      local_b8 = '\0';
      FUN_00d8dbf0();
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00018280();
  }
  lVar1 = g_027e3db0;
  if (2 < (uint)local_98) {
    if (g_027e3db0 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar1;
    local_a8 = '\x01';
    FUN_00d8dbf0();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_78 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (local_90 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_80 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01b24df0:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

