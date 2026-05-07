// Function: FUN_00e53870
// Address: 00e53870
// Size: 524 bytes
// Class: GNCelemonyHTTPUploadRequest
// String references:
//   " dataLoc:%I dataLen:%I"
//   " (INCORRECT! SHOULD BE:%I)"
//   " xdataLoc:%I xdataLen:%I"
// === GNCelemonyHTTPUploadRequest properties ===
//                   _kvTypeInfos
//                   _excessKVTypeInfos
//                   _excessDataLength
//                   _excessDataLocation
//                   _typeInfos
//                   _pingInterval
//                   _licenseDictionary
//                   _serialNumberProductID
//                   _serialNumber
//                   _ilokSerialNumber
//                   _remainingDaysNeeded
//                   _remainingDays
//                   _demoRequestJob
//                   _licenseFileUpToDate
//                   _expirationDate


void FUN_00e53870(void)

{
  int64_t lVar1;
  void*puVar2;
  int iVar3;
  void*puVar4;
  int64_t arg1;
  void*this_ptr;
  void*local_50;
  uint local_48;
  int local_44;
  uint64_t local_40;
  uint32_t local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025795a8;
  (*g_025795c0)();
  FUN_00d4fff0();
  puVar2 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  FUN_00d8dbf0();
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_50 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_40 = *(void*)(arg1 + 0x28);
  local_38 = *(void*)(arg1 + 0x20);
  local_48 = 2;
  local_50 = (void*)&g_0258e7d0;
  FUN_00d94d80(local_38,&local_50);
  lVar1 = *(int64_t *)(arg1 + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  iVar3 = FUN_00e5d8a0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*(int *)(arg1 + 0x20) != iVar3) {
    local_48 = 1;
    local_50 = &g_024cc6f0;
    local_44 = iVar3;
    FUN_00d94d80();
  }
  local_40 = *(void*)(arg1 + 0x30);
  local_38 = *(void*)(arg1 + 0x24);
  local_48 = 2;
  local_50 = (void*)&g_0258e7d0;
  FUN_00d94d80(local_38,&local_50);
  lVar1 = *(int64_t *)(arg1 + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  iVar3 = FUN_00e5d8a0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*(int *)(arg1 + 0x24) != iVar3) {
    local_48 = 1;
    local_50 = &g_024cc6f0;
    local_44 = iVar3;
    FUN_00d94d80();
  }
  FUN_00d8c7d0();
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}

