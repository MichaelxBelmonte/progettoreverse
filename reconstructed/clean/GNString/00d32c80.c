// Function: FUN_00d32c80
// Address: 00d32c80
// Size: 2271 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00d32c80(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  char *pcVar4;
  uint64_t uVar5;
  undefined7 uVar6;
  void*this_ptr;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  char cVar10;
  uint32_t uVar11;
  uint64_t unaff_R14;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  uint32_t local_94;
  uint64_t local_90;
  uint64_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  uint64_t local_60;
  char local_58 [8];
  uint64_t local_50;
  uint64_t local_48;
  uint local_3c;
  
  (**(code **)(*(int64_t *)*this_ptr + 0x18))();
  lVar7 = CONCAT71(uStack_6f,local_70);
  if (local_68 == '\0') {
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_00d31720();
  local_80 = local_60;
  if (local_60 == 0) {
    uVar11 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
    local_80 = 0;
  }
  else {
    if (local_58[0] == '\0') {
      FUN_00d50b00();
    }
    uVar11 = 0;
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
    FUN_00d50b20();
  }
  local_94 = uVar11;
  if ((local_80 == 0) || (*(int *)(local_80 + 0xc) < 1)) {
    local_50 = 0;
    uVar9 = 0;
    local_78 = 0;
    local_48 = 0;
  }
  else {
    lVar7 = 0;
    local_48 = 0;
    uVar8 = 0;
    uVar9 = 0;
    local_3c = 0;
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(local_80 + 0x10) + lVar7 * 8);
      uVar5 = local_80;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      uVar3 = FUN_00d31a90();
      uVar2 = local_60;
      cVar10 = (char)uVar8;
      if (local_60 == local_48) {
        uVar2 = local_48;
        if ((cVar10 == '\0') && (local_60 != 0)) {
          uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
          uVar8 = uVar5;
          if (local_58[0] == '\0') {
            local_78 = uVar5;
            FUN_00d50b00();
            uVar2 = local_48;
            uVar8 = local_78;
          }
        }
        else if ((local_58[0] != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
          uVar2 = local_48;
        }
      }
      else if (local_58[0] == '\0') {
        if (local_60 != 0) {
          uVar3 = FUN_00d50b00();
        }
        local_78 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
        uVar8 = local_78;
        if ((cVar10 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
          uVar8 = local_78;
        }
      }
      else {
        local_78 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
        uVar8 = local_78;
        if ((cVar10 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
          uVar8 = local_78;
        }
      }
      local_78 = uVar8;
      local_48 = uVar2;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        local_50 = (uint64_t)local_3c;
      }
      else {
        lVar1 = *(int64_t *)(*(int64_t *)(local_80 + 0x10) + lVar7 * 8);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        uVar3 = FUN_00d2f5f0();
        uVar8 = local_60;
        if (uVar9 == local_60) {
          uVar8 = uVar9;
          if (((char)local_3c == '\0') && (uVar9 != 0)) {
            local_50 = CONCAT71((int7)(uVar5 >> 8),1);
            if (local_58[0] == '\0') {
              local_3c = 0;
              FUN_00d50b00();
            }
          }
          else if ((local_58[0] == '\0') || (local_60 == 0)) {
            local_50 = (uint64_t)local_3c;
          }
          else {
            FUN_00d50b20();
            local_50 = (uint64_t)local_3c;
          }
        }
        else if (local_58[0] == '\0') {
          if (local_60 != 0) {
            uVar3 = FUN_00d50b00();
          }
          local_50 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
          if (((char)local_3c != '\0') && (uVar9 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
          if (((char)local_3c != '\0') && (uVar9 != 0)) {
            FUN_00d50b20();
          }
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        local_3c = (uint)local_50;
        uVar9 = uVar8;
      }
      lVar7 = lVar7 + 1;
      uVar8 = local_78 & 0xffffffff;
    } while (lVar7 < *(int *)(local_80 + 0xc));
  }
  FUN_00d2fd00();
  local_88 = local_60;
  uVar8 = uVar9;
  if (local_60 == 0) {
    local_3c = 1;
    local_90 = 0;
    local_88 = 0;
    if (MACH_HEADER.filetype != 0) goto LAB_00d33086;
LAB_00d33205:
    uVar5 = local_88;
    lVar7 = g_0277d5a8;
    if (g_0277d5a8 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*(int64_t *)*this_ptr + 0x28))();
    lVar1 = CONCAT71(uStack_6f,local_70);
    if (local_68 == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    FUN_00d2f5f0();
    uVar8 = local_60;
    uVar6 = (undefined7)(uVar5 >> 8);
    if (uVar9 == local_60) {
      if (((char)local_50 == '\0') && (uVar9 != 0)) {
        uVar5 = CONCAT71(uVar6,1);
        uVar8 = uVar9;
        if (local_58[0] == '\0') {
          FUN_00d50b00();
        }
      }
      else if ((local_58[0] == '\0') || (local_60 == 0)) {
        uVar5 = local_50 & 0xffffffff;
        uVar8 = uVar9;
      }
      else {
        FUN_00d50b20();
        uVar5 = local_50 & 0xffffffff;
        uVar8 = uVar9;
      }
    }
    else if (local_58[0] == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      uVar5 = CONCAT71(uVar6,1);
      if (((char)local_50 != '\0') && (uVar9 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (((char)local_50 != '\0') && (uVar9 != 0)) {
        FUN_00d50b20();
      }
      local_58[0] = '\0';
      uVar5 = CONCAT71(uVar6,1);
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    local_50 = uVar5 & 0xffffffff;
  }
  else {
    local_90 = CONCAT71((int7)(local_60 >> 8),1);
    if (local_58[0] == '\0') {
      FUN_00d50b00();
    }
    local_3c = 0;
    if (*(int *)(local_88 + 0xc) == 0) goto LAB_00d33205;
LAB_00d33086:
    if (g_028a76e8 == 0) {
      FUN_00d23310();
      uVar9 = local_60;
      pcVar4 = local_58;
      if (local_58[0] == '\0') {
        pcVar4 = &local_70;
      }
      local_70 = local_58[0];
      *pcVar4 = '\0';
      if ((local_58[0] != '\0') && (uVar9 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = g_028a76e8;
      if (g_028a76e8 != uVar9) {
        if (uVar9 != 0) {
          FUN_00d50b00();
        }
        g_028a76e8 = uVar9;
        if (uVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if ((uVar9 != 0) && (g_028a76f0 == '\0')) {
        g_028a76f0 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_70 != '\0') && (uVar9 != 0)) {
        FUN_00d50b20();
      }
    }
    if (g_028a76f8 == 0) {
      FUN_00d23310();
      uVar9 = local_60;
      pcVar4 = local_58;
      if (local_58[0] == '\0') {
        pcVar4 = &local_70;
      }
      local_70 = local_58[0];
      *pcVar4 = '\0';
      if ((local_58[0] != '\0') && (uVar9 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = g_028a76f8;
      if (g_028a76f8 != uVar9) {
        if (uVar9 != 0) {
          FUN_00d50b00();
        }
        g_028a76f8 = uVar9;
        if (uVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if ((uVar9 != 0) && (g_028a7700 == '\0')) {
        g_028a7700 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_70 != '\0') && (uVar9 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d6f370();
  local_b8 = g_0277d618;
  if (g_0277d618 != 0) {
    FUN_00d50b00();
  }
  local_b0 = '\x01';
  local_a8 = 0;
  local_a0 = '\0';
  FUN_00d704d0(&local_a8,&local_b8);
  uVar9 = local_60;
  if (local_58[0] == '\0') {
    if (((local_60 != 0) && (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
    FUN_00d50b20();
  }
  if (uVar9 == 0) goto LAB_00d33516;
  FUN_00d306a0();
  if (local_58[0] == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
      goto LAB_00d3348e;
    }
  }
  else if (local_60 != 0) {
LAB_00d3348e:
    uVar9 = g_028a76e8;
    if (g_028a76e8 == 0) {
      uVar9 = 0;
      if (local_60 != 0) {
LAB_00d334ce:
        FUN_00d50b00();
        g_028a76e8 = local_60;
        if (uVar9 != 0) {
          FUN_00d50b20();
        }
      }
LAB_00d334ea:
      if (g_028a76f0 == '\0') {
        g_028a76f0 = '\x01';
        FUN_00e8cb90();
      }
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      if (local_60 != uVar9) {
        uVar9 = g_028a76e8;
        if (g_028a76e8 != local_60) goto LAB_00d334ce;
        goto LAB_00d334ea;
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00d33516:
  if ((char)local_94 == '\0' && local_80 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (uVar8 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_78 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_3c == '\0') {
    FUN_00d50b20();
  }
  return;
}

