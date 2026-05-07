// Function: FUN_009b5048
// Address: 009b5048
// Size: 1190 bytes
// Class: Unknown
// String references:
//   ", "
//   "The object with LsRelation value %s is already registered as a signature participant, and strint ch...
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/liblicenseservices/DsigSig...
//   "bool license_services::DsigSignatureGenerator::registerSigningParticipant(std::string, const licens...
//   "Duplicate uuid values detected. The offending objects have the LsRelation values %s and %s."


ulonglong FUN_009b5048(string *param_1,string *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  string *psVar4;
  byte *pbVar5;
  undefined1 **ppuVar6;
  string *psVar7;
  ulonglong uVar8;
  byte local_190;
  byte local_178 [24];
  byte local_160 [24];
  byte local_148 [24];
  byte local_130 [24];
  undefined1 *local_118 [3];
  byte local_100 [24];
  byte local_e8 [24];
  byte local_d0 [24];
  undefined8 local_b8;
  undefined1 **local_a8;
  code *local_a0;
  code *local_98;
  void *local_90;
  longlong *local_88;
  void *local_80;
  longlong *local_78;
  string *local_70;
  undefined4 local_64;
  byte local_60 [24];
  byte local_48;
  undefined1 local_47 [15];
  undefined1 *local_38;
  
  psVar4 = param_1;
  psVar7 = param_2;
  local_b8 = param_3;
  local_64 = param_4;
  operator_new((ulong)param_1);
  std::string::string(psVar4,psVar7);
  psVar4 = param_1;
  local_70 = param_2;
  FUN_009b5e4e(param_1,param_2,local_b8);
  psVar7 = (string *)0x0;
  FUN_009b5fec();
  if ((local_190 & 1) != 0) {
    operator_delete(psVar4);
  }
  std::string::string(psVar4,psVar7);
  local_90 = local_80;
  local_88 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    local_78[1] = local_78[1] + 1;
    UNLOCK();
  }
  cVar3 = (char)&local_a8;
  FUN_009b6182();
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_88 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  if (((ulonglong)local_a8 & 1) != 0) {
    operator_delete(local_80);
  }
  uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if (cVar3 == '\0') {
    cVar3 = FUN_009b56a0();
    if (cVar3 == '\0') {
      FUN_00925fd0();
      FUN_00926010();
      FUN_009b5790();
      FUN_009b5790();
      FUN_009b5790();
      FUN_009bc5b8(local_148,local_60,local_130);
      local_a0 = FUN_009b6370;
      local_98 = FUN_0094ef70;
      local_a8 = (undefined1 **)&local_48;
      FUN_00983230();
      FUN_009b5790();
      FUN_009b5790();
      FUN_009b5790();
      pbVar5 = local_e8;
      FUN_009bc5b8(pbVar5,local_100,local_d0);
      local_a0 = FUN_009b6370;
      local_98 = FUN_0094ef70;
      local_a8 = local_118;
      FUN_00983230();
      if (((ulonglong)local_118[0] & 1) != 0) {
        operator_delete(pbVar5);
      }
      if ((local_d0[0] & 1) != 0) {
        operator_delete(pbVar5);
      }
      if ((local_e8[0] & 1) != 0) {
        operator_delete(pbVar5);
      }
      if ((local_100[0] & 1) != 0) {
        operator_delete(pbVar5);
      }
      if ((local_48 & 1) != 0) {
        operator_delete(pbVar5);
      }
      if ((local_130[0] & 1) != 0) {
        operator_delete(pbVar5);
      }
      if ((local_148[0] & 1) != 0) {
        operator_delete(pbVar5);
      }
      if ((local_60[0] & 1) != 0) {
        operator_delete(pbVar5);
      }
      FUN_00928ab0("bool license_services::DsigSignatureGenerator::registerSigningParticipant(std::string, const license_services::LsRelation &, license_services::LsProxySimpleBase *, const DsigSignatureGenerator::AttributeDataOrderingVector_T &, bool)"
                   ,0x59);
      FUN_009c78cb();
    }
    else if ((char)local_64 != '\0') {
      FUN_00925fd0();
      FUN_00926010();
      FUN_009b5790();
      FUN_009b5790();
      FUN_009b5790();
      FUN_009bc5b8(local_178,local_60,local_160);
      if ((local_48 & 1) == 0) {
        local_38 = local_47;
      }
      ppuVar6 = local_118;
      local_a0 = FUN_009b8f46;
      local_98 = FUN_009cdab8;
      local_118[0] = local_38;
      local_a8 = ppuVar6;
      FUN_00983230();
      if ((local_48 & 1) != 0) {
        operator_delete(ppuVar6);
      }
      if ((local_160[0] & 1) != 0) {
        operator_delete(ppuVar6);
      }
      if ((local_178[0] & 1) != 0) {
        operator_delete(ppuVar6);
      }
      if ((local_60[0] & 1) != 0) {
        operator_delete(ppuVar6);
      }
      FUN_00928ab0("bool license_services::DsigSignatureGenerator::registerSigningParticipant(std::string, const license_services::LsRelation &, license_services::LsProxySimpleBase *, const DsigSignatureGenerator::AttributeDataOrderingVector_T &, bool)"
                   ,0x50);
      FUN_009c78cb();
    }
    uVar8 = 0;
  }
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_78 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  return uVar8 & 0xffffffff;
}


