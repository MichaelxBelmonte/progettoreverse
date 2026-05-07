// Function: FUN_00a65fa8
// Address: 00a65fa8
// Size: 528 bytes
// Class: Unknown

void FUN_00a65fa8(string *param_1,string *param_2)

{
  void*arg1;
  void*this_ptr;
  
  *this_ptr = &g_02528a98;
  this_ptr[1] = &g_0252a720;
  *(void*)(this_ptr + 2) = 0xffffffff;
  this_ptr[3] = 0xffffffffffffffff;
  *(void*)(this_ptr + 4) = 0x101;
  ___bzero();
  this_ptr[0x21] = 0;
  this_ptr[0x20] = 0;
  this_ptr[0x1f] = 0;
  this_ptr[0x1e] = 0;
  this_ptr[0x1d] = 0;
  this_ptr[0x1c] = 0;
  this_ptr[0x1b] = 0;
  this_ptr[0x1a] = 0;
  this_ptr[0x19] = 0;
  this_ptr[0x22] = 0x100000100010100;
  *(void*)(this_ptr + 0x23) = 0;
  FUN_00aa9d7a();
  *(void*)(this_ptr + 5) = *(void*)(arg1 + 5);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  std::string::operator=(param_1,param_2);
  if (this_ptr != arg1) {
    param_2 = (string *)arg1[0x13];
    FUN_008df080();
  }
  std::string::operator=(param_1,param_2);
  *(void*)(this_ptr + 0x18) = *(void*)(arg1 + 0x18);
  std::string::operator=(param_1,param_2);
  if (this_ptr != arg1) {
    FUN_009bc850();
    FUN_009bc850();
  }
  *(void*)(this_ptr + 0x23) = *(void*)(arg1 + 0x23);
  this_ptr[0x22] = arg1[0x22];
  return;
}

