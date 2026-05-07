// Function: FUN_01e0c890
// Address: 01e0c890
// Size: 706 bytes
// Class: GNMultipleValue

void FUN_01e0c890(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t *this_ptr;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  FUN_00d4efa0();
  FUN_00c82bb0();
  local_58 = local_38;
  local_50 = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_50 = '\x01';
  FUN_00e3f850();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  cVar2 = FUN_01d10140();
  if (cVar2 != '\0') {
    local_60 = 0;
    (**(code **)(this_ptr[2] + 0x10))();
    FUN_00d50b00();
    local_a8 = g_027f2f40;
    local_60 = '\x01';
    local_68 = this_ptr + 2;
    if (g_027f2f40 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    (**(code **)(*this_ptr + 0x960))();
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    FUN_00e3fb50(&local_48,&local_a8);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      (**(code **)(*local_68 + 0x10))();
      FUN_00d50b20();
    }
  }
  if ((this_ptr[10] != 0) && (iVar3 = FUN_00d8c7a0(), iVar3 != 0)) {
    (**(code **)(this_ptr[2] + 0x10))();
    FUN_00d50b00();
    local_88 = g_027f0e20;
    local_90 = '\x01';
    local_98 = this_ptr + 2;
    if (g_027f0e20 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_70 = 0;
    lVar1 = this_ptr[10];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    local_78 = lVar1;
    FUN_00e3fb50(&local_78,&local_88);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      (**(code **)(*local_98 + 0x10))();
      FUN_00d50b20();
    }
  }
  FUN_00e3faa0();
  return;
}

