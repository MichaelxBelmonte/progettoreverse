// Function: FUN_01500530
// Address: 01500530
// Size: 597 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01500530(void*param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void*puVar4;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar5;
  int64_t local_98;
  void*local_90 [2];
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  void*local_40;
  uint32_t local_34;
  
  if (((int64_t *)*arg1 == (int64_t *)0x0) ||
     (cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x398))(), cVar3 == '\0')) {
    lVar1 = g_027c24d8;
    if (g_027c24d8 != 0) {
      FUN_00d50b00();
    }
    lVar2 = g_027c24e0;
    local_60 = lVar1;
    local_58 = '\x01';
    if (g_027c24e0 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_027c24e8;
    local_50 = lVar2;
    local_48 = '\x01';
    if (g_027c24e8 != 0) {
      FUN_00d50b00();
    }
    local_98 = *arg1;
    uVar5 = FUN_00083ea0(2,&local_98);
    FUN_00e972c0(uVar5,local_90);
    local_90[0] = (void*)&g_0253d630;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    local_90[0] = &g_024c5048;
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  local_40 = param_1;
  local_34 = param_2;
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025c2098;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  FUN_00d500e0();
  lVar1 = *arg1;
  lVar2 = puVar4[3];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    puVar4[3] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (((char)local_34 == '\0') || (cVar3 = FUN_01500890(), cVar3 == '\0')) {
    cVar3 = FUN_01500dd0();
    if (cVar3 != '\0') {
      if (local_40 != (void*)0x0) {
        *local_40 = 0;
      }
      goto LAB_01500749;
    }
    if (((char)local_34 != '\0') || (cVar3 = FUN_01500890(), cVar3 == '\0')) {
      if (local_40 != (void*)0x0) {
        *local_40 = 0;
      }
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      FUN_00d50b20();
      return;
    }
  }
  if (local_40 != (void*)0x0) {
    *local_40 = 1;
  }
LAB_01500749:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

