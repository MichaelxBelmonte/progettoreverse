// Function: FUN_000bff70
// Address: 000bff70
// Size: 807 bytes
// Class: Unknown

void FUN_000bff70(uint64_t param_1,int64_t *param_2)

{
  uint uVar1;
  uint64_t uVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  uint32_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t *local_30;
  uint32_t local_28;
  
  uVar1 = *(uint *)(this_ptr + 0x30);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      if ((uVar1 & 0x10) == 0) {
        if ((uVar1 & 0x20) != 0) {
          local_70 = *(int64_t *)(this_ptr + 0x10);
          local_68 = '\0';
          uVar2 = FUN_00d8b910();
          local_28 = 0;
          local_30 = (int64_t *)&g_024caff8;
          FUN_00d3af80(&g_027ef998,uVar2,&local_30);
          (**(code **)(*local_60 + 0x368))();
          if (((char)local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_80 = *(int64_t *)(this_ptr + 0x10);
        local_78 = '\0';
        uVar2 = FUN_00d8b910();
        local_50 = *arg1;
        local_58 = 1;
        local_60 = &g_024c5048;
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        local_48 = '\x01';
        FUN_00d3af80(&g_026dc63a,uVar2,&local_60);
        (**(code **)(*local_30 + 0x368))();
        if (((char)local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_60 = &g_024c5048;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_90 = *(int64_t *)(this_ptr + 0x10);
      local_88 = '\0';
      uVar2 = FUN_00d8b910();
      local_50 = *param_2;
      local_58 = 1;
      local_60 = &g_024c5048;
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      local_48 = '\x01';
      FUN_00d3af80(&g_026dc637,uVar2,&local_60);
      (**(code **)(*local_30 + 0x368))();
      if (((char)local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_60 = &g_024c5048;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_a0 = *(int64_t *)(this_ptr + 0x10);
    local_98 = '\0';
    uVar2 = FUN_00d8b910();
    local_a8 = *param_2;
    FUN_00083ea0(2,&local_a8);
    FUN_00d3af80(&g_026dc633,uVar2,&local_60);
    (**(code **)(*local_30 + 0x368))();
    if (((char)local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_60 = (int64_t *)&g_0253d630;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &g_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

