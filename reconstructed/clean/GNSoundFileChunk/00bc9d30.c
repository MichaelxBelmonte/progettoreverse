// Function: FUN_00bc9d30
// Address: 00bc9d30
// Size: 3657 bytes
// Class: GNSoundFileChunk
// === GNSoundFileChunk properties ===
//                   _isLoop
//                   _beats
//                   _tonalKey
//                   _tonalGender
//                   _readBuffer
//                   _channelCount
//                   _bitsPerSample
//                   _isFloat
//                   _isLittleEndian


uint64_t FUN_00bc9d30(int param_1,int64_t param_2,uint param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  bool bVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint8_t uVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  void *pvVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t unaff_RBX;
  uint64_t uVar18;
  uint unaff_ESI;
  int64_t lVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  int iVar22;
  uint uVar23;
  int64_t this_ptr;
  int64_t lVar24;
  size_t sVar25;
  int iVar26;
  uint uVar27;
  byte bVar28;
  double dVar29;
  double dVar30;
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint local_res8;
  int64_t local_1058;
  uint local_1038 [2];
  int64_t local_1030 [255];
  int64_t local_838 [256];
  int64_t local_38;
  int iVar38;
  int iVar39;
  int iVar40;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((int)local_res8 < 1) {
    uVar18 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
    goto LAB_00bcab7f;
  }
  lVar3 = *(int64_t *)(this_ptr + 0x18);
  uVar11 = param_3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pvVar13 = (void *)FUN_00b7a710();
  uVar18 = CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
  if (((int64_t)param_4 < (int64_t)pvVar13) &&
     (lVar19 = local_res8 + param_4,
     lVar19 != 0 && SCARRY8((uint64_t)local_res8,param_4) == lVar19 < 0)) {
    if ((int64_t)pvVar13 < lVar19) {
      local_res8 = (int)pvVar13 - (int)param_4;
    }
    uVar18 = (uint64_t)param_3;
    if ((param_2 != 0) && (0 < (int)param_3)) {
      _memcpy(pvVar13,(void *)(uVar18 * 8),uVar11);
    }
    if ((int64_t)param_4 < 0) {
      if (0 < (int)param_3) {
        if (param_3 < 4) {
          uVar21 = 0;
        }
        else {
          uVar21 = (uint64_t)(param_3 & 0xfffffffc);
          uVar20 = (uVar21 - 4 >> 2) + 1;
          uVar17 = (uint64_t)((uint)uVar20 & 3);
          iVar26 = (int)(-(param_4 << 0x20) >> 0x20);
          if (uVar21 - 4 < 0xc) {
            lVar14 = 0;
          }
          else {
            lVar19 = -(uVar20 & 0xfffffffffffffffc);
            lVar14 = 0;
            auVar36._0_8_ = (int64_t)iVar26;
            auVar36._8_4_ = iVar26;
            auVar36._12_4_ = iVar26 >> 0x1f;
            lVar15 = auVar36._0_8_ * 4;
            lVar16 = auVar36._8_8_ * 4;
            do {
              local_838[lVar14] = local_838[lVar14] + lVar15;
              local_838[lVar14 + 1] = local_838[lVar14 + 1] + lVar16;
              local_838[lVar14 + 2] = local_838[lVar14 + 2] + lVar15;
              local_838[lVar14 + 3] = local_838[lVar14 + 3] + lVar16;
              local_838[lVar14 + 4] = local_838[lVar14 + 4] + lVar15;
              local_838[lVar14 + 5] = local_838[lVar14 + 5] + lVar16;
              local_838[lVar14 + 6] = local_838[lVar14 + 6] + lVar15;
              local_838[lVar14 + 7] = local_838[lVar14 + 7] + lVar16;
              local_838[lVar14 + 8] = local_838[lVar14 + 8] + lVar15;
              local_838[lVar14 + 9] = local_838[lVar14 + 9] + lVar16;
              local_838[lVar14 + 10] = local_838[lVar14 + 10] + lVar15;
              local_838[lVar14 + 0xb] = local_838[lVar14 + 0xb] + lVar16;
              local_838[lVar14 + 0xc] = local_838[lVar14 + 0xc] + lVar15;
              local_838[lVar14 + 0xd] = local_838[lVar14 + 0xd] + lVar16;
              local_838[lVar14 + 0xe] = local_838[lVar14 + 0xe] + lVar15;
              local_838[lVar14 + 0xf] = local_838[lVar14 + 0xf] + lVar16;
              lVar14 = lVar14 + 0x10;
              lVar19 = lVar19 + 4;
            } while (lVar19 != 0);
          }
          if (uVar17 != 0) {
            lVar19 = lVar14 * 8 + -0x820;
            lVar14 = lVar14 * 8 + -0x828;
            lVar15 = 0;
            auVar41._0_8_ = (int64_t)iVar26;
            auVar41._8_4_ = iVar26;
            auVar41._12_4_ = iVar26 >> 0x1f;
            lVar16 = auVar41._8_8_ * 4;
            do {
              plVar1 = (int64_t *)((int64_t)local_838 + lVar15 + lVar19 + 0x820);
              lVar24 = plVar1[1];
              plVar2 = (int64_t *)((int64_t)local_838 + lVar15 + lVar14 + 0x838);
              lVar6 = *plVar2;
              lVar7 = plVar2[1];
              plVar2 = (int64_t *)((int64_t)local_838 + lVar15 + lVar19 + 0x820);
              *plVar2 = *plVar1 + auVar41._0_8_ * 4;
              plVar2[1] = lVar24 + lVar16;
              plVar2 = (int64_t *)((int64_t)local_838 + lVar15 + lVar14 + 0x838);
              *plVar2 = lVar6 + auVar41._0_8_ * 4;
              plVar2[1] = lVar7 + lVar16;
              lVar15 = lVar15 + 0x20;
            } while (uVar17 << 5 != lVar15);
          }
          if (uVar21 == uVar18) goto LAB_00bc9fc1;
        }
        do {
          local_838[uVar21] = local_838[uVar21] + ((int64_t)-(param_4 << 0x20) >> 0x20) * 4;
          uVar21 = uVar21 + 1;
        } while (uVar18 != uVar21);
      }
LAB_00bc9fc1:
      local_res8 = local_res8 + (int)param_4;
      param_4 = 0;
    }
    dVar29 = (double)FUN_00e7d6f0();
    dVar30 = (double)FUN_00b7b400();
    lVar14 = FUN_00e7dae0(((dVar29 + dVar30) - g_028024d8) * g_02411988);
    lVar19 = 0;
    if (0 < lVar14) {
      lVar19 = lVar14;
    }
    uVar21 = (uint64_t)(lVar19 - lVar14 != 0);
    lVar14 = (((lVar19 - lVar14) - uVar21) / 0xffffffff + uVar21) * 0xffffffff + lVar14;
    lVar19 = 0xffffffff;
    if (lVar14 < 0xffffffff) {
      lVar19 = lVar14;
    }
    uVar11 = *(uint *)(this_ptr + 0x20);
    uVar21 = (uint64_t)(int)uVar11;
    if ((param_4 | uVar21) >> 0x20 == 0) {
      iVar26 = (int)((param_4 & 0xffffffff) / (uint64_t)uVar11);
    }
    else {
      iVar26 = (int)((int64_t)param_4 / (int64_t)uVar21);
    }
    uVar23 = (int)lVar14 + (int)((uint64_t)((lVar14 + 0xfffffffe) - lVar19) / 0xffffffff);
    if ((int)local_res8 < 1) {
      uVar8 = 1;
    }
    else {
      local_1058 = (int64_t)iVar26;
      lVar19 = uVar21 * local_1058;
      iVar26 = (int)param_4 - (int)lVar19;
      uVar8 = 1;
      do {
        uVar5 = uVar11 - iVar26;
        if ((int)local_res8 < (int)(uVar11 - iVar26)) {
          uVar5 = local_res8;
        }
        uVar21 = (uint64_t)uVar5;
        lVar14 = (int64_t)(int)uVar5;
        while( true ) {
          lVar15 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + local_1058 * 8);
          uVar11 = FUN_00e31390();
          do {
            while ((uVar11 & 2) != 0) {
              FUN_00da6800();
              uVar11 = FUN_00e31390();
            }
            if ((uVar11 & 1) != 0) goto LAB_00bca240;
            cVar9 = FUN_00e314a0(2,uVar11 | 2);
            sVar25 = (size_t)uVar21;
          } while (cVar9 == '\0');
          if (*(int64_t *)(lVar15 + 0x18) != 0) break;
          local_1038[0] = FUN_00e31390();
          cVar9 = FUN_00e314a0(3,local_1038[0] & 0xfffffffd);
          while (cVar9 == '\0') {
            cVar9 = FUN_00e314a0(3,local_1038[0] & 0xfffffffd);
          }
LAB_00bca240:
          lVar15 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + local_1058 * 8);
          local_1038[0] = FUN_00e31390();
          do {
            while (uVar11 = local_1038[0], local_1038[0] = uVar11, (uVar11 & 1) != 0) {
              FUN_00da6800();
              local_1038[0] = FUN_00e31390();
            }
            cVar9 = FUN_00e314a0(2,uVar11 | 1);
          } while (cVar9 == '\0');
          if (*(int64_t *)(lVar15 + 0x18) == 0) {
            if (g_028024fc == 0) {
              iVar12 = FUN_00e83090();
              iVar22 = iVar12 + 3;
              if (-1 < iVar12) {
                iVar22 = iVar12;
              }
              g_028024fc = iVar22 >> 2;
            }
            lVar15 = FUN_00e83010();
            uVar11 = FUN_00b7a700();
            if (0 < (int)uVar11) {
              iVar22 = *(int *)(this_ptr + 0x20);
              if (uVar11 < 4) {
                uVar17 = 0;
              }
              else {
                uVar17 = (uint64_t)(uVar11 & 0xfffffffc);
                auVar31._4_4_ = iVar22;
                auVar31._0_4_ = iVar22;
                auVar31._8_8_ = 0;
                uVar21 = (uVar17 - 4 >> 2) + 1;
                if (uVar17 - 4 == 0) {
                  lVar16 = 0;
                  auVar33 = g_02392fe0;
LAB_00bca48b:
                  auVar36 = pmulld(auVar31,auVar33);
                  auVar34._0_4_ = auVar33._0_4_ + g_023d92d0;
                  auVar34._4_4_ = auVar33._4_4_ + _UNK_023d92d4;
                  auVar34._8_4_ = auVar33._8_4_ + _UNK_023d92d8;
                  auVar34._12_4_ = auVar33._12_4_ + _UNK_023d92dc;
                  auVar41 = pmulld(auVar34,auVar31);
                  auVar36 = pmovsxdq(auVar31,auVar36);
                  auVar41 = pmovsxdq(auVar41,auVar41);
                  auVar32._8_4_ = (int)lVar15;
                  auVar32._0_8_ = lVar15;
                  auVar32._12_4_ = (int)((uint64_t)lVar15 >> 0x20);
                  *(int64_t *)(local_1038 + lVar16 * 2) = auVar36._0_8_ * 4 + lVar15;
                  local_1030[lVar16] = auVar36._8_8_ * 4 + auVar32._8_8_;
                  local_1030[lVar16 + 1] = auVar41._0_8_ * 4 + lVar15;
                  local_1030[lVar16 + 2] = auVar41._8_8_ * 4 + auVar32._8_8_;
                }
                else {
                  lVar24 = -(uVar21 & 0xfffffffffffffffe);
                  lVar16 = 0;
                  auVar33 = g_02392fe0;
                  do {
                    iVar12 = auVar33._0_4_;
                    auVar35._0_4_ = iVar12 + g_023d92d0;
                    iVar38 = auVar33._4_4_;
                    auVar35._4_4_ = iVar38 + _UNK_023d92d4;
                    iVar39 = auVar33._8_4_;
                    iVar40 = auVar33._12_4_;
                    auVar35._8_4_ = iVar39 + _UNK_023d92d8;
                    auVar35._12_4_ = iVar40 + _UNK_023d92dc;
                    auVar41 = pmulld(auVar31,auVar33);
                    auVar36 = pmulld(auVar35,auVar31);
                    auVar41 = pmovsxdq(auVar41,auVar41);
                    auVar36 = pmovsxdq(auVar36,auVar36);
                    *(int64_t *)(local_1038 + lVar16 * 2) = auVar41._0_8_ * 4 + lVar15;
                    local_1030[lVar16] = auVar41._8_8_ * 4 + lVar15;
                    local_1030[lVar16 + 1] = auVar36._0_8_ * 4 + lVar15;
                    local_1030[lVar16 + 2] = auVar36._8_8_ * 4 + lVar15;
                    auVar37._0_4_ = iVar12 + g_023d92e0;
                    auVar37._4_4_ = iVar38 + _UNK_023d92e4;
                    auVar37._8_4_ = iVar39 + _UNK_023d92e8;
                    auVar37._12_4_ = iVar40 + _UNK_023d92ec;
                    auVar42._0_4_ = iVar12 + g_023d92f0;
                    auVar42._4_4_ = iVar38 + _UNK_023d92f4;
                    auVar42._8_4_ = iVar39 + _UNK_023d92f8;
                    auVar42._12_4_ = iVar40 + _UNK_023d92fc;
                    auVar36 = pmulld(auVar37,auVar31);
                    auVar41 = pmulld(auVar42,auVar31);
                    auVar36 = pmovsxdq(auVar36,auVar36);
                    auVar41 = pmovsxdq(auVar41,auVar41);
                    local_1030[lVar16 + 3] = auVar36._0_8_ * 4 + lVar15;
                    local_1030[lVar16 + 4] = auVar36._8_8_ * 4 + lVar15;
                    local_1030[lVar16 + 5] = auVar41._0_8_ * 4 + lVar15;
                    local_1030[lVar16 + 6] = auVar41._8_8_ * 4 + lVar15;
                    lVar16 = lVar16 + 8;
                    auVar33._0_4_ = iVar12 + g_02410ff0;
                    auVar33._4_4_ = iVar38 + _UNK_02410ff4;
                    auVar33._8_4_ = iVar39 + _UNK_02410ff8;
                    auVar33._12_4_ = iVar40 + _UNK_02410ffc;
                    lVar24 = lVar24 + 2;
                  } while (lVar24 != 0);
                  if ((uVar21 & 1) != 0) goto LAB_00bca48b;
                }
                if (uVar17 == uVar11) goto LAB_00bca511;
              }
              iVar12 = iVar22 * (int)uVar17;
              do {
                *(int64_t *)(local_1038 + uVar17 * 2) = (int64_t)iVar12 * 4 + lVar15;
                uVar17 = uVar17 + 1;
                iVar12 = iVar12 + iVar22;
              } while (uVar11 != uVar17);
            }
LAB_00bca511:
            if ((unaff_ESI < 2) &&
               ((uVar5 == *(uint *)(this_ptr + 0x20) ||
                ((*(int *)(*(int64_t *)(this_ptr + 0x18) + 0xc) + -1 == (int)local_1058 &&
                 (lVar16 = FUN_00b7a710(), lVar16 <= lVar14 + lVar19)))))) {
              bVar28 = 0;
            }
            else {
              bVar10 = FUN_00b870b0(*(void*)(this_ptr + 0x20),lVar19);
              bVar28 = bVar10 ^ 1;
              if (0 < (int)uVar11 && bVar10 == 0) {
                uVar17 = 0;
                do {
                  (**(code **)(g_02786500 + 0x40))();
                  uVar17 = uVar17 + 1;
                } while (uVar11 != uVar17);
              }
            }
            lVar16 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + local_1058 * 8);
            *(int64_t *)(lVar16 + 0x18) = lVar15;
            *(byte *)(lVar16 + 0xc) = bVar28;
            uVar11 = FUN_00e31390();
            do {
              cVar9 = FUN_00e314a0(3,uVar11 & 0xfffffffe);
            } while (cVar9 == '\0');
          }
          else {
            local_1038[0] = uVar11 | 1;
            cVar9 = FUN_00e314a0(0,uVar11 & 0xfffffffe);
            while (cVar9 == '\0') {
              cVar9 = FUN_00e314a0(0,local_1038[0] & 0xfffffffe);
            }
          }
        }
        if (*(char *)(*(int64_t *)(*(int64_t *)(lVar3 + 0x10) + local_1058 * 8) + 0xc) != '\0') {
          uVar8 = 0;
        }
        if (0 < (int)param_3) {
          lVar15 = (int64_t)iVar26;
          switch(unaff_ESI) {
          case 0:
            uVar21 = 0;
            do {
              lVar16 = local_838[uVar21];
              (**(code **)(g_02786500 + 0x40))
                        ((int64_t)(param_1 + (int)uVar21) * (int64_t)*(int *)(this_ptr + 0x20) +
                         lVar15);
              local_838[uVar21] = lVar16 + lVar14 * 4;
              uVar21 = uVar21 + 1;
            } while (uVar18 != uVar21);
            break;
          case 1:
            pvVar13 = (void *)(lVar14 * 4);
            if (param_3 == 1) {
              uVar17 = 0;
            }
            else {
              uVar17 = 0;
              do {
                lVar16 = local_838[uVar17];
                _memcpy((void *)((int64_t)(param_1 + (int)uVar17) *
                                 (int64_t)*(int *)(this_ptr + 0x20) + lVar15),pvVar13,
                        (size_t)uVar21);
                local_838[uVar17] = lVar16 + lVar14 * 4;
                lVar16 = local_838[uVar17 + 1];
                _memcpy((void *)((int64_t)(param_1 + 1 + (int)uVar17) *
                                 (int64_t)*(int *)(this_ptr + 0x20) + lVar15),pvVar13,
                        (size_t)uVar21);
                sVar25 = (size_t)uVar21;
                local_838[uVar17 + 1] = lVar16 + lVar14 * 4;
                uVar17 = uVar17 + 2;
              } while ((param_3 & 0xfffffffe) != uVar17);
            }
            if ((param_3 & 1) != 0) {
              lVar16 = local_838[uVar17];
              _memcpy((void *)((int64_t)(param_1 + (int)uVar17) *
                               (int64_t)*(int *)(this_ptr + 0x20) + lVar15),pvVar13,sVar25);
              local_838[uVar17] = lVar16 + lVar14 * 4;
            }
            break;
          default:
            uVar21 = 0;
            do {
              lVar16 = local_838[uVar21];
              if (unaff_ESI == 2) {
                (**(code **)(g_02786500 + 0x28))
                          ((int64_t)(param_1 + (int)uVar21) * (int64_t)*(int *)(this_ptr + 0x20)
                           + lVar15,uVar5);
              }
              local_838[uVar21] = lVar16 + lVar14 * 4;
              uVar21 = uVar21 + 1;
            } while (uVar18 != uVar21);
            break;
          case 3:
            uVar21 = 0;
            do {
              lVar16 = local_838[uVar21];
              (**(code **)(g_02786500 + 0x30))
                        ((int64_t)(param_1 + (int)uVar21) * (int64_t)*(int *)(this_ptr + 0x20) +
                         lVar15,uVar5);
              local_838[uVar21] = lVar16 + lVar14 * 4;
              uVar21 = uVar21 + 1;
            } while (uVar18 != uVar21);
            break;
          case 4:
            uVar21 = 0;
            do {
              lVar16 = local_838[uVar21];
              (**(code **)(g_02786500 + 0x38))
                        ((int64_t)(param_1 + (int)uVar21) * (int64_t)*(int *)(this_ptr + 0x20) +
                         lVar15,uVar5);
              local_838[uVar21] = lVar16 + lVar14 * 4;
              uVar21 = uVar21 + 1;
            } while (uVar18 != uVar21);
          }
        }
        local_1038[0] = FUN_00e31390();
        if (local_1038[0] != uVar23) {
          do {
            bVar4 = -(uVar23 - local_1038[0]) < 0x80000001;
            if (local_1038[0] <= uVar23) {
              bVar4 = (int)(uVar23 - local_1038[0]) < 0;
            }
          } while ((!bVar4) && (bVar10 = FUN_00e314a0(0), (bVar10 | local_1038[0] == uVar23) != 1));
        }
        local_1038[0] = FUN_00e31390();
        do {
          cVar9 = FUN_00e314a0(3,local_1038[0] & 0xfffffff5 | 8);
        } while (cVar9 == '\0');
        uVar11 = *(uint *)(this_ptr + 0x20);
        lVar19 = lVar19 + (int)uVar11;
        local_1058 = local_1058 + 1;
        iVar26 = 0;
        uVar27 = local_res8 - uVar5;
        bVar4 = (int)uVar5 <= (int)local_res8;
        local_res8 = uVar27;
      } while (uVar27 != 0 && bVar4);
    }
    uVar18 = this_ptr + 0x24;
    local_1038[0] = FUN_00e31390();
    if (local_1038[0] != uVar23) {
      do {
        bVar4 = -(uVar23 - local_1038[0]) < 0x80000001;
        if (local_1038[0] <= uVar23) {
          bVar4 = (int)(uVar23 - local_1038[0]) < 0;
        }
      } while ((!bVar4) &&
              (bVar10 = FUN_00e314a0(0), uVar18 = (uint64_t)uVar23,
              (bVar10 | local_1038[0] == uVar23) != 1));
    }
    uVar18 = CONCAT71((int7)(uVar18 >> 8),uVar8);
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
LAB_00bcab7f:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar18 & 0xffffffff;
}

