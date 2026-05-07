// Function: FUN_008b91c8
// Address: 008b91c8
// Size: 649 bytes
// Class: MULSSComponentRenderer
// === MULSSComponentRenderer properties ===
//                   _currentComponent
//                   _components
//                   _lastRightAdjacentItem
//                   _sourceSamplePosition


int FUN_008b91c8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *arg1;
  uint64_t uVar5;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
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
    if (local_36 < 0xc44) {
      if (local_36 == 1) {
        if (local_44 == 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x150))();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x2c8) = 1;
          goto LAB_008b93a9;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_36 == 2) {
        if (local_44 == 10) {
          iVar3 = (**(code **)(*arg1 + 0x140))();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x2c9) = 1;
          goto LAB_008b93a9;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
LAB_008b935f:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_008b93a3:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 0xc44) {
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008b93a3;
      }
      iVar3 = FUN_008f7b82();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x2ca) = 1;
    }
    else {
      if (local_36 != 0xc45) goto LAB_008b935f;
      if (local_44 != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008b93a3;
      }
      *(void*)(this_ptr + 0x2b8) = *(void*)(this_ptr + 0x2b0);
      iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar5 = (uint64_t)local_34;
      uVar4 = *(int64_t *)(this_ptr + 0x2b8) - *(int64_t *)(this_ptr + 0x2b0);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(uint64_t *)(this_ptr + 0x2b8) = *(int64_t *)(this_ptr + 0x2b0) + uVar5;
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
      *(void*)(this_ptr + 0x2cb) = 1;
    }
LAB_008b93a9:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

