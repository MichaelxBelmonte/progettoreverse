// Function: FUN_0093bd8e
// Address: 0093bd8e
// Size: 9762 bytes
// Class: MUSpectrumShaper
// String references:
//   "publisherId"
//   "authId"
//   "state"
//   "issuerId"
//   "subtype"
//   "storageId"
//   "authInstance"
//   "timeLimited"
//   "countLimited"
//   "authType"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Bad LsLicensePtr (0x%16X)"
//   "static void pace::AuthorizationVerifier::populateAuthDataLicenseDb(petpub::AuthChain &, license_ser...
//   "Bad LsAuthorizationPtr (0x%16X)"
//   "Could not get a vector of TimeLimits"
//   "Software Auth Expired: Time limit expired"
//   "Software has a relative time limit that has not been started yet."
//   "Software Auth Not Valid Yet: The current time is before the time limit starts."
//   "Could not get a vector of CountLimits"
//   "The auth count limit does has both the kCountLimitFlagsReadOnly_Counter1NotCryptoCounter bit set!"
//   ... +9 more


void FUN_0093bd8e(ulonglong param_1,string *param_2,string *param_3,undefined8 param_4,
                 ulonglong param_5,uint param_6)

{
  longlong *plVar1;
  string *psVar2;
  string sVar3;
  bool bVar4;
  bool bVar5;
  string sVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  void *pvVar12;
  string *psVar13;
  string *psVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  string *psVar17;
  string *psVar18;
  dword *pdVar19;
  ulonglong uVar20;
  char *pcVar21;
  void *pvVar22;
  string *psVar23;
  char *pcVar24;
  void *pvVar25;
  string *psVar26;
  string *unaff_RSI;
  longlong unaff_RDI;
  string *psVar27;
  longlong lVar28;
  string *psVar29;
  undefined4 uVar30;
  bool bVar31;
  byte local_res8;
  byte local_res10;
  char local_res20;
  ulonglong local_200;
  string *local_1f8;
  undefined8 local_1f0;
  string *local_1a8;
  string *local_1a0;
  byte local_118;
  void *local_110;
  ulonglong local_f8 [2];
  undefined8 local_e8;
  string *local_e0;
  ulonglong local_d8;
  string *local_d0;
  byte local_c8;
  void *local_c0;
  longlong local_b0;
  ulonglong local_a8;
  string *local_a0;
  undefined8 local_98;
  longlong local_90;
  ulonglong local_88;
  byte local_60;
  string *local_58;
  
  local_e8 = param_4;
  local_e0 = param_2;
  local_d8 = param_1;
  local_d0 = param_3;
  if (*(longlong *)param_2 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_1a8 = local_e0;
    local_1a0 = (string *)FUN_0095007e;
    FUN_00983230();
    FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthDataLicenseDb(petpub::AuthChain &, license_services::LsAuthorizationPtr, license_services::LsLicensePtr, size_t, bool &, const boost::posix_time::ptime &, bool, bool, std::vector<pet::authorize::DatabaseCommitItem> *, bool, uint64_t, int32_t)"
                 ,&DAT_0000218a);
    param_1 = local_d8;
    FUN_009bd14b();
  }
  if (*(longlong *)unaff_RSI == 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_1a0 = (string *)FUN_00950099;
    FUN_00983230();
    FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthDataLicenseDb(petpub::AuthChain &, license_services::LsAuthorizationPtr, license_services::LsLicensePtr, size_t, bool &, const boost::posix_time::ptime &, bool, bool, std::vector<pet::authorize::DatabaseCommitItem> *, bool, uint64_t, int32_t)"
                 ,&DAT_00002191);
    param_1 = local_d8;
    FUN_009bd14b();
    local_1a8 = unaff_RSI;
  }
  plVar1 = (longlong *)(unaff_RDI + 8);
  psVar17 = (string *)(*(longlong *)(unaff_RDI + 0x10) - *(longlong *)(unaff_RDI + 8) >> 4);
  if ((ulonglong)((longlong)psVar17 * -0x7dc11f7047dc11f7) < param_1 ||
      (longlong)psVar17 * -0x7dc11f7047dc11f7 - param_1 == 0) {
    FUN_008f8528();
  }
  else {
    lVar28 = param_1 * 0x390;
    iVar8 = *(int *)(*(longlong *)(unaff_RDI + 8) + 8 + lVar28);
    FUN_00a1c9ba();
    FUN_009bafbc();
    lVar10 = FUN_00a1c9ba();
    if (iVar8 == *(int *)(lVar10 + 0x30)) {
      iVar8 = *(int *)(*plVar1 + 0xc + lVar28);
      FUN_00a1c9ba();
      FUN_009bafbc();
      lVar10 = FUN_00a1c9ba();
      if (iVar8 == *(int *)(lVar10 + 0xa0)) goto LAB_0093c146;
    }
    lVar10 = *plVar1;
    if ((*(byte *)(lVar10 + 0x1e0 + lVar28) & 1) == 0) {
      *(undefined2 *)(lVar10 + 0x1e0 + lVar28) = 0;
    }
    else {
      psVar17 = *(string **)(lVar10 + 0x1f0 + lVar28);
      *psVar17 = (string)0x0;
      *(undefined8 *)(lVar10 + 0x1e8 + lVar28) = 0;
    }
    lVar10 = *plVar1;
    if ((*(byte *)(lVar10 + 0x1f8 + lVar28) & 1) == 0) {
      *(undefined2 *)(lVar10 + 0x1f8 + lVar28) = 0;
    }
    else {
      psVar17 = *(string **)(lVar10 + 0x208 + lVar28);
      *psVar17 = (string)0x0;
      *(undefined8 *)(lVar10 + 0x200 + lVar28) = 0;
    }
    lVar10 = *plVar1;
    if ((*(byte *)(lVar10 + 0x210 + lVar28) & 1) == 0) {
      *(undefined2 *)(lVar10 + 0x210 + lVar28) = 0;
    }
    else {
      psVar17 = *(string **)(lVar10 + 0x220 + lVar28);
      *psVar17 = (string)0x0;
      *(undefined8 *)(lVar10 + 0x218 + lVar28) = 0;
    }
    lVar10 = *plVar1;
    if ((*(byte *)(lVar10 + 0x228 + lVar28) & 1) == 0) {
      *(undefined2 *)(lVar10 + 0x228 + lVar28) = 0;
    }
    else {
      psVar17 = *(string **)(lVar10 + 0x238 + lVar28);
      *psVar17 = (string)0x0;
      *(undefined8 *)(lVar10 + 0x230 + lVar28) = 0;
    }
    lVar10 = *plVar1;
    if ((*(byte *)(lVar10 + 0x240 + lVar28) & 1) == 0) {
      *(undefined2 *)(lVar10 + 0x240 + lVar28) = 0;
    }
    else {
      psVar17 = *(string **)(lVar10 + 0x250 + lVar28);
      *psVar17 = (string)0x0;
      *(undefined8 *)(lVar10 + 0x248 + lVar28) = 0;
    }
    lVar10 = *plVar1;
    if ((*(byte *)(lVar10 + 600 + lVar28) & 1) == 0) {
      *(undefined2 *)(lVar10 + 600 + lVar28) = 0;
    }
    else {
      psVar17 = *(string **)(lVar10 + 0x268 + lVar28);
      *psVar17 = (string)0x0;
      *(undefined8 *)(lVar10 + 0x260 + lVar28) = 0;
    }
    lVar10 = *plVar1;
    if ((*(byte *)(lVar10 + 0x270 + lVar28) & 1) == 0) {
      *(undefined2 *)(lVar10 + 0x270 + lVar28) = 0;
    }
    else {
      psVar17 = *(string **)(lVar10 + 0x280 + lVar28);
      *psVar17 = (string)0x0;
      *(undefined8 *)(lVar10 + 0x278 + lVar28) = 0;
    }
    iVar8 = *(int *)(*plVar1 + 0x10 + lVar28);
    FUN_00a1c9ba();
    FUN_009bafbc();
    lVar10 = FUN_00a1c9ba();
    if (iVar8 != *(int *)(lVar10 + 0x34)) {
      *(undefined1 *)(*plVar1 + 0x387 + lVar28) = 0;
    }
  }
