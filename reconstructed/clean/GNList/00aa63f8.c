// Function: FUN_00aa63f8
// Address: 00aa63f8
// Size: 1628 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


int FUN_00aa63f8(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  int local_40 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar9 = this_ptr + 0xc0;
  lVar10 = this_ptr + 0xa8;
  lVar11 = this_ptr + 0x90;
  lVar12 = this_ptr + 0x78;
  lVar13 = this_ptr + 0x60;
  lVar14 = this_ptr + 0x48;
  lVar15 = this_ptr + 0x30;
  lVar16 = this_ptr + 0x2c;
  lVar17 = this_ptr + 0x28;
  lVar18 = this_ptr + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,local_40,param_3,param_4,lVar9,lVar10,lVar11,lVar12,lVar13,lVar14,
                       lVar15,lVar16,lVar17,lVar18,uVar19,uVar20,uVar21);
    iVar2 = iVar2 + iVar1;
    if (local_40[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar19 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_40[0] != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = FUN_00aa9ade();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x140) = 1;
      goto LAB_00aa6a06;
    case 2:
      if (local_40[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x141) = 1;
        goto LAB_00aa6a06;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_40[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x142) = 1;
        goto LAB_00aa6a06;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xc:
      if (local_40[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x143) = 1;
        goto LAB_00aa6a06;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xd:
      if (local_40[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x144) = 1;
        goto LAB_00aa6a06;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xe:
      if (local_40[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x145) = 1;
        goto LAB_00aa6a06;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xf:
      if (local_40[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x146) = 1;
        goto LAB_00aa6a06;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x10:
      if (local_40[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x147) = 1;
        goto LAB_00aa6a06;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x11:
      if (local_40[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x148) = 1;
        goto LAB_00aa6a06;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x12:
      if (local_40[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x149) = 1;
        goto LAB_00aa6a06;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x13:
      if (local_40[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x14a) = 1;
        goto LAB_00aa6a06;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_40[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x14b) = 1;
        goto LAB_00aa6a06;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x15:
      if (local_40[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x14c) = 1;
        goto LAB_00aa6a06;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x16:
      if (local_40[0] == 0xf) {
        lVar6 = *(int64_t *)(this_ptr + 0x110);
        uVar8 = extraout_XMM0_Da;
        for (lVar5 = *(int64_t *)(this_ptr + 0x118); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar8 = (***(void**)(lVar5 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0x118) = lVar6;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x110) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x14d) = 1;
        goto LAB_00aa6a06;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x17:
      if (local_40[0] == 0xf) {
        lVar6 = *(int64_t *)(this_ptr + 0x128);
        uVar8 = extraout_XMM0_Da;
        for (lVar5 = *(int64_t *)(this_ptr + 0x130); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar8 = (***(void**)(lVar5 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0x130) = lVar6;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x128) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x14e) = 1;
        goto LAB_00aa6a06;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00aa6a06:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

