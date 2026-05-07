// Function: FUN_00938c6a
// Address: 00938c6a
// Size: 1154 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "convertTimeLimitFromIlok2ToPublic was passed a storage record with the wrong bRecordtype (0x%02X)"
//   "static petpub::TimeLimitRecord pace::AuthorizationVerifier::convertTimeLimitFromIlok2ToPublic(const...
//   "TimeLimitRecord is not valid now (storageId 0x%08X)"

void FUN_00938c6a(char param_1)

{
  int iVar1;
  int64_t lVar2;
  string *this;
  string *psVar3;
  char *arg1;
  int64_t lVar4;
  void*this_ptr;
  int64_t local_40;
  uint64_t local_38;
  
  local_38 = 0x7ffffffffffffffe;
  FUN_00953fa0(0xfffffffe,&local_38);
  local_38 = 0x7ffffffffffffffe;
  FUN_00953fa0();
  *this_ptr = &g_0251c0d8;
  *(void*)(this_ptr + 1) = 0;
  lVar4 = 0;
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
  lVar2 = 0;
  if (*arg1 != -0x7f) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("static petpub::TimeLimitRecord pace::AuthorizationVerifier::convertTimeLimitFromIlok2ToPublic(const EEPROM_StorageRecordStruct &, const boost::posix_time::ptime &, bool, int32_t)"
                 ,&g_00001bcb);
    FUN_009bd14b();
    lVar4 = this_ptr[2];
    lVar2 = this_ptr[3];
  }
  this = (string *)(uint64_t)*(uint *)(arg1 + 4);
  *(uint *)(this_ptr + 1) = *(uint *)(arg1 + 4);
  if ((uint64_t)(lVar2 - lVar4) < 4) {
    FUN_0088d550();
  }
  else if (lVar2 - lVar4 != 4) {
    this_ptr[3] = lVar4 + 4;
  }
  FUN_009740dc();
  if ((arg1[2] & 2U) == 0) {
    *(void*)((int64_t)this_ptr + 0x82) = 0;
    FUN_009a3b9c();
    FUN_009f35cc();
    FUN_0094ca28();
    if (*(int *)(arg1 + 0x10) == 0) {
      this_ptr[0xb] = 0x7fffffffffffffff;
      local_38 = 0;
      iVar1 = FUN_0098c910();
      if (iVar1 == -1) {
        *(void*)((int64_t)this_ptr + 0x83) = 0;
      }
      else {
        *(void*)((int64_t)this_ptr + 0x83) = 1;
      }
    }
    else {
      FUN_009a3b9c();
      FUN_009f35cc();
      FUN_0094ca28();
      local_38 = 0;
      iVar1 = FUN_0098c910();
      if (iVar1 == -1) {
        *(void*)((int64_t)this_ptr + 0x83) = 0;
        local_40 = 0;
      }
      else {
        local_38 = 0;
        iVar1 = FUN_0098c910();
        if (iVar1 == -1) {
          FUN_0094ca28();
          FUN_009f3a8b();
          *(void*)((int64_t)this_ptr + 0x83) = 0;
        }
        else {
          FUN_009f3a8b();
          *(bool *)((int64_t)this_ptr + 0x83) = local_40 != 0;
        }
        if (local_40 < 0) {
          local_40 = 0x7fffffffffffffff;
        }
      }
      this_ptr[0xb] = local_40;
    }
  }
  else {
    *(void*)((int64_t)this_ptr + 0x82) = 1;
    FUN_009a31dc();
    FUN_009a3b9c();
    FUN_009f35cc();
    psVar3 = (string *)&local_38;
    iVar1 = FUN_00973ba1();
    if (iVar1 == 0) {
      FUN_009a3b9c();
      FUN_009f35cc();
      FUN_0094ca28();
      FUN_009f3a8b();
      if (local_40 < 0) {
        local_40 = 0x7fffffffffffffff;
      }
      this_ptr[0xb] = local_40;
    }
    else {
      this_ptr[0xb] = 0;
      std::string::operator=(this,psVar3);
    }
  }
  if ((param_1 != '\0') && (*(char *)((int64_t)this_ptr + 0x83) == '\0')) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("static petpub::TimeLimitRecord pace::AuthorizationVerifier::convertTimeLimitFromIlok2ToPublic(const EEPROM_StorageRecordStruct &, const boost::posix_time::ptime &, bool, int32_t)"
                 ,&g_00001c4c);
    FUN_009bd14b();
  }
  return;
}

