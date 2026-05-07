// Function: FUN_008c5314
// Address: 008c5314
// Size: 787 bytes
// Class: GNString


int FUN_008c5314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  ulonglong uVar6;
  longlong unaff_RDI;
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
  lVar12 = unaff_RDI + 0x3b8;
  lVar8 = unaff_RDI + 0x130;
  lVar7 = unaff_RDI + 8;
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
    iVar1 = (int)local_36;
    switch(iVar1) {
    case 1:
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c5578;
      }
      iVar3 = FUN_00891d8e();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x3d0) = 1;
      break;
    case 2:
      if (local_44 != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c5578;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x3d1) = 1;
      break;
    case 3:
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c5578;
      }
      iVar3 = FUN_0088a05e();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x3d2) = 1;
      break;
    case 4:
    case 5:
    case 6:
switchD_008c53d6_caseD_4:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
LAB_008c5578:
      iVar3 = iVar3 + iVar2;
      break;
    case 7:
      if (local_44 != 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c5578;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x3d3) = 1;
      break;
    default:
      if (iVar1 == 0xc44) {
        if (local_44 != 0xc) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_008c5578;
        }
        iVar3 = FUN_008f7b82();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x3d4) = 1;
      }
      else {
        if (iVar1 != 0xc45) goto switchD_008c53d6_caseD_4;
        if (local_44 != 0xf) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_008c5578;
        }
        *(undefined8 *)(unaff_RDI + 0x3c0) = *(undefined8 *)(unaff_RDI + 0x3b8);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(0xc44,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x3c0) - *(longlong *)(unaff_RDI + 0x3b8);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x3c0) = *(longlong *)(unaff_RDI + 0x3b8) + uVar6;
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
        *(undefined1 *)(unaff_RDI + 0x3d5) = 1;
      }
    }
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


