// Function: FUN_0088b06e
// Address: 0088b06e
// Size: 906 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int FUN_0088b06e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *arg1;
  uint64_t uVar5;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
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
    if (local_36 < 10) {
      if (local_36 == 1) {
        if (local_48[0] == 0xc) {
          iVar3 = FUN_0088984a();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x160) = 1;
          goto LAB_0088b2e8;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_36 == 2) {
        if (local_48[0] == 0xc) {
          iVar3 = FUN_008d5a5a();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x161) = 1;
          goto LAB_0088b2e8;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
LAB_0088b28a:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_0088b2e2:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 10) {
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0088b2e2;
      }
      *(void*)(this_ptr + 0x100) = *(void*)(this_ptr + 0xf8);
      iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar5 = (uint64_t)local_34;
      uVar4 = *(int64_t *)(this_ptr + 0x100) - *(int64_t *)(this_ptr + 0xf8);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(uint64_t *)(this_ptr + 0x100) = *(int64_t *)(this_ptr + 0xf8) + uVar5;
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
      *(void*)(this_ptr + 0x162) = 1;
    }
    else if (local_36 == 0xb) {
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0088b2e2;
      }
      *(void*)(this_ptr + 0x118) = *(void*)(this_ptr + 0x110);
      iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar5 = (uint64_t)local_34;
      uVar4 = *(int64_t *)(this_ptr + 0x118) - *(int64_t *)(this_ptr + 0x110);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(uint64_t *)(this_ptr + 0x118) = *(int64_t *)(this_ptr + 0x110) + uVar5;
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
      *(void*)(this_ptr + 0x163) = 1;
    }
    else {
      if (local_36 != 0x14) goto LAB_0088b28a;
      if (local_48[0] != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0088b2e2;
      }
      iVar3 = FUN_0090ee9a();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x164) = 1;
    }
LAB_0088b2e8:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

