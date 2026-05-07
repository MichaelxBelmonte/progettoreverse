// Function: FUN_008c5314
// Address: 008c5314
// Size: 787 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_008c5314(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int local_44;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar12 = this_ptr + 0x3b8;
  lVar8 = this_ptr + 0x130;
  lVar7 = this_ptr + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_44,param_3,param_4,lVar7,lVar8,uVar9,uVar10,uVar11,lVar12);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar9 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = (int)local_36;
    switch(iVar1) {
    case 1:
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c5578;
      }
      iVar3 = FUN_00891d8e();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x3d0) = 1;
      break;
    case 2:
      if (local_44 != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c5578;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x3d1) = 1;
      break;
    case 3:
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c5578;
      }
      iVar3 = FUN_0088a05e();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x3d2) = 1;
      break;
    case 4:
    case 5:
    case 6:
switchD_008c53d6_caseD_4:
      iVar3 = (**(code **)(*arg1 + 0x160))();
LAB_008c5578:
      iVar3 = iVar3 + iVar2;
      break;
    case 7:
      if (local_44 != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c5578;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x3d3) = 1;
      break;
    default:
      if (iVar1 == 0xc44) {
        if (local_44 != 0xc) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c5578;
        }
        iVar3 = FUN_008f7b82();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x3d4) = 1;
      }
      else {
        if (iVar1 != 0xc45) goto switchD_008c53d6_caseD_4;
        if (local_44 != 0xf) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c5578;
        }
        *(void*)(this_ptr + 0x3c0) = *(void*)(this_ptr + 0x3b8);
        iVar1 = (**(code **)(*arg1 + 0xf8))(0xc44,&local_34);
        uVar6 = (uint64_t)local_34;
        uVar5 = *(int64_t *)(this_ptr + 0x3c0) - *(int64_t *)(this_ptr + 0x3b8);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(uint64_t *)(this_ptr + 0x3c0) = *(int64_t *)(this_ptr + 0x3b8) + uVar6;
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
        *(void*)(this_ptr + 0x3d5) = 1;
      }
    }
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

