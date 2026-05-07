// Function: FUN_008feee4
// Address: 008feee4
// Size: 919 bytes
// Class: GNUni


int FUN_008feee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined4 local_38;
  short local_32;
  
  FUN_0088d1d0();
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar11 = unaff_RDI + 0x48;
  lVar6 = unaff_RDI + 0xc;
  lVar7 = unaff_RDI + 0xb;
  lVar8 = unaff_RDI + 10;
  lVar9 = unaff_RDI + 9;
  lVar10 = unaff_RDI + 8;
  do {
    psVar5 = &local_32;
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
    switch((int)local_32) {
    case 1:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x50) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 2:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x51) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 3:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x52) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 4:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x53) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 5:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x54) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 6:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x55) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 7:
    case 8:
    case 9:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
switchD_008fefc3_caseD_7:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 10:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        *(undefined4 *)(unaff_RDI + 0x10) = local_38;
        *(undefined1 *)(unaff_RDI + 0x56) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0x14:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        *(undefined1 *)(unaff_RDI + 0x57) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0x15:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0x58) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 0x16:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0x59) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    default:
      if (local_32 != 0x1e) goto switchD_008fefc3_caseD_7;
      if (local_3c == 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        *(undefined1 *)(unaff_RDI + 0x5a) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
    }
    iVar4 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  } while( true );
}


