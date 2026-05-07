// Function: FUN_00e9cf20
// Address: 00e9cf20
// Size: 3964 bytes
// Class: GNString
// String references:
//   "        bucket sorting ...\n"
//   "        depth %6d has "
//   "%6d unresolved strings\n"
//   "        reconstructing block ...\n"


/* WARNING: Removing unreachable block (ram,0x00e9dc6c) */
/* WARNING: Removing unreachable block (ram,0x00e9dc58) */

void FUN_00e9cf20(void *param_1,longlong param_2,size_t param_3,FILE *param_4)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int *piVar16;
  uint uVar17;
  longlong lVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  void *pvVar22;
  FILE *pFVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  char *pcVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  uint uVar33;
  longlong lVar34;
  int *piVar35;
  byte bVar36;
  int iVar37;
  int iVar38;
  FILE *unaff_RSI;
  int iVar39;
  int iVar40;
  uint uVar41;
  longlong unaff_RDI;
  size_t sVar42;
  ulonglong uVar43;
  longlong lVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  uint uVar47;
  uint uVar48;
  uint local_bb4;
  ulonglong local_ba8;
  FILE *local_b98;
  uint local_b90;
  int local_b68 [256];
  int local_768 [260];
  uint local_358 [100];
  uint local_1c8 [100];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  sVar42 = param_3;
  if (3 < (int)param_3) {
    _fwrite(*(void **)PTR____stderrp_024a98a0,1,param_3,param_4);
  }
  pvVar22 = param_1;
  ___bzero();
  local_b90 = (uint)param_1;
  if ((int)local_b90 < 1) {
    local_768[0] = 0;
  }
  else {
    if (((ulonglong)param_1 & 0xffffffff) - 1 < 3) {
      pvVar22 = (void *)0x0;
    }
    else {
      pvVar22 = (void *)0x0;
      do {
        local_768[*(byte *)((longlong)pvVar22 + (longlong)(unaff_RSI->_ubuf + -0x74))] =
             local_768[*(byte *)((longlong)pvVar22 + (longlong)(unaff_RSI->_ubuf + -0x74))] + 1;
        local_768[(byte)((undefined1 *)((longlong)&unaff_RSI->_p + 1))[(longlong)pvVar22]] =
             local_768[(byte)((undefined1 *)((longlong)&unaff_RSI->_p + 1))[(longlong)pvVar22]] + 1;
        local_768[(byte)((undefined1 *)((longlong)&unaff_RSI->_p + 2))[(longlong)pvVar22]] =
             local_768[(byte)((undefined1 *)((longlong)&unaff_RSI->_p + 2))[(longlong)pvVar22]] + 1;
        local_768[(byte)((undefined1 *)((longlong)&unaff_RSI->_p + 3))[(longlong)pvVar22]] =
             local_768[(byte)((undefined1 *)((longlong)&unaff_RSI->_p + 3))[(longlong)pvVar22]] + 1;
        pvVar22 = (void *)((longlong)pvVar22 + 4);
      } while ((void *)(ulonglong)(local_b90 & 0xfffffffc) != pvVar22);
    }
    if ((ulonglong)(local_b90 & 3) != 0) {
      pvVar22 = (void *)((longlong)pvVar22 + (longlong)unaff_RSI);
      uVar28 = 0;
      do {
        local_768[*(byte *)((longlong)pvVar22 + uVar28)] =
             local_768[*(byte *)((longlong)pvVar22 + uVar28)] + 1;
        uVar28 = uVar28 + 1;
      } while ((local_b90 & 3) != uVar28);
    }
  }
  _memcpy(pvVar22,&segment_command_000003d8.fileoff,sVar42);
  lVar18 = 0;
  do {
    iVar26 = local_768[lVar18 + 1];
    local_768[lVar18 + 1] = local_768[0] + iVar26;
    local_768[0] = local_768[0] + iVar26 + local_768[lVar18 + 2];
    local_768[lVar18 + 2] = local_768[0];
    local_768[0] = local_768[0] + local_768[lVar18 + 3];
    local_768[lVar18 + 3] = local_768[0];
    local_768[0] = local_768[0] + local_768[lVar18 + 4];
    local_768[lVar18 + 4] = local_768[0];
    lVar18 = lVar18 + 4;
  } while (lVar18 != 0x100);
  if (0 < (int)local_b90) {
    if (local_b90 == 1) {
      uVar28 = 0;
    }
    else {
      uVar28 = 0;
      do {
        iVar26 = local_768[unaff_RSI->_ubuf[uVar28 - 0x74]];
        local_768[unaff_RSI->_ubuf[uVar28 - 0x74]] = iVar26 + -1;
        *(int *)(unaff_RDI + -4 + (longlong)iVar26 * 4) = (int)uVar28;
        iVar26 = local_768[unaff_RSI->_ubuf[uVar28 - 0x73]];
        local_768[unaff_RSI->_ubuf[uVar28 - 0x73]] = iVar26 + -1;
        *(int *)(unaff_RDI + -4 + (longlong)iVar26 * 4) = (int)uVar28 + 1;
        uVar28 = uVar28 + 2;
      } while ((local_b90 & 0xfffffffe) != uVar28);
    }
    if (((ulonglong)param_1 & 1) != 0) {
      iVar26 = local_768[unaff_RSI->_ubuf[uVar28 - 0x74]];
      local_768[unaff_RSI->_ubuf[uVar28 - 0x74]] = iVar26 + -1;
      *(int *)(unaff_RDI + -4 + (longlong)iVar26 * 4) = (int)uVar28;
    }
  }
  if (-0x40 < (int)local_b90) {
    ___bzero();
  }
  lVar18 = 0;
  do {
    puVar19 = (uint *)(param_2 + (longlong)(local_768[lVar18] >> 5) * 4);
    *puVar19 = *puVar19 | 1 << ((byte)local_768[lVar18] & 0x1f);
    puVar19 = (uint *)(param_2 + (longlong)(local_768[lVar18 + 1] >> 5) * 4);
    *puVar19 = *puVar19 | 1 << ((byte)local_768[lVar18 + 1] & 0x1f);
    lVar18 = lVar18 + 2;
  } while (lVar18 != 0x100);
  iVar26 = 0;
  do {
    puVar19 = (uint *)(param_2 + (longlong)((int)(local_b90 + iVar26) >> 5) * 4);
    *puVar19 = *puVar19 | 1 << ((byte)(local_b90 + iVar26) & 0x1f);
    iVar20 = local_b90 + 1 + iVar26;
    bVar36 = (byte)iVar20 & 0x1f;
    pFVar23 = (FILE *)(longlong)(iVar20 >> 5);
    puVar19 = (uint *)(param_2 + (longlong)pFVar23 * 4);
    *puVar19 = *puVar19 & (-2 << bVar36 | 0xfffffffeU >> 0x20 - bVar36);
    iVar26 = iVar26 + 2;
  } while (iVar26 != 0x40);
  lVar18 = unaff_RDI + 0x30;
  pcVar29 = (char *)((longlong)&MACH_HEADER.magic + 1);
