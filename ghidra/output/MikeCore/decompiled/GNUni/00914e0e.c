// Function: FUN_00914e0e
// Address: 00914e0e
// Size: 765 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x009150ed) */

int FUN_00914e0e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  ulonglong uVar7;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
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
    if (local_36 < 0xc) {
      if (local_36 == 1) {
        if (local_48[0] == 0xf) {
          *(undefined8 *)(unaff_RDI + 0x10) = *(undefined8 *)(unaff_RDI + 8);
          iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
          uVar7 = (ulonglong)local_34;
          uVar4 = *(longlong *)(unaff_RDI + 0x10) - *(longlong *)(unaff_RDI + 8);
          if (uVar4 < uVar7) {
            FUN_0088d550();
          }
          else if (uVar7 < uVar4) {
            *(ulonglong *)(unaff_RDI + 0x10) = *(longlong *)(unaff_RDI + 8) + uVar7;
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
          *(undefined1 *)(unaff_RDI + 0x40) = 1;
          goto LAB_00915068;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else if (local_36 == 0xb) {
        if (local_48[0] == 8) {
          iVar3 = (**(code **)(*unaff_RSI + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(uint *)(unaff_RDI + 0x20) = local_34;
          *(undefined1 *)(unaff_RDI + 0x41) = 1;
          goto LAB_00915068;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else {
LAB_00914f9b:
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
LAB_00915062:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 0xc) {
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00915062;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(unaff_RDI + 0x24) = local_34;
      *(undefined1 *)(unaff_RDI + 0x42) = 1;
    }
    else {
      if (local_36 != 0x15) goto LAB_00914f9b;
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_00915062;
      }
      lVar6 = *(longlong *)(unaff_RDI + 0x28);
      uVar8 = extraout_XMM0_Da;
      for (lVar5 = *(longlong *)(unaff_RDI + 0x30); lVar5 != lVar6; lVar5 = lVar5 + -0x448) {
        uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x448))();
      }
      *(longlong *)(unaff_RDI + 0x30) = lVar6;
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar8,&local_34);
      FUN_0091513e();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        lVar6 = 0;
        uVar4 = 0;
        do {
          iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x28) + lVar6) + 0x10))();
          iVar1 = iVar1 + iVar2;
          uVar4 = uVar4 + 1;
          lVar6 = lVar6 + 0x448;
        } while (uVar4 < local_34);
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(unaff_RDI + 0x43) = 1;
    }
LAB_00915068:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


