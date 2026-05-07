// Function: FUN_008cb37c
// Address: 008cb37c
// Size: 724 bytes
// Class: GNString


int FUN_008cb37c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  ulonglong uVar6;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  int local_44;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar7 = unaff_RDI + 0x24;
  lVar8 = unaff_RDI + 0x20;
  lVar12 = unaff_RDI + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,&local_44,param_3,param_4,lVar7,lVar8,uVar9,uVar10,uVar11,lVar12);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar9 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 < 3) {
      if (local_36 == 1) {
        if (local_44 == 0xf) {
          *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RDI + 8);
          iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
          uVar6 = (ulonglong)local_34;
          uVar5 = *(longlong *)(unaff_RDI + 0x10) - *(longlong *)(unaff_RDI + 8);
          if (uVar5 < uVar6) {
            FUN_0088d550();
          }
          else if (uVar6 < uVar5) {
            *(ulonglong *)(unaff_RDI + 0x10) = *(longlong *)(unaff_RDI + 8) + uVar6;
          }
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            uVar5 = 0;
            do {
              iVar2 = (**(code **)(*unaff_RSI + 0x128))();
              iVar1 = iVar1 + iVar2;
              uVar5 = uVar5 + 1;
            } while (uVar5 < local_34);
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(unaff_RDI + 0x30) = 1;
          goto LAB_008cb5a9;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else if (local_36 == 2) {
        if (local_44 == 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x31) = 1;
          goto LAB_008cb5a9;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else {
LAB_008cb54b:
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
LAB_008cb5a3:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 3) {
      if (local_44 != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008cb5a3;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x32) = 1;
    }
    else if (local_36 == 0xc45) {
      if (local_44 != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008cb5a3;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x33) = 1;
    }
    else {
      if (local_36 != 10000) goto LAB_008cb54b;
      if (local_44 != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008cb5a3;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x34) = 1;
    }
LAB_008cb5a9:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


