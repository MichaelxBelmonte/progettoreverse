// Function: FUN_0090ee9a
// Address: 0090ee9a
// Size: 518 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0090f082) */

int FUN_0090ee9a(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  int local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  do {
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))(&local_36,&local_3c);
    iVar2 = iVar2 + iVar1;
    if (local_3c == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 == 0xb) {
      if (local_3c != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_0090f04d;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x32) = 1;
    }
    else {
      if (local_36 == 10) {
        if (local_3c == 10) {
          iVar3 = (**(code **)(*unaff_RSI + 0x140))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x31) = 1;
          goto LAB_0090f053;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else if (local_36 == 1) {
        if (local_3c == 0xf) {
          *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RDI + 8);
          iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
          FUN_0090f0c8();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            uVar4 = 0;
            do {
              iVar2 = (**(code **)(*unaff_RSI + 0x140))();
              iVar1 = iVar1 + iVar2;
              uVar4 = uVar4 + 1;
            } while (uVar4 < local_34);
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(unaff_RDI + 0x30) = 1;
          goto LAB_0090f053;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
LAB_0090f04d:
      iVar3 = iVar3 + iVar2;
    }
LAB_0090f053:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


