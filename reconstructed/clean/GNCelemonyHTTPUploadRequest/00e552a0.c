// Function: FUN_00e552a0
// Address: 00e552a0
// Size: 1536 bytes
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


uint64_t FUN_00e552a0(void)

{
  int64_t lVar1;
  code *pcVar2;
  char cVar3;
  void*puVar4;
  void*puVar5;
  int64_t this_ptr;
  bool bVar6;
  int local_48;
  int local_44;
  int64_t *local_40;
  char local_38;
  
  cVar3 = FUN_00dab510();
  if (cVar3 != '\0') {
    FUN_00d216c0();
    FUN_00d21370();
    FUN_00d216c0();
    FUN_00d21370();
    FUN_00d227d0();
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_0258a670;
    (*g_0258a688)();
    puVar5 = *(void**)(this_ptr + 0x50);
    if (puVar5 == puVar4) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x50) = puVar4;
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00e38130(0,0,0);
    FUN_00d216c0();
    FUN_00d21370();
    pcVar2 = g_0258e9a8;
    do {
      bVar6 = local_48 == 0;
      local_48 = local_48 + -1;
      if (bVar6) {
        return 1;
      }
      FUN_00dabdf0();
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          return 0;
        }
        FUN_00d50b00();
      }
      else if (local_40 == (int64_t *)0x0) {
        return 0;
      }
      FUN_00d21140();
      FUN_00c82360();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (*(int *)(this_ptr + 0x28) < 3) {
LAB_00e556ce:
        cVar3 = FUN_00dab510();
        bVar6 = true;
        if (cVar3 != '\0') {
          FUN_00d79550();
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          while (bVar6 = local_44 != 0, local_44 = local_44 + -1, bVar6) {
            puVar5 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar5 = &g_0258e990;
            *(void*)((int64_t)puVar5 + 0xc) = 0;
            *(void*)(puVar5 + 2) = 0;
            *(void*)((int64_t)puVar5 + 0x14) = 0;
            (*pcVar2)();
            if (*(int *)(this_ptr + 0x28) < 5) {
              lVar1 = *(int64_t *)(this_ptr + 0x30);
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              FUN_00e5d2a0();
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
            }
            else {
              lVar1 = *(int64_t *)(this_ptr + 0x30);
              if (lVar1 != 0) {
                FUN_00d50b00();
              }
              FUN_00e5d630();
              if (lVar1 != 0) {
                FUN_00d50b20();
              }
            }
            FUN_00d795e0();
            FUN_00d50b20();
          }
          FUN_00d21140();
          bVar6 = false;
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        cVar3 = FUN_00dab510();
        if (cVar3 != '\0') {
          FUN_00d46530();
          if (local_40 == (int64_t *)0x0) {
LAB_00e5565a:
            FUN_00e56e40();
          }
          else {
            FUN_00d50b00();
            FUN_00c7e7b0();
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            FUN_00e56e40();
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            FUN_00c7e7b0();
            cVar3 = (**(code **)(*local_40 + 0x50))();
            if (cVar3 == '\0') goto LAB_00e5565a;
          }
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_00e556ce;
        }
        bVar6 = true;
      }
      local_38 = '\0';
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    } while (!bVar6);
  }
  return 0;
}

