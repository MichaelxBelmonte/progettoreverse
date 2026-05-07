// Function: FUN_0091b87c
// Address: 0091b87c
// Size: 898 bytes
// Class: GNData


/* WARNING: Removing unreachable block (ram,0x0091bbe0) */

int FUN_0091b87c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  ulonglong uVar5;
  longlong unaff_RDI;
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
    switch(local_36) {
    case 1:
      if (local_48[0] != 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0x80) = 1;
      goto LAB_0091bafc;
    case 2:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x81) = 1;
        goto LAB_0091bafc;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 3:
      if (local_48[0] == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x18) = *(undefined8 *)(unaff_RDI + 0x10);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_0091b93b::switchdataD_0091bc2c,&local_34);
        uVar5 = (ulonglong)local_34;
        uVar4 = *(longlong *)(unaff_RDI + 0x18) - *(longlong *)(unaff_RDI + 0x10);
        if (uVar4 < uVar5) {
          FUN_0088d550();
        }
        else if (uVar5 < uVar4) {
          *(ulonglong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x10) + uVar5;
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
        *(undefined1 *)(unaff_RDI + 0x82) = 1;
        goto LAB_0091bafc;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 4:
      if (local_48[0] == 0xf) {
        *(undefined8 *)(unaff_RDI + 0x30) = *(undefined8 *)(unaff_RDI + 0x28);
        iVar1 = (**(code **)(*unaff_RSI + 0xf8))(&switchD_0091b93b::switchdataD_0091bc2c,&local_34);
        uVar5 = (ulonglong)local_34;
        uVar4 = *(longlong *)(unaff_RDI + 0x30) - *(longlong *)(unaff_RDI + 0x28);
        if (uVar4 < uVar5) {
          FUN_0088d550();
        }
        else if (uVar5 < uVar4) {
          *(ulonglong *)(unaff_RDI + 0x30) = *(longlong *)(unaff_RDI + 0x28) + uVar5;
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
        *(undefined1 *)(unaff_RDI + 0x83) = 1;
        goto LAB_0091bafc;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 5:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*unaff_RSI + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x84) = 1;
        goto LAB_0091bafc;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 10:
      if (local_48[0] == 0xc) {
        iVar3 = FUN_0090ee9a();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x85) = 1;
        goto LAB_0091bafc;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_0091bafc:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


