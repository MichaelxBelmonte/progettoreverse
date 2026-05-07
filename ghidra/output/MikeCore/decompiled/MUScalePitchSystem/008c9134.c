// Function: FUN_008c9134
// Address: 008c9134
// Size: 833 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x008c9457) */

int FUN_008c9134(void)

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
    if (local_36 < 0xb) {
      if (local_36 == 1) {
        if (local_48[0] == 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x5c) = 1;
          goto LAB_008c9379;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else if (local_36 == 10) {
        if (local_48[0] == 0xf) {
          *(undefined8 *)(unaff_RDI + 0x18) = *(undefined8 *)(unaff_RDI + 0x10);
          iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
          uVar5 = (ulonglong)local_34;
          uVar4 = *(longlong *)(unaff_RDI + 0x18) - *(longlong *)(unaff_RDI + 0x10);
          if (uVar4 < uVar5) {
            FUN_0088d550();
          }
          else if (uVar5 < uVar4) {
            *(ulonglong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x10) + uVar5;
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
          *(undefined1 *)(unaff_RDI + 0x5d) = 1;
          goto LAB_008c9379;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else {
LAB_008c9321:
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
LAB_008c9373:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 0xb) {
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c9373;
      }
      *(undefined8 *)(unaff_RDI + 0x30) = *(undefined8 *)(unaff_RDI + 0x28);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar5 = (ulonglong)local_34;
      uVar4 = *(longlong *)(unaff_RDI + 0x30) - *(longlong *)(unaff_RDI + 0x28);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(ulonglong *)(unaff_RDI + 0x30) = *(longlong *)(unaff_RDI + 0x28) + uVar5;
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
      *(undefined1 *)(unaff_RDI + 0x5e) = 1;
    }
    else if (local_36 == 0x14) {
      if (local_48[0] != 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c9373;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x5f) = 1;
    }
    else {
      if (local_36 != 10000) goto LAB_008c9321;
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c9373;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x60) = 1;
    }
LAB_008c9379:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


