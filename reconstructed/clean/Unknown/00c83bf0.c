// Function: FUN_00c83bf0
// Address: 00c83bf0
// Size: 813 bytes
// Class: Unknown

void FUN_00c83bf0(void)

{
  void*puVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int iVar5;
  int64_t local_68;
  char local_60;
  int local_50;
  int64_t local_40;
  char local_38;
  
  lVar2 = local_68;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_0258a670;
  (*g_0258a688)();
  puVar1 = *(void**)(this_ptr + 0x90);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x90) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00c81830();
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_00c83de7;
    FUN_00d50b00();
  }
  else if (local_68 == 0) goto LAB_00c83de7;
  local_60 = '\0';
  local_68 = 0;
  local_50 = -1;
  while( true ) {
    lVar4 = (int64_t)local_50;
    local_50 = local_50 + 1;
    if (*(int *)(lVar2 + 0xc) <= local_50) break;
    local_68 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + 8 + lVar4 * 8);
    FUN_00d74120();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00c88b00();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00cc1480();
  FUN_00d50b20();
LAB_00c83de7:
  FUN_00c81c90();
  if (local_60 == '\0') {
    if (local_68 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_68 == 0) {
    return;
  }
  if (0 < *(int *)(local_68 + 0xc)) {
    iVar5 = 0;
    do {
      FUN_00d74120();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00c88b00();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_68 + 0xc));
  }
  FUN_00559a70();
  FUN_00d50b20();
  return;
}

