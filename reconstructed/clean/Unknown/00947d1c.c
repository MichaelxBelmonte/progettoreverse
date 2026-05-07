// Function: FUN_00947d1c
// Address: 00947d1c
// Size: 9433 bytes
// Class: Unknown
// String references:
//   "publisherId"
//   "authId"
//   "state"
//   "issuerId"
//   "lastAuthChangeDate"
//   "databaseInfoGuid"
//   "mustBeInAuthManifest"
//   "authInstance"
//   "platform"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "No License provided to AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime"
//   "void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::...
//   "Could not get a vector of DatabaseInfos"
//   "No DatabaseInfo records found for license (UUID:%s)"
//   "PACE's DatabaseInfo record has duplicates"
//   "No DatabaseInfo records, validated by DLD, were found for the license (UUID:%s)"
//   "The DatabaseInfo (GUID: %s) has a signature that does not verify"
//   "The DatabaseInfo (GUID: %s) was signed by an invalid issuer (ExpectedID:0x%08X, Actual:0x%08X)"
//   "The License (UUID: %s) was signed by an invalid issuer (ExpectedID:0x%08X, Actual:0x%08X)"
//   "Bad LsObjectRelationVectorAuthManifestElement (0x%16X)"
//   ... +24 more

void FUN_00947d1c(int64_t *param_1,uint64_t param_2,string *param_3,string *param_4,
                 int64_t param_5)

