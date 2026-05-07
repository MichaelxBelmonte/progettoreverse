// Function: FUN_008f5344
// Address: 008f5344
// Size: 2209 bytes
// Class: GNString


int FUN_008f5344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  longlong lVar32;
  int local_44;
  longlong local_40;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar7 = unaff_RDI + 0x270;
  lVar8 = unaff_RDI + 600;
  lVar9 = unaff_RDI + 0x240;
  lVar10 = unaff_RDI + 0x228;
  lVar11 = unaff_RDI + 0x210;
  lVar12 = unaff_RDI + 0x1f8;
  lVar13 = unaff_RDI + 0x1e0;
  lVar14 = unaff_RDI + 0x150;
  lVar15 = unaff_RDI + 0xf0;
  lVar16 = unaff_RDI + 0x60;
  lVar17 = unaff_RDI + 0x59;
  lVar18 = unaff_RDI + 0x58;
  lVar19 = unaff_RDI + 0x54;
  lVar20 = unaff_RDI + 0x50;
  lVar21 = unaff_RDI + 0x48;
  lVar22 = unaff_RDI + 0x40;
  lVar23 = unaff_RDI + 0x38;
  lVar24 = unaff_RDI + 0x30;
  lVar32 = unaff_RDI + 0x18;
  lVar25 = unaff_RDI + 0x14;
  lVar26 = unaff_RDI + 0x10;
  lVar27 = unaff_RDI + 0xc;
  lVar28 = unaff_RDI + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,&local_44,param_3,param_4,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,
                       lVar13,lVar14,lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,lVar23,
                       lVar24,lVar25,lVar26,lVar27,lVar28,uVar29,uVar30,uVar31,lVar32);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar29 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_44 != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x370) = 1;
      goto LAB_008f5b3d;
    case 2:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x371) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 3:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x372) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 4:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x373) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 5:
      if (local_44 == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x20) = *(undefined8 *)(unaff_RDI + 0x18);
        local_40 = unaff_RDI;
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_008f54f1::switchdataD_008f5c10,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(local_40 + 0x20) - *(longlong *)(local_40 + 0x18);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(local_40 + 0x20) = *(longlong *)(local_40 + 0x18) + uVar6;
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
        *(undefined1 *)(local_40 + 0x374) = 1;
        unaff_RDI = local_40;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 10:
      if (local_44 == 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x375) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xb:
      if (local_44 == 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x376) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xc:
      if (local_44 == 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x377) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xd:
      if (local_44 == 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x378) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xe:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x379) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xf:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x37a) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x14:
      if (local_44 == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x37b) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x15:
      if (local_44 == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x37c) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x16:
      if (local_44 == 0xc) {
        iVar3 = FUN_008e84b4();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x37d) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x17:
      if (local_44 == 0xc) {
        iVar3 = FUN_008e9700();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x37e) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x18:
      if (local_44 == 0xc) {
        iVar3 = FUN_008e84b4();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x37f) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1e:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x380) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1f:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x381) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x20:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x382) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x21:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 899) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x22:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 900) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x23:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x385) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x24:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x386) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x28:
      if (local_44 == 0xc) {
        iVar3 = FUN_008f43ce();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x387) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x29:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x388) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008f5b3d:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


