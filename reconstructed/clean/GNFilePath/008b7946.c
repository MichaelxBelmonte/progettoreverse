// Function: FUN_008b7946
// Address: 008b7946
// Size: 658 bytes
// Class: GNFilePath

int FUN_008b7946(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *arg1;
  uint64_t uVar5;
  int64_t this_ptr;
  int local_44;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_36,&local_44);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = FUN_008f7b82();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x2b0) = 1;
      goto LAB_008b7b2b;
    case 2:
      if (local_44 == 0xf) {
        *(void*)(this_ptr + 0x298) = *(void*)(this_ptr + 0x290);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_008b79fa::switchdataD_008b7c00,&local_34);
        uVar5 = (uint64_t)local_34;
        uVar4 = *(int64_t *)(this_ptr + 0x298) - *(int64_t *)(this_ptr + 0x290);
        if (uVar4 < uVar5) {
          FUN_0088d550();
        }
        else if (uVar5 < uVar4) {
          *(uint64_t *)(this_ptr + 0x298) = *(int64_t *)(this_ptr + 0x290) + uVar5;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar4 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar4 = uVar4 + 1;
          } while (uVar4 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x2b1) = 1;
        goto LAB_008b7b2b;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x2b2) = 1;
        goto LAB_008b7b2b;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 4:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x2b3) = 1;
        goto LAB_008b7b2b;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008b7b2b:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

