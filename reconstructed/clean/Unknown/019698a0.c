// Function: FUN_019698a0
// Address: 019698a0
// Size: 629 bytes
// Class: Unknown

void FUN_019698a0(void)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  void*this_ptr;
  bool bVar4;
  int64_t local_c0;
  int64_t local_b8;
  void*local_b0 [2];
  int64_t local_a0;
  char local_98;
  int64_t local_88;
  char local_80;
  int64_t local_70;
  char local_68;
  uint32_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  uint32_t local_28;
  uint32_t local_24;
  
  plVar3 = g_028b0e38;
  if ((g_028b0e38 == (int64_t *)0x0) || (g_028b0e41 == '\0')) {
    FUN_00e8cb50();
    if (g_028b0e38 == (int64_t *)0x0) {
      plVar3 = (int64_t *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar3 + 0x18))();
      if (g_028b0e38 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = g_028b0e38 != (int64_t *)0x0;
        g_028b0e38 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (g_028b0e40 == '\0') {
        g_028b0e40 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_01cfc6a0(g_023b294c);
      local_28 = 0;
      FUN_01cfc6a0(g_02390128);
      local_24 = 0x3f000000;
      FUN_01cfc6a0(g_023b294c);
      local_c0 = local_48;
      local_b8 = local_38;
      FUN_01a01f50(&local_c0,&local_28,&local_24,&local_b8);
      local_b0[0] = (void*)&g_026b2470;
      local_60 = 0x3f800000;
      FUN_01f7ba60(g_02394294,local_b0);
      local_b0[0] = (void*)&g_02628b38;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_b0[0] = (void*)&g_024f9300;
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      local_b0[0] = &g_024c5048;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      g_028b0e41 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0e41 = '\x01';
      FUN_00e8cb70();
    }
    plVar3 = g_028b0e38;
    *(void*)(this_ptr + 1) = 0;
    if (plVar3 == (int64_t *)0x0) {
      plVar3 = (int64_t *)0x0;
      goto LAB_01969af8;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01969af8:
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

