// Function: FUN_00a6b098
// Address: 00a6b098
// Size: 1226 bytes
// Class: MUSpectrumShaper


int FUN_00a6b098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar9 = unaff_RDI + 0x68;
  lVar10 = unaff_RDI + 0x50;
  lVar11 = unaff_RDI + 0x38;
  lVar12 = unaff_RDI + 0x34;
  lVar13 = unaff_RDI + 0x30;
  lVar14 = unaff_RDI + 0x2c;
  lVar15 = unaff_RDI + 0x28;
  lVar16 = unaff_RDI + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,&local_3c,param_3,param_4,lVar9,lVar10,lVar11,lVar12,lVar13,lVar14,
                       lVar15,lVar16,uVar17,uVar18,uVar19);
    iVar2 = iVar2 + iVar1;
    if (local_3c == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar17 & 1) != 0) {
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
      *(undefined1 *)(unaff_RDI + 0xd0) = 1;
      goto LAB_00a6b514;
    case 2:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd1) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xb:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd2) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xc:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd3) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xd:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd4) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xe:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd5) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xf:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd6) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x10:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd7) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x11:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd8) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x12:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd9) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x13:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xda) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x14:
      if (local_3c == 0xf) {
        lVar6 = *(longlong *)(unaff_RDI + 0xb8);
        uVar8 = extraout_XMM0_Da;
        for (lVar5 = *(longlong *)(unaff_RDI + 0xc0); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x20))();
        }
        *(longlong *)(unaff_RDI + 0xc0) = lVar6;
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar8,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0xb8) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0xdb) = 1;
        goto LAB_00a6b514;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00a6b514:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


