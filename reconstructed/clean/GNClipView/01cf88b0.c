// Function: FUN_01cf88b0
// Address: 01cf88b0
// Size: 1654 bytes
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


uint64_t FUN_01cf88b0(uint64_t param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  uint uVar6;
  uint32_t uVar7;
  void*puVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  bool bVar10;
  int64_t local_60;
  char local_58;
  
  if ((g_028b78b8 == (void*)0x0) || (g_028b78c1 == '\0')) {
    FUN_00e8cb50();
    if (g_028b78b8 == (void*)0x0) {
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_02572358;
      (*g_02572370)();
      if (g_028b78b8 == puVar8) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar10 = g_028b78b8 != (void*)0x0;
        g_028b78b8 = puVar8;
        if (bVar10) {
          FUN_00d50b20();
        }
      }
      if (g_028b78c0 == '\0') {
        g_028b78c0 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = g_027ef080;
      if (g_027ef080 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027ef088;
      if (g_027ef088 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_026de648;
      if (g_026de648 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027f1690;
      if (g_027f1690 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_026de630;
      if (g_026de630 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027f1680;
      if (g_027f1680 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027ef090;
      if (g_027ef090 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027ef098;
      if (g_027ef098 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027ef0a0;
      if (g_027ef0a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027ef0a8;
      if (g_027ef0a8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = g_027ef0b0;
      if (g_027ef0b0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      g_028b78c1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b78c1 = '\x01';
      FUN_00e8cb70();
    }
  }
  if (*(int64_t *)(this_ptr + 0x138) != 0) {
    FUN_01cae990();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    cVar5 = FUN_00d23d70();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    plVar4 = g_027f1670;
    if (cVar5 != '\0') {
      uVar6 = (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x3b8))();
      return (uint64_t)uVar6;
    }
    if (g_027f1670 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_01cae990();
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    uVar7 = (**(code **)(*plVar4 + 0x50))();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if ((char)uVar7 != '\0') {
      uVar9 = CONCAT71((uint7)(uint3)((uint)uVar7 >> 8),1);
      if (param_2 == '\0') {
        return uVar9;
      }
      FUN_01caeb00();
      if (local_60 != 0) {
        FUN_00d50b00();
      }
      FUN_01cf7150();
      if (local_60 == 0) {
        return uVar9;
      }
      FUN_00d50b20();
      return uVar9;
    }
  }
  uVar6 = FUN_01e47f50();
  return (uint64_t)uVar6;
}

