// ===================================================================
// GNCelemonyHTTPUploadRequest — Complete reconstructed pseudocode
// 8 functions
// ===================================================================

// Registered properties (15):
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


// ============================================================
// 00e56290
// ============================================================
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



// ============================================================
// 00e524d0
// ============================================================
// Function: FUN_00e524d0
// Address: 00e524d0
// Size: 1788 bytes
// Class: GNCelemonyHTTPUploadRequest
// String references:
//   "GNCelemonyHTTPUploadRequest"
//   "suspend"
//   "resume"
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


void FUN_00e524d0(void)

{
  int64_t *plVar1;
  void*puVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t this_ptr;
  int64_t *plVar8;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x38) == 0) {
    return;
  }
  _objc_alloc();
  (*PTR__objc_msgSend_024a9998)();
  plVar8 = (int64_t *)(this_ptr + 0x10);
  cVar4 = FUN_00d05bb0();
  puVar2 = PTR__objc_msgSend_024a9998;
  while( true ) {
    if (cVar4 == '\0') goto LAB_00e5281e;
    cVar4 = FUN_00e92370();
    if (cVar4 != '\0') break;
    if (*(int64_t *)(this_ptr + 0x38) == 0) {
LAB_00e525d9:
      if (*(char *)(this_ptr + 0x60) != '\0') goto LAB_00e525e1;
LAB_00e52620:
      FUN_00e92450();
      cVar4 = FUN_00dee5a0((int)g_023908d0);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        FUN_00e92f90();
        (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x378))();
        plVar1 = *(int64_t **)(this_ptr + 0x10);
        if ((g_02786db8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
          g_02786d08 = FUN_00e79220();
          g_02786cf0 = "GNCelemonyHTTPUploadRequest";
          g_02786cf8 = 0xe0;
          g_02786d00 = FUN_00e530b0;
          g_02786d10 = 0;
          ram_0000000002786d18 = 0;
          g_02786d20 = 0;
          g_02786d98 = 0;
          ram_0000000002786da0 = 0;
          g_02786da8 = 0;
          g_02786daa = 2;
          g_02786d28 = 0;
          ram_0000000002786d30 = 0;
          g_02786d38 = 0;
          ram_0000000002786d40 = 0;
          g_02786d48 = 0;
          ram_0000000002786d50 = 0;
          g_02786d58 = 0;
          ram_0000000002786d60 = 0;
          g_02786d68 = 0;
          ram_0000000002786d70 = 0;
          g_02786d78 = 0;
          ram_0000000002786d80 = 0;
          g_02786d88 = 0;
          ram_0000000002786d90 = 0;
          g_02786db3 = 0;
          g_02786dab = 0;
          ___cxa_guard_release();
        }
        plVar7 = &g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar4 = FUN_00e85ea0();
          plVar7 = plVar8;
          if (cVar4 == '\0') {
            plVar7 = &g_02802688;
          }
        }
        if (*plVar7 != 0) {
          FUN_00d50b00();
          FUN_00dd9100();
          FUN_00d50b20();
        }
        (**(code **)(*(int64_t *)*plVar8 + 0x388))();
      }
    }
    else {
      cVar4 = FUN_00e92480();
      if (cVar4 == '\0') {
        if (*(char *)(this_ptr + 0x60) != '\0') {
          *(void*)(this_ptr + 0x60) = 0;
          (*puVar2)();
          goto LAB_00e525d9;
        }
        goto LAB_00e52620;
      }
      if (*(char *)(this_ptr + 0x60) == '\0') {
        (*puVar2)();
        *(void*)(this_ptr + 0x60) = 1;
      }
LAB_00e525e1:
      FUN_00da5ad0();
      FUN_00da68a0((int)g_023934c8);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    cVar4 = FUN_00d05bb0();
  }
  (*PTR__objc_msgSend_024a9998)();
  cVar4 = FUN_00d05bb0();
  while (cVar4 != '\0') {
    FUN_00e92450();
    FUN_00dee5a0((int)g_023908c8);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    cVar4 = FUN_00d05bb0();
  }
