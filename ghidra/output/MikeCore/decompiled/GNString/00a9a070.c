// Function: FUN_00a9a070
// Address: 00a9a070
// Size: 1893 bytes
// Class: GNString


int FUN_00a9a070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  ulonglong uVar7;
  longlong unaff_RDI;
  ulonglong uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  int local_4c [2];
  short local_42;
  uint local_34;
  
  FUN_0088d1d0();
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar10 = unaff_RDI + 0xa4;
  lVar11 = unaff_RDI + 0xa0;
  lVar12 = unaff_RDI + 0x88;
  lVar13 = unaff_RDI + 0x70;
  lVar14 = unaff_RDI + 0x6c;
  lVar15 = unaff_RDI + 0x68;
  lVar16 = unaff_RDI + 0x30;
  lVar17 = unaff_RDI + 0x2c;
  lVar18 = unaff_RDI + 0x28;
  lVar19 = unaff_RDI + 8;
  do {
    psVar4 = &local_42;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,local_4c,param_3,param_4,lVar10,lVar11,lVar12,lVar13,lVar14,lVar15,
                       lVar16,lVar17,lVar18,lVar19,uVar20,uVar21,uVar22);
    iVar2 = iVar2 + iVar1;
    if (local_4c[0] == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar20 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_42) {
    case 1:
      if (local_4c[0] != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = FUN_00aa9ade();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0xe8) = 1;
      goto LAB_00a9a6ce;
    case 2:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xe9) = 1;
        goto LAB_00a9a6ce;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xb:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xea) = 1;
        goto LAB_00a9a6ce;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xc:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xeb) = 1;
        goto LAB_00a9a6ce;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xd:
      if (local_4c[0] == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x40) = *(undefined8 *)(unaff_RDI + 0x38);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_00a9a1c2::switchdataD_00a9a80c,&local_34);
        uVar7 = (ulonglong)local_34;
        uVar8 = *(longlong *)(unaff_RDI + 0x40) - *(longlong *)(unaff_RDI + 0x38);
        if (uVar8 < uVar7) {
          FUN_0088d550();
        }
        else if (uVar7 < uVar8) {
          *(ulonglong *)(unaff_RDI + 0x40) = *(longlong *)(unaff_RDI + 0x38) + uVar7;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar8 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0xec) = 1;
        goto LAB_00a9a6ce;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xe:
      if (local_4c[0] == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x58) = *(undefined8 *)(unaff_RDI + 0x50);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_00a9a1c2::switchdataD_00a9a80c,&local_34);
        uVar7 = (ulonglong)local_34;
        uVar8 = *(longlong *)(unaff_RDI + 0x58) - *(longlong *)(unaff_RDI + 0x50);
        if (uVar8 < uVar7) {
          FUN_0088d550();
        }
        else if (uVar7 < uVar8) {
          *(ulonglong *)(unaff_RDI + 0x58) = *(longlong *)(unaff_RDI + 0x50) + uVar7;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar8 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0xed) = 1;
        goto LAB_00a9a6ce;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xf:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xee) = 1;
        goto LAB_00a9a6ce;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x10:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xef) = 1;
        goto LAB_00a9a6ce;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x11:
      if (local_4c[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xf0) = 1;
        goto LAB_00a9a6ce;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x12:
      if (local_4c[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xf1) = 1;
        goto LAB_00a9a6ce;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x13:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xf2) = 1;
        goto LAB_00a9a6ce;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x14:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xf3) = 1;
        goto LAB_00a9a6ce;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x15:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xf4) = 1;
        goto LAB_00a9a6ce;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x16:
      if (local_4c[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xf5) = 1;
        goto LAB_00a9a6ce;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x17:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xf6) = 1;
        goto LAB_00a9a6ce;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x18:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xf7) = 1;
        goto LAB_00a9a6ce;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x19:
      if (local_4c[0] == 0xf) {
        lVar6 = *(longlong *)(unaff_RDI + 0xd0);
        uVar9 = extraout_XMM0_Da;
        for (lVar5 = *(longlong *)(unaff_RDI + 0xd8); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar9 = (*(code *)**(undefined8 **)(lVar5 + -0x20))();
        }
        *(longlong *)(unaff_RDI + 0xd8) = lVar6;
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar9,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar8 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0xd0) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar8 = uVar8 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar8 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0xf8) = 1;
        goto LAB_00a9a6ce;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00a9a6ce:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


