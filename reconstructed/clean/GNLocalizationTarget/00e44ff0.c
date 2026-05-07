// Function: FUN_00e44ff0
// Address: 00e44ff0
// Size: 600 bytes
// Class: GNLocalizationTarget
// String references:
//   "Unknown compressor '%@'"

void FUN_00e44ff0(uint64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  uint32_t uVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_a0;
  char local_98;
  int64_t *local_40;
  uint local_38;
  int64_t *local_30;
  char local_28;
  
  FUN_00c8ced0();
  if (*arg1 == 0) {
    *(void*)(this_ptr + 0x28) = 0;
    return;
  }
  FUN_00d4efa0();
  FUN_00c7e7b0();
  plVar2 = local_40;
  if ((char)local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_38 = local_38 & 0xffffff00;
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_02786798;
  if (g_02786798 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar2 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = g_027867a0;
  uVar4 = 1;
  if (cVar3 == '\0') {
    if (g_027867a0 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar2 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_027867a8;
    uVar4 = 2;
    if (cVar3 == '\0') {
      if (g_027867a8 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar2 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027816e8;
      uVar4 = 3;
      if (cVar3 == '\0') {
        if (g_027816e8 != 0) {
          FUN_00d50b00();
        }
        local_38 = 1;
        local_40 = &g_024c5048;
        FUN_00d50b00();
        local_30 = plVar2;
        local_28 = '\x01';
        FUN_00cc7b40(param_1,&local_40);
        local_40 = &g_024c5048;
        if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        goto LAB_00e4516b;
      }
    }
  }
  *(void*)(this_ptr + 0x28) = uVar4;
LAB_00e4516b:
  FUN_00d50b20();
  return;
}

