// Function: FUN_008e0ede
// Address: 008e0ede
// Size: 715 bytes
// Class: Unknown


int FUN_008e0ede(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int local_38;
  short local_32;
  
  FUN_0088d1d0();
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar6 = unaff_RDI + 0x20;
  lVar7 = unaff_RDI + 8;
  while( true ) {
    psVar5 = &local_32;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (&local_32,&local_38,param_3,param_4,lVar6,lVar7,uVar8,uVar9,uVar10);
    if (local_38 == 0) break;
    switch(local_32) {
    case 1:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 200) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 2:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0xc9) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 3:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0xca) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    case 4:
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        *(undefined1 *)(unaff_RDI + 0xcb) = 1;
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      break;
    default:
      switch(local_32) {
      case 0x14:
        if (local_38 == 0xc) {
          iVar3 = FUN_008e04f8();
          *(undefined1 *)(unaff_RDI + 0xcc) = 1;
        }
        else {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
        break;
      case 0x15:
        if (local_38 == 0xc) {
          iVar3 = FUN_008e07be();
          *(undefined1 *)(unaff_RDI + 0xcd) = 1;
        }
        else {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
        break;
      case 0x16:
        if (local_38 == 0xc) {
          iVar3 = FUN_008e0966();
          *(undefined1 *)(unaff_RDI + 0xce) = 1;
        }
        else {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
        break;
      case 0x17:
        if (local_38 == 0xc) {
          iVar3 = FUN_008e0b54();
          *(undefined1 *)(unaff_RDI + 0xcf) = 1;
        }
        else {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
        break;
      default:
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
    }
    iVar4 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  }
  iVar3 = (**(code **)(*unaff_RSI + 0xd0))();
  if ((uVar8 & 1) != 0) {
    operator_delete(psVar5);
  }
  *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
  return iVar3 + iVar2 + iVar1;
}