LAB_0093c146:
  psVar2 = (string *)*plVar1;
  FUN_00a1c9ba();
  FUN_009bafbc();
  lVar10 = FUN_00a1c9ba();
  psVar29 = (string *)(local_d8 * 0x390);
  *(undefined4 *)(psVar2 + 8 + (longlong)psVar29) = *(undefined4 *)(lVar10 + 0x30);
  FUN_00a1c9ba();
  FUN_009bafbc();
  lVar10 = FUN_00a1c9ba();
  *(undefined4 *)(psVar2 + 0xc + (longlong)psVar29) = *(undefined4 *)(lVar10 + 0xa0);
  FUN_00a1c9ba();
  FUN_009bafbc();
  lVar10 = FUN_00a1c9ba();
  *(undefined4 *)(psVar2 + 0x10 + (longlong)psVar29) = *(undefined4 *)(lVar10 + 0x34);
  FUN_00a1c9ba();
  FUN_009bafbc();
  lVar10 = FUN_00a1c9ba();
  *(undefined4 *)(psVar2 + 0x14 + (longlong)psVar29) = *(undefined4 *)(lVar10 + 0xa4);
  FUN_00a1c9ba();
  pcVar21 = "authType";
  FUN_009bafbc();
  FUN_00a1c9ba();
  std::string::string(psVar17,(string *)pcVar21);
  lVar10 = FUN_008911e2();
  bVar7 = *(byte *)(lVar10 + 0x1d8);
  if ((bVar7 & 1) == 0) {
    pvVar12 = (void *)(ulonglong)(bVar7 >> 1);
  }
  else {
    pvVar12 = *(void **)(lVar10 + 0x1e0);
  }
  pvVar25 = local_c0;
  if ((local_c8 & 1) == 0) {
    pvVar25 = (void *)(ulonglong)(local_c8 >> 1);
  }
  pvVar22 = pvVar25;
  if (pvVar12 < pvVar25) {
    pvVar22 = pvVar12;
  }
  if (pvVar22 == (void *)0x0) {
LAB_0093c2e7:
    uVar11 = 8;
    if (pvVar25 != pvVar12) goto LAB_0093c2f5;
  }
  else {
    param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    iVar8 = _memcmp((void *)(ulonglong)bVar7,pvVar22,(size_t)param_3);
    if (iVar8 == 0) goto LAB_0093c2e7;
LAB_0093c2f5:
    lVar10 = FUN_008911e2();
    bVar7 = *(byte *)(lVar10 + 0x1f0);
    if ((bVar7 & 1) == 0) {
      pvVar12 = (void *)(ulonglong)(bVar7 >> 1);
    }
    else {
      pvVar12 = *(void **)(lVar10 + 0x1f8);
    }
    pvVar25 = local_c0;
    if ((local_c8 & 1) == 0) {
      pvVar25 = (void *)(ulonglong)(local_c8 >> 1);
    }
    pvVar22 = pvVar25;
    if (pvVar12 < pvVar25) {
      pvVar22 = pvVar12;
    }
    if (pvVar22 == (void *)0x0) {
LAB_0093c37b:
      uVar11 = 4;
      if (pvVar25 == pvVar12) goto LAB_0093c4b6;
    }
    else {
      param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      iVar8 = _memcmp((void *)(ulonglong)bVar7,pvVar22,(size_t)param_3);
      if (iVar8 == 0) goto LAB_0093c37b;
    }
    lVar10 = FUN_008911e2();
    bVar7 = *(byte *)(lVar10 + 0x220);
    if ((bVar7 & 1) == 0) {
      pvVar12 = (void *)(ulonglong)(bVar7 >> 1);
    }
    else {
      pvVar12 = *(void **)(lVar10 + 0x228);
    }
    pvVar25 = local_c0;
    if ((local_c8 & 1) == 0) {
      pvVar25 = (void *)(ulonglong)(local_c8 >> 1);
    }
    pvVar22 = pvVar25;
    if (pvVar12 < pvVar25) {
      pvVar22 = pvVar12;
    }
    if (pvVar22 == (void *)0x0) {
LAB_0093c40f:
      uVar11 = 1;
      if (pvVar25 == pvVar12) goto LAB_0093c4b6;
    }
    else {
      param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      iVar8 = _memcmp((void *)(ulonglong)bVar7,pvVar22,(size_t)param_3);
      if (iVar8 == 0) goto LAB_0093c40f;
    }
    lVar10 = FUN_008911e2();
    bVar7 = *(byte *)(lVar10 + 0x208);
    if ((bVar7 & 1) == 0) {
      pvVar12 = (void *)(ulonglong)(bVar7 >> 1);
    }
    else {
      pvVar12 = *(void **)(lVar10 + 0x210);
    }
    pvVar25 = local_c0;
    if ((local_c8 & 1) == 0) {
      pvVar25 = (void *)(ulonglong)(local_c8 >> 1);
    }
    pvVar22 = pvVar25;
    if (pvVar12 < pvVar25) {
      pvVar22 = pvVar12;
    }
    if (pvVar22 == (void *)0x0) {
LAB_0093c4a3:
      uVar11 = 2;
      if (pvVar25 == pvVar12) goto LAB_0093c4b6;
    }
    else {
      param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      iVar8 = _memcmp((void *)(ulonglong)bVar7,pvVar22,(size_t)param_3);
      if (iVar8 == 0) goto LAB_0093c4a3;
    }
    lVar10 = FUN_008e4ece();
    uVar11 = *(undefined8 *)(lVar10 + 0x38);
  }
LAB_0093c4b6:
  *(undefined8 *)(psVar2 + 0x30 + (longlong)psVar29) = uVar11;
  psVar17 = psVar29;
  FUN_00a1c9ba();
  pcVar21 = "subtype";
  FUN_009bafbc();
  FUN_00a1c9ba();
  std::string::string(psVar17,(string *)pcVar21);
  lVar10 = FUN_008911e2();
  bVar7 = *(byte *)(lVar10 + 0x70);
  if ((bVar7 & 1) == 0) {
    psVar17 = (string *)(ulonglong)(bVar7 >> 1);
  }
  else {
    psVar17 = *(string **)(lVar10 + 0x78);
  }
  psVar26 = local_58;
  if ((local_60 & 1) == 0) {
    psVar26 = (string *)(ulonglong)(local_60 >> 1);
  }
  psVar23 = psVar26;
  if (psVar17 < psVar26) {
    psVar23 = psVar17;
  }
  if (psVar23 == (string *)0x0) {
LAB_0093c56d:
    if (psVar26 != psVar17) goto LAB_0093c57c;
    uVar11 = 1;
LAB_0093cc81:
    bVar31 = false;
  }
  else {
    param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar23,(size_t)param_3);
    if (iVar8 == 0) goto LAB_0093c56d;
