// Function: FUN_00a6f5c6
// Address: 00a6f5c6
// Size: 544 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00a6f5c6(string *param_1,string *param_2)

{
  uint64_t uVar1;
  int64_t arg1;
  int64_t this_ptr;
  uint32_t uVar2;
  
  FUN_00aa9d7a();
  *(void*)(this_ptr + 0x28) = *(void*)(arg1 + 0x28);
  *(void*)(this_ptr + 0x2c) = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 0x30) = *(void*)(arg1 + 0x30);
  *(void*)(this_ptr + 0x34) = *(void*)(arg1 + 0x34);
  std::string::operator=(param_1,param_2);
  *(void*)(this_ptr + 0x50) = *(void*)(arg1 + 0x50);
  uVar1 = *(void*)(arg1 + 0x5c);
  *(void*)(this_ptr + 0x54) = *(void*)(arg1 + 0x54);
  *(void*)(this_ptr + 0x5c) = uVar1;
  *(void*)(this_ptr + 100) = *(void*)(arg1 + 100);
  *(void*)(this_ptr + 0x68) = *(void*)(arg1 + 0x68);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  *(void*)(this_ptr + 0xa0) = *(void*)(arg1 + 0xa0);
  *(void*)(this_ptr + 0xa4) = *(void*)(arg1 + 0xa4);
  std::string::operator=(param_1,param_2);
  *(void*)(this_ptr + 0xc0) = *(void*)(arg1 + 0xc0);
  *(void*)(this_ptr + 0xc1) = *(void*)(arg1 + 0xc1);
  uVar2 = std::string::operator=(param_1,param_2);
  *(void*)(this_ptr + 0xe0) = *(void*)(arg1 + 0xe0);
  if (this_ptr != arg1) {
    uVar2 = FUN_009bc850(uVar2,*(void*)(arg1 + 0xf0));
    uVar2 = FUN_009bc850(uVar2,*(void*)(arg1 + 0x108));
    uVar2 = FUN_009bc850(uVar2,*(void*)(arg1 + 0x120));
    uVar2 = FUN_009bc850(uVar2,*(void*)(arg1 + 0x138));
    uVar2 = FUN_009bc850(uVar2,*(void*)(arg1 + 0x150));
    uVar2 = FUN_009bc850(uVar2,*(void*)(arg1 + 0x168));
    uVar2 = FUN_009bc850(uVar2,*(void*)(arg1 + 0x180));
    uVar2 = FUN_009bc850(uVar2,*(void*)(arg1 + 0x198));
    FUN_009bc850(uVar2,*(void*)(arg1 + 0x1b0));
  }
  *(void*)(this_ptr + 0x1d7) = *(void*)(arg1 + 0x1d7);
  *(void*)(this_ptr + 0x1d0) = *(void*)(arg1 + 0x1d0);
  uVar1 = *(void*)(arg1 + 0x1c0);
  *(void*)(this_ptr + 0x1c8) = *(void*)(arg1 + 0x1c8);
  *(void*)(this_ptr + 0x1c0) = uVar1;
  return;
}

