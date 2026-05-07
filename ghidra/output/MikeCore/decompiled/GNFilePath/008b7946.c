// Function: FUN_008b7946
// Address: 008b7946
// Size: 658 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x008b7bba) */

int FUN_008b7946(void)

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
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = FUN_008f7b82();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x2b0) = 1;
      goto LAB_008b7b2b;
    case 2:
      if (local_44 == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x298) = *(undefined8 *)(unaff_RDI + 0x290);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_008b79fa::switchdataD_008b7c00,&local_34);
        uVar5 = (ulonglong)local_34;
        uVar4 = *(longlong *)(unaff_RDI + 0x298) - *(longlong *)(unaff_RDI + 0x290);
        if (uVar4 < uVar5) {
          FUN_0088d550();
        }
        else if (uVar5 < uVar4) {
          *(ulonglong *)(unaff_RDI + 0x298) = *(longlong *)(unaff_RDI + 0x290) + uVar5;
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
        *(undefined1 *)(unaff_RDI + 0x2b1) = 1;
        goto LAB_008b7b2b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 3:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x2b2) = 1;
        goto LAB_008b7b2b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 4:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x2b3) = 1;
        goto LAB_008b7b2b;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008b7b2b:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


