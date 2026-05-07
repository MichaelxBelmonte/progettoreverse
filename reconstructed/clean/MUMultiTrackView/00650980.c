// Function: FUN_00650980
// Address: 00650980
// Size: 2430 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


void FUN_00650980(void)

{
  bool bVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  bool bVar6;
  int64_t local_120;
  char local_118;
  int64_t local_90;
  char local_88;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int local_48;
  
  plVar2 = local_60;
  FUN_00637870();
  if ((local_58 == '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  cVar3 = FUN_00637950();
  if ((cVar3 != '\0') &&
     ((cVar3 = FUN_0063f180(), cVar3 != '\0' || (cVar3 = FUN_006443a0(), cVar3 != '\0')))) {
    FUN_006c5ea0();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e28a0();
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  cVar3 = FUN_0063f180();
  if (((cVar3 != '\0') && (cVar3 = FUN_006443a0(), cVar3 != '\0')) && (this_ptr[0x2c] != 0)) {
    FUN_006c5ea0();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e3800();
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01bd0b60();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e3b90();
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x18] != 0) {
    FUN_0009edf0();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e2b20();
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_000a05d0();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e22f0();
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x19] != 0) {
    FUN_0009edf0();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e2e20();
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_000a05d0();
    if (local_58 == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_006e2520();
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00643590();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00650e4e;
    }
  }
  else if (local_60 != (int64_t *)0x0) {
LAB_00650e4e:
    local_58 = '\0';
    local_60 = (int64_t *)0x0;
    local_48 = -1;
    while( true ) {
      lVar5 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((int64_t)plVar2 + 0xc) <= local_48) break;
      local_60 = *(int64_t **)(plVar2[2] + 8 + lVar5 * 8);
      cVar3 = FUN_00212c70();
      if (cVar3 == '\0') {
        FUN_0025c360();
        FUN_0021e4e0();
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if (local_90 != 0) {
          FUN_0021e4e0();
          FUN_01c446f0();
        }
        FUN_006e30e0();
        if (((local_90 != 0) && (local_118 != '\0')) && (local_120 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_0065ca40();
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x5d8))();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00650fd8;
    }
LAB_00651025:
    bVar1 = true;
  }
  else {
    if (local_60 == (int64_t *)0x0) goto LAB_00651025;
LAB_00650fd8:
    cVar3 = FUN_00651a90();
    if (cVar3 == '\0') {
      FUN_006fc300();
      if (local_58 == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_006e3aa0();
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_006e3aa0();
    }
    bVar1 = false;
  }
  FUN_01e561b0();
  if (local_60 == (int64_t *)0x0) {
    bVar6 = false;
  }
  else {
    FUN_01e561b0();
    FUN_01d8b220();
    bVar6 = local_90 != 0;
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar6) goto LAB_0065120d;
  FUN_01e561b0();
  FUN_01d8b220();
  local_70 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (int64_t *)0x0) {
      local_70 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((g_026fe4d0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
    ___cxa_guard_release();
  }
  if (local_70 == (int64_t *)0x0) {
LAB_0065119e:
    if (g_02802688 != 0) goto LAB_006511ab;
LAB_006511f2:
    FUN_006e3fc0();
  }
  else {
    (**(code **)(*local_70 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_0065119e;
    if (local_70 == (int64_t *)0x0) goto LAB_006511f2;
LAB_006511ab:
    FUN_006e3fc0();
  }
  if (local_70 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0065120d:
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

