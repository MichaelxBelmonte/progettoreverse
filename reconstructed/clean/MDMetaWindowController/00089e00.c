// Function: FUN_00089e00
// Address: 00089e00
// Size: 1273 bytes
// Class: MDMetaWindowController

void FUN_00089e00(void)

{
  int64_t lVar1;
  byte bVar2;
  uint64_t uVar3;
  int64_t this_ptr;
  int64_t lVar4;
  int64_t lVar5;
  double dVar6;
  uint64_t uVar7;
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
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01f27fe0();
  FUN_0027c9f0();
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  lVar5 = g_026d8938;
  local_48 = lVar4;
  if (g_026d8938 != 0) {
    FUN_00d50b00();
  }
  dVar6 = (double)FUN_00e7d6f0();
  uVar3 = (uint64_t)(dVar6 * g_023907c0);
  dVar6 = dVar6 * g_023907c0 - g_023907c8;
  uVar7 = FUN_0071a120();
  if (((local_38 == '\0') && (local_40 != 0)) &&
     ((uVar7 = FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
    uVar7 = FUN_00d50b20();
  }
  bVar2 = (byte)(((int64_t)dVar6 & (int64_t)uVar3 >> 0x3f | uVar3) / 3);
  local_58 = lVar5;
  local_50 = '\0';
  FUN_000175c0(uVar7,&local_58);
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    local_38 = '\0';
    local_40 = lVar4;
    bVar2 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  uVar7 = FUN_00d50b20();
  if (lVar5 != 0) {
    uVar7 = FUN_00d50b20();
  }
  lVar5 = g_02708ed0;
  if ((lVar4 != 0 & bVar2) == 0) {
    if (*(int64_t **)(this_ptr + 0x88) != (int64_t *)0x0) {
      local_80 = '\0';
      local_88 = 0;
      (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x6e8))();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar4 = local_48;
    if (*(int64_t **)(this_ptr + 0xa0) != (int64_t *)0x0) {
      local_70 = '\0';
      local_78 = 0;
      (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x6e8))();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if (*(int64_t **)(this_ptr + 0xa8) != (int64_t *)0x0) {
      local_60 = '\0';
      local_68 = 0;
      (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x6e8))();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (g_02708ed0 != 0) {
      uVar7 = FUN_00d50b00();
    }
    lVar4 = local_48;
    local_d8 = lVar5;
    local_d0 = '\x01';
    uVar7 = FUN_01d5e6e0(uVar7,&local_d8);
    lVar5 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      uVar7 = FUN_00d50b20();
    }
    lVar1 = g_02708ed0;
    if (lVar5 != 0) {
      if (g_02708ed0 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_c8 = lVar1;
      local_c0 = '\x01';
      FUN_01d5e6e0(uVar7,&local_c8);
      FUN_01d64cb0();
      lVar5 = local_40;
      if (lVar4 == local_40) {
LAB_0008a1c3:
        lVar5 = lVar4;
        if (local_38 != '\0') {
LAB_0008a1c9:
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
            lVar4 = lVar5;
            goto LAB_0008a1c3;
          }
          if (local_38 == '\0') goto LAB_0008a1d7;
          goto LAB_0008a1c9;
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        local_38 = '\0';
      }
LAB_0008a1d7:
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 == 0) {
        return;
      }
      if (*(int64_t **)(this_ptr + 0x88) != (int64_t *)0x0) {
        local_b0 = '\0';
        local_b8 = lVar5;
        (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x6e8))();
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
      }
      if (*(int64_t **)(this_ptr + 0xa0) != (int64_t *)0x0) {
        local_a0 = '\0';
        local_a8 = lVar5;
        (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x6e8))();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
      if (*(int64_t **)(this_ptr + 0xa8) != (int64_t *)0x0) {
        local_90 = '\0';
        local_98 = lVar5;
        (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x6e8))();
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_0008a188;
    }
  }
  if (lVar4 == 0) {
    return;
  }
LAB_0008a188:
  FUN_00d50b20();
  return;
}

