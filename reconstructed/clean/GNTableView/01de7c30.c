// Function: FUN_01de7c30
// Address: 01de7c30
// Size: 523 bytes
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


void FUN_01de7c30(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t **pplVar4;
  int64_t *local_38;
  char local_30;
  
  FUN_01cc9cf0();
  FUN_01ccad60();
  plVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  pplVar4 = &local_38;
  FUN_01ccad60();
  plVar1 = local_38;
  if ((g_026e56b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01de7cbf;
  }
  pplVar4 = (int64_t **)&g_02802688;
LAB_01de7cbf:
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01ddf190();
  FUN_01ddf130();
  (**(code **)(*plVar1 + 0x7f8))();
  FUN_00d50b20();
  return;
}

