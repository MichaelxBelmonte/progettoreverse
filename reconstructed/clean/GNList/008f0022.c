// Function: FUN_008f0022
// Address: 008f0022
// Size: 1315 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int FUN_008f0022(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint64_t uVar5;
  int64_t *arg1;
  uint64_t uVar6;
  int64_t this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int local_44;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar7 = this_ptr + 0xb0;
  lVar8 = this_ptr + 0xa8;
  lVar9 = this_ptr + 0x90;
  lVar10 = this_ptr + 0x78;
  lVar11 = this_ptr + 0x60;
  lVar12 = this_ptr + 0x48;
  lVar13 = this_ptr + 0x40;
  lVar14 = this_ptr + 0x38;
  lVar15 = this_ptr + 0x20;
  lVar16 = this_ptr + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_44,param_3,param_4,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,
                       lVar13,lVar14,lVar15,lVar16,uVar17,uVar18,uVar19);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar17 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_44 != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0xfc) = 1;
      goto LAB_008f04a1;
    case 2:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xfd) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xfe) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 4:
      if (local_44 == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xff) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 5:
      if (local_44 == 0xf) {
        *(void*)(this_ptr + 0x50) = *(void*)(this_ptr + 0x48);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_008f0143::switchdataD_008f0570,&local_34);
        uVar6 = (uint64_t)local_34;
        uVar5 = *(int64_t *)(this_ptr + 0x50) - *(int64_t *)(this_ptr + 0x48);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(uint64_t *)(this_ptr + 0x50) = *(int64_t *)(this_ptr + 0x48) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x100) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 6:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x101) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 10:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x102) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x103) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xc:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x104) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x105) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x15:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x106) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x16:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x107) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1e:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x108) = 1;
        goto LAB_008f04a1;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008f04a1:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

