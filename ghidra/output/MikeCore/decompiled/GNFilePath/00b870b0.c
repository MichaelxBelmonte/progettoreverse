// Function: FUN_00b870b0
// Address: 00b870b0
// Size: 640 bytes
// Class: GNFilePath


ulonglong FUN_00b870b0(uint param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong unaff_RSI;
  longlong unaff_RDI;
  ulonglong unaff_R14;
  bool bVar7;
  
  bVar1 = *(byte *)(unaff_RDI + 0x28);
  lVar2 = *(longlong *)(unaff_RDI + 0x38);
  lVar4 = (longlong)(int)param_1;
  if (((param_2 < 0) || (lVar2 < lVar4 + param_2)) || (*(int *)(unaff_RDI + 0x24) == 10)) {
    if (bVar1 != 0) {
      unaff_R14 = lVar4 * 4;
      if ((ulonglong)bVar1 - 1 < 3) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          if (*(longlong *)(unaff_RSI + uVar5 * 8) != 0) {
            ___bzero();
          }
          if (*(longlong *)(unaff_RSI + 8 + uVar5 * 8) != 0) {
            ___bzero();
          }
          if (*(longlong *)(unaff_RSI + 0x10 + uVar5 * 8) != 0) {
            ___bzero();
          }
          if (*(longlong *)(unaff_RSI + 0x18 + uVar5 * 8) != 0) {
            ___bzero();
          }
          uVar5 = uVar5 + 4;
        } while ((bVar1 & 0xfffffffc) != uVar5);
      }
      if ((ulonglong)(bVar1 & 3) != 0) {
        uVar6 = 0;
        do {
          if (*(longlong *)(unaff_RSI + uVar5 * 8 + uVar6 * 8) != 0) {
            ___bzero();
          }
          uVar6 = uVar6 + 1;
        } while ((bVar1 & 3) != uVar6);
      }
    }
    unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),1);
    if (*(int *)(unaff_RDI + 0x24) == 10) goto LAB_00b87326;
    if (param_2 < 0) {
      bVar7 = SCARRY4((int)param_2,param_1);
      param_1 = (int)param_2 + param_1;
      if (param_1 == 0 || bVar7 != (int)param_1 < 0) goto LAB_00b87326;
      uVar5 = (ulonglong)param_1;
      param_2 = 0;
    }
    else {
      uVar5 = lVar4 + param_2;
    }
    if (lVar2 < (longlong)uVar5) {
      if (lVar2 <= param_2) goto LAB_00b87326;
      param_1 = (int)lVar2 - (int)param_2;
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x48) + 0x368))();
  if ((*(longlong *)(unaff_RDI + 0x68) != 0) || (*(longlong *)(unaff_RDI + 0x70) != 0)) {
    FUN_00b822a0();
    if (*(longlong **)(unaff_RDI + 0x68) == (longlong *)0x0) {
      if (*(longlong **)(unaff_RDI + 0x70) != (longlong *)0x0) {
        pcVar3 = *(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x3b0);
        if (*(int *)(unaff_RDI + 0x50) == 1) {
          (*pcVar3)(param_1,param_2);
          if (*(longlong **)(unaff_RDI + 0x88) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x3b0))(param_1,param_2);
          }
        }
        else {
          (*pcVar3)(param_1,param_2);
        }
      }
    }
    else {
      pcVar3 = *(code **)(**(longlong **)(unaff_RDI + 0x68) + 0x3c0);
      if (*(int *)(unaff_RDI + 0x50) == 1) {
        (*pcVar3)(param_1,param_2);
        if (*(longlong **)(unaff_RDI + 0x80) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x3c0))(param_1,param_2);
        }
      }
      else {
        (*pcVar3)(param_1,param_2);
      }
    }
  }
  unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),1);
  (**(code **)(**(longlong **)(unaff_RDI + 0x48) + 0x378))();
LAB_00b87326:
  return unaff_R14 & 0xffffffff;
}