LAB_00e9d220:
  if (3 < (int)param_3) {
    _fprintf(pFVar23,pcVar29);
  }
  iVar26 = (int)pcVar29;
  if (0 < (int)local_b90) {
    uVar28 = 0;
    uVar43 = 0;
    do {
      if ((*(uint *)(param_2 + (ulonglong)((uint)(uVar28 >> 3) & 0x1ffffffc)) >>
           ((uint)uVar28 & 0x1f) & 1) != 0) {
        uVar43 = uVar28 & 0xffffffff;
      }
      iVar20 = *(int *)(unaff_RDI + uVar28 * 4) - iVar26;
      *(int *)(unaff_RSI->_ubuf + (longlong)(int)((iVar20 >> 0x1f & local_b90) + iVar20) * 4 + -0x74
              ) = (int)uVar43;
      uVar28 = uVar28 + 1;
    } while (((ulonglong)param_1 & 0xffffffff) != uVar28);
  }
  pcVar29 = (char *)0x0;
  uVar47 = 0xffffffff;
LAB_00e9d2b0:
  uVar33 = uVar47;
  uVar47 = uVar33 + 1;
  uVar21 = uVar47 & 0x1f;
  pFVar23 = (FILE *)(ulonglong)uVar21;
  uVar32 = 1 << (sbyte)uVar21 & *(uint *)(param_2 + (longlong)((int)uVar47 >> 5) * 4);
  if (uVar32 != 0) goto code_r0x00e9d2d2;
  goto LAB_00e9d2d6;
code_r0x00e9d2d2:
  if (uVar21 != 0) goto LAB_00e9d2b0;
