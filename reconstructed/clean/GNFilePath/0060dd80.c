// Function: FUN_0060dd80
// Address: 0060dd80
// Size: 797 bytes
// Class: GNFilePath

void FUN_0060dd80(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *plVar4;
  void*puVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_48;
  char local_40;
  
  lVar1 = *arg1;
  lVar2 = this_ptr[0x42];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x42] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  puVar5 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar5 + 0x27) = 0;
  puVar5[0x2e] = 0;
  *(void*)(puVar5 + 0x2f) = 0;
  puVar5[0x30] = 0;
  *(void*)(puVar5 + 0x31) = 0;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  *(void*)(puVar5 + 0x2a) = 0;
  puVar5[0x2b] = 0;
  puVar5[0x2c] = 0;
  *(void*)((int64_t)puVar5 + 0x165) = 0;
  *(void*)((int64_t)puVar5 + 0x18c) = 0;
  *(void*)((int64_t)puVar5 + 0x194) = 0;
  *(void*)((int64_t)puVar5 + 0x199) = 0;
  puVar5[0x35] = 0;
  puVar5[0x36] = 0;
  puVar5[0x37] = 0;
  puVar5[0x38] = 0;
  *puVar5 = &g_0269c118;
  puVar5[2] = &g_0269cc70;
  puVar5[0x39] = &g_0269ccb0;
  puVar5[0x45] = 0;
  *(void*)(puVar5 + 0x46) = 0;
  puVar5[0x47] = 0;
  puVar5[0x3a] = 0;
  puVar5[0x3b] = 0;
  *(void*)(puVar5 + 0x3c) = 0;
  puVar5[0x3d] = 0;
  puVar5[0x3e] = 0;
  puVar5[0x3f] = 0;
  puVar5[0x40] = 0;
  *(void*)((int64_t)puVar5 + 0x205) = 0;
  puVar5[0x42] = 0;
  puVar5[0x43] = 0;
  *(void*)((int64_t)puVar5 + 0x21d) = 0;
  (*g_0269c130)();
  puVar3 = (void*)this_ptr[0x41];
  if (puVar3 == puVar5) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x41] = (int64_t)puVar5;
    if (puVar3 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  plVar4 = (int64_t *)this_ptr[0x41];
  FUN_003a4de0();
  (**(code **)(*this_ptr + 0xae0))();
  (**(code **)(*plVar4 + 0x4d0))();
  (**(code **)(*(int64_t *)this_ptr[0x41] + 0x9c8))();
  plVar4 = (int64_t *)this_ptr[0x41];
  FUN_003a4d00();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  (**(code **)(*plVar4 + 0x958))();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0x41] + 0x3a0))();
  lVar1 = g_027ebf00;
  plVar4 = (int64_t *)this_ptr[0x41];
  if (g_027ebf00 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar4 + 0xa10))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)this_ptr[0x41];
  FUN_00d50b00();
  (**(code **)(*plVar4 + 0xa20))();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x41];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x450))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

