// Function: FUN_00930bc8
// Address: 00930bc8
// Size: 502 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00930bc8(uint64_t param_1,void*param_2)

{
  uint64_t uVar1;
  int64_t arg1;
  int64_t lVar2;
  int64_t this_ptr;
  uint8_t local_34 [4];
  
  param_2[1] = *param_2;
  if ((*(byte *)(arg1 + 8) & 1) == 0) {
    lVar2 = arg1 + 9;
    uVar1 = (uint64_t)(*(byte *)(arg1 + 8) >> 1);
  }
  else {
    uVar1 = *(uint64_t *)(arg1 + 0x10);
    lVar2 = *(int64_t *)(arg1 + 0x18);
  }
  FUN_0093838c(param_1,uVar1 + lVar2);
  FUN_00938486(*(void*)(arg1 + 0x28),*(void*)(arg1 + 0x20));
  FUN_00938486(*(void*)(arg1 + 0x40),*(void*)(arg1 + 0x38));
  FUN_009740dc();
  FUN_00a14dd0(&stack0xffffffffffffffd0,local_34);
  FUN_009740dc();
  FUN_00a14dd0(&stack0xffffffffffffffd0,local_34);
  FUN_009740dc();
  FUN_00a14dd0(&stack0xffffffffffffffd0,local_34);
  FUN_009740dc();
  FUN_00a14dd0(&stack0xffffffffffffffd0,local_34);
  FUN_009740dc();
  FUN_00a14dd0(&stack0xffffffffffffffd0,local_34);
  if ((*(byte *)(this_ptr + 8) & 1) == 0) {
    lVar2 = this_ptr + 9;
    uVar1 = (uint64_t)(*(byte *)(this_ptr + 8) >> 1);
  }
  else {
    uVar1 = *(uint64_t *)(this_ptr + 0x10);
    lVar2 = *(int64_t *)(this_ptr + 0x18);
  }
  FUN_00938664(uVar1 + lVar2);
  FUN_00938486(*(void*)(this_ptr + 0x28),*(void*)(this_ptr + 0x20));
  FUN_00938486(*(void*)(this_ptr + 0x40),*(void*)(this_ptr + 0x38));
  FUN_00938486(*(void*)(this_ptr + 0x58),*(void*)(this_ptr + 0x50));
  FUN_009740dc();
  FUN_00a14dd0(&stack0xffffffffffffffd0,local_34);
  FUN_009740dc();
  FUN_00a14dd0(&stack0xffffffffffffffd0,local_34);
  FUN_009740dc();
  FUN_00a14dd0(&stack0xffffffffffffffd0,local_34);
  return;
}

