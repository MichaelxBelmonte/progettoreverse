// Function: FUN_00e9cf20
// Address: 00e9cf20
// Size: 3964 bytes
// Class: GNString
// String references:
//   "        bucket sorting ...\n"
//   "        depth %6d has "
//   "%6d unresolved strings\n"
//   "        reconstructing block ...\n"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00e9cf20(void *param_1,int64_t param_2,size_t param_3,FILE *param_4)

{
  int64_t lVar1;
  uint *puVar2;
  void*puVar3;
  void*puVar4;
  uint uVar5;
  uint uVar6;
  uint32_t uVar7;
  bool bVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int *piVar16;
  uint uVar17;
  int64_t lVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  void *pvVar22;
  FILE *pFVar23;
  int64_t lVar24;
  int64_t lVar25;
  int iVar26;
  int iVar27;
  uint64_t uVar28;
  char *pcVar29;
  int64_t lVar30;
  int64_t lVar31;
  uint uVar32;
  uint uVar33;
  int64_t lVar34;
  int *piVar35;
  byte bVar36;
  int iVar37;
  int iVar38;
  FILE *arg1;
  int iVar39;
  int iVar40;
  uint uVar41;
  int64_t this_ptr;
  size_t sVar42;
  uint64_t uVar43;
  int64_t lVar44;
  uint64_t uVar45;
  uint64_t uVar46;
  uint uVar47;
  uint uVar48;
  uint local_bb4;
  uint64_t local_ba8;
  FILE *local_b98;
  uint local_b90;
  int local_b68 [256];
  int local_768 [260];
  uint local_358 [100];
  uint local_1c8 [100];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
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
    if (((uint64_t)param_1 & 0xffffffff) - 1 < 3) {
      pvVar22 = (void *)0x0;
    }
    else {
      pvVar22 = (void *)0x0;
      do {
        local_768[*(byte *)((int64_t)pvVar22 + (int64_t)(arg1->_ubuf + -0x74))] =
             local_768[*(byte *)((int64_t)pvVar22 + (int64_t)(arg1->_ubuf + -0x74))] + 1;
        local_768[(byte)((void*)((int64_t)&arg1->_p + 1))[(int64_t)pvVar22]] =
             local_768[(byte)((void*)((int64_t)&arg1->_p + 1))[(int64_t)pvVar22]] + 1;
        local_768[(byte)((void*)((int64_t)&arg1->_p + 2))[(int64_t)pvVar22]] =
             local_768[(byte)((void*)((int64_t)&arg1->_p + 2))[(int64_t)pvVar22]] + 1;
        local_768[(byte)((void*)((int64_t)&arg1->_p + 3))[(int64_t)pvVar22]] =
             local_768[(byte)((void*)((int64_t)&arg1->_p + 3))[(int64_t)pvVar22]] + 1;
        pvVar22 = (void *)((int64_t)pvVar22 + 4);
      } while ((void *)(uint64_t)(local_b90 & 0xfffffffc) != pvVar22);
    }
    if ((uint64_t)(local_b90 & 3) != 0) {
      pvVar22 = (void *)((int64_t)pvVar22 + (int64_t)arg1);
      uVar28 = 0;
      do {
        local_768[*(byte *)((int64_t)pvVar22 + uVar28)] =
             local_768[*(byte *)((int64_t)pvVar22 + uVar28)] + 1;
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
        iVar26 = local_768[arg1->_ubuf[uVar28 - 0x74]];
        local_768[arg1->_ubuf[uVar28 - 0x74]] = iVar26 + -1;
        *(int *)(this_ptr + -4 + (int64_t)iVar26 * 4) = (int)uVar28;
        iVar26 = local_768[arg1->_ubuf[uVar28 - 0x73]];
        local_768[arg1->_ubuf[uVar28 - 0x73]] = iVar26 + -1;
        *(int *)(this_ptr + -4 + (int64_t)iVar26 * 4) = (int)uVar28 + 1;
        uVar28 = uVar28 + 2;
      } while ((local_b90 & 0xfffffffe) != uVar28);
    }
    if (((uint64_t)param_1 & 1) != 0) {
      iVar26 = local_768[arg1->_ubuf[uVar28 - 0x74]];
      local_768[arg1->_ubuf[uVar28 - 0x74]] = iVar26 + -1;
      *(int *)(this_ptr + -4 + (int64_t)iVar26 * 4) = (int)uVar28;
    }
  }
  if (-0x40 < (int)local_b90) {
    ___bzero();
  }
  lVar18 = 0;
  do {
    puVar19 = (uint *)(param_2 + (int64_t)(local_768[lVar18] >> 5) * 4);
    *puVar19 = *puVar19 | 1 << ((byte)local_768[lVar18] & 0x1f);
    puVar19 = (uint *)(param_2 + (int64_t)(local_768[lVar18 + 1] >> 5) * 4);
    *puVar19 = *puVar19 | 1 << ((byte)local_768[lVar18 + 1] & 0x1f);
    lVar18 = lVar18 + 2;
  } while (lVar18 != 0x100);
  iVar26 = 0;
  do {
    puVar19 = (uint *)(param_2 + (int64_t)((int)(local_b90 + iVar26) >> 5) * 4);
    *puVar19 = *puVar19 | 1 << ((byte)(local_b90 + iVar26) & 0x1f);
    iVar20 = local_b90 + 1 + iVar26;
    bVar36 = (byte)iVar20 & 0x1f;
    pFVar23 = (FILE *)(int64_t)(iVar20 >> 5);
    puVar19 = (uint *)(param_2 + (int64_t)pFVar23 * 4);
    *puVar19 = *puVar19 & (-2 << bVar36 | 0xfffffffeU >> 0x20 - bVar36);
    iVar26 = iVar26 + 2;
  } while (iVar26 != 0x40);
  lVar18 = this_ptr + 0x30;
  pcVar29 = (char *)((int64_t)&MACH_HEADER.magic + 1);
