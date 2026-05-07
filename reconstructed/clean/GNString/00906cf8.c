// Function: FUN_00906cf8
// Address: 00906cf8
// Size: 1898 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_00906cf8(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t *arg1;
  uint64_t uVar8;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t *plVar17;
  int64_t *plVar18;
  int64_t lVar19;
  int64_t lVar20;
  int64_t lVar21;
  int local_4c;
  short local_46 [3];
  uint local_34;
  
  FUN_0088d1d0();
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar19 = this_ptr + 0x1b0;
  lVar20 = this_ptr + 0x198;
  lVar21 = this_ptr + 0x180;
  lVar10 = this_ptr + 0x28;
  plVar17 = (int64_t *)(this_ptr + 0x10);
  lVar11 = this_ptr + 10;
  lVar12 = this_ptr + 9;
  lVar13 = this_ptr + 8;
  do {
    psVar4 = local_46;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_4c,param_3,param_4,lVar10,lVar11,lVar12,lVar13,uVar14,uVar15,
                       uVar16,plVar17,lVar19,lVar20,lVar21);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar14 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_46[0] < 0x28) {
      if (local_46[0] < 0x14) {
        if (local_46[0] == 10) {
          if (local_4c != 2) {
            iVar3 = (**(code **)(*arg1 + 0x160))();
            goto LAB_009072ee;
          }
          iVar3 = (**(code **)(*arg1 + 0x118))();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x230) = 1;
        }
        else if (local_46[0] == 0xb) {
          if (local_4c != 2) {
            iVar3 = (**(code **)(*arg1 + 0x160))();
            goto LAB_009072ee;
          }
          iVar3 = (**(code **)(*arg1 + 0x118))();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x231) = 1;
        }
        else {
          if (local_46[0] != 0xc) goto LAB_00907220;
          if (local_4c != 2) {
            iVar3 = (**(code **)(*arg1 + 0x160))();
            goto LAB_009072ee;
          }
          iVar3 = (**(code **)(*arg1 + 0x118))();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x232) = 1;
        }
      }
      else if (local_46[0] == 0x14) {
        if (local_4c != 8) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_009072ee;
        }
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(this_ptr + 0xc) = local_34;
        *(void*)(this_ptr + 0x233) = 1;
      }
      else if (local_46[0] == 0x1e) {
        if (local_4c != 0xf) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_009072ee;
        }
        lVar7 = *(int64_t *)(this_ptr + 0x10);
        uVar9 = extraout_XMM0_Da;
        plVar18 = plVar17;
        for (lVar6 = *(int64_t *)(this_ptr + 0x18); lVar6 != lVar7; lVar6 = lVar6 + -0x38) {
          uVar9 = (***(void**)(lVar6 + -0x38))();
        }
        *(int64_t *)(this_ptr + 0x18) = lVar7;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar9,&local_34);
        FUN_0088dda0();
        iVar1 = iVar1 + iVar2;
        plVar17 = plVar18;
        if (local_34 != 0) {
          lVar7 = 0;
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*plVar18 + lVar7) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
            lVar7 = lVar7 + 0x38;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x234) = 1;
      }
      else {
        if (local_46[0] != 0x23) goto LAB_00907220;
        if (local_4c != 0xc) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_009072ee;
        }
        iVar3 = FUN_008fab98();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x235) = 1;
      }
    }
    else if (local_46[0] < 0x46) {
      if (local_46[0] == 0x28) {
        if (local_4c != 0xf) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_009072ee;
        }
        *(void*)(this_ptr + 0x188) = *(void*)(this_ptr + 0x180);
        iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
        uVar8 = (uint64_t)local_34;
        uVar5 = *(int64_t *)(this_ptr + 0x188) - *(int64_t *)(this_ptr + 0x180);
        if (uVar5 < uVar8) {
          FUN_0088d550();
        }
        else if (uVar8 < uVar5) {
          *(uint64_t *)(this_ptr + 0x188) = *(int64_t *)(this_ptr + 0x180) + uVar8;
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
        *(void*)(this_ptr + 0x236) = 1;
      }
      else if (local_46[0] == 0x32) {
        if (local_4c != 0xf) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_009072ee;
        }
        *(void*)(this_ptr + 0x1a0) = *(void*)(this_ptr + 0x198);
        iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
        uVar8 = (uint64_t)local_34;
        uVar5 = *(int64_t *)(this_ptr + 0x1a0) - *(int64_t *)(this_ptr + 0x198);
        if (uVar5 < uVar8) {
          FUN_0088d550();
        }
        else if (uVar8 < uVar5) {
          *(uint64_t *)(this_ptr + 0x1a0) = *(int64_t *)(this_ptr + 0x198) + uVar8;
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
        *(void*)(this_ptr + 0x237) = 1;
      }
      else {
        if (local_46[0] != 0x3c) goto LAB_00907220;
        if (local_4c != 0xf) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_009072ee;
        }
        *(void*)(this_ptr + 0x1b8) = *(void*)(this_ptr + 0x1b0);
        iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
        uVar8 = (uint64_t)local_34;
        uVar5 = *(int64_t *)(this_ptr + 0x1b8) - *(int64_t *)(this_ptr + 0x1b0);
        if (uVar5 < uVar8) {
          FUN_0088d550();
        }
        else if (uVar8 < uVar5) {
          *(uint64_t *)(this_ptr + 0x1b8) = *(int64_t *)(this_ptr + 0x1b0) + uVar8;
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
        *(void*)(this_ptr + 0x238) = 1;
      }
    }
    else if (local_46[0] < 0x50) {
      if (local_46[0] == 0x46) {
        if (local_4c == 0xc) {
          iVar3 = FUN_0090189a();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x239) = 1;
          goto LAB_009072f4;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_46[0] == 0x4b) {
        if (local_4c == 10) {
          iVar3 = (**(code **)(*arg1 + 0x140))();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x23a) = 1;
          goto LAB_009072f4;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
LAB_00907220:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_009072ee:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_46[0] == 0x50) {
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_009072ee;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x23b) = 1;
    }
    else {
      if (local_46[0] != 0x51) goto LAB_00907220;
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_009072ee;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x23c) = 1;
    }
LAB_009072f4:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

