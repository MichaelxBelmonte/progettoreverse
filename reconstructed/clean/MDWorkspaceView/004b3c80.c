// Function: FUN_004b3c80
// Address: 004b3c80
// Size: 927 bytes
// Class: MDWorkspaceView
// String references:
//   "MDWorkspaceView"
// === MDWorkspaceView properties ===
//   bool            _isVertical
//   bool            _allowsChainedResize
//   GNCoord         _size
//   GNCoord         _paddingLineSize
//   GNBorderStyle   _borderStyle


void FUN_004b3c80(void)

{
  void*puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t this_ptr;
  int64_t *plVar8;
  int64_t local_30;
  char local_28;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *puVar6 = &g_024f1490;
  puVar6[2] = &g_024f1e80;
  *(void*)(puVar6 + 0x27) = 0;
  *(void*)((int64_t)puVar6 + 0x13b) = 0;
  puVar6[0x28] = 0;
  puVar6[0x29] = 0;
  puVar6[0x2a] = 0;
  puVar6[0x2b] = 0;
  puVar6[0x2c] = 0;
  puVar6[0x2d] = 0;
  puVar6[0x2e] = 0;
  puVar6[0x2f] = 0;
  puVar6[0x30] = 0;
  (*g_024f14a8)();
  plVar8 = (int64_t *)(this_ptr + 0x10);
  puVar1 = *(void**)(this_ptr + 0x10);
  if (puVar1 == puVar6) {
    FUN_00d50b20();
  }
  else {
    *plVar8 = (int64_t)puVar6;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x18) != 0) {
    *(void*)(this_ptr + 0x18) = 0;
    FUN_00d50b20();
  }
  FUN_01e4cf40(g_023b47c0);
  (**(code **)(*(int64_t *)*plVar8 + 0x4d0))(0,g_023b47d0);
  plVar2 = (int64_t *)*plVar8;
  if ((g_026fddd0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026d9988 = FUN_0006d940();
    g_026d9970 = "MDWorkspaceView";
    g_026d9978 = 0x188;
    g_026d9980 = FUN_000a3150;
    g_026d9990 = 0;
    ram_00000000026d9998 = 0;
    g_026d99a0 = 0;
    g_026d9a18 = 0;
    ram_00000000026d9a20 = 0;
    g_026d9a28 = 0;
    g_026d9a2a = 1;
    g_026d99a8 = 0;
    ram_00000000026d99b0 = 0;
    g_026d99b8 = 0;
    ram_00000000026d99c0 = 0;
    g_026d99c8 = 0;
    ram_00000000026d99d0 = 0;
    g_026d99d8 = 0;
    ram_00000000026d99e0 = 0;
    g_026d99e8 = 0;
    ram_00000000026d99f0 = 0;
    g_026d99f8 = 0;
    ram_00000000026d9a00 = 0;
    g_026d9a08 = 0;
    ram_00000000026d9a10 = 0;
    g_026d9a33 = 0;
    g_026d9a2b = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_004b3d96:
    plVar8 = &g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_004b3d96;
  }
  (**(code **)(*(int64_t *)*plVar8 + 0x990))();
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x558))();
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x948))();
  FUN_0033c9c0();
  lVar3 = *(int64_t *)(this_ptr + 0x70);
  lVar7 = lVar3;
  if (lVar3 != local_30) {
    lVar7 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar7 = 0;
        goto LAB_004b3df4;
      }
      FUN_00d50b00();
      lVar3 = *(int64_t *)(this_ptr + 0x70);
      *(int64_t *)(this_ptr + 0x70) = local_30;
    }
    else {
      local_28 = '\0';
LAB_004b3df4:
      *(int64_t *)(this_ptr + 0x70) = lVar7;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
      lVar7 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  FUN_0033c9c0();
  lVar3 = *(int64_t *)(this_ptr + 0x78);
  lVar7 = lVar3;
  if (lVar3 != local_30) {
    lVar7 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar7 = 0;
        goto LAB_004b3e6b;
      }
      FUN_00d50b00();
      lVar3 = *(int64_t *)(this_ptr + 0x78);
      *(int64_t *)(this_ptr + 0x78) = local_30;
    }
    else {
      local_28 = '\0';
LAB_004b3e6b:
      *(int64_t *)(this_ptr + 0x78) = lVar7;
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
      lVar7 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  FUN_0033c9c0();
  lVar3 = *(int64_t *)(this_ptr + 0x80);
  lVar7 = lVar3;
  if (lVar3 == local_30) goto LAB_004b3f2c;
  lVar7 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar7 = 0;
      goto LAB_004b3ee5;
    }
    FUN_00d50b00();
    lVar3 = *(int64_t *)(this_ptr + 0x80);
    *(int64_t *)(this_ptr + 0x80) = local_30;
  }
  else {
    local_28 = '\0';
LAB_004b3ee5:
    *(int64_t *)(this_ptr + 0x80) = lVar7;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
    lVar7 = local_30;
  }
LAB_004b3f2c:
  if ((local_28 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}