LAB_00e5281e:
  (*PTR__objc_release_024a99a0)();
  FUN_00e514e0();
  if (*(char *)(this_ptr + 0x7c) != '\0') {
    FUN_00e92330();
    lVar6 = g_02786c10;
    if (g_02786c10 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_02786c18;
    if (g_02786c18 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar3;
    local_88 = '\x01';
    FUN_00e97060(g_025908a0,&local_90);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_00e92490();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    goto LAB_00e52af9;
  }
  if (*(char *)(this_ptr + 0x48) == '\0') {
    if (*(int64_t *)(this_ptr + 0x68) == 0) {
      FUN_00e92f90();
      lVar6 = **(int64_t **)(this_ptr + 0x10);
    }
    else {
      FUN_00e92f90();
      lVar6 = **(int64_t **)(this_ptr + 0x10);
    }
    (**(code **)(lVar6 + 0x378))();
    plVar1 = (int64_t *)*plVar8;
    if ((g_02786db8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      g_02786d08 = FUN_00e79220();
      g_02786cf0 = "GNCelemonyHTTPUploadRequest";
      g_02786cf8 = 0xe0;
      g_02786d00 = FUN_00e530b0;
      g_02786d10 = 0;
      ram_0000000002786d18 = 0;
      g_02786d20 = 0;
      g_02786d98 = 0;
      ram_0000000002786da0 = 0;
      g_02786da8 = 0;
      g_02786daa = 2;
      g_02786d28 = 0;
      ram_0000000002786d30 = 0;
      g_02786d38 = 0;
      ram_0000000002786d40 = 0;
      g_02786d48 = 0;
      ram_0000000002786d50 = 0;
      g_02786d58 = 0;
      ram_0000000002786d60 = 0;
      g_02786d68 = 0;
      ram_0000000002786d70 = 0;
      g_02786d78 = 0;
      ram_0000000002786d80 = 0;
      g_02786d88 = 0;
      ram_0000000002786d90 = 0;
      g_02786db3 = 0;
      g_02786dab = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (int64_t *)0x0) {
LAB_00e529e9:
      plVar8 = &g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_00e529e9;
    }
    if (*plVar8 != 0) {
      FUN_00d50b00();
      FUN_00dd9100();
      FUN_00d50b20();
    }
  }
  plVar8 = *(int64_t **)(this_ptr + 0x10);
  local_58 = 0;
  lVar6 = *(int64_t *)(this_ptr + 0x68);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  local_60 = lVar6;
  (**(code **)(*plVar8 + 0x370))();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar6 = *(int64_t *)(this_ptr + 0x50);
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_80 = lVar6;
  FUN_00e92550();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e92310();
  FUN_00e92330();
  local_70 = *(int64_t *)(this_ptr + 0x40);
  if (local_70 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  FUN_00e92490();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
LAB_00e52af9:
  (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x3b0))();
  return;
}



// ============================================================
// 00e542a0
// ============================================================
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



// ============================================================
// 00e552a0
// ============================================================
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



// ============================================================
// 00e54ba0
// ============================================================
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



// ============================================================
// 00e55d80
// ============================================================
// Function: FUN_00e55d80
// Address: 00e55d80
// Size: 633 bytes
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


uint64_t FUN_00e55d80(void)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int64_t lVar5;
  int iVar6;
  int local_48;
  uint32_t uStack_44;
  char local_40;
  int local_34;
  
  cVar3 = FUN_00dab510();
  if (cVar3 == '\0') {
    return 0;
  }
  FUN_00d216c0();
  FUN_00d21370();
  FUN_00d227d0();
  FUN_00c8e710();
  lVar5 = CONCAT44(uStack_44,local_48);
  if ((local_40 == '\0') && (lVar5 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar4 = *(int64_t *)(this_ptr + 0x70);
  if (lVar4 == lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    *(int64_t *)(this_ptr + 0x70) = lVar5;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00e439a0();
  lVar5 = *(int64_t *)(this_ptr + 0x48);
  lVar4 = CONCAT44(uStack_44,local_48);
  if (lVar5 == lVar4) goto LAB_00e55eab;
  if (local_40 == '\0') {
    if (lVar4 == 0) {
      lVar4 = 0;
      goto LAB_00e55e69;
    }
    FUN_00d50b00();
    lVar2 = *(int64_t *)(this_ptr + 0x48);
    *(int64_t *)(this_ptr + 0x48) = CONCAT44(uStack_44,local_48);
    lVar4 = CONCAT44(uStack_44,local_48);
  }
  else {
    local_40 = '\0';
LAB_00e55e69:
    *(int64_t *)(this_ptr + 0x48) = lVar4;
    lVar2 = lVar5;
  }
  lVar5 = lVar4;
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar5 = CONCAT44(uStack_44,local_48);
  }
LAB_00e55eab:
  if ((local_40 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (0 < local_34) {
    iVar6 = 0;
    do {
      cVar3 = FUN_00dab510();
      if (cVar3 == '\0') {
        return 0;
      }
      lVar5 = *(int64_t *)(this_ptr + 0x70);
      iVar1 = *(int *)(lVar5 + 0x18);
      FUN_00c8e340();
      *(int *)(*(int64_t *)(lVar5 + 0x10) + (int64_t)iVar1) = local_48;
      lVar5 = g_028a8c38;
      if (local_48 == -1) {
        FUN_00d21140();
      }
      else {
        if (g_028a8c38 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if ((*(int64_t *)
              (*(int64_t *)(*(int64_t *)(this_ptr + 0x60) + 0x10) + (int64_t)local_48 * 8) != 0)
           && (cVar3 = FUN_00e56ef0(), cVar3 != '\0')) {
          FUN_00e43ee0();
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_34);
  }
  return 1;
}



// ============================================================
// 00e53510
// ============================================================
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



// ============================================================
// 00e53870
// ============================================================
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

