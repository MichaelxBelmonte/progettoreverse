// Function: FUN_00e5a070
// Address: 00e5a070
// Size: 673 bytes
// Class: MUST
// String references:
//   "object of unknown class '%@' is being referred to during unarchiving. This MUST be dealt with in un...

void FUN_00e5a070(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  void*puVar4;
  char cVar5;
  void*puVar6;
  char *pcVar7;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  uint32_t local_74;
  void*local_70;
  char local_68 [8];
  int64_t local_60;
  char local_58;
  int local_3c;
  char local_38 [8];
  
  cVar5 = FUN_00e58720();
  if ((cVar5 == '\0') || (FUN_00dab510(), local_3c == -1)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_00e579d0();
  puVar4 = local_70;
  pcVar7 = local_38;
  if (local_68[0] != '\0') {
    pcVar7 = local_68;
  }
  local_38[0] = local_68[0];
  *pcVar7 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar4 == g_028a8c48) {
    lVar1 = *(int64_t *)
             (*(int64_t *)(arg1[0xb] + 0x10) +
             (int64_t)*(int *)(*(int64_t *)(arg1[0xe] + 0x10) + (int64_t)local_3c * 4) * 8);
    local_74 = (**(code **)(*arg1 + 0x598))();
    lVar3 = g_027815a8;
    plVar2 = (int64_t *)arg1[0x16];
    if (plVar2 == (int64_t *)0x0) {
      if (g_027815a8 != 0) {
        FUN_00d50b00();
      }
      local_88 = lVar3;
      local_80 = '\x01';
      local_68[0] = '\x01';
      local_68[1] = '\0';
      local_68[2] = '\0';
      local_68[3] = '\0';
      local_70 = &g_024c5048;
      local_58 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_58 = '\x01';
      local_60 = lVar1;
      FUN_00cc7b40();
      local_70 = &g_024c5048;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      local_90 = '\0';
      local_98 = lVar1;
      (**(code **)(*plVar2 + 0x30))(local_74,&local_98);
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (arg1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (puVar4 != (void*)0x0) {
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      puVar6 = (void*)0x0;
      goto LAB_00e5a2f4;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  puVar6 = puVar4;
  if ((local_38[0] == '\0') && (puVar6 = (void*)0x0, puVar4 != (void*)0x0)) {
    FUN_00d50b00();
    puVar6 = puVar4;
  }
LAB_00e5a2f4:
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}

