// Function: FUN_01d73760
// Address: 01d73760
// Size: 1464 bytes
// Class: GNMultipleValue
// String references:
//   ".%@"
//   "%@%I"

void FUN_01d73760(void)

{
  int64_t lVar1;
  void*puVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t local_110;
  char local_108;
  int local_100;
  int local_fc;
  int64_t local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  void*local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  void*local_70;
  uint local_68;
  int64_t local_60;
  char local_58;
  int local_50;
  int64_t local_48;
  char local_40;
  
  FUN_00d4efa0();
  FUN_00c82bb0();
  local_c0 = local_70;
  local_b8 = 0;
  if ((char)local_68 == '\0') {
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = local_68 & 0xffffff00;
  }
  local_b8 = '\x01';
  FUN_00e3f850();
  if ((local_b8 != '\0') && (local_c0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0xa18))();
  puVar2 = local_70;
  if (((char)local_68 != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    (**(code **)(*this_ptr + 0xa18))();
    local_60 = local_80;
    local_68 = 1;
    local_70 = &g_024c5048;
    local_58 = 0;
    if (local_80 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    FUN_00d8cb40();
    local_b0 = local_48;
    local_a8 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_a8 = '\x01';
    FUN_00e3f850();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((this_ptr[10] != 0) && (iVar4 = FUN_00d8c7a0(), iVar4 != 0)) {
    local_e8 = 0;
    (**(code **)(this_ptr[2] + 0x10))();
    FUN_00d50b00();
    local_110 = g_027f0e20;
    local_e8 = '\x01';
    local_f0 = this_ptr + 2;
    if (g_027f0e20 != 0) {
      FUN_00d50b00();
    }
    local_108 = '\x01';
    local_d8 = 0;
    lVar1 = this_ptr[10];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_d8 = '\x01';
    local_e0 = lVar1;
    FUN_00e3fb50(&local_e0,&local_110);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
      (**(code **)(*local_f0 + 0x10))();
      FUN_00d50b20();
    }
  }
  cVar3 = FUN_01d10140();
  if ((cVar3 != '\0') && (local_fc = FUN_01d6fde0(), 0 < local_fc)) {
    plVar5 = this_ptr + 2;
    iVar4 = 0;
    do {
      local_c8 = 0;
      (**(code **)(*plVar5 + 0x10))();
      FUN_00d50b00();
      lVar1 = g_027f0ae8;
      local_c8 = '\x01';
      local_f8 = g_027f0ae8;
      local_d0 = plVar5;
      if (g_027f0ae8 == 0) {
        local_68 = 2;
      }
      else {
        FUN_00d50b00();
        local_68 = 2;
        local_70 = &g_024c5048;
        local_58 = 0;
        FUN_00d50b00();
      }
      local_100 = iVar4 + 1;
      local_60 = lVar1;
      local_58 = '\x01';
      local_70 = (void*)&g_025df2a0;
      local_50 = local_100;
      FUN_00d8cb40(local_100,&local_70);
      local_a0 = local_48;
      local_98 = 0;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_98 = '\x01';
      FUN_01d70140();
      local_90 = local_80;
      local_88 = 0;
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      lVar1 = local_f8;
      local_88 = '\x01';
      FUN_00e3fb50(&local_90,&local_a0);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_70 = &g_024c5048;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
        (**(code **)(*local_d0 + 0x10))();
        FUN_00d50b20();
      }
      iVar4 = local_100;
    } while (local_fc != local_100);
  }
  (**(code **)(*this_ptr + 0xa18))();
  puVar2 = local_70;
  if (((char)local_68 != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00e3faa0();
  }
  FUN_00e3faa0();
  return;
}

