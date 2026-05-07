// Function: FUN_00ce4e90
// Address: 00ce4e90
// Size: 1038 bytes
// Class: GNFilePath

uint8_t FUN_00ce4e90(void)

{
  int64_t *plVar1;
  void*puVar2;
  char cVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  uint8_t uVar6;
  int64_t local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d4efa0();
  plVar1 = local_40;
  FUN_00d4efa0();
  local_90 = local_50;
  local_88 = 0;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_88 = '\x01';
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    local_c0 = *arg1;
    local_b8 = '\0';
    uVar6 = FUN_00ce4220();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    _objc_alloc();
    (*PTR__objc_msgSend_024a9998)();
    local_c8 = 0;
    (**(code **)(*this_ptr + 0x368))();
    local_80 = local_40;
    local_78 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_78 = '\x01';
    uVar4 = FUN_00e1cfc0();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    cVar3 = (**(code **)(*this_ptr + 0x398))();
    if ((cVar3 == '\0') || (cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x3a0))(), cVar3 == '\0')
       ) {
      (**(code **)(*(int64_t *)*arg1 + 0x368))();
      local_a0 = local_40;
      local_98 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_98 = '\x01';
      uVar5 = FUN_00e1cfc0();
      if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar1 = (int64_t *)*arg1;
      (**(code **)(*this_ptr + 0x388))();
      local_60 = local_b0;
      local_58 = 0;
      if (local_a8 == '\0') {
        if (local_b0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a8 = '\0';
      }
      local_58 = '\x01';
      (**(code **)(*plVar1 + 0x400))();
      (**(code **)(*local_50 + 0x368))();
      local_70 = local_40;
      local_68 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = '\x01';
      uVar5 = FUN_00e1cfc0();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
    puVar2 = PTR__objc_msgSend_024a9998;
    (*PTR__objc_msgSend_024a9998)();
    cVar3 = (*puVar2)(uVar5,uVar4,&local_c8);
    if (local_c8 != 0) {
      (*PTR__objc_msgSend_024a9998)();
      _NSLog();
    }
    (*PTR__objc_release_024a99a0)();
    uVar6 = cVar3 != '\0';
  }
  return uVar6;
}

