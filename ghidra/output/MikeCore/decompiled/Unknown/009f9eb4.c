// Function: FUN_009f9eb4
// Address: 009f9eb4
// Size: 701 bytes
// Class: Unknown


undefined2 FUN_009f9eb4(byte *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *unaff_RSI;
  byte *pbVar12;
  undefined1 local_32;
  undefined1 local_31;
  
  pbVar8 = param_1;
  plVar10 = param_2;
  while( true ) {
    plVar11 = (longlong *)*unaff_RSI;
    if ((char *)plVar11[3] == (char *)plVar11[4]) {
      cVar2 = (**(code **)(*plVar11 + 0x48))();
    }
    else {
      cVar2 = *(char *)plVar11[3];
    }
    if ((uint)(int)cVar2 < 0x80) {
      uVar4 = *(uint *)(PTR___DefaultRuneLocale_0249c238 + (ulonglong)(uint)(int)cVar2 * 4 + 0x3c) &
              0x4000;
      pbVar8 = PTR___DefaultRuneLocale_0249c238;
    }
    else {
      uVar4 = ___maskrune((__darwin_ct_rune_t)pbVar8,(ulong)plVar10);
    }
    if (uVar4 == 0) break;
    plVar11 = (longlong *)*unaff_RSI;
    if (plVar11 == (longlong *)0x0) {
LAB_009f9f48:
      plVar11 = (longlong *)0x0;
    }
    else if (plVar11[3] == plVar11[4]) {
      iVar5 = (**(code **)(*plVar11 + 0x48))();
      if (iVar5 == -1) {
        *unaff_RSI = 0;
        goto LAB_009f9f48;
      }
      plVar11 = (longlong *)*unaff_RSI;
    }
    plVar1 = (longlong *)*param_2;
    if (plVar1 == (longlong *)0x0) {
LAB_009f9f89:
      if (plVar11 == (longlong *)0x0) break;
    }
    else if (plVar1[3] == plVar1[4]) {
      iVar5 = (**(code **)(*plVar1 + 0x48))();
      if (iVar5 == -1) {
        *param_2 = 0;
        goto LAB_009f9f89;
      }
      pbVar8 = (byte *)(ulonglong)(*param_2 == 0);
      if ((plVar11 == (longlong *)0x0) == (*param_2 == 0)) break;
    }
    else if (plVar11 != (longlong *)0x0) break;
    plVar11 = (longlong *)*unaff_RSI;
    if (plVar11[3] == plVar11[4]) {
      (**(code **)(*plVar11 + 0x50))();
    }
    else {
      plVar11[3] = plVar11[3] + 1;
    }
  }
  bVar3 = *param_1;
  if ((bVar3 & 1) == 0) {
    pbVar8 = param_1 + 1;
  }
  else {
    pbVar8 = *(byte **)(param_1 + 0x10);
  }
  iVar5 = 0;
  while( true ) {
    if ((bVar3 & 1) == 0) {
      uVar7 = (ulonglong)(bVar3 >> 1);
      pbVar12 = param_1 + 1;
    }
    else {
      uVar7 = *(ulonglong *)(param_1 + 8);
      pbVar12 = *(byte **)(param_1 + 0x10);
    }
    if (pbVar12 + uVar7 == pbVar8) break;
    plVar10 = (longlong *)*unaff_RSI;
    if (plVar10 == (longlong *)0x0) {
LAB_009fa027:
      plVar10 = (longlong *)0x0;
    }
    else if (plVar10[3] == plVar10[4]) {
      iVar6 = (**(code **)(*plVar10 + 0x48))();
      if (iVar6 == -1) {
        *unaff_RSI = 0;
        goto LAB_009fa027;
      }
      plVar10 = (longlong *)*unaff_RSI;
    }
    plVar11 = (longlong *)*param_2;
    if (plVar11 == (longlong *)0x0) {
LAB_009fa06e:
      if (plVar10 == (longlong *)0x0) break;
    }
    else if (plVar11[3] == plVar11[4]) {
      iVar6 = (**(code **)(*plVar11 + 0x48))();
      if (iVar6 == -1) {
        *param_2 = 0;
        goto LAB_009fa06e;
      }
      if ((plVar10 == (longlong *)0x0) == (*param_2 == 0)) break;
    }
    else if (plVar10 != (longlong *)0x0) break;
    pbVar12 = pbVar8 + 1;
    if (*pbVar8 == 0x25) {
      if ((*param_1 & 1) == 0) {
        uVar7 = (ulonglong)(*param_1 >> 1);
        pbVar9 = param_1 + 1;
      }
      else {
        uVar7 = *(ulonglong *)(param_1 + 8);
        pbVar9 = *(byte **)(param_1 + 0x10);
      }
      if (pbVar12 == pbVar9 + uVar7) break;
      bVar3 = *pbVar12;
      if (bVar3 == 0x25) {
        plVar10 = (longlong *)*unaff_RSI;
        if (plVar10[3] == plVar10[4]) {
          (**(code **)(*plVar10 + 0x50))();
        }
        else {
          plVar10[3] = plVar10[3] + 1;
        }
      }
      else if (bVar3 == 0x79) {
        local_31 = 0x30;
        iVar5 = FUN_009fb00b(2,param_3,&local_31,param_4,iVar5);
        iVar5 = iVar5 + 2000;
      }
      else if (bVar3 == 0x59) {
        local_32 = 0x30;
        iVar5 = FUN_009fb00b(4,param_3,&local_32,param_4,iVar5);
      }
      pbVar12 = pbVar8 + 2;
    }
    else {
      plVar10 = (longlong *)*unaff_RSI;
      if (plVar10[3] == plVar10[4]) {
        (**(code **)(*plVar10 + 0x50))();
      }
      else {
        plVar10[3] = plVar10[3] + 1;
      }
    }
    bVar3 = *param_1;
    pbVar8 = pbVar12;
  }
  FUN_009a81f8();
  return 0x578;
}


