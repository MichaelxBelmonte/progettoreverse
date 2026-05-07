// Function: FUN_0090368c
// Address: 0090368c
// Size: 1604 bytes
// Class: MDMetaWindowController
// String references:
//   "hidden"
//   "url"
//   "creationDate"
//   "description"
//   "licensePeriod"
//   "validLocations"
//   "surrenders"
//   "publisherNumber"
//   "licenseType"
//   "IdentityDetail"
//   "msrp"
//   "streetPrice"
//   "locked"
//   "media"
//   "footerTextColor"
//   "mixedSkuTerms"
//   "skuLimitType"
//   "skuSubscriptionAutoRefresh"

int FUN_0090368c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  int local_34;
  
  FUN_0088bf90();
  local_34 = (**(code **)(*arg1 + 0x20))();
  if (*(char *)(this_ptr + 0x139) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(1,2);
    iVar2 = (**(code **)(*arg1 + 0x78))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    local_34 = iVar1 + local_34 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x13a) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(2,0xb);
    iVar2 = (**(code **)(*arg1 + 0xa8))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    local_34 = iVar1 + local_34 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x13b) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(3,0xb);
    iVar2 = (**(code **)(*arg1 + 0xa8))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    local_34 = iVar1 + local_34 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x13c) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(4,0xb);
    iVar2 = (**(code **)(*arg1 + 0xa8))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    local_34 = iVar1 + local_34 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x13d) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(5,0xb);
    iVar2 = (**(code **)(*arg1 + 0xa8))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    local_34 = iVar1 + local_34 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x13e) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(6,4);
    iVar2 = (**(code **)(*arg1 + 0xa0))(*(void*)(this_ptr + 0x70));
    iVar3 = (**(code **)(*arg1 + 0x38))();
    local_34 = iVar1 + local_34 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x13f) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(7,4);
    iVar2 = (**(code **)(*arg1 + 0xa0))(*(void*)(this_ptr + 0x78));
    iVar3 = (**(code **)(*arg1 + 0x38))();
    local_34 = iVar1 + local_34 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x140) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(8,2);
    iVar2 = (**(code **)(*arg1 + 0x78))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    local_34 = iVar1 + local_34 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(9,8);
  iVar2 = (**(code **)(*arg1 + 0x90))();
  iVar3 = (**(code **)(*arg1 + 0x38))();
  iVar4 = (**(code **)(*arg1 + 0x30))(10,8);
  iVar5 = (**(code **)(*arg1 + 0x90))();
  iVar6 = (**(code **)(*arg1 + 0x38))();
  iVar6 = iVar1 + local_34 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6;
  if (*(char *)(this_ptr + 0x143) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xb,0xf);
    iVar2 = (**(code **)(*arg1 + 0x58))
                      (extraout_XMM0_Qa,
                       (uint64_t)
                       (*(int64_t *)(this_ptr + 0x98) - *(int64_t *)(this_ptr + 0x90)) >> 2);
    iVar2 = iVar1 + iVar6 + iVar2;
    for (lVar7 = *(int64_t *)(this_ptr + 0x90); lVar7 != *(int64_t *)(this_ptr + 0x98);
        lVar7 = lVar7 + 4) {
      iVar1 = (**(code **)(*arg1 + 0x90))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*arg1 + 0x60))();
    iVar6 = (**(code **)(*arg1 + 0x38))();
    iVar6 = iVar1 + iVar2 + iVar6;
  }
  if (*(char *)(this_ptr + 0x144) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xc,0xf);
    iVar2 = (**(code **)(*arg1 + 0x58))
                      (extraout_XMM0_Qa_00,
                       (int)((uint64_t)
                             (*(int64_t *)(this_ptr + 0xb0) - *(int64_t *)(this_ptr + 0xa8)) >>
                            4) * -0x55555555);
    iVar2 = iVar1 + iVar6 + iVar2;
    for (plVar8 = *(int64_t **)(this_ptr + 0xa8); plVar8 != *(int64_t **)(this_ptr + 0xb0);
        plVar8 = plVar8 + 6) {
      iVar1 = (**(code **)(*plVar8 + 0x18))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*arg1 + 0x60))();
    iVar6 = (**(code **)(*arg1 + 0x38))();
    iVar6 = iVar1 + iVar2 + iVar6;
  }
  if (*(char *)(this_ptr + 0x145) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xd,0xb);
    iVar2 = (**(code **)(*arg1 + 0xa8))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar6 = iVar1 + iVar6 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x146) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xe,2);
    iVar2 = (**(code **)(*arg1 + 0x78))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar6 = iVar1 + iVar6 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x147) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xf,0xb);
    iVar2 = (**(code **)(*arg1 + 0xa8))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar6 = iVar1 + iVar6 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x148) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x10,0xc);
    iVar2 = FUN_009029b4();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar6 = iVar1 + iVar6 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x149) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x11,2);
    iVar2 = (**(code **)(*arg1 + 0x78))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar6 = iVar1 + iVar6 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x40))();
  iVar2 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar6 + iVar2;
}

