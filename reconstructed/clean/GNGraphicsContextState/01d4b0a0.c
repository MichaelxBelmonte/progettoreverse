// Function: FUN_01d4b0a0
// Address: 01d4b0a0
// Size: 915 bytes
// Class: GNGraphicsContextState
// === GNGraphicsContextState properties ===
//   GNLineJoin      _lineJoin
//   GNLineCap       _lineCap


void FUN_01d4b0a0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_60;
  char local_58;
  int local_48;
  int64_t local_40;
  char local_38;
  
  if ((g_028b8168 == (int64_t *)0x0) || (g_028b8171 == '\0')) {
    FUN_00e8cb50();
    if (g_028b8168 == (int64_t *)0x0) {
      plVar3 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar3 + 0x18))();
      if (g_028b8168 == plVar3) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
        bVar5 = g_028b8168 != (int64_t *)0x0;
        g_028b8168 = plVar3;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028b8170 == '\0') {
        g_028b8170 = '\x01';
        FUN_00e8cb90();
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      g_028b8171 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b8171 = '\x01';
      FUN_00e8cb70();
    }
  }
  if (g_028b8168 != (int64_t *)0x0) {
    local_58 = '\0';
    local_60 = 0;
    lVar4 = g_028b8168[2];
    local_48 = 0;
    if (0 < *(int *)(lVar4 + 0xc)) {
      do {
        local_60 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + (int64_t)local_48 * 8);
        lVar2 = FUN_00dd6dc0();
        if (lVar2 == this_ptr) {
          FUN_01d4af20();
          if (local_40 == 0) {
            lVar4 = 0;
            bVar1 = false;
          }
          else {
            bVar1 = true;
            lVar4 = local_40;
            if (local_38 == '\0') {
              FUN_00d50b00();
            }
          }
          goto LAB_01d4b140;
        }
        local_48 = local_48 + 1;
      } while (local_48 < *(int *)(lVar4 + 0xc));
    }
    bVar1 = false;
    lVar4 = 0;
LAB_01d4b140:
    if (lVar4 != 0) goto LAB_01d4b337;
  }
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  FUN_00dd6a00();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_01d4b6d0();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  bVar1 = true;
LAB_01d4b337:
  FUN_00dd6a00();
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_01d533c0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d4b780();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_00d50b20();
  }
  return;
}

