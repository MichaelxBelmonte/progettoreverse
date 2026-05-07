// Function: FUN_007f1730
// Address: 007f1730
// Size: 1311 bytes
// Class: GNOperationProgressObserver

void FUN_007f1730(int64_t param_1,int64_t *param_2)

{
  void*puVar1;
  void *pvVar2;
  uint64_t uVar3;
  void* pVar4;
  int64_t lVar5;
  void*arg1;
  void*this_ptr;
  int64_t *plVar6;
  bool bVar7;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  uint64_t local_38;
  
  lVar5 = param_1;
  puVar1 = (void*)FUN_00e8fc40();
  pVar4 = (void*)lVar5;
  FUN_00d4ff40();
  *puVar1 = &g_02510d80;
  puVar1[2] = &g_02511108;
  puVar1[3] = 0;
  FUN_00d500e0();
  if (*param_2 != 0) {
    uVar3 = *arg1;
    local_b0 = '\0';
    local_b8 = *param_2;
    FUN_007f28a0(uVar3,&local_b8);
    pVar4 = (void*)uVar3;
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00363970();
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_007f184c;
    }
  }
  else if (local_48 != (int64_t *)0x0) {
LAB_007f184c:
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004a1110();
    if (local_48 == (int64_t *)0x0) {
      bVar7 = false;
    }
    else {
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      bVar7 = local_78 != 0;
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar7) {
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      local_68 = local_78;
      local_60 = 0;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_60 = '\x01';
      uVar3 = FUN_016cbba0();
      plVar6 = local_48;
      if (local_48 == (int64_t *)0x0) {
        plVar6 = (int64_t *)0x0;
        local_38 = 0;
      }
      else if (local_40 == '\0') {
        uVar3 = FUN_00d50b00();
        local_38 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
        local_38 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = 0;
      plVar6 = (int64_t *)0x0;
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    FUN_00d50b20();
    goto LAB_007f1b72;
  }
  plVar6 = (int64_t *)0x0;
  local_38 = 0;
LAB_007f1b72:
  if (*param_2 != 0) {
    local_90 = '\0';
    local_98 = 0;
    local_88 = 0;
    local_80 = '\0';
    FUN_007f28a0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((plVar6 != (int64_t *)0x0) && (param_1 != 0)) {
    FUN_01f27fe0();
    (**(code **)(*local_48 + 0x560))();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 1) = 0;
  if (((char)local_38 == '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}

