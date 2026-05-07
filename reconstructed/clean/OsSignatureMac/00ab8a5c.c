// Function: FUN_00ab8a5c
// Address: 00ab8a5c
// Size: 1829 bytes
// Class: OsSignatureMac
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libbinarydsig/platform/mac...
//   "CFArrayGetValueAtIndex returned no certificate data at index %d."
//   "pace::SharedSignedDigest_T pace::OsSignatureMac::digestSecCodeCertChain(CFDictionaryRef, const std:...
//   "SecCertificateCopyData returned a NULL attempting to access the certificate at index %d."
//   "SecCertificateGetData returned error %d attempting to access the certificate at index %d."
//   "Neither SecCertificateCopyData nor SecCertificateGetData defined while attempting to access the cer...

int64_t * FUN_00ab8a5c(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  void*puVar3;
  char cVar4;
  uint uVar5;
  void *pvVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  ulong uVar12;
  void*puVar13;
  string *this;
  string *psVar14;
  uint64_t uVar15;
  int64_t *this_ptr;
  uint32_t uVar16;
  uint32_t local_238;
  uint32_t uStack_234;
  uint32_t uStack_230;
  uint32_t uStack_22c;
  int64_t local_218;
  uint64_t local_210;
  void*local_208;
  uint64_t local_200;
  uint64_t uStack_1f8;
  void*local_1f0;
  int64_t local_1e8;
  int local_1dc;
  void*local_1d8;
  void*puStack_1d0;
  void*local_1c8;
  int64_t local_1b8;
  code *local_1b0;
  code *local_1a8;
  code *local_1a0;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  this_ptr[1] = 0;
  *this_ptr = 0;
  puVar13 = PTR__kSecCodeInfoCertificates_024a9980;
  local_210 = param_1;
  cVar4 = _CFDictionaryGetValueIfPresent(PTR__kSecCodeInfoCertificates_024a9980,&local_218);
  uVar12 = (ulong)puVar13;
  if ((cVar4 != '\0') && (local_218 != 0)) {
    pvVar6 = operator_new(uVar12);
    FUN_0097c240();
    puVar7 = operator_new(uVar12);
    puVar7[2] = 0;
    puVar7[1] = 0;
    *puVar7 = &g_0252b020;
    puVar7[3] = pvVar6;
    *this_ptr = (int64_t)pvVar6;
    plVar2 = (int64_t *)this_ptr[1];
    this_ptr[1] = (int64_t)puVar7;
    if (plVar2 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar8 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar8 == 0) {
        (**(code **)(*plVar2 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    local_1d8 = (void*)0x0;
    puStack_1d0 = (void*)0x0;
    local_1c8 = (void*)0x0;
    lVar8 = _CFArrayGetCount();
    local_1b8 = 0;
    if (0 < lVar8) {
      do {
        lVar9 = _CFArrayGetValueAtIndex();
        if (lVar9 == 0) {
          FUN_00925fd0();
          uVar10 = FUN_00926010();
          local_1b0 = &local_1b8;
          local_1a8 = FUN_0094e696;
          local_1a0 = FUN_0094e69c;
          FUN_00983230();
          uVar16 = FUN_00928ab0("pace::SharedSignedDigest_T pace::OsSignatureMac::digestSecCodeCertChain(CFDictionaryRef, const std::string &)"
                                ,0x732);
          FUN_009bd5cb(uVar16,uVar10);
        }
        local_208 = &g_0252aea8;
        uStack_1f8 = 0;
        local_200 = 0;
        local_1f0 = &g_0252af70;
        local_1e8 = 0;
        if (PTR__SecCertificateCopyData_0249c228 == (void*)0x0) {
          if (PTR__SecCertificateGetData_0249c230 == (void*)0x0) {
            FUN_00925fd0();
            uVar10 = FUN_00926010();
            local_1b0 = &local_1b8;
            local_1a8 = FUN_0094e696;
            local_1a0 = FUN_0094e69c;
            FUN_00983230();
            uVar16 = FUN_00928ab0("pace::SharedSignedDigest_T pace::OsSignatureMac::digestSecCodeCertChain(CFDictionaryRef, const std::string &)"
                                  ,0x794);
            FUN_009bd5cb(uVar16,uVar10);
          }
          else {
            local_1dc = _SecCertificateGetData();
            if (local_1dc != 0) {
              FUN_00925fd0();
              uVar10 = FUN_00926010();
              local_1b0 = &local_1dc;
              local_1a8 = FUN_009cac80;
              local_1a0 = FUN_009cefa0;
              FUN_00983230();
              local_1b0 = &local_1b8;
              local_1a8 = FUN_0094e696;
              local_1a0 = FUN_0094e69c;
              FUN_00983230();
              uVar16 = FUN_00928ab0("pace::SharedSignedDigest_T pace::OsSignatureMac::digestSecCodeCertChain(CFDictionaryRef, const std::string &)"
                                    ,0x784);
              FUN_009bd5cb(uVar16,uVar10);
            }
            local_200 = CONCAT44(uStack_234,local_238);
            uStack_1f8 = CONCAT44(uStack_22c,uStack_230);
          }
        }
        else {
          lVar9 = _SecCertificateCopyData();
          if (local_1e8 != 0) {
            _CFRelease();
          }
          local_1e8 = lVar9;
          if (lVar9 == 0) {
            FUN_00925fd0();
            uVar10 = FUN_00926010();
            local_1b0 = &local_1b8;
            local_1a8 = FUN_0094e696;
            local_1a0 = FUN_0094e69c;
            FUN_00983230();
            uVar16 = FUN_00928ab0("pace::SharedSignedDigest_T pace::OsSignatureMac::digestSecCodeCertChain(CFDictionaryRef, const std::string &)"
                                  ,0x774);
            FUN_009bd5cb(uVar16,uVar10);
          }
          local_200 = _CFDataGetLength();
          uStack_1f8 = _CFDataGetBytePtr();
        }
        puVar7 = puStack_1d0;
        if (puStack_1d0 == local_1c8) {
          lVar9 = ((int64_t)puStack_1d0 - (int64_t)local_1d8 >> 3) * -0x3333333333333333;
          if (0x666666666666666 < lVar9 + 1U) {
                                std::__vector_base_common<true>::__throw_length_error();
          }
          FUN_00abc46a(&local_1c8,lVar9);
          *(void**)local_1a0 = &g_0252aea8;
          *(void*)(local_1a0 + 8) = local_200;
          *(void*)(local_1a0 + 0x10) = uStack_1f8;
          *(void**)(local_1a0 + 0x18) = &g_0252af70;
          *(int64_t *)(local_1a0 + 0x20) = local_1e8;
          if (local_1e8 != 0) {
            _CFRetain();
          }
          local_1a0 = local_1a0 + 0x28;
          FUN_00abc398();
          FUN_00abc4dc();
        }
        else {
          *puStack_1d0 = &g_0252aea8;
          puStack_1d0[1] = local_200;
          puStack_1d0[2] = uStack_1f8;
          puStack_1d0[3] = &g_0252af70;
          puStack_1d0[4] = local_1e8;
          if (local_1e8 != 0) {
            _CFRetain();
          }
          puStack_1d0 = puVar7 + 5;
        }
        local_208 = &g_0252aea8;
        FUN_00abb66e();
        local_1b8 = local_1b8 + 1;
      } while (local_1b8 < lVar8);
    }
    local_1b0 = FUN_00ab9bb6;
    FUN_00abc51d();
    uVar16 = FUN_0098ede4();
    puVar3 = puStack_1d0;
    for (puVar7 = local_1d8; puVar7 != puVar3; puVar7 = puVar7 + 5) {
      uVar16 = FUN_0098ef68(uVar16,*(void*)(puVar7 + 1));
    }
    lVar8 = *this_ptr;
    uVar5 = FUN_0098f810();
    uVar15 = (uint64_t)uVar5;
    psVar14 = *(string **)(lVar8 + 0x118);
    uVar11 = *(int64_t *)(lVar8 + 0x120) - (int64_t)psVar14;
    if (uVar11 < uVar15) {
      FUN_0088d550();
      psVar14 = *(string **)(lVar8 + 0x118);
    }
    else if (uVar15 < uVar11) {
      *(string **)(lVar8 + 0x120) = psVar14 + uVar15;
    }
    this = (string *)0x0;
    (**(code **)(local_1b0 + 0x48))();
    *(void*)(*this_ptr + 0x134) = 1;
    FUN_008dfe28();
    std::string::operator=(this,psVar14);
    *(void*)(*this_ptr + 0x110) = 1;
    FUN_008d6858();
    std::string::operator=(this,psVar14);
    *(void*)(*this_ptr + 0x111) = 1;
    std::string::operator=(this,psVar14);
    FUN_0098edfa();
    FUN_00abc342();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return this_ptr;
  }
                      ___stack_chk_fail();
}

