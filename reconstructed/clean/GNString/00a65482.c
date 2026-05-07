// Function: FUN_00a65482
// Address: 00a65482
// Size: 1535 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_00a65482(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *arg1;
  uint64_t uVar7;
  int64_t this_ptr;
  uint64_t uVar8;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int64_t *plVar19;
  int64_t *plVar20;
  int64_t *plVar21;
  int64_t lVar22;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  plVar19 = (int64_t *)(this_ptr + 0xf8);
  plVar21 = (int64_t *)(this_ptr + 0xe0);
  lVar22 = this_ptr + 0x90;
  lVar10 = this_ptr + 0x78;
  lVar11 = this_ptr + 0x60;
  lVar12 = this_ptr + 0x48;
  lVar13 = this_ptr + 0x30;
  lVar14 = this_ptr + 0x28;
  lVar15 = this_ptr + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,local_48,param_3,param_4,lVar10,lVar11,lVar12,lVar13,lVar14,lVar15,
                       uVar16,uVar17,uVar18,plVar19,plVar21,lVar22);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar16 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_48[0] != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = FUN_00aa9ade();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x110) = 1;
      goto LAB_00a659d5;
    case 2:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x111) = 1;
        goto LAB_00a659d5;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x112) = 1;
        goto LAB_00a659d5;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xc:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x113) = 1;
        goto LAB_00a659d5;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xd:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x114) = 1;
        goto LAB_00a659d5;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xe:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x115) = 1;
        goto LAB_00a659d5;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xf:
      if (local_48[0] == 0xf) {
        *(void*)(this_ptr + 0x98) = *(void*)(this_ptr + 0x90);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_00a6559d::switchdataD_00a65ab8,&local_34);
        uVar7 = (uint64_t)local_34;
        uVar8 = *(int64_t *)(this_ptr + 0x98) - *(int64_t *)(this_ptr + 0x90);
        if (uVar8 < uVar7) {
          FUN_0088d550();
        }
        else if (uVar7 < uVar8) {
          *(uint64_t *)(this_ptr + 0x98) = *(int64_t *)(this_ptr + 0x90) + uVar7;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar8 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x116) = 1;
        goto LAB_00a659d5;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x10:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x117) = 1;
        goto LAB_00a659d5;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x11:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x118) = 1;
        goto LAB_00a659d5;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x12:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x119) = 1;
        goto LAB_00a659d5;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x13:
      if (local_48[0] == 0xf) {
        lVar6 = *(int64_t *)(this_ptr + 0xe0);
        uVar9 = extraout_XMM0_Da;
        plVar20 = plVar21;
        for (lVar5 = *(int64_t *)(this_ptr + 0xe8); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar9 = (***(void**)(lVar5 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0xe8) = lVar6;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar9,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        plVar21 = plVar20;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar8 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*plVar20 + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar8 = uVar8 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar8 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x11a) = 1;
        goto LAB_00a659d5;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_48[0] == 0xf) {
        lVar6 = *(int64_t *)(this_ptr + 0xf8);
        uVar9 = extraout_XMM0_Da;
        plVar20 = plVar19;
        for (lVar5 = *(int64_t *)(this_ptr + 0x100); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar9 = (***(void**)(lVar5 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0x100) = lVar6;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar9,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        plVar19 = plVar20;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar8 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*plVar20 + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar8 = uVar8 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar8 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x11b) = 1;
        goto LAB_00a659d5;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00a659d5:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

