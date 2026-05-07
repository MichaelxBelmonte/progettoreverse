// Function: FUN_00d8dd20
// Address: 00d8dd20
// Size: 582 bytes
// Class: GNString
// String references:
//   "Cannot modify an immutable string %@"


void FUN_00d8dd20(uint param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  longlong unaff_RSI;
  longlong unaff_RDI;
  uint uVar7;
  
  if ((*(byte *)(unaff_RDI + 0x24) & 1) == 0) {
    FUN_00d50b00();
    FUN_00e828a0();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  else if ((param_2 != 0) && (unaff_RSI != 0)) {
    if ((*(int *)(unaff_RDI + 0x20) == -1) && ((param_1 & 0xfffffffb) == 0)) {
      if (*(longlong *)(unaff_RDI + 0x10) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_00e7dde0();
      }
      param_2 = iVar2 + param_2;
      lVar4 = unaff_RDI + 0x28;
      lVar1 = *(longlong *)(unaff_RDI + 0x10);
      if (param_2 < 0x18) {
        if (lVar1 != lVar4) {
          if (lVar1 != 0) {
            FUN_00e7dbc0(param_2,(longlong)iVar2);
            FUN_00e83070();
            *(undefined8 *)(unaff_RDI + 0x10) = 0;
          }
          *(longlong *)(unaff_RDI + 0x10) = lVar4;
        }
      }
      else if (lVar1 == lVar4) {
        uVar5 = FUN_00e83010();
        *(undefined8 *)(unaff_RDI + 0x10) = uVar5;
        FUN_00e7dbc0();
      }
      else {
        uVar5 = FUN_00e83060();
        *(undefined8 *)(unaff_RDI + 0x10) = uVar5;
      }
      FUN_00e7dbc0();
      *(undefined1 *)(*(longlong *)(unaff_RDI + 0x10) + (longlong)param_2) = 0;
    }
    else {
      uVar7 = 6;
      if (param_1 != 0xffffffff) {
        uVar7 = param_1;
      }
      bVar6 = 2 - (uVar7 == 6 || (param_1 & 0xfffffffb) == 0);
      lVar4 = FUN_00e83010(bVar6,param_2 << (bVar6 & 0x1f));
      uVar3 = FUN_00da3950(param_2,uVar7);
      if (*(int *)(unaff_RDI + 0x20) != -1) {
        FUN_00d8ea20();
        FUN_00e83070();
        return;
      }
      if ((*(longlong *)(unaff_RDI + 0x10) == 0) ||
         (*(longlong *)(unaff_RDI + 0x10) == unaff_RDI + 0x28)) {
        *(undefined8 *)(unaff_RDI + 0x10) = 0;
      }
      else {
        FUN_00e83070();
        *(undefined8 *)(unaff_RDI + 0x10) = 0;
        if (*(int *)(unaff_RDI + 0x20) != -1) {
          FUN_00e83070();
          *(undefined8 *)(unaff_RDI + 0x18) = 0;
          *(undefined4 *)(unaff_RDI + 0x20) = 0xffffffff;
        }
      }
      if (lVar4 != 0) {
        *(longlong *)(unaff_RDI + 0x18) = lVar4;
        *(undefined4 *)(unaff_RDI + 0x20) = uVar3;
      }
    }
  }
  return;
}


