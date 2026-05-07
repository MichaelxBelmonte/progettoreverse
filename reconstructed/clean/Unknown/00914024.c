// Function: FUN_00914024
// Address: 00914024
// Size: 776 bytes
// Class: Unknown

int FUN_00914024(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  lVar12 = this_ptr + 0x428;
  lVar7 = this_ptr + 0x40;
  lVar8 = this_ptr + 8;
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
    iVar1 = local_36 + -0xb;
    switch(iVar1) {
    case 0:
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0091427d;
      }
      iVar3 = FUN_0090f500();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x441) = 1;
      break;
    case 1:
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0091427d;
      }
      iVar3 = FUN_0090f500();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x442) = 1;
      break;
    case 2:
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0091427d;
      }
      iVar3 = FUN_0090f500();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x443) = 1;
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
switchD_009140e9_caseD_3:
      iVar3 = (**(code **)(*arg1 + 0x160))();
LAB_0091427d:
      iVar3 = iVar3 + iVar2;
      break;
    case 9:
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0091427d;
      }
      iVar3 = FUN_009101fc();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x444) = 1;
      break;
    case 10:
      if (local_44 != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0091427d;
      }
      *(void*)(this_ptr + 0x430) = *(void*)(this_ptr + 0x428);
      iVar1 = (**(code **)(*arg1 + 0xf8))(iVar1,&local_34);
      uVar6 = (uint64_t)local_34;
      uVar5 = *(int64_t *)(this_ptr + 0x430) - *(int64_t *)(this_ptr + 0x428);
      if (uVar5 < uVar6) {
        FUN_0088d550();
      }
      else if (uVar6 < uVar5) {
        *(uint64_t *)(this_ptr + 0x430) = *(int64_t *)(this_ptr + 0x428) + uVar6;
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
      *(void*)(this_ptr + 0x445) = 1;
      break;
    default:
      if (local_36 != 1) goto switchD_009140e9_caseD_3;
      if (local_44 != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0091427d;
      }
      iVar3 = FUN_00906482();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x440) = 1;
    }
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

