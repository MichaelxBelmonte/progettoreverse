// Function: FUN_00914024
// Address: 00914024
// Size: 776 bytes
// Class: Unknown


int FUN_00914024(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  lVar12 = unaff_RDI + 0x428;
  lVar7 = unaff_RDI + 0x40;
  lVar8 = unaff_RDI + 8;
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
    iVar1 = local_36 + -0xb;
    switch(iVar1) {
    case 0:
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_0091427d;
      }
      iVar3 = FUN_0090f500();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x441) = 1;
      break;
    case 1:
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_0091427d;
      }
      iVar3 = FUN_0090f500();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x442) = 1;
      break;
    case 2:
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_0091427d;
      }
      iVar3 = FUN_0090f500();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x443) = 1;
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
switchD_009140e9_caseD_3:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
LAB_0091427d:
      iVar3 = iVar3 + iVar2;
      break;
    case 9:
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_0091427d;
      }
      iVar3 = FUN_009101fc();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x444) = 1;
      break;
    case 10:
      if (local_44 != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_0091427d;
      }
      *(undefined8 *)(unaff_RDI + 0x430) = *(undefined8 *)(unaff_RDI + 0x428);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0x430) - *(longlong *)(unaff_RDI + 0x428);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0x430) = *(longlong *)(unaff_RDI + 0x428) + uVar6;
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
      *(undefined1 *)(unaff_RDI + 0x445) = 1;
      break;
    default:
      if (local_36 != 1) goto switchD_009140e9_caseD_3;
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_0091427d;
      }
      iVar3 = FUN_00906482();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x440) = 1;
    }
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


