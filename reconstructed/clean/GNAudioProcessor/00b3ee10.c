// Function: FUN_00b3ee10
// Address: 00b3ee10
// Size: 734 bytes
// Class: GNAudioProcessor
// String references:
//   "%@:"

void FUN_00b3ee10(uint64_t param_1)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *this_ptr;
  int64_t *plVar4;
  int64_t local_c0;
  char local_b8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  uint32_t local_68;
  int64_t local_60;
  char local_58;
  
  lVar3 = g_0275e938;
  if (g_0275e938 != 0) {
    FUN_00d50b00();
  }
  local_a0 = 0;
  local_98 = '\0';
  (**(code **)(*this_ptr + 0x508))(param_1,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0xf] + 0x5d0))();
  plVar4 = local_70;
  if (local_70 == (int64_t *)0x0) {
    bVar2 = true;
    plVar4 = (int64_t *)0x0;
    plVar1 = (int64_t *)this_ptr[0x10];
  }
  else {
    if ((char)local_68 == '\0') {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    bVar2 = false;
    plVar1 = (int64_t *)this_ptr[0x10];
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x478))(param_1,(int)this_ptr[0xe]);
    local_68 = 1;
    local_70 = &g_024c5048;
    local_58 = 0;
    if (local_c0 != 0) {
      FUN_00d50b00();
    }
    local_60 = local_c0;
    local_58 = '\x01';
    FUN_00d8cb40(param_1,&local_70);
    lVar3 = local_80;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    (**(code **)(*plVar1 + 0x968))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    local_70 = &g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar1 = (int64_t *)this_ptr[0x11];
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0xa20))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    lVar3 = g_0275e940;
    plVar1 = (int64_t *)this_ptr[0x11];
    if (g_0275e940 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar3;
    local_88 = '\x01';
    (**(code **)(*plVar1 + 0xa10))();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d6f8d0();
    (**(code **)(*(int64_t *)this_ptr[0x11] + 0x998))();
  }
  if (!bVar2 && plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

