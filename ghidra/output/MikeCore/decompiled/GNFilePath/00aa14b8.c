// Function: FUN_00aa14b8
// Address: 00aa14b8
// Size: 3045 bytes
// Class: GNFilePath


int FUN_00aa14b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  int local_4c;
  short local_3a [3];
  uint local_34;
  
  FUN_0088d1d0();
  uVar36 = 0;
  uVar37 = 0;
  uVar38 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar10 = unaff_RDI + 0x174;
  lVar11 = unaff_RDI + 0x170;
  lVar12 = unaff_RDI + 0x158;
  lVar13 = unaff_RDI + 0x140;
  lVar14 = unaff_RDI + 0x138;
  lVar15 = unaff_RDI + 0x134;
  lVar16 = unaff_RDI + 0x131;
  lVar17 = unaff_RDI + 0x130;
  lVar18 = unaff_RDI + 0x111;
  lVar19 = unaff_RDI + 0x110;
  lVar20 = unaff_RDI + 0xf8;
  lVar21 = unaff_RDI + 0xf0;
  lVar22 = unaff_RDI + 0xd8;
  lVar23 = unaff_RDI + 0xc0;
  lVar24 = unaff_RDI + 0xb8;
  lVar25 = unaff_RDI + 0xa0;
  lVar26 = unaff_RDI + 0x88;
  lVar27 = unaff_RDI + 0x84;
  lVar28 = unaff_RDI + 0x80;
  lVar29 = unaff_RDI + 0x68;
  lVar30 = unaff_RDI + 0x60;
  lVar31 = unaff_RDI + 0x48;
  lVar32 = unaff_RDI + 0x30;
  lVar33 = unaff_RDI + 0x2c;
  lVar34 = unaff_RDI + 0x28;
  lVar35 = unaff_RDI + 8;
  do {
    psVar4 = local_3a;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,&local_4c,param_3,param_4,lVar10,lVar11,lVar12,lVar13,lVar14,lVar15,
                       lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,lVar23,lVar24,lVar25,lVar26,
                       lVar27,lVar28,lVar29,lVar30,lVar31,lVar32,lVar33,lVar34,lVar35,uVar36,uVar37,
                       uVar38);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar36 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_3a[0]) {
    case 1:
      if (local_4c != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = FUN_00aa9ade();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x1c0) = 1;
      goto LAB_00aa1ff2;
    case 2:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1c1) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xb:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1c2) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xc:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1c3) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xd:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1c4) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xe:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1c5) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xf:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1c6) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x10:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1c7) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x11:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1c8) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x12:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1c9) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x13:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1ca) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x14:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1cb) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x15:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1cc) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x16:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1cd) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x17:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1ce) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x18:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1cf) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x19:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1d0) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1a:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1d1) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1b:
      if (local_4c == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x120) = *(undefined8 *)(unaff_RDI + 0x118);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_00aa16c6::switchdataD_00aa20d8,&local_34);
        uVar7 = (ulonglong)local_34;
        uVar8 = *(longlong *)(unaff_RDI + 0x120) - *(longlong *)(unaff_RDI + 0x118);
        if (uVar8 < uVar7) {
          FUN_0088d550();
        }
        else if (uVar7 < uVar8) {
          *(ulonglong *)(unaff_RDI + 0x120) = *(longlong *)(unaff_RDI + 0x118) + uVar7;
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
        *(undefined1 *)(unaff_RDI + 0x1d2) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1c:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1d3) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1d:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1d4) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1e:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1d5) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1f:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1d6) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x20:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1d7) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x21:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1d8) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x22:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1d9) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x23:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x1da) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x24:
      if (local_4c == 0xf) {
        lVar6 = *(longlong *)(unaff_RDI + 0x178);
        uVar9 = extraout_XMM0_Da;
        for (lVar5 = *(longlong *)(unaff_RDI + 0x180); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar9 = (*(code *)**(undefined8 **)(lVar5 + -0x20))();
        }
        *(longlong *)(unaff_RDI + 0x180) = lVar6;
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar9,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar8 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x178) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar8 = uVar8 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar8 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x1db) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x25:
      if (local_4c == 0xf) {
        lVar6 = *(longlong *)(unaff_RDI + 400);
        uVar9 = extraout_XMM0_Da;
        for (lVar5 = *(longlong *)(unaff_RDI + 0x198); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar9 = (*(code *)**(undefined8 **)(lVar5 + -0x20))();
        }
        *(longlong *)(unaff_RDI + 0x198) = lVar6;
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar9,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar8 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 400) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar8 = uVar8 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar8 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x1dc) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x26:
      if (local_4c == 0xf) {
        lVar6 = *(longlong *)(unaff_RDI + 0x1a8);
        uVar9 = extraout_XMM0_Da;
        for (lVar5 = *(longlong *)(unaff_RDI + 0x1b0); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar9 = (*(code *)**(undefined8 **)(lVar5 + -0x20))();
        }
        *(longlong *)(unaff_RDI + 0x1b0) = lVar6;
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar9,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar8 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x1a8) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar8 = uVar8 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar8 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x1dd) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00aa1ff2:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