LAB_0093c57c:
    lVar10 = FUN_008911e2();
    bVar7 = *(byte *)(lVar10 + 0x88);
    if ((bVar7 & 1) == 0) {
      psVar17 = (string *)(ulonglong)(bVar7 >> 1);
    }
    else {
      psVar17 = *(string **)(lVar10 + 0x90);
    }
    psVar26 = local_58;
    if ((local_60 & 1) == 0) {
      psVar26 = (string *)(ulonglong)(local_60 >> 1);
    }
    psVar23 = psVar26;
    if (psVar17 < psVar26) {
      psVar23 = psVar17;
    }
    if (psVar23 == (string *)0x0) {
LAB_0093c5f6:
      if (psVar26 == psVar17) {
        uVar11 = 2;
        goto LAB_0093cc81;
      }
    }
    else {
      param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar23,(size_t)param_3);
      if (iVar8 == 0) goto LAB_0093c5f6;
    }
    lVar10 = FUN_008911e2();
    bVar7 = *(byte *)(lVar10 + 0xa0);
    if ((bVar7 & 1) == 0) {
      psVar17 = (string *)(ulonglong)(bVar7 >> 1);
    }
    else {
      psVar17 = *(string **)(lVar10 + 0xa8);
    }
    psVar26 = local_58;
    if ((local_60 & 1) == 0) {
      psVar26 = (string *)(ulonglong)(local_60 >> 1);
    }
    psVar23 = psVar26;
    if (psVar17 < psVar26) {
      psVar23 = psVar17;
    }
    if (psVar23 == (string *)0x0) {
LAB_0093c67f:
      if (psVar26 == psVar17) {
        uVar11 = 4;
        goto LAB_0093cc81;
      }
    }
    else {
      param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar23,(size_t)param_3);
      if (iVar8 == 0) goto LAB_0093c67f;
    }
    lVar10 = FUN_008911e2();
    bVar7 = *(byte *)(lVar10 + 0xb8);
    if ((bVar7 & 1) == 0) {
      psVar17 = (string *)(ulonglong)(bVar7 >> 1);
    }
    else {
      psVar17 = *(string **)(lVar10 + 0xc0);
    }
    psVar26 = local_58;
    if ((local_60 & 1) == 0) {
      psVar26 = (string *)(ulonglong)(local_60 >> 1);
    }
    psVar23 = psVar26;
    if (psVar17 < psVar26) {
      psVar23 = psVar17;
    }
    if (psVar23 == (string *)0x0) {
LAB_0093c708:
      if (psVar26 == psVar17) {
        uVar11 = 8;
        goto LAB_0093cc81;
      }
    }
    else {
      param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar23,(size_t)param_3);
      if (iVar8 == 0) goto LAB_0093c708;
    }
    lVar10 = FUN_008911e2();
    bVar7 = *(byte *)(lVar10 + 0xd0);
    if ((bVar7 & 1) == 0) {
      psVar17 = (string *)(ulonglong)(bVar7 >> 1);
    }
    else {
      psVar17 = *(string **)(lVar10 + 0xd8);
    }
    psVar26 = local_58;
    if ((local_60 & 1) == 0) {
      psVar26 = (string *)(ulonglong)(local_60 >> 1);
    }
    psVar23 = psVar26;
    if (psVar17 < psVar26) {
      psVar23 = psVar17;
    }
    if (psVar23 == (string *)0x0) {
LAB_0093c791:
      if (psVar26 == psVar17) {
        uVar11 = 0x10;
        goto LAB_0093cc81;
      }
    }
    else {
      param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar23,(size_t)param_3);
      if (iVar8 == 0) goto LAB_0093c791;
    }
    lVar10 = FUN_008911e2();
    bVar7 = *(byte *)(lVar10 + 0xe8);
    if ((bVar7 & 1) == 0) {
      psVar17 = (string *)(ulonglong)(bVar7 >> 1);
    }
    else {
      psVar17 = *(string **)(lVar10 + 0xf0);
    }
    psVar26 = local_58;
    if ((local_60 & 1) == 0) {
      psVar26 = (string *)(ulonglong)(local_60 >> 1);
    }
    psVar23 = psVar26;
    if (psVar17 < psVar26) {
      psVar23 = psVar17;
    }
    if (psVar23 == (string *)0x0) {
LAB_0093c81a:
      if (psVar26 == psVar17) {
        uVar11 = 0x20;
        goto LAB_0093cc81;
      }
    }
    else {
      param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar23,(size_t)param_3);
      if (iVar8 == 0) goto LAB_0093c81a;
    }
    lVar10 = FUN_008911e2();
    bVar7 = *(byte *)(lVar10 + 0x100);
    if ((bVar7 & 1) == 0) {
      psVar17 = (string *)(ulonglong)(bVar7 >> 1);
    }
    else {
      psVar17 = *(string **)(lVar10 + 0x108);
    }
    psVar26 = local_58;
    if ((local_60 & 1) == 0) {
      psVar26 = (string *)(ulonglong)(local_60 >> 1);
    }
    psVar23 = psVar26;
    if (psVar17 < psVar26) {
      psVar23 = psVar17;
    }
    if (psVar23 == (string *)0x0) {
LAB_0093c8a3:
      if (psVar26 == psVar17) {
        uVar11 = 0x40;
        goto LAB_0093cc81;
      }
    }
    else {
      param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar23,(size_t)param_3);
      if (iVar8 == 0) goto LAB_0093c8a3;
    }
    lVar10 = FUN_008911e2();
    bVar7 = *(byte *)(lVar10 + 0x118);
    if ((bVar7 & 1) == 0) {
      psVar17 = (string *)(ulonglong)(bVar7 >> 1);
    }
    else {
      psVar17 = *(string **)(lVar10 + 0x120);
    }
    psVar26 = local_58;
    if ((local_60 & 1) == 0) {
      psVar26 = (string *)(ulonglong)(local_60 >> 1);
    }
    psVar23 = psVar26;
    if (psVar17 < psVar26) {
      psVar23 = psVar17;
    }
    if (psVar23 != (string *)0x0) {
      param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar23,(size_t)param_3);
      if (iVar8 == 0) goto LAB_0093c92c;
