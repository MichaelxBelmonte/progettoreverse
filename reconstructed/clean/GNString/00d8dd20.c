// Function: FUN_00d8dd20
// Address: 00d8dd20
// Size: 582 bytes
// Class: GNString
// String references:
//   "Cannot modify an immutable string %@"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00d8dd20(uint param_1,int param_2)

{
  int64_t lVar1;
  int iVar2;
  uint32_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  byte bVar6;
  int64_t arg1;
  int64_t this_ptr;
  uint uVar7;
  
  if ((*(byte *)(this_ptr + 0x24) & 1) == 0) {
    FUN_00d50b00();
    FUN_00e828a0();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  else if ((param_2 != 0) && (arg1 != 0)) {
    if ((*(int *)(this_ptr + 0x20) == -1) && ((param_1 & 0xfffffffb) == 0)) {
      if (*(int64_t *)(this_ptr + 0x10) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_00e7dde0();
      }
      param_2 = iVar2 + param_2;
      lVar4 = this_ptr + 0x28;
      lVar1 = *(int64_t *)(this_ptr + 0x10);
      if (param_2 < 0x18) {
        if (lVar1 != lVar4) {
          if (lVar1 != 0) {
            FUN_00e7dbc0(param_2,(int64_t)iVar2);
            FUN_00e83070();
            *(void*)(this_ptr + 0x10) = 0;
          }
          *(int64_t *)(this_ptr + 0x10) = lVar4;
        }
      }
      else if (lVar1 == lVar4) {
        uVar5 = FUN_00e83010();
        *(void*)(this_ptr + 0x10) = uVar5;
        FUN_00e7dbc0();
      }
      else {
        uVar5 = FUN_00e83060();
        *(void*)(this_ptr + 0x10) = uVar5;
      }
      FUN_00e7dbc0();
      *(void*)(*(int64_t *)(this_ptr + 0x10) + (int64_t)param_2) = 0;
    }
    else {
      uVar7 = 6;
      if (param_1 != 0xffffffff) {
        uVar7 = param_1;
      }
      bVar6 = 2 - (uVar7 == 6 || (param_1 & 0xfffffffb) == 0);
      lVar4 = FUN_00e83010(bVar6,param_2 << (bVar6 & 0x1f));
      uVar3 = FUN_00da3950(param_2,uVar7);
      if (*(int *)(this_ptr + 0x20) != -1) {
        FUN_00d8ea20();
        FUN_00e83070();
        return;
      }
      if ((*(int64_t *)(this_ptr + 0x10) == 0) ||
         (*(int64_t *)(this_ptr + 0x10) == this_ptr + 0x28)) {
        *(void*)(this_ptr + 0x10) = 0;
      }
      else {
        FUN_00e83070();
        *(void*)(this_ptr + 0x10) = 0;
        if (*(int *)(this_ptr + 0x20) != -1) {
          FUN_00e83070();
          *(void*)(this_ptr + 0x18) = 0;
          *(void*)(this_ptr + 0x20) = 0xffffffff;
        }
      }
      if (lVar4 != 0) {
        *(int64_t *)(this_ptr + 0x18) = lVar4;
        *(void*)(this_ptr + 0x20) = uVar3;
      }
    }
  }
  return;
}

