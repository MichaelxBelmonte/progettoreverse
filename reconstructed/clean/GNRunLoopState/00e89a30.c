// Function: FUN_00e89a30
// Address: 00e89a30
// Size: 524 bytes
// Class: GNRunLoopState

uint64_t FUN_00e89a30(uint64_t param_1,uint32_t param_2,void*param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  void*arg1;
  int64_t this_ptr;
  uint64_t local_a8;
  int64_t local_a0;
  void*local_98;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint32_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  iVar3 = FUN_00e89860();
  local_50 = g_02789460;
  if (iVar3 == -1) {
    if (g_02789460 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_02789468;
    local_48 = '\x01';
    if (g_02789468 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_02789470;
    local_40 = lVar1;
    local_38 = '\x01';
    if (g_02789470 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_027d2068;
    if (g_027d2068 != 0) {
      FUN_00d50b00();
    }
    local_a8 = *arg1;
    local_a0 = lVar1;
    FUN_002bd7b0(&local_a0,&local_a8,4);
    local_98 = (void*)&g_02670890;
    local_58 = param_2;
    FUN_00e972c0();
    local_98 = (void*)&g_025df260;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    local_98 = (void*)&g_0253d630;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    local_98 = &g_024c5048;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    uVar4 = 0xffffffffffffffff;
    if (param_3 != (void*)0x0) {
      *param_3 = 0;
    }
  }
  else {
    if (param_3 != (void*)0x0) {
      *param_3 = *(void*)
                  (*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10) + (int64_t)iVar3 * 8);
    }
    uVar4 = *(void*)
             (*(int64_t *)(*(int64_t *)(this_ptr + 0x30) + 0x10) + (int64_t)iVar3 * 8);
    FUN_00dac5e0();
  }
  return uVar4;
}

