// Function: FUN_00905508
// Address: 00905508
// Size: 612 bytes
// Class: MUSpectrumShaper


int FUN_00905508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int local_38;
  short local_32;
  
  FUN_0088d1d0();
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar6 = unaff_RDI + 0x20;
  lVar7 = unaff_RDI + 8;
  do {
    psVar5 = &local_32;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (&local_32,&local_38,param_3,param_4,lVar6,lVar7,uVar8,uVar9,uVar10);
    if (local_38 == 0) {
      iVar3 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar8 & 1) != 0) {
        operator_delete(psVar5);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar3 + iVar2 + iVar1;
    }
    if (local_32 < 0xb) {
      if (local_32 == 1) {
        if (local_38 == 0xb) {
          iVar3 = (**(code **)(*unaff_RSI + 0x150))();
          *(undefined1 *)(unaff_RDI + 0x6a) = 1;
        }
        else {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
      }
      else if (local_32 == 2) {
        if (local_38 == 0xb) {
          iVar3 = (**(code **)(*unaff_RSI + 0x150))();
          *(undefined1 *)(unaff_RDI + 0x6b) = 1;
        }
        else {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
      }
      else if (local_32 == 3) {
        if (local_38 == 0xb) {
          iVar3 = (**(code **)(*unaff_RSI + 0x150))();
          *(undefined1 *)(unaff_RDI + 0x6c) = 1;
        }
        else {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
      }
      else {
LAB_009056bc:
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
    }
    else if (local_32 == 0xb) {
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0x6d) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
    }
    else if (local_32 == 0x15) {
      if (local_38 == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x6e) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
    }
    else {
      if (local_32 != 0x16) goto LAB_009056bc;
      if (local_38 == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x6f) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
    }
    iVar4 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  } while( true );
}


