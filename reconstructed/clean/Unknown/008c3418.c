// Function: FUN_008c3418
// Address: 008c3418
// Size: 877 bytes
// Class: Unknown

int FUN_008c3418(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *arg1;
  uint64_t uVar5;
  int64_t this_ptr;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_36,local_48);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_48[0] != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = FUN_008f7b82();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x500) = 1;
      goto LAB_008c367b;
    case 2:
      if (local_48[0] == 0xf) {
        *(void*)(this_ptr + 0x298) = *(void*)(this_ptr + 0x290);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_008c34d9::switchdataD_008c37b4,&local_34);
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
        *(void*)(this_ptr + 0x501) = 1;
        goto LAB_008c367b;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_48[0] == 0xc) {
        iVar3 = FUN_009101fc();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x502) = 1;
        goto LAB_008c367b;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 4:
      if (local_48[0] == 0xf) {
        *(void*)(this_ptr + 0x4e8) = *(void*)(this_ptr + 0x4e0);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_008c34d9::switchdataD_008c37b4,&local_34);
        uVar5 = (uint64_t)local_34;
        uVar4 = *(int64_t *)(this_ptr + 0x4e8) - *(int64_t *)(this_ptr + 0x4e0);
        if (uVar4 < uVar5) {
          FUN_0088d550();
        }
        else if (uVar5 < uVar4) {
          *(uint64_t *)(this_ptr + 0x4e8) = *(int64_t *)(this_ptr + 0x4e0) + uVar5;
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
        *(void*)(this_ptr + 0x503) = 1;
        goto LAB_008c367b;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 5:
      if (local_48[0] == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x504) = 1;
        goto LAB_008c367b;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008c367b:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

