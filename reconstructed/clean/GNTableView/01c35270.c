// Function: FUN_01c35270
// Address: 01c35270
// Size: 819 bytes
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


void FUN_01c35270(uint64_t param_1,uint64_t param_2)

{
  double dVar1;
  char cVar2;
  void*puVar3;
  void*arg1;
  int64_t *this_ptr;
  float fVar4;
  uint32_t uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int64_t *local_40;
  char local_38;
  
  fVar6 = (float)param_2;
  fVar4 = (float)param_1;
  (**(code **)(*this_ptr + 0x640))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*this_ptr + 0xaf0))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*this_ptr + 0xb18))();
    fVar8 = (float)((uint64_t)param_2 >> 0x20) * _UNK_023945d4;
    fVar7 = fVar6 * g_023945d0 + fVar4;
    if (cVar2 == '\0') {
      FUN_00d05530(fVar4,fVar6,g_02390d00);
      (**(code **)(*local_40 + 0x3f0))(5,1,0,1);
      (**(code **)(*local_40 + 0x490))(1,1,0);
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar5 = FUN_00d05570(fVar7,g_023b1608);
      FUN_01cb3a30(uVar5,g_02390d2c);
    }
    else {
      FUN_01c35c30();
    }
    cVar2 = (**(code **)(*this_ptr + 0xb18))();
    if (cVar2 != '\0') {
      dVar1 = (double)(**(code **)(*this_ptr + 0xb20))();
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02680400;
      *(void*)((int64_t)puVar3 + 0xc) = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(void*)((int64_t)puVar3 + 0x39) = 0;
      *(void*)((int64_t)puVar3 + 0x41) = 0;
      (*g_02680418)();
      FUN_01d39310(fVar7,fVar8 + (float)((uint64_t)param_1 >> 0x20),g_02390d30,
                   (float)dVar1 * g_0241e850 + g_0241e854);
      (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
      FUN_00d50b20();
    }
  }
  else {
    uVar5 = (**(code **)(*this_ptr + 0xaf8))();
    FUN_01c35730(uVar5,fVar4,fVar6);
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

