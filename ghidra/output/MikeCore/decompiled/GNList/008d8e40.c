// Function: FUN_008d8e40
// Address: 008d8e40
// Size: 613 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x008d9087) */

int FUN_008d8e40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  longlong unaff_RDI;
  int local_44;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  do {
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))(&local_36,&local_44);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_44 != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(unaff_RDI + 8) = local_34;
      *(undefined1 *)(unaff_RDI + 0x58) = 1;
      goto LAB_008d9006;
    case 2:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x59) = 1;
        goto LAB_008d9006;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 3:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x5a) = 1;
        goto LAB_008d9006;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 4:
      if (local_44 == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x48) = *(undefined8 *)(unaff_RDI + 0x40);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_008d8ee0::switchdataD_008d90d0,&local_34);
        uVar5 = (ulonglong)local_34;
        uVar4 = *(longlong *)(unaff_RDI + 0x48) - *(longlong *)(unaff_RDI + 0x40);
        if (uVar4 < uVar5) {
          FUN_0088d550();
        }
        else if (uVar5 < uVar4) {
          *(ulonglong *)(unaff_RDI + 0x48) = *(longlong *)(unaff_RDI + 0x40) + uVar5;
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
        *(undefined1 *)(unaff_RDI + 0x5b) = 1;
        goto LAB_008d9006;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008d9006:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


