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


longlong * FUN_00ab8a5c(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulong uVar12;
  undefined *puVar13;
  string *this;
  string *psVar14;
  ulonglong uVar15;
  longlong *unaff_RDI;
  undefined4 uVar16;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  longlong local_218;
  undefined8 local_210;
  undefined *local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined *local_1f0;
  longlong local_1e8;
  int local_1dc;
  undefined8 *local_1d8;
  undefined8 *puStack_1d0;
  undefined8 *local_1c8;
  longlong local_1b8;
  code *local_1b0;
  code *local_1a8;
  code *local_1a0;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  unaff_RDI[1] = 0;
  *unaff_RDI = 0;
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
    *puVar7 = &DAT_0252b020;
    puVar7[3] = pvVar6;
    *unaff_RDI = (longlong)pvVar6;
    plVar2 = (longlong *)unaff_RDI[1];
    unaff_RDI[1] = (longlong)puVar7;
    if (plVar2 != (longlong *)0x0) {
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
    local_1d8 = (undefined8 *)0x0;
    puStack_1d0 = (undefined8 *)0x0;
    local_1c8 = (undefined8 *)0x0;
    lVar8 = _CFArrayGetCount();
    local_1b8 = 0;
    if (0 < lVar8) {
      do {
        lVar9 = _CFArrayGetValueAtIndex();
        if (lVar9 == 0) {
          FUN_00925fd0();
          uVar10 = FUN_00926010();
          local_1b0 = (code *)&local_1b8;
          local_1a8 = FUN_0094e696;
          local_1a0 = FUN_0094e69c;
          FUN_00983230();
          uVar16 = FUN_00928ab0("pace::SharedSignedDigest_T pace::OsSignatureMac::digestSecCodeCertChain(CFDictionaryRef, const std::string &)"
                                ,0x732);
          FUN_009bd5cb(uVar16,uVar10);
        }
        local_208 = &DAT_0252aea8;
        uStack_1f8 = 0;
        local_200 = 0;
        local_1f0 = &DAT_0252af70;
        local_1e8 = 0;
        if (PTR__SecCertificateCopyData_0249c228 == (undefined *)0x0) {
          if (PTR__SecCertificateGetData_0249c230 == (undefined *)0x0) {
            FUN_00925fd0();
            uVar10 = FUN_00926010();
            local_1b0 = (code *)&local_1b8;
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
              local_1b0 = (code *)&local_1dc;
              local_1a8 = FUN_009cac80;
              local_1a0 = FUN_009cefa0;
              FUN_00983230();
              local_1b0 = (code *)&local_1b8;
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
            local_1b0 = (code *)&local_1b8;
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
          lVar9 = ((longlong)puStack_1d0 - (longlong)local_1d8 >> 3) * -0x3333333333333333;
          if (0x666666666666666 < lVar9 + 1U) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          FUN_00abc46a(&local_1c8,lVar9);
          *(undefined **)local_1a0 = &DAT_0252aea8;
          *(undefined8 *)(local_1a0 + 8) = local_200;
          *(undefined8 *)(local_1a0 + 0x10) = uStack_1f8;
          *(undefined **)(local_1a0 + 0x18) = &DAT_0252af70;
          *(longlong *)(local_1a0 + 0x20) = local_1e8;
          if (local_1e8 != 0) {
            _CFRetain();
          }
          local_1a0 = local_1a0 + 0x28;
          FUN_00abc398();
          FUN_00abc4dc();
        }
        else {
          *puStack_1d0 = &DAT_0252aea8;
          puStack_1d0[1] = local_200;
          puStack_1d0[2] = uStack_1f8;
          puStack_1d0[3] = &DAT_0252af70;
          puStack_1d0[4] = local_1e8;
          if (local_1e8 != 0) {
            _CFRetain();
          }
          puStack_1d0 = puVar7 + 5;
        }
        local_208 = &DAT_0252aea8;
        FUN_00abb66e();
        local_1b8 = local_1b8 + 1;
      } while (local_1b8 < lVar8);
    }
    local_1b0 = FUN_00ab9bb6;
    FUN_00abc51d();
    uVar16 = FUN_0098ede4();
    puVar3 = puStack_1d0;
    for (puVar7 = local_1d8; puVar7 != puVar3; puVar7 = puVar7 + 5) {
      uVar16 = FUN_0098ef68(uVar16,*(undefined4 *)(puVar7 + 1));
    }
    lVar8 = *unaff_RDI;
    uVar5 = FUN_0098f810();
    uVar15 = (ulonglong)uVar5;
    psVar14 = *(string **)(lVar8 + 0x118);
    uVar11 = *(longlong *)(lVar8 + 0x120) - (longlong)psVar14;
    if (uVar11 < uVar15) {
      FUN_0088d550();
      psVar14 = *(string **)(lVar8 + 0x118);
    }
    else if (uVar15 < uVar11) {
      *(string **)(lVar8 + 0x120) = psVar14 + uVar15;
    }
    this = (string *)0x0;
    (**(code **)(local_1b0 + 0x48))();
    *(undefined1 *)(*unaff_RDI + 0x134) = 1;
    FUN_008dfe28();
    std::string::operator=(this,psVar14);
    *(undefined1 *)(*unaff_RDI + 0x110) = 1;
    FUN_008d6858();
    std::string::operator=(this,psVar14);
    *(undefined1 *)(*unaff_RDI + 0x111) = 1;
    std::string::operator=(this,psVar14);
    FUN_0098edfa();
    FUN_00abc342();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return unaff_RDI;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


