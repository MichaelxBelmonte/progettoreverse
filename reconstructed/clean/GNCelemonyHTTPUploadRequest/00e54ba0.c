// Function: FUN_00e54ba0
// Address: 00e54ba0
// Size: 895 bytes
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


uint64_t FUN_00e54ba0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint64_t uVar5;
  int64_t *this_ptr;
  uint32_t local_6c;
  char local_36;
  char local_35;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  int64_t local_30;
  char local_28;
  
  uVar5 = 0;
  cVar4 = FUN_00dac2f0(0,6);
  if ((cVar4 == '\0') || (local_36 != 'G')) goto LAB_00e54cdc;
  if ((local_35 == 'N') &&
     ((((local_34 == 'B' && (local_33 == 'K')) && (local_32 == 'V')) &&
      ((local_31 == 'A' && (cVar4 = FUN_00dabce0(), cVar4 != '\0')))))) {
    FUN_00daa9c0();
    cVar4 = FUN_00dabce0();
    if (cVar4 != '\0') {
      FUN_00daa990();
      cVar4 = FUN_00dab510();
      if (((cVar4 != '\0') && ((int)this_ptr[5] - 2U < 5)) &&
         (cVar4 = FUN_00dab510(), lVar3 = g_027867a8, lVar2 = g_027867a0, lVar1 = g_02786798,
         cVar4 != '\0')) {
        switch(local_6c) {
        case 0:
          (**(code **)(*this_ptr + 0x600))();
          uVar5 = CONCAT71((int7)((uint64_t)(this_ptr + 5) >> 8),1);
          goto LAB_00e54cdc;
        case 1:
          if (g_02786798 != 0) {
            FUN_00d50b00();
          }
          FUN_00df3030();
          if (local_28 == '\0') {
            if (local_30 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_28 = '\0';
          }
          (**(code **)(*this_ptr + 0x600))();
          if (local_30 != 0) {
            FUN_00d50b20();
          }
          if ((local_28 != '\0') && (local_30 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          break;
        case 2:
          if (g_027867a0 != 0) {
            FUN_00d50b00();
          }
          FUN_00df3030();
          if (local_28 == '\0') {
            if (local_30 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_28 = '\0';
          }
          (**(code **)(*this_ptr + 0x600))();
          if (local_30 != 0) {
            FUN_00d50b20();
          }
          if ((local_28 != '\0') && (local_30 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          break;
        case 3:
          if (g_027867a8 != 0) {
            FUN_00d50b00();
          }
          FUN_00df3030();
          if (local_28 == '\0') {
            if (local_30 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_28 = '\0';
          }
          (**(code **)(*this_ptr + 0x600))();
          if (local_30 != 0) {
            FUN_00d50b20();
          }
          if ((local_28 != '\0') && (local_30 != 0)) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          break;
        default:
          goto switchD_00e54c95_default;
        }
        uVar5 = CONCAT71((int7)((uint64_t)local_30 >> 8),1);
        goto LAB_00e54cdc;
      }
    }
  }
switchD_00e54c95_default:
  uVar5 = 0;
LAB_00e54cdc:
  return uVar5 & 0xffffffff;
}

