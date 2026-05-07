// Function: FUN_00016510
// Address: 00016510
// Size: 761 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00016510(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *this_ptr;
  int iVar3;
  int64_t local_78;
  char local_70;
  int64_t local_40;
  char local_38;
  
  *(void*)(this_ptr + 0x19) = 1;
  FUN_01e51420();
  FUN_000b6a40();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  (**(code **)(*this_ptr + 0x620))();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = *param_2;
  lVar2 = this_ptr[0x17];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    this_ptr[0x17] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_000b6a40();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  if (local_78 != 0) {
    if (0 < *(int *)(local_78 + 0xc)) {
      iVar3 = 0;
      do {
        FUN_000b6c10();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        local_38 = '\0';
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_78 + 0xc));
    }
    FUN_00018280();
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x678))();
  (**(code **)(*this_ptr + 0x668))();
  return;
}

