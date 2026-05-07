// Function: FUN_008e20f6
// Address: 008e20f6
// Size: 1059 bytes
// Class: Unknown

int FUN_008e20f6(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  int64_t lVar14;
  int local_44;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar7 = this_ptr + 0x458;
  lVar8 = this_ptr + 0x388;
  lVar9 = this_ptr + 0x1d8;
  lVar10 = this_ptr + 0x28;
  lVar14 = this_ptr + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_44,param_3,param_4,lVar7,lVar8,lVar9,lVar10,uVar11,uVar12,
                       uVar13,lVar14);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar11 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_44 != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      *(void*)(this_ptr + 0x10) = *(void*)(this_ptr + 8);
      iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_008e21de::switchdataD_008e2548,&local_34);
      uVar6 = (uint64_t)local_34;
      uVar5 = *(int64_t *)(this_ptr + 0x10) - *(int64_t *)(this_ptr + 8);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(uint64_t *)(this_ptr + 0x10) = *(int64_t *)(this_ptr + 8) + uVar6;
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
      *(void*)(this_ptr + 0x748) = 1;
      goto LAB_008e2473;
    case 2:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(this_ptr + 0x20) = local_34;
        *(void*)(this_ptr + 0x749) = 1;
        goto LAB_008e2473;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(this_ptr + 0x24) = local_34;
        *(void*)(this_ptr + 0x74a) = 1;
        goto LAB_008e2473;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 4:
      if (local_44 == 0xc) {
        iVar3 = FUN_00904b02();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x74b) = 1;
        goto LAB_008e2473;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 5:
      if (local_44 == 0xc) {
        iVar3 = FUN_00904b02();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x74c) = 1;
        goto LAB_008e2473;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 6:
      if (local_44 == 0xc) {
        iVar3 = FUN_008e0ede();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x74d) = 1;
        goto LAB_008e2473;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 7:
      if (local_44 == 0xc) {
        iVar3 = FUN_00905dd4();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x74e) = 1;
        goto LAB_008e2473;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 8:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x74f) = 1;
        goto LAB_008e2473;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 9:
      if (local_44 == 0xc) {
        iVar3 = FUN_00905508();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x750) = 1;
        goto LAB_008e2473;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 10:
      if (local_44 == 0xc) {
        iVar3 = FUN_008d8e40();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x751) = 1;
        goto LAB_008e2473;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008e2473:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

