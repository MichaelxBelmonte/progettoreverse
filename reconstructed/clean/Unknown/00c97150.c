// Function: FUN_00c97150
// Address: 00c97150
// Size: 1221 bytes
// Class: Unknown

void FUN_00c97150(void)

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
  
  lVar3 = g_02773030;
  if (*arg1 != 0) {
    if (g_02773030 != 0) {
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
    if (local_38 != (void*)0x0) goto LAB_00c975f9;
  }
  puVar4 = g_028a7240;
  if ((g_028a7240 == (void*)0x0) || (g_028a7249 == '\0')) {
    FUN_00e8cb50();
    if (g_028a7240 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (g_028a7240 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028a7240 != (void*)0x0;
        g_028a7240 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028a7248 == '\0') {
        g_028a7248 = '\x01';
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
          goto LAB_00c972e5;
        }
      }
      else if (local_38 != (void*)0x0) {
LAB_00c972e5:
        lVar3 = g_02773030;
        if (g_02773030 != 0) {
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
      lVar3 = g_02773038;
      if (*(int *)((int64_t)g_028a7240 + 0xc) == 0) {
        if (g_02773038 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_02773040;
        if (g_02773040 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_02773048;
        if (g_02773048 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_02773050;
        if (g_02773050 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_02773058;
        if (g_02773058 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_02773060;
        if (g_02773060 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar3 = g_02773068;
        if (g_02773068 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      g_028a7249 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a7249 = '\x01';
      FUN_00e8cb70();
    }
    local_38 = g_028a7240;
    *(void*)(this_ptr + 1) = 0;
    if (local_38 == (void*)0x0) {
      local_38 = (void*)0x0;
      goto LAB_00c975f9;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    local_38 = puVar4;
  }
  FUN_00d50b00();
LAB_00c975f9:
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  return;
}

