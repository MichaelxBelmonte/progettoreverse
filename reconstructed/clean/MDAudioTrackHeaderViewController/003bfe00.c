// Function: FUN_003bfe00
// Address: 003bfe00
// Size: 1209 bytes
// Class: MDAudioTrackHeaderViewController

void FUN_003bfe00(uint64_t param_1,uint32_t param_2)

{
  void*puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  void*puVar4;
  void *pvVar5;
  void* pVar6;
  int64_t this_ptr;
  uint32_t uVar7;
  int64_t *local_98;
  char local_90;
  int64_t *local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 0x98) != 0) {
    FUN_01e40eb0();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x478))();
    }
    if (*(int64_t *)(this_ptr + 0x98) != 0) {
      *(void*)(this_ptr + 0x98) = 0;
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x4d8))();
  uVar7 = FUN_00d05530();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar4 + 0x27) = 0;
  puVar4[0x2e] = 0;
  *(void*)(puVar4 + 0x2f) = 0;
  puVar4[0x30] = 0;
  *(void*)(puVar4 + 0x31) = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  *(void*)(puVar4 + 0x2a) = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  *(void*)((int64_t)puVar4 + 0x165) = 0;
  *(void*)((int64_t)puVar4 + 0x18c) = 0;
  *(void*)((int64_t)puVar4 + 0x194) = 0;
  *(void*)((int64_t)puVar4 + 0x199) = 0;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0;
  puVar4[0x38] = 0;
  *puVar4 = &g_0269c118;
  puVar4[2] = &g_0269cc70;
  pVar6 = 0x269ccb0;
  puVar4[0x39] = &g_0269ccb0;
  puVar4[0x45] = 0;
  *(void*)(puVar4 + 0x46) = 0;
  puVar4[0x47] = 0;
  puVar4[0x3a] = 0;
  puVar4[0x3b] = 0;
  *(void*)(puVar4 + 0x3c) = 0;
  puVar4[0x3d] = 0;
  puVar4[0x3e] = 0;
  puVar4[0x3f] = 0;
  puVar4[0x40] = 0;
  *(void*)((int64_t)puVar4 + 0x205) = 0;
  puVar4[0x42] = 0;
  puVar4[0x43] = 0;
  *(void*)((int64_t)puVar4 + 0x21d) = 0;
  (*g_0269c130)();
  puVar1 = *(void**)(this_ptr + 0x98);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x98) = puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x9c8))();
  (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x4d0))(uVar7,param_2);
  plVar2 = *(int64_t **)(this_ptr + 0x98);
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x640))();
  (**(code **)(*local_98 + 0x370))();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*plVar2 + 0x9d8))();
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x3a0))();
  plVar2 = *(int64_t **)(this_ptr + 0x98);
  FUN_00d50b00();
  (**(code **)(*plVar2 + 0xa20))();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_027057c8;
  plVar2 = *(int64_t **)(this_ptr + 0x98);
  if (g_027057c8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar2 + 0xa10))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  plVar2 = *(int64_t **)(this_ptr + 0x98);
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*plVar2 + 0x968))();
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e40eb0();
  lVar3 = *(int64_t *)(this_ptr + 0x98);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x450))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e42250();
  (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0xab8))();
  return;
}

