// Function: FUN_0088a05e
// Address: 0088a05e
// Size: 1168 bytes
// Class: GNList


int FUN_0088a05e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar7 = unaff_RDI + 0xa8;
  lVar8 = unaff_RDI + 0xa0;
  lVar9 = unaff_RDI + 0x98;
  lVar10 = unaff_RDI + 0x90;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,local_48,param_3,param_4,lVar7,lVar8,lVar9,lVar10,uVar11,uVar12,uVar13
                      );
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar11 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = local_36 + -1;
    switch(iVar1) {
    case 0:
      if (local_48[0] != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_0088a3e0;
      }
      iVar3 = FUN_0088984a();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0xb0) = 1;
      break;
    case 1:
      if (local_48[0] != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_0088a3e0;
      }
      iVar3 = FUN_0088984a();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0xb1) = 1;
      break;
    case 2:
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_0088a3e0;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0xb2) = 1;
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
switchD_0088a14a_caseD_3:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
LAB_0088a3e0:
      iVar3 = iVar3 + iVar2;
      break;
    case 9:
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_0088a3e0;
      }
      *(undefined8 *)(unaff_RDI + 0x68) = *(undefined8 *)(unaff_RDI + 0x60);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0x68) - *(longlong *)(unaff_RDI + 0x60);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0x68) = *(longlong *)(unaff_RDI + 0x60) + uVar6;
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
      *(undefined1 *)(unaff_RDI + 0xb3) = 1;
      break;
    case 10:
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_0088a3e0;
      }
      *(undefined8 *)(unaff_RDI + 0x80) = *(undefined8 *)(unaff_RDI + 0x78);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar6 = (ulonglong)local_34;
      uVar5 = *(longlong *)(unaff_RDI + 0x80) - *(longlong *)(unaff_RDI + 0x78);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(ulonglong *)(unaff_RDI + 0x80) = *(longlong *)(unaff_RDI + 0x78) + uVar6;
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
      *(undefined1 *)(unaff_RDI + 0xb4) = 1;
      break;
    default:
      switch((int)local_36) {
      case 0x14:
        if (local_48[0] != 2) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_0088a3e0;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xb5) = 1;
        break;
      case 0x15:
        if (local_48[0] != 10) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_0088a3e0;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xb6) = 1;
        break;
      case 0x16:
        if (local_48[0] != 10) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_0088a3e0;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xb7) = 1;
        break;
      case 0x17:
        if (local_48[0] != 10) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_0088a3e0;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xb8) = 1;
        break;
      default:
        goto switchD_0088a14a_caseD_3;
      }
    }
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


