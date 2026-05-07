// Function: FUN_01cb4790
// Address: 01cb4790
// Size: 792 bytes
// Class: Unknown

void FUN_01cb4790(void)

{
  int64_t *plVar1;
  bool bVar2;
  char cVar3;
  void*this_ptr;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  uint32_t local_44;
  int64_t *local_40;
  char local_38;
  
  if (g_028b72c0 != (int64_t *)0x0) goto LAB_01cb4a79;
  FUN_01cb4c70();
  FUN_01cb5c40();
  plVar1 = local_40;
  if (g_028b72c0 != local_40) {
    plVar4 = g_028b72c0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        plVar4 = g_028b72c0;
      }
    }
    else {
      local_38 = '\0';
    }
    g_028b72c0 = plVar1;
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((plVar1 != (int64_t *)0x0) && (g_028b72c8 == '\0')) {
    g_028b72c8 = '\x01';
    FUN_00e8cb90();
  }
  if ((local_38 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01cb4a79;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_01cb4a79;
  lVar5 = g_027ede00;
  local_58 = plVar1;
  if (g_027ede00 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar5;
  local_80 = '\x01';
  local_78 = 0;
  local_70 = '\0';
  FUN_00d710b0(&local_78,&local_88);
  local_50 = local_40;
  if (local_40 == (int64_t *)0x0) {
    local_44 = 1;
    local_50 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_44 = 0;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01cb4913;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    local_44 = 0;
  }
LAB_01cb4913:
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 == (int64_t *)0x0) {
    bVar2 = true;
  }
  else {
    if (0 < *(int *)(g_028b72d0 + 0xc)) {
      lVar5 = 0;
      do {
        plVar1 = *(int64_t **)(*(int64_t *)(g_028b72d0 + 0x10) + lVar5 * 8);
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar1 + 0x448))();
        local_68 = local_50;
        local_60 = '\0';
        cVar3 = (**(code **)(*local_40 + 0x50))();
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar4 = g_028b72c0;
        if (cVar3 != '\0') {
          if ((g_028b72c0 != plVar1) &&
             (FUN_00d50b00(), g_028b72c0 = plVar1, plVar4 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (g_028b72c8 == '\0') {
            g_028b72c8 = '\x01';
            FUN_00e8cb90();
          }
          FUN_00d50b20();
          break;
        }
        FUN_00d50b20();
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(g_028b72d0 + 0xc));
    }
    bVar2 = false;
  }
  FUN_00d50b20();
  if ((char)local_44 == '\0' && !bVar2) {
    FUN_00d50b20();
  }
LAB_01cb4a79:
  plVar1 = g_028b72c0;
  *(void*)(this_ptr + 1) = 0;
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  *this_ptr = plVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

