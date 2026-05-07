// Function: FUN_01728850
// Address: 01728850
// Size: 1231 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01728850(void)

{
  void*puVar1;
  void*this_ptr;
  bool bVar2;
  int64_t local_30;
  char local_28;
  
  puVar1 = g_028adad8;
  if ((g_028adad8 == (void*)0x0) || (g_028adae1 == '\0')) {
    FUN_00e8cb50();
    if (g_028adad8 == (void*)0x0) {
      puVar1 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar1 = &g_02572358;
      (*g_02572370)();
      bVar2 = g_028adad8 == (void*)0x0;
      g_028adad8 = puVar1;
      if (((bVar2) || (FUN_00d50b20(), g_028adad8 != (void*)0x0)) && (g_028adae0 == '\0')
         ) {
        g_028adae0 = '\x01';
        FUN_00e8cb90();
      }
      FUN_00d933c0();
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
      FUN_00d933c0();
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
      FUN_00d933c0();
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
      FUN_00d933c0();
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
      FUN_00d933c0();
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
      FUN_00d933c0();
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
      FUN_00d933c0();
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
      FUN_00d933c0();
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
      g_028adae1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028adae1 = '\x01';
      FUN_00e8cb70();
    }
    puVar1 = g_028adad8;
    *(void*)(this_ptr + 1) = 0;
    if (puVar1 == (void*)0x0) {
      puVar1 = (void*)0x0;
      goto LAB_01728d05;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_01728d05:
  *this_ptr = puVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}

