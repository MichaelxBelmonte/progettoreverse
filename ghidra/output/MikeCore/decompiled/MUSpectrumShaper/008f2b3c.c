// Function: FUN_008f2b3c
// Address: 008f2b3c
// Size: 1500 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x008f30f7) */

int FUN_008f2b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int local_40;
  undefined4 local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar5 = unaff_RDI + 0x38;
  lVar6 = unaff_RDI + 0x30;
  lVar7 = unaff_RDI + 0x28;
  lVar8 = unaff_RDI + 0x20;
  lVar9 = unaff_RDI + 0x18;
  lVar10 = unaff_RDI + 0x14;
  lVar11 = unaff_RDI + 0x10;
  lVar12 = unaff_RDI + 0xc;
  lVar13 = unaff_RDI + 8;
  do {
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (&local_36,&local_40,param_3,param_4,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10,
                       lVar11,lVar12,lVar13);
    iVar2 = iVar2 + iVar1;
    if (local_40 == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = (int)local_36;
    switch(iVar1 + -1) {
    case 0:
      if (local_40 != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x8a) = 1;
      break;
    case 1:
      if (local_40 != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x8b) = 1;
      break;
    case 2:
      if (local_40 != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x8c) = 1;
      break;
    case 3:
      if (local_40 != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x8d) = 1;
      break;
    case 4:
      if (local_40 != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x8e) = 1;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
switchD_008f2c60_caseD_5:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
LAB_008f30c4:
      iVar3 = iVar3 + iVar2;
      break;
    case 9:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x8f) = 1;
      break;
    case 10:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x90) = 1;
      break;
    case 0xb:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x91) = 1;
      break;
    case 0xc:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x92) = 1;
      break;
    case 0x13:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x93) = 1;
      break;
    case 0x14:
      if (local_40 != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(unaff_RDI + 0x48) = local_34;
      *(undefined1 *)(unaff_RDI + 0x94) = 1;
      break;
    case 0x15:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x95) = 1;
      break;
    case 0x16:
      if (local_40 != 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x96) = 1;
      break;
    case 0x1d:
      if (local_40 != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008f30c4;
      }
      *(undefined8 *)(unaff_RDI + 0x78) = *(undefined8 *)(unaff_RDI + 0x70);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1 + -1,&local_34);
      FUN_008f31bc();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar4 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x138))();
          iVar1 = iVar1 + iVar2;
          *(undefined4 *)(*(longlong *)(unaff_RDI + 0x70) + uVar4 * 4) = local_3c;
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x97) = 1;
      break;
    default:
      if (iVar1 == 0x28) {
        if (local_40 != 2) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_008f30c4;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x98) = 1;
      }
      else {
        if (iVar1 != 0x29) goto switchD_008f2c60_caseD_5;
        if (local_40 != 2) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_008f30c4;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x99) = 1;
      }
    }
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


