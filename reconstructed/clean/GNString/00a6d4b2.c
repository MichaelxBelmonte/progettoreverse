// Function: FUN_00a6d4b2
// Address: 00a6d4b2
// Size: 3734 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_00a6d4b2(void)

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
  int local_48;
  short local_42;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_42,&local_48);
    iVar2 = iVar2 + iVar1;
    if (local_48 == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_42) {
    case 1:
      if (local_48 != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = FUN_00aa9ade();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x1c0) = 1;
      goto LAB_00a6e2fa;
    case 2:
      if (local_48 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c1) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_48 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c2) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xc:
      if (local_48 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c3) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xd:
      if (local_48 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c4) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xe:
      if (local_48 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c5) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xf:
      if (local_48 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c6) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x10:
      if (local_48 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c7) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x11:
      if (local_48 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c8) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x12:
      if (local_48 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1c9) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x13:
      if (local_48 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1ca) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_48 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1cb) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x15:
      if (local_48 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1cc) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x16:
      if (local_48 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1cd) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x17:
      if (local_48 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1ce) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x18:
      if (local_48 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1cf) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x19:
      if (local_48 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1d0) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1a:
      if (local_48 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1d1) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1b:
      if (local_48 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1d2) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1c:
      if (local_48 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1d3) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1d:
      if (local_48 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1d4) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1e:
      if (local_48 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x1d5) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1f:
      if (local_48 == 0xf) {
        lVar5 = *(int64_t *)(this_ptr + 0xe8);
        uVar7 = extraout_XMM0_Da;
        for (lVar4 = *(int64_t *)(this_ptr + 0xf0); lVar4 != lVar5; lVar4 = lVar4 + -0x20) {
          uVar7 = (***(void**)(lVar4 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0xf0) = lVar5;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0xe8) + lVar5) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x20;
          } while (uVar6 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x1d6) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x20:
      if (local_48 == 0xf) {
        lVar5 = *(int64_t *)(this_ptr + 0x100);
        uVar7 = extraout_XMM0_Da;
        for (lVar4 = *(int64_t *)(this_ptr + 0x108); lVar4 != lVar5; lVar4 = lVar4 + -0x20) {
          uVar7 = (***(void**)(lVar4 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0x108) = lVar5;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x100) + lVar5) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x20;
          } while (uVar6 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x1d7) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x21:
      if (local_48 == 0xf) {
        lVar5 = *(int64_t *)(this_ptr + 0x118);
        uVar7 = extraout_XMM0_Da;
        for (lVar4 = *(int64_t *)(this_ptr + 0x120); lVar4 != lVar5; lVar4 = lVar4 + -0x20) {
          uVar7 = (***(void**)(lVar4 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0x120) = lVar5;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x118) + lVar5) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x20;
          } while (uVar6 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x1d8) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x22:
      if (local_48 == 0xf) {
        lVar5 = *(int64_t *)(this_ptr + 0x130);
        uVar7 = extraout_XMM0_Da;
        for (lVar4 = *(int64_t *)(this_ptr + 0x138); lVar4 != lVar5; lVar4 = lVar4 + -0x20) {
          uVar7 = (***(void**)(lVar4 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0x138) = lVar5;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x130) + lVar5) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x20;
          } while (uVar6 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x1d9) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x23:
      if (local_48 == 0xf) {
        lVar5 = *(int64_t *)(this_ptr + 0x148);
        uVar7 = extraout_XMM0_Da;
        for (lVar4 = *(int64_t *)(this_ptr + 0x150); lVar4 != lVar5; lVar4 = lVar4 + -0x20) {
          uVar7 = (***(void**)(lVar4 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0x150) = lVar5;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x148) + lVar5) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x20;
          } while (uVar6 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x1da) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x24:
      if (local_48 == 0xf) {
        lVar5 = *(int64_t *)(this_ptr + 0x160);
        uVar7 = extraout_XMM0_Da;
        for (lVar4 = *(int64_t *)(this_ptr + 0x168); lVar4 != lVar5; lVar4 = lVar4 + -0x20) {
          uVar7 = (***(void**)(lVar4 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0x168) = lVar5;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x160) + lVar5) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x20;
          } while (uVar6 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x1db) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x25:
      if (local_48 == 0xf) {
        lVar5 = *(int64_t *)(this_ptr + 0x178);
        uVar7 = extraout_XMM0_Da;
        for (lVar4 = *(int64_t *)(this_ptr + 0x180); lVar4 != lVar5; lVar4 = lVar4 + -0x20) {
          uVar7 = (***(void**)(lVar4 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0x180) = lVar5;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x178) + lVar5) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x20;
          } while (uVar6 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x1dc) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x26:
      if (local_48 == 0xf) {
        lVar5 = *(int64_t *)(this_ptr + 400);
        uVar7 = extraout_XMM0_Da;
        for (lVar4 = *(int64_t *)(this_ptr + 0x198); lVar4 != lVar5; lVar4 = lVar4 + -0x20) {
          uVar7 = (***(void**)(lVar4 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0x198) = lVar5;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 400) + lVar5) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x20;
          } while (uVar6 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x1dd) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x27:
      if (local_48 == 0xf) {
        lVar5 = *(int64_t *)(this_ptr + 0x1a8);
        uVar7 = extraout_XMM0_Da;
        for (lVar4 = *(int64_t *)(this_ptr + 0x1b0); lVar4 != lVar5; lVar4 = lVar4 + -0x20) {
          uVar7 = (***(void**)(lVar4 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0x1b0) = lVar5;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x1a8) + lVar5) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x20;
          } while (uVar6 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x1de) = 1;
        goto LAB_00a6e2fa;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00a6e2fa:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

