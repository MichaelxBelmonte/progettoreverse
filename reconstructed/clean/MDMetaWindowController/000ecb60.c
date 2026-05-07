// Function: FUN_000ecb60
// Address: 000ecb60
// Size: 523 bytes
// Class: MDMetaWindowController

void FUN_000ecb60(void)

{
  void*puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  FUN_01e534b0();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar4 + 0xc) = 0;
  *(void*)((int64_t)puVar4 + 0x14) = 0;
  *(void*)((int64_t)puVar4 + 0x1a) = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  *puVar4 = &g_024dfd78;
  (*g_024dfd90)();
  puVar1 = *(void**)(this_ptr + 200);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 200) = puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar4 + 0xc) = 0;
  *(void*)((int64_t)puVar4 + 0x14) = 0;
  *(void*)((int64_t)puVar4 + 0x1a) = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  *puVar4 = &g_02618bb8;
  (*g_02618bd0)();
  puVar1 = *(void**)(this_ptr + 0xd0);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xd0) = puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  plVar2 = *(int64_t **)(this_ptr + 0xb8);
  (**(code **)(*plVar2 + 0x640))();
  (**(code **)(*local_60 + 0x370))();
  FUN_01d44d80(g_02392fd8);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar2 + 0x9d8))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = *(int64_t *)(this_ptr + 200);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_01e058f0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}

