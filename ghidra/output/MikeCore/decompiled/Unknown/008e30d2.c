// Function: FUN_008e30d2
// Address: 008e30d2
// Size: 636 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x008e3330) */

int FUN_008e30d2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 uVar8;
  int local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar8 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  do {
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))(&local_36,&local_3c,param_3,param_4,uVar8);
    iVar2 = iVar2 + iVar1;
    if (local_3c == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_3c != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(unaff_RDI + 8) = local_34;
      *(undefined1 *)(unaff_RDI + 0x780) = 1;
      goto LAB_008e3303;
    case 2:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(unaff_RDI + 0xc) = local_34;
        *(undefined1 *)(unaff_RDI + 0x781) = 1;
        goto LAB_008e3303;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 3:
      if (local_3c == 0xc) {
        iVar3 = FUN_008e20f6();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x782) = 1;
        goto LAB_008e3303;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 4:
      if (local_3c == 0xf) {
        lVar5 = *(longlong *)(unaff_RDI + 0x768);
        uVar7 = extraout_XMM0_Da;
        for (lVar4 = *(longlong *)(unaff_RDI + 0x770); lVar4 != lVar5; lVar4 = lVar4 + -0x260) {
          uVar7 = (*(code *)**(undefined8 **)(lVar4 + -0x260))();
        }
        *(longlong *)(unaff_RDI + 0x770) = lVar5;
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar7,&local_34);
        FUN_008e338c();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x768) + lVar5) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x260;
          } while (uVar6 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x783) = 1;
        goto LAB_008e3303;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008e3303:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


