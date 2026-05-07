// Function: FUN_008f7b82
// Address: 008f7b82
// Size: 2235 bytes
// Class: GNString


int FUN_008f7b82(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  int local_4c;
  short local_3a [3];
  uint local_34;
  
  FUN_0088d1d0();
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar10 = unaff_RDI + 0x84;
  lVar11 = unaff_RDI + 0x80;
  lVar12 = unaff_RDI + 0x68;
  lVar13 = unaff_RDI + 0x60;
  lVar14 = unaff_RDI + 0x58;
  lVar15 = unaff_RDI + 0x40;
  lVar16 = unaff_RDI + 0x28;
  lVar17 = unaff_RDI + 0x24;
  lVar18 = unaff_RDI + 0x21;
  lVar19 = unaff_RDI + 0x20;
  do {
    psVar4 = local_3a;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,&local_4c,param_3,param_4,lVar10,lVar11,lVar12,lVar13,lVar14,lVar15,
                       lVar16,lVar17,lVar18,lVar19,uVar20,uVar21,uVar22);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar20 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = local_3a[0] + -10;
    switch(iVar1) {
    case 0:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x271) = 1;
      break;
    case 1:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x272) = 1;
      break;
    case 2:
      if (local_4c != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x273) = 1;
      break;
    case 3:
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x274) = 1;
      break;
    case 4:
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x275) = 1;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
switchD_008f7cf2_caseD_5:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
LAB_008f838b:
      iVar3 = iVar3 + iVar2;
      break;
    case 10:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x276) = 1;
      break;
    case 0xb:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x277) = 1;
      break;
    case 0xc:
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x278) = 1;
      break;
    case 0xd:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x279) = 1;
      break;
    case 0xe:
      if (local_4c != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x27a) = 1;
      break;
    case 0xf:
      if (local_4c != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = FUN_008f0022();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x27b) = 1;
      break;
    case 0x14:
      if (local_4c != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(unaff_RDI + 0x198) = local_34;
      *(undefined1 *)(unaff_RDI + 0x27c) = 1;
      break;
    case 0x15:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x27d) = 1;
      break;
    case 0x1e:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x27e) = 1;
      break;
    case 0x1f:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      *(undefined8 *)(unaff_RDI + 0x1b0) = *(undefined8 *)(unaff_RDI + 0x1a8);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar7 = (ulonglong)local_34;
      uVar8 = *(longlong *)(unaff_RDI + 0x1b0) - *(longlong *)(unaff_RDI + 0x1a8);
      if (uVar8 < uVar7) {
        FUN_0088d550();
      }
      else if (uVar7 < uVar8) {
        *(ulonglong *)(unaff_RDI + 0x1b0) = *(longlong *)(unaff_RDI + 0x1a8) + uVar7;
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
      *(undefined1 *)(unaff_RDI + 0x27f) = 1;
      break;
    case 0x28:
      if (local_4c != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = FUN_008f1210();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x280) = 1;
      break;
    case 0x29:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      lVar6 = *(longlong *)(unaff_RDI + 0x240);
      uVar9 = extraout_XMM0_Da;
      for (lVar5 = *(longlong *)(unaff_RDI + 0x248); lVar5 != lVar6; lVar5 = lVar5 + -0x58) {
        uVar9 = (*(code *)**(undefined8 **)(lVar5 + -0x58))();
      }
      *(longlong *)(unaff_RDI + 0x248) = lVar6;
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar9,&local_34);
      FUN_008f85a4();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        lVar6 = 0;
        uVar8 = 0;
        do {
          iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x240) + lVar6) + 0x10))();
          iVar1 = iVar1 + iVar2;
          uVar8 = uVar8 + 1;
          lVar6 = lVar6 + 0x58;
        } while (uVar8 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x281) = 1;
      break;
    case 0x2a:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      lVar6 = *(longlong *)(unaff_RDI + 600);
      uVar9 = extraout_XMM0_Da;
      for (lVar5 = *(longlong *)(unaff_RDI + 0x260); lVar5 != lVar6; lVar5 = lVar5 + -0x180) {
        uVar9 = (*(code *)**(undefined8 **)(lVar5 + -0x180))();
      }
      *(longlong *)(unaff_RDI + 0x260) = lVar6;
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar9,&local_34);
      FUN_008d3370();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        lVar6 = 0;
        uVar8 = 0;
        do {
          iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 600) + lVar6) + 0x10))();
          iVar1 = iVar1 + iVar2;
          uVar8 = uVar8 + 1;
          lVar6 = lVar6 + 0x180;
        } while (uVar8 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x282) = 1;
      break;
    default:
      if (local_3a[0] != 1) goto switchD_008f7cf2_caseD_5;
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f838b;
      }
      lVar6 = *(longlong *)(unaff_RDI + 8);
      uVar9 = extraout_XMM0_Da;
      for (lVar5 = *(longlong *)(unaff_RDI + 0x10); lVar5 != lVar6; lVar5 = lVar5 + -0x390) {
        uVar9 = (*(code *)**(undefined8 **)(lVar5 + -0x390))();
      }
      *(longlong *)(unaff_RDI + 0x10) = lVar6;
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar9,&local_34);
      FUN_008f8528();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        lVar6 = 0;
        uVar8 = 0;
        do {
          iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 8) + lVar6) + 0x10))();
          iVar1 = iVar1 + iVar2;
          uVar8 = uVar8 + 1;
          lVar6 = lVar6 + 0x390;
        } while (uVar8 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x270) = 1;
    }
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


