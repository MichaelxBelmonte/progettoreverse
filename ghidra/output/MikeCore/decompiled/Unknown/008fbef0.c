// Function: FUN_008fbef0
// Address: 008fbef0
// Size: 2661 bytes
// Class: Unknown


int FUN_008fbef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar7 = unaff_RDI + 600;
  lVar8 = unaff_RDI + 599;
  lVar9 = unaff_RDI + 0x256;
  lVar10 = unaff_RDI + 0x255;
  lVar11 = unaff_RDI + 0x254;
  lVar12 = unaff_RDI + 0x250;
  lVar13 = unaff_RDI + 0x238;
  lVar14 = unaff_RDI + 0x230;
  lVar15 = unaff_RDI + 0x218;
  lVar16 = unaff_RDI + 0x200;
  lVar17 = unaff_RDI + 0x1e8;
  lVar18 = unaff_RDI + 0x1d0;
  lVar19 = unaff_RDI + 0x1b8;
  lVar20 = unaff_RDI + 0x1a0;
  lVar21 = unaff_RDI + 0x188;
  lVar22 = unaff_RDI + 0x150;
  lVar23 = unaff_RDI + 0x14c;
  lVar24 = unaff_RDI + 0x38;
  lVar25 = unaff_RDI + 0x30;
  lVar26 = unaff_RDI + 0x18;
  lVar27 = unaff_RDI + 0x10;
  lVar28 = unaff_RDI + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,local_48,param_3,param_4,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,lVar13
                       ,lVar14,lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,lVar23,lVar24
                       ,lVar25,lVar26,lVar27,lVar28,uVar29,uVar30,uVar31);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar29 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_48[0] != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 900) = 1;
      goto LAB_008fc8a9;
    case 2:
      if (local_48[0] == 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x385) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 3:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x386) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 5:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x387) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 6:
      if (local_48[0] == 0xc) {
        iVar3 = FUN_008f0022();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x388) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 10:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(unaff_RDI + 0x148) = local_34;
        *(undefined1 *)(unaff_RDI + 0x389) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xb:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x38a) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xc:
      if (local_48[0] == 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x38b) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xd:
      if (local_48[0] == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x160) = *(undefined8 *)(unaff_RDI + 0x158);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_008fc0db::switchdataD_008fc988,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x160) - *(longlong *)(unaff_RDI + 0x158);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x160) = *(longlong *)(unaff_RDI + 0x158) + uVar6;
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
        *(undefined1 *)(unaff_RDI + 0x38c) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xe:
      if (local_48[0] == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x178) = *(undefined8 *)(unaff_RDI + 0x170);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_008fc0db::switchdataD_008fc988,&local_34);
        FUN_0090f0c8();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x140))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x38d) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xf:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x38e) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x10:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x38f) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x14:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x390) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x15:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x391) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x16:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x392) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x17:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x393) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x18:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x394) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x19:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x395) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1a:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x396) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1e:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x397) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1f:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x398) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x28:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x399) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x29:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x39a) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x2a:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x39b) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x2b:
      if (local_48[0] == 0xc) {
        iVar3 = FUN_008e84b4();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x39c) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x2c:
      if (local_48[0] == 0xc) {
        iVar3 = FUN_008e84b4();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x39d) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x2d:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x39e) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x2e:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x39f) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x2f:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(unaff_RDI + 0x380) = local_34;
        *(undefined1 *)(unaff_RDI + 0x3a0) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008fc8a9:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


