// Function: FUN_00272a20
// Address: 00272a20
// Size: 551 bytes
// Class: MDQuantizeController
// String references:
//   "MDQuantizeController"
// === MDQuantizeController properties ===
//                   _displayElements
//                   _hasChanges
//                   _editorView
//                   _loLevelingPowerSlider
//                   _hiLevelingPowerSlider
//                   _loLevelingPowerLabel
//                   _hiLevelingPowerLabel
//                   _loLevelingPower
//                   _hiLevelingPower
//                   _okButton
//                   _editRatiosOfElements
//                   _ampFactorsOfOriginalElements


void FUN_00272a20(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_b8;
  int64_t local_a8;
  void*local_30;
  
  if ((g_0271e090 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026f84d8 = FUN_00015ff0();
    g_026f84c0 = "MDQuantizeController";
    g_026f84c8 = 0x88;
    g_026f84d0 = FUN_00273000;
    g_026f84e0 = 0;
    ram_00000000026f84e8 = 0;
    g_026f84f0 = 0;
    g_026f8568 = 0;
    ram_00000000026f8570 = 0;
    g_026f8578 = 0;
    g_026f857a = 1;
    g_026f84f8 = 0;
    ram_00000000026f8500 = 0;
    g_026f8508 = 0;
    ram_00000000026f8510 = 0;
    g_026f8518 = 0;
    ram_00000000026f8520 = 0;
    g_026f8528 = 0;
    ram_00000000026f8530 = 0;
    g_026f8538 = 0;
    ram_00000000026f8540 = 0;
    g_026f8548 = 0;
    ram_00000000026f8550 = 0;
    g_026f8558 = 0;
    ram_00000000026f8560 = 0;
    g_026f8583 = 0;
    g_026f857b = 0;
    ___cxa_guard_release();
  }
  if (g_026f857b == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    local_30 = (void*)0x0;
    if (1 < g_02802630) {
      local_30 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_30 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_002730b0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00364340();
    FUN_00e87920(uVar2,0);
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    if (local_b8 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    if (local_30 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
  }
  return;
}

