// Function: FUN_01cc4e70
// Address: 01cc4e70
// Size: 894 bytes
// Class: Unknown

void FUN_01cc4e70(void)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  void*this_ptr;
  bool bVar4;
  int64_t local_40;
  char local_38;
  int64_t *local_30;
  char local_28;
  
  plVar3 = g_028b73a0;
  if ((g_028b73a0 == (int64_t *)0x0) || (g_028b73a9 == '\0')) {
    FUN_00e8cb50();
    if (g_028b73a0 == (int64_t *)0x0) {
      plVar3 = (int64_t *)FUN_00e8fc40();
      FUN_00152930();
      (**(code **)(*plVar3 + 0x18))();
      if (g_028b73a0 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = g_028b73a0 != (int64_t *)0x0;
        g_028b73a0 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (g_028b73a8 == '\0') {
        g_028b73a8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_01d4ed60(g_0241f3e0);
      FUN_01d52700();
      FUN_01d52740();
      FUN_01cfbee0(g_02390124,0,0);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_30 + 0x3c0))(g_0241f3f0,g_023908d8);
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      FUN_01cfbee0(g_02390124,g_02390124,g_02390124);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      FUN_01d48b40(g_02390d34);
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_30 + 0x3e0))(g_0241c3ec,g_02390d2c,g_0241c3ec,g_0241c3ec);
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_30 + 0x3e0))(g_0241c3ec,g_023b36b0,g_0241c3ec,g_023908ec);
      if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52770();
      g_028b73a9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b73a9 = '\x01';
      FUN_00e8cb70();
    }
    plVar3 = g_028b73a0;
    *(void*)(this_ptr + 1) = 0;
    if (plVar3 == (int64_t *)0x0) {
      plVar3 = (int64_t *)0x0;
      goto LAB_01cc51d4;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01cc51d4:
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

