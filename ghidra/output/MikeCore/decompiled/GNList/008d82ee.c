// Function: FUN_008d82ee
// Address: 008d82ee
// Size: 815 bytes
// Class: GNList


int FUN_008d82ee(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  ulonglong uVar6;
  longlong unaff_RDI;
  uint uVar7;
  undefined4 extraout_XMM0_Da;
  undefined1 local_94 [4];
  longlong local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_58;
  longlong local_50;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  local_58 = unaff_RDI + 0xc0;
  local_90 = unaff_RDI + 200;
  local_50 = unaff_RDI + 0xa8;
  local_88 = unaff_RDI + 0x58;
  local_80 = unaff_RDI + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))(psVar4,local_48);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((local_78 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_48[0] != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = FUN_008d782a();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0xd8) = 1;
      goto LAB_008d8570;
    case 2:
      if (local_48[0] == 0xc) {
        iVar3 = FUN_008d782a();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd9) = 1;
        goto LAB_008d8570;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 3:
      if (local_48[0] == 0xf) {
        *(undefined8 *)(unaff_RDI + 0xb0) = *(undefined8 *)(unaff_RDI + 0xa8);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_008d83ae::switchdataD_008d864c,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(unaff_RDI + 0xb0) - *(longlong *)(unaff_RDI + 0xa8);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(unaff_RDI + 0xb0) = *(longlong *)(unaff_RDI + 0xa8) + uVar6;
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
        *(undefined1 *)(unaff_RDI + 0xda) = 1;
        goto LAB_008d8570;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 4:
      if (local_48[0] == 0xe) {
        FUN_008defa0();
        *(undefined8 *)(unaff_RDI + 0xd0) = 0;
        *(longlong *)(unaff_RDI + 0xc0) = local_90;
        *(undefined8 *)(unaff_RDI + 200) = 0;
        iVar1 = (**(code **)(*unaff_RSI + 0x108))(0,&local_34);
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*unaff_RSI + 0x138))();
            FUN_008df200(extraout_XMM0_Da,local_94);
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x110))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0xdb) = 1;
        goto LAB_008d8570;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008d8570:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


