// Reconstructed implementation of LsObjectCache
// From MikeCore binary — reverse-engineered pseudocode

#include "LsObjectCache.h"

// ============================================================
// @009b93be — 785 bytes
// ============================================================

undefined8 FUN_009b93be(ulong param_1,undefined8 param_2,ulong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 unaff_RDI;
  longlong *plVar10;
  longlong *plVar11;
  
  uVar9 = param_1;
  pvVar3 = operator_new(param_1);
  FUN_00adae60();
  plVar4 = operator_new(uVar9);
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  plVar4[1] = 0;
  *plVar4 = (longlong)&DAT_0251fbf0;
  plVar4[3] = (longlong)pvVar3;
  pvVar3 = operator_new(uVar9);
  LOCK();
  plVar4[1] = plVar4[1] + 1;
  UNLOCK();
  FUN_0094e0f0();
  plVar6 = operator_new(uVar9);
  plVar6[2] = 0;
  plVar6[1] = 0;
  *plVar6 = (longlong)&DAT_0251e5e8;
  plVar6[3] = (longlong)pvVar3;
  plVar7 = plVar6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar4 + 1;
    lVar2 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar10 = plVar6 + 1;
  uVar9 = (ulong)plVar7;
  pvVar3 = operator_new(uVar9);
  LOCK();
  plVar6[1] = plVar6[1] + 1;
  UNLOCK();
  FUN_00977530();
  plVar7 = operator_new(uVar9);
  plVar7[2] = 0;
  plVar7[1] = 0;
  *plVar7 = (longlong)&DAT_0251fba0;
  plVar7[3] = (longlong)pvVar3;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar6 + 1;
    lVar2 = *plVar11;
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar11 = plVar7 + 1;
  LOCK();
  plVar6[1] = plVar6[1] + 1;
  UNLOCK();
  FUN_009f2044(param_3,param_1);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar8 = operator_new(param_3);
  LOCK();
  plVar7[1] = plVar7[1] + 1;
  UNLOCK();
  *puVar8 = &DAT_0251dc10;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  LOCK();
  plVar7[1] = plVar7[1] + 1;
  UNLOCK();
  FUN_009ba1be();
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_009ba30c();
  LOCK();
  lVar2 = *plVar11;
  *plVar11 = *plVar11 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar7 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  LOCK();
  lVar2 = *plVar11;
  *plVar11 = *plVar11 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar7 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  LOCK();
  lVar2 = *plVar10;
  *plVar10 = *plVar10 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  LOCK();
  lVar2 = *plVar5;
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))();
    std::__shared_weak_count::__release_weak();
  }
  return unaff_RDI;
}




// ============================================================
// @009b8f5a — 671 bytes
// str: ""LsObjectCache::LsObjectCache: Could not create an instance of LicenseDbClient""
// str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/liblicenseservices/LsObjec"
// str: ""license_services::LsObjectCache::LsObjectCache(const license_services::LsObjectStore &, const std::"
// ============================================================

/* WARNING: Removing unreachable block (ram,0x009b913b) */
/* WARNING: Removing unreachable block (ram,0x009b914d) */

void FUN_009b8f5a(undefined1 param_1,byte *param_2,undefined8 param_3,ulong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  size_t sVar4;
  int iVar5;
  undefined4 extraout_var;
  undefined8 uVar6;
  string *this;
  char *pcVar7;
  string *psVar8;
  undefined8 *unaff_RDI;
  undefined4 uVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  *unaff_RDI = &DAT_02521e18;
  *(undefined1 *)(unaff_RDI + 1) = 0;
  FUN_0088ff40();
  *(undefined1 *)(unaff_RDI + 0x1b4) = param_1;
  unaff_RDI[0x1b5] = 0;
  unaff_RDI[0x1b6] = 0;
  FUN_0088ff40();
  this = (string *)(unaff_RDI + 0x36a);
  unaff_RDI[0x36b] = 0;
  unaff_RDI[0x36a] = 0;
  unaff_RDI[0x369] = this;
  *(undefined4 *)(unaff_RDI + 0x36c) = 0;
  operator_new((ulong)this);
  FUN_009bb494();
  psVar8 = (string *)0x0;
  FUN_009b9ef4();
  unaff_RDI[0x370] = 0;
  unaff_RDI[0x36f] = 0;
  operator_new((ulong)this);
  uVar9 = std::string::string(this,psVar8);
  FUN_009b9fac(uVar9,0);
  *(undefined1 *)(unaff_RDI + 0x373) = 0;
  unaff_RDI[0x375] = 0;
  unaff_RDI[0x376] = 0;
  unaff_RDI[0x374] = unaff_RDI + 0x375;
  uVar6 = DAT_02744470;
  sVar4 = _strlen((char *)(unaff_RDI + 0x375));
  if ((*param_2 & 1) == 0) {
    pcVar7 = (char *)(ulonglong)(*param_2 >> 1);
  }
  else {
    pcVar7 = *(char **)(param_2 + 8);
  }
  if (((char *)CONCAT44(extraout_var,sVar4) != pcVar7) ||
     (iVar5 = std::string::compare
                        ((ulong)uVar6,0xffffffff,(char *)CONCAT44(extraout_var,sVar4),param_4),
     iVar5 != 0)) {
    FUN_009b93be(2,0,1);
    plVar3 = (longlong *)unaff_RDI[0x1b6];
    *(undefined4 *)(unaff_RDI + 0x1b5) = local_58;
    *(undefined4 *)((longlong)unaff_RDI + 0xdac) = uStack_54;
    *(undefined4 *)(unaff_RDI + 0x1b6) = uStack_50;
    *(undefined4 *)((longlong)unaff_RDI + 0xdb4) = uStack_4c;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    if (unaff_RDI[0x1b5] == 0) {
      FUN_00925fd0();
      uVar6 = FUN_00926010();
      uVar9 = FUN_00928ab0("license_services::LsObjectCache::LsObjectCache(const license_services::LsObjectStore &, const std::string &, bool)"
                           ,0xba);
      FUN_009c78cb(uVar9,uVar6);
    }
  }
  FUN_00a6271c();
  uVar9 = FUN_00a61c5c();
  uVar9 = FUN_00a61f12(uVar9,0);
  FUN_009bc246(uVar9,unaff_RDI + 0x1b7);
  FUN_009bc232();
  return;
}




