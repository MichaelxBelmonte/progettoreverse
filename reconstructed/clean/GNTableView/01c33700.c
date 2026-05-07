// Function: FUN_01c33700
// Address: 01c33700
// Size: 507 bytes
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


uint32_t FUN_01c33700(void)

{
  char cVar1;
  int iVar2;
  uint32_t uVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t *local_48;
  char local_40;
  int64_t *plVar5;
  
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  plVar5 = this_ptr;
  do {
    (**(code **)(*plVar5 + 0x370))();
    if (local_48 == plVar5) {
LAB_01c337ac:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar5 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        goto LAB_01c337ac;
      }
      FUN_00d50b20();
    }
    if (plVar5 == (int64_t *)0x0) {
      return 0;
    }
    if ((g_026e56b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
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
    plVar4 = &g_02802688;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (int64_t *)&stack0xffffffffffffffc8;
      if (cVar1 == '\0') {
        plVar4 = &g_02802688;
      }
    }
    if (*plVar4 != 0) {
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x4d8))();
      FUN_01dcea90();
      uVar3 = FUN_01dd3250();
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      return uVar3;
    }
  } while( true );
}

