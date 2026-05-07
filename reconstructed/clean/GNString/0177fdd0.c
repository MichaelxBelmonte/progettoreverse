// Function: FUN_0177fdd0
// Address: 0177fdd0
// Size: 515 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0177fdd0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  char cVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t local_40;
  char local_38;
  
  FUN_0177f010();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = *(int64_t **)(local_40 + 0x10);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  lVar5 = g_027ce888;
  if (g_027ce888 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  cVar4 = '\x01';
  if (cVar3 == '\0') {
    plVar1 = *(int64_t **)(local_40 + 0x10);
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    lVar2 = g_027ce8a8;
    if (g_027ce8a8 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  lVar5 = g_028adbf0;
  if (cVar4 != '\0') {
    *this_ptr = local_40;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
  if ((g_028adbf0 == 0) || (g_028adbf9 == '\0')) {
    FUN_00e8cb50();
    if (g_028adbf0 == 0) {
      FUN_0177d950();
      if (g_028adbf0 != local_40) {
        lVar5 = g_028adbf0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            lVar5 = g_028adbf0;
          }
        }
        else {
          local_38 = '\0';
        }
        g_028adbf0 = local_40;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != 0) && (g_028adbf8 == '\0')) {
        g_028adbf8 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      g_028adbf9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028adbf9 = '\x01';
      FUN_00e8cb70();
    }
    lVar5 = g_028adbf0;
    *(void*)(this_ptr + 1) = 0;
    if (lVar5 == 0) {
      lVar5 = 0;
      goto LAB_0177ffad;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_0177ffad:
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}