LAB_0093c940:
      lVar10 = FUN_008911e2();
      bVar7 = *(byte *)(lVar10 + 0x130);
      if ((bVar7 & 1) == 0) {
        psVar17 = (string *)(ulonglong)(bVar7 >> 1);
      }
      else {
        psVar17 = *(string **)(lVar10 + 0x138);
      }
      psVar26 = local_58;
      if ((local_60 & 1) == 0) {
        psVar26 = (string *)(ulonglong)(local_60 >> 1);
      }
      psVar23 = psVar26;
      if (psVar17 < psVar26) {
        psVar23 = psVar17;
      }
      if (psVar23 == (string *)0x0) {
LAB_0093c9ba:
        if (psVar26 == psVar17) {
          uVar11 = 0x100;
          goto LAB_0093cc81;
        }
      }
      else {
        param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar23,(size_t)param_3);
        if (iVar8 == 0) goto LAB_0093c9ba;
      }
      lVar10 = FUN_008911e2();
      bVar7 = *(byte *)(lVar10 + 0x148);
      if ((bVar7 & 1) == 0) {
        psVar17 = (string *)(ulonglong)(bVar7 >> 1);
      }
      else {
        psVar17 = *(string **)(lVar10 + 0x150);
      }
      psVar26 = local_58;
      if ((local_60 & 1) == 0) {
        psVar26 = (string *)(ulonglong)(local_60 >> 1);
      }
      psVar23 = psVar26;
      if (psVar17 < psVar26) {
        psVar23 = psVar17;
      }
      if (psVar23 == (string *)0x0) {
LAB_0093ca43:
        if (psVar26 == psVar17) {
          uVar11 = 0x200;
          goto LAB_0093cc81;
        }
      }
      else {
        param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar23,(size_t)param_3);
        if (iVar8 == 0) goto LAB_0093ca43;
      }
      lVar10 = FUN_008911e2();
      bVar7 = *(byte *)(lVar10 + 0x160);
      if ((bVar7 & 1) == 0) {
        psVar17 = (string *)(ulonglong)(bVar7 >> 1);
      }
      else {
        psVar17 = *(string **)(lVar10 + 0x168);
      }
      psVar26 = local_58;
      if ((local_60 & 1) == 0) {
        psVar26 = (string *)(ulonglong)(local_60 >> 1);
      }
      psVar23 = psVar26;
      if (psVar17 < psVar26) {
        psVar23 = psVar17;
      }
      if (psVar23 == (string *)0x0) {
LAB_0093cacc:
        if (psVar26 == psVar17) {
          uVar11 = 0x400;
          goto LAB_0093cc81;
        }
      }
      else {
        param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar23,(size_t)param_3);
        if (iVar8 == 0) goto LAB_0093cacc;
      }
      lVar10 = FUN_008911e2();
      bVar7 = *(byte *)(lVar10 + 0x178);
      if ((bVar7 & 1) == 0) {
        psVar17 = (string *)(ulonglong)(bVar7 >> 1);
      }
      else {
        psVar17 = *(string **)(lVar10 + 0x180);
      }
      psVar26 = local_58;
      if ((local_60 & 1) == 0) {
        psVar26 = (string *)(ulonglong)(local_60 >> 1);
      }
      psVar23 = psVar26;
      if (psVar17 < psVar26) {
        psVar23 = psVar17;
      }
      if (psVar23 == (string *)0x0) {
LAB_0093cb55:
        if (psVar26 == psVar17) {
          uVar11 = 0x800;
          goto LAB_0093cc81;
        }
      }
      else {
        param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar23,(size_t)param_3);
        if (iVar8 == 0) goto LAB_0093cb55;
      }
      lVar10 = FUN_008911e2();
      bVar7 = *(byte *)(lVar10 + 400);
      if ((bVar7 & 1) == 0) {
        psVar17 = (string *)(ulonglong)(bVar7 >> 1);
      }
      else {
        psVar17 = *(string **)(lVar10 + 0x198);
      }
      psVar26 = local_58;
      if ((local_60 & 1) == 0) {
        psVar26 = (string *)(ulonglong)(local_60 >> 1);
      }
      psVar23 = psVar26;
      if (psVar17 < psVar26) {
        psVar23 = psVar17;
      }
      if (psVar23 == (string *)0x0) {
LAB_0093cbde:
        if (psVar26 == psVar17) {
          uVar11 = 0x1000;
          goto LAB_0093cc81;
        }
      }
      else {
        param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar23,(size_t)param_3);
        if (iVar8 == 0) goto LAB_0093cbde;
      }
      lVar10 = FUN_008911e2();
      bVar7 = *(byte *)(lVar10 + 0x1a8);
      if ((bVar7 & 1) == 0) {
        psVar17 = (string *)(ulonglong)(bVar7 >> 1);
      }
      else {
        psVar17 = *(string **)(lVar10 + 0x1b0);
      }
      if ((local_60 & 1) == 0) {
        local_58 = (string *)(ulonglong)(local_60 >> 1);
      }
      psVar23 = local_58;
      if (psVar17 < local_58) {
        psVar23 = psVar17;
      }
      if (psVar23 == (string *)0x0) {
LAB_0093cc67:
        if (local_58 == psVar17) {
          bVar31 = true;
          uVar11 = 0x2000;
          goto LAB_0093cc88;
        }
      }
      else {
        param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
        iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar23,(size_t)param_3);
        if (iVar8 == 0) goto LAB_0093cc67;
      }
      lVar10 = FUN_008e4ece();
      uVar11 = *(undefined8 *)(lVar10 + 0x38);
      goto LAB_0093cc81;
    }
LAB_0093c92c:
    if (psVar26 != psVar17) goto LAB_0093c940;
    bVar31 = true;
    uVar11 = 0x80;
  }
