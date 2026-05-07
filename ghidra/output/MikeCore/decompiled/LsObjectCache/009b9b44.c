// Function: FUN_009b9b44
// Address: 009b9b44
// Size: 575 bytes
// Class: LsObjectCache
// String references:
//   "signerSerialNumber"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/liblicenseservices/LsObjec...
//   "Query not supported in minimized liblicensessupport."
//   "bool license_services::LsObjectCache::getCertificateChainsIntoCache(const std::set<std::string> &, ...


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


