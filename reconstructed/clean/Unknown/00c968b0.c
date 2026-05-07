// Function: FUN_00c968b0
// Address: 00c968b0
// Size: 1221 bytes
// Class: Unknown

void FUN_00c968b0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  int64_t *arg1;
  void*this_ptr;
  bool bVar5;
  int64_t local_48;
  char local_40;
  void*local_38;
  char local_30;
  
  lVar3 = g_02772ff0;
  if (*arg1 != 0) {
    if (g_02772ff0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d31060();
    if (local_30 == '\0') {
      if (local_38 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if (local_38 != (void*)0x0) goto LAB_00c96d59;
  }
  puVar4 = g_028a7230;
  if ((g_028a7230 == (void*)0x0) || (g_028a7239 == '\0')) {
    FUN_00e8cb50();
    if (g_028a7230 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (g_028a7230 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028a7230 != (void*)0x0;
        g_028a7230 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028a7238 == '\0') {
        g_028a7238 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00d30620();
      if (local_30 == '\0') {
        if (local_38 != (void*)0x0) {
          FUN_00d50b00();
          goto LAB_00c96a45;
        }
      }
      else if (local_38 != (void*)0x0) {
LAB_00c96a45:
        lVar3 = g_02772ff0;
        if (g_02772ff0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d31060();
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_00d243f0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      lVar3 = g_02772ff8;
      if (*(int *)((int64_t)g_028a7230 + 0xc) == 0) {
        if (g_02772ff8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_02773000;
        if (g_02773000 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_02773008;
        if (g_02773008 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_02773010;
        if (g_02773010 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_02773018;
        if (g_02773018 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_02773020;
        if (g_02773020 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_02773028;
        if (g_02773028 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      g_028a7239 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a7239 = '\x01';
      FUN_00e8cb70();
    }
    local_38 = g_028a7230;
    *(void*)(this_ptr + 1) = 0;
    if (local_38 == (void*)0x0) {
      local_38 = (void*)0x0;
      goto LAB_00c96d59;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    local_38 = puVar4;
  }
  FUN_00d50b00();
LAB_00c96d59:
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  return;
}

