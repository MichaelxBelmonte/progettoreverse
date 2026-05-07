// Function: FUN_004832f0
// Address: 004832f0
// Size: 1232 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_004832f0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  byte bVar5;
  uint64_t uVar6;
  uint64_t unaff_RBX;
  int64_t *arg1;
  int64_t this_ptr;
  double dVar7;
  uint64_t uVar8;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  lVar3 = g_026f6f08;
  lVar2 = g_026e1810;
  lVar1 = *arg1;
  if (lVar1 == *(int64_t *)(this_ptr + 0x200)) {
    FUN_01f27fe0();
    cVar4 = (**(code **)(*local_58 + 0x450))();
    lVar1 = g_026e1810;
    if (cVar4 == '\0') {
      uVar6 = 0;
    }
    else {
      if (g_026e1810 != 0) {
        FUN_00d50b00();
      }
      dVar7 = (double)FUN_00e7d6f0();
      uVar6 = (uint64_t)(dVar7 * g_023907c0);
      dVar7 = dVar7 * g_023907c0 - g_023907c8;
      uVar8 = FUN_0071a120();
      if ((local_30 == '\0') && (local_38 != 0)) {
        uVar8 = FUN_00d50b00();
        if ((local_30 != '\0') && (local_38 != 0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      bVar5 = (byte)(((int64_t)dVar7 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
      local_48 = lVar1;
      local_40 = '\0';
      FUN_000175c0(uVar8,&local_48);
      lVar2 = local_38;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
          if ((local_30 != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_30 = '\0';
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        local_30 = '\0';
        local_38 = lVar2;
        bVar5 = FUN_00c70bc0();
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      uVar6 = CONCAT71((int7)((uint64_t)lVar2 >> 8),lVar2 != 0 & bVar5);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (lVar1 == *(int64_t *)(this_ptr + 0x1b0)) {
    uVar6 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
  }
  else if (lVar1 == *(int64_t *)(this_ptr + 0x288)) {
    if (g_026e1810 != 0) {
      FUN_00d50b00();
    }
    dVar7 = (double)FUN_00e7d6f0();
    uVar6 = (uint64_t)(dVar7 * g_023907c0);
    dVar7 = dVar7 * g_023907c0 - g_023907c8;
    uVar8 = FUN_0071a120();
    if ((local_30 == '\0') && (local_38 != 0)) {
      uVar8 = FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != 0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    bVar5 = (byte)(((int64_t)dVar7 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
    local_48 = lVar2;
    local_40 = '\0';
    FUN_000175c0(uVar8,&local_48);
    lVar1 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_30 = '\0';
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      local_30 = '\0';
      local_38 = lVar1;
      bVar5 = FUN_00c70bc0();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar6 = CONCAT71((int7)((uint64_t)lVar1 >> 8),lVar1 != 0 & bVar5);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  else if (lVar1 == *(int64_t *)(this_ptr + 0x1b8)) {
    if (g_026f6f08 != 0) {
      FUN_00d50b00();
    }
    dVar7 = (double)FUN_00e7d6f0();
    uVar6 = (uint64_t)(dVar7 * g_023907c0);
    dVar7 = dVar7 * g_023907c0 - g_023907c8;
    uVar8 = FUN_0071a120();
    if ((local_30 == '\0') && (local_38 != 0)) {
      uVar8 = FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != 0)) {
        uVar8 = FUN_00d50b20();
      }
    }
    bVar5 = (byte)(((int64_t)dVar7 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
    local_48 = lVar3;
    local_40 = '\0';
    FUN_000175c0(uVar8,&local_48);
    lVar1 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_30 = '\0';
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      local_30 = '\0';
      local_38 = lVar1;
      bVar5 = FUN_00c70bc0();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar6 = CONCAT71((int7)((uint64_t)lVar1 >> 8),lVar1 != 0 & bVar5);
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6 & 0xffffffff;
}