LAB_00e9d220:
  if (3 < (int)param_3) {
    _fprintf(pFVar23,pcVar29);
  }
  iVar26 = (int)pcVar29;
  if (0 < (int)local_b90) {
    uVar28 = 0;
    uVar43 = 0;
    do {
      if ((*(uint *)(param_2 + (uint64_t)((uint)(uVar28 >> 3) & 0x1ffffffc)) >>
           ((uint)uVar28 & 0x1f) & 1) != 0) {
        uVar43 = uVar28 & 0xffffffff;
      }
      iVar20 = *(int *)(this_ptr + uVar28 * 4) - iVar26;
      *(int *)(arg1->_ubuf + (int64_t)(int)((iVar20 >> 0x1f & local_b90) + iVar20) * 4 + -0x74
              ) = (int)uVar43;
      uVar28 = uVar28 + 1;
    } while (((uint64_t)param_1 & 0xffffffff) != uVar28);
  }
  pcVar29 = (char *)0x0;
  uVar47 = 0xffffffff;
LAB_00e9d2b0:
  uVar33 = uVar47;
  uVar47 = uVar33 + 1;
  uVar21 = uVar47 & 0x1f;
  pFVar23 = (FILE *)(uint64_t)uVar21;
  uVar32 = 1 << (sbyte)uVar21 & *(uint *)(param_2 + (int64_t)((int)uVar47 >> 5) * 4);
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
      pFVar23 = (FILE *)(int64_t)((int)uVar47 >> 5);
      uVar47 = uVar47 + 0x20;
      uVar33 = uVar21 + 0x20;
    } while (*(int *)(param_2 + (int64_t)pFVar23 * 4) == -1);
    do {
      uVar21 = uVar21 + 1;
    } while ((*(uint *)(param_2 + (int64_t)((int)uVar21 >> 5) * 4) >> (uVar21 & 0x1f) & 1) != 0);
  }
  if ((int)uVar21 <= (int)local_b90) {
    uVar33 = uVar21 - 1;
    iVar40 = uVar21 - 0x20;
    uVar47 = uVar21;
    do {
      uVar48 = uVar47;
      iVar39 = iVar40;
      param_4 = (FILE *)(uint64_t)uVar33;
      pFVar23 = (FILE *)(uint64_t)(uVar48 & 0x1f);
      uVar32 = 1 << (sbyte)(uVar48 & 0x1f) & *(uint *)(param_2 + (int64_t)((int)uVar48 >> 5) * 4);
      if (uVar32 != 0) break;
      uVar33 = uVar33 + 1;
      iVar40 = iVar39 + 1;
      uVar47 = uVar48 + 1;
    } while ((uVar48 & 0x1f) != 0);
    if (uVar32 == 0) {
      do {
        uVar48 = (uint)param_4;
        iVar39 = iVar39 + 0x20;
        pFVar23 = (FILE *)(int64_t)(iVar39 >> 5);
        param_4 = (FILE *)(uint64_t)(uVar48 + 0x20);
      } while (*(int *)(param_2 + (int64_t)pFVar23 * 4) == 0);
      do {
        uVar48 = uVar48 + 1;
      } while ((*(uint *)(param_2 + (int64_t)((int)uVar48 >> 5) * 4) >> (uVar48 & 0x1f) & 1) == 0);
    }
    if ((int)local_b90 < (int)uVar48) goto LAB_00e9dd00;
    uVar47 = uVar48 - 1;
    if ((int)uVar21 < (int)uVar48) {
      uVar33 = uVar21 - 1;
      pcVar29 = (char *)(uint64_t)((iVar20 - uVar21) + uVar47 + 2);
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
        uVar45 = (uint64_t)(iVar20 - 1);
        uVar32 = local_1c8[uVar45];
        uVar43 = (uint64_t)uVar32;
        lVar34 = (int64_t)(int)uVar32;
        uVar5 = local_358[uVar45];
        param_4 = (FILE *)(uint64_t)uVar5;
        if (9 < (int)(uVar5 - uVar32)) {
          local_bb4 = local_bb4 * 0x1dc5 + 1 & 0x7fff;
          uVar17 = uVar32;
          if (((short)(local_bb4 % 3) != 0) && (uVar17 = uVar5, local_bb4 % 3 == 1)) {
            uVar17 = (int)(uVar5 + uVar32) >> 1;
          }
          iVar40 = *(int *)(arg1->_ubuf +
                           (uint64_t)*(uint *)(this_ptr + (int64_t)(int)uVar17 * 4) * 4 + -0x74);
          pFVar23 = param_4;
          local_ba8 = uVar43;
          local_b98 = param_4;
          if ((int)uVar5 < (int)uVar32) goto LAB_00e9d746;
LAB_00e9d655:
          local_ba8 = (uint64_t)(int)local_ba8;
          iVar39 = (int)pFVar23;
          do {
            iVar37 = (int)uVar43;
            iVar38 = iVar39;
            if (iVar39 < iVar37) {
              iVar38 = iVar37;
            }
            puVar19 = (uint *)((int64_t)iVar37 * 4 + this_ptr);
            lVar24 = 0;
LAB_00e9d6a0:
            uVar17 = *puVar19;
            iVar27 = (int)lVar24;
            if (*(int *)(arg1->_ubuf + (uint64_t)uVar17 * 4 + -0x74) != iVar40) {
              if (*(int *)(arg1->_ubuf + (uint64_t)uVar17 * 4 + -0x74) - iVar40 < 1)
              goto code_r0x00e9d6b4;
              uVar17 = iVar37 - iVar27;
              goto LAB_00e9d739;
            }
            *puVar19 = *(uint *)(this_ptr + local_ba8 * 4);
            *(uint *)(this_ptr + local_ba8 * 4) = uVar17;
            local_ba8 = local_ba8 + 1;
            uVar43 = (uint64_t)((iVar37 - iVar27) + 1);
          } while (iVar37 - iVar27 < iVar39);
          uVar43 = (uint64_t)((iVar37 - iVar27) + 1);
LAB_00e9d746:
          iVar38 = (int)uVar43;
          lVar24 = (int64_t)iVar38;
          iVar39 = (int)pFVar23;
          uVar17 = (uint)local_ba8;
          if (iVar38 <= iVar39) goto code_r0x00e9d757;
LAB_00e9d837:
          if ((int)uVar17 <= (int)local_b98) goto LAB_00e9d84a;
          goto LAB_00e9dc16;
        }
        if (uVar5 != uVar32) {
          uVar43 = (uint64_t)(int)uVar5;
          if ((3 < (int)(uVar5 - uVar32)) && ((int)uVar32 <= (int)(uVar5 - 4))) {
            pFVar23 = param_4;
            uVar45 = (int64_t)(int)(uVar5 - 4);
            do {
              iVar40 = *(int *)(this_ptr + uVar45 * 4);
              uVar17 = (uint)uVar45;
              if ((int64_t)(uVar45 + 4) <= (int64_t)uVar43) {
                uVar41 = *(uint *)(arg1->_ubuf + (int64_t)iVar40 * 4 + -0x74);
                lVar24 = (int64_t)(int)pFVar23;
                uVar46 = uVar45 & 0xffffffff;
                do {
                  uVar17 = (uint)uVar46;
                  uVar6 = *(uint *)(this_ptr + lVar24 * 4);
                  if (uVar41 <= *(uint *)(arg1->_ubuf + (uint64_t)uVar6 * 4 + -0x74)) break;
                  *(uint *)(this_ptr + (int64_t)(int)uVar17 * 4) = uVar6;
                  lVar24 = lVar24 + 4;
                  uVar17 = uVar17 + 4;
                  uVar46 = (uint64_t)uVar17;
                } while (lVar24 <= (int64_t)uVar43);
              }
              *(int *)(this_ptr + (int64_t)(int)uVar17 * 4) = iVar40;
              pFVar23 = (FILE *)(uint64_t)((int)pFVar23 - 1);
              bVar8 = lVar34 < (int64_t)uVar45;
              uVar45 = uVar45 - 1;
            } while (bVar8);
          }
          if ((int)uVar32 < (int)uVar5) {
            param_4 = (FILE *)(uint64_t)-uVar5;
            lVar24 = uVar43 * 4 + this_ptr;
            iVar40 = 1;
            uVar45 = uVar43;
            do {
              uVar46 = uVar45 - 1;
              iVar39 = *(int *)(this_ptr + -4 + uVar45 * 4);
              if ((int64_t)uVar45 <= (int64_t)uVar43) {
                uVar32 = *(uint *)(arg1->_ubuf + (int64_t)iVar39 * 4 + -0x74);
                lVar30 = 0;
                do {
                  uVar17 = *(uint *)(lVar24 + lVar30 * 4);
                  if (uVar32 <= *(uint *)(arg1->_ubuf + (uint64_t)uVar17 * 4 + -0x74)) {
                    uVar17 = (int)lVar30 - (int)param_4;
                    break;
                  }
                  *(uint *)(lVar24 + -4 + lVar30 * 4) = uVar17;
                  lVar30 = lVar30 + 1;
                  uVar17 = uVar5 + 1;
                } while (iVar40 != (int)lVar30);
                uVar45 = (uint64_t)uVar17;
              }
              *(int *)(this_ptr + -4 + (int64_t)(int)uVar45 * 4) = iVar39;
              param_4 = (FILE *)((int64_t)&param_4->_p + 1);
              iVar40 = iVar40 + 1;
              lVar24 = lVar24 + -4;
              uVar45 = uVar46;
            } while (lVar34 < (int64_t)uVar46);
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
    pcVar29 = (char *)(uint64_t)(uint)(iVar26 * 2);
    if (((int)local_b90 < iVar26 * 2) || (iVar20 == 0)) goto joined_r0x00e9ddb2;
  }
  else {
    _fprintf(pFVar23,pcVar29);
    pcVar29 = (char *)(uint64_t)(uint)(iVar26 * 2);
    if (((int)local_b90 < iVar26 * 2) || (iVar20 == 0)) goto LAB_00e9dd88;
  }
  goto LAB_00e9d220;
code_r0x00e9d6b4:
  lVar24 = lVar24 + -1;
  puVar19 = puVar19 + 1;
  if (~(int64_t)iVar38 + (int64_t)iVar37 == lVar24) {
    uVar17 = iVar38 + 1;
LAB_00e9d739:
    uVar43 = (uint64_t)uVar17;
    goto LAB_00e9d746;
  }
  goto LAB_00e9d6a0;
code_r0x00e9d757:
  local_b98 = (FILE *)(int64_t)(int)local_b98;
  do {
    iVar39 = (int)pFVar23;
    lVar30 = (int64_t)iVar39 + 1;
    while( true ) {
      uVar41 = *(uint *)(this_ptr + -4 + lVar30 * 4);
      iVar37 = (int)pFVar23;
      if (*(int *)(arg1->_ubuf + (uint64_t)uVar41 * 4 + -0x74) == iVar40) break;
      if (*(int *)(arg1->_ubuf + (uint64_t)uVar41 * 4 + -0x74) - iVar40 < 0) {
        uVar7 = *(void*)(this_ptr + lVar24 * 4);
        *(uint *)(this_ptr + lVar24 * 4) = uVar41;
        *(void*)(this_ptr + -4 + lVar30 * 4) = uVar7;
        pFVar23 = (FILE *)(uint64_t)(iVar37 - 1U);
        uVar43 = (uint64_t)(iVar38 + 1U);
        if ((int)(iVar38 + 1U) <= (int)(iVar37 - 1U)) goto LAB_00e9d655;
        goto LAB_00e9d746;
      }
      pFVar23 = (FILE *)(uint64_t)(iVar37 - 1);
      lVar30 = lVar30 + -1;
      if (lVar30 <= lVar24) {
        if (lVar24 <= iVar39) {
          iVar39 = iVar38;
        }
        iVar39 = iVar39 + -1;
        goto LAB_00e9d837;
      }
    }
    *(void*)(this_ptr + -4 + lVar30 * 4) =
         *(void*)(this_ptr + (int64_t)local_b98 * 4);
    *(uint *)(this_ptr + (int64_t)local_b98 * 4) = uVar41;
    local_b98 = (FILE *)((int64_t)&local_b98[-1]._offset + 7);
    pFVar23 = (FILE *)(uint64_t)(iVar37 - 1);
  } while (iVar38 < iVar37);
  iVar39 = iVar37 + -1;
  if ((int)local_b98 < (int)uVar17) goto LAB_00e9dc16;
LAB_00e9d84a:
  iVar40 = iVar38 - uVar17;
  if ((int)(uVar17 - uVar32) < (int)(iVar38 - uVar17)) {
    iVar40 = uVar17 - uVar32;
  }
  if (iVar40 < 1) goto LAB_00e9d9fa;
  lVar30 = (int64_t)(iVar38 - iVar40);
  uVar28 = (uint64_t)(iVar40 - 1U);
  if ((iVar40 - 1U < 7) ||
     (((uint64_t)(lVar34 * 4 + this_ptr) < (lVar30 + uVar28) * 4 + 4 + this_ptr &&
      ((uint64_t)(lVar30 * 4 + this_ptr) < (lVar34 + uVar28) * 4 + 4 + this_ptr))))
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
    puVar3 = (void*)(lVar1 + -0x30 + lVar31 * 4);
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    puVar3 = (void*)(lVar1 + -0x20 + lVar31 * 4);
    uVar11 = *puVar3;
    uVar12 = puVar3[1];
    puVar3 = (void*)(lVar44 + -0x30 + lVar31 * 4);
    uVar13 = puVar3[1];
    puVar4 = (void*)(lVar44 + -0x20 + lVar31 * 4);
    uVar14 = *puVar4;
    uVar15 = puVar4[1];
    puVar4 = (void*)(lVar1 + -0x30 + lVar31 * 4);
    *puVar4 = *puVar3;
    puVar4[1] = uVar13;
    puVar3 = (void*)(lVar1 + -0x20 + lVar31 * 4);
    *puVar3 = uVar14;
    puVar3[1] = uVar15;
    puVar3 = (void*)(lVar44 + -0x30 + lVar31 * 4);
    *puVar3 = uVar9;
    puVar3[1] = uVar10;
    puVar3 = (void*)(lVar44 + -0x20 + lVar31 * 4);
    *puVar3 = uVar11;
    puVar3[1] = uVar12;
    puVar3 = (void*)(lVar1 + -0x10 + lVar31 * 4);
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    puVar3 = (void*)(lVar1 + lVar31 * 4);
    uVar11 = *puVar3;
    uVar12 = puVar3[1];
    puVar4 = (void*)(lVar44 + -0x10 + lVar31 * 4);
    uVar13 = puVar4[1];
    puVar3 = (void*)(lVar44 + lVar31 * 4);
    uVar14 = *puVar3;
    uVar15 = puVar3[1];
    puVar3 = (void*)(lVar1 + -0x10 + lVar31 * 4);
    *puVar3 = *puVar4;
    puVar3[1] = uVar13;
    puVar3 = (void*)(lVar1 + lVar31 * 4);
    *puVar3 = uVar14;
    puVar3[1] = uVar15;
    puVar3 = (void*)(lVar44 + -0x10 + lVar31 * 4);
    *puVar3 = uVar9;
    puVar3[1] = uVar10;
    puVar3 = (void*)(lVar44 + lVar31 * 4);
    *puVar3 = uVar11;
    puVar3[1] = uVar12;
    lVar31 = lVar31 + 0x10;
    lVar25 = lVar25 + 2;
  } while (lVar25 != 0);
  if ((uVar43 & 1) != 0) {
LAB_00e9d986:
    lVar1 = lVar31 + lVar34;
    lVar31 = lVar31 + lVar30;
    puVar3 = (void*)(this_ptr + lVar1 * 4);
    uVar9 = *puVar3;
    uVar10 = puVar3[1];
    puVar3 = (void*)(this_ptr + 0x10 + lVar1 * 4);
    uVar11 = *puVar3;
    uVar12 = puVar3[1];
    puVar4 = (void*)(this_ptr + lVar31 * 4);
    uVar13 = puVar4[1];
    puVar3 = (void*)(this_ptr + 0x10 + lVar31 * 4);
    uVar14 = *puVar3;
    uVar15 = puVar3[1];
    puVar3 = (void*)(this_ptr + lVar1 * 4);
    *puVar3 = *puVar4;
    puVar3[1] = uVar13;
    puVar3 = (void*)(this_ptr + 0x10 + lVar1 * 4);
    *puVar3 = uVar14;
    puVar3[1] = uVar15;
    puVar3 = (void*)(this_ptr + lVar31 * 4);
    *puVar3 = uVar9;
    puVar3[1] = uVar10;
    puVar3 = (void*)(this_ptr + 0x10 + lVar31 * 4);
    *puVar3 = uVar11;
    puVar3[1] = uVar12;
  }
  if (uVar28 + 1 != uVar46) {
    lVar34 = lVar34 + uVar46;
    lVar30 = lVar30 + uVar46;
    iVar40 = iVar40 - (int)uVar46;
LAB_00e9d9d5:
    iVar40 = iVar40 + 1;
    lVar31 = this_ptr;
    do {
      uVar7 = *(void*)(lVar31 + lVar34 * 4);
      *(void*)(lVar31 + lVar34 * 4) = *(void*)(lVar31 + lVar30 * 4);
      *(void*)(lVar31 + lVar30 * 4) = uVar7;
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
  lVar34 = (int64_t)(int)(uVar5 - iVar40);
  uVar28 = (uint64_t)(iVar40 - 1U);
  if ((6 < iVar40 - 1U) &&
     (((lVar34 + uVar28) * 4 + 8 + this_ptr <= (uint64_t)(lVar24 * 4 + this_ptr) ||
      ((lVar24 + uVar28) * 4 + 4 + this_ptr <= (uint64_t)(lVar34 * 4 + 4 + this_ptr))))) {
    uVar43 = uVar28 + 1 & 0x1fffffff8;
    uVar46 = (uVar43 - 8 >> 3) + 1;
    if (uVar43 - 8 == 0) {
      lVar30 = 0;
LAB_00e9db2c:
      lVar31 = lVar30 + lVar24;
      lVar30 = lVar30 + lVar34;
      puVar3 = (void*)(this_ptr + lVar31 * 4);
      uVar9 = *puVar3;
      uVar10 = puVar3[1];
      puVar3 = (void*)(this_ptr + 0x10 + lVar31 * 4);
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      puVar3 = (void*)(this_ptr + 4 + lVar30 * 4);
      uVar13 = puVar3[1];
      puVar4 = (void*)(this_ptr + 0x14 + lVar30 * 4);
      uVar14 = *puVar4;
      uVar15 = puVar4[1];
      puVar4 = (void*)(this_ptr + lVar31 * 4);
      *puVar4 = *puVar3;
      puVar4[1] = uVar13;
      puVar3 = (void*)(this_ptr + 0x10 + lVar31 * 4);
      *puVar3 = uVar14;
      puVar3[1] = uVar15;
      puVar3 = (void*)(this_ptr + 4 + lVar30 * 4);
      *puVar3 = uVar9;
      puVar3[1] = uVar10;
      puVar3 = (void*)(this_ptr + 0x14 + lVar30 * 4);
      *puVar3 = uVar11;
      puVar3[1] = uVar12;
    }
    else {
      lVar31 = lVar18 + lVar24 * 4;
      lVar1 = this_ptr + 0x34 + lVar34 * 4;
      lVar44 = -(uVar46 & 0xfffffffffffffffe);
      lVar30 = 0;
      do {
        puVar3 = (void*)(lVar31 + -0x30 + lVar30 * 4);
        uVar9 = *puVar3;
        uVar10 = puVar3[1];
        puVar3 = (void*)(lVar31 + -0x20 + lVar30 * 4);
        uVar11 = *puVar3;
        uVar12 = puVar3[1];
        puVar3 = (void*)(lVar1 + -0x30 + lVar30 * 4);
        uVar13 = puVar3[1];
        puVar4 = (void*)(lVar1 + -0x20 + lVar30 * 4);
        uVar14 = *puVar4;
        uVar15 = puVar4[1];
        puVar4 = (void*)(lVar31 + -0x30 + lVar30 * 4);
        *puVar4 = *puVar3;
        puVar4[1] = uVar13;
        puVar3 = (void*)(lVar31 + -0x20 + lVar30 * 4);
        *puVar3 = uVar14;
        puVar3[1] = uVar15;
        puVar3 = (void*)(lVar1 + -0x30 + lVar30 * 4);
        *puVar3 = uVar9;
        puVar3[1] = uVar10;
        puVar3 = (void*)(lVar1 + -0x20 + lVar30 * 4);
        *puVar3 = uVar11;
        puVar3[1] = uVar12;
        puVar3 = (void*)(lVar31 + -0x10 + lVar30 * 4);
        uVar9 = *puVar3;
        uVar10 = puVar3[1];
        puVar3 = (void*)(lVar31 + lVar30 * 4);
        uVar11 = *puVar3;
        uVar12 = puVar3[1];
        puVar4 = (void*)(lVar1 + -0x10 + lVar30 * 4);
        uVar13 = puVar4[1];
        puVar3 = (void*)(lVar1 + lVar30 * 4);
        uVar14 = *puVar3;
        uVar15 = puVar3[1];
        puVar3 = (void*)(lVar31 + -0x10 + lVar30 * 4);
        *puVar3 = *puVar4;
        puVar3[1] = uVar13;
        puVar3 = (void*)(lVar31 + lVar30 * 4);
        *puVar3 = uVar14;
        puVar3[1] = uVar15;
        puVar3 = (void*)(lVar1 + -0x10 + lVar30 * 4);
        *puVar3 = uVar9;
        puVar3[1] = uVar10;
        puVar3 = (void*)(lVar1 + lVar30 * 4);
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
  lVar30 = this_ptr;
  do {
    uVar7 = *(void*)(lVar30 + lVar24 * 4);
    *(void*)(lVar30 + lVar24 * 4) = *(void*)(lVar30 + 4 + lVar34 * 4);
    *(void*)(lVar30 + 4 + lVar34 * 4) = uVar7;
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
    param_4 = (FILE *)(uint64_t)uVar41;
  }
  local_1c8[iVar20] = uVar32;
  local_358[iVar20] = (uint)param_4;
  uVar45 = (uint64_t)(iVar20 + 1);
LAB_00e9dc16:
  uVar28 = uVar45;
  if ((int)uVar45 < 1) goto LAB_00e9dc71;
  goto LAB_00e9d42a;
LAB_00e9dc71:
  if ((int)uVar21 <= (int)uVar48) {
    puVar19 = (uint *)((int64_t)(int)uVar33 * 4 + this_ptr);
    iVar20 = -1;
    do {
      iVar40 = *(int *)(arg1->_ubuf + (uint64_t)*puVar19 * 4 + -0x74);
      if (iVar20 != iVar40) {
        puVar2 = (uint *)(param_2 + (int64_t)((int)uVar33 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar33 & 0x1f);
        iVar20 = iVar40;
      }
      uVar33 = uVar33 + 1;
      puVar19 = puVar19 + 1;
      param_4 = arg1;
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
      uVar43 = (uint64_t)(local_b90 & 0xfffffffe);
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
          uVar28 = (uint64_t)(iVar26 + 1);
          piVar16 = piVar35 + 1;
        } while (*piVar35 == 0);
        *piVar35 = *piVar35 + -1;
        arg1->_ubuf[(uint64_t)*(uint *)(this_ptr + uVar45 * 4) - 0x74] = bVar36;
        uVar28 = (int64_t)iVar26 - 1;
        do {
          lVar18 = uVar28 + 1;
          uVar28 = uVar28 + 1;
        } while (local_b68[lVar18] == 0);
        local_b68[uVar28] = local_b68[lVar18] + -1;
        arg1->_ubuf[(uint64_t)*(uint *)(this_ptr + (uVar45 | 1) * 4) - 0x74] = (uchar)uVar28;
        uVar45 = uVar45 + 2;
        uVar43 = uVar43 - 2;
      } while (uVar43 != 0);
    }
    if (((uint64_t)param_1 & 1) != 0) {
      uVar28 = (int64_t)(int)uVar28 - 1;
      do {
        lVar18 = uVar28 + 1;
        uVar28 = uVar28 + 1;
      } while (local_b68[lVar18] == 0);
      local_b68[uVar28] = local_b68[lVar18] + -1;
      arg1->_ubuf[(uint64_t)*(uint *)(this_ptr + uVar45 * 4) - 0x74] = (uchar)uVar28;
    }
    if (0xff < (int)uVar28) {
      if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
        FUN_00e9e160();
        return;
      }
      goto LAB_00e9df07;
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
LAB_00e9df07:
                      ___stack_chk_fail();
}

