// Function: FUN_008e30d2
// Address: 008e30d2
// Size: 636 bytes
// Class: Unknown

int FUN_008e30d2(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar7;
  uint64_t uVar8;
  int local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar8 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_36,&local_3c,param_3,param_4,uVar8);
    iVar2 = iVar2 + iVar1;
    if (local_3c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_3c != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(this_ptr + 8) = local_34;
      *(void*)(this_ptr + 0x780) = 1;
      goto LAB_008e3303;
    case 2:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(this_ptr + 0xc) = local_34;
        *(void*)(this_ptr + 0x781) = 1;
        goto LAB_008e3303;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_3c == 0xc) {
        iVar3 = FUN_008e20f6();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x782) = 1;
        goto LAB_008e3303;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 4:
      if (local_3c == 0xf) {
        lVar5 = *(int64_t *)(this_ptr + 0x768);
        uVar7 = extraout_XMM0_Da;
        for (lVar4 = *(int64_t *)(this_ptr + 0x770); lVar4 != lVar5; lVar4 = lVar4 + -0x260) {
          uVar7 = (***(void**)(lVar4 + -0x260))();
        }
        *(int64_t *)(this_ptr + 0x770) = lVar5;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
        FUN_008e338c();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x768) + lVar5) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x260;
          } while (uVar6 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x783) = 1;
        goto LAB_008e3303;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008e3303:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

