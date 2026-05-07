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
  longlong lVar2;
  string *this;
  string *psVar3;
  char *unaff_RSI;
  longlong lVar4;
  undefined8 *unaff_RDI;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0x7ffffffffffffffe;
  FUN_00953fa0(0xfffffffe,&local_38);
  local_38 = 0x7ffffffffffffffe;
  FUN_00953fa0();
  *unaff_RDI = &DAT_0251c0d8;
  *(undefined4 *)(unaff_RDI + 1) = 0;
  lVar4 = 0;
  unaff_RDI[2] = 0;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  unaff_RDI[0x10] = 0;
  unaff_RDI[0x11] = 0;
  lVar2 = 0;
  if (*unaff_RSI != -0x7f) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("static petpub::TimeLimitRecord pace::AuthorizationVerifier::convertTimeLimitFromIlok2ToPublic(const EEPROM_StorageRecordStruct &, const boost::posix_time::ptime &, bool, int32_t)"
                 ,&DAT_00001bcb);
    FUN_009bd14b();
    lVar4 = unaff_RDI[2];
    lVar2 = unaff_RDI[3];
  }
  this = (string *)(ulonglong)*(uint *)(unaff_RSI + 4);
  *(uint *)(unaff_RDI + 1) = *(uint *)(unaff_RSI + 4);
  if ((ulonglong)(lVar2 - lVar4) < 4) {
    FUN_0088d550();
  }
  else if (lVar2 - lVar4 != 4) {
    unaff_RDI[3] = lVar4 + 4;
  }
  FUN_009740dc();
  if ((unaff_RSI[2] & 2U) == 0) {
    *(undefined1 *)((longlong)unaff_RDI + 0x82) = 0;
    FUN_009a3b9c();
    FUN_009f35cc();
    FUN_0094ca28();
    if (*(int *)(unaff_RSI + 0x10) == 0) {
      unaff_RDI[0xb] = 0x7fffffffffffffff;
      local_38 = 0;
      iVar1 = FUN_0098c910();
      if (iVar1 == -1) {
        *(undefined1 *)((longlong)unaff_RDI + 0x83) = 0;
      }
      else {
        *(undefined1 *)((longlong)unaff_RDI + 0x83) = 1;
      }
    }
    else {
      FUN_009a3b9c();
      FUN_009f35cc();
      FUN_0094ca28();
      local_38 = 0;
      iVar1 = FUN_0098c910();
      if (iVar1 == -1) {
        *(undefined1 *)((longlong)unaff_RDI + 0x83) = 0;
        local_40 = 0;
      }
      else {
        local_38 = 0;
        iVar1 = FUN_0098c910();
        if (iVar1 == -1) {
          FUN_0094ca28();
          FUN_009f3a8b();
          *(undefined1 *)((longlong)unaff_RDI + 0x83) = 0;
        }
        else {
          FUN_009f3a8b();
          *(bool *)((longlong)unaff_RDI + 0x83) = local_40 != 0;
        }
        if (local_40 < 0) {
          local_40 = 0x7fffffffffffffff;
        }
      }
      unaff_RDI[0xb] = local_40;
    }
  }
  else {
    *(undefined2 *)((longlong)unaff_RDI + 0x82) = 1;
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
      unaff_RDI[0xb] = local_40;
    }
    else {
      unaff_RDI[0xb] = 0;
      std::string::operator=(this,psVar3);
    }
  }
  if ((param_1 != '\0') && (*(char *)((longlong)unaff_RDI + 0x83) == '\0')) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("static petpub::TimeLimitRecord pace::AuthorizationVerifier::convertTimeLimitFromIlok2ToPublic(const EEPROM_StorageRecordStruct &, const boost::posix_time::ptime &, bool, int32_t)"
                 ,&DAT_00001c4c);
    FUN_009bd14b();
  }
  return;
}


