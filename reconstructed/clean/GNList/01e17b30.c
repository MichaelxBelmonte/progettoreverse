// Function: FUN_01e17b30
// Address: 01e17b30
// Size: 1271 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


uint64_t FUN_01e17b30(uint32_t param_1)

{
  bool bVar1;
  bool bVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint32_t uVar12;
  uint64_t uVar13;
  int64_t this_ptr;
  int64_t lVar14;
  uint32_t extraout_XMM0_Da;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  uint8_t local_80;
  int64_t local_78;
  uint8_t local_70;
  uint8_t local_4c [4];
  int64_t local_48;
  char local_40;
  int64_t local_38;
  
  if ((g_028b9440 == 0) || (g_028b9449 == '\0')) {
    FUN_00e8cb50();
    lVar14 = g_027f3300;
    if (g_028b9440 == 0) {
      if (g_027f3300 != 0) {
        FUN_00d50b00();
        lVar3 = g_028b9440;
        if (g_028b9440 == lVar14) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          g_028b9440 = lVar14;
          bVar2 = true;
          bVar1 = true;
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        if (g_028b9448 == '\0') {
          g_028b9448 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      g_028b9449 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b9449 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028b9450 == 0) || (g_028b9459 == '\0')) {
    FUN_00e8cb50();
    lVar14 = g_027f3308;
    if (g_028b9450 == 0) {
      if (g_027f3308 != 0) {
        FUN_00d50b00();
        lVar3 = g_028b9450;
        if (g_028b9450 == lVar14) {
          bVar2 = false;
          bVar1 = false;
        }
        else {
          g_028b9450 = lVar14;
          bVar2 = true;
          bVar1 = true;
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
        if (g_028b9458 == '\0') {
          g_028b9458 = '\x01';
          FUN_00e8cb90();
          bVar1 = bVar2;
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
      }
      g_028b9459 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b9459 = '\x01';
      FUN_00e8cb70();
    }
  }
  iVar9 = FUN_01eacf20(param_1);
  if (iVar9 == -1) {
    uVar13 = FUN_00e7b4e0();
    return uVar13;
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x378))();
  lVar14 = local_48;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  iVar10 = FUN_00d8c7a0();
  iVar11 = iVar9;
  if (iVar10 <= iVar9) {
    iVar11 = FUN_00d8c7a0();
    iVar11 = iVar11 + -1;
  }
  sVar8 = FUN_00d8cbc0();
  iVar10 = FUN_00d8c7a0();
  if (iVar11 + 1 < iVar10) {
    uVar12 = FUN_00d8cbc0();
  }
  else {
    uVar12 = 0;
  }
  cVar7 = FUN_01e9c7e0(uVar12,local_4c);
  if (cVar7 == '\0') {
    cVar7 = FUN_00d90d50();
    lVar6 = g_028b9450;
    lVar5 = g_027f3310;
    lVar4 = g_027259e0;
    lVar3 = g_026fce10;
    if (cVar7 == '\0') {
      if (sVar8 == 9) {
        local_a8 = lVar14;
        local_a0 = 0;
        uVar12 = extraout_XMM0_Da;
        if (g_027f3310 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_98 = lVar5;
        local_90 = 1;
        uVar13 = FUN_01e1adc0(uVar12,&local_98);
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      else if (sVar8 == 0x2d) {
        local_88 = lVar14;
        local_80 = 0;
        uVar12 = extraout_XMM0_Da;
        if (g_026fce10 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_78 = lVar3;
        local_70 = 1;
        uVar13 = FUN_01e1adc0(uVar12,&local_78);
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      else if (sVar8 == 0x20) {
        local_c8 = lVar14;
        local_c0 = 0;
        uVar12 = extraout_XMM0_Da;
        if (g_027259e0 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_b8 = lVar4;
        local_b0 = 1;
        uVar13 = FUN_01e1adc0(uVar12,&local_b8);
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        cVar7 = FUN_00d90d50();
        if (cVar7 == '\0') {
          local_38 = lVar14;
          iVar11 = 0;
          do {
            lVar14 = local_38;
            if (iVar9 == iVar11) break;
            FUN_00d8cbc0();
            cVar7 = FUN_00d90d50();
            iVar11 = iVar11 + 1;
            lVar14 = local_38;
          } while (cVar7 == '\0');
          do {
            (**(code **)(**(int64_t **)(this_ptr + 0x138) + 0x378))();
            iVar11 = FUN_00d8c7a0();
            if ((local_40 != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            if (iVar9 == iVar11) goto LAB_01e18017;
            FUN_00d8cbc0();
            cVar7 = FUN_00d90d50();
            if (cVar7 != '\0') goto LAB_01e18017;
            iVar9 = iVar9 + 1;
          } while( true );
        }
        uVar13 = FUN_00e7b4e0();
      }
    }
    else {
      uVar12 = extraout_XMM0_Da;
      if (g_028b9450 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_d8 = lVar6;
      local_d0 = 1;
      uVar13 = FUN_01e1adc0(uVar12,&local_d8);
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar13 = FUN_00e7b4e0();
  }
LAB_01e17df8:
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  return uVar13;
LAB_01e18017:
  uVar13 = FUN_00e7b4e0();
  goto LAB_01e17df8;
}

