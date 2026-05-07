// ===================================================================
// LsObjectCache — Complete reconstructed pseudocode
// 3 functions
// ===================================================================


// ============================================================
// 009b93be
// ============================================================
// Function: FUN_009b93be
// Address: 009b93be
// Size: 785 bytes
// Class: LsObjectCache

uint64_t FUN_009b93be(ulong param_1,uint64_t param_2,ulong param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  void*puVar8;
  ulong uVar9;
  uint64_t this_ptr;
  int64_t *plVar10;
  int64_t *plVar11;
  
  uVar9 = param_1;
  pvVar3 = operator_new(param_1);
  FUN_00adae60();
  plVar4 = operator_new(uVar9);
  plVar5 = plVar4 + 1;
  plVar4[2] = 0;
  plVar4[1] = 0;
  *plVar4 = (int64_t)&g_0251fbf0;
  plVar4[3] = (int64_t)pvVar3;
  pvVar3 = operator_new(uVar9);
  LOCK();
  plVar4[1] = plVar4[1] + 1;
  UNLOCK();
  FUN_0094e0f0();
  plVar6 = operator_new(uVar9);
  plVar6[2] = 0;
  plVar6[1] = 0;
  *plVar6 = (int64_t)&g_0251e5e8;
  plVar6[3] = (int64_t)pvVar3;
  plVar7 = plVar6;
  if (plVar4 != (int64_t *)0x0) {
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
  *plVar7 = (int64_t)&g_0251fba0;
  plVar7[3] = (int64_t)pvVar3;
  if (plVar6 != (int64_t *)0x0) {
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
  if (plVar6 != (int64_t *)0x0) {
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
  *puVar8 = &g_0251dc10;
  puVar8[1] = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  LOCK();
  plVar7[1] = plVar7[1] + 1;
  UNLOCK();
  FUN_009ba1be();
  if (plVar7 != (int64_t *)0x0) {
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
  return this_ptr;
}



// ============================================================
// 009b9b44
// ============================================================
// Function: FUN_009b9b44
// Address: 009b9b44
// Size: 575 bytes
// Class: LsObjectCache
// String references:
//   "signerSerialNumber"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/liblicenseservices/LsObjec...
//   "Query not supported in minimized liblicensessupport."
//   "bool license_services::LsObjectCache::getCertificateChainsIntoCache(const std::set<std::string> &, ...

uint64_t FUN_009b9b44(uint64_t param_1,int64_t *param_2)

{
  string *psVar1;
  uint64_t uVar2;
  void*puVar3;
  string *psVar4;
  string *psVar5;
  char *pcVar6;
  void*arg1;
  uint64_t uVar7;
  bool bVar8;
  byte local_88;
  void*local_68;
  uint64_t local_60;
  int64_t local_58;
  int64_t *local_40;
  uint8_t local_31;
  
  local_58 = 0;
  local_60 = 0;
  psVar5 = (string *)&local_68;
  local_68 = &local_60;
  psVar4 = (string *)*arg1;
  while (psVar1 = psVar4, local_40 = param_2, psVar1 != (string *)(arg1 + 1)) {
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
  if (param_2 != (int64_t *)0x0) {
    FUN_00a55628();
    param_2[2] = 0;
    *param_2 = (int64_t)(param_2 + 1);
    param_2[1] = 0;
  }
  bVar8 = local_58 != 0;
  uVar7 = CONCAT71((int7)((uint64_t)param_2 >> 8),bVar8);
  if (bVar8) {
    local_31 = bVar8;
    FUN_00a2b7d8();
    for (uVar7 = 0; uVar2 = FUN_00a2c51a(), uVar7 < uVar2; uVar7 = uVar7 + 1) {
      FUN_00a2be48();
      FUN_00a3e9da();
      FUN_009bafbc();
      FUN_00a3e9da();
      puVar3 = (void*)FUN_009ba758();
      if ((puVar3 != &local_60) && (FUN_009ba7bc(), local_40 != (int64_t *)0x0)) {
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
    uVar7 = CONCAT71((int7)((uint64_t)&local_68 >> 8),local_31);
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



// ============================================================
// 009b8f5a
// ============================================================
// Function: FUN_009b8f5a
// Address: 009b8f5a
// Size: 671 bytes
// Class: LsObjectCache
// String references:
//   "LsObjectCache::LsObjectCache: Could not create an instance of LicenseDbClient"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/liblicenseservices/LsObjec...
//   "license_services::LsObjectCache::LsObjectCache(const license_services::LsObjectStore &, const std::...

void FUN_009b8f5a(uint8_t param_1,byte *param_2,uint64_t param_3,ulong param_4)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  size_t sVar4;
  int iVar5;
  uint32_t extraout_var;
  uint64_t uVar6;
  string *this;
  char *pcVar7;
  string *psVar8;
  void*this_ptr;
  uint32_t uVar9;
  uint32_t local_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  
  *this_ptr = &g_02521e18;
  *(void*)(this_ptr + 1) = 0;
  FUN_0088ff40();
  *(void*)(this_ptr + 0x1b4) = param_1;
  this_ptr[0x1b5] = 0;
  this_ptr[0x1b6] = 0;
  FUN_0088ff40();
  this = (string *)(this_ptr + 0x36a);
  this_ptr[0x36b] = 0;
  this_ptr[0x36a] = 0;
  this_ptr[0x369] = this;
  *(void*)(this_ptr + 0x36c) = 0;
  operator_new((ulong)this);
  FUN_009bb494();
  psVar8 = (string *)0x0;
  FUN_009b9ef4();
  this_ptr[0x370] = 0;
  this_ptr[0x36f] = 0;
  operator_new((ulong)this);
  uVar9 = std::string::string(this,psVar8);
  FUN_009b9fac(uVar9,0);
  *(void*)(this_ptr + 0x373) = 0;
  this_ptr[0x375] = 0;
  this_ptr[0x376] = 0;
  this_ptr[0x374] = this_ptr + 0x375;
  uVar6 = g_02744470;
  sVar4 = _strlen((char *)(this_ptr + 0x375));
  if ((*param_2 & 1) == 0) {
    pcVar7 = (char *)(uint64_t)(*param_2 >> 1);
  }
  else {
    pcVar7 = *(char **)(param_2 + 8);
  }
  if (((char *)CONCAT44(extraout_var,sVar4) != pcVar7) ||
     (iVar5 = std::string::compare
                        ((ulong)uVar6,0xffffffff,(char *)CONCAT44(extraout_var,sVar4),param_4),
     iVar5 != 0)) {
    FUN_009b93be(2,0,1);
    plVar3 = (int64_t *)this_ptr[0x1b6];
    *(void*)(this_ptr + 0x1b5) = local_58;
    *(void*)((int64_t)this_ptr + 0xdac) = uStack_54;
    *(void*)(this_ptr + 0x1b6) = uStack_50;
    *(void*)((int64_t)this_ptr + 0xdb4) = uStack_4c;
    if (plVar3 != (int64_t *)0x0) {
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
    if (this_ptr[0x1b5] == 0) {
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
  FUN_009bc246(uVar9,this_ptr + 0x1b7);
  FUN_009bc232();
  return;
}

