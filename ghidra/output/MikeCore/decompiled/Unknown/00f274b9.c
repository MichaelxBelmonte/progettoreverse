// Function: FUN_00f274b9
// Address: 00f274b9
// Size: 8458 bytes
// Class: Unknown


/* WARNING: Type propagation algorithm not settling */

ulonglong * FUN_00f274b9(ulonglong *param_1,longlong param_2,ulonglong *param_3,uint param_4)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  sbyte sVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  byte *pbVar16;
  byte **ppbVar17;
  byte *pbVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  ulonglong *unaff_RSI;
  byte *pbVar22;
  ulonglong *puVar23;
  undefined8 *unaff_RDI;
  ulonglong *puVar24;
  size_t sVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  ulonglong *puVar30;
  uint uVar31;
  undefined1 *puVar32;
  ulonglong uVar33;
  ulonglong *puVar34;
  undefined4 uVar35;
  ulonglong local_228;
  ulonglong *local_218;
  ulonglong local_210;
  uint local_208;
  ulonglong *local_200;
  longlong local_1e8;
  longlong local_1e0;
  byte *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  byte *local_1b8 [3];
  ulonglong *local_1a0;
  uint local_194;
  byte *local_190;
  ulonglong *local_188;
  ulonglong *local_180;
  ulonglong *local_178;
  ulonglong *local_170;
  longlong local_168;
  void *local_160;
  ulonglong *local_158;
  ulonglong *local_150;
  ulonglong *local_148;
  ulonglong local_f8 [24];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  iVar26 = *(int *)(unaff_RDI + 0xed4);
  if (iVar26 == 1) {
    pbVar16 = (byte *)unaff_RDI[0xed2];
  }
  else {
    pbVar16 = (byte *)(param_2 + (longlong)unaff_RSI);
  }
  local_148 = (ulonglong *)unaff_RDI[0xeb5];
  puVar12 = (ulonglong *)unaff_RDI[0xed3];
  puVar24 = unaff_RSI;
  if (param_4 != 0) {
    puVar23 = (ulonglong *)unaff_RDI[0xe99];
    local_168 = unaff_RDI[0xe9a];
    local_160 = (void *)unaff_RDI[0xe9b];
    *(undefined4 *)((longlong)unaff_RDI + 0x7534) = 1;
    lVar11 = 0;
    do {
      local_1b8[lVar11] = (byte *)(ulonglong)*(uint *)((longlong)unaff_RDI + lVar11 * 4 + 0x683c);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 3);
    uVar28 = 8;
    if ((int)param_4 < 8) {
      uVar28 = param_4;
    }
    local_180 = (ulonglong *)0xffffffffffffffec;
    puVar21 = local_180;
    if (param_3 == (ulonglong *)0x0) goto LAB_00f28b33;
    puVar34 = param_1 + 1;
    if (param_3 < &MACH_HEADER.cpusubtype) {
      local_210 = (ulonglong)(byte)*param_1;
      switch(param_3) {
      case (ulonglong *)0x7:
        local_210 = local_210 | (ulonglong)*(byte *)((longlong)param_1 + 6) << 0x30;
      case (ulonglong *)0x6:
        local_210 = local_210 + ((ulonglong)*(byte *)((longlong)param_1 + 5) << 0x28);
      case (ulonglong *)0x5:
        local_210 = local_210 + ((ulonglong)*(byte *)((longlong)param_1 + 4) << 0x20);
      case (ulonglong *)0x4:
        local_210 = local_210 + (ulonglong)*(byte *)((longlong)param_1 + 3) * 0x1000000;
      case (ulonglong *)0x3:
        local_210 = local_210 + (ulonglong)*(byte *)((longlong)param_1 + 2) * 0x10000;
      case (ulonglong *)0x2:
        local_210 = (ulonglong)*(byte *)((longlong)param_1 + 1) * 0x100 + local_210;
      }
      pbVar22 = (byte *)((longlong)param_3 + -1);
      if (pbVar22[(longlong)param_1] == 0) goto LAB_00f28b33;
      iVar26 = (int)param_3;
      param_3 = (ulonglong *)(ulonglong)(uint)(iVar26 * 8);
      local_208 = LZCOUNT((uint)pbVar22[(longlong)param_1]) + iVar26 * -8 + 0x29;
      local_200 = param_1;
    }
    else {
      local_200 = (ulonglong *)((byte *)((longlong)param_3 + (longlong)param_1) + -8);
      local_210 = *local_200;
      if ((local_210 >> 0x38 == 0) ||
         (local_208 = LZCOUNT((uint)(byte)(local_210 >> 0x38)) - 0x17,
         (ulonglong *)0xffffffffffffff88 < param_3)) goto LAB_00f28b33;
    }
    local_194 = uVar28;
    local_170 = puVar12;
    uVar35 = FUN_00f295dc(param_1,*unaff_RDI);
    FUN_00f295dc(uVar35,unaff_RDI[2]);
    FUN_00f295dc();
    uVar14 = (ulonglong)local_208;
    pbVar22 = (byte *)0x0;
    iVar26 = (int)param_1;
    if (local_208 < 0x41) {
      pbVar18 = (byte *)0x0;
      pbVar22 = (byte *)0x0;
      if (0 < (int)local_194) {
        pbVar22 = (byte *)(ulonglong)local_194;
      }
      puVar12 = local_f8 + 2;
      local_218 = local_200;
      param_3 = local_200;
      do {
        if (param_3 < puVar34) {
          puVar21 = param_1;
          if (param_3 != param_1) {
            uVar33 = (ulonglong)(uint)((int)param_3 - iVar26);
            if (param_1 <= (ulonglong *)((longlong)param_3 - (uVar14 >> 3))) {
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
          local_218 = (ulonglong *)((longlong)param_3 - uVar33);
          uVar14 = (ulonglong)uVar28;
          local_210 = *local_218;
          puVar21 = local_218;
          local_200 = local_218;
        }
        param_3 = puVar21;
        if (pbVar22 == pbVar18) goto LAB_00f27c63;
        local_188 = param_3;
        local_190 = pbVar18;
        puVar21 = (ulonglong *)(ulonglong)*(uint *)(local_1c0 + 4 + local_1c8 * 8);
        local_1a0 = puVar21;
        uVar28 = *(uint *)(local_1e0 + 4 + local_1e8 * 8);
        uVar33 = (ulonglong)uVar28;
        uVar31 = *(uint *)(local_1d0 + 4 + (longlong)local_1d8 * 8);
        bVar3 = *(byte *)(local_1e0 + 2 + local_1e8 * 8);
        bVar4 = *(byte *)(local_1c0 + 2 + local_1c8 * 8);
        bVar5 = *(byte *)(local_1d0 + 2 + (longlong)local_1d8 * 8);
        local_158 = (ulonglong *)(ulonglong)bVar3;
        local_178 = (ulonglong *)(ulonglong)*(ushort *)(local_1c0 + local_1c8 * 8);
        bVar6 = *(byte *)(local_1e0 + 3 + local_1e8 * 8);
        bVar7 = *(byte *)(local_1c0 + 3 + local_1c8 * 8);
        bVar8 = *(byte *)(local_1d0 + 3 + (longlong)local_1d8 * 8);
        local_150 = (ulonglong *)(ulonglong)bVar8;
        if (bVar5 < 2) {
          if (bVar5 == 0) {
            local_1b8[0] = local_1b8[uVar28 == 0];
            ppbVar17 = local_1b8 + (uVar28 != 0);
          }
          else {
            uVar19 = uVar14 & 0x3f;
            uVar14 = (ulonglong)((int)uVar14 + 1);
            lVar11 = (ulonglong)(uVar31 + (uVar28 == 0)) - ((longlong)(local_210 << uVar19) >> 0x3f)
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
          uVar14 = (ulonglong)((int)uVar14 + (uint)bVar5);
          local_1b8[0] = (byte *)(((local_210 << uVar19) >> ((ulonglong)(byte)-bVar5 & 0x3f)) +
                                 (ulonglong)uVar31);
          local_1b8[2] = local_1b8[1];
          ppbVar17 = local_1b8;
        }
        local_1b8[1] = *ppbVar17;
        if (bVar4 != 0) {
          uVar19 = uVar14 & 0x3f;
          uVar14 = (ulonglong)((int)uVar14 + (uint)bVar4);
          puVar21 = (ulonglong *)
                    ((longlong)puVar21 + ((local_210 << uVar19) >> ((ulonglong)(byte)-bVar4 & 0x3f))
                    );
        }
        puVar13 = local_218;
        if ((0x1e < (byte)(bVar4 + bVar3 + bVar5)) && (uVar28 = (uint)uVar14, uVar28 < 0x41)) {
          if (local_218 < puVar34) {
            param_3 = param_1;
            puVar13 = param_1;
            if (local_218 == param_1) goto LAB_00f279e0;
            uVar19 = (ulonglong)(uint)((int)local_218 - iVar26);
            if (param_1 <= (ulonglong *)((longlong)local_218 - (uVar14 >> 3))) {
              uVar19 = uVar14 >> 3;
            }
            uVar28 = uVar28 + (int)uVar19 * -8;
          }
          else {
            uVar19 = uVar14 >> 3;
            uVar28 = uVar28 & 7;
          }
          local_200 = (ulonglong *)((longlong)local_218 - uVar19);
          uVar14 = (ulonglong)uVar28;
          local_210 = *local_200;
          param_3 = local_200;
          puVar13 = local_200;
        }
LAB_00f279e0:
        local_218 = puVar13;
        iVar27 = (int)uVar14;
        if (bVar3 != 0) {
          iVar27 = iVar27 + (uint)bVar3;
          uVar33 = uVar33 + ((local_210 << (uVar14 & 0x3f)) >> ((ulonglong)(byte)-bVar3 & 0x3f));
        }
        sVar9 = (bVar6 < 0x41) * ('@' - bVar6);
        local_1e8 = (((local_210 >> ((ulonglong)(byte)-(char)(iVar27 + (uint)bVar6) & 0x3f)) <<
                     sVar9) >> sVar9) + (ulonglong)*(ushort *)(local_1e0 + local_1e8 * 8);
        iVar27 = iVar27 + (uint)bVar6 + (uint)bVar7;
        sVar9 = (bVar7 < 0x41) * ('@' - bVar7);
        local_1c8 = (((local_210 >> ((ulonglong)(byte)-(char)iVar27 & 0x3f)) << sVar9) >> sVar9) +
                    (longlong)local_178;
        uVar28 = iVar27 + (uint)bVar8;
        uVar14 = (ulonglong)uVar28;
        sVar9 = (bVar8 < 0x41) * ('@' - bVar8);
        local_1d8 = (byte *)((((local_210 >> ((ulonglong)(byte)-(char)uVar28 & 0x3f)) << sVar9) >>
                             sVar9) + (ulonglong)*(ushort *)(local_1d0 + (longlong)local_1d8 * 8));
        puVar12[-2] = uVar33;
        puVar12[-1] = (ulonglong)puVar21;
        *puVar12 = (ulonglong)local_1b8[0];
        pbVar18 = pbVar18 + 1;
        puVar12 = puVar12 + 3;
      } while (uVar28 < 0x41);
      pbVar22 = (byte *)((ulonglong)pbVar18 & 0xffffffff);
    }
    puVar21 = local_180;
    if ((int)pbVar22 < (int)local_194) goto LAB_00f28b33;
LAB_00f27c63:
    local_190 = pbVar16 + -0x20;
    local_188 = (ulonglong *)((longlong)unaff_RDI + 0x76a4);
    while( true ) {
      uVar28 = (uint)uVar14;
      uVar31 = (uint)pbVar22;
      puVar21 = local_180;
      if (0x40 < uVar28) break;
      if (local_200 < puVar34) {
        if (local_200 != param_1) {
          uVar33 = (ulonglong)(uint)((int)local_200 - iVar26);
          if (param_1 <= (ulonglong *)((longlong)local_200 - (uVar14 >> 3))) {
            uVar33 = uVar14 >> 3;
          }
          local_200 = (ulonglong *)((longlong)local_200 - uVar33);
          uVar14 = (ulonglong)(uVar28 + (int)uVar33 * -8);
          local_210 = *local_200;
        }
      }
      else {
        local_200 = (ulonglong *)((longlong)local_200 - (uVar14 >> 3));
        uVar14 = (ulonglong)(uVar28 & 7);
        local_210 = *local_200;
      }
      param_3 = local_200;
      if ((int)param_4 <= (int)uVar31) goto LAB_00f28b65;
      local_1a0 = puVar34;
      local_228 = (ulonglong)*(uint *)(local_1c0 + 4 + local_1c8 * 8);
      uVar28 = *(uint *)(local_1e0 + 4 + local_1e8 * 8);
      local_158 = (ulonglong *)(ulonglong)uVar28;
      uVar29 = *(uint *)(local_1d0 + 4 + (longlong)local_1d8 * 8);
      bVar3 = *(byte *)(local_1e0 + 2 + local_1e8 * 8);
      bVar4 = *(byte *)(local_1c0 + 2 + local_1c8 * 8);
      bVar5 = *(byte *)(local_1d0 + 2 + (longlong)local_1d8 * 8);
      bVar6 = *(byte *)(local_1e0 + 3 + local_1e8 * 8);
      bVar7 = *(byte *)(local_1c0 + 3 + local_1c8 * 8);
      local_150 = (ulonglong *)(ulonglong)*(ushort *)(local_1d0 + (longlong)local_1d8 * 8);
      bVar8 = *(byte *)(local_1d0 + 3 + (longlong)local_1d8 * 8);
      local_178 = (ulonglong *)(ulonglong)bVar7;
      if (1 < bVar5) {
        uVar33 = uVar14 & 0x3f;
        uVar14 = (ulonglong)((int)uVar14 + (uint)bVar5);
        pbVar22 = (byte *)(((local_210 << uVar33) >> ((ulonglong)(byte)-bVar5 & 0x3f)) +
                          (ulonglong)uVar29);
        goto LAB_00f27df3;
      }
      if (bVar5 == 0) {
        pbVar22 = local_1b8[uVar28 == 0];
        ppbVar17 = local_1b8 + (uVar28 != 0);
      }
      else {
        uVar33 = uVar14 & 0x3f;
        uVar14 = (ulonglong)((int)uVar14 + 1);
        lVar11 = (ulonglong)(uVar29 + (uVar28 == 0)) - ((longlong)(local_210 << uVar33) >> 0x3f);
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
        uVar14 = (ulonglong)((int)uVar14 + (uint)bVar4);
        local_228 = local_228 + ((local_210 << uVar33) >> ((ulonglong)(byte)-bVar4 & 0x3f));
      }
      if ((0x1e < (byte)(bVar4 + bVar3 + bVar5)) && (uVar29 = (uint)uVar14, uVar29 < 0x41)) {
        if (local_200 < puVar34) {
          if (local_200 == param_1) goto LAB_00f27e8b;
          uVar33 = (ulonglong)(uint)((int)local_200 - iVar26);
          if (param_1 <= (ulonglong *)((longlong)local_200 - (uVar14 >> 3))) {
            uVar33 = uVar14 >> 3;
          }
          uVar29 = uVar29 + (int)uVar33 * -8;
        }
        else {
          uVar33 = uVar14 >> 3;
          uVar29 = uVar29 & 7;
        }
        local_200 = (ulonglong *)((longlong)local_200 - uVar33);
        uVar14 = (ulonglong)uVar29;
        local_210 = *local_200;
      }
LAB_00f27e8b:
      iVar27 = (int)uVar14;
      if (bVar3 != 0) {
        iVar27 = iVar27 + (uint)bVar3;
        local_158 = (ulonglong *)
                    ((longlong)(ulonglong)uVar28 +
                    ((local_210 << (uVar14 & 0x3f)) >> ((ulonglong)(byte)-bVar3 & 0x3f)));
      }
      sVar9 = (bVar6 < 0x41) * ('@' - bVar6);
      local_1e8 = (((local_210 >> ((ulonglong)(byte)-(char)(iVar27 + (uint)bVar6) & 0x3f)) << sVar9)
                  >> sVar9) + (ulonglong)*(ushort *)(local_1e0 + local_1e8 * 8);
      iVar27 = iVar27 + (uint)bVar6 + (uint)bVar7;
      sVar9 = (bVar7 < 0x41) * ('@' - bVar7);
      local_1c8 = (((local_210 >> ((ulonglong)(byte)-(char)iVar27 & 0x3f)) << sVar9) >> sVar9) +
                  (ulonglong)*(ushort *)(local_1c0 + local_1c8 * 8);
      uVar28 = iVar27 + (uint)bVar8;
      uVar14 = local_210 >> ((ulonglong)(byte)-(char)uVar28 & 0x3f);
      sVar9 = (bVar8 < 0x41) * ('@' - bVar8);
      local_1d8 = (byte *)(((uVar14 << sVar9) >> sVar9) + (longlong)local_150);
      if (*(int *)(unaff_RDI + 0xed4) == 2) {
        uVar19 = (ulonglong)(uVar31 & 7);
        param_3 = (ulonglong *)(uVar19 * 3);
        puVar12 = local_f8 + uVar19 * 3;
        uVar33 = *puVar12;
        puVar13 = (ulonglong *)((longlong)local_148 + uVar33);
        if (puVar13 <= (ulonglong *)unaff_RDI[0xed3]) {
          pbVar18 = (byte *)((longlong)local_148 + (uVar33 - 0x20));
          if (puVar13 <= local_170) {
            puVar32 = (undefined1 *)local_f8[uVar19 * 3 + 1];
            puVar12 = (ulonglong *)(puVar32 + uVar33);
            if ((byte *)((longlong)puVar24 + (longlong)puVar12) <= pbVar18) {
              uVar14 = local_f8[uVar19 * 3 + 2];
              puVar30 = (ulonglong *)((longlong)puVar24 + uVar33);
              uVar19 = local_148[1];
              *puVar24 = *local_148;
              puVar24[1] = uVar19;
              if (0x10 < uVar33) {
                uVar19 = local_148[3];
                puVar24[2] = local_148[2];
                puVar24[3] = uVar19;
                if (0x10 < (longlong)(uVar33 - 0x10)) {
                  lVar11 = 0;
                  do {
                    pbVar1 = (byte *)((longlong)local_148 + lVar11 + 0x20);
                    uVar10 = *(undefined8 *)(pbVar1 + 8);
                    pbVar18 = (byte *)((longlong)puVar24 + lVar11 + 0x20);
                    *(undefined8 *)pbVar18 = *(undefined8 *)pbVar1;
                    *(undefined8 *)(pbVar18 + 8) = uVar10;
                    pbVar1 = (byte *)((longlong)local_148 + lVar11 + 0x30);
                    uVar10 = *(undefined8 *)(pbVar1 + 8);
                    *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)pbVar1;
                    *(undefined8 *)(pbVar18 + 0x18) = uVar10;
                    lVar11 = lVar11 + 0x20;
                  } while (pbVar18 + 0x20 < puVar30);
                }
              }
              puVar20 = (ulonglong *)((longlong)puVar30 - uVar14);
              local_148 = puVar13;
              if ((ulonglong)((longlong)puVar30 - (longlong)puVar23) < uVar14) {
                local_150 = puVar12;
                if ((ulonglong)((longlong)puVar30 - local_168) < uVar14) goto LAB_00f28b33;
                lVar11 = (longlong)puVar20 - (longlong)puVar23;
                if ((void *)((longlong)((longlong)local_160 + lVar11) + (longlong)puVar32) <=
                    local_160) {
                  _memmove(local_160,puVar32,(size_t)param_3);
                  puVar12 = local_150;
                  goto LAB_00f28447;
                }
                _memmove(local_160,(void *)-lVar11,(size_t)param_3);
                puVar30 = (ulonglong *)((longlong)puVar30 - lVar11);
                puVar32 = puVar32 + lVar11;
                puVar20 = puVar23;
                puVar12 = local_150;
              }
              if (uVar14 < 0x10) {
                if (uVar14 < 8) {
                  iVar27 = *(int *)(&DAT_023e4ca0 + uVar14 * 4);
                  *(byte *)puVar30 = (byte)*puVar20;
                  *(byte *)((longlong)puVar30 + 1) = *(byte *)((longlong)puVar20 + 1);
                  *(byte *)((longlong)puVar30 + 2) = *(byte *)((longlong)puVar20 + 2);
                  *(byte *)((longlong)puVar30 + 3) = *(byte *)((longlong)puVar20 + 3);
                  pbVar18 = (byte *)((longlong)puVar20 +
                                    (ulonglong)*(uint *)(&DAT_023e4c80 + uVar14 * 4));
                  puVar20 = (ulonglong *)
                            ((longlong)puVar20 +
                            ((ulonglong)*(uint *)(&DAT_023e4c80 + uVar14 * 4) - (longlong)iVar27));
                  *(undefined4 *)((longlong)puVar30 + 4) = *(undefined4 *)pbVar18;
                }
                else {
                  *puVar30 = *puVar20;
                }
                if (&MACH_HEADER.cpusubtype < puVar32) {
                  puVar21 = puVar20 + 1;
                  puVar13 = puVar30 + 1;
                  if ((longlong)puVar13 - (longlong)puVar21 < 0x10) {
                    do {
                      *puVar13 = *puVar21;
                      puVar13 = puVar13 + 1;
                      puVar21 = puVar21 + 1;
                    } while (puVar13 < (ulonglong *)((longlong)puVar30 + (longlong)puVar32));
                  }
                  else {
                    uVar14 = puVar20[2];
                    *puVar13 = *puVar21;
                    puVar30[2] = uVar14;
                    if (0x18 < (longlong)puVar32) {
                      lVar11 = 0;
                      do {
                        pbVar1 = (byte *)((longlong)puVar20 + lVar11 + 0x18);
                        uVar10 = *(undefined8 *)(pbVar1 + 8);
                        pbVar18 = (byte *)((longlong)puVar30 + lVar11 + 0x18);
                        *(undefined8 *)pbVar18 = *(undefined8 *)pbVar1;
                        *(undefined8 *)(pbVar18 + 8) = uVar10;
                        pbVar1 = (byte *)((longlong)puVar20 + lVar11 + 0x28);
                        uVar10 = *(undefined8 *)(pbVar1 + 8);
                        *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)pbVar1;
                        *(undefined8 *)(pbVar18 + 0x18) = uVar10;
                        lVar11 = lVar11 + 0x20;
                      } while (pbVar18 + 0x20 < (ulonglong *)((longlong)puVar30 + (longlong)puVar32)
                              );
                    }
                  }
                }
              }
              else {
                uVar14 = puVar20[1];
                *puVar30 = *puVar20;
                puVar30[1] = uVar14;
                if (0x10 < (longlong)puVar32) {
                  lVar11 = 0x10;
                  do {
                    uVar10 = *(undefined8 *)((byte *)((longlong)puVar20 + lVar11) + 8);
                    pbVar18 = (byte *)((longlong)puVar30 + lVar11);
                    *(undefined8 *)pbVar18 = *(undefined8 *)((longlong)puVar20 + lVar11);
                    *(undefined8 *)(pbVar18 + 8) = uVar10;
                    pbVar1 = (byte *)((longlong)puVar20 + lVar11 + 0x10);
                    uVar10 = *(undefined8 *)(pbVar1 + 8);
                    *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)pbVar1;
                    *(undefined8 *)(pbVar18 + 0x18) = uVar10;
                    lVar11 = lVar11 + 0x20;
                  } while (pbVar18 + 0x20 < puVar32 + (longlong)puVar30);
                }
              }
              goto LAB_00f28447;
            }
          }
          param_3 = local_170;
          puVar12 = (ulonglong *)FUN_00f299af(&local_148,pbVar18,local_170,puVar23,local_160);
          goto LAB_00f28447;
        }
        uVar19 = (longlong)unaff_RDI[0xed3] - (longlong)local_148;
        local_150 = param_3;
        if (uVar19 != 0) {
          if ((ulonglong)((longlong)pbVar16 - (longlong)puVar24) < uVar19) goto LAB_00f295a2;
          FUN_00f29676(uVar14,uVar19);
          uVar33 = uVar33 - uVar19;
          *puVar12 = uVar33;
          puVar24 = (ulonglong *)((longlong)puVar24 + uVar19);
        }
        local_148 = local_188;
        *(undefined4 *)(unaff_RDI + 0xed4) = 0;
        if ((longlong)uVar33 < 0x10001) {
          puVar32 = (undefined1 *)local_f8[(longlong)((longlong)local_150 + 1)];
          puVar13 = (ulonglong *)(puVar32 + uVar33);
          if (local_190 < (byte *)((longlong)puVar24 + (longlong)puVar13)) goto LAB_00f28708;
          local_178 = puVar12;
          uVar14 = local_f8[(longlong)((longlong)local_150 + 2)];
          puVar30 = (ulonglong *)((longlong)puVar24 + uVar33);
          uVar19 = local_188[1];
          *puVar24 = *local_188;
          puVar24[1] = uVar19;
          if (0x10 < uVar33) {
            uVar19 = *(ulonglong *)((longlong)unaff_RDI + 0x76bc);
            puVar24[2] = *(ulonglong *)((longlong)unaff_RDI + 0x76b4);
            puVar24[3] = uVar19;
            if (0x10 < (longlong)(uVar33 - 0x10)) {
              lVar11 = 0;
              do {
                puVar2 = (undefined8 *)((longlong)unaff_RDI + lVar11 + 0x76c4);
                uVar10 = puVar2[1];
                pbVar18 = (byte *)((longlong)puVar24 + lVar11 + 0x20);
                *(undefined8 *)pbVar18 = *puVar2;
                *(undefined8 *)(pbVar18 + 8) = uVar10;
                puVar2 = (undefined8 *)((longlong)unaff_RDI + lVar11 + 0x76d4);
                uVar10 = puVar2[1];
                *(undefined8 *)(pbVar18 + 0x10) = *puVar2;
                *(undefined8 *)(pbVar18 + 0x18) = uVar10;
                lVar11 = lVar11 + 0x20;
              } while (pbVar18 + 0x20 < puVar30);
            }
          }
          local_148 = (ulonglong *)((longlong)unaff_RDI + uVar33 + 0x76a4);
          puVar21 = (ulonglong *)((longlong)puVar30 - uVar14);
          if ((ulonglong)((longlong)puVar30 - (longlong)puVar23) < uVar14) {
            puVar21 = local_180;
            if ((ulonglong)((longlong)puVar30 - local_168) < uVar14) goto LAB_00f28b33;
            lVar11 = (longlong)((longlong)puVar30 - uVar14) - (longlong)puVar23;
            if (local_160 < (void *)((longlong)((longlong)local_160 + lVar11) + (longlong)puVar32))
            {
              _memmove(local_160,(void *)-lVar11,(size_t)local_150);
              puVar30 = (ulonglong *)((longlong)puVar30 - lVar11);
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
                iVar27 = *(int *)(&DAT_023e4ca0 + uVar14 * 4);
                *(byte *)puVar30 = (byte)*puVar21;
                *(byte *)((longlong)puVar30 + 1) = *(byte *)((longlong)puVar21 + 1);
                *(byte *)((longlong)puVar30 + 2) = *(byte *)((longlong)puVar21 + 2);
                *(byte *)((longlong)puVar30 + 3) = *(byte *)((longlong)puVar21 + 3);
                pbVar18 = (byte *)((longlong)puVar21 +
                                  (ulonglong)*(uint *)(&DAT_023e4c80 + uVar14 * 4));
                puVar21 = (ulonglong *)
                          ((longlong)puVar21 +
                          ((ulonglong)*(uint *)(&DAT_023e4c80 + uVar14 * 4) - (longlong)iVar27));
                *(undefined4 *)((longlong)puVar30 + 4) = *(undefined4 *)pbVar18;
              }
              else {
                *puVar30 = *puVar21;
              }
              if (&MACH_HEADER.cpusubtype < puVar32) {
                puVar20 = puVar21 + 1;
                puVar15 = puVar30 + 1;
                if ((longlong)puVar15 - (longlong)puVar20 < 0x10) {
                  do {
                    *puVar15 = *puVar20;
                    puVar15 = puVar15 + 1;
                    puVar20 = puVar20 + 1;
                  } while (puVar15 < (ulonglong *)((longlong)puVar30 + (longlong)puVar32));
                }
                else {
                  uVar14 = puVar21[2];
                  *puVar15 = *puVar20;
                  puVar30[2] = uVar14;
                  if (0x18 < (longlong)puVar32) {
                    lVar11 = 0;
                    do {
                      pbVar1 = (byte *)((longlong)puVar21 + lVar11 + 0x18);
                      uVar10 = *(undefined8 *)(pbVar1 + 8);
                      pbVar18 = (byte *)((longlong)puVar30 + lVar11 + 0x18);
                      *(undefined8 *)pbVar18 = *(undefined8 *)pbVar1;
                      *(undefined8 *)(pbVar18 + 8) = uVar10;
                      pbVar1 = (byte *)((longlong)puVar21 + lVar11 + 0x28);
                      uVar10 = *(undefined8 *)(pbVar1 + 8);
                      *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)pbVar1;
                      *(undefined8 *)(pbVar18 + 0x18) = uVar10;
                      lVar11 = lVar11 + 0x20;
                    } while (pbVar18 + 0x20 < (ulonglong *)((longlong)puVar30 + (longlong)puVar32));
                  }
                }
              }
            }
            else {
              uVar14 = puVar21[1];
              *puVar30 = *puVar21;
              puVar30[1] = uVar14;
              if (0x10 < (longlong)puVar32) {
                lVar11 = 0x10;
                do {
                  uVar10 = *(undefined8 *)((byte *)((longlong)puVar21 + lVar11) + 8);
                  pbVar18 = (byte *)((longlong)puVar30 + lVar11);
                  *(undefined8 *)pbVar18 = *(undefined8 *)((longlong)puVar21 + lVar11);
                  *(undefined8 *)(pbVar18 + 8) = uVar10;
                  pbVar1 = (byte *)((longlong)puVar21 + lVar11 + 0x10);
                  uVar10 = *(undefined8 *)(pbVar1 + 8);
                  *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)pbVar1;
                  *(undefined8 *)(pbVar18 + 0x18) = uVar10;
                  lVar11 = lVar11 + 0x20;
                } while (pbVar18 + 0x20 < puVar32 + (longlong)puVar30);
              }
            }
          }
        }
        else {
LAB_00f28708:
          puVar13 = (ulonglong *)
                    FUN_00f2970d((ulonglong *)((longlong)unaff_RDI + 0x176a4),&local_148,puVar23,
                                 local_168);
        }
        param_3 = local_150;
        puVar21 = puVar13;
        if ((ulonglong *)0xffffffffffffff88 < puVar13) goto LAB_00f28b33;
        *puVar12 = (ulonglong)local_158;
        local_f8[(longlong)((longlong)local_150 + 1)] = local_228;
        local_f8[(longlong)((longlong)local_150 + 2)] = (ulonglong)pbVar22;
        puVar24 = (ulonglong *)((longlong)puVar24 + (longlong)puVar13);
        local_170 = (ulonglong *)((longlong)unaff_RDI + 0x176a4);
      }
      else {
        uVar33 = (ulonglong)(uVar31 & 7);
        uVar14 = local_f8[uVar33 * 3];
        param_3 = (ulonglong *)((longlong)local_148 + uVar14);
        if (param_3 <= local_170) {
          puVar32 = (undefined1 *)local_f8[uVar33 * 3 + 1];
          puVar12 = (ulonglong *)(puVar32 + uVar14);
          if ((byte *)((longlong)puVar24 + (longlong)puVar12) <= local_190) {
            uVar33 = local_f8[uVar33 * 3 + 2];
            puVar13 = (ulonglong *)((longlong)puVar24 + uVar14);
            uVar19 = local_148[1];
            *puVar24 = *local_148;
            puVar24[1] = uVar19;
            if (0x10 < uVar14) {
              uVar19 = local_148[3];
              puVar24[2] = local_148[2];
              puVar24[3] = uVar19;
              if (0x10 < (longlong)(uVar14 - 0x10)) {
                lVar11 = 0;
                do {
                  pbVar1 = (byte *)((longlong)local_148 + lVar11 + 0x20);
                  uVar10 = *(undefined8 *)(pbVar1 + 8);
                  pbVar18 = (byte *)((longlong)puVar24 + lVar11 + 0x20);
                  *(undefined8 *)pbVar18 = *(undefined8 *)pbVar1;
                  *(undefined8 *)(pbVar18 + 8) = uVar10;
                  pbVar1 = (byte *)((longlong)local_148 + lVar11 + 0x30);
                  uVar10 = *(undefined8 *)(pbVar1 + 8);
                  *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)pbVar1;
                  *(undefined8 *)(pbVar18 + 0x18) = uVar10;
                  lVar11 = lVar11 + 0x20;
                } while (pbVar18 + 0x20 < puVar13);
              }
            }
            puVar30 = (ulonglong *)((longlong)puVar13 - uVar33);
            local_148 = param_3;
            if ((ulonglong)((longlong)puVar13 - (longlong)puVar23) < uVar33) {
              if ((ulonglong)((longlong)puVar13 - local_168) < uVar33) goto LAB_00f28b33;
              lVar11 = (longlong)puVar30 - (longlong)puVar23;
              local_150 = puVar12;
              if ((void *)((longlong)((longlong)local_160 + lVar11) + (longlong)puVar32) <=
                  local_160) {
                _memmove(local_160,puVar32,(size_t)param_3);
                puVar12 = local_150;
                goto LAB_00f28447;
              }
              _memmove(local_160,(void *)-lVar11,(size_t)param_3);
              puVar13 = (ulonglong *)((longlong)puVar13 - lVar11);
              puVar32 = puVar32 + lVar11;
              puVar30 = puVar23;
              puVar12 = local_150;
            }
            if (uVar33 < 0x10) {
              if (uVar33 < 8) {
                iVar27 = *(int *)(&DAT_023e4ca0 + uVar33 * 4);
                *(byte *)puVar13 = (byte)*puVar30;
                *(byte *)((longlong)puVar13 + 1) = *(byte *)((longlong)puVar30 + 1);
                *(byte *)((longlong)puVar13 + 2) = *(byte *)((longlong)puVar30 + 2);
                *(byte *)((longlong)puVar13 + 3) = *(byte *)((longlong)puVar30 + 3);
                pbVar18 = (byte *)((longlong)puVar30 +
                                  (ulonglong)*(uint *)(&DAT_023e4c80 + uVar33 * 4));
                puVar30 = (ulonglong *)
                          ((longlong)puVar30 +
                          ((ulonglong)*(uint *)(&DAT_023e4c80 + uVar33 * 4) - (longlong)iVar27));
                *(undefined4 *)((longlong)puVar13 + 4) = *(undefined4 *)pbVar18;
              }
              else {
                *puVar13 = *puVar30;
              }
              if (&MACH_HEADER.cpusubtype < puVar32) {
                puVar21 = puVar30 + 1;
                puVar20 = puVar13 + 1;
                if ((longlong)puVar20 - (longlong)puVar21 < 0x10) {
                  do {
                    *puVar20 = *puVar21;
                    puVar20 = puVar20 + 1;
                    puVar21 = puVar21 + 1;
                  } while (puVar20 < (ulonglong *)((longlong)puVar13 + (longlong)puVar32));
                }
                else {
                  uVar14 = puVar30[2];
                  *puVar20 = *puVar21;
                  puVar13[2] = uVar14;
                  if (0x18 < (longlong)puVar32) {
                    lVar11 = 0;
                    do {
                      pbVar1 = (byte *)((longlong)puVar30 + lVar11 + 0x18);
                      uVar10 = *(undefined8 *)(pbVar1 + 8);
                      pbVar18 = (byte *)((longlong)puVar13 + lVar11 + 0x18);
                      *(undefined8 *)pbVar18 = *(undefined8 *)pbVar1;
                      *(undefined8 *)(pbVar18 + 8) = uVar10;
                      pbVar1 = (byte *)((longlong)puVar30 + lVar11 + 0x28);
                      uVar10 = *(undefined8 *)(pbVar1 + 8);
                      *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)pbVar1;
                      *(undefined8 *)(pbVar18 + 0x18) = uVar10;
                      lVar11 = lVar11 + 0x20;
                    } while (pbVar18 + 0x20 < (ulonglong *)((longlong)puVar13 + (longlong)puVar32));
                  }
                }
              }
            }
            else {
              uVar14 = puVar30[1];
              *puVar13 = *puVar30;
              puVar13[1] = uVar14;
              if (0x10 < (longlong)puVar32) {
                lVar11 = 0x10;
                do {
                  uVar10 = *(undefined8 *)((byte *)((longlong)puVar30 + lVar11) + 8);
                  pbVar18 = (byte *)((longlong)puVar13 + lVar11);
                  *(undefined8 *)pbVar18 = *(undefined8 *)((longlong)puVar30 + lVar11);
                  *(undefined8 *)(pbVar18 + 8) = uVar10;
                  pbVar1 = (byte *)((longlong)puVar30 + lVar11 + 0x10);
                  uVar10 = *(undefined8 *)(pbVar1 + 8);
                  *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)pbVar1;
                  *(undefined8 *)(pbVar18 + 0x18) = uVar10;
                  lVar11 = lVar11 + 0x20;
                } while (pbVar18 + 0x20 < puVar32 + (longlong)puVar13);
              }
            }
            goto LAB_00f28447;
          }
        }
        param_3 = puVar23;
        puVar12 = (ulonglong *)FUN_00f2970d(local_170,&local_148,puVar23,local_168);
