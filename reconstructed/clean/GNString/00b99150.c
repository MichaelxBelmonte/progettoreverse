// Function: FUN_00b99150
// Address: 00b99150
// Size: 1543 bytes
// Class: GNString
// String references:
//   "regn"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00b99150(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint32_t uVar5;
  int64_t this_ptr;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_c0;
  char local_b8;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int local_40;
  int64_t local_38;
  
  FUN_00ae7ec0();
  lVar1 = g_02765240;
  if (*(int64_t *)(this_ptr + 0x48) == 0) goto LAB_00b995d8;
  if (g_02765240 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  lVar2 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_38 = lVar2;
  if (lVar2 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_48 = *(int64_t *)(lVar2 + 0x10);
    local_40 = 0;
    lVar1 = g_02764940;
    if (0 < *(int *)(local_48 + 0xc)) {
      do {
        local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + (int64_t)local_40 * 8);
        FUN_00e6fcd0((int64_t)local_40,&local_58);
        if ((local_b8 == '\0') && (local_c0 != 0)) {
          FUN_00d50b00();
        }
        lVar1 = g_02764950;
        if (g_02764950 != 0) {
          FUN_00d50b00();
        }
        cVar4 = FUN_00d50f90();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          lVar1 = *(int64_t *)(this_ptr + 0x18);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_00bc0a20();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        if (local_c0 != 0) {
          FUN_00d50b20();
        }
        local_40 = local_40 + 1;
      } while (local_40 < *(int *)(local_48 + 0xc));
      lVar1 = g_02764940;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
        lVar1 = g_02764940;
      }
    }
    g_02764940 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    lVar3 = local_38;
    FUN_000175c0();
    lVar2 = local_58;
    if (lVar3 == local_58) {
LAB_00b9943c:
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        local_38 = lVar2;
        FUN_00d50b20();
        goto LAB_00b9943c;
      }
      local_38 = local_58;
      FUN_00d50b20();
      local_50 = '\0';
      local_38 = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  uVar5 = FUN_00ccce90();
  FUN_00bb2c20(*(void*)(this_ptr + 0x38),uVar5);
  lVar1 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0x18)) {
      (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x398))();
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))(4,"regn");
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      FUN_00ccdf50();
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      FUN_00ccdbb0();
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
LAB_00b995d8:
  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x3a0))();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccdf50();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x3a0))();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccdf50();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x3a0))();
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccdf50();
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  return;
}

