// Function: FUN_008bd506
// Address: 008bd506
// Size: 1066 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x008bd912) */

int FUN_008bd506(void)

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
  int local_4c [2];
  short local_42;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  do {
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))(&local_42,local_4c);
    iVar2 = iVar2 + iVar1;
    if (local_4c[0] == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_42 < 3) {
      if (local_42 == 1) {
        if (local_4c[0] == 0xf) {
          lVar6 = *(longlong *)(unaff_RDI + 8);
          uVar8 = extraout_XMM0_Da;
          for (lVar5 = *(longlong *)(unaff_RDI + 0x10); lVar5 != lVar6; lVar5 = lVar5 + -0xa0) {
            uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0xa0))();
          }
          *(longlong *)(unaff_RDI + 0x10) = lVar6;
          iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar8,&local_34);
          FUN_009b46c0();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar6 = 0;
            uVar4 = 0;
            do {
              iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 8) + lVar6) + 0x10))();
              iVar1 = iVar1 + iVar2;
              uVar4 = uVar4 + 1;
              lVar6 = lVar6 + 0xa0;
            } while (uVar4 < local_34);
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(unaff_RDI + 0xb8) = 1;
          goto LAB_008bd820;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else if (local_42 == 2) {
        if (local_4c[0] == 0xc) {
          iVar3 = FUN_008feee4();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0xb9) = 1;
          goto LAB_008bd820;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else {
LAB_008bd7c2:
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
LAB_008bd81a:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_42 == 3) {
      if (local_4c[0] != 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008bd81a;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0xba) = 1;
    }
    else if (local_42 == 0xc45) {
      if (local_4c[0] != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008bd81a;
      }
      *(undefined8 *)(unaff_RDI + 0x90) = *(undefined8 *)(unaff_RDI + 0x88);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar7 = (ulonglong)local_34;
      uVar4 = *(longlong *)(unaff_RDI + 0x90) - *(longlong *)(unaff_RDI + 0x88);
      if (uVar4 < uVar7) {
        FUN_0088d550();
      }
      else if (uVar7 < uVar4) {
        *(ulonglong *)(unaff_RDI + 0x90) = *(longlong *)(unaff_RDI + 0x88) + uVar7;
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
      *(undefined1 *)(unaff_RDI + 0xbb) = 1;
    }
    else {
      if (local_42 != 0xc46) goto LAB_008bd7c2;
      if (local_4c[0] != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008bd81a;
      }
      *(undefined8 *)(unaff_RDI + 0xa8) = *(undefined8 *)(unaff_RDI + 0xa0);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar7 = (ulonglong)local_34;
      uVar4 = *(longlong *)(unaff_RDI + 0xa8) - *(longlong *)(unaff_RDI + 0xa0);
      if (uVar4 < uVar7) {
        FUN_0088d550();
      }
      else if (uVar7 < uVar4) {
        *(ulonglong *)(unaff_RDI + 0xa8) = *(longlong *)(unaff_RDI + 0xa0) + uVar7;
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
      *(undefined1 *)(unaff_RDI + 0xbc) = 1;
    }
LAB_008bd820:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


