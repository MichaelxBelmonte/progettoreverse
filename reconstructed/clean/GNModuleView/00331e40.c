// Function: FUN_00331e40
// Address: 00331e40
// Size: 672 bytes
// Class: GNModuleView
// === GNModuleView properties ===
//                   _uiName
//                   _trimsLoadedView
//                   _trimMargins
//                   _requiresObjectsForLoadingUI
//                   _takesFrameSizeFromUI
//                   _loadedFilesOwner
//                   _loadedWindowMinSize


void FUN_00331e40(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  byte bVar3;
  char cVar4;
  uint64_t uVar5;
  int64_t this_ptr;
  double dVar6;
  uint64_t uVar7;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar1 = g_026e1810;
  if (*(int64_t *)(this_ptr + 0x140) != 0) {
    if (g_026e1810 != 0) {
      FUN_00d50b00();
    }
    dVar6 = (double)FUN_00e7d6f0();
    uVar5 = (uint64_t)(dVar6 * g_023907c0);
    dVar6 = dVar6 * g_023907c0 - g_023907c8;
    uVar7 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
        (uVar7 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    bVar3 = (byte)(((int64_t)dVar6 & (int64_t)uVar5 >> 0x3f | uVar5) / 3);
    local_60 = lVar1;
    local_58 = '\0';
    FUN_000175c0(uVar7,&local_60);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      local_38 = '\0';
      local_40 = plVar2;
      bVar3 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if ((plVar2 != (int64_t *)0x0 & bVar3) == 1) {
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_40 + 0x450))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      cVar4 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(this_ptr + 0x140) + 0x478))();
        FUN_0032d440();
      }
    }
    else {
      FUN_01e40eb0();
      plVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (int64_t *)0x0) {
        FUN_01e53c20();
        plVar2 = local_40;
        local_48 = 0;
        local_50 = *(int64_t *)(this_ptr + 0x140);
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        local_48 = '\x01';
        (**(code **)(*plVar2 + 0x450))();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}

