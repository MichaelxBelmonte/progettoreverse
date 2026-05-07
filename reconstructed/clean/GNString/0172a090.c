// Function: FUN_0172a090
// Address: 0172a090
// Size: 501 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0172a090(void)

{
  void*puVar1;
  void*this_ptr;
  bool bVar2;
  int64_t local_38;
  char local_30;
  
  puVar1 = g_028adb28;
  if ((g_028adb28 == (void*)0x0) || (g_028adb31 == '\0')) {
    FUN_00e8cb50();
    if (g_028adb28 == (void*)0x0) {
      puVar1 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar1 = &g_02572358;
      (*g_02572370)();
      bVar2 = g_028adb28 == (void*)0x0;
      g_028adb28 = puVar1;
      if (((bVar2) || (FUN_00d50b20(), g_028adb28 != (void*)0x0)) && (g_028adb30 == '\0')
         ) {
        g_028adb30 = '\x01';
        FUN_00e8cb90();
      }
      FUN_00d933c0();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_00d21140();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d933c0();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_00d21140();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      g_028adb31 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028adb31 = '\x01';
      FUN_00e8cb70();
    }
    puVar1 = g_028adb28;
    *(void*)(this_ptr + 1) = 0;
    if (puVar1 == (void*)0x0) {
      puVar1 = (void*)0x0;
      goto LAB_0172a267;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_0172a267:
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

