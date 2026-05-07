// Function: FUN_008fbef0
// Address: 008fbef0
// Size: 2661 bytes
// Class: Unknown

int FUN_008fbef0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  uint64_t uVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar7 = this_ptr + 600;
  lVar8 = this_ptr + 599;
  lVar9 = this_ptr + 0x256;
  lVar10 = this_ptr + 0x255;
  lVar11 = this_ptr + 0x254;
  lVar12 = this_ptr + 0x250;
  lVar13 = this_ptr + 0x238;
  lVar14 = this_ptr + 0x230;
  lVar15 = this_ptr + 0x218;
  lVar16 = this_ptr + 0x200;
  lVar17 = this_ptr + 0x1e8;
  lVar18 = this_ptr + 0x1d0;
  lVar19 = this_ptr + 0x1b8;
  lVar20 = this_ptr + 0x1a0;
  lVar21 = this_ptr + 0x188;
  lVar22 = this_ptr + 0x150;
  lVar23 = this_ptr + 0x14c;
  lVar24 = this_ptr + 0x38;
  lVar25 = this_ptr + 0x30;
  lVar26 = this_ptr + 0x18;
  lVar27 = this_ptr + 0x10;
  lVar28 = this_ptr + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,local_48,param_3,param_4,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,lVar13
                       ,lVar14,lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,lVar23,lVar24
                       ,lVar25,lVar26,lVar27,lVar28,uVar29,uVar30,uVar31);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar29 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_48[0] != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 900) = 1;
      goto LAB_008fc8a9;
    case 2:
      if (local_48[0] == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x385) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x386) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 5:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x387) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 6:
      if (local_48[0] == 0xc) {
        iVar3 = FUN_008f0022();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x388) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 10:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(this_ptr + 0x148) = local_34;
        *(void*)(this_ptr + 0x389) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x38a) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xc:
      if (local_48[0] == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x38b) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xd:
      if (local_48[0] == 0xf) {
        *(void*)(this_ptr + 0x160) = *(void*)(this_ptr + 0x158);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_008fc0db::switchdataD_008fc988,&local_34);
        uVar6 = (uint64_t)local_34;
        uVar5 = *(int64_t *)(this_ptr + 0x160) - *(int64_t *)(this_ptr + 0x158);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(uint64_t *)(this_ptr + 0x160) = *(int64_t *)(this_ptr + 0x158) + uVar6;
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
        *(void*)(this_ptr + 0x38c) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xe:
      if (local_48[0] == 0xf) {
        *(void*)(this_ptr + 0x178) = *(void*)(this_ptr + 0x170);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_008fc0db::switchdataD_008fc988,&local_34);
        FUN_0090f0c8();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x140))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x38d) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xf:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x38e) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x10:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x38f) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x390) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x15:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x391) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x16:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x392) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x17:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x393) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x18:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x394) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x19:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x395) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1a:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x396) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1e:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x397) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1f:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x398) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x28:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x399) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x29:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x39a) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x2a:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x39b) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x2b:
      if (local_48[0] == 0xc) {
        iVar3 = FUN_008e84b4();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x39c) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x2c:
      if (local_48[0] == 0xc) {
        iVar3 = FUN_008e84b4();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x39d) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x2d:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x39e) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x2e:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x39f) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x2f:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(this_ptr + 0x380) = local_34;
        *(void*)(this_ptr + 0x3a0) = 1;
        goto LAB_008fc8a9;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008fc8a9:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

