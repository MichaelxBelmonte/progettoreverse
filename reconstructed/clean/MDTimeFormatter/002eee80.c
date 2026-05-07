// Function: FUN_002eee80
// Address: 002eee80
// Size: 605 bytes
// Class: MDTimeFormatter

uint64_t FUN_002eee80(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int iVar4;
  int64_t local_a0;
  char local_98;
  int64_t local_58;
  char local_50;
  int local_40;
  
  if (param_2 == 0) {
    return 1;
  }
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_02572358;
  (*g_02572370)();
  FUN_01beead0();
  if (local_98 == '\0') {
    if (local_a0 == 0) goto LAB_002ef0b0;
    FUN_00d50b00();
  }
  else if (local_a0 == 0) goto LAB_002ef0b0;
  if (0 < *(int *)(local_a0 + 0xc)) {
    iVar4 = 0;
    do {
      lVar1 = local_58;
      FUN_01bc09c0();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
          goto LAB_002eefe0;
        }
      }
      else if (local_58 != 0) {
LAB_002eefe0:
        local_50 = '\0';
        local_58 = 0;
        local_40 = -1;
        while( true ) {
          lVar3 = (int64_t)local_40;
          local_40 = local_40 + 1;
          if (*(int *)(lVar1 + 0xc) <= local_40) break;
          local_58 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar3 * 8);
          FUN_00d21140();
        }
        FUN_000840d0();
        FUN_00d50b20();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(local_a0 + 0xc));
  }
  FUN_002e0650();
  FUN_00d50b20();
LAB_002ef0b0:
  (**(code **)(*this_ptr + 0x9d8))();
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  return 1;
}

