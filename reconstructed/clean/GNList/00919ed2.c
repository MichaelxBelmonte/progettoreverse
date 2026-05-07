// Function: FUN_00919ed2
// Address: 00919ed2
// Size: 713 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int FUN_00919ed2(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int local_38;
  short local_32;
  
  FUN_0088d1d0();
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar6 = this_ptr + 0x40;
  lVar7 = this_ptr + 0x28;
  lVar8 = this_ptr + 0x10;
  lVar9 = this_ptr + 8;
  do {
    psVar5 = &local_32;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (&local_32,&local_38,param_3,param_4,lVar6,lVar7,lVar8,lVar9,uVar10,uVar11,
                       uVar12);
    if (local_38 == 0) {
      iVar3 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar10 & 1) != 0) {
        operator_delete(psVar5);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar3 + iVar2 + iVar1;
    }
    if (local_32 < 0x14) {
      if (local_32 == 1) {
        if (local_38 == 2) {
          iVar3 = (**(code **)(*arg1 + 0x118))();
          *(void*)(this_ptr + 0x100) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
      }
      else if (local_32 == 2) {
        if (local_38 == 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x150))();
          *(void*)(this_ptr + 0x101) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
      }
      else {
        if (local_32 != 10) goto LAB_0091a0dd;
        if (local_38 == 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x150))();
          *(void*)(this_ptr + 0x102) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
      }
    }
    else if (local_32 < 0x1f) {
      if (local_32 == 0x14) {
        if (local_38 == 8) {
          iVar3 = (**(code **)(*arg1 + 0x138))();
          *(void*)(this_ptr + 0x103) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
      }
      else if (local_32 == 0x1e) {
        if (local_38 == 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x150))();
          *(void*)(this_ptr + 0x105) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
      }
      else {
LAB_0091a0dd:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    else if (local_32 == 0x1f) {
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x104) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    else {
      if (local_32 != 0x28) goto LAB_0091a0dd;
      if (local_38 == 0xc) {
        iVar3 = FUN_00918efc();
        *(void*)(this_ptr + 0x106) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    iVar4 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  } while( true );
}

