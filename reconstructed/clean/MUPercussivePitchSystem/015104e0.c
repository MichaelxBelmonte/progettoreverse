// Function: FUN_015104e0
// Address: 015104e0
// Size: 1151 bytes
// Class: MUPercussivePitchSystem

void FUN_015104e0(void)

{
  char cVar1;
  int64_t *plVar2;
  void *pvVar3;
  uint64_t uVar4;
  code *pcVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t this_ptr;
  int64_t *plVar8;
  uint64_t local_b0;
  code *local_a8;
  void*local_a0;
  code *local_98;
  int64_t local_90;
  char local_88;
  uint32_t local_7c;
  int64_t local_78;
  char local_70;
  int64_t *local_40;
  char local_38;
  
  if ((*(int64_t *)(this_ptr + 0x80) != 0) && (*(int64_t *)(this_ptr + 0x78) != 0)) {
    if (*(int64_t *)(this_ptr + 0x90) == 0) {
      FUN_00d64850();
      plVar2 = (int64_t *)FUN_0151fdc0();
      (**(code **)(*plVar2 + 0x18))();
      lVar6 = *(int64_t *)(this_ptr + 0x90);
      *(int64_t **)(this_ptr + 0x90) = plVar2;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      FUN_00d64910();
    }
    local_70 = '\0';
    local_78 = 0;
    local_7c = 0xffffffff;
    local_98 = g_025fee30;
    local_a0 = &g_025fee18;
    pcVar5 = g_025fee30;
    while( true ) {
      pvVar3 = _pthread_getspecific((void*)pcVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_00e7bdb0();
      pcVar5 = FUN_00e7bdb0();
      cVar1 = FUN_01252960(pcVar5,uVar4,&local_78,&local_b0);
      pVar7 = (void*)pcVar5;
      if (cVar1 == '\0') break;
      if (local_78 != 0) {
        plVar2 = (int64_t *)FUN_00e8fc40();
        FUN_00d4ff40();
        plVar2[10] = 0;
        plVar2[7] = 0;
        plVar2[8] = 0;
        *(void*)(plVar2 + 9) = 0;
        *plVar2 = (int64_t)local_a0;
        *(void*)((int64_t)plVar2 + 0x6c) = 0;
        plVar2[0xb] = 0;
        plVar2[0xc] = 0;
        *(void*)(plVar2 + 0xd) = 0;
        (*local_98)();
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b670();
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_90 = local_78;
        local_88 = '\0';
        FUN_0173b680();
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01822e80();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_0173b720();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_015220b0();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        plVar8 = plVar2;
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar8 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar8 + 0x1a0))();
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_38 = '\0';
        pcVar5 = local_a8;
        FUN_012502a0(local_a8,local_b0,0);
        FUN_00d50b20();
        local_40 = plVar2;
      }
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0xa1) = 1;
  return;
}

