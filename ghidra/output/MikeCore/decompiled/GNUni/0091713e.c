// Function: FUN_0091713e
// Address: 0091713e
// Size: 1616 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x0091776d) */

int FUN_0091713e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar5;
  longlong lVar6;
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
  int local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar6 = unaff_RDI + 0x14;
  lVar7 = unaff_RDI + 0x13;
  lVar8 = unaff_RDI + 0x12;
  lVar9 = unaff_RDI + 0x11;
  lVar10 = unaff_RDI + 0x10;
  lVar11 = unaff_RDI + 0xf;
  lVar12 = unaff_RDI + 0xe;
  lVar13 = unaff_RDI + 0xd;
  lVar14 = unaff_RDI + 0xc;
  lVar15 = unaff_RDI + 0xb;
  lVar16 = unaff_RDI + 10;
  lVar17 = unaff_RDI + 9;
  lVar18 = unaff_RDI + 8;
  do {
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (&local_36,&local_3c,param_3,param_4,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,
                       lVar12,lVar13,lVar14,lVar15,lVar16,lVar17,lVar18);
    iVar2 = iVar2 + iVar1;
    if (local_3c == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_3c != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x48) = 1;
      goto LAB_00917740;
    case 2:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x49) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 3:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x4a) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 4:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x4b) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 5:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x4c) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 6:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x4d) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 7:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x4e) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 10:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x4f) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xb:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x50) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x14:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x51) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x15:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x52) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x16:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x53) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x17:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x54) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x18:
      if (local_3c == 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x55) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x19:
      if (local_3c == 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x56) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x1e:
      if (local_3c == 0xf) {
        uVar5 = FUN_0091c2ea();
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar5,&local_34);
        FUN_0088ed80();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar4 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x150))();
            iVar1 = iVar1 + iVar2;
            uVar4 = uVar4 + 1;
          } while (uVar4 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x57) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x28:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x58) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x29:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(unaff_RDI + 0x44) = local_34;
        *(undefined1 *)(unaff_RDI + 0x59) = 1;
        goto LAB_00917740;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00917740:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