LAB_00e9d2d6:
  iVar20 = (int)pcVar29;
  uVar21 = uVar47;
  if (uVar32 != 0) {
    do {
      uVar21 = uVar33;
      pFVar23 = (FILE *)(longlong)((int)uVar47 >> 5);
      uVar47 = uVar47 + 0x20;
      uVar33 = uVar21 + 0x20;
    } while (*(int *)(param_2 + (longlong)pFVar23 * 4) == -1);
    do {
      uVar21 = uVar21 + 1;
    } while ((*(uint *)(param_2 + (longlong)((int)uVar21 >> 5) * 4) >> (uVar21 & 0x1f) & 1) != 0);
  }
  if ((int)uVar21 <= (int)local_b90) {
    uVar33 = uVar21 - 1;
    iVar40 = uVar21 - 0x20;
    uVar47 = uVar21;
    do {
      uVar48 = uVar47;
      iVar39 = iVar40;
      param_4 = (FILE *)(ulonglong)uVar33;
      pFVar23 = (FILE *)(ulonglong)(uVar48 & 0x1f);
      uVar32 = 1 << (sbyte)(uVar48 & 0x1f) & *(uint *)(param_2 + (longlong)((int)uVar48 >> 5) * 4);
      if (uVar32 != 0) break;
      uVar33 = uVar33 + 1;
      iVar40 = iVar39 + 1;
      uVar47 = uVar48 + 1;
    } while ((uVar48 & 0x1f) != 0);
    if (uVar32 == 0) {
      do {
        uVar48 = (uint)param_4;
        iVar39 = iVar39 + 0x20;
        pFVar23 = (FILE *)(longlong)(iVar39 >> 5);
        param_4 = (FILE *)(ulonglong)(uVar48 + 0x20);
      } while (*(int *)(param_2 + (longlong)pFVar23 * 4) == 0);
      do {
        uVar48 = uVar48 + 1;
      } while ((*(uint *)(param_2 + (longlong)((int)uVar48 >> 5) * 4) >> (uVar48 & 0x1f) & 1) == 0);
    }
    if ((int)local_b90 < (int)uVar48) goto LAB_00e9dd00;
    uVar47 = uVar48 - 1;
    if ((int)uVar21 < (int)uVar48) {
      uVar33 = uVar21 - 1;
      pcVar29 = (char *)(ulonglong)((iVar20 - uVar21) + uVar47 + 2);
      local_1c8[0] = uVar33;
      local_358[0] = uVar47;
      local_bb4 = 0;
      uVar28 = 1;
LAB_00e9d42a:
      do {
        iVar20 = (int)uVar28;
        if (0x62 < iVar20) {
          FUN_00e9e160();
        }
        uVar45 = (ulonglong)(iVar20 - 1);
        uVar32 = local_1c8[uVar45];
        uVar43 = (ulonglong)uVar32;
        lVar34 = (longlong)(int)uVar32;
        uVar5 = local_358[uVar45];
        param_4 = (FILE *)(ulonglong)uVar5;
        if (9 < (int)(uVar5 - uVar32)) {
          local_bb4 = local_bb4 * 0x1dc5 + 1 & 0x7fff;
          uVar17 = uVar32;
          if (((short)(local_bb4 % 3) != 0) && (uVar17 = uVar5, local_bb4 % 3 == 1)) {
            uVar17 = (int)(uVar5 + uVar32) >> 1;
          }
          iVar40 = *(int *)(unaff_RSI->_ubuf +
                           (ulonglong)*(uint *)(unaff_RDI + (longlong)(int)uVar17 * 4) * 4 + -0x74);
          pFVar23 = param_4;
          local_ba8 = uVar43;
          local_b98 = param_4;
          if ((int)uVar5 < (int)uVar32) goto LAB_00e9d746;
LAB_00e9d655:
          local_ba8 = (ulonglong)(int)local_ba8;
          iVar39 = (int)pFVar23;
          do {
            iVar37 = (int)uVar43;
            iVar38 = iVar39;
            if (iVar39 < iVar37) {
              iVar38 = iVar37;
            }
            puVar19 = (uint *)((longlong)iVar37 * 4 + unaff_RDI);
            lVar24 = 0;
LAB_00e9d6a0:
            uVar17 = *puVar19;
            iVar27 = (int)lVar24;
            if (*(int *)(unaff_RSI->_ubuf + (ulonglong)uVar17 * 4 + -0x74) != iVar40) {
              if (*(int *)(unaff_RSI->_ubuf + (ulonglong)uVar17 * 4 + -0x74) - iVar40 < 1)
              goto code_r0x00e9d6b4;
              uVar17 = iVar37 - iVar27;
              goto LAB_00e9d739;
            }
            *puVar19 = *(uint *)(unaff_RDI + local_ba8 * 4);
            *(uint *)(unaff_RDI + local_ba8 * 4) = uVar17;
            local_ba8 = local_ba8 + 1;
            uVar43 = (ulonglong)((iVar37 - iVar27) + 1);
          } while (iVar37 - iVar27 < iVar39);
          uVar43 = (ulonglong)((iVar37 - iVar27) + 1);
LAB_00e9d746:
          iVar38 = (int)uVar43;
          lVar24 = (longlong)iVar38;
          iVar39 = (int)pFVar23;
          uVar17 = (uint)local_ba8;
          if (iVar38 <= iVar39) goto code_r0x00e9d757;
LAB_00e9d837:
          if ((int)uVar17 <= (int)local_b98) goto LAB_00e9d84a;
          goto LAB_00e9dc16;
        }
        if (uVar5 != uVar32) {
          uVar43 = (ulonglong)(int)uVar5;
          if ((3 < (int)(uVar5 - uVar32)) && ((int)uVar32 <= (int)(uVar5 - 4))) {
            pFVar23 = param_4;
            uVar45 = (longlong)(int)(uVar5 - 4);
            do {
              iVar40 = *(int *)(unaff_RDI + uVar45 * 4);
              uVar17 = (uint)uVar45;
              if ((longlong)(uVar45 + 4) <= (longlong)uVar43) {
                uVar41 = *(uint *)(unaff_RSI->_ubuf + (longlong)iVar40 * 4 + -0x74);
                lVar24 = (longlong)(int)pFVar23;
                uVar46 = uVar45 & 0xffffffff;
                do {
                  uVar17 = (uint)uVar46;
                  uVar6 = *(uint *)(unaff_RDI + lVar24 * 4);
                  if (uVar41 <= *(uint *)(unaff_RSI->_ubuf + (ulonglong)uVar6 * 4 + -0x74)) break;
                  *(uint *)(unaff_RDI + (longlong)(int)uVar17 * 4) = uVar6;
                  lVar24 = lVar24 + 4;
                  uVar17 = uVar17 + 4;
                  uVar46 = (ulonglong)uVar17;
                } while (lVar24 <= (longlong)uVar43);
              }
              *(int *)(unaff_RDI + (longlong)(int)uVar17 * 4) = iVar40;
              pFVar23 = (FILE *)(ulonglong)((int)pFVar23 - 1);
              bVar8 = lVar34 < (longlong)uVar45;
              uVar45 = uVar45 - 1;
            } while (bVar8);
          }
          if ((int)uVar32 < (int)uVar5) {
            param_4 = (FILE *)(ulonglong)-uVar5;
            lVar24 = uVar43 * 4 + unaff_RDI;
            iVar40 = 1;
            uVar45 = uVar43;
            do {
              uVar46 = uVar45 - 1;
              iVar39 = *(int *)(unaff_RDI + -4 + uVar45 * 4);
              if ((longlong)uVar45 <= (longlong)uVar43) {
                uVar32 = *(uint *)(unaff_RSI->_ubuf + (longlong)iVar39 * 4 + -0x74);
                lVar30 = 0;
                do {
                  uVar17 = *(uint *)(lVar24 + lVar30 * 4);
                  if (uVar32 <= *(uint *)(unaff_RSI->_ubuf + (ulonglong)uVar17 * 4 + -0x74)) {
                    uVar17 = (int)lVar30 - (int)param_4;
                    break;
                  }
                  *(uint *)(lVar24 + -4 + lVar30 * 4) = uVar17;
                  lVar30 = lVar30 + 1;
                  uVar17 = uVar5 + 1;
                } while (iVar40 != (int)lVar30);
                uVar45 = (ulonglong)uVar17;
              }
              *(int *)(unaff_RDI + -4 + (longlong)(int)uVar45 * 4) = iVar39;
              param_4 = (FILE *)((longlong)&param_4->_p + 1);
              iVar40 = iVar40 + 1;
              lVar24 = lVar24 + -4;
              uVar45 = uVar46;
            } while (lVar34 < (longlong)uVar46);
          }
        }
        uVar28 = uVar28 - 1;
      } while (1 < iVar20);
      goto LAB_00e9dc71;
    }
    goto LAB_00e9d2b0;
  }
