// Function: FUN_00902ee2
// Address: 00902ee2
// Size: 1711 bytes
// Class: MDMetaWindowController

int FUN_00902ee2(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar9 = this_ptr + 0xd8;
  lVar10 = this_ptr + 0xc0;
  lVar11 = this_ptr + 0x80;
  lVar12 = this_ptr + 0x78;
  lVar13 = this_ptr + 0x70;
  lVar14 = this_ptr + 0x58;
  lVar15 = this_ptr + 0x40;
  lVar16 = this_ptr + 0x28;
  lVar17 = this_ptr + 0x10;
  lVar18 = this_ptr + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,local_48,param_3,param_4,lVar9,lVar10,lVar11,lVar12,lVar13,lVar14,
                       lVar15,lVar16,lVar17,lVar18,uVar19,uVar20,uVar21);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar19 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_48[0] != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x139) = 1;
      goto LAB_00903543;
    case 2:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x13a) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x13b) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 4:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x13c) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 5:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x13d) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 6:
      if (local_48[0] == 4) {
        iVar3 = (**(code **)(*arg1 + 0x148))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x13e) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 7:
      if (local_48[0] == 4) {
        iVar3 = (**(code **)(*arg1 + 0x148))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x13f) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 8:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x140) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 9:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(this_ptr + 0x84) = local_34;
        *(void*)(this_ptr + 0x141) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 10:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(this_ptr + 0x88) = local_34;
        *(void*)(this_ptr + 0x142) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_48[0] == 0xf) {
        *(void*)(this_ptr + 0x98) = *(void*)(this_ptr + 0x90);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_0090301b::switchdataD_009035c4,&local_34);
        FUN_008897f0();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x138))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x143) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xc:
      if (local_48[0] == 0xf) {
        lVar6 = *(int64_t *)(this_ptr + 0xa8);
        uVar8 = extraout_XMM0_Da;
        for (lVar5 = *(int64_t *)(this_ptr + 0xb0); lVar5 != lVar6; lVar5 = lVar5 + -0x30) {
          uVar8 = (***(void**)(lVar5 + -0x30))();
        }
        *(int64_t *)(this_ptr + 0xb0) = lVar6;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
        FUN_00903614();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0xa8) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x30;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x144) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xd:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x145) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xe:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x146) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xf:
      if (local_48[0] == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x147) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x10:
      if (local_48[0] == 0xc) {
        iVar3 = FUN_00902848();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x148) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x11:
      if (local_48[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x149) = 1;
        goto LAB_00903543;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00903543:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

