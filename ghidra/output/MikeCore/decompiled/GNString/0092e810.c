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


/* WARNING: Type propagation algorithm not settling */

void FUN_0092e810(undefined4 param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  longlong *plVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  void *pvVar11;
  ushort uVar12;
  ulong uVar13;
  bad_cast *pbVar14;
  void *pvVar15;
  longlong *plVar16;
  longlong *plVar17;
  ushort uVar18;
  uint uVar19;
  ulonglong uVar20;
  string *psVar21;
  ushort uVar22;
  undefined4 unaff_ESI;
  uint *puVar23;
  longlong unaff_RDI;
  uint *puVar24;
  longlong *plVar25;
  ulonglong uVar26;
  string *psVar27;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  byte *local_res8;
  undefined1 local_1a30 [24];
  allocator *in_stack_ffffffffffffe5e8;
  undefined1 local_19c0 [112];
  undefined1 local_1950 [56];
  int local_1918 [28];
  longlong *local_18a8;
  longlong *local_18a0;
  undefined8 local_1898;
  undefined8 uStack_1890;
  undefined8 local_1888;
  undefined8 uStack_1880;
  undefined8 local_1878;
  undefined8 uStack_1870;
  undefined8 local_1868;
  undefined *local_1858;
  byte local_1850;
  undefined1 auStack_184f [7];
  ulonglong local_1848;
  undefined1 *local_1840;
  undefined1 local_1808 [24];
  undefined4 local_17f0;
  int local_17ec;
  int local_17e8 [2];
  int local_17e0;
  int local_17d0 [2];
  int local_17c8;
  undefined8 local_17b8;
  undefined4 local_17b0;
  undefined1 local_17ac;
  undefined8 local_17a8;
  byte *local_17a0;
  undefined1 local_1798;
  undefined1 local_178c [4];
  undefined8 local_1788;
  ulonglong local_1780;
  longlong local_1778;
  longlong lStack_1770;
  undefined8 local_1768;
  longlong local_1758;
  longlong lStack_1750;
  undefined8 local_1748;
  undefined *local_1738;
  undefined8 local_1730;
  ulonglong local_1728;
  longlong local_1720;
  undefined8 local_1718;
  undefined8 local_1710;
  undefined8 local_1708;
  undefined8 local_1700;
  undefined8 local_16f8;
  undefined8 local_16f0;
  undefined4 local_16e4;
  undefined4 local_16e0 [2];
  undefined7 local_16d8;
  undefined1 uStack_16d1;
  undefined7 uStack_16d0;
  undefined8 local_16c8;
  longlong *local_16c0;
  byte local_16b8;
  bad_cast local_16b7 [7];
  ulonglong local_16b0;
  bad_cast *local_16a8;
  void *local_16a0;
  ulonglong local_1698;
  ulonglong local_1690;
  string *local_1688;
  void *local_1680;
  longlong local_1678;
  longlong lStack_1670;
  undefined8 local_1668;
  byte local_1660 [8];
  string *local_1658;
  byte *local_1650;
  longlong local_1648;
  longlong lStack_1640;
  undefined8 local_1638;
  undefined4 local_1624;
  longlong local_1620;
  ulonglong local_1618;
  byte *local_1610;
  ulonglong local_1608;
  ulonglong uStack_1600;
  void *local_15f8;
  ulonglong *local_15f0;
  byte *local_15e8;
  longlong *local_15e0;
  longlong local_15d8;
  longlong lStack_15d0;
  undefined8 local_15c8;
  longlong *local_15c0;
  longlong local_15b8;
  longlong *local_15b0;
  uint local_1598;
  byte local_1591;
  bad_cast *local_1590;
  bad_cast *local_1588;
  code *local_1580;
  uint local_1418 [2];
  uint uStack_1410;
  undefined4 uStack_140c;
  bad_cast **local_1398;
  code *local_1390;
  code *local_1388;
  uint local_1368 [32];
  uint local_12e8;
  uint uStack_12e4;
  uint uStack_12e0;
  undefined4 uStack_12dc;
  byte *local_11c0;
  code *local_11b8;
  code *local_11b0;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_1398 = (bad_cast **)CONCAT44(local_1398._4_4_,0xfffffffe);
  local_8f8 = 0x7ffffffffffffffe;
  local_1624 = param_3;
  local_15e8 = param_4;
  FUN_00953fa0();
  local_15b8 = (longlong)local_11c0;
  local_1610 = (byte *)(unaff_RDI + 0x18);
  local_11b8 = (code *)((ulonglong)local_11b8 & 0xffffffffffffff00);
  local_11c0 = local_1610;
  FUN_009b4e10();
  if (*(longlong *)(unaff_RDI + 8) != 0) {
    FUN_009283b4();
    FUN_009298da(2,0,1);
    uVar28 = (undefined4)local_8f8;
    uVar4 = local_8f8._4_4_;
    uVar5 = (undefined4)uStack_8f0;
    uVar6 = uStack_8f0._4_4_;
    local_8f8 = 0;
    uStack_8f0 = (longlong *)0x0;
    plVar25 = *(longlong **)(unaff_RDI + 0x10);
    *(undefined4 *)(unaff_RDI + 8) = uVar28;
    *(undefined4 *)(unaff_RDI + 0xc) = uVar4;
    *(undefined4 *)(unaff_RDI + 0x10) = uVar5;
    *(undefined4 *)(unaff_RDI + 0x14) = uVar6;
    if (plVar25 != (longlong *)0x0) {
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
    if (uStack_8f0 != (longlong *)0x0) {
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
  *(undefined4 *)(unaff_RDI + 0x58) = unaff_ESI;
  *(undefined4 *)(unaff_RDI + 0x5c) = param_2;
  *(undefined4 *)(unaff_RDI + 0x60) = param_1;
  *(undefined4 *)(unaff_RDI + 100) = param_3;
  FUN_0094d0ec();
  if (local_15e8 != (byte *)0x0) {
    if ((*local_15e8 & 1) == 0) {
      local_15e8[0] = 0;
      local_15e8[1] = 0;
    }
    else {
      **(undefined1 **)(local_15e8 + 0x10) = 0;
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
      **(undefined1 **)(local_res8 + 0x10) = 0;
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
  local_1738 = &DAT_0251a600;
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
  local_1858 = &DAT_0251a668;
  ___bzero();
  local_17b8 = 4;
  local_17b0 = 1;
  local_17ac = 1;
  local_16e4 = param_2;
  local_16e0[0] = param_1;
  uVar9 = FUN_009e95e1();
  local_16d8 = (undefined7)uVar9;
  uStack_16d1 = (undefined1)((ulonglong)uVar9 >> 0x38);
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
  *local_15c0 = (longlong)&DAT_0251fb00;
  local_15c0[3] = (longlong)local_15b0;
  local_1768 = 0;
  local_1778 = 0;
  lStack_1770 = 0;
  local_1668 = 0;
  local_1678 = 0;
  lStack_1670 = 0;
  FUN_0092fea9(local_15b0,1);
  local_1398 = (bad_cast **)local_1610;
  local_1390 = (code *)((ulonglong)local_1390 & 0xffffffffffffff00);
  FUN_009b4e10();
  local_16c8 = *(undefined8 *)(unaff_RDI + 8);
  local_16c0 = *(longlong **)(unaff_RDI + 0x10);
  if (local_16c0 != (longlong *)0x0) {
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
  if (local_16c0 != (longlong *)0x0) {
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
  local_1390 = (code *)((ulonglong)local_1390 & 0xffffffffffffff00);
  FUN_009b4e10();
  *(undefined4 *)(unaff_RDI + 0x68) = local_17f0;
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
  local_15f0 = (ulonglong *)local_1398;
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
    lVar10 = (longlong)&local_1730 + 1;
  }
  FUN_009308e8(0,uVar20 + lVar10);
  uVar18 = (ushort)(CONCAT17(uStack_16d1,local_16d8) >> 0x30);
  uVar12 = (ushort)((uint7)local_16d8 >> 0x20);
  uVar22 = (ushort)((uint7)local_16d8 >> 0x10);
  local_1780 = (ulonglong)(ushort)(uVar22 << 8 | uVar22 >> 8) << 0x20 |
               (ulonglong)(ushort)((ushort)local_16d8 << 8 | (ushort)local_16d8 >> 8) << 0x30 |
               (ulonglong)(ushort)(uVar18 << 8 | uVar18 >> 8) |
               (ulonglong)(ushort)(uVar12 << 8 | uVar12 >> 8) << 0x10;
  FUN_00a14dd0(&local_1778,&local_1780);
  if ((local_1850 & 1) == 0) {
    local_1840 = auStack_184f;
    local_1848 = (ulonglong)(local_1850 >> 1);
  }
  uVar28 = FUN_009309ea(local_1840 + local_1848,local_1840);
  FUN_009b113c(uVar28,local_19c0);
  pbVar3 = local_15e8;
  plVar25 = &local_1648;
  plVar17 = &local_15d8;
  FUN_009ae0ec(local_19c0,&local_1898);
  if (lStack_15d0 - local_15d8 != (ulonglong)local_1598) {
    FUN_00925fd0();
    uVar9 = FUN_00926010();
    local_1590 = (bad_cast *)(lStack_15d0 - local_15d8);
    local_1398 = &local_1590;
    local_1390 = FUN_00ac1940;
    local_1388 = FUN_009baee0;
    FUN_00983230();
    local_1398 = (bad_cast **)&local_1598;
    local_1390 = FUN_009595d8;
    local_1388 = (code *)&LAB_009977a0;
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
  if (((ulonglong)local_1590 & 1) != 0) {
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
    local_1580 = (code *)&LAB_009977a0;
    FUN_00983230();
    local_1590 = (bad_cast *)&uStack_1410;
    local_1588 = (bad_cast *)FUN_009595d8;
    local_1580 = (code *)&LAB_009977a0;
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
  uVar26 = (ulonglong)((byte)local_1608._0_1_ >> 1);
  local_1698 = (ulonglong)((byte)local_1608._0_1_ & 1);
  local_1690 = uStack_1600;
  uVar20 = uStack_1600;
  pvVar11 = local_15f8;
  if ((local_1608 & 1) == 0) {
    uVar20 = uVar26;
    pvVar11 = (void *)((ulonglong)&local_1608 | 1);
  }
  pvVar15 = (void *)(ulonglong)local_1660[0];
  psVar27 = (string *)(ulonglong)(local_1660[0] >> 1);
  local_1591 = local_1660[0] & 1;
  local_1688 = local_1658;
  psVar21 = local_1658;
  if (local_1591 == 0) {
    local_1650 = (byte *)((ulonglong)local_1660 | 1);
    psVar21 = psVar27;
  }
  if (psVar21 != (string *)0x0) {
    local_1680 = pvVar11;
    if ((longlong)psVar21 <= (longlong)uVar20) {
      local_16a0 = (void *)((longlong)pvVar11 + uVar20);
      local_15e8 = (byte *)CONCAT44(local_15e8._4_4_,(uint)*local_1650);
      while( true ) {
        uVar13 = (ulong)plVar17;
        lVar10 = (uVar20 - (longlong)psVar21) + 1;
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
        uVar20 = (longlong)local_16a0 - ((longlong)pvVar11 + 1);
        if ((longlong)uVar20 < (longlong)psVar21) break;
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
    psVar27 = (string *)(ulonglong)(local_1660[0] >> 1);
    local_1698 = CONCAT71((int7)(uStack_1600 >> 8),local_1608._0_1_) & 0xffffffffffffff01;
    uVar26 = (ulonglong)((byte)local_1608._0_1_ >> 1);
  }
LAB_0092f60c:
  if (local_1591 != 0) {
    psVar27 = local_1688;
  }
  if ((char)local_1698 != '\0') {
    uVar26 = local_1690;
  }
  std::string::string((string *)(uVar26 - (longlong)psVar27),psVar27,(ulong)&local_1608,uVar13,
                      in_stack_ffffffffffffe5e8);
  plVar25 = local_15c0;
  local_1918[0] = 0;
  if ((local_16b8 & 1) == 0) {
    local_16b0 = (ulonglong)(local_16b8 >> 1);
    local_16a8 = local_16b7;
  }
  local_1588 = local_16a8 + local_16b0;
  local_1590 = local_16a8;
  cVar7 = FUN_009e94a0();
  if (cVar7 == '\0') {
    std::bad_cast::bad_cast(local_16a8);
    local_1590 = (bad_cast *)&DAT_02524fc0;
    local_1588 = (bad_cast *)&PTR_vtable_02524770;
    local_1580 = (code *)PTR_typeinfo_024a9820;
    FUN_009af240();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
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
  *(longlong **)(unaff_RDI + 0x70) = local_15b0;
  plVar17 = *(longlong **)(unaff_RDI + 0x78);
  *(longlong **)(unaff_RDI + 0x78) = plVar25;
  plVar16 = local_15b0;
  if (plVar17 != (longlong *)0x0) {
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
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


