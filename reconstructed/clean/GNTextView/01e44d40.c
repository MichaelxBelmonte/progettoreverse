// Function: FUN_01e44d40
// Address: 01e44d40
// Size: 1330 bytes
// Class: GNTextView
// === GNTextView properties ===
//                   _firstResponder
//                   _defaultFirstResponder
//                   _isDisplaying
//                   _ignoreSystemKeyEvents
//                   _bgCache
//                   _toolbarActions
//                   _handeledToolbarActions
//                   _sheetController
//                   _sheetControllerLoadedSize
//                   _sheetControllerLoadedAutoresizingMask


void FUN_01e44d40(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  int64_t *this_ptr;
  bool bVar7;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_78;
  char local_70;
  int local_60;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  cVar6 = (**(code **)(*this_ptr + 0x750))();
  if ((cVar6 != '\0') && (cVar6 = FUN_01e45650(), cVar6 == '\0')) {
    FUN_00d46dc0(g_02390124);
    lVar3 = g_027f3cb0;
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
      lVar3 = g_027f3cb0;
    }
    g_027f3cb0 = lVar3;
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    local_e8 = lVar3;
    (**(code **)(*this_ptr + 0x408))(&local_e8);
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      FUN_01f97770();
      FUN_01f97ed0();
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d50b00();
        local_60 = -1;
        do {
          local_60 = local_60 + 1;
          if (*(int *)(local_40 + 0xc) <= local_60) goto LAB_01e45140;
          FUN_01f97ea0();
          FUN_01f97ea0();
          lVar3 = local_d8;
          if (local_d0 == '\0') {
            if (local_d8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_d0 = '\0';
          }
          cVar6 = (**(code **)(*local_50 + 0x50))();
          if (cVar6 == '\0') {
            bVar7 = false;
          }
          else {
            FUN_01f97e70();
            FUN_01f97e70();
            bVar7 = local_100 != local_110;
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if ((local_f8 != '\0') && (local_100 != 0)) {
              FUN_00d50b20();
            }
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        } while (!bVar7);
        FUN_01f983b0();
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        FUN_01f995d0();
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01e45140:
        FUN_01f99ba0();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  plVar5 = (int64_t *)this_ptr[6];
  plVar1 = this_ptr;
  while (plVar4 = plVar5, plVar4 != (int64_t *)0x0) {
    plVar5 = (int64_t *)plVar4[6];
    plVar1 = plVar4;
    if ((int64_t *)plVar4[6] == plVar4) {
      plVar5 = plVar4;
    }
  }
  cVar6 = (**(code **)(*plVar1 + 0x4b8))();
  if (cVar6 == '\0') {
    bVar2 = true;
    bVar7 = true;
    plVar1 = (int64_t *)this_ptr[6];
  }
  else {
    FUN_00d50b00();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_01d8fb90();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    bVar2 = false;
    bVar7 = false;
    plVar1 = (int64_t *)this_ptr[6];
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x758))();
    bVar7 = bVar2;
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (!bVar7) {
    FUN_00d50b20();
  }
  return;
}

