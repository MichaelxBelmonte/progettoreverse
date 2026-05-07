// Function: FUN_008c14e6
// Address: 008c14e6
// Size: 2191 bytes
// Class: MUScaleBrowserItem


int FUN_008c14e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar6;
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
  ulonglong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  int local_4c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar21 = unaff_RDI + 0xf8;
  lVar7 = unaff_RDI + 0xf3;
  lVar8 = unaff_RDI + 0xf2;
  lVar9 = unaff_RDI + 0xf1;
  lVar10 = unaff_RDI + 0xf0;
  lVar11 = unaff_RDI + 0xa8;
  lVar12 = unaff_RDI + 0x90;
  lVar13 = unaff_RDI + 0x78;
  lVar14 = unaff_RDI + 0x40;
  lVar15 = unaff_RDI + 0x38;
  lVar16 = unaff_RDI + 0x30;
  lVar17 = unaff_RDI + 0x28;
  lVar18 = unaff_RDI + 0x20;
  lVar19 = unaff_RDI + 0x18;
  lVar20 = unaff_RDI + 0x10;
  lVar22 = unaff_RDI + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,&local_4c,param_3,param_4,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,
                       lVar13,lVar14,lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,uVar23,
                       uVar24,uVar25);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar23 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = (int)local_36;
    switch(iVar1 + -10) {
    case 0:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0xfd) = 1;
      break;
    case 1:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0xfe) = 1;
      break;
    case 2:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0xff) = 1;
      break;
    case 3:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x100) = 1;
      break;
    case 4:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x101) = 1;
      break;
    case 5:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x102) = 1;
      break;
    case 6:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x103) = 1;
      break;
    case 7:
    case 8:
    case 9:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
switchD_008c1679_caseD_7:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
LAB_008c1d21:
      iVar3 = iVar3 + iVar2;
      break;
    case 10:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      uVar6 = FUN_008cc280();
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar6,&local_34);
      FUN_0088ed80();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x150))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x104) = 1;
      break;
    case 0xb:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      uVar6 = FUN_008cc280();
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar6,&local_34);
      FUN_0088ed80();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x150))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x105) = 1;
      break;
    case 0x14:
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x106) = 1;
      break;
    case 0x15:
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x107) = 1;
      break;
    case 0x16:
      if (local_4c != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = FUN_008fea92();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x108) = 1;
      break;
    case 0x1e:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      *(undefined8 *)(unaff_RDI + 0xe0) = *(undefined8 *)(unaff_RDI + 0xd8);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1 + -10,&local_34);
      FUN_008897f0();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x138))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x109) = 1;
      break;
    case 0x28:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x10a) = 1;
      break;
    case 0x29:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x10b) = 1;
      break;
    case 0x2a:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x10c) = 1;
      break;
    case 0x2b:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x10d) = 1;
      break;
    case 0x2c:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x10e) = 1;
      break;
    case 0x2d:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x10f) = 1;
      break;
    case 0x2e:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x110) = 1;
      break;
    default:
      if (iVar1 == 10000) {
        if (local_4c != 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_008c1d21;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x111) = 1;
      }
      else {
        if (iVar1 != 1) goto switchD_008c1679_caseD_7;
        if (local_4c != 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_008c1d21;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xfc) = 1;
      }
    }
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