LAB_00e9dd00:
  if ((int)param_3 < 4) {
    pcVar29 = (char *)(ulonglong)(uint)(iVar26 * 2);
    if (((int)local_b90 < iVar26 * 2) || (iVar20 == 0)) goto joined_r0x00e9ddb2;
  }
  else {
    _fprintf(pFVar23,pcVar29);
    pcVar29 = (char *)(ulonglong)(uint)(iVar26 * 2);
    if (((int)local_b90 < iVar26 * 2) || (iVar20 == 0)) goto LAB_00e9dd88;
  }
  goto LAB_00e9d220;
code_r0x00e9d6b4:
  lVar24 = lVar24 + -1;
  puVar19 = puVar19 + 1;
  if (~(longlong)iVar38 + (longlong)iVar37 == lVar24) {
    uVar17 = iVar38 + 1;
LAB_00e9d739:
    uVar43 = (ulonglong)uVar17;
    goto LAB_00e9d746;
  }
  goto LAB_00e9d6a0;
code_r0x00e9d757:
  local_b98 = (FILE *)(longlong)(int)local_b98;
  do {
    iVar39 = (int)pFVar23;
    lVar30 = (longlong)iVar39 + 1;
    while( true ) {
      uVar41 = *(uint *)(unaff_RDI + -4 + lVar30 * 4);
      iVar37 = (int)pFVar23;
      if (*(int *)(unaff_RSI->_ubuf + (ulonglong)uVar41 * 4 + -0x74) == iVar40) break;
      if (*(int *)(unaff_RSI->_ubuf + (ulonglong)uVar41 * 4 + -0x74) - iVar40 < 0) {
        uVar7 = *(undefined4 *)(unaff_RDI + lVar24 * 4);
        *(uint *)(unaff_RDI + lVar24 * 4) = uVar41;
        *(undefined4 *)(unaff_RDI + -4 + lVar30 * 4) = uVar7;
        pFVar23 = (FILE *)(ulonglong)(iVar37 - 1U);
        uVar43 = (ulonglong)(iVar38 + 1U);
        if ((int)(iVar38 + 1U) <= (int)(iVar37 - 1U)) goto LAB_00e9d655;
        goto LAB_00e9d746;
      }
      pFVar23 = (FILE *)(ulonglong)(iVar37 - 1);
      lVar30 = lVar30 + -1;
      if (lVar30 <= lVar24) {
        if (lVar24 <= iVar39) {
          iVar39 = iVar38;
        }
        iVar39 = iVar39 + -1;
        goto LAB_00e9d837;
      }
    }
    *(undefined4 *)(unaff_RDI + -4 + lVar30 * 4) =
         *(undefined4 *)(unaff_RDI + (longlong)local_b98 * 4);
    *(uint *)(unaff_RDI + (longlong)local_b98 * 4) = uVar41;
    local_b98 = (FILE *)((longlong)&local_b98[-1]._offset + 7);
    pFVar23 = (FILE *)(ulonglong)(iVar37 - 1);
  } while (iVar38 < iVar37);
  iVar39 = iVar37 + -1;
  if ((int)local_b98 < (int)uVar17) goto LAB_00e9dc16;