{
  int64_t *plVar1;
  byte bVar2;
  code cVar3;
  int iVar4;
  int64_t *plVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  void*puVar13;
  string **ppsVar14;
  undefined7 uVar15;
  uint uVar16;
  char *pcVar17;
  void *pvVar18;
  code *pcVar19;
  char *pcVar20;
  void *pvVar21;
  code *pcVar22;
  int64_t lVar23;
  code *pcVar24;
  int64_t *arg1;
  int64_t *this_ptr;
  void *pvVar25;
  string *psVar26;
  uint64_t uVar27;
  uint32_t uVar28;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Da_06;
  uint32_t extraout_XMM0_Da_07;
  void*local_res8;
  int64_t local_res10;
  int64_t *local_res18;
  uint64_t local_res20;
  uint64_t uStack_300;
  void*local_2f8;
  uint64_t local_2f0;
  uint64_t local_2e8;
  string **local_2d8;
  string **local_2d0;
  string **local_2c8;
  uint64_t local_2c0;
  uint64_t local_2b8;
  uint64_t local_2b0;
  string *local_2a8;
  uint64_t uStack_2a0;
  uint64_t local_298;
  string *local_290 [3];
  uint64_t local_278;
  int64_t *local_270;
  uint64_t local_268 [4];
  byte local_248;
  undefined7 uStack_247;
  string *local_230 [3];
  string **local_218;
  code *local_210;
  code *local_208;
  uint64_t local_200;
  uint64_t local_1f8;
  uint32_t local_1f0;
  uint64_t local_1e8;
  uint64_t local_1e0;
  uint64_t local_1d8;
  uint8_t local_1d0;
  uint64_t local_1c8;
  uint64_t local_1c0;
  uint64_t local_1b8;
  uint64_t local_1b0;
  uint16_t local_1a8;
  uint8_t local_1a6;
  int64_t local_178;
  int64_t lStack_170;
  uint64_t local_168;
  int64_t local_160;
  string **local_158;
  string **local_150;
  string *local_148;
  void *pvStack_140;
  uint64_t local_138;
  int64_t local_128 [4];
  int64_t local_108;
  byte local_100;
  void *local_f8;
  uint64_t local_e8;
  uint64_t uStack_e0;
  uint64_t local_d8;
  string *local_c8;
  int64_t local_c0;
  uint64_t local_a8;
  string *psStack_a0;
  uint64_t local_98;
  string **local_90;
  code *local_88;
  code *local_80;
  string *local_78;
  int64_t local_60;
  string *local_58;
  uint64_t local_50;
  code *local_48;
  string **local_38;
  
  local_2f8 = &local_2f0;
  pcVar17 = (char *)0x0;
  local_2e8 = 0;
  local_2f0 = 0;
  uStack_300 = 0;
  local_138 = 0;
  local_148 = (string *)0x0;
  pvStack_140 = (void *)0x0;
  local_270 = param_1;
  local_58 = param_3;
  if (*arg1 == 0) {
    FUN_00925fd0();
    uVar10 = FUN_00926010();
    pcVar17 = 
    "void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
    ;
    uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                          ,&g_00003fa3);
    FUN_009bd14b(uVar28,uVar10);
  }
  FUN_00a2e7a8();
  if (local_128[3] == 0) {
    FUN_00925fd0();
    uVar10 = FUN_00926010();
    pcVar17 = 
    "void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
    ;
    uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                          ,&g_00003fb3);
    FUN_009bd14b(uVar28,uVar10);
  }
  local_50 = FUN_00a2f5d4();
  if (local_50 == 0) {
    FUN_00925fd0();
    uVar10 = FUN_00926010();
    local_218 = (string **)(**(code **)(*(int64_t *)*arg1 + 0x48))();
    local_210 = FUN_009b6370;
    local_208 = FUN_0094ef70;
    FUN_00983230();
    pcVar17 = 
    "void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
    ;
    uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                          ,&g_00003fbc);
    FUN_009bd14b(uVar28,uVar10);
  }
  FUN_00a521fe();
  pcVar20 = "databaseInfoGuid";
  FUN_009bafbc();
  FUN_00a521fe();
  std::string::operator=((string *)pcVar17,(string *)pcVar20);
  if (local_50 == 0) {
    local_38 = (string **)0x0;
LAB_0094807b:
    FUN_00925fd0();
    uVar10 = FUN_00926010();
    local_218 = (string **)(**(code **)(*(int64_t *)*arg1 + 0x48))();
    local_210 = FUN_009b6370;
    local_208 = FUN_0094ef70;
    FUN_00983230();
    uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                          ,&g_00003fe6);
    FUN_009bd14b(uVar28,uVar10);
  }
  else {
    bVar6 = 0;
    uVar27 = 0;
    local_38 = (string **)0x0;
    do {
      FUN_00a2ef06();
      ppsVar14 = local_218;
      if (local_218 != (string **)0x0) {
        local_2d8 = local_218;
        (**(code **)(*this_ptr + 0x10))();
        uVar28 = FUN_00a4050e();
        FUN_009bafbc(uVar28,"databaseInfoGuid");
        lVar11 = FUN_00a4050e();
        bVar2 = *(byte *)(lVar11 + 0x30);
        param_3 = (string *)0x0;
        if ((bVar2 & 1) == 0) {
          pvVar21 = (void *)(uint64_t)(bVar2 >> 1);
        }
        else {
          pvVar21 = *(void **)(lVar11 + 0x38);
        }
        pvVar18 = pvStack_140;
        if (((uint64_t)local_148 & 1) == 0) {
          pvVar18 = (void *)((uint64_t)local_148 >> 1 & 0x7f);
        }
        pvVar25 = pvVar18;
        if (pvVar21 < pvVar18) {
          pvVar25 = pvVar21;
        }
        if (pvVar25 != (void *)0x0) {
          pcVar17 = (char *)CONCAT71((int7)((uint64_t)pcVar17 >> 8),1);
          iVar8 = _memcmp(pcVar17,pvVar25,(uint)bVar2);
          if (iVar8 != 0) goto LAB_00948060;
        }
        if (pvVar18 == pvVar21) {
          if ((bVar6 & 1) != 0) {
            FUN_00925fd0();
            uVar10 = FUN_00926010();
            pcVar17 = 
            "void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
            ;
            uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                                  ,&g_00003fd5);
            FUN_009bd14b(uVar28,uVar10);
          }
          local_2d0 = ppsVar14;
          bVar6 = FUN_009444b0();
          if (bVar6 != 0) {
            local_38 = ppsVar14;
          }
        }
      }
LAB_00948060:
      uVar27 = uVar27 + 1;
    } while (local_50 != uVar27);
    if ((bVar6 & 1) == 0) goto LAB_0094807b;
  }
  cVar7 = FUN_00a42556();
  if (cVar7 == '\0') {
    FUN_00925fd0();
    uVar10 = FUN_00926010();
    local_218 = &local_148;
    local_210 = FUN_009b6370;
    local_208 = FUN_0094ef70;
    FUN_00983230();
    uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                          ,&g_00003ff4);
    FUN_009bd14b(uVar28,uVar10);
  }
  iVar8 = uStack_300._4_4_;
  uVar28 = FUN_00a4050e();
  FUN_009bafbc(uVar28,"issuerId");
  lVar11 = FUN_00a4050e();
  if (iVar8 != *(int *)(lVar11 + 200)) {
    FUN_00925fd0();
    uVar10 = FUN_00926010();
    local_218 = &local_148;
    local_210 = FUN_009b6370;
    local_208 = FUN_0094ef70;
    FUN_00983230();
    local_210 = FUN_009cac80;
    local_208 = FUN_009cefa0;
    local_218 = (string **)((int64_t)&uStack_300 + 4);
    FUN_00983230();
    uVar28 = FUN_00a4050e();
    FUN_009bafbc(uVar28,"issuerId");
    lVar11 = FUN_00a4050e();
    local_218 = (string **)(lVar11 + 200);
    local_210 = FUN_009cac80;
    local_208 = FUN_009cefa0;
    FUN_00983230();
    uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                          ,&g_00004004);
    FUN_009bd14b(uVar28,uVar10);
  }
  iVar8 = uStack_300._4_4_;
  uVar28 = FUN_00a521fe();
  FUN_009bafbc(uVar28,"issuerId");
  lVar11 = FUN_00a521fe();
  if (iVar8 != *(int *)(lVar11 + 0xb8)) {
    FUN_00925fd0();
    uVar10 = FUN_00926010();
    local_218 = (string **)(**(code **)(*(int64_t *)*arg1 + 0x48))();
    local_210 = FUN_009b6370;
    local_208 = FUN_0094ef70;
    FUN_00983230();
    local_210 = FUN_009cac80;
    local_208 = FUN_009cefa0;
    local_218 = (string **)((int64_t)&uStack_300 + 4);
    FUN_00983230();
    uVar28 = FUN_00a521fe();
    FUN_009bafbc(uVar28,"issuerId");
    lVar11 = FUN_00a521fe();
    local_218 = (string **)(lVar11 + 0xb8);
    local_210 = FUN_009cac80;
    local_208 = FUN_009cefa0;
    FUN_00983230();
    uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                          ,&g_0000400e);
    FUN_009bd14b(uVar28,uVar10);
  }
  pcVar17 = (char *)(local_res18[1] - *local_res18 >> 3);
  local_c8 = (string *)pcVar17;
  if (local_res18[1] - *local_res18 != 0) {
    uVar28 = FUN_00a521fe();
    FUN_009bafbc(uVar28,"mustBeInAuthManifest");
    lVar11 = FUN_00a521fe();
    if (*(char *)(lVar11 + 0xf0) != '\0') {
      FUN_00a4086c();
      lVar11 = CONCAT71(uStack_247,local_248);
      if (lVar11 == 0) {
        FUN_00925fd0();
        uVar10 = FUN_00926010();
        local_210 = FUN_0095195c;
        local_208 = FUN_00951962;
        local_218 = (string **)&local_248;
        FUN_00983230();
        pcVar17 = 
        "void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
        ;
        uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                              ,&LAB_00004022);
        FUN_009bd14b(uVar28,uVar10);
        lVar11 = CONCAT71(uStack_247,local_248);
      }
      lVar11 = (*(int64_t **)(lVar11 + 8))[1] - **(int64_t **)(lVar11 + 8);
      local_230[0] = (string *)0x0;
      FUN_00a521fe();
      pcVar20 = "state";
      FUN_009bafbc();
      FUN_00a521fe();
      std::string::string((string *)pcVar17,(string *)pcVar20);
      if (lVar11 != 0) {
        local_2b0 = lVar11 >> 5;
        uVar27 = 0;
        do {
          local_2b8 = uVar27;
          FUN_00a5921e();
          if ((local_218 != (string **)0x0) && (local_c8 != (string *)0x0)) {
            psVar26 = (string *)0x0;
            do {
              lVar11 = *(int64_t *)(*local_res18 + (int64_t)psVar26 * 8);
              uVar28 = FUN_00a1c9ba();
              FUN_009bafbc(uVar28,"authId");
              lVar12 = FUN_00a1c9ba();
              iVar8 = *(int *)(lVar12 + 0x30);
              uVar28 = FUN_00a1c9ba();
              FUN_009bafbc(uVar28,"publisherId");
              lVar12 = FUN_00a1c9ba();
              if (lVar11 != 0) {
                iVar4 = *(int *)(lVar12 + 0xa0);
                uVar28 = FUN_00a1a2be();
                FUN_009bafbc(uVar28,"authId");
                lVar11 = FUN_00a1a2be();
                if (iVar8 == *(int *)(lVar11 + 0x30)) {
                  uVar28 = FUN_00a1a2be();
                  FUN_009bafbc(uVar28,"publisherId");
                  lVar11 = FUN_00a1a2be();
                  if (iVar4 == *(int *)(lVar11 + 0x80)) {
                    uVar28 = FUN_00a1c9ba();
                    FUN_009bafbc(uVar28,"authInstance");
                    lVar11 = FUN_00a1c9ba();
                    iVar9 = *(int *)(lVar11 + 0x34);
                    uVar28 = FUN_00a1a2be();
                    FUN_009bafbc(uVar28,"authInstance");
                    lVar11 = FUN_00a1a2be();
                    if (iVar9 == *(int *)(lVar11 + 0x34)) {
                      uVar28 = FUN_00a521fe();
                      FUN_009bafbc(uVar28,"issuedDate");
                      local_48 = FUN_00a521fe();
                      uVar28 = FUN_00a1a2be();
                      FUN_009bafbc(uVar28,"licenseIssuedDate");
                      lVar11 = FUN_00a1a2be();
                      cVar3 = local_48[0xa0];
                      param_3 = (string *)0x0;
                      pvVar18 = (void *)(uint64_t)((byte)cVar3 >> 1);
                      pvVar21 = pvVar18;
                      if (((byte)cVar3 & 1) != 0) {
                        pvVar21 = *(void **)(local_48 + 0xa8);
                      }
                      bVar6 = *(byte *)(lVar11 + 0x50);
                      if ((bVar6 & 1) == 0) {
                        pvVar25 = (void *)(uint64_t)(bVar6 >> 1);
                      }
                      else {
                        pvVar25 = *(void **)(lVar11 + 0x58);
                      }
                      if (pvVar21 == pvVar25) {
                        if ((bVar6 & 1) == 0) {
                          lVar11 = lVar11 + 0x51;
                        }
                        else {
                          lVar11 = *(int64_t *)(lVar11 + 0x60);
                        }
                        if (((byte)cVar3 & 1) == 0) {
                          if (pvVar21 != (void *)0x0) {
                            pvVar21 = (void *)0x0;
                            do {
                              if ((local_48 + 0xa1)[(int64_t)pvVar21] !=
                                  *(lVar11 + (int64_t)pvVar21)) goto LAB_0094884b;
                              pvVar21 = (void *)((int64_t)pvVar21 + 1);
                            } while (pvVar18 != pvVar21);
                          }
                        }
                        else if ((pvVar21 != (void *)0x0) &&
                                (iVar9 = _memcmp(pvVar18,pvVar21,(uint)(byte)cVar3), iVar9 != 0))
                        goto LAB_0094884b;
                        uVar28 = FUN_00a1a2be();
                        FUN_009bafbc(uVar28,"state");
                        lVar11 = FUN_00a1a2be();
                        bVar6 = *(byte *)(lVar11 + 0x88);
                        param_3 = (string *)0x0;
                        if ((bVar6 & 1) == 0) {
                          pcVar19 = (uint64_t)(bVar6 >> 1);
                        }
                        else {
                          pcVar19 = *(code **)(lVar11 + 0x90);
                        }
                        pcVar24 = local_88;
                        if (((uint64_t)local_90 & 1) == 0) {
                          pcVar24 = ((uint64_t)local_90 >> 1 & 0x7f);
                        }
                        pcVar22 = pcVar24;
                        if (pcVar19 < pcVar24) {
                          pcVar22 = pcVar19;
                        }
                        if (((pcVar22 == 0x0) ||
                            (local_48 = pcVar19,
                            iVar9 = _memcmp((void *)CONCAT71((int7)((uint64_t)pcVar19 >> 8),1),
                                            pcVar22,(uint)bVar6), pcVar19 = local_48, iVar9 == 0))
                           && (pcVar24 == pcVar19)) {
                          local_230[0] = local_230[0] + 1;
                          if ((iVar8 == 0x4801f777) && (iVar4 == 1)) {
                            uVar28 = FUN_00a521fe();
                            FUN_009bafbc(uVar28,"issuerId");
                            lVar11 = FUN_00a521fe();
                            if (*(int *)(lVar11 + 0xb8) != 1) {
                              FUN_00925fd0();
                              uVar10 = FUN_00926010();
                              uVar28 = FUN_00a521fe();
                              FUN_009bafbc(uVar28,"issuerId");
                              lVar11 = FUN_00a521fe();
                              local_218 = (string **)(lVar11 + 0xb8);
                              local_210 = FUN_009cac80;
                              local_208 = FUN_009cefa0;
                              FUN_00983230();
                              uVar28 = FUN_00928ab0(
                                                  "void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                                                  ,&g_00004075);
                              FUN_009bd14b(uVar28,uVar10);
                            }
                          }
                          break;
                        }
                      }
                    }
                  }
                }
              }
LAB_0094884b:
              psVar26 = psVar26 + 1;
            } while (psVar26 < local_c8);
          }
        } while ((local_230[0] != local_c8) && (uVar27 = local_2b8 + 1, uVar27 < local_2b0));
      }
      pcVar17 = (char *)local_c8;
      if (local_230[0] != local_c8) {
        FUN_00925fd0();
        uVar10 = FUN_00926010();
        local_218 = (string **)(**(code **)(*(int64_t *)*arg1 + 0x48))();
        local_210 = FUN_009b6370;
        local_208 = FUN_0094ef70;
        FUN_00983230();
        uVar28 = FUN_00a521fe();
        FUN_009bafbc(uVar28,"issuerId");
        lVar11 = FUN_00a521fe();
        local_218 = (string **)(lVar11 + 0xb8);
        local_210 = FUN_009cac80;
        local_208 = FUN_009cefa0;
        FUN_00983230();
        local_218 = local_230;
        local_210 = FUN_00ac1940;
        local_208 = FUN_009baee0;
        FUN_00983230();
        local_218 = &local_c8;
        local_210 = FUN_00ac1940;
        local_208 = FUN_009baee0;
        FUN_00983230();
        pcVar17 = 
        "void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
        ;
        uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                              ,&g_0000408b);
        FUN_009bd14b(uVar28,uVar10);
      }
      if (((uint64_t)local_90 & 1) != 0) {
        operator_delete(pcVar17);
      }
    }
  }
  FUN_00a4050e();
  pcVar20 = "lastAuthChangeDate";
  FUN_009bafbc();
  FUN_00a4050e();
  std::string::string((string *)pcVar17,(string *)pcVar20);
  FUN_00a521fe();
  pcVar20 = "insertDate";
  FUN_009bafbc();
  FUN_00a521fe();
  std::string::string((string *)pcVar17,(string *)pcVar20);
  FUN_00a521fe();
  pcVar20 = "issuedDate";
  FUN_009bafbc();
  FUN_00a521fe();
  std::string::string((string *)pcVar17,(string *)pcVar20);
  local_160 = FUN_009f3f64();
  local_108 = FUN_009f3f64();
  local_278 = 300000000;
  lVar11 = FUN_009585b8();
  if (local_160 != lVar11) {
    lVar11 = FUN_009585b8();
    if (*(int64_t *)local_58 != lVar11) {
      uVar28 = FUN_0094ca28(local_58,&local_160);
      FUN_00947768(uVar28,&local_278);
      local_218 = (string **)0x0;
      iVar8 = FUN_0098c910();
      if (iVar8 == -1) {
        FUN_00925fd0();
        uVar10 = FUN_00926010();
        local_210 = FUN_009b6370;
        local_208 = FUN_0094ef70;
        local_218 = (string **)&local_248;
        FUN_00983230();
        uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                              ,&g_000040a7);
        FUN_009bd14b(uVar28,uVar10);
      }
    }
    lVar11 = FUN_009585b8();
    if (local_108 != lVar11) {
      FUN_0094ca28(extraout_XMM0_Da,&local_108);
      local_218 = (string **)0x0;
      iVar8 = FUN_0098c910();
      if (iVar8 == -1) {
        FUN_00925fd0();
        uVar10 = FUN_00926010();
        local_218 = (string **)(**(code **)(*(int64_t *)*arg1 + 0x48))();
        local_210 = FUN_009b6370;
        local_208 = FUN_0094ef70;
        FUN_00983230();
        local_218 = local_290;
        local_210 = FUN_009b6370;
        local_208 = FUN_0094ef70;
        FUN_00983230();
        local_210 = FUN_009b6370;
        local_208 = FUN_0094ef70;
        local_218 = (string **)&local_248;
        FUN_00983230();
        uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                              ,&g_000040b4);
        FUN_009bd14b(uVar28,uVar10);
      }
    }
  }
  lVar11 = FUN_009585b8();
  pcVar17 = (char *)local_58;
  if ((*(int64_t *)local_58 != lVar11) && (lVar11 = FUN_009585b8(), local_108 != lVar11)) {
    uVar28 = FUN_0094ca28(extraout_XMM0_Da_00,&local_108);
    FUN_00947768(uVar28,&local_278);
    local_218 = (string **)0x0;
    iVar8 = FUN_0098c910();
    if (iVar8 == -1) {
      FUN_00925fd0();
      uVar10 = FUN_00926010();
      local_218 = (string **)(**(code **)(*(int64_t *)*arg1 + 0x48))();
      local_210 = FUN_009b6370;
      local_208 = FUN_0094ef70;
      FUN_00983230();
      local_218 = local_290;
      local_210 = FUN_009b6370;
      local_208 = FUN_0094ef70;
      FUN_00983230();
      pcVar17 = 
      "void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
      ;
      uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                            ,&g_000040c5);
      FUN_009bd14b(uVar28,uVar10);
    }
  }
  uVar28 = FUN_00a521fe();
  FUN_009bafbc(uVar28,"nodeLocked");
  lVar11 = FUN_00a521fe();
  if (*(char *)(lVar11 + 0x110) != '\0') {
    cVar7 = FUN_00a40b8a();
    if (cVar7 == '\0') {
      FUN_00925fd0();
      uVar10 = FUN_00926010();
      local_218 = &local_148;
      local_210 = FUN_009b6370;
      local_208 = FUN_0094ef70;
      FUN_00983230();
      uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                            ,&g_000040d5);
      FUN_009bd14b(uVar28,uVar10);
    }
    FUN_00a40b08();
    if (local_178 == 0) {
      FUN_00925fd0();
      uVar10 = FUN_00926010();
      uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                            ,&g_000040dc);
      FUN_009bd14b(uVar28,uVar10);
    }
    uVar28 = FUN_00a5686e();
    FUN_009bafbc(uVar28,"platform");
    lVar11 = FUN_00a5686e();
    if ((*(byte *)(lVar11 + 0x90) & 1) == 0) {
      pcVar17 = (char *)(uint64_t)(*(byte *)(lVar11 + 0x90) >> 1);
    }
    else {
      pcVar17 = *(char **)(lVar11 + 0x98);
    }
    if ((string *)pcVar17 == (string *)0x0) {
      FUN_00925fd0();
      uVar10 = FUN_00926010();
      pcVar17 = 
      "void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
      ;
      uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                            ,&g_000040e1);
      FUN_009bd14b(uVar28,uVar10);
    }
    FUN_009742cb();
    FUN_00a521fe();
    pcVar20 = "bindingAlgorithm";
    FUN_009bafbc();
    FUN_00a521fe();
    std::string::string((string *)pcVar17,(string *)pcVar20);
    local_e8 = (uint64_t)local_e8._4_4_ << 0x20;
    lVar11 = FUN_008911e2();
    bVar6 = *(byte *)(lVar11 + 0x2b0);
    uVar16 = (uint)bVar6;
    if ((bVar6 & 1) == 0) {
      pvVar21 = (void *)(uint64_t)(bVar6 >> 1);
    }
    else {
      pvVar21 = *(void **)(lVar11 + 0x2b8);
    }
    pvVar18 = local_f8;
    if ((local_100 & 1) == 0) {
      pvVar18 = (void *)(uint64_t)(local_100 >> 1);
    }
    pvVar25 = pvVar18;
    if (pvVar21 < pvVar18) {
      pvVar25 = pvVar21;
    }
    if (((pvVar25 == (void *)0x0) ||
        (uVar16 = (uint)bVar6,
        iVar8 = _memcmp((void *)(uint64_t)bVar6,pvVar25,
                        (size_t)CONCAT71((int7)((uint64_t)param_3 >> 8),1)), iVar8 == 0)) &&
       (pvVar18 == pvVar21)) {
      uVar28 = FUN_00a521fe();
      FUN_009bafbc(uVar28,"bindingDriftAmount");
      lVar11 = FUN_00a521fe();
      iVar8 = *(int *)(lVar11 + 0x60);
      local_e8 = CONCAT44(local_e8._4_4_,iVar8);
      if (iVar8 < 0x65) {
        if (iVar8 < 0) {
          local_e8 = (uint64_t)local_e8._4_4_ << 0x20;
        }
      }
      else {
        local_e8 = CONCAT44(local_e8._4_4_,100);
      }
    }
    if (*local_270 == 0) {
      pvVar21 = operator_new(uVar16);
      FUN_009d0c10();
      puVar13 = operator_new(uVar16);
      puVar13[2] = 0;
      puVar13[1] = 0;
      *puVar13 = &g_0251fc90;
      puVar13[3] = pvVar21;
      *local_270 = (int64_t)pvVar21;
      plVar5 = (int64_t *)local_270[1];
      local_270[1] = (int64_t)puVar13;
      if (plVar5 != (int64_t *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar11 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plVar5 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    local_2a8 = (string *)0x0;
    local_268[0] = local_268[0] & 0xffffffffffffff00;
    cVar7 = FUN_009d1c0c(local_268,(int64_t)(int)local_e8,&local_2a8,0);
    this_ptr[0x37] = (int64_t)(int)local_e8;
    this_ptr[0x36] = (int64_t)local_2a8;
    pcVar17 = (char *)local_2a8;
    if (cVar7 == '\0') {
      FUN_00925fd0();
      uVar10 = FUN_00926010();
      (**(code **)(*(int64_t *)*arg1 + 0x48))();
      FUN_00983230();
      FUN_00983230();
      local_88 = FUN_00ac1940;
      local_80 = FUN_009baee0;
      FUN_00983230();
      pcVar17 = 
      "void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
      ;
      uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                            ,&g_00004108);
      FUN_009bd14b(uVar28,uVar10);
      local_90 = &local_2a8;
    }
    if ((local_100 & 1) != 0) {
      operator_delete(pcVar17);
    }
    FUN_009d0ea8();
  }
  if (local_res10 == 0) {
    if (local_res8 != (void*)0x0) {
      FUN_00925fd0();
      uVar10 = FUN_00926010();
      pcVar17 = 
      "void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
      ;
      uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                            ,0x424d);
      FUN_009bd14b(uVar28,uVar10);
    }
    goto LAB_0094a00d;
  }
  uVar28 = FUN_00a4050e();
  FUN_009bafbc(uVar28,"issuerId");
  lVar11 = FUN_00a4050e();
  if (*(int *)(lVar11 + 200) != 1) {
    if (local_50 == 0) {
LAB_009494b5:
      FUN_00925fd0();
      uVar10 = FUN_00926010();
      pcVar17 = 
      "void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
      ;
      uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                            ,&g_00004135);
      FUN_009bd14b(uVar28,uVar10);
    }
    else {
      bVar6 = 0;
      uVar27 = 0;
      uVar28 = extraout_XMM0_Da_01;
      do {
        uVar28 = FUN_00a2ef06(uVar28,uVar27);
        ppsVar14 = local_218;
        if (local_218 != (string **)0x0) {
          uVar28 = FUN_00a4050e();
          FUN_009bafbc(uVar28,"issuerId");
          lVar11 = FUN_00a4050e();
          uVar28 = extraout_XMM0_Da_02;
          if (*(int *)(lVar11 + 200) == 1) {
            if ((bVar6 & 1) != 0) {
              FUN_00925fd0();
              uVar10 = FUN_00926010();
              pcVar17 = 
              "void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
              ;
              uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                                    ,&g_00004126);
              uVar28 = FUN_009bd14b(uVar28,uVar10);
            }
            local_2c8 = ppsVar14;
            bVar6 = FUN_009444b0(uVar28,local_res20);
            uVar28 = extraout_XMM0_Da_03;
            if (bVar6 != 0) {
              local_38 = ppsVar14;
            }
          }
        }
        uVar27 = uVar27 + 1;
      } while (local_50 != uVar27);
      if ((bVar6 & 1) == 0) goto LAB_009494b5;
    }
    cVar7 = FUN_00a42556();
    if (cVar7 == '\0') {
      FUN_00925fd0();
      uVar10 = FUN_00926010();
      uVar28 = FUN_00a4050e();
      FUN_009bafbc(uVar28,"databaseInfoGuid");
      lVar11 = FUN_00a4050e();
      local_218 = (string **)(lVar11 + 0x30);
      local_210 = FUN_009b6370;
      local_208 = FUN_0094ef70;
      FUN_00983230();
      pcVar17 = 
      "void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
      ;
      uVar28 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                            ,&g_0000413e);
      FUN_009bd14b(uVar28,uVar10);
    }
    (**(code **)(*this_ptr + 0x10))();
  }
  FUN_00a4050e();
  pcVar20 = "masterTime";
  FUN_009bafbc();
  FUN_00a4050e();
  std::string::string((string *)pcVar17,(string *)pcVar20);
  local_60 = FUN_009f3f64();
  local_c0 = FUN_009585b8();
  local_168 = 0;
  local_178 = 0;
  lStack_170 = 0;
  local_298 = 0;
  local_2a8 = (string *)0x0;
  uStack_2a0 = 0;
  FUN_008beff2();
  local_2a8[8] = (string)0x1;
  uVar28 = std::string::assign(pcVar17);
  FUN_0092d24e(uVar28,&local_178);
  if ((lStack_170 != local_178) &&
     (*(int64_t *)(local_178 + 0xe8) != *(int64_t *)(local_178 + 0xe0))) {
    local_c0 = FUN_009f3f64();
  }
  lVar11 = FUN_009585b8();
  if (local_60 == lVar11) {
LAB_009496be:
    local_60 = local_c0;
  }
  else {
    lVar11 = FUN_009585b8();
    if (local_c0 != lVar11) {
      FUN_0094ca28(extraout_XMM0_Da_04,&local_c0);
      local_218 = (string **)0x0;
      iVar8 = FUN_0098c910();
      if (iVar8 == -1) goto LAB_009496be;
    }
  }
  local_218 = (string **)&g_025197b8;
  local_210 = ((uint64_t)local_210 & 0xffffffff00000000);
  local_1f0 = 0;
  local_208 = 0x0;
  local_200 = 0;
  local_1f8 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 1;
  local_1a6 = 1;
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_268[2] = 0;
  local_268[0] = 0;
  local_268[1] = 0;
  local_128[0] = 0x7ffffffffffffffe;
  FUN_00953fa0();
  local_158 = local_90;
  local_a8 = CONCAT44(local_a8._4_4_,0xfffffffe);
  pcVar20 = (char *)local_128;
  local_128[0] = 0x7ffffffffffffffe;
  FUN_00953fa0();
  local_150 = local_90;
  lVar11 = FUN_009585b8();
  pcVar17 = (char *)param_4;
  if (local_60 == lVar11) {
LAB_00949886:
    local_60 = *(int64_t *)local_58;
    *(int64_t *)param_4 = local_60;
LAB_0094989b:
    local_48 = ((uint64_t)local_48 & 0xffffffff00000000);
    local_50 = local_50 & 0xffffffff00000000;
  }
  else {
    local_128[0] = 300000000;
    FUN_0094ca28(extraout_XMM0_Da_05,&local_60);
    pcVar20 = (char *)local_128;
    FUN_00947768();
    iVar8 = FUN_0098c910();
    if (iVar8 != -1) goto LAB_00949886;
    *(int64_t *)param_4 = local_60;
    uVar28 = FUN_00a521fe();
    FUN_009bafbc(uVar28,"gracePeriodsAllowed");
    lVar11 = FUN_00a521fe();
    iVar8 = *(int *)(lVar11 + 0x84);
    FUN_00a4050e();
    pcVar20 = "gracePeriodResets";
    FUN_009bafbc();
    lVar11 = FUN_00a4050e();
    if (iVar8 <= *(int *)(lVar11 + 0x90)) goto LAB_0094989b;
    FUN_00a521fe();
    pcVar20 = "graceMaxDuration";
    FUN_009bafbc();
    lVar11 = FUN_00a521fe();
    if (*(int *)(lVar11 + 0x80) < 1) goto LAB_0094989b;
    FUN_00a4050e();
    pcVar20 = "graceStartDate";
    FUN_009bafbc();
    FUN_00a4050e();
    std::string::operator=((string *)pcVar17,(string *)pcVar20);
    local_158 = (string **)FUN_009f3f64();
    ppsVar14 = (string **)FUN_009585b8();
    if (local_158 != ppsVar14) {
      pcVar20 = (char *)&local_158;
      FUN_0094ca28();
      FUN_009f3a8b();
      iVar8 = FUN_0098c910();
      if (iVar8 != -1) {
        FUN_00a4050e();
        pcVar20 = "graceCurrentDate";
        FUN_009bafbc();
        FUN_00a4050e();
        std::string::operator=((string *)pcVar17,(string *)pcVar20);
        local_150 = (string **)FUN_009f3f64();
        ppsVar14 = (string **)FUN_009585b8();
        if (local_150 == ppsVar14) {
          pcVar20 = (char *)&local_150;
          FUN_0094ca28();
        }
        iVar8 = FUN_0098c910();
        if (iVar8 != -1) {
          FUN_00a521fe();
          pcVar20 = "graceMaxDuration";
          FUN_009bafbc();
          lVar11 = FUN_00a521fe();
          pcVar17 = (char *)CONCAT71((int7)((uint64_t)pcVar17 >> 8),1);
          local_50 = CONCAT44(local_50._4_4_,(int)pcVar17);
          if (local_2c0 <= *(uint *)(lVar11 + 0x80)) {
            *(int64_t *)param_4 = *(int64_t *)local_58;
            pcVar17 = (char *)param_4;
          }
          local_48 = ((uint64_t)local_48 & 0xffffffff00000000);
          goto LAB_009498a9;
        }
      }
      goto LAB_0094989b;
    }
    lVar11 = *(int64_t *)local_58;
    *(int64_t *)param_4 = lVar11;
    uVar15 = (undefined7)((uint64_t)lVar11 >> 8);
    local_48 = CONCAT44(local_48._4_4_,(int)CONCAT71(uVar15,1));
    local_50 = CONCAT44(local_50._4_4_,(int)CONCAT71(uVar15,1));
    pcVar17 = (char *)param_4;
  }
