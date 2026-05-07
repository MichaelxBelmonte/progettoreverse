// Function: FUN_01f47190
// Address: 01f47190
// Size: 604 bytes
// Class: GNInfoController

void FUN_01f47190(void)

{
  void*puVar1;
  void*puVar2;
  int64_t this_ptr;
  
  if (*(int64_t *)(this_ptr + 0xa8) == 0) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_025736a8;
    puVar2[3] = 0;
    *(void*)(puVar2 + 4) = 0;
    (*g_025736c0)();
    puVar1 = *(void**)(this_ptr + 0xa8);
    if (puVar1 == puVar2) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0xa8) = puVar2;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  puVar1 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar1 = &g_026ba058;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_00d500e0();
  FUN_01f6c7d0();
  FUN_01f6c800();
  (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x368))();
  FUN_00d21140();
  (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x378))();
  if ((*(int64_t *)(this_ptr + 0xb0) == 0) && (FUN_00da5ad0(), *(char *)(puVar1 + 3) != '\0')) {
    FUN_01e1eb80((int)g_02422df0,0);
    puVar2 = *(void**)(this_ptr + 0xb0);
    if (puVar2 != puVar1) {
      if (puVar1 == (void*)0x0) {
        *(void*)(this_ptr + 0xb0) = 0;
      }
      else {
        FUN_00d50b00();
        puVar2 = *(void**)(this_ptr + 0xb0);
        *(void**)(this_ptr + 0xb0) = puVar1;
      }
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
  return;
}

