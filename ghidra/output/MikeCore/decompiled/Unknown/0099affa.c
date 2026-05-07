// Function: FUN_0099affa
// Address: 0099affa
// Size: 1374 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "Extra result data size (%d) is too small for the GenerateAuthProtocolSignature command"
//   "virtual bool pace::ILok2Commander::GenerateAuthProtocolSignature_ExtractExtraResultData(const CMD_R...
//   "Cert (ID:%d) is not available.  Call GetILokCertChain before starting the auth protocol."
//   "Cert (ID:%d) is not privileged to be used in the authorization protocol."
//   "Cert (ID:%d) does not have a public key with the requested PKStandardID (%d)"
//   "The hash size (%d) is for the PKStandardID (%d) is out of range"
//   "Auth Protocol failed because the hashes don't match; so the signature will not verify"


undefined4 FUN_0099affa(undefined4 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  uint **ppuVar8;
  longlong lVar9;
  uint *unaff_RSI;
  undefined4 *puVar10;
  ulonglong uVar11;
  longlong unaff_RDI;
  undefined4 *puVar12;
  size_t sVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined1 local_a48 [112];
  undefined1 local_9d8 [56];
  uint *local_9a0;
  code *local_998;
  undefined1 *local_990;
  uint *local_930;
  undefined4 *local_928;
  int local_920;
  uint local_91c;
  longlong local_918;
  longlong lStack_910;
  undefined8 local_908;
  uint local_8fc;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  puVar10 = (undefined4 *)*param_2;
  local_91c = *(int *)(param_2 + 1) - (int)puVar10;
  local_918 = 0;
  lStack_910 = 0;
  local_908 = 0;
  if (local_91c < 0x4c) {
    FUN_00925fd0();
    uVar5 = FUN_00926010();
    FUN_00983230();
    uVar15 = FUN_00928ab0("virtual bool pace::ILok2Commander::GenerateAuthProtocolSignature_ExtractExtraResultData(const CMD_RsltPayload_GenerateAuthProtocolSignature_Struct &, const vector<uint8_t> &, BIG_CompactSignatureECDSA_Struct &)"
                          ,0x4fd);
    FUN_009c720b(uVar15,uVar5);
    puVar10 = (undefined4 *)*param_2;
  }
  puVar12 = param_1;
  for (lVar6 = 0x12; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar12 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar12 = puVar12 + 1;
  }
  lVar6 = *(longlong *)(unaff_RDI + 0x28);
  if (lVar6 != 0) {
    uVar3 = *unaff_RSI;
    lVar9 = unaff_RDI + 0x28;
    do {
      bVar14 = *(uint *)(lVar6 + 0x20) < uVar3;
      if (!bVar14) {
        lVar9 = lVar6;
      }
      lVar6 = *(longlong *)(lVar6 + (ulonglong)bVar14 * 8);
    } while (lVar6 != 0);
    if ((lVar9 != unaff_RDI + 0x28) && (*(uint *)(lVar9 + 0x20) <= uVar3)) goto LAB_0099b180;
  }
  FUN_00925fd0();
  uVar5 = FUN_00926010();
  FUN_00983230();
  uVar15 = FUN_00928ab0("virtual bool pace::ILok2Commander::GenerateAuthProtocolSignature_ExtractExtraResultData(const CMD_RsltPayload_GenerateAuthProtocolSignature_Struct &, const vector<uint8_t> &, BIG_CompactSignatureECDSA_Struct &)"
                        ,0x50c);
  FUN_009c720b(uVar15,uVar5);
LAB_0099b180:
  lVar6 = FUN_009a8a44(&stack0xfffffffffffff710,"",local_a48);
  cVar2 = (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x18))();
  if (cVar2 == '\0') {
    FUN_00925fd0();
    uVar5 = FUN_00926010();
    FUN_00983230();
    uVar15 = FUN_00928ab0("virtual bool pace::ILok2Commander::GenerateAuthProtocolSignature_ExtractExtraResultData(const CMD_RsltPayload_GenerateAuthProtocolSignature_Struct &, const vector<uint8_t> &, BIG_CompactSignatureECDSA_Struct &)"
                          ,0x514);
    FUN_009c720b(uVar15,uVar5);
  }
  sVar13 = (size_t)&local_9a0;
  local_928 = param_1;
  lVar6 = FUN_009a8a44(&stack0xfffffffffffff710,"");
  (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x40))(local_a48,&local_920);
  if (local_920 == -1) {
    FUN_00925fd0();
    uVar5 = FUN_00926010();
    FUN_00983230();
    FUN_00983230();
    uVar15 = FUN_00928ab0("virtual bool pace::ILok2Commander::GenerateAuthProtocolSignature_ExtractExtraResultData(const CMD_RsltPayload_GenerateAuthProtocolSignature_Struct &, const vector<uint8_t> &, BIG_CompactSignatureECDSA_Struct &)"
                          ,0x526);
    FUN_009c720b(uVar15,uVar5);
  }
  FUN_009af70c();
  local_8fc = FUN_009afe36();
  if (0x1f < local_8fc - 1) {
    local_930 = unaff_RSI + 1;
    FUN_00925fd0();
    uVar5 = FUN_00926010();
    local_9a0 = &local_8fc;
    local_998 = FUN_009595d8;
    local_990 = &LAB_009977a0;
    FUN_00983230();
    local_9a0 = local_930;
    local_998 = FUN_009595d8;
    local_990 = &LAB_009977a0;
    FUN_00983230();
    uVar15 = FUN_00928ab0("virtual bool pace::ILok2Commander::GenerateAuthProtocolSignature_ExtractExtraResultData(const CMD_RsltPayload_GenerateAuthProtocolSignature_Struct &, const vector<uint8_t> &, BIG_CompactSignatureECDSA_Struct &)"
                          ,0x531);
    FUN_009c720b(uVar15,uVar5);
  }
  uVar3 = FUN_0098f810();
  uVar11 = (ulonglong)uVar3;
  if ((ulonglong)(lStack_910 - local_918) < uVar11) {
    FUN_0088d550();
  }
  else if (uVar11 < (ulonglong)(lStack_910 - local_918)) {
    lStack_910 = uVar11 + local_918;
  }
  puVar7 = local_9d8;
  (**(code **)(*(longlong *)(unaff_RDI + 0x270) + 0x48))(puVar7,local_918);
  uVar3 = FUN_0098f810();
  iVar4 = _memcmp(puVar7,(void *)(ulonglong)uVar3,sVar13);
  if (iVar4 != 0) {
    FUN_00925fd0();
    uVar5 = FUN_00926010();
    uVar15 = FUN_00928ab0("virtual bool pace::ILok2Commander::GenerateAuthProtocolSignature_ExtractExtraResultData(const CMD_RsltPayload_GenerateAuthProtocolSignature_Struct &, const vector<uint8_t> &, BIG_CompactSignatureECDSA_Struct &)"
                          ,0x541);
    FUN_009c720b(uVar15,uVar5);
  }
  FUN_0096dfe2();
  FUN_0096de15();
  ppuVar8 = &local_9a0;
  uVar15 = FUN_009b04c0(ppuVar8,local_9d8);
  FUN_009af9a6();
  if (local_918 != 0) {
    lStack_910 = local_918;
    operator_delete(ppuVar8);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


