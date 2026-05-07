// Function: FUN_00ab6efc
// Address: 00ab6efc
// Size: 1063 bytes
// Class: OsSignatureMac
// String references:
//   "OsSignatureMac::getAllCdHashes - Could not get the kSecCodeInfoDigestAlgorithms array."
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libbinarydsig/platform/mac...
//   "void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)"
//   "OsSignatureMac::getAllCdHashes - Could not get the kSecCodeInfoCdHashes array."
//   "OsSignatureMac::getAllCdHashes - Could not access the SecCodeInfo digest algorithm at index %d."
//   "OsSignatureMac::getAllCdHashes - Could not convert the SecCodeInfo digest algorithm at index %d to ...
//   "OsSignatureMac::getAllCdHashes - Could not access the SecCodeInfo unique info at index %d."


void FUN_00ab6efc(longlong *param_1,undefined8 param_2,undefined8 **param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  size_t sVar7;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  undefined8 *local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  
  plVar6 = *(longlong **)(unaff_RDI + 0x50);
  while (plVar2 = plVar6, plVar2 != (longlong *)(unaff_RDI + 0x58)) {
    local_64 = (undefined4)plVar2[4];
    cVar3 = _CFDictionaryGetValueIfPresent(param_1,&local_60);
    if (cVar3 == '\0') {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00928ab0("void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)",0x1ea);
      FUN_009bd5cb();
    }
    cVar3 = _CFDictionaryGetValueIfPresent();
    if (cVar3 == '\0') {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00928ab0("void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)",0x1f1);
      FUN_009bd5cb();
    }
    local_b0 = local_60;
    local_a8 = _CFArrayGetCount();
    local_88 = &local_80;
    pcVar5 = (char *)0x0;
    local_78 = 0;
    local_80 = 0;
    local_58 = 0;
    if (0 < local_a8) {
      do {
        sVar7 = (size_t)param_3;
        lVar4 = _CFArrayGetValueAtIndex();
        if (lVar4 == 0) {
          FUN_00925fd0();
          FUN_00926010();
          local_48 = (code *)&local_58;
          local_40 = FUN_0094e696;
          local_38 = FUN_0094e69c;
          FUN_00983230();
          pcVar5 = "void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)";
          FUN_00928ab0("void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)",0x203
                      );
          FUN_009bd5cb();
        }
        local_70 = 0;
        cVar3 = _CFNumberGetValue();
        if (cVar3 == '\0') {
          FUN_00925fd0();
          FUN_00926010();
          local_48 = (code *)&local_58;
          local_40 = FUN_0094e696;
          local_38 = FUN_0094e69c;
          FUN_00983230();
          pcVar5 = "void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)";
          FUN_00928ab0("void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)",0x20c
                      );
          FUN_009bd5cb();
        }
        lVar4 = _CFArrayGetValueAtIndex();
        if (lVar4 == 0) {
          FUN_00925fd0();
          FUN_00926010();
          local_48 = (code *)&local_58;
          local_40 = FUN_0094e696;
          local_38 = FUN_0094e69c;
          FUN_00983230();
          pcVar5 = "void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)";
          FUN_00928ab0("void pace::OsSignatureMac::getAllCdHashes(pace::CpuTypeCdHashMap_T &)",0x213
                      );
          FUN_009bd5cb();
        }
        _CFDataGetLength();
        FUN_009543d0();
        _CFDataGetBytePtr();
        _memcpy(pcVar5,local_40 + -(longlong)local_48,sVar7);
        local_b8 = local_70;
        local_90 = &local_b8;
        param_3 = &local_50;
        lVar4 = FUN_00abb812(&local_90,&DAT_023d3e9b);
        pcVar5 = (char *)&local_48;
        if ((code **)pcVar5 != (code **)(lVar4 + 0x28)) {
          FUN_009ad770(pcVar5,local_40);
        }
        if (local_48 != (code *)0x0) {
          local_40 = local_48;
          operator_delete(pcVar5);
        }
        local_58 = local_58 + 1;
      } while (local_58 < local_a8);
    }
    local_48 = (code *)&local_64;
    param_3 = &local_90;
    lVar4 = FUN_00abb978(&local_48,&DAT_023d3e9b);
    if (&local_88 != (undefined8 **)(lVar4 + 0x28)) {
      FUN_00abba68(&local_88,&local_80);
    }
    FUN_00abb7be();
    plVar1 = (longlong *)plVar2[1];
    if ((longlong *)plVar2[1] == (longlong *)0x0) {
      plVar6 = (longlong *)plVar2[2];
      param_1 = (longlong *)0x0;
      if (*(longlong **)plVar2[2] != plVar2) {
        do {
          plVar2 = (longlong *)plVar2[2];
          plVar6 = (longlong *)plVar2[2];
          param_1 = plVar2;
        } while (*(longlong **)plVar2[2] != plVar2);
      }
    }
    else {
      do {
        plVar6 = plVar1;
        plVar1 = (longlong *)*plVar6;
      } while (plVar1 != (longlong *)0x0);
      param_1 = (longlong *)0x0;
    }
  }
  return;
}


