// Function: FUN_01874d20
// Address: 01874d20
// Size: 1405 bytes
// Class: Unknown

void FUN_01874d20(void*param_1,void*param_2,void*param_3,uint8_t param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar8;
  uint64_t uVar9;
  float fVar10;
  uint32_t uVar11;
  uint64_t local_148;
  uint8_t local_140;
  uint64_t local_138;
  uint8_t local_130;
  int64_t local_128;
  uint8_t local_120;
  uint64_t local_118;
  uint8_t local_110;
  uint64_t local_108;
  uint8_t local_100;
  uint64_t local_f8;
  uint8_t local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  uint64_t local_d8;
  uint8_t local_d0;
  uint64_t local_c8;
  uint8_t local_c0;
  uint64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint8_t local_a0;
  int64_t local_98;
  uint8_t local_90;
  uint64_t local_88;
  uint64_t local_78;
  
  if (*arg1 == 0) {
    lVar4 = *this_ptr;
    iVar8 = *(int *)(lVar4 + 0xc);
    if (iVar8 < 1) goto LAB_01875069;
    lVar7 = 0;
    do {
      lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar7 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      local_120 = 1;
      local_118 = *param_2;
      local_110 = 0;
      local_108 = *param_1;
      local_100 = 0;
      local_f8 = *param_3;
      local_f0 = 0;
      local_128 = lVar4;
      FUN_0187ba90(&local_f8,&local_108,param_4);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar7 = lVar7 + 1;
      lVar4 = *this_ptr;
      local_78 = (uint64_t)*(int *)(lVar4 + 0xc);
    } while (lVar7 < (int64_t)local_78);
  }
  else {
    local_148 = *param_1;
    local_140 = 0;
    local_138 = *param_3;
    local_130 = 0;
    FUN_0187ba90(&local_138,&local_148,param_4);
    lVar4 = *this_ptr;
    local_78 = (uint64_t)*(uint *)(lVar4 + 0xc);
  }
  iVar8 = (int)local_78;
  if (1 < iVar8) {
    local_78 = local_78 & 0xffffffff;
    uVar9 = (uint64_t)(iVar8 - 1);
    do {
      lVar4 = *(int64_t *)(lVar4 + 0x10);
      lVar7 = *(int64_t *)(lVar4 + (uVar9 & 0xffffffff) * 8);
      if (lVar7 != 0) {
        FUN_00d50b00();
        lVar4 = *(int64_t *)(*this_ptr + 0x10);
      }
      local_88 = (uint64_t)((int)uVar9 - 1);
      lVar4 = *(int64_t *)(lVar4 + local_88 * 8);
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      lVar6 = *(int64_t *)(lVar7 + 0x18);
      if (*(int *)(lVar6 + 0xc) == 0) {
        lVar5 = *(int64_t *)(lVar4 + 0x18);
        if (*(int *)(lVar5 + 0xc) != 0) {
          bVar1 = false;
          goto LAB_01874e6c;
        }
LAB_01874e8a:
        lVar6 = **(int64_t **)(lVar6 + 0x10);
        lVar5 = **(int64_t **)(lVar5 + 0x10);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if ((*(int *)(lVar5 + 0xc) != *(int *)(lVar6 + 0xc)) ||
           (bVar1 = true, *(int *)(lVar5 + 0x10) != *(int *)(lVar6 + 0x10))) {
          bVar1 = false;
        }
        FUN_00d50b20();
        if (bVar1) {
          *(void*)(lVar4 + 0x10) = *(void*)(lVar7 + 0x10);
          FUN_00d23620();
          local_e0 = 0;
          local_d8 = *param_2;
          local_d0 = 0;
          local_c8 = *param_1;
          local_c0 = 0;
          local_b8 = *param_3;
          local_b0 = 0;
          local_e8 = lVar4;
          FUN_0187ba90(&local_b8,&local_c8,param_4);
        }
      }
      else {
        fVar10 = *(float *)(**(int64_t **)(lVar6 + 0x10) + 0x14);
        bVar1 = g_0239425c < fVar10;
        lVar5 = *(int64_t *)(lVar4 + 0x18);
        if (*(int *)(lVar5 + 0xc) == 0) {
          if (fVar10 <= g_0239425c) goto LAB_01874e8a;
        }
        else {
LAB_01874e6c:
          if (g_0239425c < *(float *)(**(int64_t **)(lVar5 + 0x10) + 0x14) == bVar1)
          goto LAB_01874e8a;
        }
      }
      FUN_00d50b20();
      FUN_00d50b20();
      if ((int64_t)local_78 < 3) goto LAB_01874f89;
      local_78 = local_78 - 1;
      lVar4 = *this_ptr;
      uVar9 = local_88;
    } while( true );
  }
  goto LAB_01875069;
LAB_01874f89:
  lVar4 = *this_ptr;
  iVar8 = *(int *)(lVar4 + 0xc);
LAB_01875069:
  if (*arg1 == 0) {
    uVar3 = 0;
    if (0 < iVar8) goto LAB_018750cc;
  }
  else {
    iVar2 = FUN_00d237a0();
    uVar3 = 0;
    if (0 < iVar2) {
      uVar3 = iVar2 - 1;
    }
    lVar4 = *this_ptr;
    iVar8 = iVar2 + 1;
    if (iVar2 + 1 < *(int *)(lVar4 + 0xc)) {
      iVar8 = *(int *)(lVar4 + 0xc);
    }
    if ((int)uVar3 < iVar8) {
LAB_018750cc:
      uVar9 = (uint64_t)uVar3;
      lVar7 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + uVar9 * 8);
      do {
        if (lVar7 != 0) {
          FUN_00d50b00();
          lVar4 = *this_ptr;
        }
        if (((int64_t)uVar9 < (int64_t)*(int *)(lVar4 + 0xc) + -1) &&
           (lVar4 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + 8 + uVar9 * 8), lVar4 != 0)) {
          fVar10 = (float)FUN_00d50b00();
          *(void*)(lVar7 + 0x14) = 0x7f7fffff;
          if (*(int *)(*(int64_t *)(lVar7 + 0x18) + 0xc) == 0) {
            lVar6 = *(int64_t *)(lVar4 + 0x18);
            if (*(int *)(lVar6 + 0xc) != 0) {
              bVar1 = false;
              goto LAB_01875190;
            }
LAB_018751aa:
            lVar6 = *(int64_t *)(lVar7 + 0x28);
            if (lVar6 != 0) {
              fVar10 = (float)FUN_00d50b00();
            }
            local_a0 = 1;
            lVar5 = *(int64_t *)(lVar4 + 0x28);
            local_a8 = lVar6;
            if (lVar5 != 0) {
              fVar10 = (float)FUN_00d50b00();
            }
            local_90 = 1;
            local_98 = lVar5;
            uVar11 = FUN_0187bc30(fVar10,1);
            *(void*)(lVar7 + 0x14) = uVar11;
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
            if (lVar6 != 0) {
              FUN_00d50b20();
            }
            fVar10 = (float)((uint)(*(float *)(lVar7 + 0x30) - *(float *)(lVar4 + 0x30)) &
                            g_02390140);
            *(float *)(lVar7 + 0x14) =
                 (float)((uint)SQRT((float)(g_02390140 & -(uint)(g_02390d30 < fVar10) &
                                            (uint)(fVar10 + g_02421224) |
                                           ~-(uint)(g_02390d30 < fVar10) & (uint)fVar10) +
                                    g_02390124) & g_02390140) * *(float *)(lVar7 + 0x14);
          }
          else {
            fVar10 = *(float *)(**(int64_t **)(*(int64_t *)(lVar7 + 0x18) + 0x10) + 0x14);
            bVar1 = g_0239425c < fVar10;
            lVar6 = *(int64_t *)(lVar4 + 0x18);
            if (*(int *)(lVar6 + 0xc) == 0) {
              if (fVar10 <= g_0239425c) goto LAB_018751aa;
            }
            else {
LAB_01875190:
              fVar10 = *(float *)(**(int64_t **)(lVar6 + 0x10) + 0x14);
              if (g_0239425c < fVar10 == bVar1) goto LAB_018751aa;
            }
          }
          FUN_00d50b20();
        }
        else {
          *(void*)(lVar7 + 0x14) = 0x7f7fffff;
        }
        FUN_00d50b20();
        if ((int64_t)iVar8 - 1U == uVar9) {
          return;
        }
        lVar4 = *this_ptr;
        uVar9 = uVar9 + 1;
        lVar7 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + uVar9 * 8);
      } while( true );
    }
  }
  return;
}

