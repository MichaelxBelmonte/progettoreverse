// Function: FUN_004b8a50
// Address: 004b8a50
// Size: 970 bytes
// Class: MDToolbarLayouter
// String references:
//   "LayerCollection %I entries"
//   "\n[EDT]"
//   "\n[REF]"
//   "\n[OFF]"
//   "[ENB]"
//   "[DIS]"
//   " %@"
//   "LayerCollection no entries"
// === MDToolbarLayouter properties ===
//   MDLayoutAlign   _align
//                   _centerLayout
//                   _rightLayout
//                   _showsEditorBar
//                   _toolbarEditMixCtrl
//                   _toolbarEditModeCtrl
//                   _toolbarQuantizeMacrosCtrl
//                   _toolbarUndoCtrl
//                   _toolbarToolCtrl
//                   _toolbarEditorViewCtrl
//                   _toolbarVersionCtrl
//                   _toolbarTrackMemoryUsageCtrl


void FUN_004b8a50(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  char cVar4;
  void*puVar5;
  void**ppuVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar7;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  void*local_80;
  int64_t local_78;
  uint64_t local_70;
  uint32_t local_68;
  void*local_60;
  char local_58;
  void*local_50;
  uint local_48;
  uint32_t local_44;
  int64_t local_40;
  char local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025795a8;
  (*g_025795c0)();
  if (*(int64_t *)(arg1 + 0x10) == 0) {
    FUN_00c9fe20();
    lVar2 = local_88;
    ppuVar6 = &local_60;
    if ((char)local_80 != '\0') {
      ppuVar6 = &local_80;
    }
    local_60._0_1_ = (char)local_80;
    *(void*)ppuVar6 = 0;
    if (((char)local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    local_44 = *(void*)(lVar2 + 0xc);
    local_48 = 1;
    local_50 = &g_024cc6f0;
    FUN_00d94d80(&g_024cc6f0,&local_50);
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00c9fe20();
    lVar2 = local_88;
    local_60._0_1_ = (char)local_80;
    ppuVar6 = &local_60;
    if ((char)local_80 != '\0') {
      ppuVar6 = &local_80;
    }
    *(void*)ppuVar6 = 0;
    if (((char)local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    local_44 = *(void*)(lVar2 + 0xc);
    local_48 = 1;
    local_50 = &g_024cc6f0;
    FUN_00d94d80(&g_024cc6f0,&local_50);
    if ((char)local_60 != '\0') {
      FUN_00d50b20();
    }
    FUN_00c9fe20();
    lVar2 = local_88;
    ppuVar6 = &local_80;
    if ((char)local_80 == '\0') {
      ppuVar6 = &local_50;
    }
    local_50 = (void*)CONCAT71(local_50._1_7_,(char)local_80);
    *(void*)ppuVar6 = 0;
    if (((char)local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((char)local_50 == '\0') {
      if (lVar2 == 0) goto LAB_004b8e0d;
      FUN_00d50b00();
    }
    else if (lVar2 == 0) goto LAB_004b8e0d;
    local_80._0_1_ = '\0';
    local_88 = 0;
    local_78 = lVar2;
    local_68 = 0;
    local_70 = 0;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar7 = 0;
      do {
        local_98 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar7 * 8);
        local_90 = '\0';
        local_88 = local_98;
        FUN_004b7f70(arg1,&local_98);
        puVar3 = local_50;
        if ((char)local_48 == '\0') {
          if (local_50 != (void*)0x0) {
            FUN_00d50b00();
            if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_48 = local_48 & 0xffffff00;
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        cVar4 = FUN_003b7710();
        if (cVar4 == '\0') {
          cVar4 = FUN_003b7780();
          if (cVar4 == '\0') {
            FUN_00d8db40();
          }
          else {
            FUN_00d8db40();
          }
        }
        else {
          FUN_00d8db40();
        }
        cVar4 = FUN_003b7990();
        if (cVar4 == '\0') {
          FUN_00d8db40();
        }
        else {
          FUN_00d8db40();
        }
        FUN_003b7950();
        lVar1 = CONCAT71(local_60._1_7_,(char)local_60);
        local_48 = 1;
        local_50 = &g_024c5048;
        local_38 = 0;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\x01';
        local_40 = lVar1;
        FUN_00d94d80();
        local_50 = &g_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (CONCAT71(local_60._1_7_,(char)local_60) != 0)) {
          FUN_00d50b20();
        }
        if (puVar3 != (void*)0x0) {
          FUN_00d50b20();
        }
        lVar7 = lVar7 + 1;
        local_70 = CONCAT44(local_70._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar2 + 0xc));
    }
    FUN_00018280();
    FUN_00d50b20();
  }
LAB_004b8e0d:
  FUN_00d8c7d0();
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

