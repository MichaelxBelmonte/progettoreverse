// Function: FUN_01e5f4b0
// Address: 01e5f4b0
// Size: 600 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e5f4b0(void)

{
  void*puVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *arg1;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if ((int64_t *)*arg1 == (int64_t *)0x0) {
    _objc_alloc();
    puVar1 = PTR__objc_msgSend_024a9998;
    (*PTR__objc_msgSend_024a9998)();
    (*puVar1)();
    (*PTR__objc_release_024a99a0)();
    lVar2 = g_027f3318;
    if (g_027f3318 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_02800600;
    if (g_02800600 != 0) {
      FUN_00d50b00();
    }
    local_58 = lVar3;
    local_50 = '\x01';
    local_48 = 0;
    local_40 = '\0';
    FUN_00d31230(&local_48,&local_58);
    lVar3 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01e5a050();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_01e594e0();
  }
  else {
    (**(code **)(*(int64_t *)*arg1 + 0x388))();
    lVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01e5a050();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    _objc_alloc();
    (*PTR__objc_msgSend_024a9998)();
    FUN_00e1d020();
    (*PTR__objc_msgSend_024a9998)();
    (*PTR__objc_release_024a99a0)();
  }
  return;
}

