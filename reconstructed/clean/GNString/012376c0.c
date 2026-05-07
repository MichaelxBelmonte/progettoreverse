// Function: FUN_012376c0
// Address: 012376c0
// Size: 703 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_012376c0(uint32_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t *this_ptr;
  double dVar5;
  uint64_t uVar6;
  int64_t local_40;
  char local_38;
  
  if (this_ptr[0x1f] != 0) {
    FUN_01237550();
    lVar1 = this_ptr[0x1f];
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != local_40) {
      FUN_01237550();
      iVar4 = FUN_00b32020();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((int)this_ptr[0x1e] != iVar4) {
        *(int *)(this_ptr + 0x1e) = iVar4;
        plVar2 = (int64_t *)this_ptr[0x1f];
        FUN_01237550();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        (**(code **)(*plVar2 + 0x4c0))();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    dVar5 = (double)(**(code **)(*this_ptr + 0x5b8))();
    if ((dVar5 != 0.0) || (NAN(dVar5))) {
      FUN_00b31a00();
      FUN_00bc4850(dVar5);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00b31a00();
    (**(code **)(*this_ptr + 0x5e0))();
    FUN_00bc4820();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar6 = (**(code **)(*this_ptr + 0x5f0))();
    FUN_00b31a00();
    *(void*)(local_40 + 0x58) = uVar6;
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if ((this_ptr[0x20] != 0) && (cVar3 = (**(code **)(*this_ptr + 0x5e8))(), cVar3 != '\0')) {
      uVar6 = FUN_013fba80();
      FUN_011ee3f0(uVar6,param_1);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*(int64_t *)this_ptr[0x1f] + 0x400))(param_1,param_2);
    if ((this_ptr[0x21] != 0) && (cVar3 = (**(code **)(*this_ptr + 0x5e8))(), cVar3 != '\0')) {
      uVar6 = FUN_013fba80();
      FUN_011ee3f0(uVar6,param_1);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

