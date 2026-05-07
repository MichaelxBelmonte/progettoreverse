// Function: FUN_00aa14b8
// Address: 00aa14b8
// Size: 3045 bytes
// Class: GNFilePath

int FUN_00aa14b8(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  int64_t lVar20;
  int64_t lVar21;
  int64_t lVar22;
  int64_t lVar23;
  int64_t lVar24;
  int64_t lVar25;
  int64_t lVar26;
  int64_t lVar27;
  int64_t lVar28;
  int64_t lVar29;
  int64_t lVar30;
  int64_t lVar31;
  int64_t lVar32;
  int64_t lVar33;
  int64_t lVar34;
  int64_t lVar35;
  uint64_t uVar36;
  uint64_t uVar37;
  uint64_t uVar38;
  int local_4c;
  short local_3a [3];
  uint local_34;
  
  FUN_0088d1d0();
  uVar36 = 0;
  uVar37 = 0;
  uVar38 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar10 = this_ptr + 0x174;
  lVar11 = this_ptr + 0x170;
  lVar12 = this_ptr + 0x158;
  lVar13 = this_ptr + 0x140;
  lVar14 = this_ptr + 0x138;
  lVar15 = this_ptr + 0x134;
  lVar16 = this_ptr + 0x131;
  lVar17 = this_ptr + 0x130;
  lVar18 = this_ptr + 0x111;
  lVar19 = this_ptr + 0x110;
  lVar20 = this_ptr + 0xf8;
  lVar21 = this_ptr + 0xf0;
  lVar22 = this_ptr + 0xd8;
  lVar23 = this_ptr + 0xc0;
  lVar24 = this_ptr + 0xb8;
  lVar25 = this_ptr + 0xa0;
  lVar26 = this_ptr + 0x88;
  lVar27 = this_ptr + 0x84;
  lVar28 = this_ptr + 0x80;
  lVar29 = this_ptr + 0x68;
  lVar30 = this_ptr + 0x60;
  lVar31 = this_ptr + 0x48;
  lVar32 = this_ptr + 0x30;
  lVar33 = this_ptr + 0x2c;
  lVar34 = this_ptr + 0x28;
  lVar35 = this_ptr + 8;
  do {
    psVar4 = local_3a;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_4c,param_3,param_4,lVar10,lVar11,lVar12,lVar13,lVar14,lVar15,
                       lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,lVar23,lVar24,lVar25,lVar26,
                       lVar27,lVar28,lVar29,lVar30,lVar31,lVar32,lVar33,lVar34,lVar35,uVar36,uVar37,
                       uVar38);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar36 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_3a[0]) {
    case 1:
      if (local_4c != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = FUN_00aa9ade();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x1c0) = 1;
      goto LAB_00aa1ff2;
    case 2:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c1) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c2) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xc:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c3) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xd:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c4) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xe:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c5) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xf:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c6) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x10:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c7) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x11:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c8) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x12:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c9) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x13:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1ca) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1cb) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x15:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1cc) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x16:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1cd) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x17:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1ce) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x18:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1cf) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x19:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1d0) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1a:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1d1) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1b:
      if (local_4c == 0xf) {
        *(void*)(this_ptr + 0x120) = *(void*)(this_ptr + 0x118);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_00aa16c6::switchdataD_00aa20d8,&local_34);
        uVar7 = (uint64_t)local_34;
        uVar8 = *(int64_t *)(this_ptr + 0x120) - *(int64_t *)(this_ptr + 0x118);
        if (uVar8 < uVar7) {
          FUN_0088d550();
        }
        else if (uVar7 < uVar8) {
          *(uint64_t *)(this_ptr + 0x120) = *(int64_t *)(this_ptr + 0x118) + uVar7;
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
        *(void*)(this_ptr + 0x1d2) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1c:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1d3) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1d:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1d4) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1e:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1d5) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1f:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1d6) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x20:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1d7) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x21:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1d8) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x22:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1d9) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x23:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1da) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x24:
      if (local_4c == 0xf) {
        lVar6 = *(int64_t *)(this_ptr + 0x178);
        uVar9 = extraout_XMM0_Da;
        for (lVar5 = *(int64_t *)(this_ptr + 0x180); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar9 = (***(void**)(lVar5 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0x180) = lVar6;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar9,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar8 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x178) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar8 = uVar8 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar8 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x1db) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x25:
      if (local_4c == 0xf) {
        lVar6 = *(int64_t *)(this_ptr + 400);
        uVar9 = extraout_XMM0_Da;
        for (lVar5 = *(int64_t *)(this_ptr + 0x198); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar9 = (***(void**)(lVar5 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0x198) = lVar6;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar9,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar8 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 400) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar8 = uVar8 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar8 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x1dc) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x26:
      if (local_4c == 0xf) {
        lVar6 = *(int64_t *)(this_ptr + 0x1a8);
        uVar9 = extraout_XMM0_Da;
        for (lVar5 = *(int64_t *)(this_ptr + 0x1b0); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar9 = (***(void**)(lVar5 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0x1b0) = lVar6;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar9,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar8 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x1a8) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar8 = uVar8 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar8 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x1dd) = 1;
        goto LAB_00aa1ff2;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00aa1ff2:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

