// Function: FUN_00ab4f34
// Address: 00ab4f34
// Size: 727 bytes
// Class: OsSignatureMac

void FUN_00ab4f34(uint64_t param_1,string *param_2)

{
  uint64_t uVar1;
  string *this;
  void*arg1;
  void*this_ptr;
  
  *this_ptr = &g_0252ad80;
  this_ptr[1] = &g_0252a720;
  *(void*)(this_ptr + 2) = 0xffffffff;
  this_ptr[3] = 0xffffffffffffffff;
  *(void*)(this_ptr + 4) = 0x101;
  this = (string *)(this_ptr + 6);
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[10] = 0;
  this_ptr[0xb] = 0;
  this_ptr[0xc] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  this_ptr[0x10] = 0;
  this_ptr[0x12] = 0;
  this_ptr[0x13] = 0;
  this_ptr[0x14] = 0;
  this_ptr[0x15] = 0;
  this_ptr[0x16] = 0;
  this_ptr[0x17] = 0;
  ___bzero();
  *(void*)((int64_t)this_ptr + 0x171) = 0x101;
  *(void*)((int64_t)this_ptr + 0x173) = 0x100000100000000;
  *(void*)((int64_t)this_ptr + 0x17b) = 0;
  *(void*)((int64_t)this_ptr + 0x183) = 0;
  FUN_00aa9d7a();
  *(void*)(this_ptr + 5) = *(void*)(arg1 + 5);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 9) = *(void*)(arg1 + 9);
  *(void*)((int64_t)this_ptr + 0x4c) = *(void*)((int64_t)arg1 + 0x4c);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0xd) = *(void*)(arg1 + 0xd);
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x11) = *(void*)(arg1 + 0x11);
  if (this_ptr != arg1) {
    param_2 = (string *)arg1[0x13];
    FUN_008df080();
  }
  std::string::operator=(this,param_2);
  *(void*)(this_ptr + 0x18) = *(void*)(arg1 + 0x18);
  *(void*)((int64_t)this_ptr + 0xc4) = *(void*)((int64_t)arg1 + 0xc4);
  std::string::operator=(this,param_2);
  std::string::operator=(this,param_2);
  if (this_ptr != arg1) {
    FUN_009bc850();
    FUN_009bc850();
    FUN_009bc850();
    FUN_009bc850();
    FUN_009bc850();
  }
  *(void*)(this_ptr + 0x30) = *(void*)(arg1 + 0x30);
  uVar1 = arg1[0x2e];
  this_ptr[0x2f] = arg1[0x2f];
  this_ptr[0x2e] = uVar1;
  return;
}

