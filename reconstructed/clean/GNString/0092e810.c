// Function: FUN_0092e810
// Address: 0092e810
// Size: 4995 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Encryption Algorithm %d not supported"
//   "void pace::AuthorizationVerifier::openLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint32_t, u...
//   "licenseD_CallTime (%s) is not a valid date"
//   "The openEncryptedChannel client_CallTime to licenseD_CallTime (%d second) was too long "
//   "The openEncryptedChannel licenseD_CallTime to command finish (%d second) was too long"
//   "The actual key size %d is not the expected size %d"
//   "LicenseD's cert is no longer valid"
//   "Bad privileges (Privilege: 0x%08X, MorePrivilege: 0x%08X) for a LicenseD certificate"
//   "LicenseD "
//   "\"LicenseD \" is not at the beginning of the cert's BusinessCategory (Actual: %s)"
//   "The LicenseD service version in the cert does not match the service version on the openEncryptedCha...
//   "Hash truncation method %d is not supported"
//   "Bad signature on openEncryptedChannel command"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0092e810(uint32_t param_1,uint32_t param_2,uint32_t param_3,byte *param_4)

{
  int64_t *plVar1;
  code *pcVar2;
  byte *pbVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  char cVar7;
  int iVar8;
  uint64_t uVar9;
  int64_t lVar10;
  void *pvVar11;
  ushort uVar12;
  ulong uVar13;
  bad_cast *pbVar14;
  void *pvVar15;
  int64_t *plVar16;
  int64_t *plVar17;
  ushort uVar18;
  uint uVar19;
  uint64_t uVar20;
  string *psVar21;
  ushort uVar22;
  uint32_t unaff_ESI;
  uint *puVar23;
  int64_t this_ptr;
  uint *puVar24;
  int64_t *plVar25;
  uint64_t uVar26;
  string *psVar27;
  uint32_t uVar28;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  byte *local_res8;
  uint8_t local_1a30 [24];
  allocator *in_stack_ffffffffffffe5e8;
  uint8_t local_19c0 [112];
  uint8_t local_1950 [56];
  int local_1918 [28];
  int64_t *local_18a8;
  int64_t *local_18a0;
  uint64_t local_1898;
  uint64_t uStack_1890;
  uint64_t local_1888;
  uint64_t uStack_1880;
  uint64_t local_1878;
  uint64_t uStack_1870;
  uint64_t local_1868;
  void*local_1858;
  byte local_1850;
  uint8_t auStack_184f [7];
  uint64_t local_1848;
  void*local_1840;
  uint8_t local_1808 [24];
  uint32_t local_17f0;
  int local_17ec;
  int local_17e8 [2];
  int local_17e0;
  int local_17d0 [2];
  int local_17c8;
  uint64_t local_17b8;
  uint32_t local_17b0;
  uint8_t local_17ac;
  uint64_t local_17a8;
  byte *local_17a0;
  uint8_t local_1798;
  uint8_t local_178c [4];
  uint64_t local_1788;
  uint64_t local_1780;
  int64_t local_1778;
  int64_t lStack_1770;
  uint64_t local_1768;
  int64_t local_1758;
  int64_t lStack_1750;
  uint64_t local_1748;
  void*local_1738;
  uint64_t local_1730;
  uint64_t local_1728;
  int64_t local_1720;
  uint64_t local_1718;
  uint64_t local_1710;
  uint64_t local_1708;
  uint64_t local_1700;
  uint64_t local_16f8;
  uint64_t local_16f0;
  uint32_t local_16e4;
  uint32_t local_16e0 [2];
  undefined7 local_16d8;
  uint8_t uStack_16d1;
  undefined7 uStack_16d0;
  uint64_t local_16c8;
  int64_t *local_16c0;
  byte local_16b8;
  bad_cast local_16b7 [7];
  uint64_t local_16b0;
  bad_cast *local_16a8;
  void *local_16a0;
  uint64_t local_1698;
  uint64_t local_1690;
  string *local_1688;
  void *local_1680;
  int64_t local_1678;
  int64_t lStack_1670;
  uint64_t local_1668;
  byte local_1660 [8];
  string *local_1658;
  byte *local_1650;
  int64_t local_1648;
  int64_t lStack_1640;
  uint64_t local_1638;
  uint32_t local_1624;
  int64_t local_1620;
  uint64_t local_1618;
  byte *local_1610;
  uint64_t local_1608;
  uint64_t uStack_1600;
  void *local_15f8;
  uint64_t *local_15f0;
  byte *local_15e8;
  int64_t *local_15e0;
  int64_t local_15d8;
  int64_t lStack_15d0;
  uint64_t local_15c8;
  int64_t *local_15c0;
  int64_t local_15b8;
  int64_t *local_15b0;
  uint local_1598;
  byte local_1591;
  bad_cast *local_1590;
  bad_cast *local_1588;
  code *local_1580;
  uint local_1418 [2];
  uint uStack_1410;
  uint32_t uStack_140c;
  bad_cast **local_1398;
  code *local_1390;
  code *local_1388;
  uint local_1368 [32];
  uint local_12e8;
  uint uStack_12e4;
  uint uStack_12e0;
  uint32_t uStack_12dc;
  byte *local_11c0;
  code *local_11b8;
  code *local_11b0;
  uint64_t local_8f8;
  uint64_t uStack_8f0;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_1398 = (bad_cast **)CONCAT44(local_1398._4_4_,0xfffffffe);
  local_8f8 = 0x7ffffffffffffffe;
  local_1624 = param_3;
  local_15e8 = param_4;
  FUN_00953fa0();
  local_15b8 = (int64_t)local_11c0;
  local_1610 = (byte *)(this_ptr + 0x18);
  local_11b8 = ((uint64_t)local_11b8 & 0xffffffffffffff00);
  local_11c0 = local_1610;
  FUN_009b4e10();
  if (*(int64_t *)(this_ptr + 8) != 0) {
    FUN_009283b4();
    FUN_009298da(2,0,1);
    uVar28 = (uint32_t)local_8f8;
    uVar4 = local_8f8._4_4_;
    uVar5 = (uint32_t)uStack_8f0;
    uVar6 = uStack_8f0._4_4_;
    local_8f8 = 0;
    uStack_8f0 = (int64_t *)0x0;
    plVar25 = *(int64_t **)(this_ptr + 0x10);
    *(void*)(this_ptr + 8) = uVar28;
    *(void*)(this_ptr + 0xc) = uVar4;
    *(void*)(this_ptr + 0x10) = uVar5;
    *(void*)(this_ptr + 0x14) = uVar6;
    if (plVar25 != (int64_t *)0x0) {
      LOCK();
      plVar17 = plVar25 + 1;
      lVar10 = *plVar17;
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*plVar25 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    if (uStack_8f0 != (int64_t *)0x0) {
      LOCK();
      plVar25 = uStack_8f0 + 1;
      lVar10 = *plVar25;
      *plVar25 = *plVar25 + -1;
      UNLOCK();
      if (lVar10 == 0) {
        (**(code **)(*uStack_8f0 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  *(void*)(this_ptr + 0x58) = unaff_ESI;
  *(void*)(this_ptr + 0x5c) = param_2;
  *(void*)(this_ptr + 0x60) = param_1;
  *(void*)(this_ptr + 100) = param_3;
  FUN_0094d0ec();
  if (local_15e8 != (byte *)0x0) {
    if ((*local_15e8 & 1) == 0) {
      local_15e8[0] = 0;
      local_15e8[1] = 0;
    }
    else {
      **(void**)(local_15e8 + 0x10) = 0;
      local_15e8[8] = 0;
      local_15e8[9] = 0;
      local_15e8[10] = 0;
      local_15e8[0xb] = 0;
      local_15e8[0xc] = 0;
      local_15e8[0xd] = 0;
      local_15e8[0xe] = 0;
      local_15e8[0xf] = 0;
    }
  }
  if (local_res8 != (byte *)0x0) {
    if ((*local_res8 & 1) == 0) {
      local_res8[0] = 0;
      local_res8[1] = 0;
    }
    else {
      **(void**)(local_res8 + 0x10) = 0;
      local_res8[8] = 0;
      local_res8[9] = 0;
      local_res8[10] = 0;
      local_res8[0xb] = 0;
      local_res8[0xc] = 0;
      local_res8[0xd] = 0;
      local_res8[0xe] = 0;
      local_res8[0xf] = 0;
    }
  }
  FUN_00928be8();
  uVar13 = 0x30;
  local_1738 = &g_0251a600;
  local_1730 = 0;
  local_1728 = 0;
  local_1720 = 0;
  local_1718 = 0;
  local_1710 = 0;
  local_1708 = 0;
  local_1700 = 0;
  local_16f8 = 0;
  local_16f0 = 0;
  local_16d8 = 0;
  uStack_16d1 = 0;
  uStack_16d0 = 0;
  local_1858 = &g_0251a668;
  ___bzero();
  local_17b8 = 4;
  local_17b0 = 1;
  local_17ac = 1;
  local_16e4 = param_2;
  local_16e0[0] = param_1;
  uVar9 = FUN_009e95e1();
  local_16d8 = (undefined7)uVar9;
  uStack_16d1 = (uint8_t)((uint64_t)uVar9 >> 0x38);
  FUN_009af70c();
  local_1598 = FUN_00972764();
  if (local_1598 == 0) {
    FUN_00925fd0();
    uVar9 = FUN_00926010();
    local_11c0 = (byte *)local_16e0;
    local_11b8 = FUN_009cac80;
    local_11b0 = FUN_009cefa0;
    FUN_00983230();
    uVar13 = 0x1fc12d8;
    uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::openLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint32_t, uint32_t, std::__1::string *, std::__1::string *)"
                          ,0xe25);
    FUN_009bd14b(uVar28,uVar9);
  }
  uVar28 = FUN_009adf0a();
  uVar28 = FUN_009afd2a(uVar28,local_1a30);
  FUN_009b1162(uVar28,&local_1700);
  local_1788 = FUN_0094c1c0();
  FUN_009f35cc();
  local_15d8 = 0;
  lStack_15d0 = 0;
  local_15c8 = 0;
  local_1398 = (bad_cast **)CONCAT71(local_1398._1_7_,0xa5);
  FUN_009542b4();
  local_15b0 = operator_new(uVar13);
  uVar13 = 0;
  FUN_0098ce6c(0,1,&local_15d8);
  local_15c0 = operator_new(uVar13);
  local_15e0 = local_15c0 + 1;
  local_15c0[2] = 0;
  local_15c0[1] = 0;
  *local_15c0 = (int64_t)&g_0251fb00;
  local_15c0[3] = (int64_t)local_15b0;
  local_1768 = 0;
  local_1778 = 0;
  lStack_1770 = 0;
  local_1668 = 0;
  local_1678 = 0;
  lStack_1670 = 0;
  FUN_0092fea9(local_15b0,1);
  local_1398 = (bad_cast **)local_1610;
  local_1390 = ((uint64_t)local_1390 & 0xffffffffffffff00);
  FUN_009b4e10();
  local_16c8 = *(void*)(this_ptr + 8);
  local_16c0 = *(int64_t **)(this_ptr + 0x10);
  if (local_16c0 != (int64_t *)0x0) {
    LOCK();
    local_16c0[1] = local_16c0[1] + 1;
    UNLOCK();
  }
  local_18a8 = local_15b0;
  local_18a0 = local_15c0;
  LOCK();
  local_15c0[1] = local_15c0[1] + 1;
  UNLOCK();
  FUN_00930118(&local_16c8,&local_1678,0);
  LOCK();
  lVar10 = *local_15e0;
  *local_15e0 = *local_15e0 + -1;
  UNLOCK();
  if (lVar10 == 0) {
    (**(code **)(*local_15c0 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  if (local_16c0 != (int64_t *)0x0) {
    LOCK();
    plVar25 = local_16c0 + 1;
    lVar10 = *plVar25;
    *plVar25 = *plVar25 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*local_16c0 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  uVar28 = FUN_0094d0ec();
  FUN_0094f3ee(uVar28,&local_1858);
  local_1398 = (bad_cast **)local_1610;
  local_1390 = ((uint64_t)local_1390 & 0xffffffffffffff00);
  FUN_009b4e10();
  *(void*)(this_ptr + 0x68) = local_17f0;
  FUN_0094d0ec();
  local_1620 = FUN_009f3f64();
  lVar10 = FUN_009585b8();
  uVar28 = extraout_XMM0_Da;
  if (local_1620 == lVar10) {
    FUN_00925fd0();
    uVar9 = FUN_00926010();
    local_1390 = FUN_009b6370;
    local_1388 = FUN_0094ef70;
    local_1398 = (bad_cast **)&local_1850;
    FUN_00983230();
    uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::openLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint32_t, uint32_t, std::__1::string *, std::__1::string *)"
                          ,0xe7d);
    uVar28 = FUN_009bd14b(uVar28,uVar9);
  }
  FUN_0094ca28(uVar28,&local_1788);
  FUN_009f3a8b();
  local_1398 = (bad_cast **)0x0;
  iVar8 = FUN_0098c910();
  if ((iVar8 != -1) && (300 < local_1618)) {
    FUN_00925fd0();
    uVar9 = FUN_00926010();
    local_1390 = FUN_009ada80;
    local_1388 = FUN_0094f614;
    local_1398 = (bad_cast **)&local_1618;
    FUN_00983230();
    uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::openLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint32_t, uint32_t, std::__1::string *, std::__1::string *)"
                          ,0xe88);
    FUN_009bd14b(uVar28,uVar9);
  }
  local_17a8 = FUN_0094c1c0();
  FUN_0094ca28(extraout_XMM0_Da_00,&local_1620);
  local_15f0 = (uint64_t *)local_1398;
  FUN_009f3a8b();
  local_1398 = (bad_cast **)0x0;
  iVar8 = FUN_0098c910();
  if ((iVar8 != -1) && (300 < local_1618)) {
    FUN_00925fd0();
    uVar9 = FUN_00926010();
    local_1390 = FUN_009ada80;
    local_1388 = FUN_0094f614;
    local_1398 = (bad_cast **)&local_1618;
    FUN_00983230();
    uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::openLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint32_t, uint32_t, std::__1::string *, std::__1::string *)"
                          ,0xe95);
    FUN_009bd14b(uVar28,uVar9);
  }
  local_1648 = 0;
  lStack_1640 = 0;
  local_1638 = 0;
  uVar20 = local_1728;
  lVar10 = local_1720;
  if ((local_1730 & 1) == 0) {
    uVar20 = local_1730 >> 1 & 0x7f;
    lVar10 = (int64_t)&local_1730 + 1;
  }
  FUN_009308e8(0,uVar20 + lVar10);
  uVar18 = (ushort)(CONCAT17(uStack_16d1,local_16d8) >> 0x30);
  uVar12 = (ushort)((uint7)local_16d8 >> 0x20);
  uVar22 = (ushort)((uint7)local_16d8 >> 0x10);
  local_1780 = (uint64_t)(ushort)(uVar22 << 8 | uVar22 >> 8) << 0x20 |
               (uint64_t)(ushort)((ushort)local_16d8 << 8 | (ushort)local_16d8 >> 8) << 0x30 |
               (uint64_t)(ushort)(uVar18 << 8 | uVar18 >> 8) |
               (uint64_t)(ushort)(uVar12 << 8 | uVar12 >> 8) << 0x10;
  FUN_00a14dd0(&local_1778,&local_1780);
  if ((local_1850 & 1) == 0) {
    local_1840 = auStack_184f;
    local_1848 = (uint64_t)(local_1850 >> 1);
  }
  uVar28 = FUN_009309ea(local_1840 + local_1848,local_1840);
  FUN_009b113c(uVar28,local_19c0);
  pbVar3 = local_15e8;
  plVar25 = &local_1648;
  plVar17 = &local_15d8;
  FUN_009ae0ec(local_19c0,&local_1898);
  if (lStack_15d0 - local_15d8 != (uint64_t)local_1598) {
    FUN_00925fd0();
    uVar9 = FUN_00926010();
    local_1590 = (bad_cast *)(lStack_15d0 - local_15d8);
    local_1398 = &local_1590;
    local_1390 = FUN_00ac1940;
    local_1388 = FUN_009baee0;
    FUN_00983230();
    local_1398 = (bad_cast **)&local_1598;
    local_1390 = FUN_009595d8;
    local_1388 = &LAB_009977a0;
    FUN_00983230();
    uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::openLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint32_t, uint32_t, std::__1::string *, std::__1::string *)"
                          ,0xed6);
    FUN_009bd14b(uVar28,uVar9);
  }
  local_1878 = 0;
  uStack_1870 = 0;
  local_1888 = 0;
  uStack_1880 = 0;
  local_1898 = 0;
  uStack_1890 = 0;
  local_1868 = 0;
  pbVar14 = (bad_cast *)local_1808;
  FUN_00991548(pbVar14,&local_1624);
  if (pbVar3 != (byte *)0x0 || local_res8 != (byte *)0x0) {
    local_1418[0] = local_12e8;
    local_1418[1] = uStack_12e4;
    uStack_1410 = uStack_12e0;
    uStack_140c = uStack_12dc;
    if (pbVar3 != (byte *)0x0) {
      local_15b8 = FUN_009a3b9c();
      lVar10 = FUN_009585b8();
      if (local_15b8 != lVar10) {
        FUN_009f4dea();
        if ((*pbVar3 & 1) != 0) {
          operator_delete(pbVar14);
        }
        *(code **)(pbVar3 + 0x10) = local_1580;
        *(bad_cast **)(pbVar3 + 8) = local_1588;
        *(bad_cast **)pbVar3 = local_1590;
        pbVar14 = local_1588;
      }
    }
    if (local_res8 != (byte *)0x0) {
      local_15b8 = FUN_009a3b9c();
      lVar10 = FUN_009585b8();
      if (local_15b8 != lVar10) {
        FUN_009f4dea();
        if ((*local_res8 & 1) != 0) {
          operator_delete(pbVar14);
        }
        *(code **)(local_res8 + 0x10) = local_1580;
        *(bad_cast **)(local_res8 + 8) = local_1588;
        *(bad_cast **)local_res8 = local_1590;
        pbVar14 = local_1588;
      }
    }
  }
  FUN_0099234e();
  cVar7 = FUN_009aef32();
  if (((uint64_t)local_1590 & 1) != 0) {
    operator_delete(pbVar14);
  }
  if (cVar7 != '\0') {
    FUN_00925fd0();
    uVar9 = FUN_00926010();
    uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::openLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint32_t, uint32_t, std::__1::string *, std::__1::string *)"
                          ,0xf11);
    FUN_009bd14b(uVar28,uVar9);
  }
  puVar23 = local_1368;
  puVar24 = local_1418;
  for (lVar10 = 0x20; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar24 = *puVar23;
    puVar23 = puVar23 + 1;
    puVar24 = puVar24 + 1;
  }
  if ((((local_1418[1] & 0x80003f) != 0x80002a) || ((uStack_1410 & 0x800) == 0)) ||
     ((byte)local_1418[0] < 2)) {
    FUN_00925fd0();
    uVar9 = FUN_00926010();
    local_1590 = (bad_cast *)(local_1418 + 1);
    local_1588 = (bad_cast *)FUN_009595d8;
    local_1580 = &LAB_009977a0;
    FUN_00983230();
    local_1590 = (bad_cast *)&uStack_1410;
    local_1588 = (bad_cast *)FUN_009595d8;
    local_1580 = &LAB_009977a0;
    FUN_00983230();
    uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::openLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint32_t, uint32_t, std::__1::string *, std::__1::string *)"
                          ,0xf25);
    FUN_009bd14b(uVar28,uVar9);
  }
  local_1608 = 0;
  uStack_1600 = 0;
  local_15f8 = (void *)0x0;
  FUN_0092e080();
  FUN_00992150();
  uVar13 = (ulong)plVar17;
  uVar26 = (uint64_t)((byte)local_1608._0_1_ >> 1);
  local_1698 = (uint64_t)((byte)local_1608._0_1_ & 1);
  local_1690 = uStack_1600;
  uVar20 = uStack_1600;
  pvVar11 = local_15f8;
  if ((local_1608 & 1) == 0) {
    uVar20 = uVar26;
    pvVar11 = (void *)((uint64_t)&local_1608 | 1);
  }
  pvVar15 = (void *)(uint64_t)local_1660[0];
  psVar27 = (string *)(uint64_t)(local_1660[0] >> 1);
  local_1591 = local_1660[0] & 1;
  local_1688 = local_1658;
  psVar21 = local_1658;
  if (local_1591 == 0) {
    local_1650 = (byte *)((uint64_t)local_1660 | 1);
    psVar21 = psVar27;
  }
  if (psVar21 != (string *)0x0) {
    local_1680 = pvVar11;
    if ((int64_t)psVar21 <= (int64_t)uVar20) {
      local_16a0 = (void *)((int64_t)pvVar11 + uVar20);
      local_15e8 = (byte *)CONCAT44(local_15e8._4_4_,(uint)*local_1650);
      while( true ) {
        uVar13 = (ulong)plVar17;
        lVar10 = (uVar20 - (int64_t)psVar21) + 1;
        if (lVar10 == 0) break;
        pvVar11 = _memchr(pvVar15,(int)lVar10,(size_t)plVar25);
        uVar13 = (ulong)plVar17;
        if (pvVar11 == (void *)0x0) break;
        iVar8 = _memcmp(pvVar15,psVar21,(size_t)plVar25);
        uVar13 = (ulong)plVar17;
        if (iVar8 == 0) {
          if ((pvVar11 != local_16a0) && (pvVar11 == local_1680)) goto LAB_0092f60c;
          break;
        }
        uVar20 = (int64_t)local_16a0 - ((int64_t)pvVar11 + 1);
        if ((int64_t)uVar20 < (int64_t)psVar21) break;
      }
    }
    FUN_00925fd0();
    uVar9 = FUN_00926010();
    local_1590 = (bad_cast *)&local_1608;
    local_1588 = (bad_cast *)FUN_009b6370;
    local_1580 = FUN_0094ef70;
    FUN_00983230();
    uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::openLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint32_t, uint32_t, std::__1::string *, std::__1::string *)"
                          ,0xf31);
    FUN_009bd14b(uVar28,uVar9);
    local_1688 = local_1658;
    local_1690 = uStack_1600;
    local_1591 = local_1660[0] & 1;
    psVar27 = (string *)(uint64_t)(local_1660[0] >> 1);
    local_1698 = CONCAT71((int7)(uStack_1600 >> 8),local_1608._0_1_) & 0xffffffffffffff01;
    uVar26 = (uint64_t)((byte)local_1608._0_1_ >> 1);
  }
