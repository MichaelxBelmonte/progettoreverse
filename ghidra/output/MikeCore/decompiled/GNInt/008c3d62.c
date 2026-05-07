// Function: FUN_008c3d62
// Address: 008c3d62
// Size: 1120 bytes
// Class: GNInt


/* WARNING: Removing unreachable block (ram,0x008c41a4) */

int FUN_008c3d62(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  longlong unaff_RDI;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int local_4c;
  short local_46 [3];
  uint local_34;
  
  FUN_0088d1d0();
  uVar6 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar7 = unaff_RDI + 0x50;
  lVar8 = unaff_RDI + 0x38;
  lVar9 = unaff_RDI + 0x20;
  lVar10 = unaff_RDI + 8;
  do {
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (local_46,&local_4c,param_3,param_4,uVar6,lVar7,lVar8,lVar9,lVar10);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = local_46[0] + -1;
    switch(iVar1) {
    case 0:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RDI + 8);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar5 = (ulonglong)local_34;
      uVar4 = *(longlong *)(unaff_RDI + 0x10) - *(longlong *)(unaff_RDI + 8);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(ulonglong *)(unaff_RDI + 0x10) = *(longlong *)(unaff_RDI + 8) + uVar5;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar4 = 0;
        do {
          iVar2 = (**(code **)(*unaff_RSI + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x6c) = 1;
      goto LAB_008c400e;
    case 1:
      if (local_4c == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x28) = *(undefined8 *)(unaff_RDI + 0x20);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
        uVar5 = (ulonglong)local_34;
        uVar4 = *(longlong *)(unaff_RDI + 0x28) - *(longlong *)(unaff_RDI + 0x20);
        if (uVar4 < uVar5) {
          FUN_0088d550();
        }
        else if (uVar5 < uVar4) {
          *(ulonglong *)(unaff_RDI + 0x28) = *(longlong *)(unaff_RDI + 0x20) + uVar5;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar4 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar4 = uVar4 + 1;
          } while (uVar4 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x6d) = 1;
        goto LAB_008c400e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 2:
      if (local_4c == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x40) = *(undefined8 *)(unaff_RDI + 0x38);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
        uVar5 = (ulonglong)local_34;
        uVar4 = *(longlong *)(unaff_RDI + 0x40) - *(longlong *)(unaff_RDI + 0x38);
        if (uVar4 < uVar5) {
          FUN_0088d550();
        }
        else if (uVar5 < uVar4) {
          *(ulonglong *)(unaff_RDI + 0x40) = *(longlong *)(unaff_RDI + 0x38) + uVar5;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar4 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar4 = uVar4 + 1;
          } while (uVar4 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x6e) = 1;
        goto LAB_008c400e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 3:
      if (local_4c == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x58) = *(undefined8 *)(unaff_RDI + 0x50);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
        uVar5 = (ulonglong)local_34;
        uVar4 = *(longlong *)(unaff_RDI + 0x58) - *(longlong *)(unaff_RDI + 0x50);
        if (uVar4 < uVar5) {
          FUN_0088d550();
        }
        else if (uVar5 < uVar4) {
          *(ulonglong *)(unaff_RDI + 0x58) = *(longlong *)(unaff_RDI + 0x50) + uVar5;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar4 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar4 = uVar4 + 1;
          } while (uVar4 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x6f) = 1;
        goto LAB_008c400e;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      if (local_46[0] == 10000) {
        if (local_4c == 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x70) = 1;
          goto LAB_008c400e;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
    }
    iVar3 = iVar3 + iVar2;
LAB_008c400e:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


