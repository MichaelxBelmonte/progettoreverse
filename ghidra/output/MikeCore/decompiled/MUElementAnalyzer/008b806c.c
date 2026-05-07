// Function: FUN_008b806c
// Address: 008b806c
// Size: 551 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x008b8275) */

int FUN_008b806c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  int local_44;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  do {
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))(&local_36,&local_44);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 == 10000) {
      if (local_44 != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008b81e7;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x2a) = 1;
    }
    else {
      if (local_36 == 2) {
        if (local_44 == 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x29) = 1;
          goto LAB_008b81ed;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else if (local_36 == 1) {
        if (local_44 == 0xf) {
          *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RDI + 8);
          iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
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
          *(undefined1 *)(unaff_RDI + 0x28) = 1;
          goto LAB_008b81ed;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
LAB_008b81e7:
      iVar3 = iVar3 + iVar2;
    }
LAB_008b81ed:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


