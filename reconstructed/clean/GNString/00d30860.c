// Function: FUN_00d30860
// Address: 00d30860
// Size: 1023 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00d30860(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *this_ptr;
  int64_t *local_c0;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  lVar2 = g_0277d5a8;
  lVar4 = *this_ptr;
  if (lVar4 != 0) goto LAB_00d30959;
  if (g_0277d5a8 != 0) {
    FUN_00d50b00();
  }
  FUN_00d306a0();
  lVar3 = local_58;
  lVar4 = *this_ptr;
  if (lVar4 == local_58) {
    if (((char)this_ptr[1] == '\0') && (local_58 != 0)) {
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_00d3093f;
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = this_ptr[1];
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *this_ptr = lVar3;
      if (((char)lVar1 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      *this_ptr = local_58;
      if (((char)lVar1 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_00d3093f:
    local_c0 = this_ptr + 1;
    *(void*)local_c0 = 1;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar4 = *this_ptr;
LAB_00d30959:
  lVar2 = g_028a76e8;
  if (g_028a76e8 != lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    g_028a76e8 = lVar4;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar4 != 0) && (g_028a76f0 == '\0')) {
    g_028a76f0 = '\x01';
    FUN_00e8cb90();
  }
  FUN_00d6f370();
  lVar4 = *(int64_t *)(*this_ptr + 0x10);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_0277d618;
  if (g_0277d618 != 0) {
    FUN_00d50b00();
  }
  FUN_00d6f570();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  FUN_00d71400();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e41bf0();
  lVar4 = local_58;
  if (local_50 == '\0') {
    if (local_58 == 0) {
      return;
    }
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) {
    return;
  }
  local_50 = '\0';
  local_58 = 0;
  local_48 = lVar4;
  local_40 = -1;
  iStack_3c = 0;
  local_38 = 0;
  while( true ) {
    if (iStack_3c != 0) {
      if (iStack_3c < 1) {
        iStack_3c = -iStack_3c;
      }
      else {
        local_40 = local_40 - iStack_3c;
        FUN_00d23690();
        local_38 = local_38 + iStack_3c;
        iStack_3c = 0;
      }
    }
    lVar4 = (int64_t)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(local_48 + 0xc) <= local_40) break;
    local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar4 * 8);
    FUN_00e41520();
  }
  FUN_00d361f0();
  FUN_00d403d0();
  lVar4 = g_026fce70;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_78 = *this_ptr;
  local_70 = '\0';
  local_68 = 0;
  local_60 = '\0';
  FUN_00d40470(&local_68,&local_78,1,3);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

