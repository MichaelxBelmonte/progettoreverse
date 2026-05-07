// Function: FUN_002915a0
// Address: 002915a0
// Size: 863 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_002915a0(void)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  void*this_ptr;
  bool bVar4;
  int64_t local_30;
  char local_28;
  
  puVar3 = g_02805d88;
  if ((g_02805d88 == (void*)0x0) || (g_02805d91 == '\0')) {
    FUN_00e8cb50();
    if (g_02805d88 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
      if (g_02805d88 == puVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = g_02805d88 != (void*)0x0;
        g_02805d88 = puVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (g_02805d90 == '\0') {
        g_02805d90 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00b7ace0();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d214d0();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00b7e000();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d23f50();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_0074b2e0();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_01552cd0();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d21140();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      FUN_00b6ff00();
      if (local_28 == '\0') {
        if (local_30 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_28 = '\0';
      }
      FUN_00d23480();
      if (local_30 != 0) {
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      g_02805d91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_02805d91 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = g_02805d88;
    *(void*)(this_ptr + 1) = 0;
    if (puVar3 == (void*)0x0) {
      puVar3 = (void*)0x0;
      goto LAB_002918e5;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_002918e5:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