LAB_00e9d84a:
  iVar40 = iVar38 - uVar17;
  if ((int)(uVar17 - uVar32) < (int)(iVar38 - uVar17)) {
    iVar40 = uVar17 - uVar32;
  }
  if (iVar40 < 1) goto LAB_00e9d9fa;
  lVar30 = (longlong)(iVar38 - iVar40);
  uVar28 = (ulonglong)(iVar40 - 1U);
  if ((iVar40 - 1U < 7) ||
     (((ulonglong)(lVar34 * 4 + unaff_RDI) < (lVar30 + uVar28) * 4 + 4 + unaff_RDI &&
      ((ulonglong)(lVar30 * 4 + unaff_RDI) < (lVar34 + uVar28) * 4 + 4 + unaff_RDI))))
  goto LAB_00e9d9d5;
  uVar46 = uVar28 + 1 & 0x1fffffff8;
  uVar43 = (uVar46 - 8 >> 3) + 1;
  if (uVar46 - 8 == 0) {
    lVar31 = 0;
    goto LAB_00e9d986;
  }
  lVar1 = lVar18 + lVar34 * 4;
  lVar44 = lVar18 + lVar30 * 4;
  lVar25 = -(uVar43 & 0xfffffffffffffffe);
  lVar31 = 0;
  do {
    puVar3 = (undefined8 *)(lVar1 + -0x30 + lVar31 * 4);
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    puVar3 = (undefined8 *)(lVar1 + -0x20 + lVar31 * 4);
    uVar11 = *puVar3;
    uVar12 = puVar3[1];
    puVar3 = (undefined8 *)(lVar44 + -0x30 + lVar31 * 4);
    uVar13 = puVar3[1];
    puVar4 = (undefined8 *)(lVar44 + -0x20 + lVar31 * 4);
    uVar14 = *puVar4;
    uVar15 = puVar4[1];
    puVar4 = (undefined8 *)(lVar1 + -0x30 + lVar31 * 4);
    *puVar4 = *puVar3;
    puVar4[1] = uVar13;
    puVar3 = (undefined8 *)(lVar1 + -0x20 + lVar31 * 4);
    *puVar3 = uVar14;
    puVar3[1] = uVar15;
    puVar3 = (undefined8 *)(lVar44 + -0x30 + lVar31 * 4);
    *puVar3 = uVar9;
    puVar3[1] = uVar10;
    puVar3 = (undefined8 *)(lVar44 + -0x20 + lVar31 * 4);
    *puVar3 = uVar11;
    puVar3[1] = uVar12;
    puVar3 = (undefined8 *)(lVar1 + -0x10 + lVar31 * 4);
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    puVar3 = (undefined8 *)(lVar1 + lVar31 * 4);
    uVar11 = *puVar3;
    uVar12 = puVar3[1];
    puVar4 = (undefined8 *)(lVar44 + -0x10 + lVar31 * 4);
    uVar13 = puVar4[1];
    puVar3 = (undefined8 *)(lVar44 + lVar31 * 4);
    uVar14 = *puVar3;
    uVar15 = puVar3[1];
    puVar3 = (undefined8 *)(lVar1 + -0x10 + lVar31 * 4);
    *puVar3 = *puVar4;
    puVar3[1] = uVar13;
    puVar3 = (undefined8 *)(lVar1 + lVar31 * 4);
    *puVar3 = uVar14;
    puVar3[1] = uVar15;
    puVar3 = (undefined8 *)(lVar44 + -0x10 + lVar31 * 4);
    *puVar3 = uVar9;
    puVar3[1] = uVar10;
    puVar3 = (undefined8 *)(lVar44 + lVar31 * 4);
    *puVar3 = uVar11;
    puVar3[1] = uVar12;
    lVar31 = lVar31 + 0x10;
    lVar25 = lVar25 + 2;
  } while (lVar25 != 0);
  if ((uVar43 & 1) != 0) {
LAB_00e9d986:
    lVar1 = lVar31 + lVar34;
    lVar31 = lVar31 + lVar30;
    puVar3 = (undefined8 *)(unaff_RDI + lVar1 * 4);
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    puVar3 = (undefined8 *)(unaff_RDI + 0x10 + lVar1 * 4);
    uVar11 = *puVar3;
    uVar12 = puVar3[1];
    puVar4 = (undefined8 *)(unaff_RDI + lVar31 * 4);
    uVar13 = puVar4[1];
    puVar3 = (undefined8 *)(unaff_RDI + 0x10 + lVar31 * 4);
    uVar14 = *puVar3;
    uVar15 = puVar3[1];
    puVar3 = (undefined8 *)(unaff_RDI + lVar1 * 4);
    *puVar3 = *puVar4;
    puVar3[1] = uVar13;
    puVar3 = (undefined8 *)(unaff_RDI + 0x10 + lVar1 * 4);
    *puVar3 = uVar14;
    puVar3[1] = uVar15;
    puVar3 = (undefined8 *)(unaff_RDI + lVar31 * 4);
    *puVar3 = uVar9;
    puVar3[1] = uVar10;
    puVar3 = (undefined8 *)(unaff_RDI + 0x10 + lVar31 * 4);
    *puVar3 = uVar11;
    puVar3[1] = uVar12;
  }
  if (uVar28 + 1 != uVar46) {
    lVar34 = lVar34 + uVar46;
    lVar30 = lVar30 + uVar46;
    iVar40 = iVar40 - (int)uVar46;
LAB_00e9d9d5:
    iVar40 = iVar40 + 1;
    lVar31 = unaff_RDI;
    do {
      uVar7 = *(undefined4 *)(lVar31 + lVar34 * 4);
      *(undefined4 *)(lVar31 + lVar34 * 4) = *(undefined4 *)(lVar31 + lVar30 * 4);
      *(undefined4 *)(lVar31 + lVar30 * 4) = uVar7;
      lVar31 = lVar31 + 4;
      iVar40 = iVar40 + -1;
    } while (1 < iVar40);
  }
