// Function: FUN_00a71af6
// Address: 00a71af6
// Size: 687 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00a71d87) */

int FUN_00a71af6(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  int local_4c;
  uint local_48 [2];
  short local_3e;
  uint local_3c;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  do {
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))(&local_3e,&local_4c);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_3e == 3) {
      if (local_4c != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00a71d54;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x3e) = 1;
    }
    else {
      if (local_3e == 2) {
        if (local_4c == 0xe) {
          FUN_009b4ba0();
          *(undefined8 *)(unaff_RDI + 0x30) = 0;
          *(longlong *)(unaff_RDI + 0x20) = unaff_RDI + 0x28;
          *(undefined8 *)(unaff_RDI + 0x28) = 0;
          iVar1 = (**(code **)(*unaff_RSI + 0x108))(0,&local_3c);
          iVar1 = iVar1 + iVar2;
          if (local_3c != 0) {
            uVar4 = 0;
            do {
              iVar2 = (**(code **)(*unaff_RSI + 0x140))();
              FUN_009b4be0(extraout_XMM0_Da_00,local_48);
              iVar1 = iVar1 + iVar2;
              uVar4 = uVar4 + 1;
            } while (uVar4 < local_3c);
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x110))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(unaff_RDI + 0x3d) = 1;
          goto LAB_00a71d5a;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else if (local_3e == 1) {
        if (local_4c == 0xf) {
          *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RDI + 8);
          iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,local_48);
          FUN_0090f0c8();
          iVar1 = iVar1 + iVar2;
          if (local_48[0] != 0) {
            uVar5 = 0;
            do {
              iVar2 = (**(code **)(*unaff_RSI + 0x140))();
              iVar1 = iVar1 + iVar2;
              uVar5 = uVar5 + 1;
            } while (uVar5 < local_48[0]);
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(unaff_RDI + 0x3c) = 1;
          goto LAB_00a71d5a;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
LAB_00a71d54:
      iVar3 = iVar3 + iVar2;
    }
LAB_00a71d5a:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


