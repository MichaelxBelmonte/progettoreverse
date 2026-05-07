// Function: FUN_008ddc52
// Address: 008ddc52
// Size: 875 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x008ddf9c) */

int FUN_008ddc52(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  void *pvVar6;
  ulonglong uVar7;
  longlong *unaff_RSI;
  void *pvVar8;
  longlong unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined1 local_bc [4];
  undefined1 local_b8 [8];
  longlong local_b0;
  longlong local_a8;
  int local_74;
  int local_70;
  uint local_6c;
  ulonglong local_68 [4];
  uint local_44;
  ulonglong *local_40;
  short local_32;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  local_b0 = unaff_RDI + 0x30;
  local_a8 = unaff_RDI + 0x10;
  do {
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))(&local_32,&local_74);
    iVar2 = iVar2 + iVar1;
    if (local_74 == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_32) {
    case 1:
      if (local_74 != 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined4 *)(unaff_RDI + 8) = (undefined4)local_68[0];
      *(undefined1 *)(unaff_RDI + 0x40) = 1;
      goto LAB_008ddf6c;
    case 2:
      if (local_74 == 8) {
        iVar3 = (**(code **)(*unaff_RSI + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined4 *)(unaff_RDI + 0xc) = (undefined4)local_68[0];
        *(undefined1 *)(unaff_RDI + 0x41) = 1;
        goto LAB_008ddf6c;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 3:
      if (local_74 == 0xb) {
        iVar3 = (**(code **)(*unaff_RSI + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0x42) = 1;
        goto LAB_008ddf6c;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 4:
      if (local_74 == 0xd) {
        FUN_0088f668();
        *(undefined8 *)(unaff_RDI + 0x38) = 0;
        *(longlong *)(unaff_RDI + 0x28) = local_b0;
        *(undefined8 *)(unaff_RDI + 0x30) = 0;
        iVar1 = (**(code **)(*unaff_RSI + 0xe8))(&local_44,local_bc);
        iVar1 = iVar1 + iVar2;
        if (local_44 != 0) {
          uVar4 = 0;
          do {
            local_68[0] = 0;
            local_68[1] = 0;
            local_68[2] = 0;
            local_70 = iVar1;
            local_6c = uVar4;
            iVar2 = (**(code **)(*unaff_RSI + 0x150))();
            local_40 = local_68;
            lVar5 = FUN_0088fbf8(&local_40,&DAT_023bc25d,local_b8);
            *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(lVar5 + 0x38);
            iVar3 = (**(code **)(*unaff_RSI + 0xf8))(extraout_XMM0_Da,&local_40);
            iVar1 = local_70;
            pvVar8 = (void *)((ulonglong)local_40 & 0xffffffff);
            pvVar6 = (void *)(*(longlong *)(lVar5 + 0x40) - *(longlong *)(lVar5 + 0x38));
            if (pvVar6 < pvVar8) {
              FUN_0088d550();
            }
            else if (pvVar8 < pvVar6) {
              *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x38) + (longlong)pvVar8;
            }
            iVar3 = iVar2 + iVar1 + iVar3;
            if ((int)local_40 != 0) {
              uVar7 = 0;
              do {
                iVar1 = (**(code **)(*unaff_RSI + 0x128))();
                iVar3 = iVar3 + iVar1;
                uVar7 = uVar7 + 1;
              } while (uVar7 < ((ulonglong)local_40 & 0xffffffff));
            }
            iVar1 = (**(code **)(*unaff_RSI + 0x100))();
            if ((local_68[0] & 1) != 0) {
              operator_delete(pvVar6);
            }
            iVar1 = iVar1 + iVar3;
            uVar4 = local_6c + 1;
          } while (uVar4 < local_44);
        }
        iVar3 = (**(code **)(*unaff_RSI + 0xf0))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(unaff_RDI + 0x43) = 1;
        goto LAB_008ddf6c;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008ddf6c:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


