// Function: FUN_011eded0
// Address: 011eded0
// Size: 619 bytes
// Class: MUThirdsCircle


void FUN_011eded0(longlong param_1,int *param_2,int *param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar6;
  
  if (*(char *)(unaff_RDI + 0x30) == '\0') {
    uVar4 = *(ulonglong *)(unaff_RDI + 0x10);
    bVar2 = *(byte *)(unaff_RDI + 0x20);
    if ((longlong)*(int *)(unaff_RDI + 0x18) <
        (longlong)((longlong)param_4 + (uVar4 & (longlong)(int)*(uint *)(unaff_RDI + 0x1c)))) {
      iVar5 = *(int *)(unaff_RDI + 0x18) - ((uint)uVar4 & *(uint *)(unaff_RDI + 0x1c));
      *param_2 = iVar5;
      param_4 = param_4 - iVar5;
      *param_3 = param_4;
      if (bVar2 == 0) {
        return;
      }
    }
    else {
      *param_2 = param_4;
      param_4 = 0;
      *param_3 = 0;
      if (bVar2 == 0) {
        return;
      }
    }
    uVar4 = uVar4 & (longlong)*(int *)(unaff_RDI + 0x1c);
    uVar6 = (ulonglong)(bVar2 & 3);
    if ((ulonglong)bVar2 - 1 < 3) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      lVar1 = uVar4 * 4;
      do {
        *(longlong *)(unaff_RSI + uVar3 * 8) =
             *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + uVar3 * 8) + lVar1;
        *(longlong *)(unaff_RSI + 8 + uVar3 * 8) =
             *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 8 + uVar3 * 8) + lVar1;
        *(longlong *)(unaff_RSI + 0x10 + uVar3 * 8) =
             *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10 + uVar3 * 8) + lVar1;
        *(longlong *)(unaff_RSI + 0x18 + uVar3 * 8) =
             *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x18 + uVar3 * 8) + lVar1;
        uVar3 = uVar3 + 4;
      } while ((bVar2 & 0xfffffffc) != uVar3);
    }
    if (uVar6 != 0) {
      do {
        *(ulonglong *)(unaff_RSI + uVar3 * 8) =
             *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + uVar3 * 8) + uVar4 * 4;
        uVar3 = uVar3 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (param_4 != 0) {
      uVar4 = (ulonglong)(bVar2 & 3);
      if ((ulonglong)bVar2 - 1 < 3) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          *(undefined8 *)(param_1 + uVar6 * 8) =
               *(undefined8 *)(*(longlong *)(unaff_RDI + 0x28) + uVar6 * 8);
          *(undefined8 *)(param_1 + 8 + uVar6 * 8) =
               *(undefined8 *)(*(longlong *)(unaff_RDI + 0x28) + 8 + uVar6 * 8);
          *(undefined8 *)(param_1 + 0x10 + uVar6 * 8) =
               *(undefined8 *)(*(longlong *)(unaff_RDI + 0x28) + 0x10 + uVar6 * 8);
          *(undefined8 *)(param_1 + 0x18 + uVar6 * 8) =
               *(undefined8 *)(*(longlong *)(unaff_RDI + 0x28) + 0x18 + uVar6 * 8);
          uVar6 = uVar6 + 4;
        } while ((bVar2 & 0xfffffffc) != uVar6);
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined8 *)(param_1 + uVar6 * 8) =
             *(undefined8 *)(*(longlong *)(unaff_RDI + 0x28) + uVar6 * 8);
        uVar6 = uVar6 + 1;
      }
    }
  }
  else {
    bVar2 = *(byte *)(unaff_RDI + 0x20);
    if ((ulonglong)bVar2 != 0) {
      uVar6 = (longlong)*(int *)(unaff_RDI + 0x1c) & *(ulonglong *)(unaff_RDI + 0x10);
      uVar4 = (ulonglong)(bVar2 & 3);
      if ((ulonglong)bVar2 - 1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        lVar1 = uVar6 * 4;
        do {
          *(longlong *)(unaff_RSI + uVar3 * 8) =
               *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + uVar3 * 8) + lVar1;
          *(longlong *)(unaff_RSI + 8 + uVar3 * 8) =
               *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 8 + uVar3 * 8) + lVar1;
          *(longlong *)(unaff_RSI + 0x10 + uVar3 * 8) =
               *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10 + uVar3 * 8) + lVar1;
          *(longlong *)(unaff_RSI + 0x18 + uVar3 * 8) =
               *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x18 + uVar3 * 8) + lVar1;
          uVar3 = uVar3 + 4;
        } while ((bVar2 & 0xfffffffc) != uVar3);
      }
      if (uVar4 != 0) {
        do {
          *(ulonglong *)(unaff_RSI + uVar3 * 8) =
               *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + uVar3 * 8) + uVar6 * 4;
          uVar3 = uVar3 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    *param_2 = param_4;
    *param_3 = 0;
  }
  return;
}


