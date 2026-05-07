// Function: FUN_0093a0f8
// Address: 0093a0f8
// Size: 931 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "convertTimeLimitFromIlok1ToPublic was passed bad userdata at address (0x%16X)"
//   "static petpub::TimeLimitRecord pace::AuthorizationVerifier::convertTimeLimitFromIlok1ToPublic(const...
//   "convertTimeLimitFromIlok1ToPublic was passed userdata with the wrong SpecialFeatureBits (0x%02X)"

void FUN_0093a0f8(int param_1)

{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t arg1;
  void*this_ptr;
  void*local_80;
  int64_t local_78;
  void*local_68;
  code *local_60;
  code *local_58;
  int local_4c;
  void*local_48;
  uint32_t local_40;
  
  local_48 = (void*)CONCAT44(local_48._4_4_,0xfffffffe);
  local_80 = (void*)0x7ffffffffffffffe;
  local_4c = param_1;
  FUN_00953fa0(0x7ffffffffffffffe,&local_80);
  local_78 = CONCAT44(local_78._4_4_,0xfffffffe);
  local_80 = (void*)0x7ffffffffffffffe;
  FUN_00953fa0();
  local_48 = local_68;
  *this_ptr = &g_0251c0d8;
  *(void*)(this_ptr + 1) = 0;
  this_ptr[2] = 0;
  this_ptr[3] = 0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  this_ptr[10] = 0;
  this_ptr[0xb] = 0;
  this_ptr[0xc] = 0;
  this_ptr[0xd] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  this_ptr[0x10] = 0;
  this_ptr[0x11] = 0;
  if (arg1 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_68 = &stack0xffffffffffffffc8;
    local_60 = FUN_00950325;
    local_58 = FUN_0095032b;
    FUN_00983230();
    FUN_00928ab0("static petpub::TimeLimitRecord pace::AuthorizationVerifier::convertTimeLimitFromIlok1ToPublic(const uint8_t *, const boost::posix_time::ptime &, uint32_t, int32_t)"
                 ,&g_00002dcd);
    FUN_009bd14b();
  }
  iVar2 = local_4c;
  if ((*(byte *)(arg1 + 7) & 2) == 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_68 = (void*)(arg1 + 7);
    local_60 = FUN_0094fb68;
    local_58 = FUN_0094fb6e;
    FUN_00983230();
    FUN_00928ab0("static petpub::TimeLimitRecord pace::AuthorizationVerifier::convertTimeLimitFromIlok1ToPublic(const uint8_t *, const boost::posix_time::ptime &, uint32_t, int32_t)"
                 ,&g_00002dd3);
    FUN_009bd14b();
  }
  if (iVar2 != -1) {
    uVar3 = this_ptr[3] - this_ptr[2];
    if (uVar3 < 4) {
      FUN_0088d550();
    }
    else if (uVar3 != 4) {
      this_ptr[3] = this_ptr[2] + 4;
    }
    FUN_009740dc();
  }
  *(void*)(this_ptr + 1) = 0x80000000;
  uVar1 = FUN_0097413b();
  FUN_0097e7bc(1,1);
  local_78 = CONCAT44(local_78._4_4_,local_40);
  FUN_00953fa0();
  local_80 = local_68;
  local_68 = (void*)
             ((((uint64_t)(uVar1 & 0xffffff00) / 0x3c) * 0x3c +
              (uint64_t)((uVar1 & 0xffffff00) % 0x3c)) * 1000000);
  local_48 = (void*)FUN_0094cb3a();
  FUN_009f35cc();
  uVar1 = FUN_0097413b();
  uVar3 = (uint64_t)uVar1 + 300;
  local_78 = uVar3 * 1000000;
  FUN_009f6c90();
  FUN_009f35cc();
  FUN_0094ca28();
  local_68 = (void*)0x0;
  iVar2 = FUN_0098c910();
  if (iVar2 == -1) {
    this_ptr[0xb] = 0;
  }
  else {
    FUN_009f3a8b();
    if (local_68 <= uVar3) {
      if ((int64_t)local_68 < 0) {
        local_68 = (void*)0x7fffffffffffffff;
      }
      this_ptr[0xb] = local_68;
      *(bool *)((int64_t)this_ptr + 0x83) = local_68 != (void*)0x0;
      goto LAB_0093a480;
    }
    this_ptr[0xb] = uVar3;
  }
  *(void*)((int64_t)this_ptr + 0x83) = 0;
LAB_0093a480:
  *(void*)((int64_t)this_ptr + 0x82) = 0;
  return;
}

