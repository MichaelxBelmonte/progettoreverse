// Function: FUN_00c36d90
// Address: 00c36d90
// Size: 772 bytes
// Class: GNOverloudTapedesk

uint64_t FUN_00c36d90(uint64_t param_1,byte param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint64_t uVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar2 = local_40;
  lVar1 = g_027ef7e8;
  if (g_027ef7e8 != 0) {
    FUN_00d50b00();
  }
  bVar3 = (**(code **)(*plVar2 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3 & param_2) == 0) {
    local_70 = *arg1;
    local_68 = '\0';
    uVar5 = FUN_01d16950(param_1,param_2);
    uVar6 = (uint64_t)uVar5;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    iVar4 = FUN_01caea00();
    if (iVar4 == 0) {
      FUN_00d46530();
      local_50 = local_40;
      local_48 = 0;
      local_90 = g_027e7c20;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          local_90 = g_027e7c20;
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      g_027e7c20 = local_90;
      if (local_90 != 0) {
        local_48 = '\x01';
        FUN_00d50b00();
      }
      local_88 = '\x01';
      (**(code **)(*this_ptr + 0x4d0))(param_1,&local_90);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01caea40();
      FUN_00d46530();
      local_60 = local_40;
      local_58 = 0;
      local_a0 = g_027e7c20;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          local_a0 = g_027e7c20;
        }
      }
      else {
        local_38 = '\0';
      }
      local_58 = '\x01';
      g_027e7c20 = local_a0;
      if (local_a0 != 0) {
        local_58 = '\x01';
        FUN_00d50b00();
      }
      local_98 = '\x01';
      (**(code **)(*this_ptr + 0x4d0))(param_1,&local_a0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar1 = g_027e7c20;
    if (g_027e7c20 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar1;
    local_78 = '\x01';
    FUN_01ccaae0(param_1,&local_80);
    FUN_01d243a0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    uVar6 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
  }
  return uVar6 & 0xffffffff;
}

