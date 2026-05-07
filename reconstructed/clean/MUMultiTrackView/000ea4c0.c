// Function: FUN_000ea4c0
// Address: 000ea4c0
// Size: 992 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


void FUN_000ea4c0(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  int64_t **pplVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  int64_t *plVar9;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  uint64_t local_48;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0xb8) == 0) {
    return;
  }
  FUN_01e561b0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_000ea524;
    }
LAB_000ea57a:
    bVar2 = true;
    local_48 = 0;
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_000ea57a;
LAB_000ea524:
    FUN_01d8b220();
    plVar9 = local_40;
    local_50 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        local_50 = (int64_t *)0x0;
        plVar9 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
    }
    uVar10 = FUN_000914a0();
    if (plVar9 == (int64_t *)0x0) {
LAB_000ea567:
      if (g_02802688 != (int64_t *)0x0) goto LAB_000ea609;
LAB_000ea5bd:
      if ((g_026fe4d0 == '\0') &&
         (iVar6 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_01, iVar6 != 0)) {
        g_02726438 = FUN_0006d940();
        g_02726420 = "MUMultiTrackView";
        g_02726428 = 0x228;
        g_02726430 = FUN_00082de0;
        g_02726440 = 0;
        ram_0000000002726448 = 0;
        g_02726450 = 0;
        g_027264c8 = 0;
        ram_00000000027264d0 = 0;
        g_027264d8 = 0;
        g_027264da = 1;
        g_02726458 = 0;
        ram_0000000002726460 = 0;
        g_02726468 = 0;
        ram_0000000002726470 = 0;
        g_02726478 = 0;
        ram_0000000002726480 = 0;
        g_02726488 = 0;
        ram_0000000002726490 = 0;
        g_02726498 = 0;
        ram_00000000027264a0 = 0;
        g_027264a8 = 0;
        ram_00000000027264b0 = 0;
        g_027264b8 = 0;
        ram_00000000027264c0 = 0;
        g_027264e3 = 0;
        g_027264db = 0;
        uVar10 = ___cxa_guard_release();
      }
      plVar4 = g_02802688;
      if (plVar9 != (int64_t *)0x0) {
        (**(code **)(*plVar9 + 0x360))();
        cVar5 = FUN_00e85ea0();
        uVar10 = extraout_XMM0_Da_00;
        plVar4 = g_02802688;
        if (cVar5 != '\0') {
          plVar4 = local_50;
        }
      }
      plVar9 = local_50;
      local_50 = plVar9;
      if (plVar4 != (int64_t *)0x0) goto LAB_000ea609;
      if (plVar9 != (int64_t *)0x0) {
        plVar9 = (int64_t *)0x0;
        uVar8 = 0;
        goto LAB_000ea6f1;
      }
      local_48 = 0;
    }
    else {
      (**(code **)(*plVar9 + 0x360))();
      cVar5 = FUN_00e85ea0();
      uVar10 = extraout_XMM0_Da;
      if (cVar5 == '\0') goto LAB_000ea567;
      if (local_50 == (int64_t *)0x0) goto LAB_000ea5bd;
LAB_000ea609:
      lVar1 = g_026defa8;
      if (g_026defa8 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_80 = lVar1;
      local_78 = '\x01';
      pplVar7 = &local_40;
      (**(code **)(*plVar9 + 0x88))(uVar10,&local_80);
      plVar9 = local_40;
      FUN_00083c20();
      if (plVar9 == (int64_t *)0x0) {
LAB_000ea669:
        pplVar7 = &g_02802688;
      }
      else {
        (**(code **)(*plVar9 + 0x360))();
        cVar5 = FUN_00e85ea0();
        if (cVar5 == '\0') goto LAB_000ea669;
      }
      plVar9 = *pplVar7;
      if (plVar9 == (int64_t *)0x0) {
        uVar8 = 0;
        plVar9 = (int64_t *)0x0;
      }
      else {
        if (*(char *)(pplVar7 + 1) == '\0') {
          FUN_00d50b00();
        }
        else {
          *(void*)(pplVar7 + 1) = 0;
        }
        uVar8 = CONCAT71((int7)((uint64_t)pplVar7 >> 8),1);
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
LAB_000ea6f1:
      FUN_00d50b20();
      local_48 = uVar8;
      if (plVar9 != (int64_t *)0x0) {
        local_68 = 0;
        lVar1 = *(int64_t *)(this_ptr + 0xd0);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_68 = '\x01';
        local_70 = lVar1;
        FUN_01e058f0();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        bVar3 = false;
        bVar2 = false;
        goto LAB_000ea7aa;
      }
    }
    bVar2 = false;
  }
  local_58 = 0;
  lVar1 = *(int64_t *)(this_ptr + 200);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  local_60 = lVar1;
  FUN_01e058f0();
  bVar3 = true;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
LAB_000ea7aa:
  if (!bVar2) {
    FUN_00d50b20();
  }
  if ((char)local_48 != '\0' && !bVar3) {
    FUN_00d50b20();
  }
  return;
}

