// Function: FUN_00914382
// Address: 00914382
// Size: 617 bytes
// Class: Unknown
// String references:
//   "product"
//   "AuthVerificationData"
//   "iLokChallengeResponses"
//   "softwareChallengeResponses"
//   "cloudChallengeResponses"
//   "productDecryptAssistData"
//   "contentDecryptionKeys"

int FUN_00914382(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,0xc);
  iVar3 = FUN_009066b6();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar4 = iVar2 + iVar1 + iVar3 + iVar4;
  if (*(char *)(this_ptr + 0x441) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xb,0xc);
    iVar2 = FUN_0090f984();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar4 = iVar1 + iVar4 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x442) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xc,0xc);
    iVar2 = FUN_0090f984();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar4 = iVar1 + iVar4 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x443) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xd,0xc);
    iVar2 = FUN_0090f984();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar4 = iVar1 + iVar4 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x444) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x14,0xc);
    iVar2 = FUN_009119ce();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar4 = iVar1 + iVar4 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x445) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x15,0xf);
    iVar2 = (**(code **)(*arg1 + 0x58))();
    iVar2 = iVar1 + iVar4 + iVar2;
    for (lVar5 = *(int64_t *)(this_ptr + 0x428); lVar5 != *(int64_t *)(this_ptr + 0x430);
        lVar5 = lVar5 + 1) {
      iVar1 = (**(code **)(*arg1 + 0x80))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*arg1 + 0x60))();
    iVar4 = (**(code **)(*arg1 + 0x38))();
    iVar4 = iVar1 + iVar2 + iVar4;
  }
  iVar1 = (**(code **)(*arg1 + 0x40))();
  iVar2 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar4 + iVar2;
}

