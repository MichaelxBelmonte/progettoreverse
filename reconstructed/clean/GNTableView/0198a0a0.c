// Function: FUN_0198a0a0
// Address: 0198a0a0
// Size: 588 bytes
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


void FUN_0198a0a0(double param_1)

{
  int64_t *plVar1;
  int64_t *this_ptr;
  float fVar2;
  int64_t local_30;
  char local_28;
  
  fVar2 = *(float *)((int64_t)this_ptr + 0x14c);
  if ((char)this_ptr[0x29] == '\0') {
    if (0.0 < fVar2) {
      fVar2 = fVar2 + (float)(param_1 / g_0241b6b8);
      *(float *)((int64_t)this_ptr + 0x14c) = fVar2;
      if (fVar2 < 0.0) {
        *(void*)((int64_t)this_ptr + 0x14c) = 0;
        FUN_01f27fe0();
        (**(code **)(this_ptr[0x27] + 0x10))();
        FUN_00d50b00();
        FUN_01f474f0();
        if (this_ptr + 0x27 != (int64_t *)0x0) {
          (**(code **)(this_ptr[0x27] + 0x10))();
          FUN_00d50b20();
        }
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
        *(void*)((int64_t)this_ptr + 0x149) = 0;
      }
      (**(code **)(*this_ptr + 0x620))();
      plVar1 = (int64_t *)this_ptr[6];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
        (**(code **)(&UNK_000014a0 + *plVar1))(*(void*)((int64_t)this_ptr + 0x14c));
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else if (fVar2 < g_02390124) {
    fVar2 = fVar2 + (float)(param_1 / g_023b3490);
    *(float *)((int64_t)this_ptr + 0x14c) = fVar2;
    if (g_02390124 < fVar2) {
      *(void*)((int64_t)this_ptr + 0x14c) = 0x3f800000;
      FUN_01f27fe0();
      (**(code **)(this_ptr[0x27] + 0x10))();
      FUN_00d50b00();
      FUN_01f474f0();
      if (this_ptr + 0x27 != (int64_t *)0x0) {
        (**(code **)(this_ptr[0x27] + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      *(void*)((int64_t)this_ptr + 0x149) = 0;
    }
    (**(code **)(*this_ptr + 0x620))();
    plVar1 = (int64_t *)this_ptr[6];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
      (**(code **)(&UNK_000014a0 + *plVar1))(*(void*)((int64_t)this_ptr + 0x14c));
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

