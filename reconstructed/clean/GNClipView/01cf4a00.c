// Function: FUN_01cf4a00
// Address: 01cf4a00
// Size: 849 bytes
// Class: GNClipView
// === GNClipView properties ===
//   GNClipViewBorderType _rightBorderType
//   GNClipViewBorderType _bottomBorderType
//   GNClipViewBorderType _leftBorderType
//   GNClipViewBorderType _topBorderType
//                   _knobProportion
//                   _increaseButtonPressed
//                   _decreaseButtonPressed
//                   _column


void FUN_01cf4a00(void)

{
  int iVar1;
  int64_t lVar2;
  void*puVar3;
  uint unaff_ESI;
  int64_t *this_ptr;
  bool bVar4;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if ((g_028b78a8 == (void*)0x0) || (g_028b78b1 == '\0')) {
    FUN_00e8cb50();
    if (g_028b78a8 == (void*)0x0) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
      bVar4 = g_028b78a8 == (void*)0x0;
      g_028b78a8 = puVar3;
      if (((bVar4) || (FUN_00d50b20(), lVar2 = g_027ef060, g_028b78a8 != (void*)0x0)) &&
         (lVar2 = g_027ef060, g_028b78b0 == '\0')) {
        g_028b78b0 = '\x01';
        FUN_00e8cb90();
        lVar2 = g_027ef060;
      }
      g_027ef060 = lVar2;
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_30 = '\0';
      local_38 = lVar2;
      FUN_00d21140();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_027ef068;
      if (g_027ef068 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar2;
      local_30 = '\0';
      FUN_00d21140();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_027ef070;
      if (g_027ef070 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar2;
      local_30 = '\0';
      FUN_00d21140();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = g_027ef078;
      if (g_027ef078 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar2;
      local_30 = '\0';
      FUN_00d21140();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      g_028b78b1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b78b1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if (3 < unaff_ESI) {
    return;
  }
  switch((uint64_t)unaff_ESI) {
  case 0:
    iVar1 = *(int *)((int64_t)this_ptr + 0x154);
    break;
  case 1:
    iVar1 = *(int *)((int64_t)this_ptr + 0x15c);
    break;
  case 2:
    iVar1 = (int)this_ptr[0x2b];
    goto joined_r0x01cf4c69;
  case 3:
    iVar1 = (int)this_ptr[0x2c];
joined_r0x01cf4c69:
    if (iVar1 != 2) {
      return;
    }
    goto LAB_01cf4c6f;
  }
  if (iVar1 == 2) {
LAB_01cf4c6f:
    FUN_01cf4890();
    FUN_00d46dc0();
    local_48 = local_38;
    local_40 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_40 = '\x01';
    lVar2 = *(int64_t *)(g_028b78a8[2] + (uint64_t)unaff_ESI * 8);
    local_50 = 0;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    local_58 = lVar2;
    (**(code **)(*this_ptr + 0x408))(&local_58,&local_48);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

