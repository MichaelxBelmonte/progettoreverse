// Function: FUN_008c76ac
// Address: 008c76ac
// Size: 1642 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x008c7cf5) */

int FUN_008c76ac(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  int local_4c;
  short local_46 [3];
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  do {
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))(local_46,&local_4c);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_46[0] < 0x1e) {
      if (local_46[0] < 0xb) {
        if (local_46[0] == 1) {
          if (local_4c == 0xb) {
            iVar3 = (**(code **)(*unaff_RSI + 0x150))();
            iVar3 = iVar3 + iVar2;
            *(undefined1 *)(unaff_RDI + 0xa4) = 1;
            goto LAB_008c7af4;
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
        else if (local_46[0] == 10) {
          if (local_4c == 0xf) {
            *(undefined8 *)(unaff_RDI + 0x28) = *(undefined8 *)(unaff_RDI + 0x20);
            iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
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
            *(undefined1 *)(unaff_RDI + 0xa5) = 1;
            goto LAB_008c7af4;
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
        else {
LAB_008c7a64:
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        }
LAB_008c7aee:
        iVar3 = iVar3 + iVar2;
      }
      else if (local_46[0] == 0xb) {
        if (local_4c != 0xf) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_008c7aee;
        }
        *(undefined8 *)(unaff_RDI + 0x40) = *(undefined8 *)(unaff_RDI + 0x38);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
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
        *(undefined1 *)(unaff_RDI + 0xa6) = 1;
      }
      else {
        if (local_46[0] != 0x14) goto LAB_008c7a64;
        if (local_4c != 0xf) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_008c7aee;
        }
        *(undefined8 *)(unaff_RDI + 0x58) = *(undefined8 *)(unaff_RDI + 0x50);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
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
        *(undefined1 *)(unaff_RDI + 0xa7) = 1;
      }
    }
    else if (local_46[0] < 0x29) {
      if (local_46[0] == 0x1e) {
        if (local_4c != 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_008c7aee;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xa8) = 1;
      }
      else {
        if (local_46[0] != 0x28) goto LAB_008c7a64;
        if (local_4c != 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_008c7aee;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xa9) = 1;
      }
    }
    else if (local_46[0] == 0x29) {
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c7aee;
      }
      *(undefined8 *)(unaff_RDI + 0x78) = *(undefined8 *)(unaff_RDI + 0x70);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar5 = (ulonglong)local_34;
      uVar4 = *(longlong *)(unaff_RDI + 0x78) - *(longlong *)(unaff_RDI + 0x70);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(ulonglong *)(unaff_RDI + 0x78) = *(longlong *)(unaff_RDI + 0x70) + uVar5;
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
      *(undefined1 *)(unaff_RDI + 0xaa) = 1;
    }
    else if (local_46[0] == 0x2a) {
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c7aee;
      }
      *(undefined8 *)(unaff_RDI + 0x90) = *(undefined8 *)(unaff_RDI + 0x88);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar5 = (ulonglong)local_34;
      uVar4 = *(longlong *)(unaff_RDI + 0x90) - *(longlong *)(unaff_RDI + 0x88);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(ulonglong *)(unaff_RDI + 0x90) = *(longlong *)(unaff_RDI + 0x88) + uVar5;
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
      *(undefined1 *)(unaff_RDI + 0xab) = 1;
    }
    else {
      if (local_46[0] != 10000) goto LAB_008c7a64;
      if (local_4c != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c7aee;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0xac) = 1;
    }
LAB_008c7af4:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


