// Function: FUN_00bfbb00
// Address: 00bfbb00
// Size: 547 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00bfbb00(uint64_t param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  void*puVar4;
  void*this_ptr;
  bool bVar5;
  
  puVar4 = g_028a5aa0;
  if ((param_2 != 0xd) && (param_2 != 0)) {
    FUN_00b34370();
    return;
  }
  if ((g_028a5aa0 == (void*)0x0) || (g_028a5aa9 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5aa0 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02572358;
      (*g_02572370)();
      if (g_028a5aa0 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028a5aa0 != (void*)0x0;
        g_028a5aa0 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028a5aa8 == '\0') {
        g_028a5aa8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_0276bea8;
      if (g_0276bea8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276beb0;
      if (g_0276beb0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_0276beb8;
      if (g_0276beb8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028a5aa9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5aa9 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = g_028a5aa0;
    *(void*)(this_ptr + 1) = 0;
    if (puVar4 == (void*)0x0) {
      puVar4 = (void*)0x0;
      goto LAB_00bfbd05;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00bfbd05:
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

