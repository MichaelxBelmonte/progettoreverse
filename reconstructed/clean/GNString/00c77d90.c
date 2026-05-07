// Function: FUN_00c77d90
// Address: 00c77d90
// Size: 752 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00c77d90(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t arg1;
  int64_t *this_ptr;
  bool bVar5;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  lVar2 = local_38;
  FUN_00d747b0();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  lVar1 = g_02772188;
  if (*(int64_t *)(arg1 + 0x50) == 0) {
    if (g_02772188 != 0) {
      FUN_00d50b00();
    }
    local_38 = lVar1;
    local_30 = '\0';
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c798a0();
  if (local_38 == 0) {
    bVar5 = true;
  }
  else {
    FUN_00c798a0();
    iVar4 = FUN_00d8c7a0();
    bVar5 = iVar4 != 1;
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_02772190;
  if (bVar5) {
    if (g_02772190 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    cVar3 = FUN_00c7b220();
    if (cVar3 == '@') {
      FUN_00c798d0();
      if (local_38 == 0) {
        bVar5 = true;
      }
      else {
        FUN_00c798d0();
        iVar4 = FUN_00d8c7a0();
        bVar5 = iVar4 == 0;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = g_02772198;
      if (bVar5) {
        if (g_02772198 != 0) {
          FUN_00d50b00();
        }
        local_38 = lVar1;
        local_30 = '\0';
        FUN_00d21140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
    }
    cVar3 = FUN_00c7b220();
    if (cVar3 == 'e') {
      FUN_00c7b2a0();
      if (local_38 == 0) {
        bVar5 = true;
      }
      else {
        FUN_00c7b2a0();
        iVar4 = FUN_00d8c7a0();
        bVar5 = iVar4 == 0;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = g_027721a0;
      if (bVar5) {
        if (g_027721a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

