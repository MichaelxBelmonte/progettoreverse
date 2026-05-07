// Function: FUN_01de7760
// Address: 01de7760
// Size: 709 bytes
// Class: GNTableView
// String references:
//   "GNTableView"
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_01de7760(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t this_ptr;
  int64_t *local_60;
  char local_58;
  
  FUN_01ccad60();
  plVar1 = local_60;
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) goto LAB_01de7968;
  pplVar5 = &local_60;
  FUN_01ccad60();
  plVar1 = local_60;
  if ((g_026e56b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026fd498 = FUN_0006d940();
    g_026fd480 = "GNTableView";
    g_026fd488 = 0x2a0;
    g_026fd490 = FUN_00193920;
    g_026fd4a0 = 0;
    ram_00000000026fd4a8 = 0;
    g_026fd4b0 = 0;
    ram_00000000026fd4b8 = 0;
    g_026fd4c0 = 0;
    ram_00000000026fd4c8 = 0;
    g_026fd4d0 = 0;
    ram_00000000026fd4d8 = 0;
    g_026fd4e0 = 0;
    ram_00000000026fd4e8 = 0;
    g_026fd4f0 = 0;
    ram_00000000026fd4f8 = 0;
    g_026fd500 = 0;
    ram_00000000026fd508 = 0;
    g_026fd510 = 0;
    ram_00000000026fd518 = 0;
    g_026fd520 = 0;
    ram_00000000026fd528 = 0;
    g_026fd530 = 0;
    ram_00000000026fd538 = 0;
    g_026fd540 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01de77e1:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01de77e1;
  }
  plVar1 = *pplVar5;
  if (*(char *)(pplVar5 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  FUN_01ddf190();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027f2e58;
  if (g_027f2e58 != 0) {
    FUN_00d50b00();
  }
  FUN_01ddf130();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x7f8))();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)(this_ptr + 0x48) + 0x10))();
  FUN_00d50b00();
  FUN_01de09b0();
  if ((int64_t *)(this_ptr + 0x48) != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)(this_ptr + 0x48) + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)(this_ptr + 0x50) + 0x10))();
  FUN_00d50b00();
  FUN_01de09c0();
  if ((int64_t *)(this_ptr + 0x50) != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)(this_ptr + 0x50) + 0x10))();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01de7968:
  FUN_01cc9ce0();
  return;
}

