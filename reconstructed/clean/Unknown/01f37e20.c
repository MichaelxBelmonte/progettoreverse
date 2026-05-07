// Function: FUN_01f37e20
// Address: 01f37e20
// Size: 655 bytes
// Class: Unknown

void FUN_01f37e20(void)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  
  if (*arg1 != 0) {
    while (cVar3 = FUN_00d23d70(), cVar3 != '\0') {
      FUN_00d23f50();
    }
    lVar2 = *arg1;
    FUN_00d23370();
    iVar1 = *(int *)(this_ptr[0xd] + 0xc);
    while (0x14 < iVar1) {
      FUN_00d23740();
      iVar1 = *(int *)(this_ptr[0xd] + 0xc);
    }
    FUN_00d6f370();
    if (lVar2 != 0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      lVar5 = this_ptr[0xd];
      if (0 < *(int *)(lVar5 + 0xc)) {
        lVar6 = 0;
        do {
          (**(code **)(**(int64_t **)(*(int64_t *)(lVar5 + 0x10) + lVar6 * 8) + 0x368))();
          if (lVar2 != 0) {
            FUN_00d50b00();
            FUN_00d21140();
            FUN_00d50b20();
          }
          lVar6 = lVar6 + 1;
          lVar5 = this_ptr[0xd];
        } while (lVar6 < *(int *)(lVar5 + 0xc));
      }
      FUN_00d6f370();
      lVar2 = g_027fffd0;
      if (g_027fffd0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d6f570();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (puVar4 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0x4b0))();
  }
  return;
}

