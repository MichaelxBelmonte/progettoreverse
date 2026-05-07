// Function: FUN_0099a1ee
// Address: 0099a1ee
// Size: 1014 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "Extra result data size (%d) is too small for the GetILokCertChain command"
//   "virtual void pace::ILok2Commander::GetILokCertChain_ExtractExtraResultData(const CMD_RsltPayload_Ge...
//   "Cert (ID:%d): the cert's issue number (0x%08X) doen't match the iLok claimed issue number (0x%08X)"
//   "Cert Chain (ID:%d) is not available, but was supposed to be cached."
//   "Cert Chain (ID:%d) is cached but its size (%d) does not match iLok's claimed size (%d)"

void FUN_0099a1ee(int64_t *param_1,int64_t *param_2)

{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  void*puVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  int iVar10;
  uint *arg1;
  int64_t *this_ptr;
  uint64_t uVar11;
  int64_t local_68;
  uint32_t uStack_60;
  uint uStack_5c;
  int local_4c;
  code *local_40;
  void*puStack_38;
  
  lVar6 = *param_2;
  lVar2 = param_2[1];
  iVar10 = (int)(lVar2 - lVar6);
  local_4c = iVar10;
  if (param_1 != param_2) {
    FUN_009ad770();
  }
  if (iVar10 != 0) {
    uVar3 = (uint64_t)arg1[3];
    if ((lVar2 - lVar6 & 0xffffffffU) < uVar3 + 4) {
      FUN_00925fd0();
      uVar4 = FUN_00926010();
      FUN_00983230();
      uVar11 = FUN_00928ab0("virtual void pace::ILok2Commander::GetILokCertChain_ExtractExtraResultData(const CMD_RsltPayload_GetILokCertChain_Struct &, const vector<uint8_t> &, vector<uint8_t> &)"
                            ,0x3e2);
      FUN_009c720b(uVar11,uVar4);
      uVar3 = (uint64_t)arg1[3];
    }
    uVar8 = param_1[1] - *param_1;
    if (uVar8 < uVar3) {
      FUN_00958ec0();
    }
    else if (uVar3 < uVar8) {
      param_1[1] = *param_1 + uVar3;
    }
    (**(code **)(*this_ptr + 0x270))(0,*arg1);
    lVar6 = FUN_009a8a44(&stack0xffffffffffffffb8,"",&local_68);
    local_68 = *(int64_t *)(lVar6 + 0x1b8);
    uStack_60 = *(void*)(lVar6 + 0x1c0);
    uStack_5c = *(uint *)(lVar6 + 0x1c4);
    if (arg1[1] == uStack_5c) {
      return;
    }
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    FUN_00983230();
    FUN_00983230();
    FUN_00983230();
    uVar11 = FUN_00928ab0("virtual void pace::ILok2Commander::GetILokCertChain_ExtractExtraResultData(const CMD_RsltPayload_GetILokCertChain_Struct &, const vector<uint8_t> &, vector<uint8_t> &)"
                          ,0x3f4);
    goto LAB_0099a5d0;
  }
  if (*(char *)((int64_t)this_ptr + 0x431) == '\0') {
    return;
  }
  plVar5 = (int64_t *)this_ptr[5];
  if (plVar5 == (int64_t *)0x0) {
LAB_0099a316:
    FUN_00925fd0();
    uVar4 = FUN_00926010();
    local_40 = FUN_009595d8;
    puStack_38 = &LAB_009977a0;
    FUN_00983230();
    uVar11 = FUN_00928ab0("virtual void pace::ILok2Commander::GetILokCertChain_ExtractExtraResultData(const CMD_RsltPayload_GetILokCertChain_Struct &, const vector<uint8_t> &, vector<uint8_t> &)"
                          ,0x402);
    FUN_009c720b(uVar11,uVar4);
  }
  else {
    uVar1 = *arg1;
    plVar9 = this_ptr + 5;
    do {
      if (*(uint *)(plVar5 + 4) >= uVar1) {
        plVar9 = plVar5;
      }
      plVar5 = (int64_t *)plVar5[*(uint *)(plVar5 + 4) < uVar1];
    } while (plVar5 != (int64_t *)0x0);
    if ((plVar9 == this_ptr + 5) || (uVar1 < *(uint *)(plVar9 + 4))) goto LAB_0099a316;
  }
  puVar7 = &stack0xffffffffffffffb8;
  FUN_009a8a44(puVar7,"",&local_68);
  FUN_00abbdc0();
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    operator_delete(puVar7);
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  *param_1 = (int64_t)arg1;
  param_1[1] = (int64_t)local_40;
  param_1[2] = (int64_t)puStack_38;
  if ((int64_t)local_40 - (int64_t)arg1 == (uint64_t)arg1[3]) {
    return;
  }
  FUN_00925fd0();
  uVar4 = FUN_00926010();
  FUN_00983230();
  local_68 = param_1[1] - *param_1;
  FUN_00983230();
  FUN_00983230();
  uVar11 = FUN_00928ab0("virtual void pace::ILok2Commander::GetILokCertChain_ExtractExtraResultData(const CMD_RsltPayload_GetILokCertChain_Struct &, const vector<uint8_t> &, vector<uint8_t> &)"
                        ,0x40f);
LAB_0099a5d0:
  FUN_009c720b(uVar11,uVar4);
  return;
}