LAB_0093cc88:
  *(undefined8 *)(psVar2 + 0x38 + (longlong)psVar29) = uVar11;
  psVar17 = psVar29;
  (**(code **)(**(longlong **)unaff_RSI + 0x48))();
  std::string::string(psVar17,psVar23);
  if ((local_118 & 1) == 0) {
    local_110 = (void *)(ulonglong)(local_118 >> 1);
  }
  pvVar12 = (void *)(*(longlong *)(psVar2 + 0x20 + (longlong)psVar29) -
                    *(longlong *)(psVar2 + 0x18 + (longlong)psVar29));
  psVar17 = psVar29;
  if (pvVar12 < local_110) {
    FUN_0088d550();
  }
  else if (local_110 < pvVar12) {
    psVar17 = (string *)(*(longlong *)(psVar2 + 0x18 + (longlong)psVar29) + (longlong)local_110);
    *(string **)(psVar2 + 0x20 + (longlong)psVar29) = psVar17;
  }
  _memcpy(psVar17,local_110,(size_t)param_3);
  FUN_00a1c9ba();
  FUN_009bafbc();
  lVar10 = FUN_00a1c9ba();
  sVar3 = *(string *)(lVar10 + 0x68);
  psVar17 = psVar2 + 0x59 + (longlong)psVar29;
  psVar17[-1] = sVar3;
  *psVar17 = (string)0x0;
  *(undefined2 *)(psVar17 + 0x324) = 0;
  if (sVar3 != (string)0x0) {
    FUN_00a1e028();
    if (local_b0 == 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthDataLicenseDb(petpub::AuthChain &, license_services::LsAuthorizationPtr, license_services::LsLicensePtr, size_t, bool &, const boost::posix_time::ptime &, bool, bool, std::vector<pet::authorize::DatabaseCommitItem> *, bool, uint64_t, int32_t)"
                   ,&DAT_00002230);
      FUN_009bd14b();
    }
    lVar10 = (*(longlong **)(local_b0 + 8))[1] - **(longlong **)(local_b0 + 8);
    if (lVar10 != 0) {
      local_a0 = (string *)(lVar10 >> 5);
      psVar26 = psVar2 + 0x60 + (longlong)psVar29;
      psVar23 = psVar2 + 0x160 + (longlong)psVar29;
      psVar27 = (string *)((longlong)&MACH_HEADER.magic + 1);
      bVar5 = true;
      bVar4 = true;
      local_88 = 0;
      uVar30 = 0;
      pcVar21 = (char *)psVar29;
      local_98 = plVar1;
      do {
        FUN_00a5c9de();
        if (local_1a8 != (string *)0x0) {
          FUN_00a1c9ba();
          FUN_009bafbc();
          lVar10 = FUN_00a1c9ba();
          if (*(char *)(lVar10 + 0xc1) != '\0') {
            FUN_00a609be();
            FUN_009bafbc();
            lVar10 = FUN_00a609be();
            if (*(int *)(lVar10 + 0xd0) == -0x80000000) {
              FUN_00939176();
              FUN_008e8fb4();
              FUN_008e844a();
              psVar17[0x324] = (string)0x1;
              psVar13 = psVar17;
              if (bVar31) {
                FUN_00a609be();
                FUN_009bafbc();
                lVar10 = FUN_00a609be();
                *(uint *)(psVar26 + 0x78) = (uint)*(byte *)(lVar10 + 0x30);
                psVar26[0x8a] = (string)0x1;
                FUN_00a609be();
                FUN_009bafbc();
                lVar10 = FUN_00a609be();
                *(uint *)(psVar26 + 0x7c) = (uint)*(byte *)(lVar10 + 0x31);
                psVar26[0x8b] = (string)0x1;
                psVar13 = (string *)FUN_00938842();
              }
              if (psVar26[0x83] == (string)0x0) {
                if (*(longlong *)(psVar26 + 0x58) == 0) {
                  if (local_res8 != 0) {
                    FUN_00925fd0();
                    FUN_00926010();
                    pcVar21 = 
                    "static void pace::AuthorizationVerifier::populateAuthDataLicenseDb(petpub::AuthChain &, license_services::LsAuthorizationPtr, license_services::LsLicensePtr, size_t, bool &, const boost::posix_time::ptime &, bool, bool, std::vector<pet::authorize::DatabaseCommitItem> *, bool, uint64_t, int32_t)"
                    ;
                    FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthDataLicenseDb(petpub::AuthChain &, license_services::LsAuthorizationPtr, license_services::LsLicensePtr, size_t, bool &, const boost::posix_time::ptime &, bool, bool, std::vector<pet::authorize::DatabaseCommitItem> *, bool, uint64_t, int32_t)"
                                 ,&DAT_00002268);
                    FUN_009bd14b();
                  }
                  bVar4 = false;
                }
                else if (psVar26[0x82] == (string)0x0) {
                  if (local_res8 != 0) {
                    FUN_00925fd0();
                    FUN_00926010();
                    pcVar21 = 
                    "static void pace::AuthorizationVerifier::populateAuthDataLicenseDb(petpub::AuthChain &, license_services::LsAuthorizationPtr, license_services::LsLicensePtr, size_t, bool &, const boost::posix_time::ptime &, bool, bool, std::vector<pet::authorize::DatabaseCommitItem> *, bool, uint64_t, int32_t)"
                    ;
                    FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthDataLicenseDb(petpub::AuthChain &, license_services::LsAuthorizationPtr, license_services::LsLicensePtr, size_t, bool &, const boost::posix_time::ptime &, bool, bool, std::vector<pet::authorize::DatabaseCommitItem> *, bool, uint64_t, int32_t)"
                                 ,&DAT_00002285);
                    FUN_009bd14b();
                  }
                }
                else {
                  local_88 = CONCAT71((int7)((ulonglong)psVar13 >> 8),1);
                  if (local_res8 != 0) {
                    FUN_00925fd0();
                    FUN_00926010();
                    pcVar21 = 
                    "static void pace::AuthorizationVerifier::populateAuthDataLicenseDb(petpub::AuthChain &, license_services::LsAuthorizationPtr, license_services::LsLicensePtr, size_t, bool &, const boost::posix_time::ptime &, bool, bool, std::vector<pet::authorize::DatabaseCommitItem> *, bool, uint64_t, int32_t)"
                    ;
                    FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthDataLicenseDb(petpub::AuthChain &, license_services::LsAuthorizationPtr, license_services::LsLicensePtr, size_t, bool &, const boost::posix_time::ptime &, bool, bool, std::vector<pet::authorize::DatabaseCommitItem> *, bool, uint64_t, int32_t)"
                                 ,&DAT_00002277);
                    FUN_009bd14b();
                  }
                }
                bVar5 = false;
              }
              if (((byte)psVar26[0x40] & 1) == 0) {
                uVar16 = (ulonglong)((byte)psVar26[0x40] >> 1);
              }
              else {
                uVar16 = *(ulonglong *)(psVar26 + 0x48);
              }
              *psVar17 = (string)(uVar16 != 0);
              goto LAB_0093d50f;
            }
          }
          FUN_00a609be();
          FUN_009bafbc();
          lVar10 = FUN_00a609be();
          if (*(int *)(lVar10 + 0xd0) == -0x7ffffffe) {
            FUN_00a609be();
            pcVar24 = "storageId";
            FUN_009bafbc();
            lVar10 = FUN_00a609be();
            *(undefined4 *)(psVar26 + 0xf8) = *(undefined4 *)(lVar10 + 0xd0);
            (**(code **)(*(longlong *)local_1a8 + 0x48))();
            std::string::string((string *)pcVar21,(string *)pcVar24);
            psVar13 = local_1a0;
            if (((ulonglong)local_1a8 & 1) == 0) {
              psVar13 = (string *)(ulonglong)((byte)local_1a8 >> 1);
            }
            psVar14 = (string *)(*(longlong *)(psVar26 + 0x108) - *(longlong *)psVar23);
            psVar18 = psVar23;
            if (psVar14 < psVar13) {
              FUN_0088d550();
            }
            else if (psVar13 < psVar14) {
              *(string **)(psVar26 + 0x108) = psVar13 + *(longlong *)psVar23;
            }
            _memcpy(psVar18,psVar13,(size_t)param_3);
            FUN_00a609be();
            pcVar21 = "periodStartDate";
            FUN_009bafbc();
            FUN_00a609be();
            std::string::operator=(psVar18,(string *)pcVar21);
            FUN_00a609be();
            pcVar21 = "periodStopDate";
            FUN_009bafbc();
            FUN_00a609be();
            std::string::operator=(psVar18,(string *)pcVar21);
            *(undefined8 *)(psVar26 + 0x148) = 0;
            psVar26[0x172] = (string)0x0;
            FUN_00a609be();
            FUN_009bafbc();
            FUN_00a609be();
            local_90 = FUN_009f3f64();
            FUN_00a609be();
            FUN_009bafbc();
            FUN_00a609be();
            local_a8 = FUN_009f3f64();
            psVar26[0x173] = (string)0x0;
            lVar10 = FUN_009585b8();
            if (local_90 == lVar10) {
              uVar16 = FUN_009585b8();
              if (local_a8 == uVar16) {
LAB_0093d29c:
                pcVar21 = (char *)0x0;
              }
              else {
                if (((byte)(psVar2 + 0x178)[(longlong)psVar29] & 1) == 0) {
                  uVar16 = (ulonglong)((byte)(psVar2 + 0x178)[(longlong)psVar29] >> 1);
                }
                else {
                  uVar16 = *(ulonglong *)(psVar26 + 0x120);
                }
                pcVar21 = (char *)CONCAT71((int7)((ulonglong)psVar18 >> 8),uVar16 == 0);
              }
            }
            else {
              if (((byte)(psVar2 + 400)[(longlong)psVar29] & 1) == 0) {
                uVar16 = (ulonglong)((byte)(psVar2 + 400)[(longlong)psVar29] >> 1);
              }
              else {
                uVar16 = *(ulonglong *)(psVar26 + 0x138);
              }
              if (uVar16 == 0) {
                pcVar21 = (char *)CONCAT71((int7)((ulonglong)psVar18 >> 8),1);
              }
              else {
                uVar16 = FUN_009585b8();
                if (local_a8 == uVar16) goto LAB_0093d29c;
                pcVar21 = (char *)CONCAT71((int7)(local_a8 >> 8),local_90 < (longlong)local_a8);
              }
            }
            psVar26[0x173] = SUB81(pcVar21,0);
            if (param_5 != 0) {
              lVar10 = FUN_009585b8();
              if (local_90 == lVar10) {
                uVar16 = 0;
              }
              else {
                uVar16 = FUN_009f39a9();
              }
              uVar20 = FUN_009585b8();
              uVar15 = 0xffffffffffffffff;
              if (local_a8 != uVar20) {
                uVar15 = FUN_009f39a9();
              }
              if ((param_5 < uVar16) || (uVar15 < param_5)) {
                psVar29[*local_98 + 0x1d3] = (string)0x0;
                sVar3 = (string)0x0;
              }
              else {
                sVar3 = psVar29[*local_98 + 0x1d3];
              }
              if (sVar3 == (string)0x0) {
                bVar4 = false;
                bVar5 = false;
              }
              pvVar12 = (void *)((longlong)&MACH_HEADER.magic + 1);
              FUN_0097e7bc(1,1);
              FUN_00953fa0();
              local_f8[0] = local_200;
              FUN_009f4dea();
              psVar13 = psVar29 + *local_98 + 0x1b0;
              if (((byte)*psVar13 & 1) != 0) {
                operator_delete(pvVar12);
              }
              *(undefined8 *)(psVar13 + 0x10) = local_1f0;
              *(string **)(psVar13 + 8) = local_1f8;
              *(ulonglong *)psVar13 = local_200;
              psVar29[*local_98 + 0x1d9] = (string)0x1;
              pcVar21 = (char *)local_1f8;
            }
            psVar26[799] = (string)0x1;
            if (((ulonglong)local_1a8 & 1) != 0) {
              operator_delete(pcVar21);
            }
            uVar30 = 1;
          }
        }
