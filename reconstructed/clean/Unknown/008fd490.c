// Function: FUN_008fd490
// Address: 008fd490
// Size: 509 bytes
// Class: Unknown

void FUN_008fd490(string *param_1,string *param_2)

{
  uint64_t uVar1;
  int64_t arg1;
  int64_t this_ptr;
  uint32_t uVar2;
  
  uVar1 = *(void*)(arg1 + 0x10);
  *(void*)(this_ptr + 8) = *(void*)(arg1 + 8);
  *(void*)(this_ptr + 0x10) = uVar1;
  std::string::operator=(param_1,param_2);
  *(void*)(this_ptr + 0x30) = *(void*)(arg1 + 0x30);
  uVar2 = FUN_008f0a5a();
  *(void*)(this_ptr + 0x148) = *(void*)(arg1 + 0x148);
  *(void*)(this_ptr + 0x14c) = *(void*)(arg1 + 0x14c);
  *(void*)(this_ptr + 0x150) = *(void*)(arg1 + 0x150);
  if (this_ptr != arg1) {
    FUN_008df080(uVar2,*(void*)(arg1 + 0x160));
    param_2 = *(string **)(arg1 + 0x178);
    FUN_0091e80c();
  }
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  *(void*)(this_ptr + 0x230) = *(void*)(arg1 + 0x230);
  std::string::operator=(param_1,param_2);
  *(void*)(this_ptr + 0x250) = *(void*)(arg1 + 0x250);
  *(void*)(this_ptr + 0x254) = *(void*)(arg1 + 0x254);
  *(void*)(this_ptr + 0x255) = *(void*)(arg1 + 0x255);
  *(void*)(this_ptr + 0x256) = *(void*)(arg1 + 0x256);
  *(void*)(this_ptr + 599) = *(void*)(arg1 + 599);
  FUN_008e8fb4();
  FUN_008e8fb4();
  *(void*)(this_ptr + 0x378) = *(void*)(arg1 + 0x378);
  *(void*)(this_ptr + 0x37c) = *(void*)(arg1 + 0x37c);
  *(void*)(this_ptr + 0x380) = *(void*)(arg1 + 0x380);
  *(void*)(this_ptr + 0x399) = *(void*)(arg1 + 0x399);
  *(void*)(this_ptr + 0x394) = *(void*)(arg1 + 0x394);
  uVar1 = *(void*)(arg1 + 900);
  *(void*)(this_ptr + 0x38c) = *(void*)(arg1 + 0x38c);
  *(void*)(this_ptr + 900) = uVar1;
  return;
}

