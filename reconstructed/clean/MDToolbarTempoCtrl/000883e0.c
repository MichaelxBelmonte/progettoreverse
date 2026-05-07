// Function: FUN_000883e0
// Address: 000883e0
// Size: 589 bytes
// Class: MDToolbarTempoCtrl

void FUN_000883e0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  double dVar6;
  uint64_t uVar7;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar2 = g_026d8938;
  if ((*(int64_t *)(this_ptr + 0xa0) != 0) && (*(int64_t *)(this_ptr + 0x10) != 0)) {
    if (g_026d8938 != 0) {
      FUN_00d50b00();
    }
    dVar6 = (double)FUN_00e7d6f0();
    uVar5 = (uint64_t)(dVar6 * g_023907c0);
    dVar6 = dVar6 * g_023907c0 - g_023907c8;
    uVar7 = FUN_0071a120();
    if ((local_38 == '\0') && (local_40 != 0)) {
      uVar7 = FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar7 = FUN_00d50b20();
      }
    }
    bVar4 = (byte)(((int64_t)dVar6 & (int64_t)uVar5 >> 0x3f | uVar5) / 3);
    local_60 = lVar2;
    local_58 = '\0';
    FUN_000175c0(uVar7,&local_60);
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      local_38 = '\0';
      local_40 = lVar3;
      bVar4 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((lVar3 != 0 & bVar4) == 0) {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        (**(code **)(**(int64_t **)(this_ptr + 0xa0) + 0x478))();
      }
    }
    else {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        plVar1 = *(int64_t **)(this_ptr + 0x10);
        lVar2 = *(int64_t *)(this_ptr + 0xa0);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        local_48 = '\x01';
        local_50 = lVar2;
        (**(code **)(*plVar1 + 0x450))();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_0008a6e0();
  return;
}