LAB_0093d50f:
        if (local_a0 <= psVar27) goto LAB_0093d53b;
        psVar27 = psVar27 + 1;
      } while( true );
    }
    bVar4 = true;
    local_98 = (longlong *)((ulonglong)local_98._4_4_ << 0x20);
    local_88 = 0;
    bVar5 = true;
    goto LAB_0093d581;
  }
  local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
  bVar4 = true;
  local_88 = 0;
  bVar5 = true;
LAB_0093d977:
  psVar26 = psVar2 + 0x48 + (longlong)psVar29;
  *(ulonglong *)psVar26 = 0;
  if (local_res20 == '\0') {
    uVar16 = 0;
  }
  else {
    FUN_00a1d3ee();
    if (local_b0 == 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthDataLicenseDb(petpub::AuthChain &, license_services::LsAuthorizationPtr, license_services::LsLicensePtr, size_t, bool &, const boost::posix_time::ptime &, bool, bool, std::vector<pet::authorize::DatabaseCommitItem> *, bool, uint64_t, int32_t)"
                   ,&DAT_00002371);
      FUN_009bd14b();
    }
    lVar10 = (*(longlong **)(local_b0 + 8))[1];
    if ((lVar10 != **(longlong **)(local_b0 + 8)) &&
       (FUN_00a5a60e(lVar10,0), local_1a8 != (string *)0x0)) {
      FUN_00a432fe();
      FUN_009bafbc();
      lVar10 = FUN_00a432fe();
      iVar8 = *(int *)(lVar10 + 0xa4);
      lVar10 = FUN_008e4ece();
      if (iVar8 == *(int *)(lVar10 + 0x74)) {
        FUN_00a432fe();
        FUN_009bafbc();
        FUN_00a432fe();
        FUN_0094e400();
        pdVar19 = &MACH_HEADER.cpusubtype;
        if (7 < (ulonglong)((longlong)local_1a0 - (longlong)local_1a8)) {
          uVar9 = (uint)(byte)local_1a8[7];
          pdVar19 = (dword *)((ulonglong)((char)local_1a8[7] < '\0') * 0x1000 + 0x1000 |
                              *(ulonglong *)psVar26 |
                             (ulonglong)((uVar9 & 0x10) >> 4) * 0x40000 + 0x40000 |
                             (ulonglong)((uVar9 & 0x20) >> 5) * 0x10000 + 0x10000 |
                             (ulonglong)((uVar9 & 0x40) >> 6) * 0x4000 + 0x4000);
          *(dword **)psVar26 = pdVar19;
        }
        if (local_1a8 != (string *)0x0) {
          local_1a0 = local_1a8;
          operator_delete(pdVar19);
        }
      }
    }
    if (*(ulonglong *)psVar26 == 0) {
      *(ulonglong *)psVar26 = 0x55000;
    }
    uVar16 = *(ulonglong *)psVar26;
  }
  sVar3 = psVar17[0x325];
  if (psVar17[0x324] == (string)0x0) {
    uVar20 = (ulonglong)(byte)sVar3 + 1;
    iVar8 = 0x5a;
    if (sVar3 != (string)0x0) {
      iVar8 = 0x32;
    }
LAB_0093db8b:
    *(ulonglong *)psVar26 = uVar16 | uVar20;
    psVar23 = psVar2 + 0x50 + (longlong)psVar29;
    *(int *)psVar23 = iVar8;
    if (((ulonglong)local_98 & 1) != 0) {
      *(int *)psVar23 = 0x2d;
    }
  }
  else {
    if (sVar3 == (string)0x0) {
      iVar8 = 0x46;
      uVar20 = 4;
      goto LAB_0093db8b;
    }
    *(ulonglong *)psVar26 = uVar16 | 8;
    psVar23 = psVar2 + 0x50 + (longlong)psVar29;
    *(int *)psVar23 = 0x1e;
  }
  psVar27 = psVar29;
  FUN_00a1c9ba();
  FUN_009bafbc();
  lVar10 = FUN_00a1c9ba();
  uVar9 = *(uint *)(lVar10 + 0x60);
  *(ulonglong *)psVar26 =
       *(ulonglong *)psVar26 | (ulonglong)((uVar9 & 8) >> 3) * 0x100000 + 0x100000;
  FUN_00a1c9ba();
  pcVar21 = "termsStrict";
  FUN_009bafbc();
  lVar28 = FUN_00a1c9ba();
  lVar10 = *(longlong *)(unaff_RDI + 0x58);
  if (*(char *)(lVar28 + 0xc0) == '\0') {
    if ((uVar9 & 8) == 0) {
      if (lVar10 == 0x10) {
LAB_0093dcb7:
        *(int *)psVar23 = 0;
        bVar5 = false;
      }
    }
    else {
      if (lVar10 != 0x10) goto LAB_0093dcb7;
      *(int *)psVar23 = 0x14;
      *(undefined8 *)(unaff_RDI + 0x1a0) = 1;
      FUN_008911e2();
      std::string::string(psVar27,(string *)pcVar21);
      FUN_00958220();
      if (((ulonglong)local_1a8 & 1) != 0) {
        operator_delete(psVar27);
      }
    }
  }
  else if (lVar10 == 0x10) {
    *(int *)psVar23 = 0x14;
  }
  FUN_00a521fe();
  FUN_009bafbc();
  lVar10 = FUN_00a521fe();
  if (*(char *)(lVar10 + 0x174) == '\0') {
LAB_0093dd39:
    uVar16 = 0x10;
  }
  else {
    FUN_00a1c9ba();
    FUN_009bafbc();
    lVar10 = FUN_00a1c9ba();
    uVar16 = 0x20;
    if (*(char *)(lVar10 + 0xe0) == '\0') goto LAB_0093dd39;
  }
  *(ulonglong *)psVar26 = *(ulonglong *)psVar26 | uVar16;
  FUN_00a1c9ba();
  FUN_009bafbc();
  lVar10 = FUN_00a1c9ba();
  *(ulonglong *)psVar26 = *(ulonglong *)psVar26 | (ulonglong)*(byte *)(lVar10 + 0xc0) * 0x40 + 0x40;
  bVar7 = FUN_00a1de8c();
  *(ulonglong *)psVar26 = *(ulonglong *)psVar26 | (ulonglong)bVar7 * 0x100 + 0x100;
  FUN_00a1c9ba();
  FUN_009bafbc();
  lVar10 = FUN_00a1c9ba();
  *(ulonglong *)psVar26 =
       *(ulonglong *)psVar26 |
       (ulonglong)((*(uint *)(lVar10 + 0x60) >> 0xb & 1) == 0) * 0x400 + 0x400;
  FUN_00a521fe();
  FUN_009bafbc();
  lVar10 = FUN_00a521fe();
  *(undefined4 *)(psVar2 + 0x54 + (longlong)psVar29) = *(undefined4 *)(lVar10 + 0xb8);
  psVar27 = psVar2;
  FUN_00a521fe();
  pcVar21 = "state";
  FUN_009bafbc();
  FUN_00a521fe();
  std::string::string(psVar27,(string *)pcVar21);
  lVar10 = FUN_008911e2();
  bVar7 = *(byte *)(lVar10 + 0x250);
  if ((bVar7 & 1) == 0) {
    psVar27 = (string *)(ulonglong)(bVar7 >> 1);
  }
  else {
    psVar27 = *(string **)(lVar10 + 600);
  }
  psVar13 = local_1a0;
  if (((ulonglong)local_1a8 & 1) == 0) {
    psVar13 = (string *)(ulonglong)((byte)local_1a8 >> 1);
  }
  psVar18 = psVar2 + 0x58 + (longlong)psVar29;
  psVar14 = psVar13;
  if (psVar27 < psVar13) {
    psVar14 = psVar27;
  }
  if (psVar14 == (string *)0x0) {
LAB_0093defb:
    if (psVar13 != psVar27) goto LAB_0093df04;
LAB_0093df8f:
    if (bVar5) {
      *(undefined8 *)(psVar2 + 0x40 + (longlong)psVar29) = 1;
      psVar27 = psVar29;
      FUN_008911e2();
      std::string::operator=(psVar27,psVar14);
      FUN_00a1c9ba();
      FUN_009bafbc();
      lVar10 = FUN_00a1c9ba();
      if ((((*(char *)(lVar10 + 0xc0) != '\0') &&
           (*(int *)(psVar2 + 8 + (longlong)psVar29) != 0x4801f777)) ||
          ((*local_d0 == (string)0x0 && (*psVar18 != (string)0x0)))) &&
         (iVar8 = *(int *)psVar23, iVar8 < *(int *)(unaff_RDI + 0x24))) goto LAB_0093e2c5;
    }
    else {
      if (!bVar4) {
        *(undefined8 *)(psVar2 + 0x40 + (longlong)psVar29) = 4;
        psVar27 = psVar29;
        FUN_008911e2();
        std::string::operator=(psVar27,psVar14);
        goto LAB_0093e11f;
      }
      *(undefined8 *)(psVar2 + 0x40 + (longlong)psVar29) = 8;
      psVar27 = psVar29;
      FUN_008911e2();
      std::string::operator=(psVar27,psVar14);
      *(int *)psVar23 = 1;
      local_88 = local_88 & 0xffffffffffffff01;
      *psVar17 = (string)0x0;
LAB_0093e1d1:
      FUN_00a1c9ba();
      FUN_009bafbc();
      lVar10 = FUN_00a1c9ba();
      if ((*(char *)(lVar10 + 0xc0) != '\0') ||
         ((*local_d0 == (string)0x0 && (*psVar18 != (string)0x0)))) {
        if (*(int *)psVar23 < *(int *)(unaff_RDI + 0x24)) {
          *(int *)(unaff_RDI + 0x24) = *(int *)psVar23;
        }
        *(undefined1 *)(unaff_RDI + 0x20) = 0;
        if ((char)local_88 == '\0') {
          *(undefined1 *)(unaff_RDI + 0x21) = 0;
        }
      }
    }
  }
  else {
    param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar14,(size_t)param_3);
    if (iVar8 == 0) goto LAB_0093defb;