LAB_00e9d9fa:
  iVar40 = uVar5 - (int)local_b98;
  iVar39 = (int)local_b98 - iVar39;
  if (iVar39 <= iVar40) {
    iVar40 = iVar39;
  }
  if (iVar40 < 1) goto LAB_00e9dbac;
  lVar34 = (longlong)(int)(uVar5 - iVar40);
  uVar28 = (ulonglong)(iVar40 - 1U);
  if ((6 < iVar40 - 1U) &&
     (((lVar34 + uVar28) * 4 + 8 + unaff_RDI <= (ulonglong)(lVar24 * 4 + unaff_RDI) ||
      ((lVar24 + uVar28) * 4 + 4 + unaff_RDI <= (ulonglong)(lVar34 * 4 + 4 + unaff_RDI))))) {
    uVar43 = uVar28 + 1 & 0x1fffffff8;
    uVar46 = (uVar43 - 8 >> 3) + 1;
    if (uVar43 - 8 == 0) {
      lVar30 = 0;
LAB_00e9db2c:
      lVar31 = lVar30 + lVar24;
      lVar30 = lVar30 + lVar34;
      puVar3 = (undefined8 *)(unaff_RDI + lVar31 * 4);
      uVar9 = *puVar3;
      uVar10 = puVar3[1];
      puVar3 = (undefined8 *)(unaff_RDI + 0x10 + lVar31 * 4);
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      puVar3 = (undefined8 *)(unaff_RDI + 4 + lVar30 * 4);
      uVar13 = puVar3[1];
      puVar4 = (undefined8 *)(unaff_RDI + 0x14 + lVar30 * 4);
      uVar14 = *puVar4;
      uVar15 = puVar4[1];
      puVar4 = (undefined8 *)(unaff_RDI + lVar31 * 4);
      *puVar4 = *puVar3;
      puVar4[1] = uVar13;
      puVar3 = (undefined8 *)(unaff_RDI + 0x10 + lVar31 * 4);
      *puVar3 = uVar14;
      puVar3[1] = uVar15;
      puVar3 = (undefined8 *)(unaff_RDI + 4 + lVar30 * 4);
      *puVar3 = uVar9;
      puVar3[1] = uVar10;
      puVar3 = (undefined8 *)(unaff_RDI + 0x14 + lVar30 * 4);
      *puVar3 = uVar11;
      puVar3[1] = uVar12;
    }
    else {
      lVar31 = lVar18 + lVar24 * 4;
      lVar1 = unaff_RDI + 0x34 + lVar34 * 4;
      lVar44 = -(uVar46 & 0xfffffffffffffffe);
      lVar30 = 0;
      do {
        puVar3 = (undefined8 *)(lVar31 + -0x30 + lVar30 * 4);
        uVar9 = *puVar3;
        uVar10 = puVar3[1];
        puVar3 = (undefined8 *)(lVar31 + -0x20 + lVar30 * 4);
        uVar11 = *puVar3;
        uVar12 = puVar3[1];
        puVar3 = (undefined8 *)(lVar1 + -0x30 + lVar30 * 4);
        uVar13 = puVar3[1];
        puVar4 = (undefined8 *)(lVar1 + -0x20 + lVar30 * 4);
        uVar14 = *puVar4;
        uVar15 = puVar4[1];
        puVar4 = (undefined8 *)(lVar31 + -0x30 + lVar30 * 4);
        *puVar4 = *puVar3;
        puVar4[1] = uVar13;
        puVar3 = (undefined8 *)(lVar31 + -0x20 + lVar30 * 4);
        *puVar3 = uVar14;
        puVar3[1] = uVar15;
        puVar3 = (undefined8 *)(lVar1 + -0x30 + lVar30 * 4);
        *puVar3 = uVar9;
        puVar3[1] = uVar10;
        puVar3 = (undefined8 *)(lVar1 + -0x20 + lVar30 * 4);
        *puVar3 = uVar11;
        puVar3[1] = uVar12;
        puVar3 = (undefined8 *)(lVar31 + -0x10 + lVar30 * 4);
        uVar9 = *puVar3;
        uVar10 = puVar3[1];
        puVar3 = (undefined8 *)(lVar31 + lVar30 * 4);
        uVar11 = *puVar3;
        uVar12 = puVar3[1];
        puVar4 = (undefined8 *)(lVar1 + -0x10 + lVar30 * 4);
        uVar13 = puVar4[1];
        puVar3 = (undefined8 *)(lVar1 + lVar30 * 4);
        uVar14 = *puVar3;
        uVar15 = puVar3[1];
        puVar3 = (undefined8 *)(lVar31 + -0x10 + lVar30 * 4);
        *puVar3 = *puVar4;
        puVar3[1] = uVar13;
        puVar3 = (undefined8 *)(lVar31 + lVar30 * 4);
        *puVar3 = uVar14;
        puVar3[1] = uVar15;
        puVar3 = (undefined8 *)(lVar1 + -0x10 + lVar30 * 4);
        *puVar3 = uVar9;
        puVar3[1] = uVar10;
        puVar3 = (undefined8 *)(lVar1 + lVar30 * 4);
        *puVar3 = uVar11;
        puVar3[1] = uVar12;
        lVar30 = lVar30 + 0x10;
        lVar44 = lVar44 + 2;
      } while (lVar44 != 0);
      if ((uVar46 & 1) != 0) goto LAB_00e9db2c;
    }
    if (uVar28 + 1 == uVar43) goto LAB_00e9dbac;
    lVar24 = lVar24 + uVar43;
    lVar34 = lVar34 + uVar43;
    iVar40 = iVar40 - (int)uVar43;
  }
  iVar40 = iVar40 + 1;
  lVar30 = unaff_RDI;
  do {
    uVar7 = *(undefined4 *)(lVar30 + lVar24 * 4);
    *(undefined4 *)(lVar30 + lVar24 * 4) = *(undefined4 *)(lVar30 + 4 + lVar34 * 4);
    *(undefined4 *)(lVar30 + 4 + lVar34 * 4) = uVar7;
    lVar30 = lVar30 + 4;
    iVar40 = iVar40 + -1;
  } while (1 < iVar40);
