// Function: FUN_00655fa0
// Address: 00655fa0
// Size: 737 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"
// === MUMultiTrackView properties ===
//   MUFollowCursorState _followCursorState
//   MUMultiTrackDisplayMode _displayMode


void FUN_00655fa0(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t **pplVar4;
  int64_t *this_ptr;
  bool bVar5;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01d838d0();
  FUN_01e561b0();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  FUN_01d8b220();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_00656136;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (int64_t *)0x0) goto LAB_00656136;
  local_58 = plVar1;
  (**(code **)(*plVar1 + 0x3f8))();
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  (**(code **)(*this_ptr + 0x630))();
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pplVar4 = &local_40;
  FUN_01d8b200();
  plVar1 = local_40;
  FUN_000914a0();
  if (plVar1 == (int64_t *)0x0) {
LAB_006560fc:
    pplVar4 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_006560fc;
  }
  bVar5 = true;
  if (*pplVar4 == (int64_t *)0x0) {
    pplVar4 = &local_68;
    FUN_01d8b200();
    plVar1 = local_68;
    if ((g_026fe4d0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
    if (plVar1 == (int64_t *)0x0) {
LAB_0065618f:
      pplVar4 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_0065618f;
    }
    bVar5 = *pplVar4 != (int64_t *)0x0;
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar5) {
    FUN_0063a4a0();
  }
  FUN_00d50b20();
LAB_00656136:
  FUN_00d50b20();
  return;
}

