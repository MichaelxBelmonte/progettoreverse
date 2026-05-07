// Function: FUN_00919ed2
// Address: 00919ed2
// Size: 713 bytes
// Class: GNList


int FUN_00919ed2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int local_38;
  short local_32;
  
  FUN_0088d1d0();
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar6 = unaff_RDI + 0x40;
  lVar7 = unaff_RDI + 0x28;
  lVar8 = unaff_RDI + 0x10;
  lVar9 = unaff_RDI + 8;
  do {
    psVar5 = &local_32;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (&local_32,&local_38,param_3,param_4,lVar6,lVar7,lVar8,lVar9,uVar10,uVar11,
                       uVar12);
    if (local_38 == 0) {
      iVar3 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar10 & 1) != 0) {
        operator_delete(psVar5);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar3 + iVar2 + iVar1;
    }
    if (local_32 < 0x14) {
      if (local_32 == 1) {
        if (local_38 == 2) {
          iVar3 = (**(code **)(*unaff_RSI + 0x118))();
          *(undefined1 *)(unaff_RDI + 0x100) = 1;
        }
        else {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
      }
      else if (local_32 == 2) {
        if (local_38 == 0xb) {
          iVar3 = (**(code **)(*unaff_RSI + 0x150))();
          *(undefined1 *)(unaff_RDI + 0x101) = 1;
        }
        else {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
      }
      else {
        if (local_32 != 10) goto LAB_0091a0dd;
        if (local_38 == 0xb) {
          iVar3 = (**(code **)(*unaff_RSI + 0x150))();
          *(undefined1 *)(unaff_RDI + 0x102) = 1;
        }
        else {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
      }
    }
    else if (local_32 < 0x1f) {
      if (local_32 == 0x14) {
        if (local_38 == 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x138))();
          *(undefined1 *)(unaff_RDI + 0x103) = 1;
        }
        else {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
      }
      else if (local_32 == 0x1e) {
        if (local_38 == 0xb) {
          iVar3 = (**(code **)(*unaff_RSI + 0x150))();
          *(undefined1 *)(unaff_RDI + 0x105) = 1;
        }
        else {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
      }
      else {
LAB_0091a0dd:
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
    }
    else if (local_32 == 0x1f) {
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0x104) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
    }
    else {
      if (local_32 != 0x28) goto LAB_0091a0dd;
      if (local_38 == 0xc) {
        iVar3 = FUN_00918efc();
        *(undefined1 *)(unaff_RDI + 0x106) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
    }
    iVar4 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  } while( true );
}


