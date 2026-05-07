// Function: FUN_013231f0
// Address: 013231f0
// Size: 647 bytes
// Class: MUPercussivePitchSystem

void FUN_013231f0(void)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  void*puVar5;
  int64_t *plVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t this_ptr;
  int64_t local_30;
  char local_28;
  
  FUN_00e8b7a0();
  uVar4 = _UNK_0240d41c;
  uVar3 = _UNK_0240d418;
  uVar2 = _UNK_0240d414;
  *(void*)(this_ptr + 0x78) = g_0240d410;
  *(void*)(this_ptr + 0x7c) = uVar2;
  *(void*)(this_ptr + 0x80) = uVar3;
  *(void*)(this_ptr + 0x84) = uVar4;
  *(void*)(this_ptr + 0x94) = 4;
  *(void*)(this_ptr + 0x1a9) = 0;
  *(void*)(this_ptr + 0x171) = 0x100;
  *(void*)(this_ptr + 0x130) = 1;
  *(void*)(this_ptr + 0x180) = 0xffffffff;
  *(void*)(this_ptr + 0x70) = 0x4628c00044960000;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar9 = (void*)&g_025f0698;
  *puVar5 = &g_025f0698;
  *(void*)(puVar5 + 7) = 0;
  *(void*)((int64_t)puVar5 + 0x3c) = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  *(void*)(puVar5 + 10) = 0;
  (*g_025f06b0)();
  lVar1 = *(int64_t *)(this_ptr + 0x138);
  *(void**)(this_ptr + 0x138) = puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x21c) = 0;
  *(void*)(this_ptr + 0x8c) = 0x3ccccccd3f000000;
  FUN_016c0a70();
  lVar1 = *(int64_t *)(this_ptr + 0x58);
  lVar8 = lVar1;
  if (lVar1 == local_30) goto LAB_01323327;
  lVar8 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar8 = 0;
      goto LAB_013232e5;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x58);
    *(int64_t *)(this_ptr + 0x58) = local_30;
  }
  else {
    local_28 = '\0';
LAB_013232e5:
    *(int64_t *)(this_ptr + 0x58) = lVar8;
  }
  pVar9 = (void*)lVar1;
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar8 = local_30;
  }
LAB_01323327:
  if ((local_28 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar6 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 0x68);
  *(int64_t **)(this_ptr + 0x68) = plVar6;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar6 = (int64_t *)FUN_00e8fc40();
  FUN_0013dd30();
  (**(code **)(*plVar6 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 0x60);
  *(int64_t **)(this_ptr + 0x60) = plVar6;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150cac0();
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150cb90();
  *(void*)(this_ptr + 0x1aa) = 0;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025eec60;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(void*)(puVar5 + 9) = 0;
  (*g_025eec78)();
  lVar1 = *(int64_t *)(this_ptr + 0x150);
  *(void**)(this_ptr + 0x150) = puVar5;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

