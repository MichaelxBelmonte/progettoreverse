// Function: FUN_00a675c4
// Address: 00a675c4
// Size: 1467 bytes
// Class: GNFilePath


int FUN_00a675c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  int local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar9 = unaff_RDI + 0xf8;
  lVar10 = unaff_RDI + 0xe0;
  lVar11 = unaff_RDI + 200;
  lVar12 = unaff_RDI + 0xb0;
  lVar13 = unaff_RDI + 0x98;
  lVar14 = unaff_RDI + 0x80;
  lVar15 = unaff_RDI + 0x68;
  lVar16 = unaff_RDI + 0x50;
  lVar17 = unaff_RDI + 0x48;
  lVar18 = unaff_RDI + 0x30;
  lVar19 = unaff_RDI + 0x28;
  lVar20 = unaff_RDI + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,&local_3c,param_3,param_4,lVar9,lVar10,lVar11,lVar12,lVar13,lVar14,
                       lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,uVar21,uVar22,uVar23);
    iVar2 = iVar2 + iVar1;
    if (local_3c == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar21 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_3c != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = FUN_00aa9ade();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x148) = 1;
      goto LAB_00a67b31;
    case 2:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x149) = 1;
        goto LAB_00a67b31;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xb:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x14a) = 1;
        goto LAB_00a67b31;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xc:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x14b) = 1;
        goto LAB_00a67b31;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xd:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x14c) = 1;
        goto LAB_00a67b31;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xe:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x14d) = 1;
        goto LAB_00a67b31;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xf:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x14e) = 1;
        goto LAB_00a67b31;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x10:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x14f) = 1;
        goto LAB_00a67b31;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x11:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x150) = 1;
        goto LAB_00a67b31;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x12:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x151) = 1;
        goto LAB_00a67b31;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x13:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x152) = 1;
        goto LAB_00a67b31;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x14:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x153) = 1;
        goto LAB_00a67b31;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x15:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x154) = 1;
        goto LAB_00a67b31;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x16:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x155) = 1;
        goto LAB_00a67b31;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x17:
      if (local_3c == 0xf) {
        lVar6 = *(longlong *)(unaff_RDI + 0x130);
        uVar8 = extraout_XMM0_Da;
        for (lVar5 = *(longlong *)(unaff_RDI + 0x138); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x20))();
        }
        *(longlong *)(unaff_RDI + 0x138) = lVar6;
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar8,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x130) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x156) = 1;
        goto LAB_00a67b31;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00a67b31:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


