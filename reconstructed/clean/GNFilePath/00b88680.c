// Function: FUN_00b88680
// Address: 00b88680
// Size: 1499 bytes
// Class: GNFilePath

void FUN_00b88680(void)

{
  bool bVar1;
  void*puVar2;
  uint unaff_ESI;
  void*this_ptr;
  void*puVar3;
  int64_t local_f0;
  int64_t local_e8;
  int64_t local_e0;
  char local_d8;
  void*local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_80;
  int64_t local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  void*local_40;
  char local_38;
  
  if (unaff_ESI == 1) {
    FUN_00d46530();
    FUN_00d46530();
    FUN_00d46530();
    FUN_00d46530();
    local_80 = local_70;
    local_78 = local_60;
    local_f0 = local_50;
    local_e8 = local_e0;
    FUN_00b8f440(&local_f0,&local_78,&local_e8,4);
    FUN_00295b80();
    puVar3 = local_40;
    if (local_40 == (void*)0x0) {
      puVar3 = (void*)0x0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    FUN_007f76c0();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
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
LAB_00b88c27:
    *(void*)(this_ptr + 1) = 0;
    if ((bVar1) || (puVar3 == (void*)0x0)) goto LAB_00b88c3e;
  }
  else {
    if ((unaff_ESI != 9) && (unaff_ESI != 6)) {
      FUN_00d46530();
      FUN_00d46530();
      FUN_00d46530();
      local_e0 = local_70;
      local_80 = local_60;
      local_78 = local_50;
      FUN_002bd7b0(&local_78,&local_80,3);
      FUN_00295b80();
      puVar3 = local_40;
      if (local_40 == (void*)0x0) {
        puVar3 = (void*)0x0;
        bVar1 = false;
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar1 = true;
          if ((local_38 == '\0') || (local_40 == (void*)0x0)) goto LAB_00b889cc;
          FUN_00d50b20();
        }
        else {
          local_38 = '\0';
        }
        bVar1 = true;
      }
LAB_00b889cc:
      local_d0 = (void*)&g_025df260;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      local_d0 = (void*)&g_0253d630;
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      local_d0 = &g_024c5048;
      if ((local_b8 != '\0') && (local_c0 != 0)) {
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
      if ((unaff_ESI & 0xfffffffe) == 2) {
        FUN_00d46530();
        puVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_d0 = puVar2;
        local_c8 = '\0';
        FUN_00d21140();
        if ((local_c8 != '\0') && (local_d0 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar2 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d46530();
        puVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_d0 = puVar2;
        local_c8 = '\0';
        FUN_00d21140();
        if ((local_c8 != '\0') && (local_d0 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if (puVar2 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_00b88c27;
    }
    FUN_00d46530();
    FUN_00d46530();
    FUN_00d46530();
    local_e0 = local_70;
    local_80 = local_60;
    local_78 = local_50;
    FUN_002bd7b0(&local_78,&local_80,3);
    FUN_00295b80();
    puVar3 = local_40;
    if (local_40 == (void*)0x0) {
      puVar3 = (void*)0x0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    local_d0 = (void*)&g_025df260;
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    local_d0 = (void*)&g_0253d630;
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    local_d0 = &g_024c5048;
    if ((local_b8 != '\0') && (local_c0 != 0)) {
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
    *(void*)(this_ptr + 1) = 0;
    if (bVar1 || puVar3 == (void*)0x0) goto LAB_00b88c3e;
  }
  FUN_00d50b00();
LAB_00b88c3e:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

