// Function: FUN_01c34010
// Address: 01c34010
// Size: 882 bytes
// Class: GNTableView
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


void FUN_01c34010(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar4;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_40;
  char local_38;
  
  FUN_00d654d0();
  FUN_00d4efa0();
  plVar1 = this_ptr + 0x3c;
  FUN_00c88450(plVar1);
  plVar2 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != arg1) {
    return;
  }
  if ((int64_t *)*plVar1 != (int64_t *)0x0) {
    pplVar4 = &local_40;
    (**(code **)(*(int64_t *)*plVar1 + 0x388))();
    plVar2 = local_40;
    FUN_01152ba0();
    if (plVar2 == (int64_t *)0x0) {
LAB_01c340de:
      pplVar4 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01c340de;
    }
    plVar2 = *pplVar4;
    if (*(char *)(pplVar4 + 1) == '\0') {
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar4 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_c0 = g_027eb298;
      if (g_027eb298 != 0) {
        FUN_00d50b00();
      }
      local_b8 = '\x01';
      local_a8 = '\0';
      local_b0 = plVar2;
      FUN_00d41430(&local_b0,&local_c0);
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      FUN_00d50b00();
      local_a0 = g_027eb2a0;
      if (g_027eb2a0 != 0) {
        FUN_00d50b00();
      }
      local_98 = '\x01';
      local_88 = '\0';
      local_90 = plVar2;
      FUN_00d41430(&local_90,&local_a0);
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if ((int64_t *)*plVar1 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar1 + 0x368))();
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*this_ptr + 0x968))();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01c34363;
    }
  }
  local_78 = '\0';
  local_80 = 0;
  (**(code **)(*this_ptr + 0x968))();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
LAB_01c34363:
  (**(code **)(*this_ptr + 0x620))();
  return;
}