LAB_00e9dbac:
  uVar41 = ~uVar17 + uVar32 + iVar38;
  uVar17 = (uVar5 - iVar39) + 1;
  if ((int)(uVar5 - uVar17) < (int)(uVar41 - uVar32)) {
    local_358[uVar45] = uVar41;
    uVar32 = uVar17;
  }
  else {
    local_1c8[uVar45] = uVar17;
    param_4 = (FILE *)(ulonglong)uVar41;
  }
  local_1c8[iVar20] = uVar32;
  local_358[iVar20] = (uint)param_4;
  uVar45 = (ulonglong)(iVar20 + 1);
LAB_00e9dc16:
  uVar28 = uVar45;
  if ((int)uVar45 < 1) goto LAB_00e9dc71;
  goto LAB_00e9d42a;
LAB_00e9dc71:
  if ((int)uVar21 <= (int)uVar48) {
    puVar19 = (uint *)((longlong)(int)uVar33 * 4 + unaff_RDI);
    iVar20 = -1;
    do {
      iVar40 = *(int *)(unaff_RSI->_ubuf + (ulonglong)*puVar19 * 4 + -0x74);
      if (iVar20 != iVar40) {
        puVar2 = (uint *)(param_2 + (longlong)((int)uVar33 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar33 & 0x1f);
        iVar20 = iVar40;
      }
      uVar33 = uVar33 + 1;
      puVar19 = puVar19 + 1;
      param_4 = unaff_RSI;
    } while (uVar48 != uVar33);
  }
  goto LAB_00e9d2b0;
LAB_00e9dd88:
  _fwrite(*(void **)PTR____stderrp_024a98a0,1,local_b90,param_4);
joined_r0x00e9ddb2:
  if (0 < (int)local_b90) {
    if (local_b90 == 1) {
      uVar45 = 0;
      uVar28 = 0;
    }
    else {
      uVar43 = (ulonglong)(local_b90 & 0xfffffffe);
      uVar45 = 0;
      uVar28 = 0;
      do {
        uVar47 = (int)uVar28 - 1;
        piVar16 = local_b68 + (int)uVar28;
        do {
          piVar35 = piVar16;
          bVar36 = (char)uVar47 + 1;
          uVar47 = (uint)bVar36;
          iVar26 = (int)uVar28;
          uVar28 = (ulonglong)(iVar26 + 1);
          piVar16 = piVar35 + 1;
        } while (*piVar35 == 0);
        *piVar35 = *piVar35 + -1;
        unaff_RSI->_ubuf[(ulonglong)*(uint *)(unaff_RDI + uVar45 * 4) - 0x74] = bVar36;
        uVar28 = (longlong)iVar26 - 1;
        do {
          lVar18 = uVar28 + 1;
          uVar28 = uVar28 + 1;
        } while (local_b68[lVar18] == 0);
        local_b68[uVar28] = local_b68[lVar18] + -1;
        unaff_RSI->_ubuf[(ulonglong)*(uint *)(unaff_RDI + (uVar45 | 1) * 4) - 0x74] = (uchar)uVar28;
        uVar45 = uVar45 + 2;
        uVar43 = uVar43 - 2;
      } while (uVar43 != 0);
    }
    if (((ulonglong)param_1 & 1) != 0) {
      uVar28 = (longlong)(int)uVar28 - 1;
      do {
        lVar18 = uVar28 + 1;
        uVar28 = uVar28 + 1;
      } while (local_b68[lVar18] == 0);
      local_b68[uVar28] = local_b68[lVar18] + -1;
      unaff_RSI->_ubuf[(ulonglong)*(uint *)(unaff_RDI + uVar45 * 4) - 0x74] = (uchar)uVar28;
    }
    if (0xff < (int)uVar28) {
      if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
        FUN_00e9e160();
        return;
      }
      goto LAB_00e9df07;
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
LAB_00e9df07:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


