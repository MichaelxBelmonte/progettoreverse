// Function: FUN_00e56290
// Address: 00e56290
// Size: 2268 bytes
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


uint64_t FUN_00e56290(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  void*puVar4;
  void*puVar5;
  uint uVar6;
  int iVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  uint uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar13;
  float fVar14;
  int64_t local_b0;
  uint8_t local_a8;
  int64_t local_a0;
  uint8_t local_98;
  int64_t local_90;
  uint8_t local_88;
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  void*local_40;
  char local_38;
  int iVar7;
  
  FUN_00e571b0(0);
  cVar3 = FUN_00e57240();
  if (cVar3 != '\0') {
    return 0;
  }
  if (*(int *)(this_ptr + 0x28) < 4) {
    uVar6 = *(uint *)(*(int64_t *)(this_ptr + 0x40) + 0xc);
  }
  else {
    iVar8 = *(int *)(*(int64_t *)(this_ptr + 0x78) + 0x18);
    iVar7 = iVar8 + 3;
    if (-1 < iVar8) {
      iVar7 = iVar8;
    }
    uVar6 = iVar7 >> 2;
  }
  if (uVar6 == 0) goto LAB_00e56b81;
  uVar9 = (uint64_t)uVar6;
  FUN_00e57340();
  puVar4 = *(void**)(this_ptr + 0xa0);
  puVar5 = puVar4;
  if (puVar4 != local_40) {
    puVar5 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (void*)0x0) {
        puVar5 = (void*)0x0;
        goto LAB_00e56318;
      }
      FUN_00d50b00();
      puVar4 = *(void**)(this_ptr + 0xa0);
      *(void**)(this_ptr + 0xa0) = local_40;
    }
    else {
      local_38 = '\0';
LAB_00e56318:
      *(void**)(this_ptr + 0xa0) = puVar5;
    }
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
      puVar5 = local_40;
    }
  }
  if ((local_38 != '\0') && (puVar5 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d227d0();
  if (*(int *)(this_ptr + 0x28) < 4) {
    if (0 < (int)uVar6) {
      uVar11 = 0;
      local_78 = uVar9;
      do {
        if (*(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x40) + 0x10) + uVar11 * 8) == 0)
        {
          local_40 = (void*)0x0;
          local_38 = '\0';
          FUN_00d21140();
        }
        else {
          cVar3 = FUN_00dab510();
          if (cVar3 == '\0') goto LAB_00e56950;
          iVar8 = *(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x70) + 0x10) + uVar11 * 4);
          local_70 = FUN_00dac670();
          puVar4 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar4 = &g_0258ddc8;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[4] = 0;
          puVar4[5] = 0;
          puVar4[6] = 0;
          FUN_00d500e0();
          lVar12 = *(int64_t *)(this_ptr + 0x30);
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          uVar13 = *(void*)(this_ptr + 0x28);
          lVar1 = *(int64_t *)
                   (*(int64_t *)(*(int64_t *)(this_ptr + 0x80) + 0x10) + (int64_t)iVar8 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_a8 = 1;
          local_b0 = lVar1;
          cVar3 = FUN_00e53510(&local_b0,uVar13);
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if (lVar12 != 0) {
            FUN_00d50b20();
          }
          if (cVar3 == '\0') {
            FUN_00e571b0(g_02390124);
          }
          else {
            local_38 = '\0';
            FUN_00d21140();
            FUN_00dac5e0();
            local_40 = puVar4;
          }
          FUN_00d50b20();
          if (cVar3 == '\0') {
            return 0;
          }
        }
        uVar11 = uVar11 + 1;
      } while (local_78 != uVar11);
    }
  }
  else {
    if (0 < *(int *)(*(int64_t *)(this_ptr + 0x40) + 0xc)) {
      iVar8 = 0;
      do {
        local_40 = (void*)0x0;
        local_38 = '\0';
        FUN_00d21140();
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(*(int64_t *)(this_ptr + 0x40) + 0xc));
    }
    if (0 < (int)uVar6) {
      uVar11 = 0;
      local_80 = uVar9;
      do {
        cVar3 = FUN_00dab510();
        if (cVar3 == '\0') goto LAB_00e56950;
        local_78 = (uint64_t)
                   *(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x78) + 0x10) + uVar11 * 4);
        iVar8 = *(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x70) + 0x10) + local_78 * 4);
        local_70 = FUN_00dac670();
        puVar4 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar4 = &g_0258ddc8;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        FUN_00d500e0();
        lVar12 = *(int64_t *)(this_ptr + 0x30);
        if (lVar12 != 0) {
          FUN_00d50b00();
        }
        local_98 = 1;
        uVar13 = *(void*)(this_ptr + 0x28);
        lVar1 = *(int64_t *)
                 (*(int64_t *)(*(int64_t *)(this_ptr + 0x80) + 0x10) + (int64_t)iVar8 * 8);
        local_a0 = lVar12;
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_88 = 1;
        local_90 = lVar1;
        cVar3 = FUN_00e53510(&local_90,uVar13);
        uVar13 = extraout_XMM0_Da;
        if (lVar1 != 0) {
          uVar13 = FUN_00d50b20();
        }
        if (lVar12 != 0) {
          uVar13 = FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          FUN_00e571b0(g_02390124);
        }
        else {
          local_38 = '\0';
          FUN_00d233f0(uVar13,local_78);
          FUN_00dac5e0();
          local_40 = puVar4;
        }
        FUN_00d50b20();
        if (cVar3 == '\0') {
          return 0;
        }
        uVar11 = uVar11 + 1;
      } while (local_80 != uVar11);
    }
  }
  iVar8 = uVar6 * 0x21;
  if (*(char *)(this_ptr + 0x2c) == '\0') {
    iVar8 = uVar6 * 0x20;
  }
  FUN_00c8e710();
  if ((local_38 == '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  puVar4 = *(void**)(this_ptr + 0x90);
  if (puVar4 == local_40) {
    if (local_40 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    *(void**)(this_ptr + 0x90) = local_40;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  fVar14 = (float)(iVar8 + 1);
  if ((int)uVar6 < 1) {
    uVar10 = 0;
  }
  else {
    uVar11 = 0;
    uVar10 = 0;
    do {
      cVar3 = FUN_00e43e50();
      if (cVar3 != '\0') {
        cVar3 = FUN_00e573e0();
        if (cVar3 == '\0') goto LAB_00e56950;
        if ((*(int64_t *)(this_ptr + 0xb8) != 0) &&
           (uVar10 = uVar10 + 0x20, (uVar10 & 0x7ffff) == 0)) {
          FUN_00e571b0((float)(int)uVar10 / fVar14);
          cVar3 = FUN_00e57240();
          if (cVar3 != '\0') {
            return 0;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
    lVar12 = uVar9 + 1;
    do {
      cVar3 = FUN_00e43e50();
      if (cVar3 == '\0') {
        cVar3 = FUN_00e573e0();
        if (cVar3 == '\0') {
LAB_00e56950:
          FUN_00e571b0(g_02390124);
          return 0;
        }
        if ((*(int64_t *)(this_ptr + 0xb8) != 0) &&
           (uVar10 = uVar10 + 0x20, (uVar10 & 0x7ffff) == 0)) {
          FUN_00e571b0((float)(int)uVar10 / fVar14);
          cVar3 = FUN_00e57240();
          if (cVar3 != '\0') {
            return 0;
          }
        }
      }
      lVar12 = lVar12 + -1;
    } while (1 < lVar12);
  }
  if ((*(char *)(this_ptr + 0x2c) != '\0') && (0 < (int)uVar6)) {
    uVar11 = 0;
    do {
      if (*(int *)(this_ptr + 0x28) < 4) {
        iVar8 = (int)uVar11;
      }
      else {
        iVar8 = *(int *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x78) + 0x10) + uVar11 * 4);
      }
      plVar2 = *(int64_t **)
                (*(int64_t *)(*(int64_t *)(this_ptr + 0x40) + 0x10) + (int64_t)iVar8 * 8);
      if (plVar2 != (int64_t *)0x0) {
        *(void*)(this_ptr + 0xa8) =
             *(void*)
              (*(int64_t *)(*(int64_t *)(this_ptr + 0xa0) + 0x10) + (int64_t)iVar8 * 8);
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0x138))();
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        if ((*(int64_t *)(this_ptr + 0xb8) != 0) && (uVar10 = uVar10 + 1, (uVar10 & 0x7ffff) == 0)
           ) {
          FUN_00e571b0((float)(int)uVar10 / fVar14);
          cVar3 = FUN_00e57240();
          if (cVar3 != '\0') {
            return 0;
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
  }
  lVar12 = *(int64_t *)(this_ptr + 0x38);
  lVar1 = **(int64_t **)(*(int64_t *)(this_ptr + 0x40) + 0x10);
  if (lVar12 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
      lVar12 = *(int64_t *)(this_ptr + 0x38);
    }
    *(int64_t *)(this_ptr + 0x38) = lVar1;
    if (lVar12 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d216c0();
  if (*(int64_t *)(this_ptr + 0x48) != 0) {
    *(void*)(this_ptr + 0x48) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x50) != 0) {
    *(void*)(this_ptr + 0x50) = 0;
    FUN_00d50b20();
  }
  FUN_00d216c0();
  FUN_00d216c0();
  if (*(int64_t *)(this_ptr + 0x68) != 0) {
    *(void*)(this_ptr + 0x68) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x70) != 0) {
    *(void*)(this_ptr + 0x70) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x78) != 0) {
    *(void*)(this_ptr + 0x78) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x80) != 0) {
    *(void*)(this_ptr + 0x80) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    *(void*)(this_ptr + 0x90) = 0;
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0xa0) != 0) {
    *(void*)(this_ptr + 0xa0) = 0;
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0xa8) = 0;
LAB_00e56b81:
  FUN_00e571b0(g_02390124);
  return 1;
}

