// Function: FUN_0099234e
// Address: 0099234e
// Size: 996 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/ILokCert.cpp"
//   "The iLok device serial number portion of the cert serial number is invalid (it's zero)."
//   "std::__1::string pace::ILokCert::GetSerialNumberString()"

uint64_t FUN_0099234e(void)

{
  void**this;
  ostream *this_00;
  uint uVar1;
  int64_t arg1;
  uint64_t this_ptr;
  void*local_150 [2];
  ostream aoStack_140 [48];
  uint64_t local_110;
  uint64_t local_108;
  uint64_t local_100;
  uint64_t local_f8;
  uint32_t local_f0;
  void**local_e8;
  ostream aoStack_c8 [104];
  uint64_t local_60;
  uint32_t local_58;
  uint64_t local_50;
  
  this = &PTR__istream_025175a8;
  local_e8 = &PTR__istream_025175d0;
  std::ios_base::init(&PTR__istream_025175a8);
  local_60 = 0;
  local_58 = 0xffffffff;
  local_e8 = (void**)&g_025174b8;
  std::streambuf::streambuf((streambuf *)this);
  local_150[0] = &g_02523790;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0x18;
  if (*(int *)(arg1 + 400) == 0) {
    if (*(int *)(arg1 + 0x194) == 0) {
      local_50 = FUN_00925fd0();
      FUN_00926010();
      FUN_00928ab0("std::__1::string pace::ILokCert::GetSerialNumberString()",0x230);
      FUN_009c720b();
    }
    uVar1 = *(uint *)((int64_t)local_150 + (int64_t)g_02517478) & 0xffffffb5 | 8;
    *(uint *)((int64_t)local_150 + (int64_t)g_02517478) = uVar1;
    *(uint *)((int64_t)local_150 + (int64_t)g_02517478) =
         *(uint *)((int64_t)local_150 + (int64_t)g_02517478) | 0x4000;
    std::ostream::operator<<(g_02517478,uVar1);
  }
  else {
    uVar1 = *(uint *)((int64_t)local_150 + (int64_t)g_02517478) & 0xffffffb5 | 8;
    *(uint *)((int64_t)local_150 + (int64_t)g_02517478) = uVar1;
    *(uint *)((int64_t)local_150 + (int64_t)g_02517478) =
         *(uint *)((int64_t)local_150 + (int64_t)g_02517478) | 0x4000;
    std::ostream::operator<<(g_02517478,uVar1);
    *(void*)(aoStack_140 + (int64_t)g_02517478) = 8;
    *(void*)(aoStack_c8 + (int64_t)g_02517478) = 0x30;
    uVar1 = *(uint *)((int64_t)local_150 + (int64_t)g_02517478) & 0xffffffb5 | 8;
    *(uint *)((int64_t)local_150 + (int64_t)g_02517478) = uVar1;
    *(uint *)((int64_t)local_150 + (int64_t)g_02517478) =
         *(uint *)((int64_t)local_150 + (int64_t)g_02517478) | 0x4000;
    std::ostream::operator<<(g_02517478,uVar1);
  }
  *(void*)(aoStack_140 + (int64_t)g_02517478) = 2;
  *(void*)(aoStack_c8 + (int64_t)g_02517478) = 0x30;
  uVar1 = *(uint *)((int64_t)local_150 + (int64_t)g_02517478) & 0xffffffb5 | 8;
  *(uint *)((int64_t)local_150 + (int64_t)g_02517478) = uVar1;
  *(uint *)((int64_t)local_150 + (int64_t)g_02517478) =
       *(uint *)((int64_t)local_150 + (int64_t)g_02517478) | 0x4000;
  std::ostream::operator<<(g_02517478,uVar1);
  *(void*)(aoStack_140 + (int64_t)g_02517478) = 2;
  *(void*)(aoStack_c8 + (int64_t)g_02517478) = 0x30;
  uVar1 = *(uint *)((int64_t)local_150 + (int64_t)g_02517478) & 0xffffffb5 | 8;
  *(uint *)((int64_t)local_150 + (int64_t)g_02517478) = uVar1;
  *(uint *)((int64_t)local_150 + (int64_t)g_02517478) =
       *(uint *)((int64_t)local_150 + (int64_t)g_02517478) | 0x4000;
  std::ostream::operator<<(g_02517478,uVar1);
  *(void*)(aoStack_140 + (int64_t)g_02517478) = 2;
  *(void*)(aoStack_c8 + (int64_t)g_02517478) = 0x30;
  uVar1 = *(uint *)((int64_t)local_150 + (int64_t)g_02517478) & 0xffffffb5 | 8;
  *(uint *)((int64_t)local_150 + (int64_t)g_02517478) = uVar1;
  *(uint *)((int64_t)local_150 + (int64_t)g_02517478) =
       *(uint *)((int64_t)local_150 + (int64_t)g_02517478) | 0x4000;
  std::ostream::operator<<(g_02517478,uVar1);
  *(void*)(aoStack_140 + (int64_t)g_02517478) = 8;
  *(void*)(aoStack_c8 + (int64_t)g_02517478) = 0x30;
  uVar1 = *(uint *)((int64_t)local_150 + (int64_t)g_02517478) & 0xffffffb5 | 8;
  *(uint *)((int64_t)local_150 + (int64_t)g_02517478) = uVar1;
  *(uint *)((int64_t)local_150 + (int64_t)g_02517478) =
       *(uint *)((int64_t)local_150 + (int64_t)g_02517478) | 0x4000;
  this_00 = g_02517478;
  std::ostream::operator<<(g_02517478,uVar1);
  FUN_00892260();
  local_e8 = (void**)&g_025174b8;
  local_150[0] = &g_02523790;
  if ((local_110 & 1) != 0) {
    operator_delete(this_00);
  }
  std::streambuf::~streambuf((streambuf *)this_00);
  std::iostream::~iostream((iostream *)this_00);
  std::ios::~ios((ios *)this_00);
  return this_ptr;
}