LAB_00f28447:
        puVar21 = puVar12;
        if ((ulonglong *)0xffffffffffffff88 < puVar12) goto LAB_00f28b33;
        uVar14 = (ulonglong)(uVar31 & 7);
        local_f8[uVar14 * 3] = (ulonglong)local_158;
        local_f8[uVar14 * 3 + 1] = local_228;
        local_f8[uVar14 * 3 + 2] = (ulonglong)pbVar22;
        puVar24 = (ulonglong *)((longlong)puVar24 + (longlong)puVar12);
      }
      pbVar22 = (byte *)(ulonglong)(uVar31 + 1);
      uVar14 = (ulonglong)uVar28;
    }
    if ((int)uVar31 < (int)param_4) goto LAB_00f28b33;
LAB_00f28b65:
    uVar31 = uVar31 - local_194;
    if ((int)uVar31 < (int)param_4) {
      local_158 = (ulonglong *)((longlong)unaff_RDI + 0x176a4);
      do {
        uVar14 = (ulonglong)(uVar31 & 7);
        puVar12 = local_f8 + uVar14 * 3;
        puVar21 = local_180;
        if (*(int *)(unaff_RDI + 0xed4) == 2) {
          uVar33 = *puVar12;
          param_3 = (ulonglong *)((longlong)local_148 + uVar33);
          if (param_3 <= (ulonglong *)unaff_RDI[0xed3]) {
            pbVar22 = (byte *)((longlong)local_148 + (uVar33 - 0x20));
            if (param_3 <= local_170) {
              puVar32 = (undefined1 *)local_f8[uVar14 * 3 + 1];
              puVar12 = (ulonglong *)(puVar32 + uVar33);
              if ((byte *)((longlong)puVar24 + (longlong)puVar12) <= pbVar22) {
                uVar14 = local_f8[uVar14 * 3 + 2];
                puVar34 = (ulonglong *)((longlong)puVar24 + uVar33);
                uVar19 = local_148[1];
                *puVar24 = *local_148;
                puVar24[1] = uVar19;
                if (0x10 < uVar33) {
                  uVar19 = local_148[3];
                  puVar24[2] = local_148[2];
                  puVar24[3] = uVar19;
                  if (0x10 < (longlong)(uVar33 - 0x10)) {
                    lVar11 = 0;
                    do {
                      pbVar18 = (byte *)((longlong)local_148 + lVar11 + 0x20);
                      uVar10 = *(undefined8 *)(pbVar18 + 8);
                      pbVar22 = (byte *)((longlong)puVar24 + lVar11 + 0x20);
                      *(undefined8 *)pbVar22 = *(undefined8 *)pbVar18;
                      *(undefined8 *)(pbVar22 + 8) = uVar10;
                      pbVar18 = (byte *)((longlong)local_148 + lVar11 + 0x30);
                      uVar10 = *(undefined8 *)(pbVar18 + 8);
                      *(undefined8 *)(pbVar22 + 0x10) = *(undefined8 *)pbVar18;
                      *(undefined8 *)(pbVar22 + 0x18) = uVar10;
                      lVar11 = lVar11 + 0x20;
                    } while (pbVar22 + 0x20 < puVar34);
                  }
                }
                local_148 = param_3;
                puVar13 = (ulonglong *)((longlong)puVar34 - uVar14);
                if ((ulonglong)((longlong)puVar34 - (longlong)puVar23) < uVar14) {
                  if ((ulonglong)((longlong)puVar34 - local_168) < uVar14) goto LAB_00f28b33;
                  lVar11 = (longlong)((longlong)puVar34 - uVar14) - (longlong)puVar23;
                  if ((void *)((longlong)((longlong)local_160 + lVar11) + (longlong)puVar32) <=
                      local_160) {
                    _memmove(local_160,puVar32,(size_t)param_3);
                    goto LAB_00f28fde;
                  }
                  _memmove(local_160,(void *)-lVar11,(size_t)param_3);
                  puVar34 = (ulonglong *)((longlong)puVar34 - lVar11);
                  puVar32 = puVar32 + lVar11;
                  puVar13 = puVar23;
                }
                if (uVar14 < 0x10) {
                  if (uVar14 < 8) {
                    iVar26 = *(int *)(&DAT_023e4ca0 + uVar14 * 4);
                    *(byte *)puVar34 = (byte)*puVar13;
                    *(byte *)((longlong)puVar34 + 1) = *(byte *)((longlong)puVar13 + 1);
                    *(byte *)((longlong)puVar34 + 2) = *(byte *)((longlong)puVar13 + 2);
                    *(byte *)((longlong)puVar34 + 3) = *(byte *)((longlong)puVar13 + 3);
                    pbVar22 = (byte *)((longlong)puVar13 +
                                      (ulonglong)*(uint *)(&DAT_023e4c80 + uVar14 * 4));
                    puVar13 = (ulonglong *)
                              ((longlong)puVar13 +
                              ((ulonglong)*(uint *)(&DAT_023e4c80 + uVar14 * 4) - (longlong)iVar26))
                    ;
                    *(undefined4 *)((longlong)puVar34 + 4) = *(undefined4 *)pbVar22;
                  }
                  else {
                    *puVar34 = *puVar13;
                  }
                  param_3 = puVar12;
                  if (&MACH_HEADER.cpusubtype < puVar32) {
                    puVar21 = puVar13 + 1;
                    puVar30 = puVar34 + 1;
                    if ((longlong)puVar30 - (longlong)puVar21 < 0x10) {
                      do {
                        *puVar30 = *puVar21;
                        puVar30 = puVar30 + 1;
                        puVar21 = puVar21 + 1;
                      } while (puVar30 < (ulonglong *)((longlong)puVar34 + (longlong)puVar32));
                    }
                    else {
                      uVar14 = puVar13[2];
                      *puVar30 = *puVar21;
                      puVar34[2] = uVar14;
                      if (0x18 < (longlong)puVar32) {
                        lVar11 = 0;
                        do {
                          pbVar18 = (byte *)((longlong)puVar13 + lVar11 + 0x18);
                          uVar10 = *(undefined8 *)(pbVar18 + 8);
                          pbVar22 = (byte *)((longlong)puVar34 + lVar11 + 0x18);
                          *(undefined8 *)pbVar22 = *(undefined8 *)pbVar18;
                          *(undefined8 *)(pbVar22 + 8) = uVar10;
                          pbVar18 = (byte *)((longlong)puVar13 + lVar11 + 0x28);
                          uVar10 = *(undefined8 *)(pbVar18 + 8);
                          *(undefined8 *)(pbVar22 + 0x10) = *(undefined8 *)pbVar18;
                          *(undefined8 *)(pbVar22 + 0x18) = uVar10;
                          lVar11 = lVar11 + 0x20;
                        } while (pbVar22 + 0x20 <
                                 (ulonglong *)((longlong)puVar34 + (longlong)puVar32));
                      }
                    }
                  }
                }
                else {
                  uVar14 = puVar13[1];
                  *puVar34 = *puVar13;
                  puVar34[1] = uVar14;
                  if (0x10 < (longlong)puVar32) {
                    lVar11 = 0x10;
                    do {
                      uVar10 = *(undefined8 *)((byte *)((longlong)puVar13 + lVar11) + 8);
                      pbVar22 = (byte *)((longlong)puVar34 + lVar11);
                      *(undefined8 *)pbVar22 = *(undefined8 *)((longlong)puVar13 + lVar11);
                      *(undefined8 *)(pbVar22 + 8) = uVar10;
                      pbVar18 = (byte *)((longlong)puVar13 + lVar11 + 0x10);
                      uVar10 = *(undefined8 *)(pbVar18 + 8);
                      *(undefined8 *)(pbVar22 + 0x10) = *(undefined8 *)pbVar18;
                      *(undefined8 *)(pbVar22 + 0x18) = uVar10;
                      lVar11 = lVar11 + 0x20;
                    } while (pbVar22 + 0x20 < puVar32 + (longlong)puVar34);
                  }
                }
                goto LAB_00f28fde;
              }
            }
            param_3 = local_170;
            puVar12 = (ulonglong *)FUN_00f299af(&local_148,pbVar22,local_170,puVar23,local_160);
            goto LAB_00f28fde;
          }
          uVar19 = (longlong)unaff_RDI[0xed3] - (longlong)local_148;
          if (uVar19 != 0) {
            if ((ulonglong)((longlong)pbVar16 - (longlong)puVar24) < uVar19) goto LAB_00f295a2;
            FUN_00f29676();
            uVar33 = uVar33 - uVar19;
            *puVar12 = uVar33;
            puVar24 = (ulonglong *)((longlong)puVar24 + uVar19);
          }
          local_148 = local_188;
          *(undefined4 *)(unaff_RDI + 0xed4) = 0;
          if ((longlong)uVar33 < 0x10001) {
            puVar32 = (undefined1 *)local_f8[uVar14 * 3 + 1];
            param_3 = (ulonglong *)(puVar32 + uVar33);
            if (local_190 < (byte *)((longlong)puVar24 + (longlong)param_3)) goto LAB_00f291ba;
            uVar14 = local_f8[uVar14 * 3 + 2];
            puVar12 = (ulonglong *)((longlong)puVar24 + uVar33);
            uVar19 = local_188[1];
            *puVar24 = *local_188;
            puVar24[1] = uVar19;
            if (0x10 < uVar33) {
              uVar19 = *(ulonglong *)((longlong)unaff_RDI + 0x76bc);
              puVar24[2] = *(ulonglong *)((longlong)unaff_RDI + 0x76b4);
              puVar24[3] = uVar19;
              if (0x10 < (longlong)(uVar33 - 0x10)) {
                lVar11 = 0;
                do {
                  puVar2 = (undefined8 *)((longlong)unaff_RDI + lVar11 + 0x76c4);
                  uVar10 = puVar2[1];
                  pbVar22 = (byte *)((longlong)puVar24 + lVar11 + 0x20);
                  *(undefined8 *)pbVar22 = *puVar2;
                  *(undefined8 *)(pbVar22 + 8) = uVar10;
                  puVar2 = (undefined8 *)((longlong)unaff_RDI + lVar11 + 0x76d4);
                  uVar10 = puVar2[1];
                  *(undefined8 *)(pbVar22 + 0x10) = *puVar2;
                  *(undefined8 *)(pbVar22 + 0x18) = uVar10;
                  lVar11 = lVar11 + 0x20;
                } while (pbVar22 + 0x20 < puVar12);
              }
            }
            local_148 = (ulonglong *)((longlong)unaff_RDI + uVar33 + 0x76a4);
            puVar21 = (ulonglong *)((longlong)puVar12 - uVar14);
            if ((ulonglong)((longlong)puVar12 - (longlong)puVar23) < uVar14) {
              puVar21 = local_180;
              if ((ulonglong)((longlong)puVar12 - local_168) < uVar14) goto LAB_00f28b33;
              lVar11 = (longlong)((longlong)puVar12 - uVar14) - (longlong)puVar23;
              if (local_160 < (void *)((longlong)((longlong)local_160 + lVar11) + (longlong)puVar32)
                 ) {
                _memmove(local_160,(void *)-lVar11,(size_t)param_3);
                puVar12 = (ulonglong *)((longlong)puVar12 - lVar11);
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
                  iVar26 = *(int *)(&DAT_023e4ca0 + uVar14 * 4);
                  *(byte *)puVar12 = (byte)*puVar21;
                  *(byte *)((longlong)puVar12 + 1) = *(byte *)((longlong)puVar21 + 1);
                  *(byte *)((longlong)puVar12 + 2) = *(byte *)((longlong)puVar21 + 2);
                  *(byte *)((longlong)puVar12 + 3) = *(byte *)((longlong)puVar21 + 3);
                  pbVar22 = (byte *)((longlong)puVar21 +
                                    (ulonglong)*(uint *)(&DAT_023e4c80 + uVar14 * 4));
                  puVar21 = (ulonglong *)
                            ((longlong)puVar21 +
                            ((ulonglong)*(uint *)(&DAT_023e4c80 + uVar14 * 4) - (longlong)iVar26));
                  *(undefined4 *)((longlong)puVar12 + 4) = *(undefined4 *)pbVar22;
                }
                else {
                  *puVar12 = *puVar21;
                }
                if (&MACH_HEADER.cpusubtype < puVar32) {
                  puVar34 = puVar21 + 1;
                  puVar13 = puVar12 + 1;
                  if ((longlong)puVar13 - (longlong)puVar34 < 0x10) {
                    do {
                      *puVar13 = *puVar34;
                      puVar13 = puVar13 + 1;
                      puVar34 = puVar34 + 1;
                    } while (puVar13 < (ulonglong *)((longlong)puVar12 + (longlong)puVar32));
                  }
                  else {
                    uVar14 = puVar21[2];
                    *puVar13 = *puVar34;
                    puVar12[2] = uVar14;
                    if (0x18 < (longlong)puVar32) {
                      lVar11 = 0;
                      do {
                        pbVar18 = (byte *)((longlong)puVar21 + lVar11 + 0x18);
                        uVar10 = *(undefined8 *)(pbVar18 + 8);
                        pbVar22 = (byte *)((longlong)puVar12 + lVar11 + 0x18);
                        *(undefined8 *)pbVar22 = *(undefined8 *)pbVar18;
                        *(undefined8 *)(pbVar22 + 8) = uVar10;
                        pbVar18 = (byte *)((longlong)puVar21 + lVar11 + 0x28);
                        uVar10 = *(undefined8 *)(pbVar18 + 8);
                        *(undefined8 *)(pbVar22 + 0x10) = *(undefined8 *)pbVar18;
                        *(undefined8 *)(pbVar22 + 0x18) = uVar10;
                        lVar11 = lVar11 + 0x20;
                      } while (pbVar22 + 0x20 < (ulonglong *)((longlong)puVar12 + (longlong)puVar32)
                              );
                    }
                  }
                }
              }
              else {
                uVar14 = puVar21[1];
                *puVar12 = *puVar21;
                puVar12[1] = uVar14;
                if (0x10 < (longlong)puVar32) {
                  lVar11 = 0x10;
                  do {
                    uVar10 = *(undefined8 *)((byte *)((longlong)puVar21 + lVar11) + 8);
                    pbVar22 = (byte *)((longlong)puVar12 + lVar11);
                    *(undefined8 *)pbVar22 = *(undefined8 *)((longlong)puVar21 + lVar11);
                    *(undefined8 *)(pbVar22 + 8) = uVar10;
                    pbVar18 = (byte *)((longlong)puVar21 + lVar11 + 0x10);
                    uVar10 = *(undefined8 *)(pbVar18 + 8);
                    *(undefined8 *)(pbVar22 + 0x10) = *(undefined8 *)pbVar18;
                    *(undefined8 *)(pbVar22 + 0x18) = uVar10;
                    lVar11 = lVar11 + 0x20;
                  } while (pbVar22 + 0x20 < puVar32 + (longlong)puVar12);
                }
              }
            }
          }
          else {
LAB_00f291ba:
            param_3 = (ulonglong *)FUN_00f2970d(local_158,&local_148,puVar23,local_168);
          }
          puVar21 = param_3;
          if ((ulonglong *)0xffffffffffffff88 < param_3) goto LAB_00f28b33;
          puVar24 = (ulonglong *)((longlong)puVar24 + (longlong)param_3);
          local_170 = local_158;
        }
        else {
          uVar33 = *puVar12;
          param_3 = (ulonglong *)((longlong)local_148 + uVar33);
          if (param_3 <= local_170) {
            puVar32 = (undefined1 *)local_f8[uVar14 * 3 + 1];
            puVar12 = (ulonglong *)(puVar32 + uVar33);
            if ((byte *)((longlong)puVar24 + (longlong)puVar12) <= local_190) {
              uVar14 = local_f8[uVar14 * 3 + 2];
              puVar34 = (ulonglong *)((longlong)puVar24 + uVar33);
              uVar19 = local_148[1];
              *puVar24 = *local_148;
              puVar24[1] = uVar19;
              if (0x10 < uVar33) {
                uVar19 = local_148[3];
                puVar24[2] = local_148[2];
                puVar24[3] = uVar19;
                if (0x10 < (longlong)(uVar33 - 0x10)) {
                  lVar11 = 0;
                  do {
                    pbVar18 = (byte *)((longlong)local_148 + lVar11 + 0x20);
                    uVar10 = *(undefined8 *)(pbVar18 + 8);
                    pbVar22 = (byte *)((longlong)puVar24 + lVar11 + 0x20);
                    *(undefined8 *)pbVar22 = *(undefined8 *)pbVar18;
                    *(undefined8 *)(pbVar22 + 8) = uVar10;
                    pbVar18 = (byte *)((longlong)local_148 + lVar11 + 0x30);
                    uVar10 = *(undefined8 *)(pbVar18 + 8);
                    *(undefined8 *)(pbVar22 + 0x10) = *(undefined8 *)pbVar18;
                    *(undefined8 *)(pbVar22 + 0x18) = uVar10;
                    lVar11 = lVar11 + 0x20;
                  } while (pbVar22 + 0x20 < puVar34);
                }
              }
              local_148 = param_3;
              puVar13 = (ulonglong *)((longlong)puVar34 - uVar14);
              if ((ulonglong)((longlong)puVar34 - (longlong)puVar23) < uVar14) {
                if ((ulonglong)((longlong)puVar34 - local_168) < uVar14) goto LAB_00f28b33;
                lVar11 = (longlong)((longlong)puVar34 - uVar14) - (longlong)puVar23;
                if ((void *)((longlong)((longlong)local_160 + lVar11) + (longlong)puVar32) <=
                    local_160) {
                  _memmove(local_160,puVar32,(size_t)param_3);
                  goto LAB_00f28fde;
                }
                _memmove(local_160,(void *)-lVar11,(size_t)param_3);
                puVar34 = (ulonglong *)((longlong)puVar34 - lVar11);
                puVar32 = puVar32 + lVar11;
                puVar13 = puVar23;
              }
              if (uVar14 < 0x10) {
                if (uVar14 < 8) {
                  iVar26 = *(int *)(&DAT_023e4ca0 + uVar14 * 4);
                  *(byte *)puVar34 = (byte)*puVar13;
                  *(byte *)((longlong)puVar34 + 1) = *(byte *)((longlong)puVar13 + 1);
                  *(byte *)((longlong)puVar34 + 2) = *(byte *)((longlong)puVar13 + 2);
                  *(byte *)((longlong)puVar34 + 3) = *(byte *)((longlong)puVar13 + 3);
                  pbVar22 = (byte *)((longlong)puVar13 +
                                    (ulonglong)*(uint *)(&DAT_023e4c80 + uVar14 * 4));
                  puVar13 = (ulonglong *)
                            ((longlong)puVar13 +
                            ((ulonglong)*(uint *)(&DAT_023e4c80 + uVar14 * 4) - (longlong)iVar26));
                  *(undefined4 *)((longlong)puVar34 + 4) = *(undefined4 *)pbVar22;
                }
                else {
                  *puVar34 = *puVar13;
                }
                param_3 = puVar12;
                if (&MACH_HEADER.cpusubtype < puVar32) {
                  puVar21 = puVar13 + 1;
                  puVar30 = puVar34 + 1;
                  if ((longlong)puVar30 - (longlong)puVar21 < 0x10) {
                    do {
                      *puVar30 = *puVar21;
                      puVar30 = puVar30 + 1;
                      puVar21 = puVar21 + 1;
                    } while (puVar30 < (ulonglong *)((longlong)puVar34 + (longlong)puVar32));
                  }
                  else {
                    uVar14 = puVar13[2];
                    *puVar30 = *puVar21;
                    puVar34[2] = uVar14;
                    if (0x18 < (longlong)puVar32) {
                      lVar11 = 0;
                      do {
                        pbVar18 = (byte *)((longlong)puVar13 + lVar11 + 0x18);
                        uVar10 = *(undefined8 *)(pbVar18 + 8);
                        pbVar22 = (byte *)((longlong)puVar34 + lVar11 + 0x18);
                        *(undefined8 *)pbVar22 = *(undefined8 *)pbVar18;
                        *(undefined8 *)(pbVar22 + 8) = uVar10;
                        pbVar18 = (byte *)((longlong)puVar13 + lVar11 + 0x28);
                        uVar10 = *(undefined8 *)(pbVar18 + 8);
                        *(undefined8 *)(pbVar22 + 0x10) = *(undefined8 *)pbVar18;
                        *(undefined8 *)(pbVar22 + 0x18) = uVar10;
                        lVar11 = lVar11 + 0x20;
                      } while (pbVar22 + 0x20 < (ulonglong *)((longlong)puVar34 + (longlong)puVar32)
                              );
                    }
                  }
                }
              }
              else {
                uVar14 = puVar13[1];
                *puVar34 = *puVar13;
                puVar34[1] = uVar14;
                if (0x10 < (longlong)puVar32) {
                  lVar11 = 0x10;
                  do {
                    uVar10 = *(undefined8 *)((byte *)((longlong)puVar13 + lVar11) + 8);
                    pbVar22 = (byte *)((longlong)puVar34 + lVar11);
                    *(undefined8 *)pbVar22 = *(undefined8 *)((longlong)puVar13 + lVar11);
                    *(undefined8 *)(pbVar22 + 8) = uVar10;
                    pbVar18 = (byte *)((longlong)puVar13 + lVar11 + 0x10);
                    uVar10 = *(undefined8 *)(pbVar18 + 8);
                    *(undefined8 *)(pbVar22 + 0x10) = *(undefined8 *)pbVar18;
                    *(undefined8 *)(pbVar22 + 0x18) = uVar10;
                    lVar11 = lVar11 + 0x20;
                  } while (pbVar22 + 0x20 < puVar32 + (longlong)puVar34);
                }
              }
              goto LAB_00f28fde;
            }
          }
          param_3 = puVar23;
          puVar12 = (ulonglong *)FUN_00f2970d(local_170,&local_148,puVar23,local_168);
LAB_00f28fde:
          puVar21 = puVar12;
          if ((ulonglong *)0xffffffffffffff88 < puVar12) goto LAB_00f28b33;
          puVar24 = (ulonglong *)((longlong)puVar24 + (longlong)puVar12);
        }
        uVar31 = uVar31 + 1;
      } while (uVar31 != param_4);
    }
    lVar11 = 0;
    do {
      param_1 = (ulonglong *)(ulonglong)*(uint *)(local_1b8 + lVar11);
      *(uint *)((longlong)unaff_RDI + lVar11 * 4 + 0x683c) = *(uint *)(local_1b8 + lVar11);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 3);
    iVar26 = *(int *)(unaff_RDI + 0xed4);
    puVar12 = local_170;
  }
  sVar25 = (size_t)param_3;
  puVar23 = local_148;
  if (iVar26 == 2) {
    pbVar22 = (byte *)((longlong)puVar12 - (longlong)local_148);
    local_180 = (ulonglong *)0xffffffffffffffba;
    puVar21 = local_180;
    if (pbVar16 + -(longlong)puVar24 < pbVar22) goto LAB_00f28b33;
    if (puVar24 == (ulonglong *)0x0) {
      puVar24 = (ulonglong *)0x0;
    }
    else {
      _memmove(param_1,pbVar22,sVar25);
      puVar24 = (ulonglong *)((longlong)puVar24 + (longlong)pbVar22);
    }
    puVar23 = (ulonglong *)((longlong)unaff_RDI + 0x76a4);
    puVar12 = (ulonglong *)((longlong)unaff_RDI + 0x176a4);
  }
  pbVar22 = (byte *)((longlong)puVar12 - (longlong)puVar23);
  local_180 = (ulonglong *)0xffffffffffffffba;
  puVar21 = local_180;
  if (pbVar22 <= pbVar16 + -(longlong)puVar24) {
    if (puVar24 == (ulonglong *)0x0) {
      pbVar22 = (byte *)0x0;
    }
    else {
      _memmove(param_1,pbVar22,sVar25);
      pbVar22 = (byte *)((longlong)puVar24 + (longlong)pbVar22);
    }
    puVar21 = (ulonglong *)(pbVar22 + -(longlong)unaff_RSI);
  }
LAB_00f28b33:
  local_180 = puVar21;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return local_180;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_00f295a2:
  local_180 = (ulonglong *)0xffffffffffffffba;
  puVar21 = local_180;
  goto LAB_00f28b33;
}


