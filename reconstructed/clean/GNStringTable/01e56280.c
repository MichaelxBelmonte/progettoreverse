// Function: FUN_01e56280
// Address: 01e56280
// Size: 686 bytes
// Class: GNStringTable

void FUN_01e56280(uint64_t param_1,int64_t *param_2)

{
  void*puVar1;
  void*puVar2;
  int64_t this_ptr;
  uint32_t uVar3;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_38;
  char local_30;
  
  *(void*)(this_ptr + 0x40) = 1;
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar2 + 0xc) = 0;
  *puVar2 = &g_026a3350;
  puVar2[2] = &g_026a37c8;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *(void*)(puVar2 + 5) = 0;
  puVar2[6] = 0;
  *(void*)((int64_t)puVar2 + 0x37) = 0;
  *(void*)((int64_t)puVar2 + 0x3c) = 0;
  *(void*)((int64_t)puVar2 + 0x44) = 0;
  *(void*)((int64_t)puVar2 + 0x4c) = 0;
  *(void*)((int64_t)puVar2 + 0x54) = 0;
  *(void*)((int64_t)puVar2 + 0x5c) = 0;
  *(void*)((int64_t)puVar2 + 100) = 0;
  *(void*)((int64_t)puVar2 + 0x69) = 0;
  puVar2[0xf] = 0;
  *(void*)((int64_t)puVar2 + 0x7f) = 0;
  *(void*)((int64_t)puVar2 + 0x84) = 0;
  *(void*)((int64_t)puVar2 + 0x8c) = 0;
  *(void*)((int64_t)puVar2 + 0x94) = 0;
  uVar3 = (*g_026a3368)();
  puVar1 = *(void**)(this_ptr + 0x18);
  if (puVar1 == puVar2) {
    uVar3 = FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x18) = puVar2;
    if (puVar1 != (void*)0x0) {
      uVar3 = FUN_00d50b20();
    }
  }
  local_78 = *param_2;
  local_70 = '\0';
  FUN_01e5b6f0(uVar3,&local_78);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01e5c670();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x20) != 0) {
    FUN_01e5eec0();
  }
  FUN_01e5e3f0();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 == 0) {
    FUN_00d4efa0();
    FUN_00c7e7b0();
    if (local_30 != '\0') {
      local_30 = '\0';
    }
    FUN_01e5e380();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x28) != 0) {
    FUN_01e5ca90();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01e6cc40();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e5e430();
  return;
}

