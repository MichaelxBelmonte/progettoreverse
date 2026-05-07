// Function: FUN_00e542a0
// Address: 00e542a0
// Size: 1212 bytes
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


void FUN_00e542a0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  bool bVar4;
  int64_t *plVar5;
  char cVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar9;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  uint32_t local_50;
  int64_t *local_48;
  uint64_t local_40;
  int64_t *local_38;
  
  lVar1 = *param_2;
  lVar9 = arg1[6];
  if (lVar9 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    arg1[6] = lVar1;
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00daa970();
  cVar6 = FUN_00e54ba0();
  if (cVar6 == '\0') goto LAB_00e546e4;
  uVar8 = (**(code **)(*arg1 + 0x608))();
  plVar3 = local_70;
  if (local_68 == '\0') {
    if (local_70 == (int64_t *)0x0) goto LAB_00e5436d;
    FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_00e5434c:
    FUN_00dabfa0();
    plVar5 = local_70;
    if (local_68 != '\0') {
      if (local_70 != (int64_t *)0x0) goto LAB_00e5439f;
LAB_00e544be:
      local_40 = (int64_t *)((uint64_t)local_40._4_4_ << 0x20);
      goto LAB_00e5464a;
    }
    if (local_70 == (int64_t *)0x0) goto LAB_00e544be;
    FUN_00d50b00();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_00e5439f:
    local_40 = plVar5;
    local_b0 = plVar5;
    local_a8 = '\0';
    (**(code **)(*plVar3 + 0x370))(param_1,&local_b0);
    local_48 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02786e20;
    if (local_48 == (int64_t *)0x0) {
      if (g_02786e20 != 0) {
        FUN_00d50b00();
      }
      lVar9 = g_02786e28;
      local_a0 = lVar1;
      local_98 = '\x01';
      if (g_02786e28 != 0) {
        FUN_00d50b00();
      }
      local_90 = lVar9;
      local_88 = '\x01';
      FUN_00e972c0(param_1,g_025908a0);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (arg1[6] != 0) {
        arg1[6] = 0;
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      local_80 = local_48;
      local_78 = '\0';
      FUN_00daa910();
      plVar5 = local_70;
      if (local_68 == '\0') {
        if (((local_70 != (int64_t *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
           (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_68 = '\0';
      }
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00daa980();
      FUN_00daa970();
      FUN_00daa9b0();
      FUN_00daa990();
      FUN_00daa9d0();
      FUN_00daa9c0();
      plVar2 = (int64_t *)arg1[6];
      if (plVar2 != plVar5) {
        if (plVar5 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        arg1[6] = (int64_t)plVar5;
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    local_40 = (int64_t *)((uint64_t)local_40 & 0xffffffff00000000);
    if (local_48 != (int64_t *)0x0) goto LAB_00e545c9;
    cVar6 = '\x01';
    bVar4 = false;
  }
  else {
    if (local_70 != (int64_t *)0x0) goto LAB_00e5434c;
LAB_00e5436d:
    local_40 = (int64_t *)CONCAT44(local_40._4_4_,(int)CONCAT71((int7)((uint64_t)uVar8 >> 8),1));
LAB_00e545c9:
    cVar6 = FUN_00e55100();
    if (((cVar6 == '\0') || (cVar6 = FUN_00e552a0(), cVar6 == '\0')) ||
       ((cVar6 = FUN_00e55d80(), cVar6 == '\0' || (cVar6 = FUN_00e56120(), cVar6 == '\0')))) {
LAB_00e5464a:
      uVar7 = 0;
LAB_00e5464d:
      cVar6 = (char)uVar7;
      lVar1 = arg1[6];
    }
    else {
      uVar7 = FUN_00e56290();
      if ((*(char *)((int64_t)arg1 + 0x2d) == '\0') || (lVar1 = arg1[8], lVar1 == 0))
      goto LAB_00e5464d;
      local_48 = (int64_t *)CONCAT44(local_48._4_4_,uVar7);
      local_38 = plVar3;
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_50 = 0;
      local_58 = 0;
      local_60 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar9 = 0;
        do {
          plVar3 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar9 * 8);
          local_70 = plVar3;
          if ((plVar3 != (int64_t *)0x0) && (cVar6 = FUN_00d505b0(), cVar6 == '\0')) {
            (**(code **)(*plVar3 + 0x38))();
          }
          lVar9 = lVar9 + 1;
          local_58 = CONCAT44(local_58._4_4_,(int)lVar9);
        } while ((int)lVar9 < *(int *)(lVar1 + 0xc));
      }
      FUN_00083b20();
      cVar6 = (char)local_48;
      lVar1 = arg1[6];
    }
    bVar4 = true;
    if (lVar1 != 0) {
      bVar4 = true;
      arg1[6] = 0;
      FUN_00d50b20();
    }
  }
  if ((char)local_40 == '\0') {
    FUN_00d50b20();
  }
  if (!bVar4) {
    return;
  }
  if (cVar6 != '\0') {
    *(void*)(this_ptr + 1) = 0;
    lVar1 = arg1[7];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this_ptr = lVar1;
    *(void*)(this_ptr + 1) = 1;
    return;
  }
LAB_00e546e4:
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}

