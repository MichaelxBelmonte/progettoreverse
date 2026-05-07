// Function: FUN_017281b0
// Address: 017281b0
// Size: 936 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_017281b0(void)

{
  int64_t lVar1;
  void*puVar2;
  void*this_ptr;
  bool bVar3;
  int64_t local_40;
  char local_38;
  
  puVar2 = g_028adac8;
  if ((g_028adac8 == (void*)0x0) || (g_028adad1 == '\0')) {
    FUN_00e8cb50();
    if (g_028adac8 == (void*)0x0) {
      puVar2 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &g_02572358;
      (*g_02572370)();
      bVar3 = g_028adac8 == (void*)0x0;
      g_028adac8 = puVar2;
      if (((bVar3) || (FUN_00d50b20(), g_028adac8 != (void*)0x0)) && (g_028adad0 == '\0')
         ) {
        g_028adad0 = '\x01';
        FUN_00e8cb90();
      }
      FUN_00d933c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d933c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d933c0();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d21140();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = g_02781678;
      if (g_02781678 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027cc8f0;
      if (g_027cc8f0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027cc940;
      if (g_027cc940 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_027df528;
      if (g_027df528 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      g_028adad1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028adad1 = '\x01';
      FUN_00e8cb70();
    }
    puVar2 = g_028adac8;
    *(void*)(this_ptr + 1) = 0;
    if (puVar2 == (void*)0x0) {
      puVar2 = (void*)0x0;
      goto LAB_0172853e;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_0172853e:
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

