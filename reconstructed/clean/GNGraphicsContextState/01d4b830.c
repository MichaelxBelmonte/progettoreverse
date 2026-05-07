// Function: FUN_01d4b830
// Address: 01d4b830
// Size: 595 bytes
// Class: GNGraphicsContextState
// === GNGraphicsContextState properties ===
//   GNLineJoin      _lineJoin
//   GNLineCap       _lineCap


void FUN_01d4b830(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int iVar3;
  int64_t local_90;
  int64_t local_88 [2];
  uint64_t local_78;
  uint32_t local_70;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (g_028b8168 != 0) {
    FUN_00ca1380();
    plVar2 = &local_40;
    if ((char)local_88[0] != '\0') {
      plVar2 = local_88;
    }
    local_40 = CONCAT71(local_40._1_7_,(char)local_88[0]);
    *(void*)plVar2 = 0;
    if (((char)local_88[0] != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_40 == '\0') {
      if (local_90 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_90 == 0) {
      return;
    }
    local_88[0]._0_1_ = 0;
    local_70 = 0;
    local_78 = 0;
    if (0 < *(int *)(local_90 + 0xc)) {
      iVar3 = 0;
      do {
        FUN_01d533c0();
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_01d4aff0();
        lVar1 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00dd6dc0();
          _CGImageRelease();
          FUN_01d533c0();
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_40 = local_50;
          local_38 = '\0';
          FUN_00ca13a0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
        local_78 = CONCAT44(local_78._4_4_,iVar3);
      } while (iVar3 < *(int *)(local_90 + 0xc));
    }
    FUN_01d4e2a0();
    FUN_00d50b20();
  }
  return;
}

