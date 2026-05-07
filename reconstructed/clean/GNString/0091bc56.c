// Function: FUN_0091bc56
// Address: 0091bc56
// Size: 615 bytes
// Class: GNString
// String references:
//   "timeInfo"
//   "outputIvTweak"
//   "outputEncryptedData"
//   "authNeedsUpdate"
//   "DlcKeyExchangeOutput"
//   "iLokFirmwareNeedsUpdate"
//   "LicenseDNeedsUpdate"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_0091bc56(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int64_t lVar10;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,2);
  iVar3 = (**(code **)(*arg1 + 0x78))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,2);
  iVar6 = (**(code **)(*arg1 + 0x78))();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar8 = (**(code **)(*arg1 + 0x30))(3,0xf);
  iVar9 = (**(code **)(*arg1 + 0x58))();
  iVar9 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9;
  for (lVar10 = *(int64_t *)(this_ptr + 0x10); lVar10 != *(int64_t *)(this_ptr + 0x18);
      lVar10 = lVar10 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar9 = iVar9 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(4,0xf);
  iVar4 = (**(code **)(*arg1 + 0x58))();
  iVar4 = iVar1 + iVar9 + iVar2 + iVar3 + iVar4;
  for (lVar10 = *(int64_t *)(this_ptr + 0x28); lVar10 != *(int64_t *)(this_ptr + 0x30);
      lVar10 = lVar10 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar4 = iVar4 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(5,2);
  iVar5 = (**(code **)(*arg1 + 0x78))();
  iVar6 = (**(code **)(*arg1 + 0x38))();
  iVar6 = iVar1 + iVar4 + iVar2 + iVar3 + iVar5 + iVar6;
  if (*(char *)(this_ptr + 0x85) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(10,0xc);
    iVar2 = FUN_0090f0f6();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar6 = iVar1 + iVar6 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x40))();
  iVar2 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar6 + iVar2;
}

