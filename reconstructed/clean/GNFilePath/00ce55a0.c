// Function: FUN_00ce55a0
// Address: 00ce55a0
// Size: 562 bytes
// Class: GNFilePath

bool FUN_00ce55a0(void)

{
  int64_t *plVar1;
  void*puVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint8_t local_90 [8];
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  uVar6 = FUN_00e1d020();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  cVar5 = (**(code **)(*this_ptr + 0x398))();
  if ((cVar5 == '\0') || (cVar5 = (**(code **)(*(int64_t *)*arg1 + 0x3a0))(), cVar5 == '\0'))
  {
    local_88 = *arg1;
    local_80 = '\0';
    uVar7 = FUN_00e1d020();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar1 = (int64_t *)*arg1;
    (**(code **)(*this_ptr + 0x388))();
    lVar4 = local_68;
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    (**(code **)(*plVar1 + 0x400))();
    lVar3 = local_78;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    uVar7 = FUN_00e1d020();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  puVar2 = PTR__objc_msgSend_024a9998;
  (*PTR__objc_msgSend_024a9998)();
  cVar5 = (*puVar2)(uVar6,uVar7,local_90);
  if (cVar5 == '\0') {
    (*puVar2)();
    (*puVar2)();
    _NSLog();
  }
  (*PTR__objc_release_024a99a0)();
  return cVar5 != '\0';
}

