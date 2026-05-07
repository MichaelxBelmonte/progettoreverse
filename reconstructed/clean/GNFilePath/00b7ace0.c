// Function: FUN_00b7ace0
// Address: 00b7ace0
// Size: 1054 bytes
// Class: GNFilePath

void FUN_00b7ace0(void)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  void*this_ptr;
  bool bVar4;
  int64_t local_40;
  char local_38;
  
  puVar3 = g_028a55b0;
  if ((g_028a55b0 == (void*)0x0) || (g_028a55b9 == '\0')) {
    FUN_00e8cb50();
    if (g_028a55b0 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
      if (g_028a55b0 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = g_028a55b0 != (void*)0x0;
        g_028a55b0 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (g_028a55b8 == '\0') {
        g_028a55b8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00b7d310();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00b7dcf0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00b7ce70();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00b7d850();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00b7e000();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00b7e310();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00b7e620();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      FUN_00b7ea30();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      g_028a55b9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a55b9 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = g_028a55b0;
    *(void*)(this_ptr + 1) = 0;
    if (puVar3 == (void*)0x0) {
      puVar3 = (void*)0x0;
      goto LAB_00b7b0e4;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00b7b0e4:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

