// Function: FUN_01a09a50
// Address: 01a09a50
// Size: 730 bytes
// Class: Unknown

void FUN_01a09a50(void)

{
  void*puVar1;
  bool bVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_30;
  char local_28;
  
  FUN_00d50100();
  if ((g_028b2978 == 0) || (g_028b2981 == '\0')) {
    FUN_00e8cb50();
    lVar5 = g_027e1bc8;
    if (g_028b2978 == 0) {
      if (g_027e1bc8 != 0) {
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
      lVar4 = g_028b2978;
      if (g_028b2978 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar4 = local_30;
        }
        bVar2 = g_028b2978 != 0;
        g_028b2978 = lVar4;
        if (bVar2) {
          FUN_00d50b20();
          lVar4 = local_30;
        }
      }
      if ((lVar4 != 0) && (g_028b2980 == '\0')) {
        g_028b2980 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_30;
      }
      if ((local_28 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      g_028b2981 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b2981 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b2978 == 0) {
      lVar5 = 0;
      goto LAB_01a09c0f;
    }
  }
  lVar5 = g_028b2978;
  FUN_00d50b00();
LAB_01a09c0f:
  (**(code **)(*this_ptr + 0x390))();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar3 = &g_02633dd0;
  puVar3[2] = &g_02634290;
  puVar3[7] = 0;
  (*g_02633de8)();
  puVar1 = (void*)this_ptr[7];
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    this_ptr[7] = (int64_t)puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x4b0))();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  FUN_01a5dfe0();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}

