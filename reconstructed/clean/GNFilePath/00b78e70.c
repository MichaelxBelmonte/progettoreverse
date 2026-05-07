// Function: FUN_00b78e70
// Address: 00b78e70
// Size: 760 bytes
// Class: GNFilePath

void FUN_00b78e70(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_80;
  int64_t local_78;
  int64_t local_70;
  int64_t local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  int64_t local_38;
  
  if ((g_028a5388 == 0) || (g_028a5391 == '\0')) {
    FUN_00e8cb50();
    lVar1 = g_027637e0;
    if (g_028a5388 == 0) {
      if (g_027637e0 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_0276cc90;
      local_48 = lVar1;
      if (g_0276cc90 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_027637f0;
      local_40 = lVar3;
      if (g_027637f0 != 0) {
        FUN_00d50b00();
      }
      lVar3 = g_027637f8;
      local_38 = lVar1;
      if (g_027637f8 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_02763800;
      if (g_02763800 != 0) {
        FUN_00d50b00();
      }
      lVar4 = g_02763808;
      if (g_02763808 != 0) {
        FUN_00d50b00();
      }
      local_80 = local_40;
      local_78 = local_38;
      local_70 = lVar3;
      local_68 = lVar1;
      local_60 = lVar4;
      FUN_007f7950(&local_78,&local_80,&local_70,&local_68);
      FUN_000b6830();
      lVar5 = g_028a5388;
      if (g_028a5388 != local_58) {
        if (local_50 == '\0') {
          if (local_58 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_58;
          }
        }
        else {
          local_50 = '\0';
          lVar5 = local_58;
        }
        bVar2 = g_028a5388 != 0;
        g_028a5388 = lVar5;
        if (bVar2) {
          FUN_00d50b20();
          lVar5 = local_58;
        }
      }
      if ((lVar5 != 0) && (g_028a5390 == '\0')) {
        g_028a5390 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_58;
      }
      if ((local_50 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      FUN_007f76c0();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      g_028a5391 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5391 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar1 = g_02763810;
  if (((int)param_2 < 0) || (*(int *)(g_028a5388 + 0xc) <= (int)param_2)) {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    lVar1 = *(int64_t *)(*(int64_t *)(g_028a5388 + 0x10) + (uint64_t)param_2 * 8);
    *(void*)(this_ptr + 1) = 0;
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *this_ptr = lVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

