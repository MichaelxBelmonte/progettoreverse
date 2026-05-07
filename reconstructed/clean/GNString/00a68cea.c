// Function: FUN_00a68cea
// Address: 00a68cea
// Size: 2580 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_00a68cea(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  uint64_t uVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  int64_t *plVar29;
  int64_t *plVar30;
  int64_t lVar31;
  int64_t lVar32;
  int64_t lVar33;
  int local_4c;
  short local_46 [3];
  uint local_34;
  
  FUN_0088d1d0();
  uVar26 = 0;
  uVar27 = 0;
  uVar28 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  plVar29 = (int64_t *)(this_ptr + 0x118);
  lVar10 = this_ptr + 0xec;
  lVar11 = this_ptr + 0xe8;
  lVar12 = this_ptr + 0xe4;
  lVar13 = this_ptr + 0xe0;
  lVar31 = this_ptr + 200;
  lVar14 = this_ptr + 0xb0;
  lVar15 = this_ptr + 0xa8;
  lVar16 = this_ptr + 0x90;
  lVar17 = this_ptr + 0x78;
  lVar18 = this_ptr + 0x70;
  lVar19 = this_ptr + 0x6c;
  lVar20 = this_ptr + 0x68;
  lVar32 = this_ptr + 0x50;
  lVar33 = this_ptr + 0x38;
  lVar21 = this_ptr + 0x34;
  lVar22 = this_ptr + 0x30;
  lVar23 = this_ptr + 0x2c;
  lVar24 = this_ptr + 0x28;
  lVar25 = this_ptr + 8;
  do {
    psVar4 = local_46;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_4c,param_3,param_4,lVar10,lVar11,lVar12,lVar13,lVar14,lVar15,
                       lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,lVar23,lVar24,lVar25,uVar26,
                       uVar27,uVar28,plVar29,lVar31,lVar32,lVar33);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar26 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_46[0]) {
    case 1:
      if (local_4c != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = FUN_00aa9ade();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x130) = 1;
      goto LAB_00a69596;
    case 2:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x131) = 1;
        goto LAB_00a69596;
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
        *(void*)(this_ptr + 0x132) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xc:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x133) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xd:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x134) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xe:
      if (local_4c == 0xf) {
        *(void*)(this_ptr + 0x40) = *(void*)(this_ptr + 0x38);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_00a68e95::switchdataD_00a69738,&local_34);
        uVar7 = (uint64_t)local_34;
        uVar8 = *(int64_t *)(this_ptr + 0x40) - *(int64_t *)(this_ptr + 0x38);
        if (uVar8 < uVar7) {
          FUN_0088d550();
        }
        else if (uVar7 < uVar8) {
          *(uint64_t *)(this_ptr + 0x40) = *(int64_t *)(this_ptr + 0x38) + uVar7;
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
        *(void*)(this_ptr + 0x135) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xf:
      if (local_4c == 0xf) {
        *(void*)(this_ptr + 0x58) = *(void*)(this_ptr + 0x50);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_00a68e95::switchdataD_00a69738,&local_34);
        uVar7 = (uint64_t)local_34;
        uVar8 = *(int64_t *)(this_ptr + 0x58) - *(int64_t *)(this_ptr + 0x50);
        if (uVar8 < uVar7) {
          FUN_0088d550();
        }
        else if (uVar7 < uVar8) {
          *(uint64_t *)(this_ptr + 0x58) = *(int64_t *)(this_ptr + 0x50) + uVar7;
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
        *(void*)(this_ptr + 0x136) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x10:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x137) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x11:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x138) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x12:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x139) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x13:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x13a) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x13b) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x15:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x13c) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x16:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x13d) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x17:
      if (local_4c == 0xf) {
        *(void*)(this_ptr + 0xd0) = *(void*)(this_ptr + 200);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_00a68e95::switchdataD_00a69738,&local_34);
        uVar7 = (uint64_t)local_34;
        uVar8 = *(int64_t *)(this_ptr + 0xd0) - *(int64_t *)(this_ptr + 200);
        if (uVar8 < uVar7) {
          FUN_0088d550();
        }
        else if (uVar7 < uVar8) {
          *(uint64_t *)(this_ptr + 0xd0) = *(int64_t *)(this_ptr + 200) + uVar7;
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
        *(void*)(this_ptr + 0x13e) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x18:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x13f) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x19:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x140) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1a:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x141) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1b:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x142) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1c:
      if (local_4c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x143) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1d:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x144) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1e:
      if (local_4c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x145) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1f:
      if (local_4c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x146) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x20:
      if (local_4c == 0xf) {
        lVar6 = *(int64_t *)(this_ptr + 0x118);
        uVar9 = extraout_XMM0_Da;
        plVar30 = plVar29;
        for (lVar5 = *(int64_t *)(this_ptr + 0x120); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar9 = (***(void**)(lVar5 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0x120) = lVar6;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar9,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        plVar29 = plVar30;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar8 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*plVar30 + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar8 = uVar8 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar8 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x147) = 1;
        goto LAB_00a69596;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00a69596:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

