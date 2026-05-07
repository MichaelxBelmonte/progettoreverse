// Function: FUN_01a4efc0
// Address: 01a4efc0
// Size: 513 bytes
// Class: Unknown

void FUN_01a4efc0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  FUN_00d50100();
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  if ((g_028b2bc8 == 0) || (g_028b2bd1 == '\0')) {
    FUN_00e8cb50();
    lVar3 = g_027e20f0;
    if (g_028b2bc8 == 0) {
      if (g_027e20f0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(g_023b1900);
      lVar2 = g_028b2bc8;
      if (g_028b2bc8 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = g_028b2bc8 != 0;
        g_028b2bc8 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (g_028b2bd0 == '\0')) {
        g_028b2bd0 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028b2bd1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b2bd1 = '\x01';
      FUN_00e8cb70();
    }
    if (g_028b2bc8 == 0) {
      lVar3 = 0;
      goto LAB_01a4f181;
    }
  }
  lVar3 = g_028b2bc8;
  FUN_00d50b00();
LAB_01a4f181:
  (**(code **)(*this_ptr + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}

