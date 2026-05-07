// Function: FUN_00b429e0
// Address: 00b429e0
// Size: 1237 bytes
// Class: GNDate

uint64_t FUN_00b429e0(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t arg1;
  int64_t this_ptr;
  int64_t lVar3;
  bool bVar4;
  bool bVar5;
  int64_t local_f8;
  char local_f0;
  int64_t local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  uint local_50;
  int local_4c;
  int64_t local_48;
  char local_40;
  int local_38;
  int local_34;
  
  local_4c = param_2;
  if (arg1 < 0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x398))(param_1,&local_e0);
    bVar4 = true;
    if (local_48 == 0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x3a0))();
      bVar4 = local_f8 != 0;
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = g_02764880;
    arg1 = local_e0;
    if (bVar4) {
      if (g_02764880 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar3;
      local_d0 = '\x01';
      FUN_00cc78b0();
      arg1 = local_e0;
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
        arg1 = local_e0;
      }
    }
  }
  do {
    (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x390))();
    lVar3 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02764880;
    if (lVar3 != 0) {
      if (g_02764880 != 0) {
        FUN_00d50b00();
      }
      local_c8 = lVar1;
      local_c0 = '\x01';
      FUN_00cc78b0();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00ccd6d0(&local_34,&local_50);
    lVar3 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02764880;
    if (lVar3 != 0) {
      if (g_02764880 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar1;
      local_b0 = '\x01';
      FUN_00cc78b0();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    local_58 = (uint64_t)local_50;
    if (local_34 != 4) {
      return 0;
    }
    if (local_50 == 1) {
      FUN_00ccd750(&local_34,&local_58);
      bVar4 = local_48 != 0;
      bVar5 = local_34 != 8;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_02764880;
      if (bVar4 || bVar5) {
        if (g_02764880 != 0) {
          FUN_00d50b00();
        }
        local_a8 = lVar3;
        local_a0 = '\x01';
        FUN_00cc78b0();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00ccd6d0(&local_34,&local_38);
      bVar4 = local_48 != 0;
      bVar5 = local_34 != 4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_02764880;
      if (bVar4 || bVar5) {
        if (g_02764880 != 0) {
          FUN_00d50b00();
        }
        local_98 = lVar3;
        local_90 = '\x01';
        FUN_00cc78b0();
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_38 == local_4c) {
        return local_58 - 0x10;
      }
    }
    else {
      if (local_50 == 0) {
        FUN_00ccd6d0(&local_34,&local_38);
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = g_02764880;
        if (local_48 != 0 || local_34 != 4) {
          if (g_02764880 != 0) {
            FUN_00d50b00();
          }
          local_88 = lVar3;
          local_80 = '\x01';
          FUN_00cc78b0();
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        }
        if (local_38 == local_4c) {
          return arg1 - 8;
        }
        return 0;
      }
      FUN_00ccd6d0(&local_34,&local_38);
      bVar4 = local_48 != 0;
      bVar5 = local_34 != 4;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_02764880;
      if (bVar4 || bVar5) {
        if (g_02764880 != 0) {
          FUN_00d50b00();
        }
        local_78 = lVar3;
        local_70 = '\x01';
        FUN_00cc78b0();
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_38 == local_4c) {
        return (uint64_t)(local_50 - 8);
      }
    }
    lVar3 = arg1 - local_58;
    if (lVar3 == 0 || arg1 < (int64_t)local_58) {
      return 0;
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x3a0))();
    lVar1 = local_48;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_02764880;
    arg1 = lVar3;
    if (lVar1 != 0) {
      if (g_02764880 != 0) {
        FUN_00d50b00();
      }
      local_68 = lVar2;
      local_60 = '\x01';
      FUN_00cc78b0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  } while( true );
}

