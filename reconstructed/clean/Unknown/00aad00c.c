// Function: FUN_00aad00c
// Address: 00aad00c
// Size: 519 bytes
// Class: Unknown

void FUN_00aad00c(uint64_t param_1,string *param_2)

{
  uint64_t uVar1;
  string *this;
  void*arg1;
  void*this_ptr;
  
  this = (string *)(segment_command_00000020.segname + 8);
  *this_ptr = &g_0252a958;
  this_ptr[1] = &g_0252a720;
  *(void*)(this_ptr + 2) = 0xffffffff;
  this_ptr[3] = 0xffffffffffffffff;
  *(void*)(this_ptr + 4) = 0x101;
  ___bzero();
  *(void*)((int64_t)this_ptr + 0x141) = 0x100010100010001;
  *(void*)((int64_t)this_ptr + 0x149) = 1;
  *(void*)((int64_t)this_ptr + 0x14a) = 0;
  *(void*)((int64_t)this_ptr + 0x14e) = 0;
  FUN_00aa9d7a();
  *(void*)(this_ptr + 5) = *(void*)(arg1 + 5);
  *(void*)((int64_t)this_ptr + 0x2c) = *(void*)((int64_t)arg1 + 0x2c);
  *(void*)(this_ptr + 6) = *(void*)(arg1 + 6);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  if (this_ptr != arg1) {
    FUN_009bc850();
    FUN_009bc850();
    FUN_009bc850();
  }
  uVar1 = arg1[0x28];
  *(void*)((int64_t)this_ptr + 0x147) = *(void*)((int64_t)arg1 + 0x147);
  this_ptr[0x28] = uVar1;
  return;
}

