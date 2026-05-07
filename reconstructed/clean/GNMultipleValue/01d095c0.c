// Function: FUN_01d095c0
// Address: 01d095c0
// Size: 1260 bytes
// Class: GNMultipleValue

uint64_t FUN_01d095c0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int64_t *this_ptr;
  uint64_t uVar5;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar1 = g_027ef538;
  if (g_027ef538 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    uVar4 = FUN_01d123e0();
    uVar5 = (uint64_t)uVar4;
    goto LAB_01d09945;
  }
  uVar5 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
  if (param_2 == '\0') goto LAB_01d09945;
  cVar3 = (**(code **)(*this_ptr + 0xac8))();
  if (cVar3 != '\0') {
    FUN_01e057f0();
  }
  if ((int)this_ptr[0x4a] - 1U < 2) {
    FUN_01caeae0();
    FUN_01d65230();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_01d09e90();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01d0a320();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
LAB_01d09927:
    bVar2 = false;
    local_40 = (int64_t *)0x0;
  }
  else {
    if ((int)this_ptr[0x4a] != 3) {
      FUN_01caeae0();
      FUN_01d65230();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*this_ptr + 0x968))();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01d09927;
    }
    FUN_01caeae0();
    FUN_01d65230();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_01d09e90();
    if (local_40 == (int64_t *)0x0) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    cVar3 = FUN_00d23d70();
    if (cVar3 == '\0') {
      FUN_00d21140();
    }
    else {
      FUN_00d23f50();
    }
    lVar1 = this_ptr[0x49];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01d09fc0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_01d10370();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01d11e80();
  if ((bVar2) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01d09945:
  return uVar5 & 0xffffffff;
}

