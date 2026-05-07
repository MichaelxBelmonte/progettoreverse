// Function: FUN_00e53510
// Address: 00e53510
// Size: 635 bytes
// Class: GNCelemonyHTTPUploadRequest
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


uint64_t FUN_00e53510(void*param_1,int param_2)

{
  int64_t lVar1;
  code *pcVar2;
  char cVar3;
  uint64_t uVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t this_ptr;
  bool bVar7;
  int64_t local_58;
  char local_50;
  int local_34;
  
  cVar3 = FUN_00dab510();
  if (cVar3 == '\0') {
    return 0;
  }
  *(void*)(this_ptr + 0x10) = *param_1;
  uVar4 = FUN_00dac670();
  *(void*)(this_ptr + 0x28) = uVar4;
  FUN_00dac5e0();
  cVar3 = FUN_00dab510();
  if (cVar3 == '\0') {
    return 0;
  }
  FUN_00d79550();
  lVar1 = *(int64_t *)(this_ptr + 0x18);
  lVar6 = lVar1;
  if (lVar1 == local_58) goto LAB_00e535dc;
  lVar6 = local_58;
  if (local_50 == '\0') {
    if (local_58 == 0) {
      lVar6 = 0;
      goto LAB_00e5359a;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x18);
    *(int64_t *)(this_ptr + 0x18) = local_58;
  }
  else {
    local_50 = '\0';
LAB_00e5359a:
    *(int64_t *)(this_ptr + 0x18) = lVar6;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar6 = local_58;
  }
LAB_00e535dc:
  if ((local_50 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  pcVar2 = g_0258e9a8;
  bVar7 = local_34 != 0;
  local_34 = local_34 + -1;
  if (bVar7) {
    if (param_2 < 5) {
      do {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_0258e990;
        *(void*)((int64_t)puVar5 + 0xc) = 0;
        *(void*)(puVar5 + 2) = 0;
        *(void*)((int64_t)puVar5 + 0x14) = 0;
        (*pcVar2)();
        FUN_00e5d2a0();
        FUN_00d795e0();
        FUN_00d50b20();
        bVar7 = local_34 != 0;
        local_34 = local_34 + -1;
      } while (bVar7);
    }
    else {
      do {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_0258e990;
        *(void*)((int64_t)puVar5 + 0xc) = 0;
        *(void*)(puVar5 + 2) = 0;
        *(void*)((int64_t)puVar5 + 0x14) = 0;
        (*pcVar2)();
        FUN_00e5d630();
        FUN_00d795e0();
        FUN_00d50b20();
        bVar7 = local_34 != 0;
        local_34 = local_34 + -1;
      } while (bVar7);
    }
  }
  cVar3 = FUN_00dab510();
  if (cVar3 == '\0') {
    return 0;
  }
  uVar4 = FUN_00dac670();
  *(void*)(this_ptr + 0x30) = uVar4;
  return 1;
}

