// Function: FUN_00cba5e0
// Address: 00cba5e0
// Size: 957 bytes
// Class: GNEditingContextReadCopySyncObserver
// === GNEditingContextReadCopySyncObserver properties ===
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


void FUN_00cba5e0(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint32_t param_4)

{
  int64_t lVar1;
  void*puVar2;
  void*puVar3;
  void *pvVar4;
  void* pVar5;
  int64_t *plVar6;
  int64_t this_ptr;
  uint32_t uVar7;
  int64_t local_e8;
  uint8_t local_e0;
  void*local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint8_t local_c0;
  void*local_b8;
  uint8_t local_b0;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  void*local_68;
  char local_60;
  uint32_t local_54;
  void*local_50;
  char local_48;
  void*local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    local_54 = param_4;
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02587160;
    puVar2[6] = 0;
    *(void*)(puVar2 + 7) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(void*)((int64_t)puVar2 + 0x1c) = 0;
    *(void*)((int64_t)puVar2 + 0x24) = 0;
    (*g_02587178)();
    local_88 = *param_2;
    local_80 = '\0';
    local_78 = *param_1;
    local_70 = '\0';
    plVar6 = &local_78;
    FUN_00e17b20(plVar6,&local_88);
    pVar5 = (void*)plVar6;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e17bf0();
    FUN_00da5ad0();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_00e17e00();
    if ((local_48 != '\0') && (local_50 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_00e17c10();
    uVar7 = (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x368))();
    *(void*)(this_ptr + 0xe0) = 1;
    lVar1 = puVar2[6];
    if (lVar1 != 0) {
      uVar7 = FUN_00d50b00();
    }
    local_e0 = 1;
    local_e8 = lVar1;
    FUN_00cb93b0(uVar7,&local_e8);
    puVar3 = local_40;
    if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (puVar3 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_0256a258;
      puVar3[2] = 0;
      puVar3[3] = 0;
      uVar7 = FUN_00d500e0();
      lVar1 = puVar2[6];
      local_d0 = 0;
      local_d8 = puVar3;
      if (lVar1 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_c0 = 1;
      local_c8 = lVar1;
      FUN_00cb9610(uVar7,&local_c8);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    *(int *)((int64_t)puVar3 + 0x1c) = *(int *)((int64_t)puVar3 + 0x1c) + 1;
    if (*(int *)(this_ptr + 0xac) == 0) {
      local_60 = '\0';
      local_68 = puVar2;
      FUN_00cbabc0();
      if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_b0 = 0;
      local_b8 = puVar2;
      FUN_00cb9a00();
      if ((char)local_54 != '\0') {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8bda0();
      }
    }
    else {
      local_38 = '\0';
      local_40 = puVar2;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x378))();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