LAB_0093df04:
    lVar10 = FUN_008911e2();
    bVar7 = *(byte *)(lVar10 + 0x298);
    if ((bVar7 & 1) == 0) {
      psVar27 = (string *)(ulonglong)(bVar7 >> 1);
    }
    else {
      psVar27 = *(string **)(lVar10 + 0x2a0);
    }
    psVar13 = local_1a0;
    if (((ulonglong)local_1a8 & 1) == 0) {
      psVar13 = (string *)(ulonglong)((byte)local_1a8 >> 1);
    }
    psVar14 = psVar13;
    if (psVar27 < psVar13) {
      psVar14 = psVar27;
    }
    if (psVar14 == (string *)0x0) {
LAB_0093df8a:
      if (psVar13 == psVar27) goto LAB_0093df8f;
    }
    else {
      param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar14,(size_t)param_3);
      if (iVar8 == 0) goto LAB_0093df8a;
    }
    lVar10 = FUN_008911e2();
    bVar7 = *(byte *)(lVar10 + 0x268);
    if ((bVar7 & 1) == 0) {
      psVar27 = (string *)(ulonglong)(bVar7 >> 1);
    }
    else {
      psVar27 = *(string **)(lVar10 + 0x270);
    }
    psVar13 = local_1a0;
    if (((ulonglong)local_1a8 & 1) == 0) {
      psVar13 = (string *)(ulonglong)((byte)local_1a8 >> 1);
    }
    psVar14 = psVar13;
    if (psVar27 < psVar13) {
      psVar14 = psVar27;
    }
    if (psVar14 == (string *)0x0) {
LAB_0093e109:
      if (psVar13 == psVar27) {
        *(undefined8 *)(psVar2 + 0x40 + (longlong)psVar29) = 4;
LAB_0093e11f:
        *(int *)psVar23 = 0;
        local_88 = 0;
        goto LAB_0093e1d1;
      }
    }
    else {
      param_3 = (string *)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar14,(size_t)param_3);
      if (iVar8 == 0) goto LAB_0093e109;
    }
    lVar10 = FUN_008911e2();
    bVar7 = *(byte *)(lVar10 + 0x280);
    if ((bVar7 & 1) == 0) {
      psVar27 = (string *)(ulonglong)(bVar7 >> 1);
    }
    else {
      psVar27 = *(string **)(lVar10 + 0x288);
    }
    if (((ulonglong)local_1a8 & 1) == 0) {
      local_1a0 = (string *)(ulonglong)((byte)local_1a8 >> 1);
    }
    psVar13 = local_1a0;
    if (psVar27 < local_1a0) {
      psVar13 = psVar27;
    }
    if (psVar13 == (string *)0x0) {
      if (psVar27 <= local_1a0) goto LAB_0093e280;
LAB_0093e29b:
      psVar13 = psVar2 + 0x40 + (longlong)psVar29;
LAB_0093e2a8:
      *(undefined8 *)psVar13 = 2;
    }
    else {
      iVar8 = _memcmp((void *)(ulonglong)bVar7,psVar13,
                      (size_t)CONCAT71((int7)((ulonglong)param_3 >> 8),1));
      if ((local_1a0 < psVar27) || (iVar8 != 0)) goto LAB_0093e29b;
LAB_0093e280:
      psVar13 = psVar2 + 0x40 + (longlong)psVar29;
      if (psVar27 < local_1a0) goto LAB_0093e2a8;
      *(undefined8 *)psVar13 = 0x10;
    }
    iVar8 = 0;
    *(int *)psVar23 = 0;
    *psVar17 = (string)0x0;
    *(undefined2 *)(unaff_RDI + 0x20) = 0;
