// Function: FUN_009f5a30
// Address: 009f5a30
// Size: 637 bytes
// Class: Unknown

uint64_t FUN_009f5a30(uint64_t *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  uint64_t uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  int64_t *arg1;
  uint64_t uVar9;
  int64_t this_ptr;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t uVar10;
  bool bVar11;
  ulong uVar12;
  
  pbVar8 = (byte *)*arg1;
  if (*(int *)(this_ptr + 0x34) == 0) {
    if (pbVar8 == param_2) {
      return 0;
    }
    do {
      cVar3 = FUN_009f1c60();
      pbVar8 = (byte *)*arg1;
      if (cVar3 == '\0') break;
      pbVar5 = (byte *)*arg1 + 1;
      *arg1 = (int64_t)pbVar5;
      pbVar8 = param_2;
    } while (pbVar5 != param_2);
    if (*(int *)(this_ptr + 0x34) != 0) goto LAB_009f5a53;
    if (pbVar8 == param_2) {
      return 0;
    }
    cVar3 = FUN_009f1cc8();
    uVar12 = (ulong)unaff_R15;
    uVar7 = (ulong)unaff_R14;
    pbVar5 = (byte *)*arg1;
    if (cVar3 == '\0') {
      while( true ) {
        uVar12 = (ulong)unaff_R15;
        uVar7 = (ulong)unaff_R14;
        if (pbVar5 == param_2) break;
        cVar3 = FUN_009f1c60();
        uVar12 = (ulong)unaff_R15;
        uVar7 = (ulong)unaff_R14;
        if (cVar3 != '\0') break;
        cVar3 = FUN_009f1cc8();
        uVar12 = (ulong)unaff_R15;
        uVar7 = (ulong)unaff_R14;
        if (cVar3 != '\0') break;
        pbVar5 = (byte *)(*arg1 + 1);
        *arg1 = (int64_t)pbVar5;
      }
    }
    else {
      *arg1 = (int64_t)(pbVar5 + 1);
    }
  }
  else {
LAB_009f5a53:
    if (pbVar8 == param_2) {
      if (*(char *)(this_ptr + 0x38) != '\0') {
        return 0;
      }
      *(void*)(this_ptr + 0x38) = 1;
      pbVar8 = (byte *)*arg1;
      uVar10 = (int64_t)pbVar8 - (int64_t)param_2;
      bVar1 = (byte)*param_1;
      bVar11 = (bVar1 & 1) == 0;
      uVar4 = *param_1;
      if (bVar11) {
        uVar4 = (uint64_t)bVar1;
      }
      uVar9 = 0x16;
      if (!bVar11) {
        uVar9 = (*param_1 & 0xfffffffffffffffe) - 1;
      }
      if (uVar9 <= uVar10 && uVar10 - uVar9 != 0) {
        if ((bVar1 & 1) == 0) {
          uVar7 = (ulong)(bVar1 >> 1);
        }
        else {
          uVar7 = (ulong)param_1[1];
        }
        std::string::__grow_by
                  (uVar7,(ulong)(uVar10 - uVar9),0,uVar7,(ulong)unaff_R14,(ulong)unaff_R15);
        uVar4 = (uint64_t)(byte)*param_1;
      }
      if ((uVar4 & 1) == 0) {
        pbVar5 = (byte *)((int64_t)param_1 + 1);
      }
      else {
        pbVar5 = (byte *)param_1[2];
      }
      for (; pbVar8 != param_2; param_2 = param_2 + 1) {
        *pbVar5 = *param_2;
        pbVar5 = pbVar5 + 1;
      }
      goto LAB_009f5c87;
    }
    cVar3 = FUN_009f1cc8();
    uVar12 = (ulong)unaff_R15;
    uVar7 = (ulong)unaff_R14;
    if (cVar3 == '\0') {
      if (*(char *)(this_ptr + 0x38) == '\0') {
        cVar3 = FUN_009f1c60();
        uVar12 = (ulong)unaff_R15;
        uVar7 = (ulong)unaff_R14;
        if (cVar3 != '\0') goto LAB_009f5b4a;
      }
      cVar3 = FUN_009f1c60();
      pbVar5 = (byte *)*arg1;
      if (cVar3 != '\0') {
        pbVar5 = pbVar5 + 1;
        *arg1 = (int64_t)pbVar5;
        pbVar8 = pbVar5;
      }
      while( true ) {
        uVar12 = (ulong)unaff_R15;
        uVar7 = (ulong)unaff_R14;
        if (pbVar5 == param_2) break;
        cVar3 = FUN_009f1c60();
        uVar12 = (ulong)unaff_R15;
        uVar7 = (ulong)unaff_R14;
        if (cVar3 != '\0') break;
        cVar3 = FUN_009f1cc8();
        uVar12 = (ulong)unaff_R15;
        uVar7 = (ulong)unaff_R14;
        if (cVar3 != '\0') break;
        pbVar5 = (byte *)(*arg1 + 1);
        *arg1 = (int64_t)pbVar5;
      }
    }
    else if (*(char *)(this_ptr + 0x38) != '\0') {
      *arg1 = *arg1 + 1;
      *(void*)(this_ptr + 0x38) = 0;
      goto LAB_009f5b50;
    }
LAB_009f5b4a:
    *(void*)(this_ptr + 0x38) = 1;
  }
LAB_009f5b50:
  pbVar2 = (byte *)*arg1;
  uVar10 = (int64_t)pbVar2 - (int64_t)pbVar8;
  bVar1 = (byte)*param_1;
  bVar11 = (bVar1 & 1) == 0;
  uVar4 = *param_1;
  if (bVar11) {
    uVar4 = (uint64_t)bVar1;
  }
  uVar9 = 0x16;
  if (!bVar11) {
    uVar9 = (*param_1 & 0xfffffffffffffffe) - 1;
  }
  if (uVar9 <= uVar10 && uVar10 - uVar9 != 0) {
    if ((bVar1 & 1) == 0) {
      uVar6 = (ulong)(bVar1 >> 1);
    }
    else {
      uVar6 = (ulong)param_1[1];
    }
    std::string::__grow_by(uVar6,(ulong)(uVar10 - uVar9),0,uVar6,uVar7,uVar12);
    uVar4 = (uint64_t)(byte)*param_1;
  }
  if ((uVar4 & 1) == 0) {
    pbVar5 = (byte *)((int64_t)param_1 + 1);
  }
  else {
    pbVar5 = (byte *)param_1[2];
  }
  for (; pbVar8 != pbVar2; pbVar8 = pbVar8 + 1) {
    *pbVar5 = *pbVar8;
    pbVar5 = pbVar5 + 1;
  }
LAB_009f5c87:
  *pbVar5 = 0;
  if ((*param_1 & 1) == 0) {
    *(char *)param_1 = (char)uVar10 * '\x02';
  }
  else {
    param_1[1] = uVar10;
  }
  return CONCAT71((int7)((uint64_t)pbVar5 >> 8),1);
}

