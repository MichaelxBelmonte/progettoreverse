// Function: FUN_008bf9d4
// Address: 008bf9d4
// Size: 775 bytes
// Class: GNFilePath

int FUN_008bf9d4(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *arg1;
  uint64_t uVar5;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint64_t uVar6;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar6 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_36,local_48,param_3,param_4,uVar6);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 < 3) {
      if (local_36 == 1) {
        if (local_48[0] == 0xc) {
          iVar3 = FUN_008f7b82();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x2c8) = 1;
          goto LAB_008bfc2f;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_36 == 2) {
        if (local_48[0] == 0xf) {
          *(void*)(this_ptr + 0x298) = *(void*)(this_ptr + 0x290);
          iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
          FUN_008897f0();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            uVar4 = 0;
            do {
              iVar2 = (**(code **)(*arg1 + 0x138))();
              iVar1 = iVar1 + iVar2;
              uVar4 = uVar4 + 1;
            } while (uVar4 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(void*)(this_ptr + 0x2c9) = 1;
          goto LAB_008bfc2f;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
LAB_008bfbe0:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_008bfc29:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 3) {
      if (local_48[0] != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008bfc29;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x2ca) = 1;
    }
    else {
      if (local_36 != 0xc45) goto LAB_008bfbe0;
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008bfc29;
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
LAB_008bfc2f:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

