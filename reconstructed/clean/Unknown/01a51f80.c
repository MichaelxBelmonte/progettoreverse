// Function: FUN_01a51f80
// Address: 01a51f80
// Size: 719 bytes
// Class: Unknown

void FUN_01a51f80(void)

{
  void*puVar1;
  bool bVar2;
  code *pcVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  
  FUN_00d50100();
  if ((g_028b2bd8 == 0) || (g_028b2be1 == '\0')) {
    FUN_00e8cb50();
    lVar6 = g_027e2118;
    if (g_028b2bd8 == 0) {
      if (g_027e2118 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_01d20ca0(g_023b1900);
      lVar5 = g_028b2bd8;
      if (g_028b2bd8 != local_60) {
        if (local_58 == '\0') {
          if (local_60 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_60;
          }
        }
        else {
          local_58 = '\0';
          lVar5 = local_60;
        }
        bVar2 = g_028b2bd8 != 0;
        g_028b2bd8 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_60;
        }
      }
      if ((lVar5 != 0) && (g_028b2be0 == '\0')) {
        g_028b2be0 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_60;
      }
      if ((local_58 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      g_028b2be1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b2be1 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b2bd8 == 0) {
      lVar6 = 0;
      goto LAB_01a52143;
    }
  }
  lVar6 = g_028b2bd8;
  FUN_00d50b00();
LAB_01a52143:
  (**(code **)(*this_ptr + 0x390))();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &g_026324d8;
  puVar4[2] = &g_02632998;
  *(void*)((int64_t)puVar4 + 0x34) = 0;
  pcVar3 = g_026324f0;
  (*g_026324f0)();
  puVar1 = (void*)this_ptr[7];
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    this_ptr[7] = (int64_t)puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01a4f310();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar4 = &g_026324d8;
  puVar4[2] = &g_02632998;
  *(void*)((int64_t)puVar4 + 0x34) = 0;
  (*pcVar3)();
  puVar1 = (void*)this_ptr[8];
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    this_ptr[8] = (int64_t)puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01a4f310();
  return;
}

