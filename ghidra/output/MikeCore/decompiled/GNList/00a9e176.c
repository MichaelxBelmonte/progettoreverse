// Function: FUN_00a9e176
// Address: 00a9e176
// Size: 1862 bytes
// Class: GNList


int FUN_00a9e176(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  longlong lVar9;
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
  longlong lVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  int local_40 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar9 = unaff_RDI + 0x90;
  lVar10 = unaff_RDI + 0x8c;
  lVar11 = unaff_RDI + 0x88;
  lVar12 = unaff_RDI + 0x70;
  lVar13 = unaff_RDI + 0x68;
  lVar14 = unaff_RDI + 0x50;
  lVar15 = unaff_RDI + 0x38;
  lVar16 = unaff_RDI + 0x34;
  lVar17 = unaff_RDI + 0x30;
  lVar18 = unaff_RDI + 0x2c;
  lVar19 = unaff_RDI + 0x28;
  lVar20 = unaff_RDI + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,local_40,param_3,param_4,lVar9,lVar10,lVar11,lVar12,lVar13,lVar14,
                       lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,uVar21,uVar22,uVar23);
    iVar2 = iVar2 + iVar1;
    if (local_40[0] == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar21 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_40[0] != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = FUN_00aa9ade();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x100) = 1;
      goto LAB_00a9e86e;
    case 2:
      if (local_40[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x101) = 1;
        goto LAB_00a9e86e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xb:
      if (local_40[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x102) = 1;
        goto LAB_00a9e86e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xc:
      if (local_40[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x103) = 1;
        goto LAB_00a9e86e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xd:
      if (local_40[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x104) = 1;
        goto LAB_00a9e86e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xe:
      if (local_40[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x105) = 1;
        goto LAB_00a9e86e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xf:
      if (local_40[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x106) = 1;
        goto LAB_00a9e86e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x10:
      if (local_40[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x107) = 1;
        goto LAB_00a9e86e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x11:
      if (local_40[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x108) = 1;
        goto LAB_00a9e86e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x12:
      if (local_40[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x109) = 1;
        goto LAB_00a9e86e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x13:
      if (local_40[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x10a) = 1;
        goto LAB_00a9e86e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x14:
      if (local_40[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x10b) = 1;
        goto LAB_00a9e86e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x15:
      if (local_40[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x10c) = 1;
        goto LAB_00a9e86e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x16:
      if (local_40[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x10d) = 1;
        goto LAB_00a9e86e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x17:
      if (local_40[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x10e) = 1;
        goto LAB_00a9e86e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x18:
      if (local_40[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x10f) = 1;
        goto LAB_00a9e86e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x19:
      if (local_40[0] == 0xf) {
        lVar6 = *(longlong *)(unaff_RDI + 0xd0);
        uVar8 = extraout_XMM0_Da;
        for (lVar5 = *(longlong *)(unaff_RDI + 0xd8); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x20))();
        }
        *(longlong *)(unaff_RDI + 0xd8) = lVar6;
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar8,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0xd0) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x110) = 1;
        goto LAB_00a9e86e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1a:
      if (local_40[0] == 0xf) {
        lVar6 = *(longlong *)(unaff_RDI + 0xe8);
        uVar8 = extraout_XMM0_Da;
        for (lVar5 = *(longlong *)(unaff_RDI + 0xf0); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x20))();
        }
        *(longlong *)(unaff_RDI + 0xf0) = lVar6;
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar8,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0xe8) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x111) = 1;
        goto LAB_00a9e86e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00a9e86e:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


