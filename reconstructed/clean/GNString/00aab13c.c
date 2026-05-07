// Function: FUN_00aab13c
// Address: 00aab13c
// Size: 1211 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_00aab13c(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar10 = this_ptr + 0x30;
  lVar11 = this_ptr + 0x2c;
  lVar12 = this_ptr + 0x28;
  lVar13 = this_ptr + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,local_48,param_3,param_4,lVar10,lVar11,lVar12,lVar13,uVar14,uVar15,
                       uVar16);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar14 & 1) != 0) {
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
      *(void*)(this_ptr + 0xd8) = 1;
      goto LAB_00aab54e;
    case 2:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd9) = 1;
        goto LAB_00aab54e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xda) = 1;
        goto LAB_00aab54e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xc:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xdb) = 1;
        goto LAB_00aab54e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xd:
      if (local_48[0] == 0xf) {
        *(void*)(this_ptr + 0x50) = *(void*)(this_ptr + 0x48);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_00aab22f::switchdataD_00aab628,&local_34);
        uVar7 = (uint64_t)local_34;
        uVar8 = *(int64_t *)(this_ptr + 0x50) - *(int64_t *)(this_ptr + 0x48);
        if (uVar8 < uVar7) {
          FUN_0088d550();
        }
        else if (uVar7 < uVar8) {
          *(uint64_t *)(this_ptr + 0x50) = *(int64_t *)(this_ptr + 0x48) + uVar7;
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
        *(void*)(this_ptr + 0xdc) = 1;
        goto LAB_00aab54e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xe:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xdd) = 1;
        goto LAB_00aab54e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xf:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xde) = 1;
        goto LAB_00aab54e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x10:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xdf) = 1;
        goto LAB_00aab54e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x11:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xe0) = 1;
        goto LAB_00aab54e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x12:
      if (local_48[0] == 0xf) {
        lVar6 = *(int64_t *)(this_ptr + 0xc0);
        uVar9 = extraout_XMM0_Da;
        for (lVar5 = *(int64_t *)(this_ptr + 200); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar9 = (***(void**)(lVar5 + -0x20))();
        }
        *(int64_t *)(this_ptr + 200) = lVar6;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar9,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar8 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0xc0) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar8 = uVar8 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar8 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0xe1) = 1;
        goto LAB_00aab54e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00aab54e:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

