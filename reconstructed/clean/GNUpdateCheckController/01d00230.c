// Function: FUN_01d00230
// Address: 01d00230
// Size: 770 bytes
// Class: GNUpdateCheckController
// === GNUpdateCheckController properties ===
//                   _lastCheckField
//                   _statusField
//                   _checkTypePopup


void FUN_01d00230(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int64_t this_ptr;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  FUN_00d12ed0();
  lVar4 = local_38;
  if ((((local_30 == '\0') && (local_38 != 0)) && (FUN_00d50b00(), local_30 != '\0')) &&
     (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x968))();
  (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x918))();
  FUN_00d6f370();
  lVar2 = g_027258d0;
  if (g_027258d0 != 0) {
    FUN_00d50b00();
  }
  iVar5 = FUN_00d708a0(param_1,1);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (iVar5 == 0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x918))();
  }
  FUN_00d6f370();
  lVar2 = g_02725a90;
  if (g_02725a90 != 0) {
    FUN_00d50b00();
  }
  iVar5 = FUN_00d708a0(param_1,1);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_027ef278;
  lVar2 = g_027ef270;
  plVar1 = *(int64_t **)(this_ptr + 0x78);
  if (iVar5 == 0) {
    if (g_027ef278 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar3;
    local_60 = '\x01';
    FUN_01e57260(param_1,&local_68);
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    (**(code **)(*plVar1 + 0x968))();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_027ef270 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar2;
    local_70 = '\x01';
    FUN_01e57260(param_1,&local_78);
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    (**(code **)(*plVar1 + 0x968))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}

