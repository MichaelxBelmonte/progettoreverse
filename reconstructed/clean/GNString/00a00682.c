// Function: FUN_00a00682
// Address: 00a00682
// Size: 581 bytes
// Class: GNString
// String references:
//   "tm unable to handle "
//   "not-a-date-time value"
//   "-infinity date value"
//   "+infinity date value"
//   "a special date value"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00a00682(void)

{
  int iVar1;
  code *pcVar2;
  ushort uVar3;
  logic_error *this;
  uint uVar4;
  string *psVar5;
  int *arg1;
  void*this_ptr;
  
  iVar1 = *arg1;
  this = (logic_error *)((int64_t)&MACH_HEADER.magic + 2);
  psVar5 = (string *)(uint64_t)(iVar1 + 2U);
  if (2 < iVar1 + 2U) {
    this_ptr[6] = 0;
    this_ptr[5] = 0;
    this_ptr[4] = 0;
    this_ptr[3] = 0;
    this_ptr[2] = 0;
    this_ptr[1] = 0;
    *this_ptr = 0;
    uVar4 = (iVar1 * 4 + 0x1f4b0U | 3) / 0x23ab1;
    FUN_009a81f8(uVar4 * 100 + (((iVar1 + 0x7d2c) - (uVar4 * 0x23ab1 >> 2)) * 4 | 3) / 0x5b5);
    FUN_009a81f8();
    FUN_0097e070();
    FUN_00997550();
    *(void*)((int64_t)this_ptr + 0x14) = 0xfffffe0c;
    *(void*)(this_ptr + 2) = 0;
    *(void*)((int64_t)this_ptr + 0xc) = 1;
    uVar3 = FUN_00a008f4();
    *(uint *)(this_ptr + 3) = (uint)uVar3;
    uVar3 = FUN_00a00ae0();
    *(uint *)((int64_t)this_ptr + 0x1c) = uVar3 - 1;
    *(void*)(this_ptr + 4) = 0xffffffff;
    return;
  }
  FUN_009f4e38();
  iVar1 = *arg1;
  if (iVar1 == -2) {
    std::string::append((char *)this);
  }
  else if (iVar1 == -1) {
    std::string::append((char *)this);
  }
  else if (iVar1 == 0) {
    std::string::append((char *)this);
  }
  else {
    std::string::append((char *)this);
  }
  std::logic_error::logic_error(this,psVar5);
  FUN_009f6420();
                      pcVar2 = invalidInstructionException();
  (*pcVar2)();
}

