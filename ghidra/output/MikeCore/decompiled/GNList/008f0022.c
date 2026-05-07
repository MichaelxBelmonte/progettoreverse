// Function: FUN_008f0022
// Address: 008f0022
// Size: 1315 bytes
// Class: GNList


int FUN_008f0022(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int local_44;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar7 = unaff_RDI + 0xb0;
  lVar8 = unaff_RDI + 0xa8;
  lVar9 = unaff_RDI + 0x90;
  lVar10 = unaff_RDI + 0x78;
  lVar11 = unaff_RDI + 0x60;
  lVar12 = unaff_RDI + 0x48;
  lVar13 = unaff_RDI + 0x40;
  lVar14 = unaff_RDI + 0x38;
  lVar15 = unaff_RDI + 0x20;
  lVar16 = unaff_RDI + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,&local_44,param_3,param_4,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,
                       lVar13,lVar14,lVar15,lVar16,uVar17,uVar18,uVar19);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar17 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_44 != 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0xfc) = 1;
      goto LAB_008f04a1;
    case 2:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xfd) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 3:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xfe) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 4:
      if (local_44 == 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xff) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 5:
      if (local_44 == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x50) = *(undefined8 *)(unaff_RDI + 0x48);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_008f0143::switchdataD_008f0570,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x50) - *(longlong *)(unaff_RDI + 0x48);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x50) = *(longlong *)(unaff_RDI + 0x48) + uVar6;
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
        *(undefined1 *)(unaff_RDI + 0x100) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 6:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x101) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 10:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x102) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xb:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x103) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xc:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x104) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x14:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x105) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x15:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x106) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x16:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x107) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1e:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x108) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008f04a1:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


