// Function: FUN_00c979f0
// Address: 00c979f0
// Size: 1621 bytes
// Class: Unknown

void FUN_00c979f0(void)

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
  
  lVar3 = g_02773070;
  if (*arg1 != 0) {
    if (g_02773070 != 0) {
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
    if (local_38 != (void*)0x0) goto LAB_00c98029;
  }
  puVar4 = g_028a7250;
  if ((g_028a7250 == (void*)0x0) || (g_028a7259 == '\0')) {
    FUN_00e8cb50();
    if (g_028a7250 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (g_028a7250 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028a7250 != (void*)0x0;
        g_028a7250 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028a7258 == '\0') {
        g_028a7258 = '\x01';
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
          goto LAB_00c97b85;
        }
      }
      else if (local_38 != (void*)0x0) {
LAB_00c97b85:
        lVar3 = g_02773070;
        if (g_02773070 != 0) {
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
      lVar3 = g_02773078;
      if (*(int *)((int64_t)g_028a7250 + 0xc) == 0) {
        if (g_02773078 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_02773080;
        if (g_02773080 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_02773088;
        if (g_02773088 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_02773090;
        if (g_02773090 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_02772f18;
        if (g_02772f18 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_02773098;
        if (g_02773098 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_027730a0;
        if (g_027730a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_027730a8;
        if (g_027730a8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_027730b0;
        if (g_027730b0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_027730b8;
        if (g_027730b8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_027730c0;
        if (g_027730c0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_027730c8;
        if (g_027730c8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      g_028a7259 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a7259 = '\x01';
      FUN_00e8cb70();
    }
    local_38 = g_028a7250;
    *(void*)(this_ptr + 1) = 0;
    if (local_38 == (void*)0x0) {
      local_38 = (void*)0x0;
      goto LAB_00c98029;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    local_38 = puVar4;
  }
  FUN_00d50b00();
LAB_00c98029:
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  return;
}