// ============================================================
// @009b9b44 — 575 bytes
// str: ""signerSerialNumber""
// str: ""/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/liblicenseservices/LsObjec"
// str: ""Query not supported in minimized liblicensessupport.""
// str: ""bool license_services::LsObjectCache::getCertificateChainsIntoCache(const std::set<std::string> &, "
// ============================================================

ulonglong FUN_009b9b44(undefined8 param_1,longlong *param_2)

{
  string *psVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  string *psVar4;
  string *psVar5;
  char *pcVar6;
  undefined8 *unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  byte local_88;
  undefined8 *local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *local_40;
  undefined1 local_31;
  
  local_58 = 0;
  local_60 = 0;
  psVar5 = (string *)&local_68;
  local_68 = &local_60;
  psVar4 = (string *)*unaff_RSI;
  while (psVar1 = psVar4, local_40 = param_2, psVar1 != (string *)(unaff_RSI + 1)) {
    FUN_009bc9f0(psVar1 + 0x20,psVar1 + 0x20);
    psVar5 = *(string **)(psVar1 + 8);
    param_2 = local_40;
    if (*(string **)(psVar1 + 8) == (string *)0x0) {
      psVar5 = (string *)0x0;
      psVar4 = *(string **)(psVar1 + 0x10);
      if (*(string **)*(string **)(psVar1 + 0x10) != psVar1) {
        do {
          psVar1 = *(string **)(psVar1 + 0x10);
          psVar5 = psVar1;
          psVar4 = *(string **)(psVar1 + 0x10);
        } while (*(string **)*(string **)(psVar1 + 0x10) != psVar1);
      }
    }
    else {
      do {
        psVar4 = psVar5;
        psVar5 = *(string **)psVar4;
      } while (psVar5 != (string *)0x0);
      psVar5 = (string *)0x0;
    }
  }
  if (param_2 != (longlong *)0x0) {
    FUN_00a55628();
    param_2[2] = 0;
    *param_2 = (longlong)(param_2 + 1);
    param_2[1] = 0;
  }
  bVar8 = local_58 != 0;
  uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),bVar8);
  if (bVar8) {
    local_31 = bVar8;
    FUN_00a2b7d8();
    for (uVar7 = 0; uVar2 = FUN_00a2c51a(), uVar7 < uVar2; uVar7 = uVar7 + 1) {
      FUN_00a2be48();
      FUN_00a3e9da();
      FUN_009bafbc();
      FUN_00a3e9da();
      puVar3 = (undefined8 *)FUN_009ba758();
      if ((puVar3 != &local_60) && (FUN_009ba7bc(), local_40 != (longlong *)0x0)) {
        FUN_00a2be48();
        FUN_00a3e9da();
        pcVar6 = "signerSerialNumber";
        FUN_009bafbc();
        FUN_00a3e9da();
        std::string::string(psVar5,(string *)pcVar6);
        FUN_009ba83a();
        if ((local_88 & 1) != 0) {
          operator_delete(psVar5);
        }
      }
    }
    uVar7 = CONCAT71((int7)((ulonglong)&local_68 >> 8),local_31);
    if (local_58 != 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00928ab0("bool license_services::LsObjectCache::getCertificateChainsIntoCache(const std::set<std::string> &, std::map<std::string, pace::NoDeletePtr<LsCertificateChain> > *)"
                   ,0x48b);
      FUN_009c78cb();
    }
  }
  FUN_009bcbb8();
  return uVar7 & 0xffffffff;
}



