// Function: FUN_0088b06e
// Address: 0088b06e
// Size: 906 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x0088b3da) */

int FUN_0088b06e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  do {
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))(&local_36,local_48);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 < 10) {
      if (local_36 == 1) {
        if (local_48[0] == 0xc) {
          iVar3 = FUN_0088984a();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x160) = 1;
          goto LAB_0088b2e8;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else if (local_36 == 2) {
        if (local_48[0] == 0xc) {
          iVar3 = FUN_008d5a5a();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x161) = 1;
          goto LAB_0088b2e8;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else {
LAB_0088b28a:
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
LAB_0088b2e2:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 10) {
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_0088b2e2;
      }
      *(undefined8 *)(unaff_RDI + 0x100) = *(undefined8 *)(unaff_RDI + 0xf8);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar5 = (ulonglong)local_34;
      uVar4 = *(longlong *)(unaff_RDI + 0x100) - *(longlong *)(unaff_RDI + 0xf8);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(ulonglong *)(unaff_RDI + 0x100) = *(longlong *)(unaff_RDI + 0xf8) + uVar5;
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
      *(undefined1 *)(unaff_RDI + 0x162) = 1;
    }
    else if (local_36 == 0xb) {
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_0088b2e2;
      }
      *(undefined8 *)(unaff_RDI + 0x118) = *(undefined8 *)(unaff_RDI + 0x110);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar5 = (ulonglong)local_34;
      uVar4 = *(longlong *)(unaff_RDI + 0x118) - *(longlong *)(unaff_RDI + 0x110);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(ulonglong *)(unaff_RDI + 0x118) = *(longlong *)(unaff_RDI + 0x110) + uVar5;
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
      *(undefined1 *)(unaff_RDI + 0x163) = 1;
    }
    else {
      if (local_36 != 0x14) goto LAB_0088b28a;
      if (local_48[0] != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_0088b2e2;
      }
      iVar3 = FUN_0090ee9a();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x164) = 1;
    }
LAB_0088b2e8:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


