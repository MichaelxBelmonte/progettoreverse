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


ulonglong FUN_009b654c(void **param_1,undefined8 param_2,undefined8 **param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  void *pvVar9;
  longlong *plVar10;
  longlong *plVar11;
  code *pcVar12;
  ulong uVar13;
  byte *pbVar14;
  char *pcVar15;
  ulonglong *puVar16;
  undefined8 **ppuVar17;
  string *this;
  code *pcVar18;
  code *pcVar19;
  char *pcVar20;
  code *pcVar21;
  ulonglong uVar22;
  undefined7 uVar23;
  longlong *unaff_RSI;
  code *pcVar24;
  longlong unaff_RDI;
  longlong **pplVar25;
  string *psVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined8 *local_398;
  undefined8 local_390;
  undefined8 local_388;
  undefined8 *local_380;
  undefined8 local_378;
  undefined8 local_370;
  byte local_368 [24];
  byte local_350 [24];
  byte local_338 [24];
  byte local_320 [24];
  byte local_308;
  byte local_2f0 [24];
  byte local_2d8 [168];
  undefined8 local_230;
  byte local_228 [24];
  byte local_210 [24];
  byte local_1f8 [24];
  byte local_1e0 [24];
  longlong *local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  void *local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  longlong local_190;
  longlong local_188;
  undefined8 **local_180;
  longlong local_178;
  longlong lStack_170;
  undefined8 local_168;
  void **local_158;
  code *local_150;
  code *local_148;
  int local_11c;
  byte local_118 [24];
  longlong *local_100;
  byte local_f8;
  undefined7 uStack_f7;
  longlong local_f0;
  undefined8 local_d8;
  code *local_d0;
  code *local_c8;
  ulonglong local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  code *local_58;
  code *pcStack_50;
  ulonglong local_48;
  void **local_40;
  longlong *local_38;
  
  local_180 = param_3;
  local_60 = param_2;
  if (*unaff_RSI == 0) {
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
    if ((ulonglong)(*(longlong *)((longlong)local_158[1] + 8) - *(longlong *)local_158[1] >> 5) <=
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
      if (((ulonglong)local_d8 & 1) != 0) {
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
  if ((string *)pcVar15 == *(string **)((longlong)local_158[1] + 8)) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    local_158 = (void **)(**(code **)((longlong)*local_40 + 0x48))();
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
    if (((ulonglong)local_d8 & 1) != 0) {
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
  pcVar19 = *(code **)(unaff_RDI + 0x10);
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
    if (((ulonglong)local_d8 & 1) != 0) {
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
  *plVar10 = (longlong)&DAT_02520728;
  plVar10[3] = (longlong)pvVar9;
  FUN_0098bde0();
  if (local_78 != 0) {
    uStack_70 = local_78;
    operator_delete(puVar16);
  }
  if (((ulonglong)local_d8 & 1) != 0) {
    operator_delete(puVar16);
  }
  if (((ulonglong)local_158 & 1) != 0) {
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
  (**(code **)(unaff_RDI + 8))();
  plVar10 = operator_new(uVar13);
  uVar28 = FUN_00a5d77e();
  FUN_009bafbc(uVar28,"digestMethod");
  FUN_00a5d77e();
  FUN_0098ede4();
  plVar11 = operator_new(uVar13);
  plVar11[2] = 0;
  plVar11[1] = 0;
  *plVar11 = (longlong)&DAT_02521d00;
  plVar11[3] = (longlong)plVar10;
  local_d8 = (void **)0x0;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar11[1] = plVar11[1] + 1;
    UNLOCK();
  }
  ppuVar17 = &local_380;
  local_1c8 = plVar10;
  local_1c0 = plVar10;
  local_1b8 = plVar11;
  FUN_009b5820(&local_380,&local_11c,&local_1c0,&local_d8);
  if (local_1b8 != (longlong *)0x0) {
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
  if (local_180 != (undefined8 **)0x0) {
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
  *local_100 = (longlong)&DAT_02521d00;
  local_100[3] = (longlong)plVar10;
  uVar28 = FUN_00a5e99e();
  FUN_009bafbc(uVar28,"canonicalVersion");
  FUN_00a5e99e();
  FUN_009b4fe6();
  FUN_00a60360();
  local_230 = 0;
  local_1a8 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    local_100[1] = local_100[1] + 1;
    UNLOCK();
  }
  pplVar25 = &local_1b0;
  local_1b0 = plVar10;
  FUN_009b5820(&local_398,&local_198,pplVar25,&local_230);
  if (local_1a8 != (longlong *)0x0) {
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
    pplVar25 = (longlong **)local_210;
    FUN_009bc5b8(pbVar14,&local_f8);
    local_d0 = FUN_009b6370;
    local_c8 = FUN_0094ef70;
    local_d8 = &local_58;
    FUN_00983230();
    local_d0 = FUN_009b6370;
    local_c8 = FUN_0094ef70;
    local_d8 = param_1;
    FUN_00983230();
    if (((ulonglong)local_58 & 1) != 0) {
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
  if (*(longlong *)((longlong)local_d8[1] + 8) - *(longlong *)local_d8[1] != 0x40) {
    FUN_00925fd0();
    uVar7 = FUN_00926010();
    FUN_009b86a2();
    FUN_009b86a2();
    FUN_009b86a2();
    pplVar25 = (longlong **)local_1e0;
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
    pvVar9 = (void *)((*(longlong **)(local_188 + 8))[1] - **(longlong **)(local_188 + 8) >> 5);
    local_d8 = &local_1a0;
    local_d0 = FUN_00ac1940;
    local_c8 = FUN_009baee0;
    local_1a0 = pvVar9;
    FUN_00983230();
    if (((ulonglong)local_58 & 1) != 0) {
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
  local_60 = (ulonglong)&local_d8 | 1;
  psVar26 = (string *)0x0;
  while( true ) {
    FUN_00a17e4c();
    this = (string *)(*(longlong *)((longlong)local_d8[1] + 8) - *(longlong *)local_d8[1] >> 5);
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
    pcVar18 = (code *)((ulonglong)local_d8 & 0xff);
    pcVar12 = (code *)((ulonglong)local_d8 >> 1 & 0x7f);
    pcVar21 = pcVar12;
    if (((ulonglong)local_d8 & 1) != 0) {
      pcVar21 = local_d0;
    }
    pcVar24 = pcStack_50;
    if (((ulonglong)local_58 & 1) == 0) {
      pcVar24 = (code *)((ulonglong)local_58 >> 1 & 0x7f);
    }
    if (pcVar21 == pcVar24) {
      uVar22 = (ulonglong)&local_58 | 1;
      if (((ulonglong)local_58 & 1) != 0) {
        uVar22 = local_48;
      }
      if (((ulonglong)local_d8 & 1) == 0) {
        bVar27 = true;
        if (pcVar21 != (code *)0x0) {
          pcVar18 = (code *)0x0;
          do {
            if (pcVar18[(longlong)&local_d8 + 1] != pcVar18[uVar22]) goto LAB_009b746c;
            pcVar18 = pcVar18 + 1;
          } while (pcVar12 != pcVar18);
        }
      }
      else if (pcVar21 == (code *)0x0) {
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
    if (((ulonglong)pcVar19 & 1) != 0) {
      operator_delete(pcVar18);
    }
    if (bVar27) {
      uVar28 = FUN_00a17e4c();
      FUN_00a5860e(uVar28,psVar26);
      uVar28 = FUN_00a16e4e();
      FUN_009bafbc(uVar28,"valueBinary");
      lVar8 = FUN_00a16e4e();
      pcVar19 = (code *)(lVar8 + 0x90);
      if ((code *)&local_78 != pcVar19) {
        FUN_008df080(pcVar19,*(undefined8 *)(lVar8 + 0x98));
      }
    }
    else {
      FUN_009b86a2();
      pcVar21 = local_58;
      pcVar19 = (code *)((ulonglong)local_d8 & 0xff);
      pcVar18 = (code *)((ulonglong)local_d8 >> 1 & 0x7f);
      pcVar12 = pcVar18;
      if (((ulonglong)local_d8 & 1) != 0) {
        pcVar12 = local_d0;
      }
      pcVar24 = pcStack_50;
      if (((ulonglong)local_58 & 1) == 0) {
        pcVar24 = (code *)((ulonglong)local_58 >> 1 & 0x7f);
      }
      if (pcVar12 == pcVar24) {
        uVar22 = (ulonglong)&local_58 | 1;
        if (((ulonglong)local_58 & 1) != 0) {
          uVar22 = local_48;
        }
        if (((ulonglong)local_d8 & 1) == 0) {
          bVar27 = true;
          if (pcVar12 != (code *)0x0) {
            pcVar19 = (code *)0x0;
            do {
              if (pcVar19[(longlong)&local_d8 + 1] != pcVar19[uVar22]) goto LAB_009b759d;
              pcVar19 = pcVar19 + 1;
            } while (pcVar18 != pcVar19);
          }
        }
        else if (pcVar12 == (code *)0x0) {
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
      if (((ulonglong)pcVar21 & 1) != 0) {
        operator_delete(pcVar19);
      }
      if (bVar27) {
        uVar28 = FUN_00a17e4c();
        FUN_00a5860e(uVar28,psVar26);
        uVar28 = FUN_00a16e4e();
        FUN_009bafbc(uVar28,"valueBinary");
        lVar8 = FUN_00a16e4e();
        pcVar19 = (code *)(lVar8 + 0x90);
        if ((code *)&local_178 != pcVar19) {
          FUN_008df080(pcVar19,*(undefined8 *)(lVar8 + 0x98));
        }
      }
    }
    if (((ulonglong)local_d8 & 1) != 0) {
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
  if (local_180 != (undefined8 **)0x0) {
    uVar28 = FUN_0098bdce();
    *(undefined4 *)((longlong)local_180 + 0x1c) = uVar28;
  }
  pcVar19 = (code *)&local_178;
  cVar4 = FUN_0098c286(pcVar19,&local_78,&local_1a0,&local_380);
  if (cVar4 == '\0') {
    uVar22 = 0;
  }
  else {
    uVar28 = FUN_00a5ecfc();
    FUN_00a5c1fe(uVar28,0);
    local_58 = (code *)0x0;
    pcStack_50 = (code *)0x0;
    local_48 = 0;
    uVar6 = FUN_0098f810();
    uVar22 = (ulonglong)uVar6;
    if ((ulonglong)((longlong)pcStack_50 - (longlong)local_58) < uVar22) {
      FUN_0088d550();
    }
    else if (uVar22 < (ulonglong)((longlong)pcStack_50 - (longlong)local_58)) {
      pcStack_50 = local_58 + uVar22;
    }
    (**(code **)(*plVar1 + 0x48))(0,local_58);
    uVar28 = FUN_00a5d77e();
    FUN_009bafbc(uVar28,"digestValue");
    FUN_00a5d77e();
    FUN_0094e400();
    pcVar19 = pcStack_50 + -(longlong)local_58;
    lVar8 = CONCAT71(uStack_f7,local_f8);
    if (pcVar19 == (code *)(local_f0 - lVar8)) {
      pcVar21 = (code *)0x0;
      do {
        uVar23 = (undefined7)((ulonglong)local_188 >> 8);
        if (pcVar19 == pcVar21) {
          uVar22 = CONCAT71(uVar23,1);
          goto LAB_009b781b;
        }
        pcVar12 = local_58 + (longlong)pcVar21;
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
    if (local_58 != (code *)0x0) {
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
  if (plVar2 != (longlong *)0x0) {
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
  if (plVar11 != (longlong *)0x0) {
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
  if (plVar3 != (longlong *)0x0) {
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


