// Function: FUN_00ce3d80
// Address: 00ce3d80
// Size: 638 bytes
// Class: GNFilePath

uint8_t FUN_00ce3d80(void)

{
  void*puVar1;
  int64_t *plVar2;
  char cVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  void*arg1;
  int64_t *this_ptr;
  uint8_t uVar6;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x398))();
  if ((cVar3 == '\0') || (cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x408))(), cVar3 != '\0'))
  {
    FUN_00d4efa0();
    plVar2 = local_38;
    FUN_00d4efa0();
    local_58 = local_68;
    local_50 = 0;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_50 = '\x01';
    cVar3 = (**(code **)(*plVar2 + 0x50))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      uVar6 = FUN_00ce4180();
    }
    else {
      _objc_alloc();
      (*PTR__objc_msgSend_024a9998)();
      local_68 = 0;
      (**(code **)(*this_ptr + 0x368))();
      local_48 = local_38;
      local_40 = 0;
      if (local_30 == '\0') {
        if (local_38 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_40 = '\x01';
      uVar4 = FUN_00e1cfc0();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x368))();
      plVar2 = local_38;
      if (local_30 == '\0') {
        if (local_38 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      uVar5 = FUN_00e1cfc0();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      puVar1 = PTR__objc_msgSend_024a9998;
      (*PTR__objc_msgSend_024a9998)();
      cVar3 = (*puVar1)(uVar5,uVar4,&local_68);
      if (local_68 != 0) {
        (*PTR__objc_msgSend_024a9998)();
        _NSLog();
      }
      (*PTR__objc_release_024a99a0)();
      uVar6 = cVar3 != '\0';
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

