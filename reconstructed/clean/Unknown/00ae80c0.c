// Function: FUN_00ae80c0
// Address: 00ae80c0
// Size: 5040 bytes
// Class: Unknown

void FUN_00ae80c0(int param_1,int param_2,int64_t param_3,uint param_4)

{
  void*puVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int64_t lVar17;
  byte *pbVar18;
  int64_t lVar19;
  int64_t lVar20;
  int64_t lVar21;
  int64_t lVar22;
  byte *pbVar23;
  uint *puVar24;
  void*puVar25;
  int64_t lVar26;
  float *pfVar27;
  uint uVar28;
  uint unaff_ESI;
  uint uVar29;
  void*puVar30;
  uint *puVar31;
  int64_t this_ptr;
  byte *pbVar32;
  int64_t lVar33;
  ushort *puVar34;
  int64_t lVar35;
  int64_t lVar36;
  int64_t lVar37;
  ushort *puVar38;
  ushort *puVar39;
  ushort *puVar40;
  byte *pbVar41;
  int64_t lVar42;
  float fVar43;
  int local_res8;
  int local_res10;
  uint local_res18;
  uint *local_a0;
  uint *local_70;
  float *local_68;
  float *local_60;
  byte *local_50;
  
  iVar14 = 4;
  iVar13 = 4;
  if (unaff_ESI != 0x44) {
    uVar29 = unaff_ESI - 0x10;
    if (0x10 < unaff_ESI - 0x10) {
      uVar29 = unaff_ESI;
    }
    if ((int)uVar29 < 3) {
      iVar13 = uVar29 + 2;
    }
    else {
      iVar13 = 4;
      if (uVar29 != 3) {
        if (uVar29 == 4) {
          iVar13 = 8;
        }
        else {
          iVar13 = 4;
          if (0x3f < (int)uVar29) {
            iVar13 = 0;
            if (uVar29 - 0x40 < 7) {
              iVar13 = *(int *)(&g_023d5174 + (int64_t)(int)(uVar29 - 0x40) * 4);
            }
          }
        }
      }
    }
  }
  if (param_4 != 0x44) {
    uVar29 = param_4 - 0x10;
    if (0x10 < param_4 - 0x10) {
      uVar29 = param_4;
    }
    if ((int)uVar29 < 3) {
      iVar14 = uVar29 + 2;
    }
    else if (uVar29 != 3) {
      if (uVar29 == 4) {
        iVar14 = 8;
      }
      else if (0x3f < (int)uVar29) {
        iVar14 = 0;
        if (uVar29 - 0x40 < 7) {
          iVar14 = *(int *)(&g_023d5174 + (int64_t)(int)(uVar29 - 0x40) * 4);
        }
      }
    }
  }
  iVar15 = FUN_00ae6ec0();
  if (iVar15 == 0x44) {
    iVar16 = FUN_00ae6ec0();
    if ((iVar16 == 0x44) && ((int)unaff_ESI < 0x10 == (int)param_4 < 0x10)) {
      if (local_res18 == 0) {
        return;
      }
      lVar17 = (int64_t)local_res8;
      lVar19 = (int64_t)param_2;
      uVar29 = local_res18 - 1;
      if ((local_res18 & 7) == 0) {
        puVar25 = (void*)(param_3 + (int64_t)local_res10 * 4);
        puVar30 = (void*)(this_ptr + (int64_t)param_1 * 4);
      }
      else {
        puVar30 = (void*)(this_ptr + (int64_t)param_1 * 4);
        puVar25 = (void*)(param_3 + (int64_t)local_res10 * 4);
        uVar28 = 0;
        do {
          *puVar25 = *puVar30;
          uVar28 = uVar28 + 1;
          puVar30 = puVar30 + lVar19;
          puVar25 = puVar25 + lVar17;
        } while ((local_res18 & 7) != uVar28);
        local_res18 = local_res18 - uVar28;
      }
      if (uVar29 < 7) {
        return;
      }
      do {
        *puVar25 = *puVar30;
        puVar25[lVar17] = puVar30[lVar19];
        puVar25[lVar17 * 2] = puVar30[lVar19 * 2];
        puVar25[lVar17 * 3] = puVar30[lVar19 * 3];
        puVar25[lVar17 * 4] = puVar30[lVar19 * 4];
        puVar25[lVar17 * 5] = puVar30[lVar19 * 5];
        puVar25[lVar17 * 6] = puVar30[lVar19 * 6];
        puVar1 = puVar30 + lVar19 * 7;
        puVar30 = puVar30 + lVar19 * 8;
        puVar25[lVar17 * 7] = *puVar1;
        puVar25 = puVar25 + lVar17 * 8;
        local_res18 = local_res18 - 8;
      } while (local_res18 != 0);
      return;
    }
  }
  if (param_4 == 0x44) {
    if (unaff_ESI == 0x11) {
      if (local_res18 == 0) {
        return;
      }
      lVar19 = (int64_t)local_res8;
      lVar17 = (int64_t)param_2 * 3;
      pfVar27 = (float *)(param_3 + (int64_t)local_res10 * 4);
      pbVar41 = (byte *)(this_ptr + param_1 * 3);
      uVar29 = local_res18;
      if ((local_res18 & 1) != 0) {
        *pfVar27 = (float)(int)((uint)*pbVar41 << 8 |
                               (uint)pbVar41[1] << 0x10 | (uint)pbVar41[2] << 0x18) * g_023d4ff0;
        pfVar27 = pfVar27 + lVar19;
        pbVar41 = pbVar41 + lVar17;
        uVar29 = local_res18 - 1;
      }
      fVar3 = g_023d4ff0;
      if (local_res18 == 1) {
        return;
      }
      pbVar41 = pbVar41 + 2;
      do {
        *pfVar27 = (float)(int)((uint)pbVar41[-2] << 8 |
                               (uint)pbVar41[-1] << 0x10 | (uint)*pbVar41 << 0x18) * fVar3;
        pbVar18 = pbVar41 + lVar17;
        pbVar32 = pbVar41 + lVar17 + -1;
        pbVar2 = pbVar41 + lVar17 + -2;
        pbVar41 = pbVar41 + (int64_t)param_2 * 6;
        pfVar27[lVar19] =
             (float)(int)((uint)*pbVar2 << 8 | (uint)*pbVar32 << 0x10 | (uint)*pbVar18 << 0x18) *
             fVar3;
        pfVar27 = pfVar27 + lVar19 * 2;
        uVar29 = uVar29 - 2;
      } while (uVar29 != 0);
      return;
    }
    if (unaff_ESI == 1) {
      if (local_res18 == 0) {
        return;
      }
      lVar19 = (int64_t)local_res8;
      lVar17 = (int64_t)param_2 * 3;
      pfVar27 = (float *)(param_3 + (int64_t)local_res10 * 4);
      pbVar41 = (byte *)(this_ptr + param_1 * 3);
      uVar29 = local_res18;
      if ((local_res18 & 1) != 0) {
        *pfVar27 = (float)(int)((uint)pbVar41[2] << 8 |
                               (uint)pbVar41[1] << 0x10 | (uint)*pbVar41 << 0x18) * g_023d4ff0;
        pfVar27 = pfVar27 + lVar19;
        pbVar41 = pbVar41 + lVar17;
        uVar29 = local_res18 - 1;
      }
      fVar3 = g_023d4ff0;
      if (local_res18 == 1) {
        return;
      }
      do {
        *pfVar27 = (float)(int)((uint)pbVar41[2] << 8 |
                               (uint)pbVar41[1] << 0x10 | (uint)*pbVar41 << 0x18) * fVar3;
        pbVar18 = pbVar41 + lVar17;
        pbVar32 = pbVar41 + lVar17 + 1;
        pbVar2 = pbVar41 + lVar17 + 2;
        pbVar41 = pbVar41 + (int64_t)param_2 * 6;
        pfVar27[lVar19] =
             (float)(int)((uint)*pbVar2 << 8 | (uint)*pbVar32 << 0x10 | (uint)*pbVar18 << 0x18) *
             fVar3;
        pfVar27 = pfVar27 + lVar19 * 2;
        uVar29 = uVar29 - 2;
      } while (uVar29 != 0);
      return;
    }
    if (unaff_ESI == 0) {
      if (local_res18 == 0) {
        return;
      }
      lVar19 = (int64_t)local_res8;
      lVar17 = (int64_t)param_2;
      pfVar27 = (float *)(param_3 + (int64_t)local_res10 * 4);
      puVar40 = (ushort *)(this_ptr + param_1 * 2);
      uVar29 = local_res18;
      if ((local_res18 & 1) != 0) {
        *pfVar27 = (float)(int)(short)(*puVar40 << 8 | *puVar40 >> 8) * g_023d4ff4;
        pfVar27 = pfVar27 + lVar19;
        puVar40 = puVar40 + lVar17;
        uVar29 = local_res18 - 1;
      }
      fVar3 = g_023d4ff4;
      if (local_res18 == 1) {
        return;
      }
      do {
        *pfVar27 = (float)(int)(short)(*puVar40 << 8 | *puVar40 >> 8) * fVar3;
        puVar38 = puVar40 + lVar17;
        puVar40 = puVar40 + lVar17 * 2;
        pfVar27[lVar19] = (float)(int)(short)(*puVar38 << 8 | *puVar38 >> 8) * fVar3;
        pfVar27 = pfVar27 + lVar19 * 2;
        uVar29 = uVar29 - 2;
      } while (uVar29 != 0);
      return;
    }
  }
  switch(iVar13) {
  case 1:
    iVar15 = (uint)(unaff_ESI != 0x43) * 5 + 1;
    lVar22 = 0;
    lVar19 = 0;
    lVar17 = 0;
    lVar21 = 0;
    lVar42 = this_ptr;
    goto LAB_00ae846f;
  case 2:
    iVar15 = 2;
    lVar22 = 0;
    break;
  case 3:
    iVar15 = 3;
    lVar22 = this_ptr;
    break;
  case 4:
    if (iVar15 == 0x44) {
      iVar15 = 5;
      lVar17 = 0;
      lVar19 = this_ptr;
    }
    else {
      iVar15 = 4;
      lVar19 = 0;
      lVar17 = this_ptr;
    }
    lVar22 = 0;
    lVar21 = 0;
    goto LAB_00ae846c;
  default:
    goto switchD_00ae82ca_default;
  }
  lVar19 = 0;
  lVar17 = 0;
  lVar21 = this_ptr;
LAB_00ae846c:
  lVar42 = 0;
LAB_00ae846f:
  lVar35 = 0;
  lVar37 = 0;
  lVar26 = 0;
  lVar20 = 0;
  lVar36 = param_3;
  iVar16 = iVar14;
  switch(iVar14) {
  case 1:
    iVar16 = (uint)(param_4 != 0x43) * 5 + 1;
    lVar36 = 0;
    lVar35 = 0;
    lVar37 = 0;
    lVar26 = 0;
    lVar20 = param_3;
    break;
  case 2:
    iVar16 = 2;
    lVar35 = 0;
    lVar37 = 0;
    lVar26 = param_3;
    goto LAB_00ae852c;
  case 3:
    break;
  case 4:
    iVar16 = FUN_00ae6ec0();
    if (iVar16 == 0x44) {
      iVar16 = 5;
      lVar35 = param_3;
      lVar37 = 0;
    }
    else {
      iVar16 = 4;
      lVar35 = 0;
      lVar37 = param_3;
    }
    lVar26 = 0;
LAB_00ae852c:
    lVar36 = 0;
    lVar20 = 0;
    break;
  default:
    goto switchD_00ae82ca_default;
  }
  lVar33 = (int64_t)param_1;
  pbVar41 = (byte *)(lVar42 + lVar33);
  if (lVar42 == 0) {
    pbVar41 = (byte *)0x0;
  }
  puVar40 = (ushort *)(lVar21 + lVar33 * 2);
  if (lVar21 == 0) {
    puVar40 = (ushort *)0x0;
  }
  local_70 = (uint *)(lVar17 + lVar33 * 4);
  if (lVar17 == 0) {
    local_70 = (uint *)0x0;
  }
  local_68 = (float *)(lVar19 + lVar33 * 4);
  if (lVar19 == 0) {
    local_68 = (float *)0x0;
  }
  local_50 = (byte *)(iVar13 * param_1 + lVar22);
  if (lVar22 == 0) {
    local_50 = (byte *)0x0;
  }
  lVar17 = (int64_t)local_res10;
  pbVar18 = (byte *)(lVar20 + lVar17);
  if (lVar20 == 0) {
    pbVar18 = (byte *)0x0;
  }
  puVar38 = (ushort *)(lVar26 + lVar17 * 2);
  if (lVar26 == 0) {
    puVar38 = (ushort *)0x0;
  }
  local_a0 = (uint *)(lVar37 + lVar17 * 4);
  if (lVar37 == 0) {
    local_a0 = (uint *)0x0;
  }
  local_60 = (float *)(lVar35 + lVar17 * 4);
  if (lVar35 == 0) {
    local_60 = (float *)0x0;
  }
  pbVar32 = (byte *)(iVar14 * local_res10 + lVar36);
  if (lVar36 == 0) {
    pbVar32 = (byte *)0x0;
  }
  lVar19 = (int64_t)param_2;
  if ((int)unaff_ESI < 0x10) {
    if (iVar15 == 2) {
      if (0 < (int)local_res18) {
        uVar29 = local_res18 & 3;
        if (2 < local_res18 - 1) {
          iVar13 = -(local_res18 & 0xfffffffc);
          do {
            puVar34 = puVar40;
            *puVar34 = *puVar34 << 8 | *puVar34 >> 8;
            puVar40 = puVar34 + lVar19;
            *puVar40 = *puVar40 << 8 | *puVar40 >> 8;
            puVar40 = puVar34 + lVar19 * 2;
            *puVar40 = *puVar40 << 8 | *puVar40 >> 8;
            puVar40 = puVar34 + lVar19 * 3;
            *puVar40 = *puVar40 << 8 | *puVar40 >> 8;
            iVar13 = iVar13 + 4;
            puVar40 = puVar34 + lVar19 * 4;
          } while (iVar13 != 0);
          puVar40 = puVar34 + lVar19 * 4;
        }
        for (; uVar29 != 0; uVar29 = uVar29 - 1) {
          *puVar40 = *puVar40 << 8 | *puVar40 >> 8;
          puVar40 = puVar40 + lVar19;
        }
      }
      puVar40 = (ushort *)(this_ptr + lVar33 * 2);
    }
    else if (iVar15 == 4) {
      if (0 < (int)local_res18) {
        uVar29 = local_res18 & 3;
        if (2 < local_res18 - 1) {
          iVar13 = -(local_res18 & 0xfffffffc);
          do {
            puVar31 = local_70;
            uVar28 = *puVar31;
            *puVar31 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 |
                       uVar28 << 0x18;
            uVar28 = puVar31[lVar19];
            puVar31[lVar19] =
                 uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18
            ;
            uVar28 = puVar31[lVar19 * 2];
            puVar31[lVar19 * 2] =
                 uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18
            ;
            uVar28 = puVar31[lVar19 * 3];
            puVar31[lVar19 * 3] =
                 uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18
            ;
            iVar13 = iVar13 + 4;
            local_70 = puVar31 + lVar19 * 4;
          } while (iVar13 != 0);
          local_70 = puVar31 + lVar19 * 4;
        }
        for (; uVar29 != 0; uVar29 = uVar29 - 1) {
          uVar28 = *local_70;
          *local_70 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 |
                      uVar28 << 0x18;
          local_70 = local_70 + lVar19;
        }
      }
      local_70 = (uint *)(this_ptr + lVar33 * 4);
    }
    else if (iVar15 == 5) {
      if (0 < (int)local_res18) {
        uVar29 = local_res18 & 3;
        if (2 < local_res18 - 1) {
          iVar13 = -(local_res18 & 0xfffffffc);
          do {
            pfVar27 = local_68;
            fVar3 = *pfVar27;
            *pfVar27 = (float)((uint)fVar3 >> 0x18 | ((uint)fVar3 & 0xff0000) >> 8 |
                               ((uint)fVar3 & 0xff00) << 8 | (int)fVar3 << 0x18);
            fVar3 = pfVar27[lVar19];
            pfVar27[lVar19] =
                 (float)((uint)fVar3 >> 0x18 | ((uint)fVar3 & 0xff0000) >> 8 |
                         ((uint)fVar3 & 0xff00) << 8 | (int)fVar3 << 0x18);
            fVar3 = pfVar27[lVar19 * 2];
            pfVar27[lVar19 * 2] =
                 (float)((uint)fVar3 >> 0x18 | ((uint)fVar3 & 0xff0000) >> 8 |
                         ((uint)fVar3 & 0xff00) << 8 | (int)fVar3 << 0x18);
            fVar3 = pfVar27[lVar19 * 3];
            pfVar27[lVar19 * 3] =
                 (float)((uint)fVar3 >> 0x18 | ((uint)fVar3 & 0xff0000) >> 8 |
                         ((uint)fVar3 & 0xff00) << 8 | (int)fVar3 << 0x18);
            iVar13 = iVar13 + 4;
            local_68 = pfVar27 + lVar19 * 4;
          } while (iVar13 != 0);
          local_68 = pfVar27 + lVar19 * 4;
        }
        for (; uVar29 != 0; uVar29 = uVar29 - 1) {
          fVar3 = *local_68;
          *local_68 = (float)((uint)fVar3 >> 0x18 | ((uint)fVar3 & 0xff0000) >> 8 |
                              ((uint)fVar3 & 0xff00) << 8 | (int)fVar3 << 0x18);
          local_68 = local_68 + lVar19;
        }
      }
      local_68 = (float *)(this_ptr + lVar33 * 4);
    }
  }
  fVar12 = g_023e16e0;
  fVar11 = g_023d5000;
  fVar10 = g_023d4ffc;
  fVar9 = g_023d4ff8;
  fVar8 = g_023d4ff4;
  fVar7 = g_023d4ff0;
  fVar6 = g_02394220;
  fVar5 = g_02390d00;
  fVar4 = g_02390124;
  fVar3 = g_0239011c;
  lVar21 = (int64_t)(param_2 * 3 + -3);
  lVar22 = lVar21 + 3;
  lVar42 = (int64_t)local_res8;
  if (unaff_ESI == param_4) {
    if (0 < (int)local_res18) {
      iVar15 = iVar15 + -1;
      switch(iVar15) {
      case 0:
        uVar29 = local_res18 & 7;
        if (6 < local_res18 - 1) {
          iVar13 = -(local_res18 & 0xfffffff8);
          do {
            *pbVar18 = *pbVar41;
            pbVar18[lVar42] = pbVar41[lVar19];
            pbVar18[lVar42 * 2] = pbVar41[lVar19 * 2];
            pbVar18[lVar42 * 3] = pbVar41[lVar19 * 3];
            pbVar18[lVar42 * 4] = pbVar41[lVar19 * 4];
            pbVar18[lVar42 * 5] = pbVar41[lVar19 * 5];
            pbVar18[lVar42 * 6] = pbVar41[lVar19 * 6];
            pbVar32 = pbVar41 + lVar19 * 7;
            pbVar41 = pbVar41 + lVar19 * 8;
            pbVar18[lVar42 * 7] = *pbVar32;
            pbVar18 = pbVar18 + lVar42 * 8;
            iVar13 = iVar13 + 8;
          } while (iVar13 != 0);
        }
        for (; uVar29 != 0; uVar29 = uVar29 - 1) {
          *pbVar18 = *pbVar41;
          pbVar41 = pbVar41 + lVar19;
          pbVar18 = pbVar18 + lVar42;
        }
        break;
      case 1:
        uVar29 = local_res18 & 7;
        if (6 < local_res18 - 1) {
          iVar13 = -(local_res18 & 0xfffffff8);
          do {
            puVar39 = puVar38;
            puVar34 = puVar40;
            *puVar39 = *puVar34;
            puVar39[lVar42] = puVar34[lVar19];
            puVar39[lVar42 * 2] = puVar34[lVar19 * 2];
            puVar39[lVar42 * 3] = puVar34[lVar19 * 3];
            puVar39[lVar42 * 4] = puVar34[lVar19 * 4];
            puVar39[lVar42 * 5] = puVar34[lVar19 * 5];
            puVar39[lVar42 * 6] = puVar34[lVar19 * 6];
            puVar39[lVar42 * 7] = puVar34[lVar19 * 7];
            iVar13 = iVar13 + 8;
            puVar40 = puVar34 + lVar19 * 8;
            puVar38 = puVar39 + lVar42 * 8;
          } while (iVar13 != 0);
          puVar40 = puVar34 + lVar19 * 8;
          puVar38 = puVar39 + lVar42 * 8;
        }
        for (; uVar29 != 0; uVar29 = uVar29 - 1) {
          *puVar38 = *puVar40;
          puVar40 = puVar40 + lVar19;
          puVar38 = puVar38 + lVar42;
        }
        break;
      case 2:
        if (local_res18 != 1) {
          lVar19 = (int64_t)(local_res8 * 3 + -3);
          iVar13 = -(local_res18 & 0xfffffffe);
          do {
            *pbVar32 = *local_50;
            pbVar32[1] = local_50[1];
            pbVar32[2] = local_50[2];
            pbVar32[lVar19 + 3] = local_50[lVar22];
            pbVar32[lVar19 + 4] = local_50[lVar21 + 4];
            pbVar41 = local_50 + lVar21 + 5;
            local_50 = local_50 + lVar22 * 2;
            pbVar32[lVar19 + 5] = *pbVar41;
            pbVar32 = pbVar32 + (lVar19 + 3) * 2;
            iVar13 = iVar13 + 2;
          } while (iVar13 != 0);
        }
        if ((local_res18 & 1) != 0) {
          *pbVar32 = *local_50;
          pbVar32[1] = local_50[1];
          pbVar32[2] = local_50[2];
        }
        break;
      default:
        if (local_res18 != 1) {
          iVar13 = -(local_res18 & 0xfffffffe);
          do {
            switch(iVar15) {
            case 0:
            case 5:
              *pbVar18 = *pbVar41;
              pbVar41 = pbVar41 + lVar19;
              pbVar18 = pbVar18 + lVar42;
              break;
            case 3:
              *local_a0 = *local_70;
              local_70 = local_70 + lVar19;
              local_a0 = local_a0 + lVar42;
              break;
            case 4:
              *local_60 = *local_68;
              local_68 = local_68 + lVar19;
              local_60 = local_60 + lVar42;
            }
            switch(iVar15) {
            case 0:
            case 5:
              *pbVar18 = *pbVar41;
              pbVar41 = pbVar41 + lVar19;
              pbVar18 = pbVar18 + lVar42;
              break;
            case 3:
              *local_a0 = *local_70;
              local_70 = local_70 + lVar19;
              local_a0 = local_a0 + lVar42;
              break;
            case 4:
              *local_60 = *local_68;
              local_68 = local_68 + lVar19;
              local_60 = local_60 + lVar42;
            }
            iVar13 = iVar13 + 2;
          } while (iVar13 != 0);
        }
        if ((local_res18 & 1) != 0) {
          switch(iVar15) {
          case 0:
          case 5:
            *pbVar18 = *pbVar41;
            break;
          case 3:
            *local_a0 = *local_70;
            break;
          case 4:
            *local_60 = *local_68;
          }
        }
        break;
      case 5:
        uVar29 = local_res18 & 7;
        if (6 < local_res18 - 1) {
          iVar13 = -(local_res18 & 0xfffffff8);
          do {
            *pbVar18 = *pbVar41;
            pbVar18[lVar42] = pbVar41[lVar19];
            pbVar18[lVar42 * 2] = pbVar41[lVar19 * 2];
            pbVar18[lVar42 * 3] = pbVar41[lVar19 * 3];
            pbVar18[lVar42 * 4] = pbVar41[lVar19 * 4];
            pbVar18[lVar42 * 5] = pbVar41[lVar19 * 5];
            pbVar18[lVar42 * 6] = pbVar41[lVar19 * 6];
            pbVar32 = pbVar41 + lVar19 * 7;
            pbVar41 = pbVar41 + lVar19 * 8;
            pbVar18[lVar42 * 7] = *pbVar32;
            pbVar18 = pbVar18 + lVar42 * 8;
            iVar13 = iVar13 + 8;
          } while (iVar13 != 0);
        }
        for (; uVar29 != 0; uVar29 = uVar29 - 1) {
          *pbVar18 = *pbVar41;
          pbVar41 = pbVar41 + lVar19;
          pbVar18 = pbVar18 + lVar42;
        }
      }
    }
  }
  else if (0 < (int)local_res18) {
    uVar29 = local_res18;
    do {
      switch(iVar15) {
      case 1:
        fVar43 = (float)(int)(char)*pbVar41 * fVar9;
        pbVar41 = pbVar41 + lVar19;
        break;
      case 2:
        fVar43 = (float)(int)(short)*puVar40 * fVar8;
        puVar40 = puVar40 + lVar19;
        goto joined_r0x00ae8b4b;
      case 3:
        pbVar23 = local_50 + 2;
        pbVar2 = local_50;
        if (0xf < (int)unaff_ESI) {
          pbVar23 = local_50;
          pbVar2 = local_50 + 2;
        }
        fVar43 = (float)(int)((uint)*pbVar23 << 8 | (uint)local_50[1] << 0x10 |
                             (uint)*pbVar2 << 0x18) * fVar7;
        local_50 = local_50 + lVar22;
joined_r0x00ae8b4b:
        if (iVar16 - 1U < 6) goto LAB_00ae8bc0;
        goto LAB_00ae8a77;
      case 4:
        fVar43 = (float)(int)*local_70 * fVar7;
        local_70 = local_70 + lVar19;
        break;
      case 5:
        fVar43 = *local_68;
        local_68 = local_68 + lVar19;
        break;
      case 6:
        fVar43 = ((float)*pbVar41 + (float)*pbVar41) / fVar6 + fVar5;
        pbVar41 = pbVar41 + lVar19;
        break;
      default:
        fVar43 = 0.0;
      }
      if (5 < iVar16 - 1U) goto LAB_00ae8a77;
LAB_00ae8bc0:
      switch((int64_t)&switchD_00ae8bc7::switchdataD_00ae94a8 +
             (int64_t)(int)(&switchD_00ae8bc7::switchdataD_00ae94a8)[iVar16 - 1]) {
      case 0xae8a69:
        fVar43 = fVar43 * fVar11;
        goto LAB_00ae8a6e;
      case 0xae8bc9:
        *puVar38 = (ushort)(int)(fVar43 * fVar10);
        puVar38 = puVar38 + lVar42;
        break;
      case 0xae8bdf:
        uVar28 = (uint)(fVar43 * fVar12);
        *pbVar32 = (byte)(uVar28 >> (((int)param_4 < 0x10) << 4 | 8U));
        pbVar32[1] = (byte)(uVar28 >> 0x10);
        pbVar32[2] = (byte)(uVar28 >> ((0xf < (int)param_4) << 4 | 8U));
        pbVar32 = pbVar32 + (int64_t)(local_res8 * 3 + -3) + 3;
        break;
      case 0xae8c12:
        *local_a0 = (int)(fVar43 * fVar12);
        local_a0 = local_a0 + lVar42;
        break;
      case 0xae8c33:
        *local_60 = fVar43;
        local_60 = local_60 + lVar42;
        break;
      case 0xae8c48:
        fVar43 = (fVar43 + fVar4) * fVar6 * fVar3;
LAB_00ae8a6e:
        *pbVar18 = (byte)(int)fVar43;
        pbVar18 = pbVar18 + lVar42;
      }
LAB_00ae8a77:
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
  }
  if ((int)param_4 < 0x10) {
    if (iVar16 == 5) {
      if (0 < (int)local_res18) {
        uVar29 = local_res18 & 3;
        if (local_res18 - 1 < 3) {
          puVar24 = (uint *)(param_3 + lVar17 * 4);
        }
        else {
          iVar13 = -(local_res18 & 0xfffffffc);
          puVar31 = (uint *)(param_3 + lVar17 * 4);
          do {
            puVar24 = puVar31;
            uVar28 = *puVar24;
            *puVar24 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 |
                       uVar28 << 0x18;
            uVar28 = puVar24[lVar42];
            puVar24[lVar42] =
                 uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18
            ;
            uVar28 = puVar24[lVar42 * 2];
            puVar24[lVar42 * 2] =
                 uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18
            ;
            uVar28 = puVar24[lVar42 * 3];
            puVar24[lVar42 * 3] =
                 uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18
            ;
            iVar13 = iVar13 + 4;
            puVar31 = puVar24 + lVar42 * 4;
          } while (iVar13 != 0);
          puVar24 = puVar24 + lVar42 * 4;
        }
        for (; uVar29 != 0; uVar29 = uVar29 - 1) {
          uVar28 = *puVar24;
          *puVar24 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 |
                     uVar28 << 0x18;
          puVar24 = puVar24 + lVar42;
        }
      }
    }
    else if (iVar16 == 4) {
      if (0 < (int)local_res18) {
        uVar29 = local_res18 & 3;
        if (local_res18 - 1 < 3) {
          puVar24 = (uint *)(param_3 + lVar17 * 4);
        }
        else {
          iVar13 = -(local_res18 & 0xfffffffc);
          puVar31 = (uint *)(param_3 + lVar17 * 4);
          do {
            puVar24 = puVar31;
            uVar28 = *puVar24;
            *puVar24 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 |
                       uVar28 << 0x18;
            uVar28 = puVar24[lVar42];
            puVar24[lVar42] =
                 uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18
            ;
            uVar28 = puVar24[lVar42 * 2];
            puVar24[lVar42 * 2] =
                 uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18
            ;
            uVar28 = puVar24[lVar42 * 3];
            puVar24[lVar42 * 3] =
                 uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 | uVar28 << 0x18
            ;
            iVar13 = iVar13 + 4;
            puVar31 = puVar24 + lVar42 * 4;
          } while (iVar13 != 0);
          puVar24 = puVar24 + lVar42 * 4;
        }
        for (; uVar29 != 0; uVar29 = uVar29 - 1) {
          uVar28 = *puVar24;
          *puVar24 = uVar28 >> 0x18 | (uVar28 & 0xff0000) >> 8 | (uVar28 & 0xff00) << 8 |
                     uVar28 << 0x18;
          puVar24 = puVar24 + lVar42;
        }
      }
    }
    else if ((iVar16 == 2) && (0 < (int)local_res18)) {
      uVar29 = local_res18 & 3;
      if (local_res18 - 1 < 3) {
        puVar38 = (ushort *)(param_3 + lVar17 * 2);
      }
      else {
        iVar13 = -(local_res18 & 0xfffffffc);
        puVar40 = (ushort *)(param_3 + lVar17 * 2);
        do {
          puVar38 = puVar40;
          *puVar38 = *puVar38 << 8 | *puVar38 >> 8;
          puVar40 = puVar38 + lVar42;
          *puVar40 = *puVar40 << 8 | *puVar40 >> 8;
          puVar40 = puVar38 + lVar42 * 2;
          *puVar40 = *puVar40 << 8 | *puVar40 >> 8;
          puVar40 = puVar38 + lVar42 * 3;
          *puVar40 = *puVar40 << 8 | *puVar40 >> 8;
          iVar13 = iVar13 + 4;
          puVar40 = puVar38 + lVar42 * 4;
        } while (iVar13 != 0);
        puVar38 = puVar38 + lVar42 * 4;
      }
      for (; uVar29 != 0; uVar29 = uVar29 - 1) {
        *puVar38 = *puVar38 << 8 | *puVar38 >> 8;
        puVar38 = puVar38 + lVar42;
      }
    }
  }
switchD_00ae82ca_default:
  return;
}

