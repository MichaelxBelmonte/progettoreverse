// Function: FUN_009b8f5a
// Address: 009b8f5a
// Size: 671 bytes
// Class: LsObjectCache
// String references:
//   "LsObjectCache::LsObjectCache: Could not create an instance of LicenseDbClient"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/liblicenseservices/LsObjec...
//   "license_services::LsObjectCache::LsObjectCache(const license_services::LsObjectStore &, const std::...


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


