// Function: FUN_01de8070
// Address: 01de8070
// Size: 668 bytes
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


void FUN_01de8070(void)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  void*puVar7;
  int64_t this_ptr;
  int64_t lVar8;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  
  FUN_01ccad60();
  if (local_50 == 0) {
    lVar8 = 0;
    if (local_48 != '\0') {
      lVar8 = 0;
    }
  }
  else {
    lVar8 = local_50;
    if (local_48 == '\0') {
      FUN_00d50b00();
    }
  }
  lVar1 = g_02800140;
  if (lVar8 != 0) {
    if (g_02800140 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccaae0();
    if (local_50 == 0) {
      bVar4 = true;
      lVar8 = 0;
    }
    else {
      lVar8 = local_50;
      if (local_48 == '\0') {
        FUN_00d50b00();
        bVar4 = false;
      }
      else {
        local_48 = '\0';
        bVar4 = false;
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar8 == 0) {
      puVar7 = (void*)0x0;
      local_40 = 0;
      bVar2 = false;
    }
    else {
      FUN_01d25cb0();
      if (local_50 == 0) {
        local_40 = 0;
        bVar3 = false;
        bVar2 = false;
        puVar7 = (void*)0x0;
      }
      else {
        if (local_48 == '\0') {
          FUN_00d50b00();
        }
        puVar7 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &g_02572358;
        (*g_02572370)();
        for (lVar8 = 0; iVar6 = FUN_01dcea80(), lVar8 < iVar6; lVar8 = lVar8 + 1) {
          cVar5 = FUN_01dd3250();
          if (cVar5 != '\0') {
            lVar1 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + lVar8 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            FUN_00d21140();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
        }
        *(void*)(this_ptr + 0x59) = 1;
        FUN_01d2c5c0();
        *(void*)(this_ptr + 0x59) = 0;
        bVar3 = true;
        bVar2 = true;
        local_40 = local_50;
      }
      if (!bVar4) {
        FUN_00d50b20();
        bVar2 = bVar3;
      }
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((bVar2) && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (puVar7 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

