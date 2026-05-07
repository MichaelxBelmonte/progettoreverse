// Function: FUN_01d09fc0
// Address: 01d09fc0
// Size: 521 bytes
// Class: GNMultipleValue

int64_t * FUN_01d09fc0(void)

{
  bool bVar1;
  char cVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int64_t local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  lVar4 = *(int64_t *)(arg1 + 0x240);
  if (0 < *(int *)(lVar4 + 0xc)) {
    lVar5 = 0;
    do {
      local_40 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar5 * 8);
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_00d23d70();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        local_40 = *(int64_t *)
                    (*(int64_t *)
                      (*(int64_t *)(*(int64_t *)(arg1 + 0x240) + 0x10) + lVar5 * 8) + 0x10);
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
      }
      local_38 = '\0';
      lVar5 = lVar5 + 1;
      lVar4 = *(int64_t *)(arg1 + 0x240);
    } while (lVar5 < *(int *)(lVar4 + 0xc));
  }
  lVar4 = *(int64_t *)(arg1 + 600);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (local_40 == 0) {
    bVar1 = false;
  }
  else if (local_38 == '\0') {
    FUN_00d50b00();
    bVar1 = true;
  }
  else {
    bVar1 = true;
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  if (!bVar1 && local_40 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = local_40;
  *(void*)(this_ptr + 1) = 1;
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

