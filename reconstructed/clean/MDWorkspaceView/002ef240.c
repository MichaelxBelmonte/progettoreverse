// Function: FUN_002ef240
// Address: 002ef240
// Size: 1501 bytes
// Class: MDWorkspaceView
// String references:
//   "MDWorkspaceView"
// === MDWorkspaceView properties ===
//   bool            _isVertical
//   bool            _allowsChainedResize
//   GNCoord         _size
//   GNCoord         _paddingLineSize
//   GNBorderStyle   _borderStyle


void FUN_002ef240(void)

{
  int64_t *plVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int64_t lVar11;
  int64_t *this_ptr;
  int64_t **pplVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t local_b0;
  char local_a8;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  FUN_002eb090();
  plVar3 = local_58;
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_002eacb0();
  plVar4 = local_58;
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  uVar13 = (**(code **)(*this_ptr + 0x530))();
  FUN_01beb250();
  FUN_002eacb0();
  plVar5 = local_58;
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_002eb090();
  plVar6 = local_58;
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  bVar2 = true;
  if (*(int *)((int64_t)plVar4 + 0xc) == *(int *)((int64_t)plVar5 + 0xc)) {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_48 = plVar4;
    local_40 = -1;
    iStack_3c = 0;
    local_38 = 0;
    while( true ) {
      lVar11 = (int64_t)local_40;
      local_40 = local_40 + 1;
      bVar2 = local_40 < *(int *)((int64_t)local_48 + 0xc);
      if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
      local_58 = *(int64_t **)(local_48[2] + 8 + lVar11 * 8);
      cVar8 = FUN_00d23d70();
      if (cVar8 == '\0') break;
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
    }
    FUN_000be170();
  }
  FUN_00d403d0();
  lVar11 = g_026fe4b0;
  if (g_026fe4b0 != 0) {
    FUN_00d50b00();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d40470(&local_b0,&stack0xffffffffffffff60,1,3);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar14 = (**(code **)(*this_ptr + 0x530))();
  if ((((float)uVar13 == (float)uVar14) && (!NAN((float)uVar13) && !NAN((float)uVar14))) &&
     ((float)((uint64_t)uVar13 >> 0x20) == (float)((uint64_t)uVar14 >> 0x20))) goto LAB_002ef71e;
  if ((!bVar2) && (*(int *)((int64_t)plVar3 + 0xc) == *(int *)((int64_t)plVar6 + 0xc))) {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_48 = plVar3;
    iStack_3c = 0;
    local_38 = 0;
    local_40 = -1;
    bVar2 = false;
    do {
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
      local_40 = local_40 + 1;
      if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
      local_58 = *(int64_t **)(local_48[2] + (int64_t)local_40 * 8);
      iVar9 = FUN_00d237a0();
      iVar10 = (uint)(iVar9 == -1) << 2;
      bVar7 = iVar9 != -1;
      if (iVar9 == local_38 + local_40) {
        iVar10 = 5;
        bVar7 = bVar2;
      }
      bVar2 = bVar7;
    } while ((iVar10 == 0) || (iVar10 == 5));
    FUN_000be170();
    if (bVar2) goto LAB_002ef71e;
  }
  pplVar12 = &local_58;
  FUN_01e40eb0();
  plVar1 = local_58;
  if ((g_026fddd0 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
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
  if (plVar1 == (int64_t *)0x0) {
LAB_002ef692:
    pplVar12 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar8 = FUN_00e85ea0();
    if (cVar8 == '\0') goto LAB_002ef692;
  }
  plVar1 = *pplVar12;
  if (*(char *)(pplVar12 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar12 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x9c0))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_002ef71e:
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

