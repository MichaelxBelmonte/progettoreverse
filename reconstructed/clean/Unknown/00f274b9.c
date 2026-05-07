// Function: FUN_00f274b9
// Address: 00f274b9
// Size: 8458 bytes
// Class: Unknown

uint64_t * FUN_00f274b9(uint64_t *param_1,int64_t param_2,uint64_t *param_3,uint param_4)

{
  byte *pbVar1;
  void*puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  sbyte sVar9;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  uint64_t *puVar15;
  byte *pbVar16;
  byte **ppbVar17;
  byte *pbVar18;
  uint64_t uVar19;
  uint64_t *puVar20;
  uint64_t *puVar21;
  uint64_t *arg1;
  byte *pbVar22;
  uint64_t *puVar23;
  void*this_ptr;
  uint64_t *puVar24;
  size_t sVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint64_t *puVar30;
  uint uVar31;
  void*puVar32;
  uint64_t uVar33;
  uint64_t *puVar34;
  uint32_t uVar35;
  uint64_t local_228;
  uint64_t *local_218;
  uint64_t local_210;
  uint local_208;
  uint64_t *local_200;
  int64_t local_1e8;
  int64_t local_1e0;
  byte *local_1d8;
  int64_t local_1d0;
  int64_t local_1c8;
  int64_t local_1c0;
  byte *local_1b8 [3];
  uint64_t *local_1a0;
  uint local_194;
  byte *local_190;
  uint64_t *local_188;
  uint64_t *local_180;
  uint64_t *local_178;
  uint64_t *local_170;
  int64_t local_168;
  void *local_160;
  uint64_t *local_158;
  uint64_t *local_150;
  uint64_t *local_148;
  uint64_t local_f8 [24];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  iVar26 = *(int *)(this_ptr + 0xed4);
  if (iVar26 == 1) {
    pbVar16 = (byte *)this_ptr[0xed2];
  }
  else {
    pbVar16 = (byte *)(param_2 + (int64_t)arg1);
  }
  local_148 = (uint64_t *)this_ptr[0xeb5];
  puVar12 = (uint64_t *)this_ptr[0xed3];
  puVar24 = arg1;
  if (param_4 != 0) {
    puVar23 = (uint64_t *)this_ptr[0xe99];
    local_168 = this_ptr[0xe9a];
    local_160 = (void *)this_ptr[0xe9b];
    *(void*)((int64_t)this_ptr + 0x7534) = 1;
    lVar11 = 0;
    do {
      local_1b8[lVar11] = (byte *)(uint64_t)*(uint *)((int64_t)this_ptr + lVar11 * 4 + 0x683c);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 3);
    uVar28 = 8;
    if ((int)param_4 < 8) {
      uVar28 = param_4;
    }
    local_180 = (uint64_t *)0xffffffffffffffec;
    puVar21 = local_180;
    if (param_3 == (uint64_t *)0x0) goto LAB_00f28b33;
    puVar34 = param_1 + 1;
    if (param_3 < &MACH_HEADER.cpusubtype) {
      local_210 = (uint64_t)(byte)*param_1;
      switch(param_3) {
      case (uint64_t *)0x7:
        local_210 = local_210 | (uint64_t)*(byte *)((int64_t)param_1 + 6) << 0x30;
      case (uint64_t *)0x6:
        local_210 = local_210 + ((uint64_t)*(byte *)((int64_t)param_1 + 5) << 0x28);
      case (uint64_t *)0x5:
        local_210 = local_210 + ((uint64_t)*(byte *)((int64_t)param_1 + 4) << 0x20);
      case (uint64_t *)0x4:
        local_210 = local_210 + (uint64_t)*(byte *)((int64_t)param_1 + 3) * 0x1000000;
      case (uint64_t *)0x3:
        local_210 = local_210 + (uint64_t)*(byte *)((int64_t)param_1 + 2) * 0x10000;
      case (uint64_t *)0x2:
        local_210 = (uint64_t)*(byte *)((int64_t)param_1 + 1) * 0x100 + local_210;
      }
      pbVar22 = (byte *)((int64_t)param_3 + -1);
      if (pbVar22[(int64_t)param_1] == 0) goto LAB_00f28b33;
      iVar26 = (int)param_3;
      param_3 = (uint64_t *)(uint64_t)(uint)(iVar26 * 8);
      local_208 = LZCOUNT((uint)pbVar22[(int64_t)param_1]) + iVar26 * -8 + 0x29;
      local_200 = param_1;
    }
    else {
      local_200 = (uint64_t *)((byte *)((int64_t)param_3 + (int64_t)param_1) + -8);
      local_210 = *local_200;
      if ((local_210 >> 0x38 == 0) ||
         (local_208 = LZCOUNT((uint)(byte)(local_210 >> 0x38)) - 0x17,
         (uint64_t *)0xffffffffffffff88 < param_3)) goto LAB_00f28b33;
    }
    local_194 = uVar28;
    local_170 = puVar12;
    uVar35 = FUN_00f295dc(param_1,*this_ptr);
    FUN_00f295dc(uVar35,this_ptr[2]);
    FUN_00f295dc();
    uVar14 = (uint64_t)local_208;
    pbVar22 = (byte *)0x0;
    iVar26 = (int)param_1;
    if (local_208 < 0x41) {
      pbVar18 = (byte *)0x0;
      pbVar22 = (byte *)0x0;
      if (0 < (int)local_194) {
        pbVar22 = (byte *)(uint64_t)local_194;
      }
      puVar12 = local_f8 + 2;
      local_218 = local_200;
      param_3 = local_200;
      do {
        if (param_3 < puVar34) {
          puVar21 = param_1;
          if (param_3 != param_1) {
            uVar33 = (uint64_t)(uint)((int)param_3 - iVar26);
            if (param_1 <= (uint64_t *)((int64_t)param_3 - (uVar14 >> 3))) {
              uVar33 = uVar14 >> 3;
            }
            uVar28 = (uint)uVar14 + (int)uVar33 * -8;
            goto LAB_00f27832;
          }
        }
        else {
          uVar33 = uVar14 >> 3;
          uVar28 = (uint)uVar14 & 7;
LAB_00f27832:
          local_218 = (uint64_t *)((int64_t)param_3 - uVar33);
          uVar14 = (uint64_t)uVar28;
          local_210 = *local_218;
          puVar21 = local_218;
          local_200 = local_218;
        }
        param_3 = puVar21;
        if (pbVar22 == pbVar18) goto LAB_00f27c63;
        local_188 = param_3;
        local_190 = pbVar18;
        puVar21 = (uint64_t *)(uint64_t)*(uint *)(local_1c0 + 4 + local_1c8 * 8);
        local_1a0 = puVar21;
        uVar28 = *(uint *)(local_1e0 + 4 + local_1e8 * 8);
        uVar33 = (uint64_t)uVar28;
        uVar31 = *(uint *)(local_1d0 + 4 + (int64_t)local_1d8 * 8);
        bVar3 = *(byte *)(local_1e0 + 2 + local_1e8 * 8);
        bVar4 = *(byte *)(local_1c0 + 2 + local_1c8 * 8);
        bVar5 = *(byte *)(local_1d0 + 2 + (int64_t)local_1d8 * 8);
        local_158 = (uint64_t *)(uint64_t)bVar3;
        local_178 = (uint64_t *)(uint64_t)*(ushort *)(local_1c0 + local_1c8 * 8);
        bVar6 = *(byte *)(local_1e0 + 3 + local_1e8 * 8);
        bVar7 = *(byte *)(local_1c0 + 3 + local_1c8 * 8);
        bVar8 = *(byte *)(local_1d0 + 3 + (int64_t)local_1d8 * 8);
        local_150 = (uint64_t *)(uint64_t)bVar8;
        if (bVar5 < 2) {
          if (bVar5 == 0) {
            local_1b8[0] = local_1b8[uVar28 == 0];
            ppbVar17 = local_1b8 + (uVar28 != 0);
          }
          else {
            uVar19 = uVar14 & 0x3f;
            uVar14 = (uint64_t)((int)uVar14 + 1);
            lVar11 = (uint64_t)(uVar31 + (uVar28 == 0)) - ((int64_t)(local_210 << uVar19) >> 0x3f)
            ;
            if (lVar11 == 3) {
              local_1b8[0] = local_1b8[0] + -1 + (local_1b8[0] + -1 == (byte *)0x0);
LAB_00f27bf5:
              local_1b8[2] = local_1b8[1];
            }
            else {
              local_1b8[0] = local_1b8[lVar11] + (local_1b8[lVar11] == (byte *)0x0);
              if (lVar11 != 1) goto LAB_00f27bf5;
            }
            ppbVar17 = local_1b8;
          }
        }
        else {
          uVar19 = uVar14 & 0x3f;
          uVar14 = (uint64_t)((int)uVar14 + (uint)bVar5);
          local_1b8[0] = (byte *)(((local_210 << uVar19) >> ((uint64_t)(byte)-bVar5 & 0x3f)) +
                                 (uint64_t)uVar31);
          local_1b8[2] = local_1b8[1];
          ppbVar17 = local_1b8;
        }
        local_1b8[1] = *ppbVar17;
        if (bVar4 != 0) {
          uVar19 = uVar14 & 0x3f;
          uVar14 = (uint64_t)((int)uVar14 + (uint)bVar4);
          puVar21 = (uint64_t *)
                    ((int64_t)puVar21 + ((local_210 << uVar19) >> ((uint64_t)(byte)-bVar4 & 0x3f))
                    );
        }
        puVar13 = local_218;
        if ((0x1e < (byte)(bVar4 + bVar3 + bVar5)) && (uVar28 = (uint)uVar14, uVar28 < 0x41)) {
          if (local_218 < puVar34) {
            param_3 = param_1;
            puVar13 = param_1;
            if (local_218 == param_1) goto LAB_00f279e0;
            uVar19 = (uint64_t)(uint)((int)local_218 - iVar26);
            if (param_1 <= (uint64_t *)((int64_t)local_218 - (uVar14 >> 3))) {
              uVar19 = uVar14 >> 3;
            }
            uVar28 = uVar28 + (int)uVar19 * -8;
          }
          else {
            uVar19 = uVar14 >> 3;
            uVar28 = uVar28 & 7;
          }
          local_200 = (uint64_t *)((int64_t)local_218 - uVar19);
          uVar14 = (uint64_t)uVar28;
          local_210 = *local_200;
          param_3 = local_200;
          puVar13 = local_200;
        }
LAB_00f279e0:
        local_218 = puVar13;
        iVar27 = (int)uVar14;
        if (bVar3 != 0) {
          iVar27 = iVar27 + (uint)bVar3;
          uVar33 = uVar33 + ((local_210 << (uVar14 & 0x3f)) >> ((uint64_t)(byte)-bVar3 & 0x3f));
        }
        sVar9 = (bVar6 < 0x41) * ('@' - bVar6);
        local_1e8 = (((local_210 >> ((uint64_t)(byte)-(char)(iVar27 + (uint)bVar6) & 0x3f)) <<
                     sVar9) >> sVar9) + (uint64_t)*(ushort *)(local_1e0 + local_1e8 * 8);
        iVar27 = iVar27 + (uint)bVar6 + (uint)bVar7;
        sVar9 = (bVar7 < 0x41) * ('@' - bVar7);
        local_1c8 = (((local_210 >> ((uint64_t)(byte)-(char)iVar27 & 0x3f)) << sVar9) >> sVar9) +
                    (int64_t)local_178;
        uVar28 = iVar27 + (uint)bVar8;
        uVar14 = (uint64_t)uVar28;
        sVar9 = (bVar8 < 0x41) * ('@' - bVar8);
        local_1d8 = (byte *)((((local_210 >> ((uint64_t)(byte)-(char)uVar28 & 0x3f)) << sVar9) >>
                             sVar9) + (uint64_t)*(ushort *)(local_1d0 + (int64_t)local_1d8 * 8));
        puVar12[-2] = uVar33;
        puVar12[-1] = (uint64_t)puVar21;
        *puVar12 = (uint64_t)local_1b8[0];
        pbVar18 = pbVar18 + 1;
        puVar12 = puVar12 + 3;
      } while (uVar28 < 0x41);
      pbVar22 = (byte *)((uint64_t)pbVar18 & 0xffffffff);
    }
    puVar21 = local_180;
    if ((int)pbVar22 < (int)local_194) goto LAB_00f28b33;
LAB_00f27c63:
    local_190 = pbVar16 + -0x20;
    local_188 = (uint64_t *)((int64_t)this_ptr + 0x76a4);
    while( true ) {
      uVar28 = (uint)uVar14;
      uVar31 = (uint)pbVar22;
      puVar21 = local_180;
      if (0x40 < uVar28) break;
      if (local_200 < puVar34) {
        if (local_200 != param_1) {
          uVar33 = (uint64_t)(uint)((int)local_200 - iVar26);
          if (param_1 <= (uint64_t *)((int64_t)local_200 - (uVar14 >> 3))) {
            uVar33 = uVar14 >> 3;
          }
          local_200 = (uint64_t *)((int64_t)local_200 - uVar33);
          uVar14 = (uint64_t)(uVar28 + (int)uVar33 * -8);
          local_210 = *local_200;
        }
      }
      else {
        local_200 = (uint64_t *)((int64_t)local_200 - (uVar14 >> 3));
        uVar14 = (uint64_t)(uVar28 & 7);
        local_210 = *local_200;
      }
      param_3 = local_200;
      if ((int)param_4 <= (int)uVar31) goto LAB_00f28b65;
      local_1a0 = puVar34;
      local_228 = (uint64_t)*(uint *)(local_1c0 + 4 + local_1c8 * 8);
      uVar28 = *(uint *)(local_1e0 + 4 + local_1e8 * 8);
      local_158 = (uint64_t *)(uint64_t)uVar28;
      uVar29 = *(uint *)(local_1d0 + 4 + (int64_t)local_1d8 * 8);
      bVar3 = *(byte *)(local_1e0 + 2 + local_1e8 * 8);
      bVar4 = *(byte *)(local_1c0 + 2 + local_1c8 * 8);
      bVar5 = *(byte *)(local_1d0 + 2 + (int64_t)local_1d8 * 8);
      bVar6 = *(byte *)(local_1e0 + 3 + local_1e8 * 8);
      bVar7 = *(byte *)(local_1c0 + 3 + local_1c8 * 8);
      local_150 = (uint64_t *)(uint64_t)*(ushort *)(local_1d0 + (int64_t)local_1d8 * 8);
      bVar8 = *(byte *)(local_1d0 + 3 + (int64_t)local_1d8 * 8);
      local_178 = (uint64_t *)(uint64_t)bVar7;
      if (1 < bVar5) {
        uVar33 = uVar14 & 0x3f;
        uVar14 = (uint64_t)((int)uVar14 + (uint)bVar5);
        pbVar22 = (byte *)(((local_210 << uVar33) >> ((uint64_t)(byte)-bVar5 & 0x3f)) +
                          (uint64_t)uVar29);
        goto LAB_00f27df3;
      }
      if (bVar5 == 0) {
        pbVar22 = local_1b8[uVar28 == 0];
        ppbVar17 = local_1b8 + (uVar28 != 0);
      }
      else {
        uVar33 = uVar14 & 0x3f;
        uVar14 = (uint64_t)((int)uVar14 + 1);
        lVar11 = (uint64_t)(uVar29 + (uVar28 == 0)) - ((int64_t)(local_210 << uVar33) >> 0x3f);
        if (lVar11 == 3) {
          pbVar22 = local_1b8[0] + -1 + (local_1b8[0] + -1 == (byte *)0x0);
LAB_00f27df3:
          local_1b8[2] = local_1b8[1];
        }
        else {
          pbVar22 = local_1b8[lVar11] + (local_1b8[lVar11] == (byte *)0x0);
          if (lVar11 != 1) goto LAB_00f27df3;
        }
        ppbVar17 = local_1b8;
      }
      local_1b8[1] = *ppbVar17;
      local_1b8[0] = pbVar22;
      if (bVar4 != 0) {
        uVar33 = uVar14 & 0x3f;
        uVar14 = (uint64_t)((int)uVar14 + (uint)bVar4);
        local_228 = local_228 + ((local_210 << uVar33) >> ((uint64_t)(byte)-bVar4 & 0x3f));
      }
      if ((0x1e < (byte)(bVar4 + bVar3 + bVar5)) && (uVar29 = (uint)uVar14, uVar29 < 0x41)) {
        if (local_200 < puVar34) {
          if (local_200 == param_1) goto LAB_00f27e8b;
          uVar33 = (uint64_t)(uint)((int)local_200 - iVar26);
          if (param_1 <= (uint64_t *)((int64_t)local_200 - (uVar14 >> 3))) {
            uVar33 = uVar14 >> 3;
          }
          uVar29 = uVar29 + (int)uVar33 * -8;
        }
        else {
          uVar33 = uVar14 >> 3;
          uVar29 = uVar29 & 7;
        }
        local_200 = (uint64_t *)((int64_t)local_200 - uVar33);
        uVar14 = (uint64_t)uVar29;
        local_210 = *local_200;
      }
LAB_00f27e8b:
      iVar27 = (int)uVar14;
      if (bVar3 != 0) {
        iVar27 = iVar27 + (uint)bVar3;
        local_158 = (uint64_t *)
                    ((int64_t)(uint64_t)uVar28 +
                    ((local_210 << (uVar14 & 0x3f)) >> ((uint64_t)(byte)-bVar3 & 0x3f)));
      }
      sVar9 = (bVar6 < 0x41) * ('@' - bVar6);
      local_1e8 = (((local_210 >> ((uint64_t)(byte)-(char)(iVar27 + (uint)bVar6) & 0x3f)) << sVar9)
                  >> sVar9) + (uint64_t)*(ushort *)(local_1e0 + local_1e8 * 8);
      iVar27 = iVar27 + (uint)bVar6 + (uint)bVar7;
      sVar9 = (bVar7 < 0x41) * ('@' - bVar7);
      local_1c8 = (((local_210 >> ((uint64_t)(byte)-(char)iVar27 & 0x3f)) << sVar9) >> sVar9) +
                  (uint64_t)*(ushort *)(local_1c0 + local_1c8 * 8);
      uVar28 = iVar27 + (uint)bVar8;
      uVar14 = local_210 >> ((uint64_t)(byte)-(char)uVar28 & 0x3f);
      sVar9 = (bVar8 < 0x41) * ('@' - bVar8);
      local_1d8 = (byte *)(((uVar14 << sVar9) >> sVar9) + (int64_t)local_150);
      if (*(int *)(this_ptr + 0xed4) == 2) {
        uVar19 = (uint64_t)(uVar31 & 7);
        param_3 = (uint64_t *)(uVar19 * 3);
        puVar12 = local_f8 + uVar19 * 3;
        uVar33 = *puVar12;
        puVar13 = (uint64_t *)((int64_t)local_148 + uVar33);
        if (puVar13 <= (uint64_t *)this_ptr[0xed3]) {
          pbVar18 = (byte *)((int64_t)local_148 + (uVar33 - 0x20));
          if (puVar13 <= local_170) {
            puVar32 = (void*)local_f8[uVar19 * 3 + 1];
            puVar12 = (uint64_t *)(puVar32 + uVar33);
            if ((byte *)((int64_t)puVar24 + (int64_t)puVar12) <= pbVar18) {
              uVar14 = local_f8[uVar19 * 3 + 2];
              puVar30 = (uint64_t *)((int64_t)puVar24 + uVar33);
              uVar19 = local_148[1];
              *puVar24 = *local_148;
              puVar24[1] = uVar19;
              if (0x10 < uVar33) {
                uVar19 = local_148[3];
                puVar24[2] = local_148[2];
                puVar24[3] = uVar19;
                if (0x10 < (int64_t)(uVar33 - 0x10)) {
                  lVar11 = 0;
                  do {
                    pbVar1 = (byte *)((int64_t)local_148 + lVar11 + 0x20);
                    uVar10 = *(void*)(pbVar1 + 8);
                    pbVar18 = (byte *)((int64_t)puVar24 + lVar11 + 0x20);
                    *(void*)pbVar18 = *(void*)pbVar1;
                    *(void*)(pbVar18 + 8) = uVar10;
                    pbVar1 = (byte *)((int64_t)local_148 + lVar11 + 0x30);
                    uVar10 = *(void*)(pbVar1 + 8);
                    *(void*)(pbVar18 + 0x10) = *(void*)pbVar1;
                    *(void*)(pbVar18 + 0x18) = uVar10;
                    lVar11 = lVar11 + 0x20;
                  } while (pbVar18 + 0x20 < puVar30);
                }
              }
              puVar20 = (uint64_t *)((int64_t)puVar30 - uVar14);
              local_148 = puVar13;
              if ((uint64_t)((int64_t)puVar30 - (int64_t)puVar23) < uVar14) {
                local_150 = puVar12;
                if ((uint64_t)((int64_t)puVar30 - local_168) < uVar14) goto LAB_00f28b33;
                lVar11 = (int64_t)puVar20 - (int64_t)puVar23;
                if ((void *)((int64_t)((int64_t)local_160 + lVar11) + (int64_t)puVar32) <=
                    local_160) {
                  _memmove(local_160,puVar32,(size_t)param_3);
                  puVar12 = local_150;
                  goto LAB_00f28447;
                }
                _memmove(local_160,(void *)-lVar11,(size_t)param_3);
                puVar30 = (uint64_t *)((int64_t)puVar30 - lVar11);
                puVar32 = puVar32 + lVar11;
                puVar20 = puVar23;
                puVar12 = local_150;
              }
              if (uVar14 < 0x10) {
                if (uVar14 < 8) {
                  iVar27 = *(int *)(&g_023e4ca0 + uVar14 * 4);
                  *(byte *)puVar30 = (byte)*puVar20;
                  *(byte *)((int64_t)puVar30 + 1) = *(byte *)((int64_t)puVar20 + 1);
                  *(byte *)((int64_t)puVar30 + 2) = *(byte *)((int64_t)puVar20 + 2);
                  *(byte *)((int64_t)puVar30 + 3) = *(byte *)((int64_t)puVar20 + 3);
                  pbVar18 = (byte *)((int64_t)puVar20 +
                                    (uint64_t)*(uint *)(&g_023e4c80 + uVar14 * 4));
                  puVar20 = (uint64_t *)
                            ((int64_t)puVar20 +
                            ((uint64_t)*(uint *)(&g_023e4c80 + uVar14 * 4) - (int64_t)iVar27));
                  *(void*)((int64_t)puVar30 + 4) = *(void*)pbVar18;
                }
                else {
                  *puVar30 = *puVar20;
                }
                if (&MACH_HEADER.cpusubtype < puVar32) {
                  puVar21 = puVar20 + 1;
                  puVar13 = puVar30 + 1;
                  if ((int64_t)puVar13 - (int64_t)puVar21 < 0x10) {
                    do {
                      *puVar13 = *puVar21;
                      puVar13 = puVar13 + 1;
                      puVar21 = puVar21 + 1;
                    } while (puVar13 < (uint64_t *)((int64_t)puVar30 + (int64_t)puVar32));
                  }
                  else {
                    uVar14 = puVar20[2];
                    *puVar13 = *puVar21;
                    puVar30[2] = uVar14;
                    if (0x18 < (int64_t)puVar32) {
                      lVar11 = 0;
                      do {
                        pbVar1 = (byte *)((int64_t)puVar20 + lVar11 + 0x18);
                        uVar10 = *(void*)(pbVar1 + 8);
                        pbVar18 = (byte *)((int64_t)puVar30 + lVar11 + 0x18);
                        *(void*)pbVar18 = *(void*)pbVar1;
                        *(void*)(pbVar18 + 8) = uVar10;
                        pbVar1 = (byte *)((int64_t)puVar20 + lVar11 + 0x28);
                        uVar10 = *(void*)(pbVar1 + 8);
                        *(void*)(pbVar18 + 0x10) = *(void*)pbVar1;
                        *(void*)(pbVar18 + 0x18) = uVar10;
                        lVar11 = lVar11 + 0x20;
                      } while (pbVar18 + 0x20 < (uint64_t *)((int64_t)puVar30 + (int64_t)puVar32)
                              );
                    }
                  }
                }
              }
              else {
                uVar14 = puVar20[1];
                *puVar30 = *puVar20;
                puVar30[1] = uVar14;
                if (0x10 < (int64_t)puVar32) {
                  lVar11 = 0x10;
                  do {
                    uVar10 = *(void*)((byte *)((int64_t)puVar20 + lVar11) + 8);
                    pbVar18 = (byte *)((int64_t)puVar30 + lVar11);
                    *(void*)pbVar18 = *(void*)((int64_t)puVar20 + lVar11);
                    *(void*)(pbVar18 + 8) = uVar10;
                    pbVar1 = (byte *)((int64_t)puVar20 + lVar11 + 0x10);
                    uVar10 = *(void*)(pbVar1 + 8);
                    *(void*)(pbVar18 + 0x10) = *(void*)pbVar1;
                    *(void*)(pbVar18 + 0x18) = uVar10;
                    lVar11 = lVar11 + 0x20;
                  } while (pbVar18 + 0x20 < puVar32 + (int64_t)puVar30);
                }
              }
              goto LAB_00f28447;
            }
          }
          param_3 = local_170;
          puVar12 = (uint64_t *)FUN_00f299af(&local_148,pbVar18,local_170,puVar23,local_160);
          goto LAB_00f28447;
        }
        uVar19 = (int64_t)this_ptr[0xed3] - (int64_t)local_148;
        local_150 = param_3;
        if (uVar19 != 0) {
          if ((uint64_t)((int64_t)pbVar16 - (int64_t)puVar24) < uVar19) goto LAB_00f295a2;
          FUN_00f29676(uVar14,uVar19);
          uVar33 = uVar33 - uVar19;
          *puVar12 = uVar33;
          puVar24 = (uint64_t *)((int64_t)puVar24 + uVar19);
        }
        local_148 = local_188;
        *(void*)(this_ptr + 0xed4) = 0;
        if ((int64_t)uVar33 < 0x10001) {
          puVar32 = (void*)local_f8[(int64_t)((int64_t)local_150 + 1)];
          puVar13 = (uint64_t *)(puVar32 + uVar33);
          if (local_190 < (byte *)((int64_t)puVar24 + (int64_t)puVar13)) goto LAB_00f28708;
          local_178 = puVar12;
          uVar14 = local_f8[(int64_t)((int64_t)local_150 + 2)];
          puVar30 = (uint64_t *)((int64_t)puVar24 + uVar33);
          uVar19 = local_188[1];
          *puVar24 = *local_188;
          puVar24[1] = uVar19;
          if (0x10 < uVar33) {
            uVar19 = *(uint64_t *)((int64_t)this_ptr + 0x76bc);
            puVar24[2] = *(uint64_t *)((int64_t)this_ptr + 0x76b4);
            puVar24[3] = uVar19;
            if (0x10 < (int64_t)(uVar33 - 0x10)) {
              lVar11 = 0;
              do {
                puVar2 = (void*)((int64_t)this_ptr + lVar11 + 0x76c4);
                uVar10 = puVar2[1];
                pbVar18 = (byte *)((int64_t)puVar24 + lVar11 + 0x20);
                *(void*)pbVar18 = *puVar2;
                *(void*)(pbVar18 + 8) = uVar10;
                puVar2 = (void*)((int64_t)this_ptr + lVar11 + 0x76d4);
                uVar10 = puVar2[1];
                *(void*)(pbVar18 + 0x10) = *puVar2;
                *(void*)(pbVar18 + 0x18) = uVar10;
                lVar11 = lVar11 + 0x20;
              } while (pbVar18 + 0x20 < puVar30);
            }
          }
          local_148 = (uint64_t *)((int64_t)this_ptr + uVar33 + 0x76a4);
          puVar21 = (uint64_t *)((int64_t)puVar30 - uVar14);
          if ((uint64_t)((int64_t)puVar30 - (int64_t)puVar23) < uVar14) {
            puVar21 = local_180;
            if ((uint64_t)((int64_t)puVar30 - local_168) < uVar14) goto LAB_00f28b33;
            lVar11 = (int64_t)((int64_t)puVar30 - uVar14) - (int64_t)puVar23;
            if (local_160 < (void *)((int64_t)((int64_t)local_160 + lVar11) + (int64_t)puVar32))
            {
              _memmove(local_160,(void *)-lVar11,(size_t)local_150);
              puVar30 = (uint64_t *)((int64_t)puVar30 - lVar11);
              puVar32 = puVar32 + lVar11;
              puVar21 = puVar23;
              goto LAB_00f28365;
            }
            _memmove(local_160,puVar32,(size_t)local_150);
            puVar12 = local_178;
          }
          else {
LAB_00f28365:
            puVar12 = local_178;
            if (uVar14 < 0x10) {
              if (uVar14 < 8) {
                iVar27 = *(int *)(&g_023e4ca0 + uVar14 * 4);
                *(byte *)puVar30 = (byte)*puVar21;
                *(byte *)((int64_t)puVar30 + 1) = *(byte *)((int64_t)puVar21 + 1);
                *(byte *)((int64_t)puVar30 + 2) = *(byte *)((int64_t)puVar21 + 2);
                *(byte *)((int64_t)puVar30 + 3) = *(byte *)((int64_t)puVar21 + 3);
                pbVar18 = (byte *)((int64_t)puVar21 +
                                  (uint64_t)*(uint *)(&g_023e4c80 + uVar14 * 4));
                puVar21 = (uint64_t *)
                          ((int64_t)puVar21 +
                          ((uint64_t)*(uint *)(&g_023e4c80 + uVar14 * 4) - (int64_t)iVar27));
                *(void*)((int64_t)puVar30 + 4) = *(void*)pbVar18;
              }
              else {
                *puVar30 = *puVar21;
              }
              if (&MACH_HEADER.cpusubtype < puVar32) {
                puVar20 = puVar21 + 1;
                puVar15 = puVar30 + 1;
                if ((int64_t)puVar15 - (int64_t)puVar20 < 0x10) {
                  do {
                    *puVar15 = *puVar20;
                    puVar15 = puVar15 + 1;
                    puVar20 = puVar20 + 1;
                  } while (puVar15 < (uint64_t *)((int64_t)puVar30 + (int64_t)puVar32));
                }
                else {
                  uVar14 = puVar21[2];
                  *puVar15 = *puVar20;
                  puVar30[2] = uVar14;
                  if (0x18 < (int64_t)puVar32) {
                    lVar11 = 0;
                    do {
                      pbVar1 = (byte *)((int64_t)puVar21 + lVar11 + 0x18);
                      uVar10 = *(void*)(pbVar1 + 8);
                      pbVar18 = (byte *)((int64_t)puVar30 + lVar11 + 0x18);
                      *(void*)pbVar18 = *(void*)pbVar1;
                      *(void*)(pbVar18 + 8) = uVar10;
                      pbVar1 = (byte *)((int64_t)puVar21 + lVar11 + 0x28);
                      uVar10 = *(void*)(pbVar1 + 8);
                      *(void*)(pbVar18 + 0x10) = *(void*)pbVar1;
                      *(void*)(pbVar18 + 0x18) = uVar10;
                      lVar11 = lVar11 + 0x20;
                    } while (pbVar18 + 0x20 < (uint64_t *)((int64_t)puVar30 + (int64_t)puVar32));
                  }
                }
              }
            }
            else {
              uVar14 = puVar21[1];
              *puVar30 = *puVar21;
              puVar30[1] = uVar14;
              if (0x10 < (int64_t)puVar32) {
                lVar11 = 0x10;
                do {
                  uVar10 = *(void*)((byte *)((int64_t)puVar21 + lVar11) + 8);
                  pbVar18 = (byte *)((int64_t)puVar30 + lVar11);
                  *(void*)pbVar18 = *(void*)((int64_t)puVar21 + lVar11);
                  *(void*)(pbVar18 + 8) = uVar10;
                  pbVar1 = (byte *)((int64_t)puVar21 + lVar11 + 0x10);
                  uVar10 = *(void*)(pbVar1 + 8);
                  *(void*)(pbVar18 + 0x10) = *(void*)pbVar1;
                  *(void*)(pbVar18 + 0x18) = uVar10;
                  lVar11 = lVar11 + 0x20;
                } while (pbVar18 + 0x20 < puVar32 + (int64_t)puVar30);
              }
            }
          }
        }
        else {
LAB_00f28708:
          puVar13 = (uint64_t *)
                    FUN_00f2970d((uint64_t *)((int64_t)this_ptr + 0x176a4),&local_148,puVar23,
                                 local_168);
        }
        param_3 = local_150;
        puVar21 = puVar13;
        if ((uint64_t *)0xffffffffffffff88 < puVar13) goto LAB_00f28b33;
        *puVar12 = (uint64_t)local_158;
        local_f8[(int64_t)((int64_t)local_150 + 1)] = local_228;
        local_f8[(int64_t)((int64_t)local_150 + 2)] = (uint64_t)pbVar22;
        puVar24 = (uint64_t *)((int64_t)puVar24 + (int64_t)puVar13);
        local_170 = (uint64_t *)((int64_t)this_ptr + 0x176a4);
      }
      else {
        uVar33 = (uint64_t)(uVar31 & 7);
        uVar14 = local_f8[uVar33 * 3];
        param_3 = (uint64_t *)((int64_t)local_148 + uVar14);
        if (param_3 <= local_170) {
          puVar32 = (void*)local_f8[uVar33 * 3 + 1];
          puVar12 = (uint64_t *)(puVar32 + uVar14);
          if ((byte *)((int64_t)puVar24 + (int64_t)puVar12) <= local_190) {
            uVar33 = local_f8[uVar33 * 3 + 2];
            puVar13 = (uint64_t *)((int64_t)puVar24 + uVar14);
            uVar19 = local_148[1];
            *puVar24 = *local_148;
            puVar24[1] = uVar19;
            if (0x10 < uVar14) {
              uVar19 = local_148[3];
              puVar24[2] = local_148[2];
              puVar24[3] = uVar19;
              if (0x10 < (int64_t)(uVar14 - 0x10)) {
                lVar11 = 0;
                do {
                  pbVar1 = (byte *)((int64_t)local_148 + lVar11 + 0x20);
                  uVar10 = *(void*)(pbVar1 + 8);
                  pbVar18 = (byte *)((int64_t)puVar24 + lVar11 + 0x20);
                  *(void*)pbVar18 = *(void*)pbVar1;
                  *(void*)(pbVar18 + 8) = uVar10;
                  pbVar1 = (byte *)((int64_t)local_148 + lVar11 + 0x30);
                  uVar10 = *(void*)(pbVar1 + 8);
                  *(void*)(pbVar18 + 0x10) = *(void*)pbVar1;
                  *(void*)(pbVar18 + 0x18) = uVar10;
                  lVar11 = lVar11 + 0x20;
                } while (pbVar18 + 0x20 < puVar13);
              }
            }
            puVar30 = (uint64_t *)((int64_t)puVar13 - uVar33);
            local_148 = param_3;
            if ((uint64_t)((int64_t)puVar13 - (int64_t)puVar23) < uVar33) {
              if ((uint64_t)((int64_t)puVar13 - local_168) < uVar33) goto LAB_00f28b33;
              lVar11 = (int64_t)puVar30 - (int64_t)puVar23;
              local_150 = puVar12;
              if ((void *)((int64_t)((int64_t)local_160 + lVar11) + (int64_t)puVar32) <=
                  local_160) {
                _memmove(local_160,puVar32,(size_t)param_3);
                puVar12 = local_150;
                goto LAB_00f28447;
              }
              _memmove(local_160,(void *)-lVar11,(size_t)param_3);
              puVar13 = (uint64_t *)((int64_t)puVar13 - lVar11);
              puVar32 = puVar32 + lVar11;
              puVar30 = puVar23;
              puVar12 = local_150;
            }
            if (uVar33 < 0x10) {
              if (uVar33 < 8) {
                iVar27 = *(int *)(&g_023e4ca0 + uVar33 * 4);
                *(byte *)puVar13 = (byte)*puVar30;
                *(byte *)((int64_t)puVar13 + 1) = *(byte *)((int64_t)puVar30 + 1);
                *(byte *)((int64_t)puVar13 + 2) = *(byte *)((int64_t)puVar30 + 2);
                *(byte *)((int64_t)puVar13 + 3) = *(byte *)((int64_t)puVar30 + 3);
                pbVar18 = (byte *)((int64_t)puVar30 +
                                  (uint64_t)*(uint *)(&g_023e4c80 + uVar33 * 4));
                puVar30 = (uint64_t *)
                          ((int64_t)puVar30 +
                          ((uint64_t)*(uint *)(&g_023e4c80 + uVar33 * 4) - (int64_t)iVar27));
                *(void*)((int64_t)puVar13 + 4) = *(void*)pbVar18;
              }
              else {
                *puVar13 = *puVar30;
              }
              if (&MACH_HEADER.cpusubtype < puVar32) {
                puVar21 = puVar30 + 1;
                puVar20 = puVar13 + 1;
                if ((int64_t)puVar20 - (int64_t)puVar21 < 0x10) {
                  do {
                    *puVar20 = *puVar21;
                    puVar20 = puVar20 + 1;
                    puVar21 = puVar21 + 1;
                  } while (puVar20 < (uint64_t *)((int64_t)puVar13 + (int64_t)puVar32));
                }
                else {
                  uVar14 = puVar30[2];
                  *puVar20 = *puVar21;
                  puVar13[2] = uVar14;
                  if (0x18 < (int64_t)puVar32) {
                    lVar11 = 0;
                    do {
                      pbVar1 = (byte *)((int64_t)puVar30 + lVar11 + 0x18);
                      uVar10 = *(void*)(pbVar1 + 8);
                      pbVar18 = (byte *)((int64_t)puVar13 + lVar11 + 0x18);
                      *(void*)pbVar18 = *(void*)pbVar1;
                      *(void*)(pbVar18 + 8) = uVar10;
                      pbVar1 = (byte *)((int64_t)puVar30 + lVar11 + 0x28);
                      uVar10 = *(void*)(pbVar1 + 8);
                      *(void*)(pbVar18 + 0x10) = *(void*)pbVar1;
                      *(void*)(pbVar18 + 0x18) = uVar10;
                      lVar11 = lVar11 + 0x20;
                    } while (pbVar18 + 0x20 < (uint64_t *)((int64_t)puVar13 + (int64_t)puVar32));
                  }
                }
              }
            }
            else {
              uVar14 = puVar30[1];
              *puVar13 = *puVar30;
              puVar13[1] = uVar14;
              if (0x10 < (int64_t)puVar32) {
                lVar11 = 0x10;
                do {
                  uVar10 = *(void*)((byte *)((int64_t)puVar30 + lVar11) + 8);
                  pbVar18 = (byte *)((int64_t)puVar13 + lVar11);
                  *(void*)pbVar18 = *(void*)((int64_t)puVar30 + lVar11);
                  *(void*)(pbVar18 + 8) = uVar10;
                  pbVar1 = (byte *)((int64_t)puVar30 + lVar11 + 0x10);
                  uVar10 = *(void*)(pbVar1 + 8);
                  *(void*)(pbVar18 + 0x10) = *(void*)pbVar1;
                  *(void*)(pbVar18 + 0x18) = uVar10;
                  lVar11 = lVar11 + 0x20;
                } while (pbVar18 + 0x20 < puVar32 + (int64_t)puVar13);
              }
            }
            goto LAB_00f28447;
          }
        }
        param_3 = puVar23;
        puVar12 = (uint64_t *)FUN_00f2970d(local_170,&local_148,puVar23,local_168);
LAB_00f28447:
        puVar21 = puVar12;
        if ((uint64_t *)0xffffffffffffff88 < puVar12) goto LAB_00f28b33;
        uVar14 = (uint64_t)(uVar31 & 7);
        local_f8[uVar14 * 3] = (uint64_t)local_158;
        local_f8[uVar14 * 3 + 1] = local_228;
        local_f8[uVar14 * 3 + 2] = (uint64_t)pbVar22;
        puVar24 = (uint64_t *)((int64_t)puVar24 + (int64_t)puVar12);
      }
      pbVar22 = (byte *)(uint64_t)(uVar31 + 1);
      uVar14 = (uint64_t)uVar28;
    }
    if ((int)uVar31 < (int)param_4) goto LAB_00f28b33;
LAB_00f28b65:
    uVar31 = uVar31 - local_194;
    if ((int)uVar31 < (int)param_4) {
      local_158 = (uint64_t *)((int64_t)this_ptr + 0x176a4);
      do {
        uVar14 = (uint64_t)(uVar31 & 7);
        puVar12 = local_f8 + uVar14 * 3;
        puVar21 = local_180;
        if (*(int *)(this_ptr + 0xed4) == 2) {
          uVar33 = *puVar12;
          param_3 = (uint64_t *)((int64_t)local_148 + uVar33);
          if (param_3 <= (uint64_t *)this_ptr[0xed3]) {
            pbVar22 = (byte *)((int64_t)local_148 + (uVar33 - 0x20));
            if (param_3 <= local_170) {
              puVar32 = (void*)local_f8[uVar14 * 3 + 1];
              puVar12 = (uint64_t *)(puVar32 + uVar33);
              if ((byte *)((int64_t)puVar24 + (int64_t)puVar12) <= pbVar22) {
                uVar14 = local_f8[uVar14 * 3 + 2];
                puVar34 = (uint64_t *)((int64_t)puVar24 + uVar33);
                uVar19 = local_148[1];
                *puVar24 = *local_148;
                puVar24[1] = uVar19;
                if (0x10 < uVar33) {
                  uVar19 = local_148[3];
                  puVar24[2] = local_148[2];
                  puVar24[3] = uVar19;
                  if (0x10 < (int64_t)(uVar33 - 0x10)) {
                    lVar11 = 0;
                    do {
                      pbVar18 = (byte *)((int64_t)local_148 + lVar11 + 0x20);
                      uVar10 = *(void*)(pbVar18 + 8);
                      pbVar22 = (byte *)((int64_t)puVar24 + lVar11 + 0x20);
                      *(void*)pbVar22 = *(void*)pbVar18;
                      *(void*)(pbVar22 + 8) = uVar10;
                      pbVar18 = (byte *)((int64_t)local_148 + lVar11 + 0x30);
                      uVar10 = *(void*)(pbVar18 + 8);
                      *(void*)(pbVar22 + 0x10) = *(void*)pbVar18;
                      *(void*)(pbVar22 + 0x18) = uVar10;
                      lVar11 = lVar11 + 0x20;
                    } while (pbVar22 + 0x20 < puVar34);
                  }
                }
                local_148 = param_3;
                puVar13 = (uint64_t *)((int64_t)puVar34 - uVar14);
                if ((uint64_t)((int64_t)puVar34 - (int64_t)puVar23) < uVar14) {
                  if ((uint64_t)((int64_t)puVar34 - local_168) < uVar14) goto LAB_00f28b33;
                  lVar11 = (int64_t)((int64_t)puVar34 - uVar14) - (int64_t)puVar23;
                  if ((void *)((int64_t)((int64_t)local_160 + lVar11) + (int64_t)puVar32) <=
                      local_160) {
                    _memmove(local_160,puVar32,(size_t)param_3);
                    goto LAB_00f28fde;
                  }
                  _memmove(local_160,(void *)-lVar11,(size_t)param_3);
                  puVar34 = (uint64_t *)((int64_t)puVar34 - lVar11);
                  puVar32 = puVar32 + lVar11;
                  puVar13 = puVar23;
                }
                if (uVar14 < 0x10) {
                  if (uVar14 < 8) {
                    iVar26 = *(int *)(&g_023e4ca0 + uVar14 * 4);
                    *(byte *)puVar34 = (byte)*puVar13;
                    *(byte *)((int64_t)puVar34 + 1) = *(byte *)((int64_t)puVar13 + 1);
                    *(byte *)((int64_t)puVar34 + 2) = *(byte *)((int64_t)puVar13 + 2);
                    *(byte *)((int64_t)puVar34 + 3) = *(byte *)((int64_t)puVar13 + 3);
                    pbVar22 = (byte *)((int64_t)puVar13 +
                                      (uint64_t)*(uint *)(&g_023e4c80 + uVar14 * 4));
                    puVar13 = (uint64_t *)
                              ((int64_t)puVar13 +
                              ((uint64_t)*(uint *)(&g_023e4c80 + uVar14 * 4) - (int64_t)iVar26))
                    ;
                    *(void*)((int64_t)puVar34 + 4) = *(void*)pbVar22;
                  }
                  else {
                    *puVar34 = *puVar13;
                  }
                  param_3 = puVar12;
                  if (&MACH_HEADER.cpusubtype < puVar32) {
                    puVar21 = puVar13 + 1;
                    puVar30 = puVar34 + 1;
                    if ((int64_t)puVar30 - (int64_t)puVar21 < 0x10) {
                      do {
                        *puVar30 = *puVar21;
                        puVar30 = puVar30 + 1;
                        puVar21 = puVar21 + 1;
                      } while (puVar30 < (uint64_t *)((int64_t)puVar34 + (int64_t)puVar32));
                    }
                    else {
                      uVar14 = puVar13[2];
                      *puVar30 = *puVar21;
                      puVar34[2] = uVar14;
                      if (0x18 < (int64_t)puVar32) {
                        lVar11 = 0;
                        do {
                          pbVar18 = (byte *)((int64_t)puVar13 + lVar11 + 0x18);
                          uVar10 = *(void*)(pbVar18 + 8);
                          pbVar22 = (byte *)((int64_t)puVar34 + lVar11 + 0x18);
                          *(void*)pbVar22 = *(void*)pbVar18;
                          *(void*)(pbVar22 + 8) = uVar10;
                          pbVar18 = (byte *)((int64_t)puVar13 + lVar11 + 0x28);
                          uVar10 = *(void*)(pbVar18 + 8);
                          *(void*)(pbVar22 + 0x10) = *(void*)pbVar18;
                          *(void*)(pbVar22 + 0x18) = uVar10;
                          lVar11 = lVar11 + 0x20;
                        } while (pbVar22 + 0x20 <
                                 (uint64_t *)((int64_t)puVar34 + (int64_t)puVar32));
                      }
                    }
                  }
                }
                else {
                  uVar14 = puVar13[1];
                  *puVar34 = *puVar13;
                  puVar34[1] = uVar14;
                  if (0x10 < (int64_t)puVar32) {
                    lVar11 = 0x10;
                    do {
                      uVar10 = *(void*)((byte *)((int64_t)puVar13 + lVar11) + 8);
                      pbVar22 = (byte *)((int64_t)puVar34 + lVar11);
                      *(void*)pbVar22 = *(void*)((int64_t)puVar13 + lVar11);
                      *(void*)(pbVar22 + 8) = uVar10;
                      pbVar18 = (byte *)((int64_t)puVar13 + lVar11 + 0x10);
                      uVar10 = *(void*)(pbVar18 + 8);
                      *(void*)(pbVar22 + 0x10) = *(void*)pbVar18;
                      *(void*)(pbVar22 + 0x18) = uVar10;
                      lVar11 = lVar11 + 0x20;
                    } while (pbVar22 + 0x20 < puVar32 + (int64_t)puVar34);
                  }
                }
                goto LAB_00f28fde;
              }
            }
            param_3 = local_170;
            puVar12 = (uint64_t *)FUN_00f299af(&local_148,pbVar22,local_170,puVar23,local_160);
            goto LAB_00f28fde;
          }
          uVar19 = (int64_t)this_ptr[0xed3] - (int64_t)local_148;
          if (uVar19 != 0) {
            if ((uint64_t)((int64_t)pbVar16 - (int64_t)puVar24) < uVar19) goto LAB_00f295a2;
            FUN_00f29676();
            uVar33 = uVar33 - uVar19;
            *puVar12 = uVar33;
            puVar24 = (uint64_t *)((int64_t)puVar24 + uVar19);
          }
          local_148 = local_188;
          *(void*)(this_ptr + 0xed4) = 0;
          if ((int64_t)uVar33 < 0x10001) {
            puVar32 = (void*)local_f8[uVar14 * 3 + 1];
            param_3 = (uint64_t *)(puVar32 + uVar33);
            if (local_190 < (byte *)((int64_t)puVar24 + (int64_t)param_3)) goto LAB_00f291ba;
            uVar14 = local_f8[uVar14 * 3 + 2];
            puVar12 = (uint64_t *)((int64_t)puVar24 + uVar33);
            uVar19 = local_188[1];
            *puVar24 = *local_188;
            puVar24[1] = uVar19;
            if (0x10 < uVar33) {
              uVar19 = *(uint64_t *)((int64_t)this_ptr + 0x76bc);
              puVar24[2] = *(uint64_t *)((int64_t)this_ptr + 0x76b4);
              puVar24[3] = uVar19;
              if (0x10 < (int64_t)(uVar33 - 0x10)) {
                lVar11 = 0;
                do {
                  puVar2 = (void*)((int64_t)this_ptr + lVar11 + 0x76c4);
                  uVar10 = puVar2[1];
                  pbVar22 = (byte *)((int64_t)puVar24 + lVar11 + 0x20);
                  *(void*)pbVar22 = *puVar2;
                  *(void*)(pbVar22 + 8) = uVar10;
                  puVar2 = (void*)((int64_t)this_ptr + lVar11 + 0x76d4);
                  uVar10 = puVar2[1];
                  *(void*)(pbVar22 + 0x10) = *puVar2;
                  *(void*)(pbVar22 + 0x18) = uVar10;
                  lVar11 = lVar11 + 0x20;
                } while (pbVar22 + 0x20 < puVar12);
              }
            }
            local_148 = (uint64_t *)((int64_t)this_ptr + uVar33 + 0x76a4);
            puVar21 = (uint64_t *)((int64_t)puVar12 - uVar14);
            if ((uint64_t)((int64_t)puVar12 - (int64_t)puVar23) < uVar14) {
              puVar21 = local_180;
              if ((uint64_t)((int64_t)puVar12 - local_168) < uVar14) goto LAB_00f28b33;
              lVar11 = (int64_t)((int64_t)puVar12 - uVar14) - (int64_t)puVar23;
              if (local_160 < (void *)((int64_t)((int64_t)local_160 + lVar11) + (int64_t)puVar32)
                 ) {
                _memmove(local_160,(void *)-lVar11,(size_t)param_3);
                puVar12 = (uint64_t *)((int64_t)puVar12 - lVar11);
                puVar32 = puVar32 + lVar11;
                puVar21 = puVar23;
                goto LAB_00f28d27;
              }
              _memmove(local_160,puVar32,(size_t)param_3);
            }
            else {
LAB_00f28d27:
              if (uVar14 < 0x10) {
                if (uVar14 < 8) {
                  iVar26 = *(int *)(&g_023e4ca0 + uVar14 * 4);
                  *(byte *)puVar12 = (byte)*puVar21;
                  *(byte *)((int64_t)puVar12 + 1) = *(byte *)((int64_t)puVar21 + 1);
                  *(byte *)((int64_t)puVar12 + 2) = *(byte *)((int64_t)puVar21 + 2);
                  *(byte *)((int64_t)puVar12 + 3) = *(byte *)((int64_t)puVar21 + 3);
                  pbVar22 = (byte *)((int64_t)puVar21 +
                                    (uint64_t)*(uint *)(&g_023e4c80 + uVar14 * 4));
                  puVar21 = (uint64_t *)
                            ((int64_t)puVar21 +
                            ((uint64_t)*(uint *)(&g_023e4c80 + uVar14 * 4) - (int64_t)iVar26));
                  *(void*)((int64_t)puVar12 + 4) = *(void*)pbVar22;
                }
                else {
                  *puVar12 = *puVar21;
                }
                if (&MACH_HEADER.cpusubtype < puVar32) {
                  puVar34 = puVar21 + 1;
                  puVar13 = puVar12 + 1;
                  if ((int64_t)puVar13 - (int64_t)puVar34 < 0x10) {
                    do {
                      *puVar13 = *puVar34;
                      puVar13 = puVar13 + 1;
                      puVar34 = puVar34 + 1;
                    } while (puVar13 < (uint64_t *)((int64_t)puVar12 + (int64_t)puVar32));
                  }
                  else {
                    uVar14 = puVar21[2];
                    *puVar13 = *puVar34;
                    puVar12[2] = uVar14;
                    if (0x18 < (int64_t)puVar32) {
                      lVar11 = 0;
                      do {
                        pbVar18 = (byte *)((int64_t)puVar21 + lVar11 + 0x18);
                        uVar10 = *(void*)(pbVar18 + 8);
                        pbVar22 = (byte *)((int64_t)puVar12 + lVar11 + 0x18);
                        *(void*)pbVar22 = *(void*)pbVar18;
                        *(void*)(pbVar22 + 8) = uVar10;
                        pbVar18 = (byte *)((int64_t)puVar21 + lVar11 + 0x28);
                        uVar10 = *(void*)(pbVar18 + 8);
                        *(void*)(pbVar22 + 0x10) = *(void*)pbVar18;
                        *(void*)(pbVar22 + 0x18) = uVar10;
                        lVar11 = lVar11 + 0x20;
                      } while (pbVar22 + 0x20 < (uint64_t *)((int64_t)puVar12 + (int64_t)puVar32)
                              );
                    }
                  }
                }
              }
              else {
                uVar14 = puVar21[1];
                *puVar12 = *puVar21;
                puVar12[1] = uVar14;
                if (0x10 < (int64_t)puVar32) {
                  lVar11 = 0x10;
                  do {
                    uVar10 = *(void*)((byte *)((int64_t)puVar21 + lVar11) + 8);
                    pbVar22 = (byte *)((int64_t)puVar12 + lVar11);
                    *(void*)pbVar22 = *(void*)((int64_t)puVar21 + lVar11);
                    *(void*)(pbVar22 + 8) = uVar10;
                    pbVar18 = (byte *)((int64_t)puVar21 + lVar11 + 0x10);
                    uVar10 = *(void*)(pbVar18 + 8);
                    *(void*)(pbVar22 + 0x10) = *(void*)pbVar18;
                    *(void*)(pbVar22 + 0x18) = uVar10;
                    lVar11 = lVar11 + 0x20;
                  } while (pbVar22 + 0x20 < puVar32 + (int64_t)puVar12);
                }
              }
            }
          }
          else {
LAB_00f291ba:
            param_3 = (uint64_t *)FUN_00f2970d(local_158,&local_148,puVar23,local_168);
          }
          puVar21 = param_3;
          if ((uint64_t *)0xffffffffffffff88 < param_3) goto LAB_00f28b33;
          puVar24 = (uint64_t *)((int64_t)puVar24 + (int64_t)param_3);
          local_170 = local_158;
        }
        else {
          uVar33 = *puVar12;
          param_3 = (uint64_t *)((int64_t)local_148 + uVar33);
          if (param_3 <= local_170) {
            puVar32 = (void*)local_f8[uVar14 * 3 + 1];
            puVar12 = (uint64_t *)(puVar32 + uVar33);
            if ((byte *)((int64_t)puVar24 + (int64_t)puVar12) <= local_190) {
              uVar14 = local_f8[uVar14 * 3 + 2];
              puVar34 = (uint64_t *)((int64_t)puVar24 + uVar33);
              uVar19 = local_148[1];
              *puVar24 = *local_148;
              puVar24[1] = uVar19;
              if (0x10 < uVar33) {
                uVar19 = local_148[3];
                puVar24[2] = local_148[2];
                puVar24[3] = uVar19;
                if (0x10 < (int64_t)(uVar33 - 0x10)) {
                  lVar11 = 0;
                  do {
                    pbVar18 = (byte *)((int64_t)local_148 + lVar11 + 0x20);
                    uVar10 = *(void*)(pbVar18 + 8);
                    pbVar22 = (byte *)((int64_t)puVar24 + lVar11 + 0x20);
                    *(void*)pbVar22 = *(void*)pbVar18;
                    *(void*)(pbVar22 + 8) = uVar10;
                    pbVar18 = (byte *)((int64_t)local_148 + lVar11 + 0x30);
                    uVar10 = *(void*)(pbVar18 + 8);
                    *(void*)(pbVar22 + 0x10) = *(void*)pbVar18;
                    *(void*)(pbVar22 + 0x18) = uVar10;
                    lVar11 = lVar11 + 0x20;
                  } while (pbVar22 + 0x20 < puVar34);
                }
              }
              local_148 = param_3;
              puVar13 = (uint64_t *)((int64_t)puVar34 - uVar14);
              if ((uint64_t)((int64_t)puVar34 - (int64_t)puVar23) < uVar14) {
                if ((uint64_t)((int64_t)puVar34 - local_168) < uVar14) goto LAB_00f28b33;
                lVar11 = (int64_t)((int64_t)puVar34 - uVar14) - (int64_t)puVar23;
                if ((void *)((int64_t)((int64_t)local_160 + lVar11) + (int64_t)puVar32) <=
                    local_160) {
                  _memmove(local_160,puVar32,(size_t)param_3);
                  goto LAB_00f28fde;
                }
                _memmove(local_160,(void *)-lVar11,(size_t)param_3);
                puVar34 = (uint64_t *)((int64_t)puVar34 - lVar11);
                puVar32 = puVar32 + lVar11;
                puVar13 = puVar23;
              }
              if (uVar14 < 0x10) {
                if (uVar14 < 8) {
                  iVar26 = *(int *)(&g_023e4ca0 + uVar14 * 4);
                  *(byte *)puVar34 = (byte)*puVar13;
                  *(byte *)((int64_t)puVar34 + 1) = *(byte *)((int64_t)puVar13 + 1);
                  *(byte *)((int64_t)puVar34 + 2) = *(byte *)((int64_t)puVar13 + 2);
                  *(byte *)((int64_t)puVar34 + 3) = *(byte *)((int64_t)puVar13 + 3);
                  pbVar22 = (byte *)((int64_t)puVar13 +
                                    (uint64_t)*(uint *)(&g_023e4c80 + uVar14 * 4));
                  puVar13 = (uint64_t *)
                            ((int64_t)puVar13 +
                            ((uint64_t)*(uint *)(&g_023e4c80 + uVar14 * 4) - (int64_t)iVar26));
                  *(void*)((int64_t)puVar34 + 4) = *(void*)pbVar22;
                }
                else {
                  *puVar34 = *puVar13;
                }
                param_3 = puVar12;
                if (&MACH_HEADER.cpusubtype < puVar32) {
                  puVar21 = puVar13 + 1;
                  puVar30 = puVar34 + 1;
                  if ((int64_t)puVar30 - (int64_t)puVar21 < 0x10) {
                    do {
                      *puVar30 = *puVar21;
                      puVar30 = puVar30 + 1;
                      puVar21 = puVar21 + 1;
                    } while (puVar30 < (uint64_t *)((int64_t)puVar34 + (int64_t)puVar32));
                  }
                  else {
                    uVar14 = puVar13[2];
                    *puVar30 = *puVar21;
                    puVar34[2] = uVar14;
                    if (0x18 < (int64_t)puVar32) {
                      lVar11 = 0;
                      do {
                        pbVar18 = (byte *)((int64_t)puVar13 + lVar11 + 0x18);
                        uVar10 = *(void*)(pbVar18 + 8);
                        pbVar22 = (byte *)((int64_t)puVar34 + lVar11 + 0x18);
                        *(void*)pbVar22 = *(void*)pbVar18;
                        *(void*)(pbVar22 + 8) = uVar10;
                        pbVar18 = (byte *)((int64_t)puVar13 + lVar11 + 0x28);
                        uVar10 = *(void*)(pbVar18 + 8);
                        *(void*)(pbVar22 + 0x10) = *(void*)pbVar18;
                        *(void*)(pbVar22 + 0x18) = uVar10;
                        lVar11 = lVar11 + 0x20;
                      } while (pbVar22 + 0x20 < (uint64_t *)((int64_t)puVar34 + (int64_t)puVar32)
                              );
                    }
                  }
                }
              }
              else {
                uVar14 = puVar13[1];
                *puVar34 = *puVar13;
                puVar34[1] = uVar14;
                if (0x10 < (int64_t)puVar32) {
                  lVar11 = 0x10;
                  do {
                    uVar10 = *(void*)((byte *)((int64_t)puVar13 + lVar11) + 8);
                    pbVar22 = (byte *)((int64_t)puVar34 + lVar11);
                    *(void*)pbVar22 = *(void*)((int64_t)puVar13 + lVar11);
                    *(void*)(pbVar22 + 8) = uVar10;
                    pbVar18 = (byte *)((int64_t)puVar13 + lVar11 + 0x10);
                    uVar10 = *(void*)(pbVar18 + 8);
                    *(void*)(pbVar22 + 0x10) = *(void*)pbVar18;
                    *(void*)(pbVar22 + 0x18) = uVar10;
                    lVar11 = lVar11 + 0x20;
                  } while (pbVar22 + 0x20 < puVar32 + (int64_t)puVar34);
                }
              }
              goto LAB_00f28fde;
            }
          }
          param_3 = puVar23;
          puVar12 = (uint64_t *)FUN_00f2970d(local_170,&local_148,puVar23,local_168);
LAB_00f28fde:
          puVar21 = puVar12;
          if ((uint64_t *)0xffffffffffffff88 < puVar12) goto LAB_00f28b33;
          puVar24 = (uint64_t *)((int64_t)puVar24 + (int64_t)puVar12);
        }
        uVar31 = uVar31 + 1;
      } while (uVar31 != param_4);
    }
    lVar11 = 0;
    do {
      param_1 = (uint64_t *)(uint64_t)*(uint *)(local_1b8 + lVar11);
      *(uint *)((int64_t)this_ptr + lVar11 * 4 + 0x683c) = *(uint *)(local_1b8 + lVar11);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 3);
    iVar26 = *(int *)(this_ptr + 0xed4);
    puVar12 = local_170;
  }
  sVar25 = (size_t)param_3;
  puVar23 = local_148;
  if (iVar26 == 2) {
    pbVar22 = (byte *)((int64_t)puVar12 - (int64_t)local_148);
    local_180 = (uint64_t *)0xffffffffffffffba;
    puVar21 = local_180;
    if (pbVar16 + -(int64_t)puVar24 < pbVar22) goto LAB_00f28b33;
    if (puVar24 == (uint64_t *)0x0) {
      puVar24 = (uint64_t *)0x0;
    }
    else {
      _memmove(param_1,pbVar22,sVar25);
      puVar24 = (uint64_t *)((int64_t)puVar24 + (int64_t)pbVar22);
    }
    puVar23 = (uint64_t *)((int64_t)this_ptr + 0x76a4);
    puVar12 = (uint64_t *)((int64_t)this_ptr + 0x176a4);
  }
  pbVar22 = (byte *)((int64_t)puVar12 - (int64_t)puVar23);
  local_180 = (uint64_t *)0xffffffffffffffba;
  puVar21 = local_180;
  if (pbVar22 <= pbVar16 + -(int64_t)puVar24) {
    if (puVar24 == (uint64_t *)0x0) {
      pbVar22 = (byte *)0x0;
    }
    else {
      _memmove(param_1,pbVar22,sVar25);
      pbVar22 = (byte *)((int64_t)puVar24 + (int64_t)pbVar22);
    }
    puVar21 = (uint64_t *)(pbVar22 + -(int64_t)arg1);
  }
LAB_00f28b33:
  local_180 = puVar21;
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return local_180;
  }
                      ___stack_chk_fail();
LAB_00f295a2:
  local_180 = (uint64_t *)0xffffffffffffffba;
  puVar21 = local_180;
  goto LAB_00f28b33;
}

