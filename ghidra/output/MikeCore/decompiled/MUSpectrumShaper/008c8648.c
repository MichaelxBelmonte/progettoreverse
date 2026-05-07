// Function: FUN_008c8648
// Address: 008c8648
// Size: 1007 bytes
// Class: MUSpectrumShaper


int FUN_008c8648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  ulonglong uVar6;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar7 = unaff_RDI + 0x40;
  lVar8 = unaff_RDI + 0x38;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,local_48,param_3,param_4,lVar7,lVar8,uVar9,uVar10,uVar11);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar9 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 < 0x14) {
      if (local_36 == 1) {
        if (local_48[0] != 0xf) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_008c8935;
        }
        *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RDI + 8);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x10) - *(longlong *)(unaff_RDI + 8);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x10) = *(longlong *)(unaff_RDI + 8) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 100) = 1;
      }
      else if (local_36 == 2) {
        if (local_48[0] != 0xf) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_008c8935;
        }
        *(undefined8 *)(unaff_RDI + 0x28) = *(undefined8 *)(unaff_RDI + 0x20);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x28) - *(longlong *)(unaff_RDI + 0x20);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x28) = *(longlong *)(unaff_RDI + 0x20) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x65) = 1;
      }
      else {
        if (local_36 != 10) goto LAB_008c88c7;
        if (local_48[0] != 10) {
          iVar3 = (**(code **)(*unaff_RSI + 0x160))();
          goto LAB_008c8935;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x66) = 1;
      }
    }
    else if (local_36 < 0x1f) {
      if (local_36 == 0x14) {
        if (local_48[0] == 0xb) {
          iVar3 = (**(code **)(*unaff_RSI + 0x150))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x67) = 1;
          goto LAB_008c893b;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else if (local_36 == 0x1e) {
        if (local_48[0] == 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0x68) = 1;
          goto LAB_008c893b;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else {
LAB_008c88c7:
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
LAB_008c8935:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 0x1f) {
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c8935;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x69) = 1;
    }
    else {
      if (local_36 != 0x20) goto LAB_008c88c7;
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008c8935;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x6a) = 1;
    }
LAB_008c893b:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


