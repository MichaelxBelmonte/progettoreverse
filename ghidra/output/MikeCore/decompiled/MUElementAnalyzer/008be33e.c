// Function: FUN_008be33e
// Address: 008be33e
// Size: 863 bytes
// Class: MUElementAnalyzer


/* WARNING: Removing unreachable block (ram,0x008be67e) */

int FUN_008be33e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  int local_40 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  do {
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))(&local_36,local_40);
    iVar2 = iVar2 + iVar1;
    if (local_40[0] == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 < 0xc45) {
      if (local_36 == 1) {
        if (local_40[0] == 0xf) {
          lVar5 = *(longlong *)(unaff_RDI + 8);
          uVar7 = extraout_XMM0_Da;
          for (lVar4 = *(longlong *)(unaff_RDI + 0x10); lVar4 != lVar5; lVar4 = lVar4 + -0x288) {
            uVar7 = (*(code *)**(undefined8 **)(lVar4 + -0x288))();
          }
          *(longlong *)(unaff_RDI + 0x10) = lVar5;
          iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar7,&local_34);
          FUN_0088dad4();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar5 = 0;
            uVar6 = 0;
            do {
              iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 8) + lVar5) + 0x10))();
              iVar1 = iVar1 + iVar2;
              uVar6 = uVar6 + 1;
              lVar5 = lVar5 + 0x288;
            } while (uVar6 < local_34);
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(unaff_RDI + 0x44) = 1;
          goto LAB_008be64f;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else if (local_36 == 2) {
        if (local_40[0] == 0xf) {
          lVar5 = *(longlong *)(unaff_RDI + 0x20);
          uVar7 = extraout_XMM0_Da;
          for (lVar4 = *(longlong *)(unaff_RDI + 0x28); lVar4 != lVar5; lVar4 = lVar4 + -0x760) {
            uVar7 = (*(code *)**(undefined8 **)(lVar4 + -0x760))();
          }
          *(longlong *)(unaff_RDI + 0x28) = lVar5;
          iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar7,&local_34);
          FUN_00908920();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar5 = 0;
            uVar6 = 0;
            do {
              iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x20) + lVar5) + 0x10))()
              ;
              iVar1 = iVar1 + iVar2;
              uVar6 = uVar6 + 1;
              lVar5 = lVar5 + 0x760;
            } while (uVar6 < local_34);
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(unaff_RDI + 0x45) = 1;
          goto LAB_008be64f;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
      else {
LAB_008be5f1:
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
LAB_008be649:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 0xc45) {
      if (local_40[0] != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008be649;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x46) = 1;
    }
    else if (local_36 == 5000) {
      if (local_40[0] != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008be649;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x47) = 1;
    }
    else {
      if (local_36 != 10000) goto LAB_008be5f1;
      if (local_40[0] != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008be649;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x48) = 1;
    }
LAB_008be64f:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


