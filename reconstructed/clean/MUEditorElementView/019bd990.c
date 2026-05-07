// Function: FUN_019bd990
// Address: 019bd990
// Size: 677 bytes
// Class: MUEditorElementView

void FUN_019bd990(void)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  void*this_ptr;
  bool bVar4;
  void*local_118 [14];
  int64_t local_a8;
  char local_a0;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  uint32_t local_3c;
  uint32_t local_38;
  uint32_t local_34;
  uint32_t local_30;
  uint32_t local_2c;
  
  plVar3 = g_028b28c8;
  if ((g_028b28c8 == (int64_t *)0x0) || (g_028b28d1 == '\0')) {
    FUN_00e8cb50();
    if (g_028b28c8 == (int64_t *)0x0) {
      plVar3 = (int64_t *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar3 + 0x18))();
      if (g_028b28c8 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = g_028b28c8 != (int64_t *)0x0;
        g_028b28c8 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (g_028b28d0 == '\0') {
        g_028b28d0 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_01cfc9f0(g_0239109c,0);
      local_3c = 0;
      FUN_01cfc9f0(g_0239109c,0);
      local_38 = 0x3e800000;
      FUN_01cfc9f0(g_023b294c,g_02390124);
      local_34 = 0x3f000000;
      FUN_01cfc9f0(g_02390124,g_02390124);
      local_30 = 0x3f000000;
      FUN_01cfc9f0(g_02390124,0);
      local_2c = 0x3f800000;
      FUN_019bddb0(&local_60,&local_3c,&local_38,&local_50,&local_2c);
      FUN_01f7ba60(g_023b5d7c,local_118);
      local_118[0] = &g_02628ac8;
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      FUN_019fe220();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      g_028b28d1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b28d1 = '\x01';
      FUN_00e8cb70();
    }
    plVar3 = g_028b28c8;
    *(void*)(this_ptr + 1) = 0;
    if (plVar3 == (int64_t *)0x0) {
      plVar3 = (int64_t *)0x0;
      goto LAB_019bdc14;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_019bdc14:
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

