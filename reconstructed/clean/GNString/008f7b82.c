// Function: FUN_008f7b82
// Address: 008f7b82
// Size: 2235 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_008f7b82(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  int64_t lVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  int local_4c;
  short local_3a [3];
  uint local_34;
  
  FUN_0088d1d0();
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar10 = this_ptr + 0x84;
  lVar11 = this_ptr + 0x80;
  lVar12 = this_ptr + 0x68;
  lVar13 = this_ptr + 0x60;
  lVar14 = this_ptr + 0x58;
  lVar15 = this_ptr + 0x40;
  lVar16 = this_ptr + 0x28;
  lVar17 = this_ptr + 0x24;
  lVar18 = this_ptr + 0x21;
  lVar19 = this_ptr + 0x20;
  do {
    psVar4 = local_3a;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_4c,param_3,param_4,lVar10,lVar11,lVar12,lVar13,lVar14,lVar15,
                       lVar16,lVar17,lVar18,lVar19,uVar20,uVar21,uVar22);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar20 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = local_3a[0] + -10;
    switch(iVar1) {
    case 0:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x271) = 1;
      break;
    case 1:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x272) = 1;
      break;
    case 2:
      if (local_4c != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x273) = 1;
      break;
    case 3:
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x274) = 1;
      break;
    case 4:
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x275) = 1;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
switchD_008f7cf2_caseD_5:
      iVar3 = (**(code **)(*arg1 + 0x160))();
LAB_008f838b:
      iVar3 = iVar3 + iVar2;
      break;
    case 10:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x276) = 1;
      break;
    case 0xb:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x277) = 1;
      break;
    case 0xc:
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x278) = 1;
      break;
    case 0xd:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x279) = 1;
      break;
    case 0xe:
      if (local_4c != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x27a) = 1;
      break;
    case 0xf:
      if (local_4c != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = FUN_008f0022();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x27b) = 1;
      break;
    case 0x14:
      if (local_4c != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(this_ptr + 0x198) = local_34;
      *(void*)(this_ptr + 0x27c) = 1;
      break;
    case 0x15:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x27d) = 1;
      break;
    case 0x1e:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x27e) = 1;
      break;
    case 0x1f:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      *(void*)(this_ptr + 0x1b0) = *(void*)(this_ptr + 0x1a8);
      iVar1 = (**(code **)(*arg1 + 0xf8))(iVar1,&local_34);
      uVar7 = (uint64_t)local_34;
      uVar8 = *(int64_t *)(this_ptr + 0x1b0) - *(int64_t *)(this_ptr + 0x1a8);
      if (uVar8 < uVar7) {
        FUN_0088d550();
      }
      else if (uVar7 < uVar8) {
        *(uint64_t *)(this_ptr + 0x1b0) = *(int64_t *)(this_ptr + 0x1a8) + uVar7;
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
      *(void*)(this_ptr + 0x27f) = 1;
      break;
    case 0x28:
      if (local_4c != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      iVar3 = FUN_008f1210();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x280) = 1;
      break;
    case 0x29:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      lVar6 = *(int64_t *)(this_ptr + 0x240);
      uVar9 = extraout_XMM0_Da;
      for (lVar5 = *(int64_t *)(this_ptr + 0x248); lVar5 != lVar6; lVar5 = lVar5 + -0x58) {
        uVar9 = (***(void**)(lVar5 + -0x58))();
      }
      *(int64_t *)(this_ptr + 0x248) = lVar6;
      iVar1 = (**(code **)(*arg1 + 0xf8))(uVar9,&local_34);
      FUN_008f85a4();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        lVar6 = 0;
        uVar8 = 0;
        do {
          iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x240) + lVar6) + 0x10))();
          iVar1 = iVar1 + iVar2;
          uVar8 = uVar8 + 1;
          lVar6 = lVar6 + 0x58;
        } while (uVar8 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(void*)(this_ptr + 0x281) = 1;
      break;
    case 0x2a:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      lVar6 = *(int64_t *)(this_ptr + 600);
      uVar9 = extraout_XMM0_Da;
      for (lVar5 = *(int64_t *)(this_ptr + 0x260); lVar5 != lVar6; lVar5 = lVar5 + -0x180) {
        uVar9 = (***(void**)(lVar5 + -0x180))();
      }
      *(int64_t *)(this_ptr + 0x260) = lVar6;
      iVar1 = (**(code **)(*arg1 + 0xf8))(uVar9,&local_34);
      FUN_008d3370();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        lVar6 = 0;
        uVar8 = 0;
        do {
          iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 600) + lVar6) + 0x10))();
          iVar1 = iVar1 + iVar2;
          uVar8 = uVar8 + 1;
          lVar6 = lVar6 + 0x180;
        } while (uVar8 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(void*)(this_ptr + 0x282) = 1;
      break;
    default:
      if (local_3a[0] != 1) goto switchD_008f7cf2_caseD_5;
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f838b;
      }
      lVar6 = *(int64_t *)(this_ptr + 8);
      uVar9 = extraout_XMM0_Da;
      for (lVar5 = *(int64_t *)(this_ptr + 0x10); lVar5 != lVar6; lVar5 = lVar5 + -0x390) {
        uVar9 = (***(void**)(lVar5 + -0x390))();
      }
      *(int64_t *)(this_ptr + 0x10) = lVar6;
      iVar1 = (**(code **)(*arg1 + 0xf8))(uVar9,&local_34);
      FUN_008f8528();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        lVar6 = 0;
        uVar8 = 0;
        do {
          iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 8) + lVar6) + 0x10))();
          iVar1 = iVar1 + iVar2;
          uVar8 = uVar8 + 1;
          lVar6 = lVar6 + 0x390;
        } while (uVar8 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(void*)(this_ptr + 0x270) = 1;
    }
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

