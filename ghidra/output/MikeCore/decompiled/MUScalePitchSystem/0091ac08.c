// Function: FUN_0091ac08
// Address: 0091ac08
// Size: 1027 bytes
// Class: MUScalePitchSystem


int FUN_0091ac08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  ulonglong uVar6;
  longlong unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar7 = unaff_RDI + 0x14;
  lVar8 = unaff_RDI + 0x10;
  lVar9 = unaff_RDI + 0xc;
  lVar10 = unaff_RDI + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,local_48,param_3,param_4,lVar7,lVar8,lVar9,lVar10,uVar11,uVar12,uVar13
                      );
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar11 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_48[0] != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x58) = 1;
      goto LAB_0091af17;
    case 2:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x59) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 3:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x5a) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 4:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x5b) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 5:
      if (local_48[0] == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x20) = *(undefined8 *)(unaff_RDI + 0x18);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_0091acdd::switchdataD_0091b03c,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x20) - *(longlong *)(unaff_RDI + 0x18);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x20) = *(longlong *)(unaff_RDI + 0x18) + uVar6;
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
        *(undefined1 *)(unaff_RDI + 0x5c) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 6:
      if (local_48[0] == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x38) = *(undefined8 *)(unaff_RDI + 0x30);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_0091acdd::switchdataD_0091b03c,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0x38) - *(longlong *)(unaff_RDI + 0x30);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0x38) = *(longlong *)(unaff_RDI + 0x30) + uVar6;
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
        *(undefined1 *)(unaff_RDI + 0x5d) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 10:
      if (local_48[0] == 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x5e) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0xb:
      if (local_48[0] == 10) {
        iVar3 = (**(code **)(*unaff_RSI + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x5f) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_0091af17:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


