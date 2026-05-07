// Function: FUN_004ac670
// Address: 004ac670
// Size: 1501 bytes
// Class: MDErrorController

void FUN_004ac670(void)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  uint64_t uVar4;
  int64_t this_ptr;
  uint64_t uVar5;
  double dVar6;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t **)(this_ptr + 0x70) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x920))();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    FUN_00292400();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x920))();
    local_100 = g_02708f20;
    if (g_02708f20 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_f8 = '\x01';
    FUN_01d5e6e0(uVar5,&local_100);
    lVar1 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = g_027296a0;
    if (lVar1 != 0) {
      if (g_027296a0 != 0) {
        FUN_00d50b00();
      }
      lVar1 = g_026de5c0;
      local_f0 = lVar2;
      local_e8 = '\x01';
      if (g_026de5c0 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar1;
      local_d8 = '\x01';
      local_d0 = 0;
      local_c8 = '\0';
      FUN_00d31230(&local_d0,&local_e0);
      local_70 = local_40;
      local_68 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = '\x01';
      FUN_01d64eb0();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = g_02708e90;
    if (g_02708e90 != 0) {
      FUN_00d50b00();
    }
    dVar6 = (double)FUN_00e7d6f0();
    uVar4 = (uint64_t)(dVar6 * g_023907c0);
    dVar6 = dVar6 * g_023907c0 - g_023907c8;
    uVar5 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar5 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar5 = FUN_00d50b20();
    }
    bVar3 = (byte)(((int64_t)dVar6 & (int64_t)uVar4 >> 0x3f | uVar4) / 3);
    local_50 = lVar1;
    local_48 = '\0';
    FUN_000175c0(uVar5,&local_50);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      local_38 = '\0';
      local_40 = lVar2;
      bVar3 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((lVar2 != 0 & bVar3) != 0) {
      uVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x920))();
      local_c0 = g_026de5e8;
      if (g_026de5e8 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_b8 = '\x01';
      FUN_01d5e6e0(uVar5,&local_c0);
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = g_027296a0;
      if (lVar1 != 0) {
        if (g_027296a0 != 0) {
          FUN_00d50b00();
        }
        lVar1 = g_02708eb0;
        local_b0 = lVar2;
        local_a8 = '\x01';
        if (g_02708eb0 != 0) {
          FUN_00d50b00();
        }
        local_a0 = lVar1;
        local_98 = '\x01';
        local_90 = 0;
        local_88 = '\0';
        FUN_00d31230(&local_90,&local_a0);
        local_60 = local_40;
        local_58 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_58 = '\x01';
        FUN_01d64eb0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
  }
  return;
}

