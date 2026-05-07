// Function: FUN_00aa31be
// Address: 00aa31be
// Size: 554 bytes
// Class: GNFilePath

void FUN_00aa31be(string *param_1,string *param_2)

{
  uint64_t uVar1;
  int64_t arg1;
  int64_t this_ptr;
  
  FUN_00aa9d7a();
  *(void*)(this_ptr + 0x28) = *(void*)(arg1 + 0x28);
  *(void*)(this_ptr + 0x2c) = *(void*)(arg1 + 0x2c);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  *(void*)(this_ptr + 0x60) = *(void*)(arg1 + 0x60);
  std::string::operator=(param_1,param_2);
  *(void*)(this_ptr + 0x80) = *(void*)(arg1 + 0x80);
  *(void*)(this_ptr + 0x84) = *(void*)(arg1 + 0x84);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  *(void*)(this_ptr + 0xb8) = *(void*)(arg1 + 0xb8);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  *(void*)(this_ptr + 0xf0) = *(void*)(arg1 + 0xf0);
  std::string::operator=(param_1,param_2);
  *(void*)(this_ptr + 0x110) = *(void*)(arg1 + 0x110);
  *(void*)(this_ptr + 0x111) = *(void*)(arg1 + 0x111);
  if (this_ptr != arg1) {
    param_2 = *(string **)(arg1 + 0x120);
    FUN_008df080();
  }
  *(void*)(this_ptr + 0x130) = *(void*)(arg1 + 0x130);
  *(void*)(this_ptr + 0x131) = *(void*)(arg1 + 0x131);
  *(void*)(this_ptr + 0x134) = *(void*)(arg1 + 0x134);
  *(void*)(this_ptr + 0x138) = *(void*)(arg1 + 0x138);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  *(void*)(this_ptr + 0x170) = *(void*)(arg1 + 0x170);
  *(void*)(this_ptr + 0x174) = *(void*)(arg1 + 0x174);
  if (this_ptr != arg1) {
    FUN_009bc850();
    FUN_009bc850();
    FUN_009bc850();
  }
  *(void*)(this_ptr + 0x1d6) = *(void*)(arg1 + 0x1d6);
  *(void*)(this_ptr + 0x1d0) = *(void*)(arg1 + 0x1d0);
  uVar1 = *(void*)(arg1 + 0x1c0);
  *(void*)(this_ptr + 0x1c8) = *(void*)(arg1 + 0x1c8);
  *(void*)(this_ptr + 0x1c0) = uVar1;
  return;
}

