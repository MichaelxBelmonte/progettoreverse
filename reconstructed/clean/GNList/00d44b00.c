// Function: FUN_00d44b00
// Address: 00d44b00
// Size: 988 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d44b00(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  void*arg1;
  int64_t this_ptr;
  uint32_t uVar4;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar5;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint64_t local_38;
  
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x378))();
  local_48 = g_027c6f78;
  lVar2 = g_027652d0;
  plVar1 = (int64_t *)*arg1;
  if (cVar3 == '\0') {
    uVar5 = extraout_XMM0_Qa;
    if (g_027c6f78 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_40 = '\x01';
    (**(code **)(*plVar1 + 0x5a0))(uVar5,2);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
    switch(*(void*)(this_ptr + 0xc)) {
    case 0x49:
      (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
      break;
    case 0x62:
      (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
      break;
    case 100:
      (**(code **)(*(int64_t *)*arg1 + 0x3c8))(*(void*)(this_ptr + 0x10));
      break;
    case 0x66:
      (**(code **)(*(int64_t *)*arg1 + 0x3c0))(*(void*)(this_ptr + 0x10));
      break;
    case 0x69:
      (**(code **)(*(int64_t *)*arg1 + 0x3d8))();
      break;
    case 0x6c:
      (**(code **)(*(int64_t *)*arg1 + 0x3d0))();
    }
  }
  else {
    uVar5 = extraout_XMM0_Qa;
    if (g_027652d0 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_b8 = lVar2;
    local_b0 = '\x01';
    uVar5 = (**(code **)(*plVar1 + 0x490))(uVar5,&local_b8);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      uVar5 = FUN_00d50b20();
    }
    lVar2 = g_027e7c20;
    switch(*(void*)(this_ptr + 0xc)) {
    case 0x49:
      plVar1 = (int64_t *)*arg1;
      if (g_027e7c20 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_68 = lVar2;
      local_60 = '\x01';
      (**(code **)(*plVar1 + 0x498))(uVar5,&local_68);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 0x62:
      plVar1 = (int64_t *)*arg1;
      if (g_027e7c20 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_58 = lVar2;
      local_50 = '\x01';
      (**(code **)(*plVar1 + 0x488))(uVar5,&local_58);
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 100:
      plVar1 = (int64_t *)*arg1;
      uVar5 = *(void*)(this_ptr + 0x10);
      if (g_027e7c20 != 0) {
        local_38 = *(void*)(this_ptr + 0x10);
        FUN_00d50b00();
        uVar5 = local_38;
      }
      local_98 = lVar2;
      local_90 = '\x01';
      (**(code **)(*plVar1 + 0x4b8))(uVar5);
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 0x66:
      plVar1 = (int64_t *)*arg1;
      uVar4 = *(void*)(this_ptr + 0x10);
      if (g_027e7c20 != 0) {
        local_38 = CONCAT44(local_38._4_4_,*(void*)(this_ptr + 0x10));
        FUN_00d50b00();
        uVar4 = (uint32_t)local_38;
      }
      local_a8 = lVar2;
      local_a0 = '\x01';
      (**(code **)(*plVar1 + 0x4b0))(uVar4);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 0x69:
      plVar1 = (int64_t *)*arg1;
      if (g_027e7c20 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_78 = lVar2;
      local_70 = '\x01';
      (**(code **)(*plVar1 + 0x4a0))(uVar5,&local_78);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      break;
    case 0x6c:
      plVar1 = (int64_t *)*arg1;
      if (g_027e7c20 != 0) {
        uVar5 = FUN_00d50b00();
      }
      local_88 = lVar2;
      local_80 = '\x01';
      (**(code **)(*plVar1 + 0x4a8))(uVar5,&local_88);
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

