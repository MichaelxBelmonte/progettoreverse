// Function: FUN_00902ee2
// Address: 00902ee2
// Size: 1711 bytes
// Class: MDMetaWindowController


int FUN_00902ee2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  ulonglong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar9 = unaff_RDI + 0xd8;
  lVar10 = unaff_RDI + 0xc0;
  lVar11 = unaff_RDI + 0x80;
  lVar12 = unaff_RDI + 0x78;
  lVar13 = unaff_RDI + 0x70;
  lVar14 = unaff_RDI + 0x58;
  lVar15 = unaff_RDI + 0x40;
  lVar16 = unaff_RDI + 0x28;
  lVar17 = unaff_RDI + 0x10;
  lVar18 = unaff_RDI + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,local_48,param_3,param_4,lVar9,lVar10,lVar11,lVar12,lVar13,lVar14,
                       lVar15,lVar16,lVar17,lVar18,uVar19,uVar20,uVar21);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar19 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_48[0] != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x139) = 1;
      goto LAB_00903543;
    case 2:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x13a) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 3:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x13b) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 4:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x13c) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 5:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x13d) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 6:
      if (local_48[0] == 4) {
        iVar3 = (**(code **)(*unaff_RSI + 0x148))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x13e) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 7:
      if (local_48[0] == 4) {
        iVar3 = (**(code **)(*unaff_RSI + 0x148))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x13f) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 8:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x140) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 9:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(unaff_RDI + 0x84) = local_34;
        *(undefined1 *)(unaff_RDI + 0x141) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 10:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(unaff_RDI + 0x88) = local_34;
        *(undefined1 *)(unaff_RDI + 0x142) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xb:
      if (local_48[0] == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x98) = *(undefined8 *)(unaff_RDI + 0x90);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_0090301b::switchdataD_009035c4,&local_34);
        FUN_008897f0();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x138))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x143) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xc:
      if (local_48[0] == 0xf) {
        lVar6 = *(longlong *)(unaff_RDI + 0xa8);
        uVar8 = extraout_XMM0_Da;
        for (lVar5 = *(longlong *)(unaff_RDI + 0xb0); lVar5 != lVar6; lVar5 = lVar5 + -0x30) {
          uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x30))();
        }
        *(longlong *)(unaff_RDI + 0xb0) = lVar6;
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar8,&local_34);
        FUN_00903614();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0xa8) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x30;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x144) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xd:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x145) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xe:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x146) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xf:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x147) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x10:
      if (local_48[0] == 0xc) {
        iVar3 = FUN_00902848();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x148) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x11:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x149) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00903543:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