LAB_009498a9:
  if (local_res8 != (void*)0x0) {
    *local_res8 = 0;
    uVar28 = FUN_00a4086c();
    if (local_128[0] == 0) {
      FUN_00925fd0();
      pcVar20 = (char *)FUN_00926010();
      local_88 = FUN_0095195c;
      local_80 = FUN_00951962;
      FUN_00983230();
      pcVar17 = 
      "void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
      ;
      FUN_00928ab0("void pace::AuthorizationVerifier::verifyDatabaseInfoMachineBindingsAndMasterTime(license_services::LsLicensePtr, license_services::LsObjectCache &, std::shared_ptr<MachineId>, const boost::posix_time::ptime &, boost::posix_time::ptime &, bool *, std::vector<pet::authorize::DatabaseCommitItem> *, std::vector<LsAuthorizationPtr>, const std::vector<pet::authorize::DldLastAuthChangeDate> &, const petpub::VerifyAuthOptions &)"
                   ,0x41ef);
      uVar28 = FUN_009bd14b();
    }
    lVar11 = (*(int64_t **)(local_128[0] + 8))[1] - **(int64_t **)(local_128[0] + 8);
    if (lVar11 != 0) {
      uVar27 = 1;
      do {
        FUN_00a5921e(uVar28,uVar27 - 1);
        FUN_00a1a2be();
        pcVar20 = "authId";
        FUN_009bafbc();
        lVar12 = FUN_00a1a2be();
        uVar28 = extraout_XMM0_Da_06;
        if (*(int *)(lVar12 + 0x30) == 0x4801f777) {
          FUN_00a1a2be();
          pcVar20 = "publisherId";
          FUN_009bafbc();
          lVar12 = FUN_00a1a2be();
          uVar28 = extraout_XMM0_Da_07;
          if (*(int *)(lVar12 + 0x80) == 1) {
            uVar28 = FUN_00a1a2be();
            FUN_009bafbc(uVar28,"state");
            lVar12 = FUN_00a1a2be();
            lVar11 = FUN_008911e2();
            bVar6 = *(byte *)(lVar12 + 0x88);
            pcVar17 = (char *)(uint64_t)(bVar6 >> 1);
            pcVar20 = pcVar17;
            if ((bVar6 & 1) != 0) {
              pcVar20 = *(char **)(lVar12 + 0x90);
            }
            bVar2 = *(byte *)(lVar11 + 0x280);
            if ((bVar2 & 1) == 0) {
              psVar26 = (string *)(uint64_t)(bVar2 >> 1);
            }
            else {
              psVar26 = *(string **)(lVar11 + 0x288);
            }
            if ((string *)pcVar20 != psVar26) goto LAB_00949c81;
            if ((bVar2 & 1) == 0) {
              lVar11 = lVar11 + 0x281;
            }
            else {
              lVar11 = *(int64_t *)(lVar11 + 0x290);
            }
            if ((bVar6 & 1) == 0) {
              if ((string *)pcVar20 != (string *)0x0) {
                pcVar20 = (char *)0x0;
                goto LAB_00949c59;
              }
            }
            else if (((string *)pcVar20 != (string *)0x0) &&
                    (iVar8 = _memcmp(pcVar17,pcVar20,(uint)bVar6), iVar8 != 0)) goto LAB_00949c81;
            break;
          }
        }
        if ((uint64_t)(lVar11 >> 5) <= uVar27) break;
        uVar27 = uVar27 + 1;
      } while( true );
    }
  }
  goto LAB_00949c92;
