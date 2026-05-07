// Function: FUN_01c35730
// Address: 01c35730
// Size: 974 bytes
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


void FUN_01c35730(uint64_t param_1,float param_2,float param_3)

{
  bool bVar1;
  int64_t lVar2;
  void*this_ptr;
  float fVar3;
  float fVar4;
  int64_t *local_68;
  char local_60;
  int64_t local_30;
  char local_28;
  
  if ((g_028b6550 == 0) || (g_028b6559 == '\0')) {
    FUN_00e8cb50();
    if (g_028b6550 == 0) {
      FUN_01cfcdc0(0,0,0,g_02390124);
      lVar2 = g_028b6550;
      if (g_028b6550 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar2 = local_30;
        }
        bVar1 = g_028b6550 != 0;
        g_028b6550 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_30;
        }
      }
      if ((lVar2 != 0) && (g_028b6558 == '\0')) {
        g_028b6558 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_30;
      }
      if ((local_28 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cfcdc0(g_0239011c,g_0239011c,g_0239011c,g_0239011c);
      lVar2 = g_028b6540;
      if (g_028b6540 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar2 = local_30;
        }
        bVar1 = g_028b6540 != 0;
        g_028b6540 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_30;
        }
      }
      if ((lVar2 != 0) && (g_028b6548 == '\0')) {
        g_028b6548 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_30;
      }
      if ((local_28 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cb4790();
      (**(code **)(*local_68 + 0x4c0))();
      lVar2 = g_028b6560;
      if (g_028b6560 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar2 = local_30;
        }
        bVar1 = g_028b6560 != 0;
        g_028b6560 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_30;
        }
      }
      if ((lVar2 != 0) && (g_028b6568 == '\0')) {
        g_028b6568 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_30;
      }
      if ((local_28 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      g_028b6559 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b6559 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar2 = g_028b6560;
  if (g_028b6560 != 0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  fVar4 = (g_023b1608 + param_3) * g_0239011c + g_02390d00;
  fVar3 = g_023945d0 * param_3 + param_2;
  (**(code **)(*(int64_t *)*this_ptr + 0x3c0))(fVar3,g_02390118 + fVar4);
  lVar2 = g_028b6550;
  if (g_028b6550 != 0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01d48b40(g_02390124);
  (**(code **)(*(int64_t *)*this_ptr + 0x3c8))(fVar3,fVar4);
  FUN_01c35c30(param_2,param_3);
  return;
}

