// Function: FUN_0025fab0
// Address: 0025fab0
// Size: 935 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_0025fab0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  uint64_t uVar4;
  int64_t this_ptr;
  bool bVar5;
  double dVar6;
  uint64_t uVar7;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = g_026f6fd0;
  if (g_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar6 = (double)FUN_00e7d6f0();
  uVar4 = (uint64_t)(dVar6 * g_023907c0);
  dVar6 = dVar6 * g_023907c0 - g_023907c8;
  uVar7 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != 0)) && (uVar7 = FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    uVar7 = FUN_00d50b20();
  }
  bVar3 = (byte)(((int64_t)dVar6 & (int64_t)uVar4 >> 0x3f | uVar4) / 3);
  local_50 = lVar1;
  local_48 = '\0';
  FUN_000175c0(uVar7,&local_50);
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
  if ((((lVar2 != 0 & bVar3) == 0) && (*(int *)(this_ptr + 0x198) != 2)) &&
     (*(int64_t *)(this_ptr + 0xb8) != 0)) {
    FUN_004405c0();
    bVar5 = local_40 != 0;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    bVar5 = false;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (bVar5) {
    if (*(int64_t *)(this_ptr + 0xb8) == 0) {
      local_48 = '\0';
      local_50 = 0;
    }
    else {
      FUN_004405c0();
    }
    FUN_004b5af0();
    if (*(int *)(local_40 + 0xc) == 1) {
      if (*(int64_t *)(this_ptr + 0xb8) == 0) {
        local_58 = '\0';
        local_60 = 0;
      }
      else {
        FUN_004405c0();
      }
      FUN_004b5af0();
      bVar3 = FUN_003b7710();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (bVar3 != 0) {
      if (*(int64_t *)(this_ptr + 0xb8) == 0) {
        local_38 = '\0';
        local_40 = 0;
      }
      else {
        FUN_004405c0();
      }
      FUN_004b8a30();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0xb8) == 0) {
        local_48 = '\0';
        local_50 = 0;
      }
      else {
        FUN_004405c0();
      }
      FUN_004b5af0();
      FUN_003b72f0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr + 0xb8) == 0) {
        local_38 = '\0';
        local_40 = 0;
      }
      else {
        FUN_004405c0();
      }
      FUN_004b8a40();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_0022d800();
  FUN_0021a2c0();
  return;
}

