// Function: FUN_009f5a30
// Address: 009f5a30
// Size: 637 bytes
// Class: Unknown


undefined8 FUN_009f5a30(ulonglong *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  longlong *unaff_RSI;
  ulonglong uVar9;
  longlong unaff_RDI;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  ulonglong uVar10;
  bool bVar11;
  ulong uVar12;
  
  pbVar8 = (byte *)*unaff_RSI;
  if (*(int *)(unaff_RDI + 0x34) == 0) {
    if (pbVar8 == param_2) {
      return 0;
    }
    do {
      cVar3 = FUN_009f1c60();
      pbVar8 = (byte *)*unaff_RSI;
      if (cVar3 == '\0') break;
      pbVar5 = (byte *)*unaff_RSI + 1;
      *unaff_RSI = (longlong)pbVar5;
      pbVar8 = param_2;
    } while (pbVar5 != param_2);
    if (*(int *)(unaff_RDI + 0x34) != 0) goto LAB_009f5a53;
    if (pbVar8 == param_2) {
      return 0;
    }
    cVar3 = FUN_009f1cc8();
    uVar12 = (ulong)unaff_R15;
    uVar7 = (ulong)unaff_R14;
    pbVar5 = (byte *)*unaff_RSI;
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
        pbVar5 = (byte *)(*unaff_RSI + 1);
        *unaff_RSI = (longlong)pbVar5;
      }
    }
    else {
      *unaff_RSI = (longlong)(pbVar5 + 1);
    }
  }
  else {
LAB_009f5a53:
    if (pbVar8 == param_2) {
      if (*(char *)(unaff_RDI + 0x38) != '\0') {
        return 0;
      }
      *(undefined1 *)(unaff_RDI + 0x38) = 1;
      pbVar8 = (byte *)*unaff_RSI;
      uVar10 = (longlong)pbVar8 - (longlong)param_2;
      bVar1 = (byte)*param_1;
      bVar11 = (bVar1 & 1) == 0;
      uVar4 = *param_1;
      if (bVar11) {
        uVar4 = (ulonglong)bVar1;
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
        uVar4 = (ulonglong)(byte)*param_1;
      }
      if ((uVar4 & 1) == 0) {
        pbVar5 = (byte *)((longlong)param_1 + 1);
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
      if (*(char *)(unaff_RDI + 0x38) == '\0') {
        cVar3 = FUN_009f1c60();
        uVar12 = (ulong)unaff_R15;
        uVar7 = (ulong)unaff_R14;
        if (cVar3 != '\0') goto LAB_009f5b4a;
      }
      cVar3 = FUN_009f1c60();
      pbVar5 = (byte *)*unaff_RSI;
      if (cVar3 != '\0') {
        pbVar5 = pbVar5 + 1;
        *unaff_RSI = (longlong)pbVar5;
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
        pbVar5 = (byte *)(*unaff_RSI + 1);
        *unaff_RSI = (longlong)pbVar5;
      }
    }
    else if (*(char *)(unaff_RDI + 0x38) != '\0') {
      *unaff_RSI = *unaff_RSI + 1;
      *(undefined1 *)(unaff_RDI + 0x38) = 0;
      goto LAB_009f5b50;
    }
LAB_009f5b4a:
    *(undefined1 *)(unaff_RDI + 0x38) = 1;
  }
LAB_009f5b50:
  pbVar2 = (byte *)*unaff_RSI;
  uVar10 = (longlong)pbVar2 - (longlong)pbVar8;
  bVar1 = (byte)*param_1;
  bVar11 = (bVar1 & 1) == 0;
  uVar4 = *param_1;
  if (bVar11) {
    uVar4 = (ulonglong)bVar1;
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
    uVar4 = (ulonglong)(byte)*param_1;
  }
  if ((uVar4 & 1) == 0) {
    pbVar5 = (byte *)((longlong)param_1 + 1);
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
  return CONCAT71((int7)((ulonglong)pbVar5 >> 8),1);
}


