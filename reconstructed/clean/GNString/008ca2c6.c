// Function: FUN_008ca2c6
// Address: 008ca2c6
// Size: 1448 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_008ca2c6(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int local_4c [2];
  short local_42;
  uint local_34;
  
  FUN_0088d1d0();
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar10 = this_ptr + 0x98;
  lVar7 = this_ptr + 0x48;
  lVar8 = this_ptr + 0x28;
  lVar9 = this_ptr + 8;
  do {
    psVar4 = &local_42;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,local_4c,param_3,param_4,lVar7,lVar8,lVar9,lVar10,uVar11,uVar12,uVar13
                      );
    iVar2 = iVar2 + iVar1;
    if (local_4c[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar11 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = local_42 + -1;
    switch(iVar1) {
    case 0:
      if (local_4c[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008ca703;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x9c) = 1;
      break;
    case 1:
      if (local_4c[0] != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008ca703;
      }
      *(void*)(this_ptr + 0x18) = *(void*)(this_ptr + 0x10);
      iVar1 = (**(code **)(*arg1 + 0xf8))(iVar1,&local_34);
      uVar6 = (uint64_t)local_34;
      uVar5 = *(int64_t *)(this_ptr + 0x18) - *(int64_t *)(this_ptr + 0x10);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(uint64_t *)(this_ptr + 0x18) = *(int64_t *)(this_ptr + 0x10) + uVar6;
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
      *(void*)(this_ptr + 0x9d) = 1;
      break;
    case 2:
      if (local_4c[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008ca703;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x9e) = 1;
      break;
    case 3:
      if (local_4c[0] != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008ca703;
      }
      *(void*)(this_ptr + 0x38) = *(void*)(this_ptr + 0x30);
      iVar1 = (**(code **)(*arg1 + 0xf8))(iVar1,&local_34);
      uVar6 = (uint64_t)local_34;
      uVar5 = *(int64_t *)(this_ptr + 0x38) - *(int64_t *)(this_ptr + 0x30);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(uint64_t *)(this_ptr + 0x38) = *(int64_t *)(this_ptr + 0x30) + uVar6;
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
      *(void*)(this_ptr + 0x9f) = 1;
      break;
    case 4:
      if (local_4c[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008ca703;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0xa0) = 1;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
switchD_008ca3c5_caseD_5:
      iVar3 = (**(code **)(*arg1 + 0x160))();
LAB_008ca703:
      iVar3 = iVar3 + iVar2;
      break;
    case 9:
      if (local_4c[0] != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008ca703;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0xa1) = 1;
      break;
    case 10:
      if (local_4c[0] != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008ca703;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0xa2) = 1;
      break;
    case 0xb:
      if (local_4c[0] != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008ca703;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0xa3) = 1;
      break;
    case 0xc:
      if (local_4c[0] != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008ca703;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0xa4) = 1;
      break;
    case 0xd:
      if (local_4c[0] != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008ca703;
      }
      *(void*)(this_ptr + 0x88) = *(void*)(this_ptr + 0x80);
      iVar1 = (**(code **)(*arg1 + 0xf8))(iVar1,&local_34);
      uVar6 = (uint64_t)local_34;
      uVar5 = *(int64_t *)(this_ptr + 0x88) - *(int64_t *)(this_ptr + 0x80);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(uint64_t *)(this_ptr + 0x88) = *(int64_t *)(this_ptr + 0x80) + uVar6;
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
      *(void*)(this_ptr + 0xa5) = 1;
      break;
    default:
      if (local_42 != 10000) goto switchD_008ca3c5_caseD_5;
      if (local_4c[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008ca703;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0xa6) = 1;
    }
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

