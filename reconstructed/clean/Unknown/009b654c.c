// Function: FUN_009b654c
// Address: 009b654c
// Size: 5102 bytes
// Class: Unknown
// String references:
//   ", "
//   "data"
//   "digestMethod"
//   "key"
//   "pkStandardName"
//   "signatureMethod"
//   "RData"
//   "SData"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/liblicenseservices/DsigSig...
//   "The LsSignature pointer (pSignature) is Null."
//   "bool license_services::DsigSignatureVerifier::verifySignature(license_services::LsSignaturePtr, lic...
//   "Could not find a LsSignedDigest.canonicalVersion match for any schema version number between %d and...
//   "The LsSignedInfo objecy with uuid value %s does not have any LsSignedDigest objects in its digests ...
//   "The LsCertificateChain used to sign the object with selfRelation %s and uuid %s is not in the LsObj...
//   "LsSignedInfo.signatureValues not populated for the object with selfRelation %s and uuid %s."
//   "Wrong number of signature data values for the object with selfRelation %s and uuid %s. Expected 2, ...
//   "canonicalVersion"
//   "signerSerialNumber"
//   "valueBinary"
//   "signedDate"
//   ... +1 more

uint64_t FUN_009b654c(void **param_1,uint64_t param_2,void**param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  void *pvVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  code *pcVar12;
  ulong uVar13;
  byte *pbVar14;
  char *pcVar15;
  uint64_t *puVar16;
  void**ppuVar17;
  string *this;
  code *pcVar18;
  code *pcVar19;
  char *pcVar20;
  code *pcVar21;
  uint64_t uVar22;
  undefined7 uVar23;
  int64_t *arg1;
  code *pcVar24;
  int64_t this_ptr;
  int64_t **pplVar25;
  string *psVar26;
  bool bVar27;
  uint32_t uVar28;
  void*local_398;
  uint64_t local_390;
  uint64_t local_388;
  void*local_380;
  uint64_t local_378;
  uint64_t local_370;
  byte local_368 [24];
  byte local_350 [24];
  byte local_338 [24];
  byte local_320 [24];
  byte local_308;
  byte local_2f0 [24];
  byte local_2d8 [168];
  uint64_t local_230;
  byte local_228 [24];
  byte local_210 [24];
  byte local_1f8 [24];
  byte local_1e0 [24];
  int64_t *local_1c8;
  int64_t *local_1c0;
  int64_t *local_1b8;
  int64_t *local_1b0;
  int64_t *local_1a8;
  void *local_1a0;
  uint32_t local_198;
  uint32_t uStack_194;
  int64_t local_190;
  int64_t local_188;
  void**local_180;
  int64_t local_178;
  int64_t lStack_170;
  uint64_t local_168;
  void **local_158;
  code *local_150;
  code *local_148;
  int local_11c;
  byte local_118 [24];
  int64_t *local_100;
  byte local_f8;
  undefined7 uStack_f7;
  int64_t local_f0;
  uint64_t local_d8;
  code *local_d0;
  code *local_c8;
  uint64_t local_78;
  uint64_t uStack_70;
  uint64_t local_68;
  uint64_t local_60;
  code *local_58;
  code *pcStack_50;
  uint64_t local_48;
  void **local_40;
  int64_t *local_38;
  
  local_180 = param_3;
  local_60 = param_2;
  if (*arg1 == 0) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    uVar28 = FUN_00928ab0("bool license_services::DsigSignatureVerifier::verifySignature(license_services::LsSignaturePtr, license_services::LsRelation, std::string, license_services::SignatureDigestInfo *)"
                          ,0x44);
    FUN_009c78cb(uVar28,uVar7);
  }
  uVar22 = 0;
  local_11c = 0;
  local_198 = 0;
  local_370 = 0;
  local_378 = 0;
  local_398 = &local_390;
  local_388 = 0;
  local_390 = 0;
  uStack_194 = 1;
  local_380 = &local_378;
  do {
    FUN_00a5d14c();
    if ((uint64_t)(*(int64_t *)((int64_t)local_158[1] + 8) - *(int64_t *)local_158[1] >> 5) <=
        uVar22) {
      FUN_00925fd0();
      uVar7 = FUN_00926010();
      local_158 = (void **)&uStack_194;
      local_150 = FUN_009cac80;
      local_148 = FUN_009cefa0;
      FUN_00983230();
      FUN_009b86a2();
      FUN_009b86a2();
      FUN_009b86a2();
      pbVar14 = local_368;
      FUN_009bc5b8(pbVar14,local_118,local_350);
      local_150 = FUN_009b6370;
      local_148 = FUN_0094ef70;
      local_158 = (void **)&local_d8;
      FUN_00983230();
      local_150 = FUN_009b6370;
      local_148 = FUN_0094ef70;
      local_158 = param_1;
      FUN_00983230();
      if (((uint64_t)local_d8 & 1) != 0) {
        operator_delete(pbVar14);
      }
      if ((local_350[0] & 1) != 0) {
        operator_delete(pbVar14);
      }
      if ((local_368[0] & 1) != 0) {
        operator_delete(pbVar14);
      }
      if ((local_118[0] & 1) != 0) {
        operator_delete(pbVar14);
      }
      uVar28 = FUN_00928ab0("bool license_services::DsigSignatureVerifier::verifySignature(license_services::LsSignaturePtr, license_services::LsRelation, std::string, license_services::SignatureDigestInfo *)"
                            ,0x78);
      FUN_009c78cb(uVar28,uVar7);
      local_40 = (void **)0x0;
      break;
    }
    uVar28 = FUN_00a5d14c();
    FUN_00a5c5ee(uVar28,uVar22);
    uVar28 = FUN_00a5e99e();
    FUN_009bafbc(uVar28,"canonicalVersion");
    lVar8 = FUN_00a5e99e();
    uVar22 = uVar22 + 1;
  } while ((local_158 == (void **)0x0) || (local_40 = local_158, *(int *)(lVar8 + 0x30) != 1));
  FUN_00a5ecfc();
  pcVar15 = *(char **)local_158[1];
  if ((string *)pcVar15 == *(string **)((int64_t)local_158[1] + 8)) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    local_158 = (void **)(**(code **)((int64_t)*local_40 + 0x48))();
    local_150 = FUN_009b6370;
    local_148 = FUN_0094ef70;
    FUN_00983230();
    FUN_009b86a2();
    FUN_009b86a2();
    FUN_009b86a2();
    pbVar14 = local_338;
    FUN_009bc5b8(pbVar14,local_118,local_320);
    local_150 = FUN_009b6370;
    local_148 = FUN_0094ef70;
    local_158 = (void **)&local_d8;
    FUN_00983230();
    local_150 = FUN_009b6370;
    local_148 = FUN_0094ef70;
    local_158 = param_1;
    FUN_00983230();
    if (((uint64_t)local_d8 & 1) != 0) {
      operator_delete(pbVar14);
    }
    if ((local_320[0] & 1) != 0) {
      operator_delete(pbVar14);
    }
    if ((local_338[0] & 1) != 0) {
      operator_delete(pbVar14);
    }
    if ((local_118[0] & 1) != 0) {
      operator_delete(pbVar14);
    }
    pcVar15 = 
    "bool license_services::DsigSignatureVerifier::verifySignature(license_services::LsSignaturePtr, license_services::LsRelation, std::string, license_services::SignatureDigestInfo *)"
    ;
    uVar28 = FUN_00928ab0("bool license_services::DsigSignatureVerifier::verifySignature(license_services::LsSignaturePtr, license_services::LsRelation, std::string, license_services::SignatureDigestInfo *)"
                          ,0x7e);
    FUN_009c78cb(uVar28,uVar7);
  }
  FUN_00a5e99e();
  pcVar20 = "signerSerialNumber";
  FUN_009bafbc();
  FUN_00a5e99e();
  std::string::string((string *)pcVar15,(string *)pcVar20);
  local_190 = 0;
  pcVar19 = *(code **)(this_ptr + 0x10);
  uVar28 = std::string::string((string *)pcVar15,(string *)pcVar20);
  (*pcVar19)(uVar28,&local_190);
  if ((local_308 & 1) != 0) {
    operator_delete(pcVar15);
  }
  if (local_190 == 0) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    FUN_009b86a2();
    FUN_009b86a2();
    FUN_009b86a2();
    pbVar14 = local_2f0;
    FUN_009bc5b8(pbVar14,&local_78,local_2d8);
    local_150 = FUN_009b6370;
    local_148 = FUN_0094ef70;
    local_158 = (void **)&local_d8;
    FUN_00983230();
    local_150 = FUN_009b6370;
    local_148 = FUN_0094ef70;
    local_158 = param_1;
    FUN_00983230();
    if (((uint64_t)local_d8 & 1) != 0) {
      operator_delete(pbVar14);
    }
    if ((local_2d8[0] & 1) != 0) {
      operator_delete(pbVar14);
    }
    if ((local_2f0[0] & 1) != 0) {
      operator_delete(pbVar14);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(pbVar14);
    }
    pcVar15 = 
    "bool license_services::DsigSignatureVerifier::verifySignature(license_services::LsSignaturePtr, license_services::LsRelation, std::string, license_services::SignatureDigestInfo *)"
    ;
    uVar28 = FUN_00928ab0("bool license_services::DsigSignatureVerifier::verifySignature(license_services::LsSignaturePtr, license_services::LsRelation, std::string, license_services::SignatureDigestInfo *)"
                          ,0x8d);
    FUN_009c78cb(uVar28,uVar7);
  }
  FUN_00a5e99e();
  pcVar20 = "signatureMethod";
  FUN_009bafbc();
  FUN_00a5e99e();
  std::string::string((string *)pcVar15,(string *)pcVar20);
  FUN_00a5e99e();
  pcVar20 = "pkStandardName";
  FUN_009bafbc();
  FUN_00a5e99e();
  std::string::string((string *)pcVar15,(string *)pcVar20);
  uVar13 = (ulong)pcVar15;
  uVar28 = FUN_00a3e9da();
  FUN_009bafbc(uVar28,"data");
  FUN_00a3e9da();
  FUN_0094e400();
  pvVar9 = operator_new(uVar13);
  puVar16 = &local_78;
  FUN_0098bd1c(puVar16,&local_d8,0,2);
  plVar10 = operator_new((ulong)puVar16);
  plVar10[2] = 0;
  plVar10[1] = 0;
  *plVar10 = (int64_t)&g_02520728;
  plVar10[3] = (int64_t)pvVar9;
  FUN_0098bde0();
  if (local_78 != 0) {
    uStack_70 = local_78;
    operator_delete(puVar16);
  }
  if (((uint64_t)local_d8 & 1) != 0) {
    operator_delete(puVar16);
  }
  if (((uint64_t)local_158 & 1) != 0) {
    operator_delete(puVar16);
  }
  uVar13 = (ulong)puVar16;
  local_38 = plVar10;
  uVar28 = FUN_00a5ecfc();
  FUN_00a5c1fe(uVar28,0);
  uVar28 = FUN_00a5e99e();
  FUN_009bafbc(uVar28,"canonicalVersion");
  FUN_00a5e99e();
  FUN_009b4fe6();
  (**(code **)(this_ptr + 8))();
  plVar10 = operator_new(uVar13);
  uVar28 = FUN_00a5d77e();
  FUN_009bafbc(uVar28,"digestMethod");
  FUN_00a5d77e();
  FUN_0098ede4();
  plVar11 = operator_new(uVar13);
  plVar11[2] = 0;
  plVar11[1] = 0;
  *plVar11 = (int64_t)&g_02521d00;
  plVar11[3] = (int64_t)plVar10;
  local_d8 = (void **)0x0;
  if (plVar11 != (int64_t *)0x0) {
    LOCK();
    plVar11[1] = plVar11[1] + 1;
    UNLOCK();
  }
  ppuVar17 = &local_380;
  local_1c8 = plVar10;
  local_1c0 = plVar10;
  local_1b8 = plVar11;
  FUN_009b5820(&local_380,&local_11c,&local_1c0,&local_d8);
  if (local_1b8 != (int64_t *)0x0) {
    LOCK();
    plVar10 = local_1b8 + 1;
    lVar8 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*local_1b8 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_180 != (void**)0x0) {
    if (local_11c != 0) {
      *(int *)(local_180 + 3) = local_11c;
    }
    ppuVar17 = local_180;
    if (local_180 + 4 != &local_380) {
      FUN_009591f0(local_180,&local_378);
    }
  }
  uVar13 = (ulong)ppuVar17;
  FUN_009b501c();
  plVar10 = operator_new(uVar13);
  uVar28 = FUN_00a5e99e();
  FUN_009bafbc(uVar28,"digestMethod");
  FUN_00a5e99e();
  FUN_0098ede4();
  local_100 = operator_new(uVar13);
  local_100[2] = 0;
  local_100[1] = 0;
  *local_100 = (int64_t)&g_02521d00;
  local_100[3] = (int64_t)plVar10;
  uVar28 = FUN_00a5e99e();
  FUN_009bafbc(uVar28,"canonicalVersion");
  FUN_00a5e99e();
  FUN_009b4fe6();
  FUN_00a60360();
  local_230 = 0;
  local_1a8 = local_100;
  if (local_100 != (int64_t *)0x0) {
    LOCK();
    local_100[1] = local_100[1] + 1;
    UNLOCK();
  }
  pplVar25 = &local_1b0;
  local_1b0 = plVar10;
  FUN_009b5820(&local_398,&local_198,pplVar25,&local_230);
  if (local_1a8 != (int64_t *)0x0) {
    LOCK();
    plVar1 = local_1a8 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*local_1a8 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_168 = 0;
  local_178 = 0;
  lStack_170 = 0;
  cVar4 = FUN_00a5f2dc();
  if (cVar4 == '\0') {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    FUN_009b86a2();
    FUN_009b86a2();
    FUN_009b86a2();
    pbVar14 = local_228;
    pplVar25 = (int64_t **)local_210;
    FUN_009bc5b8(pbVar14,&local_f8);
    local_d0 = FUN_009b6370;
    local_c8 = FUN_0094ef70;
    local_d8 = &local_58;
    FUN_00983230();
    local_d0 = FUN_009b6370;
    local_c8 = FUN_0094ef70;
    local_d8 = param_1;
    FUN_00983230();
    if (((uint64_t)local_58 & 1) != 0) {
      operator_delete(pbVar14);
    }
    if ((local_210[0] & 1) != 0) {
      operator_delete(pbVar14);
    }
    if ((local_228[0] & 1) != 0) {
      operator_delete(pbVar14);
    }
    if ((local_f8 & 1) != 0) {
      operator_delete(pbVar14);
    }
    uVar28 = FUN_00928ab0("bool license_services::DsigSignatureVerifier::verifySignature(license_services::LsSignaturePtr, license_services::LsRelation, std::string, license_services::SignatureDigestInfo *)"
                          ,0xff);
    FUN_009c78cb(uVar28,uVar7);
  }
  FUN_00a5f27a();
  FUN_00a17e4c();
  if (*(int64_t *)((int64_t)local_d8[1] + 8) - *(int64_t *)local_d8[1] != 0x40) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    FUN_009b86a2();
    FUN_009b86a2();
    FUN_009b86a2();
    pplVar25 = (int64_t **)local_1e0;
    FUN_009bc5b8(local_1f8,&local_f8);
    local_d0 = FUN_009b6370;
    local_c8 = FUN_0094ef70;
    local_d8 = &local_58;
    FUN_00983230();
    local_d0 = FUN_009b6370;
    local_c8 = FUN_0094ef70;
    local_d8 = param_1;
    FUN_00983230();
    FUN_00a17e4c();
    pvVar9 = (void *)((*(int64_t **)(local_188 + 8))[1] - **(int64_t **)(local_188 + 8) >> 5);
    local_d8 = &local_1a0;
    local_d0 = FUN_00ac1940;
    local_c8 = FUN_009baee0;
    local_1a0 = pvVar9;
    FUN_00983230();
    if (((uint64_t)local_58 & 1) != 0) {
      operator_delete(pvVar9);
    }
    if ((local_1e0[0] & 1) != 0) {
      operator_delete(pvVar9);
    }
    if ((local_1f8[0] & 1) != 0) {
      operator_delete(pvVar9);
    }
    if ((local_f8 & 1) != 0) {
      operator_delete(pvVar9);
    }
    uVar28 = FUN_00928ab0("bool license_services::DsigSignatureVerifier::verifySignature(license_services::LsSignaturePtr, license_services::LsRelation, std::string, license_services::SignatureDigestInfo *)"
                          ,0x107);
    FUN_009c78cb(uVar28,uVar7);
  }
  local_60 = (uint64_t)&local_d8 | 1;
  psVar26 = (string *)0x0;
  while( true ) {
    FUN_00a17e4c();
    this = (string *)(*(int64_t *)((int64_t)local_d8[1] + 8) - *(int64_t *)local_d8[1] >> 5);
    if (this <= psVar26) break;
    uVar28 = FUN_00a17e4c();
    FUN_00a5860e(uVar28,psVar26);
    FUN_00a16e4e();
    pcVar15 = "key";
    FUN_009bafbc();
    FUN_00a16e4e();
    std::string::string(this,(string *)pcVar15);
    FUN_009b86a2();
    pcVar19 = local_58;
    pcVar18 = ((uint64_t)local_d8 & 0xff);
    pcVar12 = ((uint64_t)local_d8 >> 1 & 0x7f);
    pcVar21 = pcVar12;
    if (((uint64_t)local_d8 & 1) != 0) {
      pcVar21 = local_d0;
    }
    pcVar24 = pcStack_50;
    if (((uint64_t)local_58 & 1) == 0) {
      pcVar24 = ((uint64_t)local_58 >> 1 & 0x7f);
    }
    if (pcVar21 == pcVar24) {
      uVar22 = (uint64_t)&local_58 | 1;
      if (((uint64_t)local_58 & 1) != 0) {
        uVar22 = local_48;
      }
      if (((uint64_t)local_d8 & 1) == 0) {
        bVar27 = true;
        if (pcVar21 != 0x0) {
          pcVar18 = 0x0;
          do {
            if (pcVar18[(int64_t)&local_d8 + 1] != pcVar18[uVar22]) goto LAB_009b746c;
            pcVar18 = pcVar18 + 1;
          } while (pcVar12 != pcVar18);
        }
      }
      else if (pcVar21 == 0x0) {
        bVar27 = true;
      }
      else {
        iVar5 = _memcmp(pcVar18,pcVar21,(size_t)pplVar25);
        bVar27 = iVar5 == 0;
      }
    }
    else {
LAB_009b746c:
      bVar27 = false;
    }
    if (((uint64_t)pcVar19 & 1) != 0) {
      operator_delete(pcVar18);
    }
    if (bVar27) {
      uVar28 = FUN_00a17e4c();
      FUN_00a5860e(uVar28,psVar26);
      uVar28 = FUN_00a16e4e();
      FUN_009bafbc(uVar28,"valueBinary");
      lVar8 = FUN_00a16e4e();
      pcVar19 = (lVar8 + 0x90);
      if (&local_78 != pcVar19) {
        FUN_008df080(pcVar19,*(void*)(lVar8 + 0x98));
      }
    }
    else {
      FUN_009b86a2();
      pcVar21 = local_58;
      pcVar19 = ((uint64_t)local_d8 & 0xff);
      pcVar18 = ((uint64_t)local_d8 >> 1 & 0x7f);
      pcVar12 = pcVar18;
      if (((uint64_t)local_d8 & 1) != 0) {
        pcVar12 = local_d0;
      }
      pcVar24 = pcStack_50;
      if (((uint64_t)local_58 & 1) == 0) {
        pcVar24 = ((uint64_t)local_58 >> 1 & 0x7f);
      }
      if (pcVar12 == pcVar24) {
        uVar22 = (uint64_t)&local_58 | 1;
        if (((uint64_t)local_58 & 1) != 0) {
          uVar22 = local_48;
        }
        if (((uint64_t)local_d8 & 1) == 0) {
          bVar27 = true;
          if (pcVar12 != 0x0) {
            pcVar19 = 0x0;
            do {
              if (pcVar19[(int64_t)&local_d8 + 1] != pcVar19[uVar22]) goto LAB_009b759d;
              pcVar19 = pcVar19 + 1;
            } while (pcVar18 != pcVar19);
          }
        }
        else if (pcVar12 == 0x0) {
          bVar27 = true;
        }
        else {
          iVar5 = _memcmp(pcVar19,pcVar12,(size_t)pplVar25);
          bVar27 = iVar5 == 0;
        }
      }
      else {
LAB_009b759d:
        bVar27 = false;
      }
      if (((uint64_t)pcVar21 & 1) != 0) {
        operator_delete(pcVar19);
      }
      if (bVar27) {
        uVar28 = FUN_00a17e4c();
        FUN_00a5860e(uVar28,psVar26);
        uVar28 = FUN_00a16e4e();
        FUN_009bafbc(uVar28,"valueBinary");
        lVar8 = FUN_00a16e4e();
        pcVar19 = (lVar8 + 0x90);
        if (&local_178 != pcVar19) {
          FUN_008df080(pcVar19,*(void*)(lVar8 + 0x98));
        }
      }
    }
    if (((uint64_t)local_d8 & 1) != 0) {
      operator_delete(pcVar19);
    }
    psVar26 = psVar26 + 1;
  }
  uVar28 = FUN_00a5e99e();
  FUN_009bafbc(uVar28,"signedDate");
  FUN_00a5e99e();
  local_1a0 = (void *)FUN_009f3f64();
  plVar3 = local_38;
  plVar2 = local_100;
  FUN_009afe36();
  plVar1 = local_1c8;
  (**(code **)(*plVar10 + 0x48))(&local_d8,0);
  if (local_180 != (void**)0x0) {
    uVar28 = FUN_0098bdce();
    *(void*)((int64_t)local_180 + 0x1c) = uVar28;
  }
  pcVar19 = &local_178;
  cVar4 = FUN_0098c286(pcVar19,&local_78,&local_1a0,&local_380);
  if (cVar4 == '\0') {
    uVar22 = 0;
  }
  else {
    uVar28 = FUN_00a5ecfc();
    FUN_00a5c1fe(uVar28,0);
    local_58 = 0x0;
    pcStack_50 = 0x0;
    local_48 = 0;
    uVar6 = FUN_0098f810();
    uVar22 = (uint64_t)uVar6;
    if ((uint64_t)((int64_t)pcStack_50 - (int64_t)local_58) < uVar22) {
      FUN_0088d550();
    }
    else if (uVar22 < (uint64_t)((int64_t)pcStack_50 - (int64_t)local_58)) {
      pcStack_50 = local_58 + uVar22;
    }
    (**(code **)(*plVar1 + 0x48))(0,local_58);
    uVar28 = FUN_00a5d77e();
    FUN_009bafbc(uVar28,"digestValue");
    FUN_00a5d77e();
    FUN_0094e400();
    pcVar19 = pcStack_50 + -(int64_t)local_58;
    lVar8 = CONCAT71(uStack_f7,local_f8);
    if (pcVar19 == (local_f0 - lVar8)) {
      pcVar21 = 0x0;
      do {
        uVar23 = (undefined7)((uint64_t)local_188 >> 8);
        if (pcVar19 == pcVar21) {
          uVar22 = CONCAT71(uVar23,1);
          goto LAB_009b781b;
        }
        pcVar12 = local_58 + (int64_t)pcVar21;
        local_188 = CONCAT71(uVar23,*pcVar12);
        pcVar18 = pcVar21 + lVar8;
        pcVar21 = pcVar21 + 1;
      } while (*pcVar12 == *pcVar18);
    }
    uVar22 = 0;
LAB_009b781b:
    if (lVar8 != 0) {
      operator_delete(pcVar19);
    }
    if (local_58 != 0x0) {
      pcStack_50 = local_58;
      operator_delete(pcVar19);
    }
  }
  if (local_178 != 0) {
    lStack_170 = local_178;
    operator_delete(pcVar19);
  }
  if (local_78 != 0) {
    uStack_70 = local_78;
    operator_delete(pcVar19);
  }
  FUN_009b501c();
  if (plVar2 != (int64_t *)0x0) {
    LOCK();
    plVar10 = plVar2 + 1;
    lVar8 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar2 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar11 != (int64_t *)0x0) {
    LOCK();
    plVar10 = plVar11 + 1;
    lVar8 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar3 != (int64_t *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar8 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if ((local_118[0] & 1) != 0) {
    operator_delete(pcVar19);
  }
  FUN_008defa0();
  FUN_008defa0();
  return uVar22 & 0xffffffff;
}

