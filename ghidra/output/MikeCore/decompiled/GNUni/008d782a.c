// Function: FUN_008d782a
// Address: 008d782a
// Size: 902 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x008d7b91) */

int FUN_008d782a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  longlong unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar6 = unaff_RDI + 0x30;
  lVar7 = unaff_RDI + 0x18;
  do {
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))(&local_36,local_48,param_3,param_4,lVar6,lVar7);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = local_36 + -0xb;
    switch(iVar1) {
    case 0:
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008d7aa7;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(unaff_RDI + 0xc) = local_34;
      *(undefined1 *)(unaff_RDI + 0x49) = 1;
      break;
    case 1:
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008d7aa7;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(unaff_RDI + 0x10) = local_34;
      *(undefined1 *)(unaff_RDI + 0x4a) = 1;
      break;
    case 2:
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008d7aa7;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(unaff_RDI + 0x14) = local_34;
      *(undefined1 *)(unaff_RDI + 0x4b) = 1;
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
switchD_008d78c2_caseD_3:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
LAB_008d7aa7:
      iVar3 = iVar3 + iVar2;
      break;
    case 10:
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008d7aa7;
      }
      *(undefined8 *)(unaff_RDI + 0x20) = *(undefined8 *)(unaff_RDI + 0x18);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar5 = (ulonglong)local_34;
      uVar4 = *(longlong *)(unaff_RDI + 0x20) - *(longlong *)(unaff_RDI + 0x18);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(ulonglong *)(unaff_RDI + 0x20) = *(longlong *)(unaff_RDI + 0x18) + uVar5;
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
      *(undefined1 *)(unaff_RDI + 0x4c) = 1;
      break;
    case 0xb:
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008d7aa7;
      }
      *(undefined8 *)(unaff_RDI + 0x38) = *(undefined8 *)(unaff_RDI + 0x30);
      iVar1 = (**(code **)(*unaff_RSI + 0xf8))(iVar1,&local_34);
      uVar5 = (ulonglong)local_34;
      uVar4 = *(longlong *)(unaff_RDI + 0x38) - *(longlong *)(unaff_RDI + 0x30);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(ulonglong *)(unaff_RDI + 0x38) = *(longlong *)(unaff_RDI + 0x30) + uVar5;
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
      *(undefined1 *)(unaff_RDI + 0x4d) = 1;
      break;
    default:
      if (local_36 != 1) goto switchD_008d78c2_caseD_3;
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        goto LAB_008d7aa7;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(unaff_RDI + 8) = local_34;
      *(undefined1 *)(unaff_RDI + 0x48) = 1;
    }
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


