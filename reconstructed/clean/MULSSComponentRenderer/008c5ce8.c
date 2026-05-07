// Function: FUN_008c5ce8
// Address: 008c5ce8
// Size: 944 bytes
// Class: MULSSComponentRenderer
// === MULSSComponentRenderer properties ===
//                   _currentComponent
//                   _components
//                   _lastRightAdjacentItem
//                   _sourceSamplePosition


int FUN_008c5ce8(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar9 = this_ptr + 0x40;
  lVar10 = this_ptr + 0x24;
  lVar11 = this_ptr + 0x20;
  lVar12 = this_ptr + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_3c,param_3,param_4,lVar9,lVar10,lVar11,lVar12,uVar13,uVar14,
                       uVar15);
    iVar2 = iVar2 + iVar1;
    if (local_3c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar13 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = (int)local_36;
    switch(iVar1) {
    case 1:
      if (local_3c != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x25c) = 1;
      goto LAB_008c604a;
    case 2:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x25d) = 1;
        goto LAB_008c604a;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x25e) = 1;
        goto LAB_008c604a;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 4:
      if (local_3c == 0xf) {
        lVar6 = *(int64_t *)(this_ptr + 0x28);
        uVar8 = extraout_XMM0_Da;
        for (lVar5 = *(int64_t *)(this_ptr + 0x30); lVar5 != lVar6; lVar5 = lVar5 + -0x30) {
          uVar8 = (***(void**)(lVar5 + -0x30))();
        }
        *(int64_t *)(this_ptr + 0x30) = lVar6;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
        FUN_008c60dc();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x28) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x30;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x25f) = 1;
        goto LAB_008c604a;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 5:
      if (local_3c == 0xc) {
        iVar3 = FUN_008892fe();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x260) = 1;
        goto LAB_008c604a;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 6:
      if (local_3c == 0xc) {
        iVar3 = FUN_0088b06e();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x261) = 1;
        goto LAB_008c604a;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      if (iVar1 == 0xc44) {
        if (local_3c == 0xc) {
          iVar3 = FUN_008f1210();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x262) = 1;
          goto LAB_008c604a;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (iVar1 == 10000) {
        if (local_3c == 8) {
          iVar3 = (**(code **)(*arg1 + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x263) = 1;
          goto LAB_008c604a;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    iVar3 = iVar3 + iVar2;
LAB_008c604a:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

