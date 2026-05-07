// Function: FUN_00dd16c0
// Address: 00dd16c0
// Size: 576 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00dd16c0(uint64_t param_1)

{
  bool bVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t *this_ptr;
  int64_t lVar4;
  int64_t local_38;
  char local_30;
  
  lVar2 = _SCDynamicStoreCopyComputerName();
  lVar4 = local_38;
  if (lVar2 == 0) {
LAB_00dd173d:
    FUN_00dd1440();
    if (local_38 == 0) {
LAB_00dd17b8:
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return;
    }
    bVar1 = true;
    if (local_30 == '\0') {
      FUN_00d50b00();
    }
    lVar4 = local_38;
    if (local_38 == 0) goto LAB_00dd17b8;
  }
  else {
    FUN_00e1c780();
    if (local_38 == 0) {
      lVar4 = 0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (local_30 == '\0') {
        FUN_00d50b00();
      }
    }
    _CFRelease();
    if (lVar4 == 0) goto LAB_00dd173d;
  }
  FUN_00d8dab0();
  if (local_38 == lVar4) {
    if (!bVar1) {
      if (local_30 != '\0') goto LAB_00dd1803;
      FUN_00d50b00();
    }
LAB_00dd17ea:
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
    lVar4 = local_38;
    if (bVar1) {
      FUN_00d50b20();
      goto LAB_00dd17ea;
    }
  }
  else {
    lVar4 = local_38;
    if (bVar1) {
      FUN_00d50b20();
    }
LAB_00dd1803:
    local_30 = '\0';
  }
  lVar2 = g_02774da0;
  if (g_02774da0 != 0) {
    FUN_00d50b00();
  }
  uVar3 = FUN_00d90650();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = lVar4;
  if ((int)(uVar3 >> 0x20) != 1) goto LAB_00dd18dd;
  FUN_00d97ce0(param_1,uVar3 & 0xffffffff);
  if (local_38 != lVar4) {
    lVar2 = local_38;
    if (local_30 != '\0') {
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      goto LAB_00dd18dd;
    }
    if (local_38 != 0) {
      FUN_00d50b00();
    }
    if (lVar4 == 0) goto LAB_00dd18dd;
    FUN_00d50b20();
    lVar4 = local_38;
  }
  lVar2 = lVar4;
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
LAB_00dd18dd:
  *this_ptr = lVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

