// Function: FUN_01f7cd50
// Address: 01f7cd50
// Size: 640 bytes
// Class: GNRadialColorGradient

void FUN_01f7cd50(void)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  void*this_ptr;
  bool bVar4;
  int64_t local_30;
  char local_28;
  
  puVar3 = g_028bb028;
  if ((g_028bb028 == (void*)0x0) || (g_028bb031 == '\0')) {
    FUN_00e8cb50();
    if (g_028bb028 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
      if (g_028bb028 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = g_028bb028 != (void*)0x0;
        g_028bb028 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (g_028bb030 == '\0') {
        g_028bb030 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(0);
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_0239011c);
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d46dc0(g_02390124);
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_028bb031 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028bb031 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = g_028bb028;
    *(void*)(this_ptr + 1) = 0;
    if (puVar3 == (void*)0x0) {
      puVar3 = (void*)0x0;
      goto LAB_01f7cfb9;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01f7cfb9:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

