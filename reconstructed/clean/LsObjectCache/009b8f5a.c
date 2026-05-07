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