LAB_0092f60c:
  if (local_1591 != 0) {
    psVar27 = local_1688;
  }
  if ((char)local_1698 != '\0') {
    uVar26 = local_1690;
  }
  std::string::string((string *)(uVar26 - (int64_t)psVar27),psVar27,(ulong)&local_1608,uVar13,
                      in_stack_ffffffffffffe5e8);
  plVar25 = local_15c0;
  local_1918[0] = 0;
  if ((local_16b8 & 1) == 0) {
    local_16b0 = (uint64_t)(local_16b8 >> 1);
    local_16a8 = local_16b7;
  }
  local_1588 = local_16a8 + local_16b0;
  local_1590 = local_16a8;
  cVar7 = FUN_009e94a0();
  if (cVar7 == '\0') {
    std::bad_cast::bad_cast(local_16a8);
    local_1590 = (bad_cast *)&g_02524fc0;
    local_1588 = (bad_cast *)&PTR_vtable_02524770;
    local_1580 = PTR_typeinfo_024a9820;
    FUN_009af240();
                        pcVar2 = invalidInstructionException();
    (*pcVar2)();
  }
  if (local_1918[0] != (int)local_17b8) {
    FUN_00925fd0();
    uVar9 = FUN_00926010();
    uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::openLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint32_t, uint32_t, std::__1::string *, std::__1::string *)"
                          ,0xf3b);
    FUN_009bd14b(uVar28,uVar9);
  }
  FUN_00991dc8(local_1918,local_178c);
  local_1758 = 0;
  lStack_1750 = 0;
  local_1748 = 0;
  FUN_00930bc8();
  if (local_17ec != 2) {
    if (local_17ec == 0) {
      FUN_009afe36();
    }
    else {
      FUN_00925fd0();
      uVar9 = FUN_00926010();
      local_1590 = (bad_cast *)&local_17ec;
      local_1588 = (bad_cast *)FUN_009cac80;
      local_1580 = FUN_009cefa0;
      FUN_00983230();
      uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::openLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint32_t, uint32_t, std::__1::string *, std::__1::string *)"
                            ,0xf7f);
      FUN_009bd14b(uVar28,uVar9);
    }
  }
  FUN_0098eb02();
  FUN_0098ee68();
  (**(code **)(local_1590 + 0x48))(local_1950,0);
  cVar7 = FUN_009b0612(local_17e8,local_1950,local_17d0);
  if (cVar7 == '\0') {
    FUN_00925fd0();
    uVar9 = FUN_00926010();
    uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::openLicenseDaemonEncryptedChannel(uint32_t, uint32_t, uint32_t, uint32_t, std::__1::string *, std::__1::string *)"
                          ,0xfae);
    FUN_009bd14b(uVar28,uVar9);
  }
  uVar19 = local_17e0 - local_17e8[0];
  if (local_1598 < (uint)(local_17e0 - local_17e8[0])) {
    uVar19 = local_1598;
  }
  if (uVar19 != 0) {
    FUN_009742a7();
  }
  uVar19 = local_17c8 - local_17d0[0];
  if (local_1598 < (uint)(local_17c8 - local_17d0[0])) {
    uVar19 = local_1598;
  }
  if (uVar19 != 0) {
    FUN_009742a7();
  }
  (**(code **)(*local_15b0 + 0x10))(0,1,&local_15d8);
  ___bzero();
  local_17a0 = local_1610;
  local_1798 = 0;
  FUN_009b4e10();
  LOCK();
  plVar25[1] = plVar25[1] + 1;
  UNLOCK();
  *(int64_t **)(this_ptr + 0x70) = local_15b0;
  plVar17 = *(int64_t **)(this_ptr + 0x78);
  *(int64_t **)(this_ptr + 0x78) = plVar25;
  plVar16 = local_15b0;
  if (plVar17 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar17 + 1;
    lVar10 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar10 == 0) {
      (**(code **)(*plVar17 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_0094d0ec();
  FUN_0098edfa();
  if (local_1758 != 0) {
    lStack_1750 = local_1758;
    operator_delete(plVar16);
  }
  if ((local_16b8 & 1) != 0) {
    operator_delete(plVar16);
  }
  if ((local_1660[0] & 1) != 0) {
    operator_delete(plVar16);
  }
  if ((local_1608 & 1) != 0) {
    operator_delete(plVar16);
  }
  FUN_00991598();
  if (local_1648 != 0) {
    lStack_1640 = local_1648;
    operator_delete(plVar16);
  }
  if (local_1678 != 0) {
    lStack_1670 = local_1678;
    operator_delete(plVar16);
  }
  if (local_1778 != 0) {
    lStack_1770 = local_1778;
    operator_delete(plVar16);
  }
  LOCK();
  lVar10 = *local_15e0;
  *local_15e0 = *local_15e0 + -1;
  UNLOCK();
  plVar17 = local_15e0;
  if (lVar10 == 0) {
    (**(code **)(*plVar25 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  if (local_15d8 != 0) {
    lStack_15d0 = local_15d8;
    operator_delete(plVar17);
  }
  FUN_009adf1c();
  FUN_009af9a6();
  FUN_008c7668();
  FUN_008c6b22();
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