LAB_0093e2c5:
    *(int *)(unaff_RDI + 0x24) = iVar8;
  }
  sVar3 = *psVar18;
  psVar27 = psVar29;
  if (*(longlong *)(psVar2 + 0x30 + (longlong)psVar29) == 2) {
    if (((sVar3 == (string)0x0) || ((char)*psVar26 < '\0')) ||
       ((local_d8 != 0 && (psVar27 = local_d0, *local_d0 == (string)0x0)))) {
      *(undefined8 *)(psVar2 + 0x40 + (longlong)psVar29) = 0x20;
      psVar27 = (string *)0x0;
      *(int *)psVar23 = 0;
      *psVar17 = (string)0x0;
      *(undefined2 *)(unaff_RDI + 0x20) = 0;
      *(undefined4 *)(unaff_RDI + 0x24) = 0;
      goto LAB_0093e326;
    }
  }
  else {
LAB_0093e326:
    if (sVar3 == (string)0x0) goto LAB_0093e334;
  }
  *local_d0 = (string)0x1;
LAB_0093e334:
  if (((ulonglong)local_1a8 & 1) != 0) {
    operator_delete(psVar27);
  }
  if ((local_118 & 1) != 0) {
    operator_delete(psVar27);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(psVar27);
  }
  if ((local_c8 & 1) != 0) {
    operator_delete(psVar27);
  }
  return;
LAB_0093d53b:
  local_98 = (longlong *)CONCAT44(local_98._4_4_,uVar30);
LAB_0093d581:
  FUN_00a1c9ba();
  FUN_009bafbc();
  lVar10 = FUN_00a1c9ba();
  if (*(char *)(lVar10 + 0x50) != '\0') {
    FUN_00a1d152();
    if (local_90 == 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthDataLicenseDb(petpub::AuthChain &, license_services::LsAuthorizationPtr, license_services::LsLicensePtr, size_t, bool &, const boost::posix_time::ptime &, bool, bool, std::vector<pet::authorize::DatabaseCommitItem> *, bool, uint64_t, int32_t)"
                   ,&DAT_000022fd);
      FUN_009bd14b();
    }
    lVar10 = (*(longlong **)(local_90 + 8))[1] - **(longlong **)(local_90 + 8);
    if (lVar10 != 0) {
      local_e8 = CONCAT71(local_e8._1_7_,local_res10 & local_res8);
      local_a0 = psVar2 + 0xf0 + (longlong)psVar29;
      uVar16 = 1;
      do {
        FUN_00a59e2e();
        if (local_1a8 != (string *)0x0) {
          FUN_00a3ef7e();
          FUN_009bafbc();
          lVar28 = FUN_00a3ef7e();
          if (*(int *)(lVar28 + 0x88) == -0x80000000) {
            if (local_res8 == 0) {
              bVar31 = false;
            }
            else {
              FUN_00a1c9ba();
              FUN_009bafbc();
              FUN_00a1c9ba();
              bVar31 = false;
              if ((char)local_e8 != '\0') {
                FUN_00a3ef7e(0);
                FUN_009bafbc();
                lVar28 = FUN_00a3ef7e();
                bVar31 = (*(byte *)(lVar28 + 0x4c) & 2) == 0;
              }
            }
            FUN_0093e4ea(local_res8,bVar31,&local_a8,local_f8);
            param_3 = (string *)(ulonglong)param_6;
            FUN_0093ee92(local_f8[0] & 0xff,local_a8 & 0xff,param_3);
            psVar26 = local_a0;
            FUN_008ea352();
            FUN_008e969a();
            if (psVar26[0x28] == (string)0x0) {
              psVar17[0x325] = (string)0x1;
              if (psVar26[0x4a] == (string)0x0) {
                bVar4 = false;
                bVar5 = false;
              }
LAB_0093d8b2:
              if (local_a0[0x38] == (string)0x0) {
                sVar6 = (string)0x0;
              }
              else {
                sVar6 = (string)((byte)local_a0[0x49] ^ 1);
              }
            }
            else {
              FUN_00a3ef7e();
              FUN_009bafbc();
              lVar28 = FUN_00a3ef7e();
              if ((*(byte *)(lVar28 + 0x4c) & 1) != 0) {
                if (local_res8 != 0) {
                  FUN_00925fd0();
                  FUN_00926010();
                  FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthDataLicenseDb(petpub::AuthChain &, license_services::LsAuthorizationPtr, license_services::LsLicensePtr, size_t, bool &, const boost::posix_time::ptime &, bool, bool, std::vector<pet::authorize::DatabaseCommitItem> *, bool, uint64_t, int32_t)"
                               ,&DAT_0000233c);
                  FUN_009bd14b();
                }
                local_a0[0x4a] = (string)0x0;
              }
              sVar3 = local_a0[0x28];
              psVar17[0x325] = (string)0x1;
              if (local_a0[0x4a] == (string)0x0) {
                bVar4 = false;
                bVar5 = false;
              }
              sVar6 = (string)0x1;
              if (sVar3 == (string)0x0) goto LAB_0093d8b2;
            }
            *psVar17 = sVar6;
          }
        }
        if ((ulonglong)(lVar10 >> 5) <= uVar16) break;
        uVar16 = uVar16 + 1;
      } while( true );
    }
  }
  FUN_00a1c9ba();
  FUN_009bafbc();
  lVar10 = FUN_00a1c9ba();
  if ((*(char *)(lVar10 + 0xc1) == '\0') || (psVar17[0x324] != (string)0x0)) {
    FUN_00a1c9ba();
    FUN_009bafbc();
    lVar10 = FUN_00a1c9ba();
    if ((*(char *)(lVar10 + 0x50) == '\0') || (psVar17[0x325] != (string)0x0)) goto LAB_0093d977;
  }
  bVar4 = false;
  bVar5 = false;
  goto LAB_0093d977;
}