LAB_00949c81:
  *local_res8 = 1;
  goto LAB_00949c92;
  while (pcVar20 = pcVar20 + 1, pcVar17 != pcVar20) {
LAB_00949c59:
    if (*(string *)(pcVar20 + lVar12 + 0x89) != *(string *)(pcVar20 + lVar11)) goto LAB_00949c81;
  }
LAB_00949c92:
  if (*(char *)(param_5 + 0xd) == '\0') {
    local_128[0] = 0;
    local_128[1] = 0;
    local_128[2] = 0;
    FUN_008b8840();
    *(void*)(local_128[0] + 8) = 1;
    std::string::assign(pcVar17);
    lVar11 = local_128[0];
    FUN_009f4dea();
    puVar13 = *(void**)(lVar11 + 0xe8);
    if (puVar13 < *(void**)(lVar11 + 0xf0)) {
      puVar13[2] = local_98;
      puVar13[1] = psStack_a0;
      *puVar13 = local_a8;
      *(void**)(lVar11 + 0xe8) = puVar13 + 3;
    }
    else {
      if (0xaaaaaaaaaaaaaaa <
          ((int64_t)puVar13 - *(int64_t *)(lVar11 + 0xe0) >> 3) * -0x5555555555555555 + 1U) {
                            std::__vector_base_common<true>::__throw_length_error();
      }
      FUN_008d3ea0(lVar11 + 0xf0);
      *(void*)(local_80 + 0x10) = local_98;
      *(string **)(local_80 + 8) = psStack_a0;
      *(void*)local_80 = local_a8;
      lVar12 = *(int64_t *)(lVar11 + 0xe0);
      for (lVar23 = *(int64_t *)(lVar11 + 0xe8); lVar23 != lVar12; lVar23 = lVar23 + -0x18) {
        *(void*)(local_88 + -8) = *(void*)(lVar23 + -8);
        uVar10 = *(void*)(lVar23 + -0x18);
        *(void*)(local_88 + -0x10) = *(void*)(lVar23 + -0x10);
        *(void*)(local_88 + -0x18) = uVar10;
        *(void*)(lVar23 + -0x18) = 0;
        *(void*)(lVar23 + -0x10) = 0;
        *(void*)(lVar23 + -8) = 0;
        local_88 = local_88 + -0x18;
      }
      *(code **)(lVar11 + 0xe0) = local_88;
      *(code **)(lVar11 + 0xe8) = local_80 + 0x18;
      *(string **)(lVar11 + 0xf0) = local_78;
      FUN_0088cd00();
      psStack_a0 = local_78;
    }
    pcVar20 = (char *)local_128;
    FUN_009291e2();
    FUN_0094cc38();
    pcVar17 = (char *)psStack_a0;
  }
  else {
    local_210 = CONCAT44(local_210._4_4_,4);
    (**(code **)(*local_38 + 0x48))();
    std::string::operator=((string *)pcVar17,(string *)pcVar20);
    local_1f0 = 1;
    FUN_009f35cc();
    FUN_009437da();
  }
  if ((char)local_48 != '\0') {
    local_210 = CONCAT44(local_210._4_4_,2);
    (**(code **)(*local_38 + 0x48))();
    std::string::operator=((string *)pcVar17,(string *)pcVar20);
    local_1f0 = 3;
    FUN_009437da();
  }
  if ((char)local_50 != '\0') {
    local_210 = CONCAT44(local_210._4_4_,1);
    (**(code **)(*local_38 + 0x48))();
    std::string::operator=((string *)pcVar17,(string *)pcVar20);
    local_1f0 = 1;
    FUN_009437da();
  }
  if ((local_268[0] & 1) != 0) {
    operator_delete(pcVar17);
  }
  if ((local_e8 & 1) != 0) {
    operator_delete(pcVar17);
  }
  FUN_008b5046();
  FUN_008cc38e();
  FUN_0094cc38();
  if ((local_100 & 1) != 0) {
    operator_delete(pcVar17);
  }
LAB_0094a00d:
  if (((byte)local_290[0] & 1) != 0) {
    operator_delete(pcVar17);
  }
  if (((uint64_t)local_230[0] & 1) != 0) {
    operator_delete(pcVar17);
  }
  if ((local_248 & 1) != 0) {
    operator_delete(pcVar17);
  }
  if (((uint64_t)local_148 & 1) != 0) {
    operator_delete(pcVar17);
  }
  FUN_008defa0();
  return;
}

