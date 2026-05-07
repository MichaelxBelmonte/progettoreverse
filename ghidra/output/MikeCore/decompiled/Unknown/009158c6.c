// Function: FUN_009158c6
// Address: 009158c6
// Size: 975 bytes
// Class: Unknown


int FUN_009158c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int local_3c;
  short local_36;
  undefined4 local_34;
  
  FUN_0088d1d0();
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar8 = unaff_RDI + 0x408;
  lVar9 = unaff_RDI + 0x402;
  lVar10 = unaff_RDI + 0x401;
  lVar11 = unaff_RDI + 0x400;
  lVar6 = unaff_RDI + 0x28;
  lVar7 = unaff_RDI + 0x10;
  do {
    psVar5 = &local_36;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar5,&local_3c,param_3,param_4,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,uVar12
                       ,uVar13,uVar14);
    if (local_3c == 0) {
      iVar3 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar12 & 1) != 0) {
        operator_delete(psVar5);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar3 + iVar2 + iVar1;
    }
    iVar3 = (int)local_36;
    switch(iVar3) {
    case 1:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        *(undefined4 *)(unaff_RDI + 8) = local_34;
        *(undefined1 *)(unaff_RDI + 0x588) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 2:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0x589) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 3:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0x58a) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
switchD_009159ad_caseD_4:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 10:
      if (local_3c == 0xc) {
        iVar3 = FUN_00908a3a();
        *(undefined1 *)(unaff_RDI + 0x58b) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0xb:
      if (local_3c == 0xc) {
        iVar3 = FUN_00904b02();
        *(undefined1 *)(unaff_RDI + 0x58c) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0xc:
      if (local_3c == 0xc) {
        iVar3 = FUN_00904b02();
        *(undefined1 *)(unaff_RDI + 0x58d) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    default:
      switch(iVar3) {
      case 0x1e:
        if (local_3c == 2) {
          iVar3 = (**(code **)(*unaff_RSI + 0x118))();
          *(undefined1 *)(unaff_RDI + 0x58f) = 1;
        }
        else {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
        break;
      case 0x1f:
        if (local_3c == 2) {
          iVar3 = (**(code **)(*unaff_RSI + 0x118))();
          *(undefined1 *)(unaff_RDI + 0x590) = 1;
        }
        else {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
        break;
      case 0x20:
        if (local_3c == 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x138))();
          *(undefined4 *)(unaff_RDI + 0x404) = local_34;
          *(undefined1 *)(unaff_RDI + 0x591) = 1;
        }
        else {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
        break;
      case 0x21:
        if (local_3c == 0xc) {
          iVar3 = FUN_00913b78();
          *(undefined1 *)(unaff_RDI + 0x592) = 1;
        }
        else {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
        break;
      default:
        if (iVar3 != 0x14) goto switchD_009159ad_caseD_4;
        if (local_3c == 2) {
          iVar3 = (**(code **)(*unaff_RSI + 0x118))();
          *(undefined1 *)(unaff_RDI + 0x58e) = 1;
        }
        else {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
      }
    }
    iVar4 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  } while( true );
}


