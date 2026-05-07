// Function: FUN_008eb9f8
// Address: 008eb9f8
// Size: 1670 bytes
// Class: MUSpectrumShaper


int FUN_008eb9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  int local_4c [2];
  short local_42;
  uint local_34;
  
  FUN_0088d1d0();
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar7 = unaff_RDI + 0x71;
  lVar8 = unaff_RDI + 0x70;
  lVar9 = unaff_RDI + 0x6c;
  lVar10 = unaff_RDI + 100;
  lVar11 = unaff_RDI + 0x5c;
  lVar12 = unaff_RDI + 0x58;
  lVar13 = unaff_RDI + 0x40;
  lVar14 = unaff_RDI + 0x28;
  lVar15 = unaff_RDI + 0x10;
  lVar16 = unaff_RDI + 8;
  do {
    psVar4 = &local_42;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,local_4c,param_3,param_4,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,lVar13
                       ,lVar14,lVar15,lVar16,uVar17,uVar18,uVar19);
    iVar2 = iVar2 + iVar1;
    if (local_4c[0] == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar17 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_42) {
    case 1:
      if (local_4c[0] != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x75) = 1;
      goto LAB_008ebf2e;
    case 2:
      if (local_4c[0] == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x18) = *(undefined8 *)(unaff_RDI + 0x10);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_008ebb07::switchdataD_008ec0b8,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x18) - *(longlong *)(unaff_RDI + 0x10);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x10) + uVar6;
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
        *(undefined1 *)(unaff_RDI + 0x76) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x14:
      if (local_4c[0] == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x30) = *(undefined8 *)(unaff_RDI + 0x28);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_008ebb07::switchdataD_008ec0b8,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x30) - *(longlong *)(unaff_RDI + 0x28);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x30) = *(longlong *)(unaff_RDI + 0x28) + uVar6;
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
        *(undefined1 *)(unaff_RDI + 0x77) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x15:
      if (local_4c[0] == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x48) = *(undefined8 *)(unaff_RDI + 0x40);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_008ebb07::switchdataD_008ec0b8,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x48) - *(longlong *)(unaff_RDI + 0x40);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x48) = *(longlong *)(unaff_RDI + 0x40) + uVar6;
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
        *(undefined1 *)(unaff_RDI + 0x78) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x16:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x79) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x17:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x7a) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x18:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(unaff_RDI + 0x60) = local_34;
        *(undefined1 *)(unaff_RDI + 0x7b) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x19:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x7c) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1a:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(unaff_RDI + 0x68) = local_34;
        *(undefined1 *)(unaff_RDI + 0x7d) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1b:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x7e) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1e:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x7f) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1f:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x80) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x20:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x81) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x21:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x82) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x22:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x83) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008ebf2e:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


