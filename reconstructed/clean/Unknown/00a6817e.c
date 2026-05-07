// Function: FUN_00a6817e
// Address: 00a6817e
// Size: 607 bytes
// Class: Unknown

void FUN_00a6817e(uint64_t param_1,string *param_2)

{
  uint64_t uVar1;
  string *this;
  void*arg1;
  void*this_ptr;
  
  *this_ptr = &g_02528bc8;
  this_ptr[1] = &g_0252a720;
  *(void*)(this_ptr + 2) = 0xffffffff;
  this_ptr[3] = 0xffffffffffffffff;
  *(void*)(this_ptr + 4) = 0x101;
  this = (string *)(this_ptr + 6);
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  ___bzero();
  this_ptr[0x28] = 0;
  this_ptr[0x27] = 0;
  this_ptr[0x26] = 0;
  this_ptr[0x25] = 0;
  this_ptr[0x24] = 0;
  this_ptr[0x23] = 0;
  this_ptr[0x22] = 0;
  this_ptr[0x21] = 0;
  this_ptr[0x20] = 0;
  *(void*)(this_ptr + 0x29) = 0x100;
  *(void*)((int64_t)this_ptr + 0x14a) = 0;
  *(void*)((int64_t)this_ptr + 0x14e) = 0;
  *(void*)((int64_t)this_ptr + 0x14f) = 1;
  *(void*)((int64_t)this_ptr + 0x151) = 1;
  *(void*)((int64_t)this_ptr + 0x152) = 0;
  *(void*)((int64_t)this_ptr + 0x156) = 0;
  FUN_00aa9d7a();
  *(void*)(this_ptr + 5) = *(void*)(arg1 + 5);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 9) = *(void*)(arg1 + 9);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x1f) = *(void*)(arg1 + 0x1f);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  if (this_ptr != arg1) {
    FUN_009bc850();
  }
  uVar1 = arg1[0x29];
  *(void*)((int64_t)this_ptr + 0x14f) = *(void*)((int64_t)arg1 + 0x14f);
  this_ptr[0x29] = uVar1;
  return;
}

