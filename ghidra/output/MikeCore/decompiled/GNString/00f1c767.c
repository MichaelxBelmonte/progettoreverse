// Function: FUN_00f1c767
// Address: 00f1c767
// Size: 3846 bytes
// Class: GNString


longlong FUN_00f1c767(ulonglong *param_1,uint *param_2,longlong param_3,int param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 uVar14;
  int iVar15;
  char cVar16;
  uint uVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  byte bVar21;
  byte bVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  uint uVar28;
  ulonglong *puVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong *puVar32;
  uint uVar33;
  int iVar34;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong *puVar35;
  longlong lVar36;
  longlong lVar37;
  int *piVar38;
  uint uVar39;
  ulonglong *puVar40;
  ulonglong *puVar41;
  ulonglong *puVar42;
  uint uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  ulonglong *puVar47;
  ulonglong uVar48;
  ulonglong *local_98;
  ulonglong *local_88;
  ulonglong local_70;
  ulonglong *local_58;
  
  lVar20 = *(longlong *)(unaff_RDI + 8);
  iVar15 = (int)lVar20;
  iVar34 = (int)param_1 - iVar15;
  uVar30 = 1 << (*(byte *)(unaff_RDI + 0x100) & 0x1f);
  iVar23 = (int)param_3 + iVar34;
  uVar25 = *(uint *)(unaff_RDI + 0x1c);
  uVar13 = iVar23 - uVar30;
  if (iVar23 - uVar25 <= uVar30) {
    uVar13 = uVar25;
  }
  if (*(int *)(unaff_RDI + 0x28) != 0) {
    uVar13 = uVar25;
  }
  uVar25 = *(uint *)(unaff_RDI + 0x18);
  uVar48 = (ulonglong)uVar25;
  if (uVar25 < uVar13) {
    uVar48 = (ulonglong)uVar13;
  }
  if (uVar25 <= uVar13) {
    lVar20 = _ZSTD_compressBlock_fast(param_1);
    return lVar20;
  }
  uVar45 = (ulonglong)(*(int *)(unaff_RDI + 0x114) + (uint)(*(int *)(unaff_RDI + 0x114) == 0) + 1);
  puVar4 = (ulonglong *)((longlong)param_1 + param_3);
  puVar40 = (ulonglong *)((longlong)param_1 + param_3 + -8);
  uVar25 = param_2[1];
  uVar43 = iVar34 - uVar13;
  uVar17 = 0;
  uVar30 = uVar25;
  if (uVar43 <= uVar25) {
    uVar30 = uVar17;
    uVar17 = uVar25;
  }
  uVar25 = *param_2;
  uVar39 = 0;
  uVar33 = uVar25;
  if (uVar25 < uVar43) {
    uVar33 = 0;
    uVar39 = uVar25;
  }
  puVar18 = (ulonglong *)((longlong)param_1 + uVar45 + 1);
  local_88 = param_1;
  if (puVar18 < puVar40) {
    lVar11 = *(longlong *)(unaff_RDI + 0x70);
    lVar12 = *(longlong *)(unaff_RDI + 0x10);
    puVar5 = (ulonglong *)(lVar20 + uVar48);
    puVar6 = (ulonglong *)(lVar12 + uVar48);
    cVar16 = (char)*(undefined4 *)(unaff_RDI + 0x108);
    bVar21 = 0x40 - cVar16;
    bVar22 = 0x20 - cVar16;
    puVar1 = (ulonglong *)((longlong)puVar4 - 7);
    puVar2 = puVar4 + -4;
    lVar9 = uVar48 + 8 + lVar20;
    do {
      iVar34 = param_4 + -5;
      switch(iVar34) {
      case 0:
        lVar36 = -0x30e4432345000000;
        break;
      case 1:
        lVar36 = -0x30e4432340650000;
        break;
      case 2:
        lVar36 = -0x30e44323405a9d00;
        break;
      case 3:
        uVar26 = *local_88 * -0x30e44323485a9b9d >> (bVar21 & 0x3f);
        local_70 = (ulonglong)(*(longlong *)((longlong)local_88 + 1) * -0x30e44323485a9b9d) >>
                   (bVar21 & 0x3f);
        goto LAB_00f1c99e;
      default:
        uVar26 = (ulonglong)((uint)*local_88 * -0x61c8864f >> (bVar22 & 0x1f));
        local_70 = (ulonglong)
                   ((uint)(*(int *)((longlong)local_88 + 1) * -0x61c8864f) >> (bVar22 & 0x1f));
        goto LAB_00f1c99e;
      }
      uVar26 = *local_88 * lVar36 >> (bVar21 & 0x3f);
      local_70 = (ulonglong)(lVar36 * *(longlong *)((longlong)local_88 + 1)) >> (bVar21 & 0x3f);
LAB_00f1c99e:
      local_58 = (ulonglong *)((longlong)local_88 + 1);
      local_98 = local_88 + 0x10;
      uVar25 = *(uint *)(lVar11 + uVar26 * 4);
      uVar43 = (uint)uVar48;
      uVar31 = uVar45;
      puVar32 = (ulonglong *)((longlong)local_88 + uVar45);
      lVar36 = lVar20;
      puVar27 = local_88;
      if (uVar25 < uVar43) {
        lVar36 = lVar12;
      }
      while( true ) {
        puVar29 = puVar32;
        puVar42 = puVar18;
        uVar24 = ((int)puVar29 - iVar15) - uVar39;
        lVar37 = lVar20;
        if (uVar24 < uVar43) {
          lVar37 = lVar12;
        }
        if ((uVar39 == 0) || (uVar43 - uVar24 < 4)) {
          uVar28 = (uint)*puVar29 ^ 1;
        }
        else {
          uVar28 = *(uint *)(lVar37 + (ulonglong)uVar24);
        }
        uVar44 = (longlong)puVar27 - lVar20;
        *(int *)(lVar11 + uVar26 * 4) = (int)uVar44;
        puVar18 = puVar4;
        if ((uint)*puVar29 == uVar28) {
          if (uVar24 < uVar43) {
            puVar18 = puVar6;
          }
          uVar26 = (ulonglong)
                   (*(char *)((longlong)puVar29 - 1) == *(char *)(lVar37 + -1 + (ulonglong)uVar24));
          uVar31 = uVar26 | 4;
          iVar23 = 1;
          puVar32 = (ulonglong *)((lVar37 + (ulonglong)uVar24) - uVar26);
          puVar27 = (ulonglong *)((longlong)puVar29 - uVar26);
          uVar24 = uVar39;
          goto LAB_00f1cd78;
        }
        if (uVar25 < uVar13) {
          uVar24 = (uint)*puVar27;
          uVar28 = uVar24 ^ 1;
        }
        else {
          uVar28 = *(uint *)(lVar36 + (ulonglong)uVar25);
          uVar24 = (uint)*puVar27;
        }
        if (uVar24 == uVar28) break;
        uVar25 = *(uint *)(lVar11 + local_70 * 4);
        lVar36 = lVar20;
        if (uVar25 < uVar43) {
          lVar36 = lVar12;
        }
        switch(iVar34) {
        case 0:
          lVar37 = -0x30e4432345000000;
          break;
        case 1:
          lVar37 = -0x30e4432340650000;
          break;
        case 2:
          lVar37 = -0x30e44323405a9d00;
          break;
        case 3:
          uVar26 = *puVar29 * -0x30e44323485a9b9d;
          goto LAB_00f1cafb;
        default:
          uVar26 = (ulonglong)((uint)*puVar29 * -0x61c8864f >> (bVar22 & 0x1f));
          goto LAB_00f1cb02;
        }
        uVar26 = lVar37 * *puVar29;
LAB_00f1cafb:
        uVar26 = uVar26 >> (bVar21 & 0x3f);
LAB_00f1cb02:
        uVar44 = (longlong)local_58 - lVar20;
        *(int *)(lVar11 + local_70 * 4) = (int)uVar44;
        if (uVar25 < uVar13) {
          uVar24 = (uint)*local_58;
          uVar28 = uVar24 ^ 1;
        }
        else {
          uVar28 = *(uint *)(lVar36 + (ulonglong)uVar25);
          uVar24 = (uint)*local_58;
        }
        puVar27 = local_58;
        local_70 = uVar26;
        local_58 = puVar29;
        if (uVar24 == uVar28) break;
        uVar25 = *(uint *)(lVar11 + uVar26 * 4);
        lVar36 = lVar20;
        if (uVar25 < uVar43) {
          lVar36 = lVar12;
        }
        switch(iVar34) {
        case 0:
          lVar37 = -0x30e4432345000000;
          break;
        case 1:
          lVar37 = -0x30e4432340650000;
          break;
        case 2:
          lVar37 = -0x30e44323405a9d00;
          break;
        case 3:
          local_70 = *puVar42 * -0x30e44323485a9b9d;
          goto LAB_00f1cbd5;
        default:
          local_70 = (ulonglong)((uint)*puVar42 * -0x61c8864f >> (bVar22 & 0x1f));
          goto LAB_00f1cbe3;
        }
        local_70 = lVar37 * *puVar42;
LAB_00f1cbd5:
        local_70 = local_70 >> (bVar21 & 0x3f);
LAB_00f1cbe3:
        puVar32 = (ulonglong *)((longlong)puVar29 + uVar31);
        puVar18 = (ulonglong *)((longlong)puVar42 + uVar31);
        if (local_98 <= puVar32) {
          uVar31 = uVar31 + 1;
          local_98 = local_98 + 0x10;
        }
        local_58 = puVar42;
        puVar27 = puVar29;
        if (puVar40 <= puVar18) goto LAB_00f1d629;
      }
      uVar24 = (int)uVar44 - uVar25;
      puVar42 = puVar5;
      if (uVar25 < uVar43) {
        puVar18 = puVar6;
        puVar42 = (ulonglong *)((ulonglong)uVar13 + lVar12);
      }
      puVar32 = (ulonglong *)(lVar36 + (ulonglong)uVar25);
      iVar23 = uVar24 + 3;
      uVar31 = 4;
      uVar30 = uVar39;
      if ((puVar42 < puVar32) && (local_88 < puVar27)) {
        uVar31 = 4;
        puVar32 = (ulonglong *)((ulonglong)uVar25 + lVar36);
        do {
          puVar35 = (ulonglong *)((longlong)puVar32 - 1);
          puVar29 = (ulonglong *)((longlong)puVar27 + -1);
          if ((*(char *)puVar29 != (char)*puVar35) ||
             (uVar31 = uVar31 + 1, puVar32 = puVar35, puVar27 = puVar29, puVar35 <= puVar42)) break;
        } while (local_88 < puVar29);
      }
LAB_00f1cd78:
      puVar42 = (ulonglong *)((longlong)puVar27 + uVar31);
      puVar29 = (ulonglong *)((longlong)puVar32 + uVar31);
      puVar35 = (ulonglong *)(((longlong)puVar18 - (longlong)puVar29) + (longlong)puVar42);
      if (puVar4 <= puVar35) {
        puVar35 = puVar4;
      }
      puVar41 = puVar29;
      puVar47 = puVar42;
      if (puVar42 < (ulonglong *)((longlong)puVar35 - 7U)) {
        uVar26 = *puVar42 ^ *puVar29;
        if (uVar26 == 0) {
          lVar36 = 0;
          do {
            if ((ulonglong *)((longlong)puVar35 - 7U) <=
                (ulonglong *)((longlong)puVar27 + lVar36 + uVar31 + 8)) {
              puVar41 = (ulonglong *)((longlong)puVar32 + lVar36 + uVar31 + 8);
              puVar47 = (ulonglong *)((longlong)puVar27 + lVar36 + 8 + uVar31);
              goto LAB_00f1ce4d;
            }
            lVar37 = lVar36 + 8;
            uVar26 = *(ulonglong *)((longlong)puVar27 + lVar36 + uVar31 + 8) ^
                     *(ulonglong *)((longlong)puVar32 + lVar36 + uVar31 + 8);
            lVar36 = lVar37;
          } while (uVar26 == 0);
          uVar46 = 0;
          if (uVar26 != 0) {
            for (; (uVar26 >> uVar46 & 1) == 0; uVar46 = uVar46 + 1) {
            }
          }
          uVar46 = (uVar46 >> 3) + lVar37;
        }
        else {
          uVar46 = 0;
          if (uVar26 != 0) {
            for (; (uVar26 >> uVar46 & 1) == 0; uVar46 = uVar46 + 1) {
            }
          }
          uVar46 = uVar46 >> 3;
        }
      }
      else {
LAB_00f1ce4d:
        if ((puVar47 < (ulonglong *)((longlong)puVar35 - 3U)) && ((uint)*puVar41 == (uint)*puVar47))
        {
          puVar47 = (ulonglong *)((longlong)puVar47 + 4);
          puVar41 = (ulonglong *)((longlong)puVar41 + 4);
        }
        if ((puVar47 < (ulonglong *)((longlong)puVar35 - 1U)) &&
           ((short)*puVar41 == (short)*puVar47)) {
          puVar47 = (ulonglong *)((longlong)puVar47 + 2);
          puVar41 = (ulonglong *)((longlong)puVar41 + 2);
        }
        if (puVar47 < puVar35) {
          puVar47 = (ulonglong *)((longlong)puVar47 + (ulonglong)((char)*puVar41 == (char)*puVar47))
          ;
        }
        uVar46 = (longlong)puVar47 - (longlong)puVar42;
      }
      if ((ulonglong *)((longlong)puVar29 + uVar46) == puVar18) {
        puVar42 = (ulonglong *)((longlong)puVar42 + uVar46);
        puVar32 = puVar42;
        puVar18 = puVar5;
        if (puVar42 < puVar1) {
          uVar26 = *puVar42 ^ *puVar5;
          if (uVar26 == 0) {
            lVar36 = uVar31 + uVar46 + 8;
            lVar37 = 0;
            do {
              if (puVar1 <= (ulonglong *)((longlong)puVar27 + lVar37 + lVar36)) {
                puVar18 = (ulonglong *)(lVar9 + lVar37);
                puVar32 = (ulonglong *)((longlong)puVar27 + lVar37 + uVar31 + uVar46 + 8);
                goto LAB_00f1cf76;
              }
              lVar3 = lVar37 + 8;
              uVar26 = *(ulonglong *)((longlong)puVar27 + lVar37 + lVar36) ^
                       *(ulonglong *)(lVar9 + lVar37);
              lVar37 = lVar3;
            } while (uVar26 == 0);
            uVar19 = 0;
            if (uVar26 != 0) {
              for (; (uVar26 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
              }
            }
            uVar19 = (uVar19 >> 3) + lVar3;
          }
          else {
            uVar19 = 0;
            if (uVar26 != 0) {
              for (; (uVar26 >> uVar19 & 1) == 0; uVar19 = uVar19 + 1) {
              }
            }
            uVar19 = uVar19 >> 3;
          }
        }
        else {
LAB_00f1cf76:
          if ((puVar32 < (ulonglong *)((longlong)puVar4 - 3U)) && ((uint)*puVar18 == (uint)*puVar32)
             ) {
            puVar32 = (ulonglong *)((longlong)puVar32 + 4);
            puVar18 = (ulonglong *)((longlong)puVar18 + 4);
          }
          if ((puVar32 < (ulonglong *)((longlong)puVar4 - 1U)) &&
             ((short)*puVar18 == (short)*puVar32)) {
            puVar32 = (ulonglong *)((longlong)puVar32 + 2);
            puVar18 = (ulonglong *)((longlong)puVar18 + 2);
          }
          if (puVar32 < puVar4) {
            puVar32 = (ulonglong *)
                      ((longlong)puVar32 + (ulonglong)((char)*puVar18 == (char)*puVar32));
          }
          uVar19 = (longlong)puVar32 - (longlong)puVar42;
        }
        uVar46 = uVar46 + uVar19;
      }
      uVar26 = (longlong)puVar27 - (longlong)local_88;
      if (puVar2 < puVar27) {
        puVar32 = (ulonglong *)unaff_RSI[3];
        puVar18 = puVar32;
        puVar42 = local_88;
        if (local_88 <= puVar2) {
          puVar18 = (ulonglong *)((longlong)puVar32 + ((longlong)puVar2 - (longlong)local_88));
          uVar19 = local_88[1];
          *puVar32 = *local_88;
          puVar32[1] = uVar19;
          puVar42 = puVar2;
          if (0x10 < (longlong)puVar2 - (longlong)local_88) {
            lVar36 = 0x10;
            do {
              uVar14 = ((undefined8 *)((longlong)local_88 + lVar36))[1];
              puVar7 = (undefined8 *)((longlong)puVar32 + lVar36);
              *puVar7 = *(undefined8 *)((longlong)local_88 + lVar36);
              puVar7[1] = uVar14;
              puVar10 = (undefined8 *)((longlong)local_88 + lVar36 + 0x10);
              uVar14 = puVar10[1];
              puVar7[2] = *puVar10;
              puVar7[3] = uVar14;
              lVar36 = lVar36 + 0x20;
            } while (puVar7 + 4 < puVar18);
          }
        }
        if (puVar42 < puVar27) {
          lVar36 = 0;
          do {
            *(undefined1 *)((longlong)puVar18 + lVar36) =
                 *(undefined1 *)((longlong)puVar42 + lVar36);
            lVar36 = lVar36 + 1;
          } while ((longlong)puVar27 - (longlong)puVar42 != lVar36);
        }
LAB_00f1d0bd:
        unaff_RSI[3] = unaff_RSI[3] + uVar26;
        if (0xffff < uVar26) {
          *(undefined4 *)(unaff_RSI + 9) = 1;
          *(int *)((longlong)unaff_RSI + 0x4c) = (int)((ulonglong)(unaff_RSI[1] - *unaff_RSI) >> 3);
        }
      }
      else {
        puVar18 = (ulonglong *)unaff_RSI[3];
        uVar19 = local_88[1];
        *puVar18 = *local_88;
        puVar18[1] = uVar19;
        lVar36 = unaff_RSI[3];
        if (0x10 < uVar26) {
          uVar19 = local_88[3];
          *(ulonglong *)(lVar36 + 0x10) = local_88[2];
          *(ulonglong *)(lVar36 + 0x18) = uVar19;
          if (0x20 < (longlong)uVar26) {
            lVar37 = 0;
            do {
              puVar10 = (undefined8 *)((longlong)local_88 + lVar37 + 0x20);
              uVar14 = puVar10[1];
              puVar7 = (undefined8 *)(lVar36 + 0x20 + lVar37);
              *puVar7 = *puVar10;
              puVar7[1] = uVar14;
              puVar10 = (undefined8 *)((longlong)local_88 + lVar37 + 0x30);
              uVar14 = puVar10[1];
              puVar7[2] = *puVar10;
              puVar7[3] = uVar14;
              lVar37 = lVar37 + 0x20;
            } while (puVar7 + 4 < (undefined8 *)(lVar36 + uVar26));
          }
          goto LAB_00f1d0bd;
        }
        unaff_RSI[3] = lVar36 + uVar26;
      }
      piVar38 = (int *)unaff_RSI[1];
      *(short *)(piVar38 + 1) = (short)uVar26;
      *piVar38 = iVar23;
      uVar26 = (uVar46 + uVar31) - 3;
      if (0xffff < uVar26) {
        *(undefined4 *)(unaff_RSI + 9) = 2;
        *(int *)((longlong)unaff_RSI + 0x4c) =
             (int)((ulonglong)((longlong)piVar38 - *unaff_RSI) >> 3);
      }
      *(short *)((longlong)piVar38 + 6) = (short)uVar26;
      piVar38 = piVar38 + 2;
      unaff_RSI[1] = (longlong)piVar38;
      local_88 = (ulonglong *)((longlong)puVar27 + uVar46 + uVar31);
      if (local_58 < local_88) {
        *(int *)(lVar11 + local_70 * 4) = (int)local_58 - iVar15;
      }
      uVar39 = uVar24;
      if (local_88 <= puVar40) {
        uVar26 = uVar44 & 0xffffffff;
        iVar23 = (int)uVar44 + 2;
        switch(iVar34) {
        case 0:
          lVar36 = -0x30e4432345000000;
          break;
        case 1:
          lVar36 = -0x30e4432340650000;
          break;
        case 2:
          lVar36 = -0x30e44323405a9d00;
          break;
        case 3:
          *(int *)(lVar11 + ((ulonglong)(*(longlong *)(lVar20 + 2 + uVar26) * -0x30e44323485a9b9d)
                            >> (bVar21 & 0x3f)) * 4) = iVar23;
          uVar26 = *(longlong *)((longlong)local_88 + -2) * -0x30e44323485a9b9d;
          goto LAB_00f1d23c;
        default:
          *(int *)(lVar11 + (ulonglong)
                            ((uint)(*(int *)(lVar20 + 2 + uVar26) * -0x61c8864f) >> (bVar22 & 0x1f))
                            * 4) = iVar23;
          uVar26 = (ulonglong)
                   ((uint)(*(int *)((longlong)local_88 + -2) * -0x61c8864f) >> (bVar22 & 0x1f));
          goto LAB_00f1d23f;
        }
        *(int *)(lVar11 + ((ulonglong)(*(longlong *)(lVar20 + 2 + uVar26) * lVar36) >>
                          (bVar21 & 0x3f)) * 4) = iVar23;
        uVar26 = lVar36 * *(longlong *)((longlong)local_88 + -2);
LAB_00f1d23c:
        uVar26 = uVar26 >> (bVar21 & 0x3f);
LAB_00f1d23f:
        *(int *)(lVar11 + uVar26 * 4) = ((int)local_88 + -2) - iVar15;
        do {
          uVar28 = uVar30;
          iVar23 = (int)local_88 - iVar15;
          uVar25 = iVar23 - uVar28;
          lVar36 = lVar20;
          if (uVar25 < uVar43) {
            lVar36 = lVar12;
          }
          uVar39 = uVar24;
          uVar30 = uVar28;
          if (((uVar28 == 0) || (~uVar25 + uVar43 < 3)) ||
             (puVar8 = (uint *)(lVar36 + (ulonglong)uVar25), *puVar8 != (uint)*local_88)) break;
          puVar18 = puVar4;
          if (uVar25 < uVar43) {
            puVar18 = puVar6;
          }
          puVar32 = (ulonglong *)((longlong)local_88 + 4);
          puVar27 = (ulonglong *)(puVar8 + 1);
          puVar42 = (ulonglong *)((longlong)local_88 + (longlong)puVar18 + (4 - (longlong)puVar27));
          if (puVar4 <= puVar42) {
            puVar42 = puVar4;
          }
          puVar29 = puVar27;
          puVar35 = puVar32;
          if (puVar32 < (ulonglong *)((longlong)puVar42 - 7U)) {
            uVar26 = *puVar32 ^ *puVar27;
            if (uVar26 == 0) {
              lVar37 = 0;
              do {
                if ((ulonglong *)((longlong)puVar42 - 7U) <=
                    (ulonglong *)((longlong)local_88 + lVar37 + 0xc)) {
                  puVar29 = (ulonglong *)((longlong)puVar8 + lVar37 + 0xc);
                  puVar35 = (ulonglong *)((longlong)local_88 + lVar37 + 0xc);
                  goto LAB_00f1d373;
                }
                lVar3 = lVar37 + 8;
                uVar26 = *(ulonglong *)((longlong)local_88 + lVar37 + 0xc) ^
                         *(ulonglong *)(lVar36 + (ulonglong)uVar25 + 0xc + lVar37);
                lVar37 = lVar3;
              } while (uVar26 == 0);
              uVar31 = 0;
              if (uVar26 != 0) {
                for (; (uVar26 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
                }
              }
              uVar31 = (uVar31 >> 3) + lVar3;
            }
            else {
              uVar31 = 0;
              if (uVar26 != 0) {
                for (; (uVar26 >> uVar31 & 1) == 0; uVar31 = uVar31 + 1) {
                }
              }
              uVar31 = uVar31 >> 3;
            }
          }
          else {
LAB_00f1d373:
            if ((puVar35 < (ulonglong *)((longlong)puVar42 - 3U)) &&
               ((uint)*puVar29 == (uint)*puVar35)) {
              puVar35 = (ulonglong *)((longlong)puVar35 + 4);
              puVar29 = (ulonglong *)((longlong)puVar29 + 4);
            }
            if ((puVar35 < (ulonglong *)((longlong)puVar42 - 1U)) &&
               ((short)*puVar29 == (short)*puVar35)) {
              puVar35 = (ulonglong *)((longlong)puVar35 + 2);
              puVar29 = (ulonglong *)((longlong)puVar29 + 2);
            }
            if (puVar35 < puVar42) {
              puVar35 = (ulonglong *)
                        ((longlong)puVar35 + (ulonglong)((char)*puVar29 == (char)*puVar35));
            }
            uVar31 = (longlong)puVar35 - (longlong)puVar32;
          }
          if ((ulonglong *)((longlong)puVar27 + uVar31) == puVar18) {
            puVar32 = (ulonglong *)((longlong)puVar32 + uVar31);
            puVar18 = puVar32;
            puVar27 = puVar5;
            if (puVar32 < puVar1) {
              uVar26 = *puVar32 ^ *puVar5;
              if (uVar26 == 0) {
                lVar36 = 0;
                do {
                  if (puVar1 <= (ulonglong *)((longlong)local_88 + lVar36 + uVar31 + 0xc)) {
                    puVar27 = (ulonglong *)(lVar9 + lVar36);
                    puVar18 = (ulonglong *)((longlong)local_88 + lVar36 + uVar31 + 0xc);
                    goto LAB_00f1d48e;
                  }
                  lVar37 = lVar36 + 8;
                  uVar26 = *(ulonglong *)((longlong)local_88 + lVar36 + uVar31 + 0xc) ^
                           *(ulonglong *)(lVar9 + lVar36);
                  lVar36 = lVar37;
                } while (uVar26 == 0);
                uVar44 = 0;
                if (uVar26 != 0) {
                  for (; (uVar26 >> uVar44 & 1) == 0; uVar44 = uVar44 + 1) {
                  }
                }
                uVar44 = (uVar44 >> 3) + lVar37;
              }
              else {
                uVar44 = 0;
                if (uVar26 != 0) {
                  for (; (uVar26 >> uVar44 & 1) == 0; uVar44 = uVar44 + 1) {
                  }
                }
                uVar44 = uVar44 >> 3;
              }
            }
            else {
LAB_00f1d48e:
              if ((puVar18 < (ulonglong *)((longlong)puVar4 - 3U)) &&
                 ((uint)*puVar27 == (uint)*puVar18)) {
                puVar18 = (ulonglong *)((longlong)puVar18 + 4);
                puVar27 = (ulonglong *)((longlong)puVar27 + 4);
              }
              if ((puVar18 < (ulonglong *)((longlong)puVar4 - 1U)) &&
                 ((short)*puVar27 == (short)*puVar18)) {
                puVar18 = (ulonglong *)((longlong)puVar18 + 2);
                puVar27 = (ulonglong *)((longlong)puVar27 + 2);
              }
              if (puVar18 < puVar4) {
                puVar18 = (ulonglong *)
                          ((longlong)puVar18 + (ulonglong)((char)*puVar27 == (char)*puVar18));
              }
              uVar44 = (longlong)puVar18 - (longlong)puVar32;
            }
            uVar31 = uVar31 + uVar44;
          }
          if (local_88 <= puVar2) {
            puVar18 = (ulonglong *)unaff_RSI[3];
            uVar26 = local_88[1];
            *puVar18 = *local_88;
            puVar18[1] = uVar26;
            piVar38 = (int *)unaff_RSI[1];
          }
          *(undefined2 *)(piVar38 + 1) = 0;
          *piVar38 = 1;
          if (0xffff < uVar31 + 1) {
            *(undefined4 *)(unaff_RSI + 9) = 2;
            *(int *)((longlong)unaff_RSI + 0x4c) =
                 (int)((ulonglong)((longlong)piVar38 - *unaff_RSI) >> 3);
          }
          *(short *)((longlong)piVar38 + 6) = (short)(uVar31 + 1);
          piVar38 = piVar38 + 2;
          unaff_RSI[1] = (longlong)piVar38;
          switch(iVar34) {
          case 0:
            lVar36 = -0x30e4432345000000;
            break;
          case 1:
            lVar36 = -0x30e4432340650000;
            break;
          case 2:
            lVar36 = -0x30e44323405a9d00;
            break;
          case 3:
            uVar26 = *local_88 * -0x30e44323485a9b9d;
            goto LAB_00f1d5a8;
          default:
            uVar26 = (ulonglong)((uint)*local_88 * -0x61c8864f >> (bVar22 & 0x1f));
            goto LAB_00f1d5af;
          }
          uVar26 = lVar36 * *local_88;
LAB_00f1d5a8:
          uVar26 = uVar26 >> (bVar21 & 0x3f);
LAB_00f1d5af:
          *(int *)(lVar11 + uVar26 * 4) = iVar23;
          local_88 = (ulonglong *)((longlong)local_88 + uVar31 + 4);
          uVar39 = uVar28;
          uVar30 = uVar24;
          uVar24 = uVar28;
        } while (local_88 <= puVar40);
      }
      puVar18 = (ulonglong *)((longlong)local_88 + uVar45 + 1);
    } while (puVar18 < puVar40);
  }
LAB_00f1d629:
  uVar25 = uVar33;
  if (uVar39 == 0) {
    uVar39 = uVar33;
    uVar25 = uVar17;
  }
  if (uVar33 == 0) {
    uVar25 = uVar17;
  }
  *param_2 = uVar39;
  if (uVar30 != 0) {
    uVar25 = uVar30;
  }
  param_2[1] = uVar25;
  return (longlong)puVar4 - (longlong)local_88;
}


