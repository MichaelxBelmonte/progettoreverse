// Function: FUN_015446f0
// Address: 015446f0
// Size: 1974 bytes
// Class: Unknown

void FUN_015446f0(int64_t *param_1,uint64_t param_2,int64_t *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t *arg1;
  int64_t this_ptr;
  void* local_res8;
  int local_68 [12];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  FUN_01717720();
  iVar6 = *(int *)(*arg1 + 0x18);
  iVar5 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar5 = iVar6;
  }
  local_68[8] = 0;
  local_68[9] = 0;
  local_68[10] = 0;
  local_68[0xb] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  if (3 < iVar6) {
    iVar1 = local_res8 + 1;
    uVar9 = 0;
    iVar6 = **(int **)(*arg1 + 0x10);
    do {
      if (iVar6 != -1000000) {
        iVar6 = iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc;
        pvVar7 = _pthread_getspecific(local_res8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017dca70();
        if (uVar9 != param_4) {
          if ((*(float *)(this_ptr + 0x7c) != g_0239424c) ||
             (NAN(*(float *)(this_ptr + 0x7c)) || NAN(g_0239424c))) {
            pvVar7 = _pthread_getspecific(local_res8);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar2 = FUN_017dde10();
            lVar8 = *(int64_t *)(*(int64_t *)(*param_3 + 0x10) + uVar9 * 8);
            uVar4 = *(uint *)(lVar8 + 0xc);
            uVar10 = (uint64_t)uVar4;
            if ((uVar2 & 8) == 0) {
              lVar11 = (int64_t)iVar1;
              if (iVar1 < (int)uVar4) {
                do {
                  if (*(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar11 * 8) != 0) {
                    pvVar7 = _pthread_getspecific((void*)uVar10);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    iVar3 = FUN_017dddb0();
                    if (iVar3 != 3) {
                      FUN_017e4480();
                      break;
                    }
                  }
                  lVar8 = *(int64_t *)(*(int64_t *)(*param_3 + 0x10) + uVar9 * 8);
                  lVar11 = lVar11 + 1;
                } while ((int)lVar11 < *(int *)(lVar8 + 0xc));
              }
            }
            else {
              lVar11 = (int64_t)iVar1;
              if (iVar1 < (int)uVar4) {
                do {
                  if (*(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar11 * 8) != 0) {
                    pvVar7 = _pthread_getspecific((void*)uVar10);
                    if (pvVar7 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    iVar3 = FUN_017dddb0();
                    if (iVar3 != 3) {
                      FUN_017e4480();
                      break;
                    }
                  }
                  lVar8 = *(int64_t *)(*(int64_t *)(*param_3 + 0x10) + uVar9 * 8);
                  lVar11 = lVar11 + 1;
                } while ((int)lVar11 < *(int *)(lVar8 + 0xc));
              }
            }
          }
        }
        local_68[(int)((iVar6 >> 0x1f & 0xcU) + iVar6)] =
             local_68[(int)((iVar6 >> 0x1f & 0xcU) + iVar6)] + 1;
      }
      if (uVar9 + 1 == (uint64_t)(uint)(iVar5 >> 2)) break;
      uVar9 = uVar9 + 1;
      iVar6 = *(int *)(*(int64_t *)(*arg1 + 0x10) + uVar9 * 4);
    } while( true );
  }
  uVar4 = (uint)*(void*)(*param_1 + 0x18);
  if ((~uVar4 & 0xf000) == 0) {
LAB_01544d2b:
    if ((~uVar4 & 0xf0000) != 0) {
      FUN_01715480();
    }
  }
  else {
    iVar5 = FUN_01715480();
    iVar6 = iVar5 + 3 >> 0x1f;
    iVar6 = iVar5 + (((uint)((iVar5 + 3) / 6 + iVar6) >> 1) - iVar6) * -0xc + 3;
    if (local_68[(int)((iVar6 >> 0x1f & 0xcU) + iVar6)] != 0) {
      uVar4 = (uint)*(void*)(*param_1 + 0x18);
      goto LAB_01544d2b;
    }
  }
  uVar9 = *(uint64_t *)(*param_1 + 0x18);
  if ((~uVar9 & 0xf0000000000) != 0) {
    iVar5 = FUN_01715480();
    iVar6 = iVar5 + 10 >> 0x1f;
    iVar6 = iVar5 + (((uint)((iVar5 + 10) / 6 + iVar6) >> 1) - iVar6) * -0xc + 10;
    if (local_68[(int)((iVar6 >> 0x1f & 0xcU) + iVar6)] == 0) goto LAB_01544e55;
    uVar9 = *(uint64_t *)(*param_1 + 0x18);
  }
  if ((~uVar9 & 0xf00000000000) != 0) {
    FUN_01715480();
  }
LAB_01544e55:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

