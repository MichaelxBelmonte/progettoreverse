// Function: FUN_008ca8de
// Address: 008ca8de
// Size: 1109 bytes
// Class: GNString
// String references:
//   "computerId"
//   "channelId"
//   "auxChannelId"
//   "SendEncryptedCommandInput"
//   "encryptedCommand"
//   "commandSize"
//   "randomInitializationVector"
//   "checksum"
//   "channelEstablishedTime"
//   "minimizeLogging"
//   "randomData"
//   "callingLicenseDVersion"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_008ca8de(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int64_t lVar9;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,8);
  iVar3 = (**(code **)(*arg1 + 0x90))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,0xf);
  iVar6 = (**(code **)(*arg1 + 0x58))();
  iVar6 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6;
  for (lVar9 = *(int64_t *)(this_ptr + 0x10); lVar9 != *(int64_t *)(this_ptr + 0x18);
      lVar9 = lVar9 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar6 = iVar6 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(3,8);
  iVar4 = (**(code **)(*arg1 + 0x90))();
  iVar5 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(4,0xf);
  iVar8 = (**(code **)(*arg1 + 0x58))();
  iVar8 = iVar1 + iVar6 + iVar2 + iVar3 + iVar4 + iVar5 + iVar7 + iVar8;
  for (lVar9 = *(int64_t *)(this_ptr + 0x30); lVar9 != *(int64_t *)(this_ptr + 0x38);
      lVar9 = lVar9 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar8 = iVar8 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(5,8);
  iVar4 = (**(code **)(*arg1 + 0x90))();
  iVar5 = (**(code **)(*arg1 + 0x38))();
  iVar5 = iVar1 + iVar8 + iVar2 + iVar3 + iVar4 + iVar5;
  if (*(char *)(this_ptr + 0xa1) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(10,10);
    iVar2 = (**(code **)(*arg1 + 0x98))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar5 = iVar1 + iVar5 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0xa2) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xb,10);
    iVar2 = (**(code **)(*arg1 + 0x98))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar5 = iVar1 + iVar5 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0xa3) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xc,0xb);
    iVar2 = (**(code **)(*arg1 + 0xa8))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar5 = iVar1 + iVar5 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0xa4) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xd,2);
    iVar2 = (**(code **)(*arg1 + 0x78))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar5 = iVar1 + iVar5 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0xa5) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xe,0xf);
    iVar2 = (**(code **)(*arg1 + 0x58))();
    iVar2 = iVar1 + iVar5 + iVar2;
    for (lVar9 = *(int64_t *)(this_ptr + 0x80); lVar9 != *(int64_t *)(this_ptr + 0x88);
        lVar9 = lVar9 + 1) {
      iVar1 = (**(code **)(*arg1 + 0x80))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*arg1 + 0x60))();
    iVar5 = (**(code **)(*arg1 + 0x38))();
    iVar5 = iVar1 + iVar2 + iVar5;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(&g_00002710,8);
  iVar2 = (**(code **)(*arg1 + 0x90))();
  iVar3 = (**(code **)(*arg1 + 0x38))();
  iVar4 = (**(code **)(*arg1 + 0x40))();
  iVar6 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar5 + iVar2 + iVar3 + iVar4 + iVar6;
}

