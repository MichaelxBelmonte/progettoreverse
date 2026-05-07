// Function: FUN_01d13800
// Address: 01d13800
// Size: 612 bytes
// Class: GNValue

void FUN_01d13800(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  int64_t local_80;
  char local_78;
  int64_t local_68;
  int64_t local_60;
  int64_t local_58;
  int64_t local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  lVar6 = g_028b7f48;
  if ((g_028b7f48 == 0) || (g_028b7f51 == '\0')) {
    FUN_00e8cb50();
    lVar6 = g_027e7c20;
    if (g_028b7f48 == 0) {
      if (g_027e7c20 != 0) {
        FUN_00d50b00();
      }
      lVar2 = g_027057d0;
      local_38 = lVar6;
      if (g_027057d0 != 0) {
        FUN_00d50b00();
      }
      lVar6 = g_027ef7f0;
      if (g_027ef7f0 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_027ef7f8;
      if (g_027ef7f8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_027ef800;
      if (g_027ef800 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar2;
      local_60 = lVar6;
      local_58 = lVar3;
      local_50 = lVar4;
      FUN_007f7a00(&local_60,&local_68,&local_58,&local_50);
      FUN_000b6830();
      lVar5 = g_028b7f48;
      if (g_028b7f48 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar5 = local_48;
        }
        bVar1 = g_028b7f48 != 0;
        g_028b7f48 = lVar5;
        if (bVar1) {
          FUN_00d50b20();
          lVar5 = local_48;
        }
      }
      if ((lVar5 != 0) && (g_028b7f50 == '\0')) {
        g_028b7f50 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_48;
      }
      if ((local_40 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      FUN_007f76c0();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      g_028b7f51 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b7f51 = '\x01';
      FUN_00e8cb70();
    }
    lVar6 = g_028b7f48;
    *(void*)(this_ptr + 1) = 0;
    if (lVar6 == 0) {
      lVar6 = 0;
      goto LAB_01d13a3c;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01d13a3c:
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}

