// Function: FUN_00c376f0
// Address: 00c376f0
// Size: 521 bytes
// Class: GNOverloudTapedesk

uint64_t FUN_00c376f0(uint64_t param_1,byte param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  byte bVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar6;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
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
  uVar6 = extraout_XMM0_Da;
  if (lVar1 != 0) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((bVar3 & param_2) == 0) {
    local_60 = *arg1;
    local_58 = '\0';
    uVar4 = FUN_01d16950(uVar6,param_2);
    uVar5 = (uint64_t)uVar4;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar6 = FUN_00d46dc0((*(float *)((int64_t)this_ptr + 100) - *(float *)(this_ptr + 0xc)) *
                         g_0239011c + *(float *)(this_ptr + 0xc));
    local_50 = local_40;
    local_48 = 0;
    local_80 = g_027e7c20;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        uVar6 = FUN_00d50b00();
        local_80 = g_027e7c20;
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    g_027e7c20 = local_80;
    if (local_80 != 0) {
      local_48 = '\x01';
      uVar6 = FUN_00d50b00();
    }
    local_78 = '\x01';
    uVar6 = (**(code **)(*this_ptr + 0x4d0))(uVar6,&local_80);
    if ((local_78 != '\0') && (local_80 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
    lVar1 = g_027e7c20;
    if (g_027e7c20 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_70 = lVar1;
    local_68 = '\x01';
    FUN_01ccaae0(uVar6,&local_70);
    FUN_01d243a0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
  }
  return uVar5 & 0xffffffff;
}

