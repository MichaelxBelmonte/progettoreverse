// ===================================================================
// GNSoundFileChunk — Complete reconstructed pseudocode
// 32 functions
// ===================================================================

// Registered properties (9):
//                   _isLoop
//                   _beats
//                   _tonalKey
//                   _tonalGender
//                   _readBuffer
//                   _channelCount
//                   _bitsPerSample
//                   _isFloat
//                   _isLittleEndian


// ============================================================
// 00bc7ea0
// ============================================================
// Function: FUN_00bc7ea0
// Address: 00bc7ea0
// Size: 7489 bytes
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


uint64_t FUN_00bc7ea0(double param_1,uint param_2,float *param_3,uint param_4)

{
  int64_t *plVar1;
  float *pfVar2;
  float *pfVar3;
  void*puVar4;
  int64_t lVar5;
  bool bVar6;
  int64_t lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  bool bVar17;
  char cVar18;
  bool bVar19;
  char extraout_AH;
  uint uVar20;
  uint uVar21;
  int64_t lVar22;
  float *pfVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  void*in_RCX;
  float *pfVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  void *pvVar30;
  int64_t lVar31;
  int iVar32;
  uint64_t uVar33;
  uint64_t uVar34;
  uint64_t uVar35;
  float *pfVar36;
  uint64_t uVar37;
  float *pfVar38;
  uint64_t uVar39;
  char unaff_SIL;
  uint uVar40;
  uint uVar41;
  int64_t lVar42;
  float *pfVar43;
  uint uVar44;
  int64_t this_ptr;
  uint64_t uVar45;
  uint64_t uVar46;
  float *pfVar47;
  float *pfVar48;
  size_t sVar49;
  size_t sVar50;
  uint uVar51;
  uint64_t uVar52;
  uint64_t uVar53;
  uint uVar54;
  uint64_t uVar55;
  int iVar56;
  float fVar57;
  int64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar58 [16];
  uint8_t auVar59 [16];
  uint8_t auVar60 [16];
  uint8_t auVar61 [16];
  int iVar62;
  float fVar63;
  int64_t lVar64;
  int64_t lVar65;
  uint8_t auVar66 [16];
  uint8_t auVar67 [16];
  uint8_t auVar68 [16];
  uint8_t auVar69 [16];
  uint8_t auVar70 [16];
  uint8_t auVar71 [16];
  uint8_t auVar72 [16];
  uint8_t auVar73 [16];
  int64_t lVar77;
  uint8_t auVar74 [16];
  uint8_t auVar75 [16];
  int64_t lVar78;
  uint8_t auVar76 [16];
  float fVar79;
  uint8_t auVar80 [16];
  uint8_t auVar81 [16];
  uint8_t auVar82 [16];
  uint8_t auVar83 [16];
  uint8_t auVar84 [16];
  uint8_t auVar85 [16];
  uint8_t auVar86 [16];
  uint8_t auVar87 [16];
  uint8_t auVar88 [16];
  uint8_t auVar89 [16];
  uint8_t auVar90 [16];
  uint8_t auVar91 [16];
  uint8_t auVar92 [16];
  uint8_t auVar93 [16];
  uint8_t auVar94 [16];
  uint8_t auVar95 [16];
  uint8_t auVar96 [16];
  uint8_t auVar98 [16];
  uint8_t auVar99 [16];
  uint8_t auVar100 [16];
  uint64_t local_res8;
  uint local_res10;
  uint64_t uStack_11e0;
  uint8_t local_10b8 [16];
  int64_t local_1070;
  uint local_103c;
  uint local_1038;
  uint32_t uStack_1034;
  char local_1030 [8];
  uint64_t auStack_1028 [2];
  uint8_t auStack_1018 [16];
  uint64_t auStack_1008 [250];
  float *local_838 [2];
  int64_t local_828 [8];
  int64_t alStack_7e8 [2];
  int64_t alStack_7d8 [2];
  int64_t alStack_7c8 [242];
  int64_t local_38;
  int iVar97;
  
  sVar49 = (size_t)param_3;
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar5 = *(int64_t *)(this_ptr + 0x18);
  sVar50 = sVar49;
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  uVar55 = 1;
  if (param_1 < g_0238fee8) {
    uVar20 = FUN_00e7d850(g_0238fee8 / param_1);
    uVar55 = (uint64_t)uVar20;
    local_res10 = uVar20 * local_res10;
    if ((local_res8 | (int64_t)(int)uVar20) >> 0x20 == 0) {
      uVar33 = (local_res8 & 0xffffffff) % uVar55;
    }
    else {
      uVar33 = (int64_t)local_res8 % (int64_t)(int)uVar20;
    }
    local_res8 = local_res8 - uVar33;
  }
  if ((int)local_res10 < 1) {
    uVar55 = CONCAT71((int7)((uint64_t)in_RCX >> 8),1);
    goto LAB_00bc826c;
  }
  FUN_00b86c20();
  pvVar30 = (void *)(uint64_t)param_2;
  uVar20 = param_2 & 3;
  uVar54 = (uint)uVar55;
  if ((param_2 & 4) == 0) {
    fVar79 = g_02390124;
    if (uVar54 != 1) {
      fVar79 = g_02390124 / (float)(int)uVar54;
    }
    local_10b8 = ZEXT416((uint)fVar79);
    if ((uVar20 == 2) && (extraout_AH == '\0')) {
      local_10b8 = ZEXT416((uint)(fVar79 / (float)(int)param_4));
    }
    if ((param_2 & 1) != 0) {
      local_10b8._0_4_ = (float)local_10b8._0_4_ * g_0239011c;
      goto LAB_00bc804b;
    }
  }
  else {
    local_10b8._8_4_ = 0;
    local_10b8._12_4_ = 0;
    local_10b8._0_4_ = g_02390124;
LAB_00bc804b:
    local_10b8._4_4_ = 0;
  }
  ___bzero();
  if (uVar20 == 2) {
    local_838[0] = (float *)*in_RCX;
    local_103c = 1;
  }
  else {
    local_103c = param_4;
    if (0 < (int)param_4) {
      _memcpy(pvVar30,(void *)((uint64_t)param_4 << 3),sVar50);
    }
  }
  lVar22 = FUN_00b7a710();
  if ((lVar22 <= (int64_t)local_res8) || ((int64_t)(local_res10 + local_res8) < 1)) {
    uVar55 = CONCAT71((int7)(local_res8 >> 8),1);
    if (0 < (int)local_103c) {
      if (6 < (uint64_t)local_103c - 1) {
        uVar33 = 0;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          uVar33 = uVar33 + 8;
        } while ((local_103c & 0xfffffff8) != uVar33);
      }
      if ((uint64_t)(local_103c & 7) != 0) {
        uVar33 = 0;
        do {
          ___bzero();
          uVar33 = uVar33 + 1;
        } while ((local_103c & 7) != uVar33);
      }
    }
    goto LAB_00bc826c;
  }
  iVar56 = (int)local_res8;
  lVar31 = extraout_XMM0_Qa;
  if (lVar22 < (int64_t)(local_res10 + local_res8)) {
    if (0 < (int)local_103c) {
      if (6 < (uint64_t)local_103c - 1) {
        uVar33 = 0;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          lVar31 = ___bzero();
          uVar33 = uVar33 + 8;
        } while ((local_103c & 0xfffffff8) != uVar33);
      }
      if ((uint64_t)(local_103c & 7) != 0) {
        uVar33 = 0;
        do {
          lVar31 = ___bzero();
          uVar33 = uVar33 + 1;
        } while ((local_103c & 7) != uVar33);
      }
    }
    local_res10 = (int)lVar22 - iVar56;
    if (-1 < (int64_t)local_res8) goto LAB_00bc8104;
LAB_00bc8422:
    iVar62 = -iVar56 / (int)uVar54;
    if (0 < (int)local_103c) {
      lVar22 = (int64_t)iVar62;
      uVar33 = (uint64_t)local_103c;
      if (6 < uVar33 - 1) {
        uVar39 = 0;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          lVar31 = ___bzero();
          uVar39 = uVar39 + 8;
        } while ((local_103c & 0xfffffff8) != uVar39);
      }
      if ((uint64_t)(local_103c & 7) != 0) {
        uVar39 = 0;
        do {
          lVar31 = ___bzero();
          uVar39 = uVar39 + 1;
        } while ((local_103c & 7) != uVar39);
      }
      if (local_103c < 4) {
        uVar39 = 0;
      }
      else {
        uVar39 = (uint64_t)(local_103c & 0xfffffffc);
        uVar34 = (uVar39 - 4 >> 2) + 1;
        uVar24 = (uint64_t)((uint)uVar34 & 3);
        if (uVar39 - 4 < 0xc) {
          lVar78 = 0;
        }
        else {
          lVar31 = -(uVar34 & 0xfffffffffffffffc);
          lVar78 = 0;
          auVar91._8_4_ = iVar62;
          auVar91._0_8_ = lVar22;
          auVar91._12_4_ = iVar62 >> 0x1f;
          lVar64 = lVar22 * 4;
          lVar42 = auVar91._8_8_ * 4;
          do {
            lVar65 = local_828[lVar78 + -1];
            lVar77 = local_828[lVar78 + 1];
            local_838[lVar78] = local_838[lVar78] + lVar22;
            local_828[lVar78 + -1] = lVar65 + lVar42;
            local_828[lVar78] = local_828[lVar78] + lVar64;
            local_828[lVar78 + 1] = lVar77 + lVar42;
            local_828[lVar78 + 2] = local_828[lVar78 + 2] + lVar64;
            local_828[lVar78 + 3] = local_828[lVar78 + 3] + lVar42;
            local_828[lVar78 + 4] = local_828[lVar78 + 4] + lVar64;
            local_828[lVar78 + 5] = local_828[lVar78 + 5] + lVar42;
            lVar65 = alStack_7e8[lVar78];
            lVar77 = alStack_7e8[lVar78 + 1];
            local_828[lVar78 + 6] = local_828[lVar78 + 6] + lVar64;
            local_828[lVar78 + 7] = local_828[lVar78 + 7] + lVar42;
            alStack_7e8[lVar78] = lVar65 + lVar64;
            alStack_7e8[lVar78 + 1] = lVar77 + lVar42;
            auVar99._0_8_ = alStack_7c8[lVar78] + lVar64;
            auVar99._8_8_ = alStack_7c8[lVar78 + 1] + lVar42;
            alStack_7d8[lVar78] = alStack_7d8[lVar78] + lVar64;
            alStack_7d8[lVar78 + 1] = alStack_7d8[lVar78 + 1] + lVar42;
            *(uint8_t (*) [16])(alStack_7c8 + lVar78) = auVar99;
            lVar78 = lVar78 + 0x10;
            lVar31 = lVar31 + 4;
          } while (lVar31 != 0);
        }
        lVar31 = lVar22;
        if (uVar24 != 0) {
          lVar64 = lVar78 * 8 + -0x820;
          lVar78 = lVar78 * 8 + -0x828;
          lVar42 = 0;
          auVar95._8_4_ = iVar62;
          auVar95._0_8_ = lVar22;
          auVar95._12_4_ = iVar62 >> 0x1f;
          lVar31 = lVar22 * 4;
          lVar65 = auVar95._8_8_ * 4;
          do {
            plVar1 = (int64_t *)((int64_t)local_838 + lVar42 + lVar64 + 0x820);
            auVar66._0_8_ = *plVar1 + lVar31;
            auVar66._8_8_ = plVar1[1] + lVar65;
            plVar1 = (int64_t *)((int64_t)local_828 + lVar42 + lVar78 + 0x828);
            lVar77 = *plVar1;
            lVar7 = plVar1[1];
            *(uint8_t (*) [16])((int64_t)local_838 + lVar42 + lVar64 + 0x820) = auVar66;
            plVar1 = (int64_t *)((int64_t)local_828 + lVar42 + lVar78 + 0x828);
            *plVar1 = lVar77 + lVar31;
            plVar1[1] = lVar7 + lVar65;
            lVar42 = lVar42 + 0x20;
          } while (uVar24 << 5 != lVar42);
        }
        if (uVar39 == uVar33) goto LAB_00bc8721;
      }
      do {
        local_838[uVar39] = local_838[uVar39] + lVar22;
        uVar39 = uVar39 + 1;
      } while (uVar33 != uVar39);
    }
LAB_00bc8721:
    local_res10 = local_res10 + iVar56;
    local_res8 = 0;
    if (unaff_SIL != '\0') goto LAB_00bc8119;
LAB_00bc8743:
    bVar17 = false;
    local_1070 = 0;
  }
  else {
    if ((int64_t)local_res8 < 0) goto LAB_00bc8422;
LAB_00bc8104:
    if (unaff_SIL == '\0') goto LAB_00bc8743;
LAB_00bc8119:
    FUN_00bea820(lVar31,1);
    local_1070 = CONCAT44(uStack_1034,local_1038);
    if (local_1070 == 0) {
      local_1070 = 0;
      bVar17 = false;
    }
    else if (local_1030[0] == '\0') {
      FUN_00d50b00();
      bVar17 = true;
      if ((local_1030[0] != '\0') && (CONCAT44(uStack_1034,local_1038) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_1030[0] = '\0';
      bVar17 = true;
    }
    FUN_00bea970(local_res10);
  }
  bVar6 = param_1 == g_0238fee8;
  if (0 < (int)local_res10) {
    uVar40 = *(uint *)(this_ptr + 0x20);
    if ((local_res8 | (int64_t)(int)uVar40) >> 0x20 == 0) {
      iVar56 = (int)((local_res8 & 0xffffffff) / (uint64_t)uVar40);
    }
    else {
      iVar56 = (int)((int64_t)local_res8 / (int64_t)(int)uVar40);
    }
    lVar22 = (int64_t)iVar56;
    iVar56 = (int)local_res8 - iVar56 * uVar40;
    uVar52 = (uint64_t)local_103c;
    fVar79 = (float)local_10b8._0_4_ * 0.0;
    pfVar23 = (float *)(uint64_t)param_4;
    auVar80._0_8_ = CONCAT44(fVar79,fVar79);
    auVar80._8_4_ = fVar79;
    auVar80._12_4_ = fVar79;
    pfVar27 = (float *)(uint64_t)(param_4 & 0xfffffffc);
    iVar62 = sVar49 + 2;
    uVar24 = (uint64_t)(local_103c & 0xfffffffc);
    uVar28 = ((uint64_t)(pfVar27 + -1) >> 2) + 1;
    uVar35 = (uVar24 - 4 >> 2) + 1;
    uVar34 = (uint64_t)(local_103c & 7);
    uVar25 = (uint64_t)(local_103c & 0xfffffff8);
    uVar45 = (uint64_t)((uint)uVar35 & 3);
    uVar29 = uVar45 << 5;
    uVar21 = uVar54 - 1;
    uVar33 = uVar52 - 1;
    bVar19 = false;
    uVar39 = uVar29;
    do {
      uVar41 = uVar40 - iVar56;
      if ((int)local_res10 < (int)(uVar40 - iVar56)) {
        uVar41 = local_res10;
      }
      uVar37 = (int64_t)(int)uVar41 / (int64_t)(int)uVar54;
      uVar40 = (uint)uVar37;
      lVar31 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar22 * 8);
      local_1038 = FUN_00e31390(uVar39,(int64_t)(int)uVar41 % (int64_t)(int)uVar54 & 0xffffffff);
      do {
        cVar18 = FUN_00e314a0(2,local_1038 + 0x10);
        auVar58._8_8_ = extraout_XMM0_Qb;
        auVar58._0_8_ = extraout_XMM0_Qa_00;
      } while (cVar18 == '\0');
      if (((local_1038 & 1) == 0) && (*(int64_t *)(lVar31 + 0x18) != 0)) {
        pvVar30 = (void *)((int64_t)iVar56 * 4 +
                          *(int64_t *)
                           (*(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar22 * 8) + 0x18));
        if (bVar6 && uVar20 == 0) {
          if (0 < (int)local_103c) {
            pvVar30 = (void *)(int64_t)(int)(uVar40 * 4);
            if (uVar52 == 1) {
              uVar39 = 0;
            }
            else {
              uVar39 = 0;
              do {
                _memcpy((void *)((int64_t)(int)(sVar49 + (int)uVar39) *
                                (int64_t)*(int *)(this_ptr + 0x20)),pvVar30,(size_t)param_3);
                _memcpy((void *)((int64_t)(int)(sVar49 + 1 + (int)uVar39) *
                                (int64_t)*(int *)(this_ptr + 0x20)),pvVar30,(size_t)param_3);
                uVar39 = uVar39 + 2;
              } while ((local_103c & 0xfffffffe) != uVar39);
            }
            if ((local_103c & 1) != 0) {
              _memcpy((void *)((int64_t)(int)((int)uVar39 + sVar49) *
                              (int64_t)*(int *)(this_ptr + 0x20)),pvVar30,(size_t)param_3);
            }
          }
        }
        else if ((param_2 & 1) == 0) {
          if (uVar20 == 2) {
            if (0 < (int)local_103c) {
              if (6 < uVar33) {
                uVar39 = 0;
                do {
                  ___bzero();
                  ___bzero();
                  ___bzero();
                  ___bzero();
                  ___bzero();
                  ___bzero();
                  ___bzero();
                  ___bzero();
                  uVar39 = uVar39 + 8;
                } while (uVar25 != uVar39);
              }
              if ((local_103c & 7) != 0) {
                uVar39 = 0;
                do {
                  ___bzero();
                  uVar39 = uVar39 + 1;
                } while (uVar34 != uVar39);
              }
            }
            if (extraout_AH == '\0') {
              if ((int)param_4 < 1) {
                if (0 < (int)uVar40) {
                  param_3 = (float *)(uint64_t)(uVar40 - 1);
                  pfVar38 = (float *)0x0;
                  pfVar48 = local_838[0];
                  if (6 < uVar40 - 1) {
                    param_3 = (float *)((int64_t)param_3 + 1);
                    pfVar38 = (float *)((uint64_t)param_3 & 0xfffffffffffffff8);
                    uVar39 = ((uint64_t)(pfVar38 + -2) >> 3) + 1;
                    if (pfVar38 + -2 == (float *)0x0) {
                      lVar31 = 0;
                    }
                    else {
                      lVar78 = -(uVar39 & 0xfffffffffffffffe);
                      lVar31 = 0;
                      do {
                        pfVar48 = local_838[0] + lVar31;
                        fVar57 = pfVar48[1];
                        fVar63 = pfVar48[2];
                        fVar8 = pfVar48[3];
                        pfVar47 = local_838[0] + lVar31 + 4;
                        pfVar43 = local_838[0] + lVar31 + 8;
                        fVar9 = *pfVar43;
                        fVar10 = pfVar43[1];
                        fVar11 = pfVar43[2];
                        fVar12 = pfVar43[3];
                        pfVar43 = local_838[0] + lVar31 + 0xc;
                        fVar13 = *pfVar43;
                        fVar14 = pfVar43[1];
                        fVar15 = pfVar43[2];
                        fVar16 = pfVar43[3];
                        auVar69._0_4_ = *pfVar47 * (float)local_10b8._0_4_;
                        auVar69._4_4_ = pfVar47[1] * (float)local_10b8._0_4_;
                        auVar69._8_4_ = pfVar47[2] * (float)local_10b8._0_4_;
                        auVar69._12_4_ = pfVar47[3] * (float)local_10b8._0_4_;
                        pfVar47 = local_838[0] + lVar31;
                        *pfVar47 = *pfVar48 * (float)local_10b8._0_4_;
                        pfVar47[1] = fVar57 * (float)local_10b8._0_4_;
                        pfVar47[2] = fVar63 * (float)local_10b8._0_4_;
                        pfVar47[3] = fVar8 * (float)local_10b8._0_4_;
                        *(uint8_t (*) [16])(local_838[0] + lVar31 + 4) = auVar69;
                        auVar82._0_4_ = fVar9 * (float)local_10b8._0_4_;
                        auVar82._4_4_ = fVar10 * (float)local_10b8._0_4_;
                        auVar82._8_4_ = fVar11 * (float)local_10b8._0_4_;
                        auVar82._12_4_ = fVar12 * (float)local_10b8._0_4_;
                        auVar89._0_4_ = fVar13 * (float)local_10b8._0_4_;
                        auVar89._4_4_ = fVar14 * (float)local_10b8._0_4_;
                        auVar89._8_4_ = fVar15 * (float)local_10b8._0_4_;
                        auVar89._12_4_ = fVar16 * (float)local_10b8._0_4_;
                        *(uint8_t (*) [16])(local_838[0] + lVar31 + 8) = auVar82;
                        *(uint8_t (*) [16])(local_838[0] + lVar31 + 0xc) = auVar89;
                        lVar31 = lVar31 + 0x10;
                        lVar78 = lVar78 + 2;
                      } while (lVar78 != 0);
                    }
                    if ((uVar39 & 1) != 0) {
                      pfVar48 = local_838[0] + lVar31;
                      fVar57 = pfVar48[1];
                      fVar63 = pfVar48[2];
                      fVar8 = pfVar48[3];
                      pfVar47 = local_838[0] + lVar31 + 4;
                      auVar72._0_4_ = *pfVar47 * (float)local_10b8._0_4_;
                      auVar72._4_4_ = pfVar47[1] * (float)local_10b8._0_4_;
                      auVar72._8_4_ = pfVar47[2] * (float)local_10b8._0_4_;
                      auVar72._12_4_ = pfVar47[3] * (float)local_10b8._0_4_;
                      pfVar47 = local_838[0] + lVar31;
                      *pfVar47 = *pfVar48 * (float)local_10b8._0_4_;
                      pfVar47[1] = fVar57 * (float)local_10b8._0_4_;
                      pfVar47[2] = fVar63 * (float)local_10b8._0_4_;
                      pfVar47[3] = fVar8 * (float)local_10b8._0_4_;
                      *(uint8_t (*) [16])(local_838[0] + lVar31 + 4) = auVar72;
                    }
                    if (param_3 == pfVar38) goto LAB_00bc99d0;
                    pfVar48 = local_838[0] + (int64_t)pfVar38;
                  }
                  lVar31 = 0;
                  do {
                    pfVar48[lVar31] = pfVar48[lVar31] * (float)local_10b8._0_4_;
                    lVar31 = lVar31 + 1;
                  } while (uVar40 - (int)pfVar38 != (int)lVar31);
                }
              }
              else {
                iVar56 = *(int *)(this_ptr + 0x20);
                if (param_4 < 4) {
                  pfVar48 = (float *)0x0;
LAB_00bc97d6:
                  iVar32 = (sVar49 + (int)pfVar48) * iVar56;
                  do {
                    *(void **)(local_1030 + (int64_t)pfVar48 * 8 + -8) =
                         (void *)((int64_t)pvVar30 + (int64_t)iVar32 * 4);
                    pfVar48 = (float *)((int64_t)pfVar48 + 1);
                    iVar32 = iVar32 + iVar56;
                  } while (pfVar23 != pfVar48);
                }
                else {
                  auVar70._4_4_ = iVar56;
                  auVar70._0_4_ = iVar56;
                  auVar70._8_8_ = 0;
                  if (pfVar27 + -1 == (float *)0x0) {
                    lVar31 = 0;
                    auVar83 = g_02392fe0;
                  }
                  else {
                    lVar31 = 0;
                    lVar78 = -(uVar28 & 0xfffffffffffffffe);
                    auVar83 = g_02392fe0;
                    do {
                      iVar32 = auVar83._0_4_;
                      auVar90._0_4_ = iVar32 + sVar49;
                      iVar97 = auVar83._4_4_;
                      auVar90._4_4_ = iVar97 + sVar49;
                      auVar90._8_4_ = auVar83._8_4_;
                      auVar90._12_4_ = auVar83._12_4_;
                      auVar98._0_4_ = iVar62 + iVar32;
                      auVar98._4_4_ = iVar62 + iVar97;
                      auVar98._8_4_ = auVar90._8_4_;
                      auVar98._12_4_ = auVar90._12_4_;
                      auVar91 = pmulld(auVar90,auVar70);
                      auVar99 = pmulld(auVar98,auVar70);
                      auVar91 = pmovsxdq(auVar91,auVar91);
                      auVar99 = pmovsxdq(auVar99,auVar99);
                      *(void **)(local_1030 + lVar31 * 8 + -8) =
                           (void *)(auVar91._0_8_ * 4 + (int64_t)pvVar30);
                      *(void **)(local_1030 + lVar31 * 8) =
                           (void *)(auVar91._8_8_ * 4 + (int64_t)pvVar30);
                      auStack_1028[lVar31] = (void *)(auVar99._0_8_ * 4 + (int64_t)pvVar30);
                      auStack_1028[lVar31 + 1] = (void *)(auVar99._8_8_ * 4 + (int64_t)pvVar30);
                      auVar92._8_4_ = auVar90._8_4_ + _UNK_023d92e8;
                      auVar92._12_4_ = auVar90._12_4_ + _UNK_023d92ec;
                      auVar100._0_4_ = iVar62 + iVar32 + g_023d92e0;
                      auVar100._4_4_ = iVar62 + iVar97 + _UNK_023d92e4;
                      auVar100._8_4_ = auVar92._8_4_;
                      auVar100._12_4_ = auVar92._12_4_;
                      auVar92._0_4_ = iVar32 + g_023d92e0 + sVar49;
                      auVar92._4_4_ = iVar97 + _UNK_023d92e4 + sVar49;
                      auVar91 = pmulld(auVar92,auVar70);
                      auVar99 = pmulld(auVar100,auVar70);
                      auVar91 = pmovsxdq(auVar91,auVar91);
                      auVar99 = pmovsxdq(auVar99,auVar99);
                      auVar93._0_8_ = (void *)(auVar91._0_8_ * 4 + (int64_t)pvVar30);
                      auVar93._8_8_ = (void *)(auVar91._8_8_ * 4 + (int64_t)pvVar30);
                      *(uint8_t (*) [16])(auStack_1018 + lVar31 * 8) = auVar93;
                      auStack_1008[lVar31] = (void *)(auVar99._0_8_ * 4 + (int64_t)pvVar30);
                      auStack_1008[lVar31 + 1] = (void *)(auVar99._8_8_ * 4 + (int64_t)pvVar30);
                      lVar31 = lVar31 + 8;
                      auVar83._0_4_ = iVar32 + g_02410ff0;
                      auVar83._4_4_ = iVar97 + _UNK_02410ff4;
                      auVar83._8_4_ = auVar90._8_4_ + _UNK_02410ff8;
                      auVar83._12_4_ = auVar90._12_4_ + _UNK_02410ffc;
                      lVar78 = lVar78 + 2;
                    } while (lVar78 != 0);
                  }
                  if ((uVar28 & 1) != 0) {
                    auVar94._0_4_ = iVar62 + auVar83._0_4_;
                    auVar94._4_4_ = iVar62 + auVar83._4_4_;
                    auVar84._8_4_ = auVar83._8_4_;
                    auVar94._8_4_ = auVar84._8_4_;
                    auVar84._12_4_ = auVar83._12_4_;
                    auVar94._12_4_ = auVar84._12_4_;
                    auVar84._0_4_ = auVar83._0_4_ + sVar49;
                    auVar84._4_4_ = auVar83._4_4_ + sVar49;
                    auVar99 = pmulld(auVar84,auVar70);
                    auVar95 = pmulld(auVar94,auVar70);
                    auVar91 = pmovsxdq(auVar70,auVar99);
                    auVar99 = pmovsxdq(auVar99,auVar95);
                    auVar61._8_4_ = (int)pvVar30;
                    auVar61._0_8_ = pvVar30;
                    auVar61._12_4_ = (int)((uint64_t)pvVar30 >> 0x20);
                    auVar71._0_8_ = (void *)(auVar91._0_8_ * 4 + (int64_t)pvVar30);
                    auVar71._8_8_ = auVar91._8_8_ * 4 + auVar61._8_8_;
                    auVar85._0_8_ = (void *)(auVar99._0_8_ * 4 + (int64_t)pvVar30);
                    auVar85._8_8_ = auVar99._8_8_ * 4 + auVar61._8_8_;
                    *(uint8_t (*) [16])(local_1030 + lVar31 * 8 + -8) = auVar71;
                    *(uint8_t (*) [16])(auStack_1028 + lVar31) = auVar85;
                  }
                  pfVar48 = pfVar27;
                  if (pfVar27 != pfVar23) goto LAB_00bc97d6;
                }
                param_3 = pfVar23;
                if (0 < (int)uVar40) {
                  if (uVar54 == 0) {
                    pfVar48 = local_838[0];
                    if (2 < uVar40 - 1) {
                      iVar56 = -(uVar40 & 0xfffffffc);
                      do {
                        *pfVar48 = *pfVar48 * (float)local_10b8._0_4_;
                        pfVar48[1] = pfVar48[1] * (float)local_10b8._0_4_;
                        pfVar48[2] = pfVar48[2] * (float)local_10b8._0_4_;
                        pfVar48[3] = pfVar48[3] * (float)local_10b8._0_4_;
                        pfVar48 = pfVar48 + 4;
                        iVar56 = iVar56 + 4;
                      } while (iVar56 != 0);
                    }
                    if ((uVar37 & 3) != 0) {
                      lVar31 = 0;
                      do {
                        pfVar48[lVar31] = pfVar48[lVar31] * (float)local_10b8._0_4_;
                        lVar31 = lVar31 + 1;
                      } while ((uVar40 & 3) != (uint)lVar31);
                    }
                  }
                  else {
                    uVar51 = 0;
                    pfVar48 = local_838[0];
                    do {
                      fVar57 = *pfVar48;
                      pfVar38 = (float *)0x0;
                      do {
                        pfVar47 = *(float **)(local_1030 + (int64_t)pfVar38 * 8 + -8);
                        uVar44 = uVar54;
                        if ((uVar55 & 3) != 0) {
                          uVar44 = 0;
                          do {
                            fVar57 = fVar57 + *pfVar47;
                            pfVar47 = pfVar47 + 1;
                            *pfVar48 = fVar57;
                            uVar44 = uVar44 + 1;
                          } while ((uVar54 & 3) != uVar44);
                          uVar44 = uVar54 - uVar44;
                        }
                        if (2 < uVar21) {
                          do {
                            fVar63 = *pfVar47;
                            *pfVar48 = fVar57 + fVar63;
                            fVar57 = fVar57 + fVar63 + pfVar47[1];
                            *pfVar48 = fVar57;
                            fVar57 = fVar57 + pfVar47[2];
                            *pfVar48 = fVar57;
                            fVar57 = fVar57 + pfVar47[3];
                            pfVar47 = pfVar47 + 4;
                            *pfVar48 = fVar57;
                            uVar44 = uVar44 - 4;
                          } while (uVar44 != 0);
                        }
                        *(float **)(local_1030 + (int64_t)pfVar38 * 8 + -8) = pfVar47;
                        pfVar38 = (float *)((int64_t)pfVar38 + 1);
                      } while (pfVar38 != pfVar23);
                      *pfVar48 = fVar57 * (float)local_10b8._0_4_;
                      pfVar48 = pfVar48 + 1;
                      uVar51 = uVar51 + 1;
                    } while (uVar51 != uVar40);
                  }
                }
              }
            }
            else {
              _memcpy(pvVar30,(void *)(int64_t)(int)(uVar40 * 4),(size_t)param_3);
            }
          }
          else {
            if (0 < (int)local_103c) {
              if (6 < uVar33) {
                uVar39 = 0;
                do {
                  ___bzero();
                  ___bzero();
                  ___bzero();
                  ___bzero();
                  ___bzero();
                  ___bzero();
                  ___bzero();
                  ___bzero();
                  uVar39 = uVar39 + 8;
                } while (uVar25 != uVar39);
              }
              if (uVar34 != 0) {
                uVar39 = 0;
                do {
                  ___bzero();
                  uVar39 = uVar39 + 1;
                } while (uVar34 != uVar39);
              }
            }
            if ((0 < (int)param_4) && (0 < (int)uVar40)) {
              if (uVar54 == 0) {
                uVar39 = (uint64_t)(uVar40 - 1) + 1;
                uVar37 = uVar39 & 0xfffffffffffffff8;
                uVar53 = (uVar37 - 8 >> 3) + 1;
                param_3 = (float *)-(uVar53 & 0xfffffffffffffffe);
                pfVar48 = (float *)0x0;
                do {
                  uVar51 = 0;
                  pfVar38 = local_838[(int64_t)pfVar48];
                  if (uVar40 - 1 < 7) {
LAB_00bc93d0:
                    lVar31 = 0;
                    do {
                      pfVar38[lVar31] = pfVar38[lVar31] * (float)local_10b8._0_4_;
                      lVar31 = lVar31 + 1;
                    } while (uVar40 - uVar51 != (int)lVar31);
                  }
                  else {
                    if (uVar37 - 8 == 0) {
                      lVar31 = 0;
LAB_00bc93a9:
                      pfVar47 = pfVar38 + lVar31;
                      pfVar43 = pfVar38 + lVar31 + 4;
                      auVar60._0_4_ = *pfVar47 * (float)local_10b8._0_4_;
                      auVar60._4_4_ = pfVar47[1] * (float)local_10b8._0_4_;
                      auVar60._8_4_ = pfVar47[2] * (float)local_10b8._0_4_;
                      auVar60._12_4_ = pfVar47[3] * (float)local_10b8._0_4_;
                      auVar68._0_4_ = *pfVar43 * (float)local_10b8._0_4_;
                      auVar68._4_4_ = pfVar43[1] * (float)local_10b8._0_4_;
                      auVar68._8_4_ = pfVar43[2] * (float)local_10b8._0_4_;
                      auVar68._12_4_ = pfVar43[3] * (float)local_10b8._0_4_;
                      *(uint8_t (*) [16])(pfVar38 + lVar31) = auVar60;
                      *(uint8_t (*) [16])(pfVar38 + lVar31 + 4) = auVar68;
                    }
                    else {
                      lVar31 = 0;
                      pfVar47 = param_3;
                      do {
                        pfVar43 = pfVar38 + lVar31;
                        pfVar36 = pfVar38 + lVar31 + 4;
                        pfVar2 = pfVar38 + lVar31 + 8;
                        fVar57 = pfVar2[1];
                        fVar63 = pfVar2[2];
                        fVar8 = pfVar2[3];
                        pfVar3 = pfVar38 + lVar31 + 0xc;
                        fVar9 = pfVar3[1];
                        fVar10 = pfVar3[2];
                        fVar11 = pfVar3[3];
                        auVar59._0_4_ = *pfVar43 * (float)local_10b8._0_4_;
                        auVar59._4_4_ = pfVar43[1] * (float)local_10b8._0_4_;
                        auVar59._8_4_ = pfVar43[2] * (float)local_10b8._0_4_;
                        auVar59._12_4_ = pfVar43[3] * (float)local_10b8._0_4_;
                        auVar67._0_4_ = *pfVar36 * (float)local_10b8._0_4_;
                        auVar67._4_4_ = pfVar36[1] * (float)local_10b8._0_4_;
                        auVar67._8_4_ = pfVar36[2] * (float)local_10b8._0_4_;
                        auVar67._12_4_ = pfVar36[3] * (float)local_10b8._0_4_;
                        *(uint8_t (*) [16])(pfVar38 + lVar31) = auVar59;
                        *(uint8_t (*) [16])(pfVar38 + lVar31 + 4) = auVar67;
                        auVar81._0_4_ = *pfVar2 * (float)local_10b8._0_4_;
                        auVar81._4_4_ = fVar57 * (float)local_10b8._0_4_;
                        auVar81._8_4_ = fVar63 * (float)local_10b8._0_4_;
                        auVar81._12_4_ = fVar8 * (float)local_10b8._0_4_;
                        auVar88._0_4_ = *pfVar3 * (float)local_10b8._0_4_;
                        auVar88._4_4_ = fVar9 * (float)local_10b8._0_4_;
                        auVar88._8_4_ = fVar10 * (float)local_10b8._0_4_;
                        auVar88._12_4_ = fVar11 * (float)local_10b8._0_4_;
                        *(uint8_t (*) [16])(pfVar38 + lVar31 + 8) = auVar81;
                        *(uint8_t (*) [16])(pfVar38 + lVar31 + 0xc) = auVar88;
                        lVar31 = lVar31 + 0x10;
                        pfVar47 = (float *)((int64_t)pfVar47 + 2);
                      } while (pfVar47 != (float *)0x0);
                      if ((uVar53 & 1) != 0) goto LAB_00bc93a9;
                    }
                    if (uVar39 != uVar37) {
                      pfVar38 = pfVar38 + uVar37;
                      uVar51 = (uint)uVar39 & 0xfffffff8;
                      goto LAB_00bc93d0;
                    }
                  }
                  pfVar48 = (float *)((int64_t)pfVar48 + 1);
                } while (pfVar48 != pfVar23);
              }
              else {
                iVar56 = *(int *)(this_ptr + 0x20);
                pfVar48 = (float *)0x0;
                do {
                  pfVar47 = local_838[(int64_t)pfVar48];
                  pfVar38 = (float *)((int64_t)pvVar30 +
                                     (int64_t)(int)(sVar49 + (int)pfVar48) * (int64_t)iVar56 * 4);
                  uVar51 = 0;
                  do {
                    fVar57 = *pfVar47;
                    uVar44 = uVar54;
                    if ((uVar55 & 3) != 0) {
                      uVar44 = 0;
                      do {
                        fVar57 = fVar57 + *pfVar38;
                        pfVar38 = pfVar38 + 1;
                        *pfVar47 = fVar57;
                        uVar44 = uVar44 + 1;
                      } while ((uVar54 & 3) != uVar44);
                      uVar44 = uVar54 - uVar44;
                    }
                    if (2 < uVar21) {
                      do {
                        fVar63 = *pfVar38;
                        *pfVar47 = fVar57 + fVar63;
                        fVar57 = fVar57 + fVar63 + pfVar38[1];
                        *pfVar47 = fVar57;
                        fVar57 = fVar57 + pfVar38[2];
                        *pfVar47 = fVar57;
                        fVar57 = fVar57 + pfVar38[3];
                        pfVar38 = pfVar38 + 4;
                        *pfVar47 = fVar57;
                        uVar44 = uVar44 - 4;
                      } while (uVar44 != 0);
                    }
                    *pfVar47 = fVar57 * (float)local_10b8._0_4_;
                    pfVar47 = pfVar47 + 1;
                    uVar51 = uVar51 + 1;
                  } while (uVar51 != uVar40);
                  pfVar48 = (float *)((int64_t)pfVar48 + 1);
                  param_3 = (float *)(int64_t)iVar56;
                } while (pfVar48 != pfVar23);
              }
            }
          }
        }
        else if (0 < (int)uVar40) {
          param_3 = local_838[0];
          if (uVar54 == 0) {
            uVar39 = 0;
            pfVar48 = local_838[1];
            if ((6 < uVar40 - 1) &&
               ((uVar53 = (uint64_t)(uVar40 - 1) + 1, local_838[1] + uVar53 <= local_838[0] ||
                (local_838[0] + uVar53 <= local_838[1])))) {
              uVar39 = uVar53 & 0xfffffffffffffff8;
              uVar46 = (uVar39 - 8 >> 3) + 1;
              uVar26 = (uint64_t)((uint)uVar46 & 3);
              uStack_11e0 = auVar80._8_8_;
              if (uVar39 - 8 < 0x18) {
                lVar31 = 0;
              }
              else {
                lVar78 = -(uVar46 & 0xfffffffffffffffc);
                lVar31 = 0;
                do {
                  *(void*)(local_838[0] + lVar31) = auVar80._0_8_;
                  *(void*)(local_838[0] + lVar31 + 2) = uStack_11e0;
                  *(void*)(local_838[0] + lVar31 + 4) = auVar80._0_8_;
                  *(void*)(local_838[0] + lVar31 + 4 + 2) = uStack_11e0;
                  *(void*)(local_838[1] + lVar31) = auVar80._0_8_;
                  *(void*)(local_838[1] + lVar31 + 2) = uStack_11e0;
                  *(void*)(local_838[1] + lVar31 + 4) = auVar80._0_8_;
                  *(void*)(local_838[1] + lVar31 + 4 + 2) = uStack_11e0;
                  *(void*)(local_838[0] + lVar31 + 8) = auVar80._0_8_;
                  *(void*)(local_838[0] + lVar31 + 8 + 2) = uStack_11e0;
                  *(void*)(local_838[0] + lVar31 + 0xc) = auVar80._0_8_;
                  *(void*)(local_838[0] + lVar31 + 0xc + 2) = uStack_11e0;
                  *(void*)(local_838[1] + lVar31 + 8) = auVar80._0_8_;
                  *(void*)(local_838[1] + lVar31 + 8 + 2) = uStack_11e0;
                  *(void*)(local_838[1] + lVar31 + 0xc) = auVar80._0_8_;
                  *(void*)(local_838[1] + lVar31 + 0xc + 2) = uStack_11e0;
                  *(void*)(local_838[0] + lVar31 + 0x10) = auVar80._0_8_;
                  *(void*)(local_838[0] + lVar31 + 0x10 + 2) = uStack_11e0;
                  *(void*)(local_838[0] + lVar31 + 0x14) = auVar80._0_8_;
                  *(void*)(local_838[0] + lVar31 + 0x14 + 2) = uStack_11e0;
                  *(void*)(local_838[1] + lVar31 + 0x10) = auVar80._0_8_;
                  *(void*)(local_838[1] + lVar31 + 0x10 + 2) = uStack_11e0;
                  *(void*)(local_838[1] + lVar31 + 0x14) = auVar80._0_8_;
                  *(void*)(local_838[1] + lVar31 + 0x14 + 2) = uStack_11e0;
                  *(void*)(local_838[0] + lVar31 + 0x18) = auVar80._0_8_;
                  *(void*)(local_838[0] + lVar31 + 0x18 + 2) = uStack_11e0;
                  *(void*)(local_838[0] + lVar31 + 0x1c) = auVar80._0_8_;
                  *(void*)(local_838[0] + lVar31 + 0x1c + 2) = uStack_11e0;
                  *(void*)(local_838[1] + lVar31 + 0x18) = auVar80._0_8_;
                  *(void*)(local_838[1] + lVar31 + 0x18 + 2) = uStack_11e0;
                  *(void*)(local_838[1] + lVar31 + 0x1c) = auVar80._0_8_;
                  *(void*)(local_838[1] + lVar31 + 0x1c + 2) = uStack_11e0;
                  lVar31 = lVar31 + 0x20;
                  lVar78 = lVar78 + 4;
                } while (lVar78 != 0);
              }
              if (uVar26 != 0) {
                lVar78 = 0;
                do {
                  puVar4 = (void*)((int64_t)local_838[0] + lVar78 + lVar31 * 4);
                  *puVar4 = auVar80._0_8_;
                  puVar4[1] = uStack_11e0;
                  puVar4 = (void*)((int64_t)local_838[0] + lVar78 + lVar31 * 4 + 0x10);
                  *puVar4 = auVar80._0_8_;
                  puVar4[1] = uStack_11e0;
                  puVar4 = (void*)((int64_t)local_838[1] + lVar78 + lVar31 * 4);
                  *puVar4 = auVar80._0_8_;
                  puVar4[1] = uStack_11e0;
                  puVar4 = (void*)((int64_t)local_838[1] + lVar78 + lVar31 * 4 + 0x10);
                  *puVar4 = auVar80._0_8_;
                  puVar4[1] = uStack_11e0;
                  lVar78 = lVar78 + 0x20;
                } while (uVar26 << 5 != lVar78);
              }
              if (uVar53 == uVar39) goto LAB_00bc99d0;
              pfVar48 = local_838[1] + uVar39;
              param_3 = local_838[0] + uVar39;
            }
            uVar44 = (uint)uVar39;
            uVar51 = ~uVar44;
            if ((uVar37 & 7) != 0) {
              iVar56 = 0;
              do {
                *param_3 = fVar79;
                param_3 = param_3 + 1;
                *pfVar48 = fVar79;
                pfVar48 = pfVar48 + 1;
                iVar56 = iVar56 + -1;
              } while (-(uVar40 & 7) != iVar56);
              uVar44 = uVar44 - iVar56;
            }
            if (6 < uVar51 + uVar40) {
              lVar31 = 0;
              do {
                param_3[lVar31] = fVar79;
                pfVar48[lVar31] = fVar79;
                param_3[lVar31 + 1] = fVar79;
                pfVar48[lVar31 + 1] = fVar79;
                param_3[lVar31 + 2] = fVar79;
                pfVar48[lVar31 + 2] = fVar79;
                param_3[lVar31 + 3] = fVar79;
                pfVar48[lVar31 + 3] = fVar79;
                param_3[lVar31 + 4] = fVar79;
                pfVar48[lVar31 + 4] = fVar79;
                param_3[lVar31 + 5] = fVar79;
                pfVar48[lVar31 + 5] = fVar79;
                param_3[lVar31 + 6] = fVar79;
                pfVar48[lVar31 + 6] = fVar79;
                param_3[lVar31 + 7] = fVar79;
                pfVar48[lVar31 + 7] = fVar79;
                lVar31 = lVar31 + 8;
              } while (uVar40 - uVar44 != (int)lVar31);
            }
          }
          else {
            pfVar48 = (float *)((int64_t)pvVar30 +
                               (int64_t)(int)(*(int *)(this_ptr + 0x20) * (sVar49 + 1)) * 4);
            pfVar38 = (float *)((int64_t)pvVar30 +
                               (int64_t)(int)(*(int *)(this_ptr + 0x20) * sVar49) * 4);
            uVar51 = 0;
            pfVar47 = local_838[1];
            do {
              fVar57 = 0.0;
              fVar63 = 0.0;
              pfVar36 = pfVar48;
              pfVar43 = pfVar38;
              uVar44 = uVar54;
              if ((uVar55 & 1) != 0) {
                pfVar43 = pfVar38 + 1;
                pfVar36 = pfVar48 + 1;
                fVar63 = *pfVar38 + *pfVar48 + 0.0;
                fVar57 = (*pfVar38 - *pfVar48) + 0.0;
                auVar58 = ZEXT416((uint)fVar57);
                uVar44 = uVar21;
              }
              if (uVar21 != 0) {
                lVar31 = 0;
                do {
                  fVar63 = pfVar43[lVar31 + 1] + pfVar36[lVar31 + 1] +
                           pfVar43[lVar31] + pfVar36[lVar31] + fVar63;
                  fVar57 = (pfVar43[lVar31 + 1] - pfVar36[lVar31 + 1]) +
                           (pfVar43[lVar31] - pfVar36[lVar31]) + fVar57;
                  auVar58 = ZEXT416((uint)fVar57);
                  lVar31 = lVar31 + 2;
                } while (uVar44 != (uint)lVar31);
              }
              pfVar38 = pfVar38 + (uint64_t)uVar21 + 1;
              pfVar48 = pfVar48 + (uint64_t)uVar21 + 1;
              *param_3 = fVar63 * (float)local_10b8._0_4_;
              param_3 = param_3 + 1;
              auVar58._0_4_ = auVar58._0_4_ * (float)local_10b8._0_4_;
              *pfVar47 = auVar58._0_4_;
              pfVar47 = pfVar47 + 1;
              uVar51 = uVar51 + 1;
            } while (uVar51 != uVar40);
          }
        }
LAB_00bc99d0:
        local_1038 = FUN_00e31390();
        do {
          cVar18 = FUN_00e314a0(3,local_1038 + -0x10);
        } while (cVar18 == '\0');
      }
      else {
        local_1038 = FUN_00e31390();
        do {
          cVar18 = FUN_00e314a0(3,local_1038 + -0x10);
        } while (cVar18 == '\0');
        if (0 < (int)local_103c) {
          if (6 < uVar33) {
            uVar39 = 0;
            do {
              ___bzero();
              ___bzero();
              ___bzero();
              ___bzero();
              ___bzero();
              ___bzero();
              ___bzero();
              ___bzero();
              uVar39 = uVar39 + 8;
            } while (uVar25 != uVar39);
          }
          if ((local_103c & 7) != 0) {
            uVar39 = 0;
            do {
              ___bzero();
              uVar39 = uVar39 + 1;
            } while (uVar34 != uVar39);
          }
        }
        bVar19 = true;
        FUN_00e31650();
      }
      uVar39 = (uint64_t)local_103c;
      if (0 < (int)local_103c) {
        if (local_103c < 4) {
          uVar39 = 0;
        }
        else {
          if (uVar24 - 4 < 0xc) {
            lVar31 = 0;
          }
          else {
            lVar31 = 0;
            lVar78 = -(uVar35 & 0xfffffffffffffffc);
            do {
              auVar73._0_8_ = (int64_t)(int)uVar40;
              auVar73._8_4_ = uVar40;
              auVar73._12_4_ = (int)uVar40 >> 0x1f;
              lVar65 = auVar73._0_8_ * 4;
              lVar77 = auVar73._8_8_ * 4;
              lVar64 = local_828[lVar31 + -1];
              lVar42 = local_828[lVar31 + 1];
              local_838[lVar31] = local_838[lVar31] + auVar73._0_8_;
              local_828[lVar31 + -1] = lVar64 + lVar77;
              local_828[lVar31] = local_828[lVar31] + lVar65;
              local_828[lVar31 + 1] = lVar42 + lVar77;
              local_828[lVar31 + 2] = local_828[lVar31 + 2] + lVar65;
              local_828[lVar31 + 3] = local_828[lVar31 + 3] + lVar77;
              local_828[lVar31 + 4] = local_828[lVar31 + 4] + lVar65;
              local_828[lVar31 + 5] = local_828[lVar31 + 5] + lVar77;
              auVar96._0_8_ = alStack_7e8[lVar31] + lVar65;
              auVar96._8_8_ = alStack_7e8[lVar31 + 1] + lVar77;
              local_828[lVar31 + 6] = local_828[lVar31 + 6] + lVar65;
              local_828[lVar31 + 7] = local_828[lVar31 + 7] + lVar77;
              *(uint8_t (*) [16])(alStack_7e8 + lVar31) = auVar96;
              auVar86._0_8_ = alStack_7d8[lVar31] + lVar65;
              auVar86._8_8_ = alStack_7d8[lVar31 + 1] + lVar77;
              auVar74._0_8_ = lVar65 + alStack_7c8[lVar31];
              auVar74._8_8_ = lVar77 + alStack_7c8[lVar31 + 1];
              *(uint8_t (*) [16])(alStack_7d8 + lVar31) = auVar86;
              *(uint8_t (*) [16])(alStack_7c8 + lVar31) = auVar74;
              lVar31 = lVar31 + 0x10;
              lVar78 = lVar78 + 4;
            } while (lVar78 != 0);
          }
          if (uVar45 != 0) {
            lVar31 = lVar31 * 8;
            uVar39 = 0;
            do {
              auVar75._0_8_ = (int64_t)(int)uVar40;
              auVar75._8_4_ = uVar40;
              auVar75._12_4_ = (int)uVar40 >> 0x1f;
              lVar78 = auVar75._8_8_ * 4;
              plVar1 = (int64_t *)((int64_t)local_838 + uVar39 + lVar31);
              auVar87._0_8_ = *plVar1 + auVar75._0_8_ * 4;
              auVar87._8_8_ = plVar1[1] + lVar78;
              plVar1 = (int64_t *)((int64_t)local_828 + uVar39 + lVar31 + -0x828 + 0x828);
              auVar76._0_8_ = auVar75._0_8_ * 4 + *plVar1;
              auVar76._8_8_ = lVar78 + plVar1[1];
              *(uint8_t (*) [16])((int64_t)local_838 + uVar39 + lVar31) = auVar87;
              *(uint8_t (*) [16])((int64_t)local_828 + uVar39 + lVar31 + -0x828 + 0x828) =
                   auVar76;
              uVar39 = uVar39 + 0x20;
            } while (uVar29 != uVar39);
          }
          uVar39 = uVar24;
          if (uVar24 == uVar52) goto LAB_00bc9bb9;
        }
        do {
          local_838[uVar39] = local_838[uVar39] + (int)uVar40;
          uVar39 = uVar39 + 1;
        } while (uVar52 != uVar39);
      }
LAB_00bc9bb9:
      local_res8 = (uint64_t)uVar41;
      if (local_res10 - uVar41 == 0 || (int)local_res10 < (int)uVar41) goto LAB_00bc9bee;
      lVar22 = lVar22 + 1;
      uVar40 = *(uint *)(this_ptr + 0x20);
      iVar56 = 0;
      local_res10 = local_res10 - uVar41;
    } while( true );
  }
  bVar19 = false;
LAB_00bc9bee:
  if (unaff_SIL == '\0') {
    uVar55 = CONCAT71((int7)(local_res8 >> 8),!bVar19);
  }
  else {
    uVar20 = FUN_00beaa60();
    uVar55 = (uint64_t)uVar20 ^ 1;
  }
  if ((bVar17) && (local_1070 != 0)) {
    FUN_00d50b20();
  }
LAB_00bc826c:
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return uVar55 & 0xffffffff;
}



// ============================================================
// 00bc9d30
// ============================================================
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



// ============================================================
// 00bbdf40
// ============================================================
// Function: FUN_00bbdf40
// Address: 00bbdf40
// Size: 2869 bytes
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


void FUN_00bbdf40(uint param_1,int64_t param_2)

{
  void*puVar1;
  void*puVar2;
  void*puVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t lVar17;
  void*puVar18;
  int64_t arg1;
  uint64_t uVar19;
  int64_t this_ptr;
  uint64_t uVar20;
  void*puVar21;
  void*puVar22;
  uint uVar23;
  void*puVar24;
  uint64_t uVar25;
  int64_t lVar26;
  uint64_t uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  int64_t local_88;
  char local_80;
  
  uVar13 = FUN_00b33120();
  uVar27 = (uint64_t)uVar13;
  dVar31 = (double)FUN_00b335d0();
  if (((arg1 != param_2) && (0 < (int)uVar13)) && (param_1 != 0)) {
    uVar13 = param_1 - 1;
    if (uVar13 < 7) {
      uVar16 = 0;
      do {
        puVar24 = *(void**)(arg1 + uVar16 * 8);
        puVar21 = *(void**)(param_2 + uVar16 * 8);
        *puVar21 = *puVar24;
        if (((((param_1 != 1) && (puVar21[1] = puVar24[1], param_1 != 2)) &&
             (puVar21[2] = puVar24[2], param_1 != 3)) &&
            ((puVar21[3] = puVar24[3], param_1 != 4 && (puVar21[4] = puVar24[4], param_1 != 5)))) &&
           (puVar21[5] = puVar24[5], param_1 != 6)) {
          puVar21[6] = puVar24[6];
        }
        uVar16 = uVar16 + 1;
      } while (uVar27 != uVar16);
    }
    else {
      uVar16 = (uint64_t)uVar13 + 1;
      uVar25 = uVar16 & 0xfffffffffffffff8;
      if (uVar16 == uVar25) {
        uVar15 = (uVar25 - 8 >> 3) + 1;
        uVar20 = (uint64_t)((uint)uVar15 & 3);
        uVar19 = 0;
        do {
          puVar24 = *(void**)(arg1 + uVar19 * 8);
          puVar21 = *(void**)(param_2 + uVar19 * 8);
          if ((puVar21 < puVar24 + uVar16) && (puVar24 < puVar21 + uVar16)) {
            uVar14 = param_1;
            if ((param_1 & 7) != 0) {
              uVar14 = 0;
              do {
                uVar4 = *puVar24;
                puVar24 = puVar24 + 1;
                *puVar21 = uVar4;
                puVar21 = puVar21 + 1;
                uVar14 = uVar14 + 1;
              } while ((param_1 & 7) != uVar14);
              uVar14 = param_1 - uVar14;
            }
            if (6 < uVar13) {
              lVar17 = 0;
              do {
                puVar21[lVar17] = puVar24[lVar17];
                puVar21[lVar17 + 1] = puVar24[lVar17 + 1];
                puVar21[lVar17 + 2] = puVar24[lVar17 + 2];
                puVar21[lVar17 + 3] = puVar24[lVar17 + 3];
                puVar21[lVar17 + 4] = puVar24[lVar17 + 4];
                puVar21[lVar17 + 5] = puVar24[lVar17 + 5];
                puVar21[lVar17 + 6] = puVar24[lVar17 + 6];
                puVar21[lVar17 + 7] = puVar24[lVar17 + 7];
                lVar17 = lVar17 + 8;
              } while (uVar14 != (uint)lVar17);
            }
          }
          else {
            if (uVar25 - 8 < 0x18) {
              lVar26 = 0;
            }
            else {
              lVar26 = 0;
              lVar17 = -(uVar15 & 0xfffffffffffffffc);
              do {
                uVar8 = *(void*)((int64_t)(puVar24 + lVar26) + 8);
                uVar9 = *(void*)(puVar24 + lVar26 + 4);
                uVar10 = *(void*)((int64_t)(puVar24 + lVar26 + 4) + 8);
                *(void*)(puVar21 + lVar26) = *(void*)(puVar24 + lVar26);
                *(void*)((int64_t)(puVar21 + lVar26) + 8) = uVar8;
                *(void*)(puVar21 + lVar26 + 4) = uVar9;
                *(void*)((int64_t)(puVar21 + lVar26 + 4) + 8) = uVar10;
                uVar8 = *(void*)((int64_t)(puVar24 + lVar26 + 8) + 8);
                uVar9 = *(void*)(puVar24 + lVar26 + 0xc);
                uVar10 = *(void*)((int64_t)(puVar24 + lVar26 + 0xc) + 8);
                *(void*)(puVar21 + lVar26 + 8) = *(void*)(puVar24 + lVar26 + 8);
                *(void*)((int64_t)(puVar21 + lVar26 + 8) + 8) = uVar8;
                *(void*)(puVar21 + lVar26 + 0xc) = uVar9;
                *(void*)((int64_t)(puVar21 + lVar26 + 0xc) + 8) = uVar10;
                uVar8 = *(void*)((int64_t)(puVar24 + lVar26 + 0x10) + 8);
                uVar9 = *(void*)(puVar24 + lVar26 + 0x14);
                uVar10 = *(void*)((int64_t)(puVar24 + lVar26 + 0x14) + 8);
                *(void*)(puVar21 + lVar26 + 0x10) = *(void*)(puVar24 + lVar26 + 0x10);
                *(void*)((int64_t)(puVar21 + lVar26 + 0x10) + 8) = uVar8;
                *(void*)(puVar21 + lVar26 + 0x14) = uVar9;
                *(void*)((int64_t)(puVar21 + lVar26 + 0x14) + 8) = uVar10;
                uVar8 = *(void*)((int64_t)(puVar24 + lVar26 + 0x18) + 8);
                puVar18 = puVar24 + lVar26 + 0x1c;
                uVar4 = *puVar18;
                uVar5 = puVar18[1];
                uVar6 = puVar18[2];
                uVar7 = puVar18[3];
                *(void*)(puVar21 + lVar26 + 0x18) = *(void*)(puVar24 + lVar26 + 0x18);
                *(void*)((int64_t)(puVar21 + lVar26 + 0x18) + 8) = uVar8;
                puVar18 = puVar21 + lVar26 + 0x1c;
                *puVar18 = uVar4;
                puVar18[1] = uVar5;
                puVar18[2] = uVar6;
                puVar18[3] = uVar7;
                lVar26 = lVar26 + 0x20;
                lVar17 = lVar17 + 4;
              } while (lVar17 != 0);
            }
            if (uVar20 != 0) {
              lVar17 = 0;
              do {
                puVar2 = (void*)((int64_t)puVar24 + lVar17 + lVar26 * 4);
                uVar8 = puVar2[1];
                puVar18 = (void*)((int64_t)puVar24 + lVar17 + lVar26 * 4 + 0x10);
                uVar4 = *puVar18;
                uVar5 = puVar18[1];
                uVar6 = puVar18[2];
                uVar7 = puVar18[3];
                puVar3 = (void*)((int64_t)puVar21 + lVar17 + lVar26 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar8;
                puVar18 = (void*)((int64_t)puVar21 + lVar17 + lVar26 * 4 + 0x10);
                *puVar18 = uVar4;
                puVar18[1] = uVar5;
                puVar18[2] = uVar6;
                puVar18[3] = uVar7;
                lVar17 = lVar17 + 0x20;
              } while (uVar20 << 5 != lVar17);
            }
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar27);
      }
      else {
        uVar13 = param_1 - (int)uVar25;
        uVar15 = (uVar25 - 8 >> 3) + 1;
        uVar20 = (uint64_t)((uint)uVar15 & 3);
        uVar19 = 0;
        do {
          puVar24 = *(void**)(arg1 + uVar19 * 8);
          puVar21 = *(void**)(param_2 + uVar19 * 8);
          if ((puVar24 + uVar16 <= puVar21) ||
             (uVar14 = param_1, puVar18 = puVar24, puVar22 = puVar21, puVar21 + uVar16 <= puVar24))
          {
            if (uVar25 - 8 < 0x18) {
              lVar26 = 0;
            }
            else {
              lVar26 = 0;
              lVar17 = -(uVar15 & 0xfffffffffffffffc);
              do {
                uVar8 = *(void*)((int64_t)(puVar24 + lVar26) + 8);
                uVar9 = *(void*)(puVar24 + lVar26 + 4);
                uVar10 = *(void*)((int64_t)(puVar24 + lVar26 + 4) + 8);
                *(void*)(puVar21 + lVar26) = *(void*)(puVar24 + lVar26);
                *(void*)((int64_t)(puVar21 + lVar26) + 8) = uVar8;
                *(void*)(puVar21 + lVar26 + 4) = uVar9;
                *(void*)((int64_t)(puVar21 + lVar26 + 4) + 8) = uVar10;
                uVar8 = *(void*)((int64_t)(puVar24 + lVar26 + 8) + 8);
                uVar9 = *(void*)(puVar24 + lVar26 + 0xc);
                uVar10 = *(void*)((int64_t)(puVar24 + lVar26 + 0xc) + 8);
                *(void*)(puVar21 + lVar26 + 8) = *(void*)(puVar24 + lVar26 + 8);
                *(void*)((int64_t)(puVar21 + lVar26 + 8) + 8) = uVar8;
                *(void*)(puVar21 + lVar26 + 0xc) = uVar9;
                *(void*)((int64_t)(puVar21 + lVar26 + 0xc) + 8) = uVar10;
                uVar8 = *(void*)((int64_t)(puVar24 + lVar26 + 0x10) + 8);
                uVar9 = *(void*)(puVar24 + lVar26 + 0x14);
                uVar10 = *(void*)((int64_t)(puVar24 + lVar26 + 0x14) + 8);
                *(void*)(puVar21 + lVar26 + 0x10) = *(void*)(puVar24 + lVar26 + 0x10);
                *(void*)((int64_t)(puVar21 + lVar26 + 0x10) + 8) = uVar8;
                *(void*)(puVar21 + lVar26 + 0x14) = uVar9;
                *(void*)((int64_t)(puVar21 + lVar26 + 0x14) + 8) = uVar10;
                uVar8 = *(void*)((int64_t)(puVar24 + lVar26 + 0x18) + 8);
                puVar18 = puVar24 + lVar26 + 0x1c;
                uVar4 = *puVar18;
                uVar5 = puVar18[1];
                uVar6 = puVar18[2];
                uVar7 = puVar18[3];
                *(void*)(puVar21 + lVar26 + 0x18) = *(void*)(puVar24 + lVar26 + 0x18);
                *(void*)((int64_t)(puVar21 + lVar26 + 0x18) + 8) = uVar8;
                puVar18 = puVar21 + lVar26 + 0x1c;
                *puVar18 = uVar4;
                puVar18[1] = uVar5;
                puVar18[2] = uVar6;
                puVar18[3] = uVar7;
                lVar26 = lVar26 + 0x20;
                lVar17 = lVar17 + 4;
              } while (lVar17 != 0);
            }
            uVar14 = uVar13;
            puVar18 = puVar24 + uVar25;
            puVar22 = puVar21 + uVar25;
            if (uVar20 != 0) {
              lVar17 = 0;
              do {
                puVar2 = (void*)((int64_t)puVar24 + lVar17 + lVar26 * 4);
                uVar8 = puVar2[1];
                puVar1 = (void*)((int64_t)puVar24 + lVar17 + lVar26 * 4 + 0x10);
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar6 = puVar1[2];
                uVar7 = puVar1[3];
                puVar3 = (void*)((int64_t)puVar21 + lVar17 + lVar26 * 4);
                *puVar3 = *puVar2;
                puVar3[1] = uVar8;
                puVar1 = (void*)((int64_t)puVar21 + lVar17 + lVar26 * 4 + 0x10);
                *puVar1 = uVar4;
                puVar1[1] = uVar5;
                puVar1[2] = uVar6;
                puVar1[3] = uVar7;
                lVar17 = lVar17 + 0x20;
              } while (uVar20 << 5 != lVar17);
            }
          }
          uVar11 = uVar14 - 1;
          if ((uVar14 & 7) != 0) {
            uVar23 = 0;
            do {
              uVar4 = *puVar18;
              puVar18 = puVar18 + 1;
              *puVar22 = uVar4;
              puVar22 = puVar22 + 1;
              uVar23 = uVar23 + 1;
            } while ((uVar14 & 7) != uVar23);
            uVar14 = uVar14 - uVar23;
          }
          if (6 < uVar11) {
            lVar17 = 0;
            do {
              puVar22[lVar17] = puVar18[lVar17];
              puVar22[lVar17 + 1] = puVar18[lVar17 + 1];
              puVar22[lVar17 + 2] = puVar18[lVar17 + 2];
              puVar22[lVar17 + 3] = puVar18[lVar17 + 3];
              puVar22[lVar17 + 4] = puVar18[lVar17 + 4];
              puVar22[lVar17 + 5] = puVar18[lVar17 + 5];
              puVar22[lVar17 + 6] = puVar18[lVar17 + 6];
              puVar22[lVar17 + 7] = puVar18[lVar17 + 7];
              lVar17 = lVar17 + 8;
            } while (uVar14 != (uint)lVar17);
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 != uVar27);
      }
    }
  }
  dVar31 = (double)(int)param_1 / dVar31;
  if (*(float *)(this_ptr + 0x90) < *(float *)(this_ptr + 0x94) ||
      *(float *)(this_ptr + 0x90) == *(float *)(this_ptr + 0x94)) {
    fVar35 = *(float *)(this_ptr + 0x9c);
    if ((fVar35 != 0.0) || (NAN(fVar35))) {
      fVar28 = *(float *)(this_ptr + 0x98);
      uVar13 = FUN_00b33120();
      dVar32 = (double)FUN_00b335d0();
      dVar32 = g_0238fee8 / dVar32;
      if (fVar35 <= fVar28) {
        if ((0 < (int)uVar13) && (0 < (int)param_1)) {
          fVar36 = g_02390124 / (float)(int)param_1;
          dVar33 = 0.0;
          uVar27 = 0;
          fVar35 = g_02390124;
          fVar28 = g_023d91e0;
          do {
            lVar17 = *(int64_t *)(param_2 + uVar27 * 8);
            lVar26 = 0;
            fVar29 = fVar35;
            do {
              fVar30 = (float)_sinf(CONCAT44((int)((uint64_t)dVar33 >> 0x20),
                                             ((float)dVar33 + *(float *)(this_ptr + 0x98)) * fVar28
                                            ));
              fVar30 = fVar30 * g_02391090;
              uVar14 = FUN_00e7dff0();
              fVar28 = g_023d91e0;
              fVar35 = g_02390124;
              *(float *)(lVar17 + lVar26 * 4) =
                   ((float)(uVar14 % 1000) / g_023dbb10 + fVar30) * fVar29 * g_0239011c +
                   (g_02390124 - fVar29) * *(float *)(lVar17 + lVar26 * 4);
              dVar33 = dVar33 + dVar32;
              fVar29 = fVar29 - fVar36;
              lVar26 = lVar26 + 1;
            } while (param_1 != (uint)lVar26);
            uVar27 = uVar27 + 1;
          } while (uVar27 != uVar13);
        }
        *(void*)(this_ptr + 0x9c) = 0;
      }
      else if ((0 < (int)uVar13) && (0 < (int)param_1)) {
        dVar33 = 0.0;
        uVar27 = 0;
        fVar35 = g_023d91e0;
        do {
          lVar17 = *(int64_t *)(param_2 + uVar27 * 8);
          lVar26 = 0;
          do {
            fVar28 = (float)_sinf(CONCAT44((int)((uint64_t)dVar33 >> 0x20),
                                           ((float)dVar33 + *(float *)(this_ptr + 0x98)) * fVar35))
            ;
            fVar28 = fVar28 * g_02391090;
            uVar14 = FUN_00e7dff0();
            fVar35 = g_023d91e0;
            *(float *)(lVar17 + lVar26 * 4) =
                 ((float)(uVar14 % 1000) / g_023dbb10 + fVar28) * g_0239011c +
                 *(float *)(lVar17 + lVar26 * 4) * 0.0;
            dVar33 = dVar33 + dVar32;
            lVar26 = lVar26 + 1;
          } while (param_1 != (uint)lVar26);
          uVar27 = uVar27 + 1;
        } while (uVar27 != uVar13);
      }
      goto LAB_00bbe9f8;
    }
  }
  else {
    *(void*)(this_ptr + 0x98) = 0;
    uVar13 = FUN_00b33120();
    dVar32 = (double)FUN_00b335d0();
    if ((0 < (int)uVar13) && (0 < (int)param_1)) {
      dVar32 = g_0238fee8 / dVar32;
      fVar28 = g_02390124 / (float)(int)param_1;
      dVar33 = 0.0;
      uVar27 = 0;
      fVar35 = g_023d91e0;
      do {
        lVar17 = *(int64_t *)(param_2 + uVar27 * 8);
        fVar36 = 0.0;
        lVar26 = 0;
        do {
          fVar29 = (float)_sinf(((float)dVar33 + *(float *)(this_ptr + 0x98)) * fVar35);
          fVar29 = fVar29 * g_02391090;
          uVar14 = FUN_00e7dff0();
          fVar35 = g_023d91e0;
          *(float *)(lVar17 + lVar26 * 4) =
               ((float)(uVar14 % 1000) / g_023dbb10 + fVar29) * fVar36 * g_0239011c +
               (g_02390124 - fVar36) * *(float *)(lVar17 + lVar26 * 4);
          dVar33 = dVar33 + dVar32;
          fVar36 = fVar36 + fVar28;
          lVar26 = lVar26 + 1;
        } while (param_1 != (uint)lVar26);
        uVar27 = uVar27 + 1;
      } while (uVar27 != uVar13);
    }
    if (*(float *)(this_ptr + 0x90) <= *(float *)(this_ptr + 0xb0)) {
      dVar33 = (double)(*(float *)(this_ptr + 0x90) / *(float *)(this_ptr + 0xb0));
      fVar35 = *(float *)(this_ptr + 0xa0);
      fVar28 = *(float *)(this_ptr + 0xa4);
      uVar13 = FUN_00e7dff0();
      dVar34 = (double)uVar13 / g_023934c0 + (double)uVar13 / g_023934c0 + g_023b19a0;
      dVar32 = g_0238fee8 - dVar33;
      fVar36 = *(float *)(this_ptr + 0xa8);
      fVar29 = *(float *)(this_ptr + 0xac);
      uVar13 = FUN_00e7dff0();
      dVar32 = (((double)uVar13 / g_023934c0 + (double)uVar13 / g_023934c0 + g_023b19a0) *
                (double)fVar29 + (double)fVar36) * dVar33 +
               dVar32 * (dVar34 * (double)fVar28 + (double)fVar35);
    }
    else {
      fVar35 = *(float *)(this_ptr + 0xa8);
      fVar28 = *(float *)(this_ptr + 0xac);
      uVar13 = FUN_00e7dff0();
      dVar32 = ((double)uVar13 / g_023934c0 + (double)uVar13 / g_023934c0 + g_023b19a0) *
               (double)fVar28 + (double)fVar35;
    }
    *(float *)(this_ptr + 0x94) = (float)dVar32 + *(float *)(this_ptr + 0x94);
    *(void*)(this_ptr + 0x9c) = 0x3f800000;
LAB_00bbe9f8:
    *(float *)(this_ptr + 0x98) = (float)((double)*(float *)(this_ptr + 0x98) + dVar31);
  }
  if (*(int *)(this_ptr + 0xb4) < 0) {
    FUN_00b31a00();
    cVar12 = FUN_00bc4910();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (cVar12 != '\0') goto LAB_00bbea37;
  }
  else if (*(int *)(this_ptr + 0xb4) != 0) goto LAB_00bbea37;
  *(float *)(this_ptr + 0x94) = (float)((double)*(float *)(this_ptr + 0x94) + dVar31);
LAB_00bbea37:
  *(float *)(this_ptr + 0x90) = (float)(dVar31 + (double)*(float *)(this_ptr + 0x90));
  return;
}



// ============================================================
// 00bc19b0
// ============================================================
// Function: FUN_00bc19b0
// Address: 00bc19b0
// Size: 2342 bytes
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


void FUN_00bc19b0(void)

{
  int64_t lVar1;
  uint uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint *puVar5;
  char cVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  int iVar11;
  uint *puVar12;
  int64_t *arg1;
  uint *puVar13;
  int64_t this_ptr;
  uint uVar14;
  uint uVar15;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  uint64_t local_60;
  uint32_t local_54;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  
  lVar1 = g_02765700;
  if (*arg1 == 0) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_02764880;
  puVar12 = *(uint **)(*arg1 + 0x10);
  uVar15 = *puVar12;
  if (uVar15 == 0) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  plVar9 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  local_50 = plVar9;
  (**(code **)(*plVar9 + 0x18))();
  if (uVar15 != 0) {
    uVar14 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
    puVar12 = puVar12 + 1;
    uVar15 = 1;
    if (1 < uVar14) {
      uVar15 = uVar14;
    }
    uVar14 = 0;
    do {
      FUN_00d93730();
      plVar9 = local_48;
      if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      puVar5 = (uint *)((int64_t)puVar12 + 3);
      puVar13 = puVar12;
      do {
        puVar12 = puVar5;
        puVar13 = (uint *)((int64_t)puVar13 + 1);
        puVar5 = (uint *)((int64_t)puVar12 + 1);
      } while (*(char *)puVar13 != '\0');
      FUN_00d93730();
      plVar3 = local_48;
      if (((local_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (int64_t *)0x0)))) {
        FUN_00d50b20();
      }
      do {
        uVar2 = *puVar12;
        puVar12 = (uint *)((int64_t)puVar12 + 1);
      } while ((char)uVar2 != '\0');
      FUN_00cd2930();
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar15);
  }
  plVar9 = g_02765710;
  if (g_02765710 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_48 = plVar9;
  local_40 = '\0';
  cVar6 = FUN_00c9ff50();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = g_02765718;
  if (cVar6 == '\0') {
    cVar6 = '\0';
  }
  else {
    if (g_02765718 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_48 = plVar3;
    local_40 = '\0';
    cVar6 = FUN_00c9ff50();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar1 = g_02764880;
  if (cVar6 == '\0') {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  plVar9 = g_02765710;
  if (g_02765710 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01de4130();
  uVar7 = FUN_00d8d560();
  *(void*)(this_ptr + 0x18) = uVar7;
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar9 = g_02765718;
  if (g_02765718 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  uVar10 = FUN_01de4130();
  plVar3 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (int64_t *)0x0) && (uVar10 = FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if (plVar9 != (int64_t *)0x0) {
    uVar10 = FUN_00d50b20();
  }
  lVar1 = g_02704060;
  if (plVar3 == (int64_t *)0x0) {
    local_54 = (uint32_t)CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
    local_60 = 0;
    lVar1 = g_02764880;
joined_r0x00bc1f0c:
    g_02764880 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_c8 = '\x01';
    local_d0 = lVar1;
    FUN_00cc78b0();
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (g_02704060 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_54 = (uint32_t)CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
    local_e0 = lVar1;
    local_d8 = '\x01';
    uVar10 = FUN_00d91000(1,&local_e0);
    plVar9 = local_48;
    if (local_48 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
      local_60 = 0;
    }
    else if (local_40 == '\0') {
      uVar10 = FUN_00d50b00();
      local_60 = CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
      local_60 = CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02764880;
    if ((plVar9 == (int64_t *)0x0) || (local_54 = 0, *(int *)((int64_t)plVar9 + 0xc) != 2))
    goto joined_r0x00bc1f0c;
  }
  uVar7 = FUN_00d8d560();
  *(void*)(this_ptr + 0x10) = uVar7;
  uVar7 = FUN_00d8d560();
  *(void*)(this_ptr + 0x14) = uVar7;
  *(void*)(this_ptr + 0xc) = 1;
  local_c0 = g_02765728;
  if (g_02765728 != 0) {
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  FUN_01de4130();
  plVar9 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = g_02765730;
  uVar7 = 0;
  if (plVar9 != (int64_t *)0x0) {
    if (g_02765730 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar1;
    local_a8 = '\x01';
    cVar6 = (**(code **)(*plVar9 + 0x50))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = g_02765738;
    uVar7 = 2;
    if (cVar6 == '\0') {
      if (g_02765738 != 0) {
        FUN_00d50b00();
      }
      local_a0 = lVar1;
      local_98 = '\x01';
      cVar6 = (**(code **)(*plVar9 + 0x50))();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = g_02765740;
      uVar7 = 1;
      if (cVar6 == '\0') {
        if (g_02765740 != 0) {
          FUN_00d50b00();
        }
        local_90 = lVar1;
        local_88 = '\x01';
        cVar6 = (**(code **)(*plVar9 + 0x50))();
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        lVar1 = g_02765748;
        uVar7 = 3;
        if (cVar6 == '\0') {
          if (g_02765748 != 0) {
            FUN_00d50b00();
          }
          local_80 = lVar1;
          local_78 = '\x01';
          cVar6 = (**(code **)(*plVar9 + 0x50))();
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          uVar7 = 0;
          if (cVar6 == '\0') goto LAB_00bc213a;
        }
      }
    }
  }
  *(void*)(this_ptr + 0x20) = uVar7;
LAB_00bc213a:
  lVar1 = g_02765750;
  if (g_02765750 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar1;
  local_68 = '\x01';
  FUN_01de4130();
  plVar4 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (int64_t *)0x0) {
    *(void*)(this_ptr + 0x1c) = 0;
  }
  else {
    uVar7 = 0;
    cVar6 = FUN_00d8ca70();
    if ((int)cVar6 - 0x41U < 8) {
      uVar7 = *(void*)(&g_023d92ac + (int64_t)(int)((int)cVar6 - 0x41U) * 4);
    }
    *(void*)(this_ptr + 0x1c) = uVar7;
    iVar8 = FUN_00d8c7a0();
    if (iVar8 == 2) {
      cVar6 = FUN_00d8ca70();
      iVar8 = *(int *)(this_ptr + 0x1c);
      if (cVar6 == 'b') {
        iVar11 = 0xb;
        if (0 < iVar8) {
          iVar11 = iVar8 + -1;
        }
      }
      else {
        iVar11 = 0;
        if (iVar8 < 0xb) {
          iVar11 = iVar8 + 1;
        }
      }
      *(int *)(this_ptr + 0x1c) = iVar11;
    }
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_60 != '\0' && (char)local_54 == '\0') {
    FUN_00d50b20();
  }
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00bc0020
// ============================================================
// Function: FUN_00bc0020
// Address: 00bc0020
// Size: 1575 bytes
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


void FUN_00bc0020(void)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  double dVar6;
  uint8_t auVar7 [16];
  double dVar8;
  uint uVar9;
  uint uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint64_t arg1;
  int64_t this_ptr;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t lVar16;
  uint64_t uVar17;
  float fVar18;
  float fVar19;
  uint8_t auVar20 [16];
  
  uVar9 = FUN_00b33120();
  dVar6 = (double)(int64_t)arg1 * *(double *)(this_ptr + 0xe8);
  uVar11 = (uint64_t)dVar6;
  uVar11 = ((int64_t)(dVar6 - g_023907c8) & (int64_t)uVar11 >> 0x3f | uVar11) + 2;
  if (*(uint64_t *)(this_ptr + 0xb8) < uVar11) {
    uVar10 = FUN_00b33120();
    (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x400))();
    uVar17 = *(uint64_t *)(this_ptr + 0xb8);
    lVar16 = uVar11 - uVar17;
    if (uVar17 < uVar11) {
      if ((int)uVar10 < 1) {
        uVar13 = uVar17 + 1;
        if (uVar17 + 1 < uVar11) {
          uVar13 = uVar11;
        }
      }
      else {
        lVar4 = *(int64_t *)(this_ptr + 0xb0);
        lVar5 = *(int64_t *)(this_ptr + 200);
        iVar2 = *(int *)(this_ptr + 0xc4);
        lVar12 = 0;
        do {
          uVar13 = uVar17 & (int64_t)iVar2;
          uVar11 = 0;
          if (2 < (uint64_t)uVar10 - 1) {
            do {
              *(void*)(*(int64_t *)(lVar4 + uVar11 * 8) + uVar13 * 4) =
                   *(void*)(*(int64_t *)(lVar5 + uVar11 * 8) + lVar12 * 4);
              *(void*)(*(int64_t *)(lVar4 + 8 + uVar11 * 8) + uVar13 * 4) =
                   *(void*)(*(int64_t *)(lVar5 + 8 + uVar11 * 8) + lVar12 * 4);
              *(void*)(*(int64_t *)(lVar4 + 0x10 + uVar11 * 8) + uVar13 * 4) =
                   *(void*)(*(int64_t *)(lVar5 + 0x10 + uVar11 * 8) + lVar12 * 4);
              *(void*)(*(int64_t *)(lVar4 + 0x18 + uVar11 * 8) + uVar13 * 4) =
                   *(void*)(*(int64_t *)(lVar5 + 0x18 + uVar11 * 8) + lVar12 * 4);
              uVar11 = uVar11 + 4;
            } while ((uVar10 & 0xfffffffc) != uVar11);
          }
          if ((uint64_t)(uVar10 & 3) != 0) {
            uVar14 = 0;
            do {
              *(void*)(*(int64_t *)(lVar4 + uVar11 * 8 + uVar14 * 8) + uVar13 * 4) =
                   *(void*)(*(int64_t *)(lVar5 + uVar11 * 8 + uVar14 * 8) + lVar12 * 4);
              uVar14 = uVar14 + 1;
            } while ((uVar10 & 3) != uVar14);
          }
          lVar12 = lVar12 + 1;
          uVar17 = uVar17 + 1;
          uVar13 = uVar17;
        } while (lVar12 != lVar16);
      }
      *(uint64_t *)(this_ptr + 0xb8) = uVar13;
    }
  }
  dVar6 = g_023907c8;
  iVar2 = *(int *)(this_ptr + 0xf0);
  if (iVar2 == 0) {
    uVar11 = *(uint64_t *)(this_ptr + 0xa0);
    if (arg1 <= uVar11) {
      return;
    }
    if ((int)uVar9 < 1) {
      uVar17 = uVar11 + 1;
      if (uVar11 + 1 < arg1) {
        uVar17 = arg1;
      }
    }
    else {
      dVar1 = *(double *)(this_ptr + 0xe8);
      lVar16 = *(int64_t *)(this_ptr + 0x98);
      lVar4 = *(int64_t *)(this_ptr + 0xb0);
      iVar2 = *(int *)(this_ptr + 0xc4);
      iVar3 = *(int *)(this_ptr + 0xac);
      do {
        dVar8 = (double)(int64_t)uVar11 * dVar1;
        uVar17 = (uint64_t)dVar8;
        uVar13 = ((int64_t)(dVar8 - dVar6) & (int64_t)uVar17 >> 0x3f | uVar17) & (int64_t)iVar2;
        uVar17 = uVar11 & (int64_t)iVar3;
        uVar14 = 0;
        if (2 < (uint64_t)uVar9 - 1) {
          do {
            *(void*)(*(int64_t *)(lVar16 + uVar14 * 8) + uVar17 * 4) =
                 *(void*)(*(int64_t *)(lVar4 + uVar14 * 8) + uVar13 * 4);
            *(void*)(*(int64_t *)(lVar16 + 8 + uVar14 * 8) + uVar17 * 4) =
                 *(void*)(*(int64_t *)(lVar4 + 8 + uVar14 * 8) + uVar13 * 4);
            *(void*)(*(int64_t *)(lVar16 + 0x10 + uVar14 * 8) + uVar17 * 4) =
                 *(void*)(*(int64_t *)(lVar4 + 0x10 + uVar14 * 8) + uVar13 * 4);
            *(void*)(*(int64_t *)(lVar16 + 0x18 + uVar14 * 8) + uVar17 * 4) =
                 *(void*)(*(int64_t *)(lVar4 + 0x18 + uVar14 * 8) + uVar13 * 4);
            uVar14 = uVar14 + 4;
          } while ((uVar9 & 0xfffffffc) != uVar14);
        }
        if ((uint64_t)(uVar9 & 3) != 0) {
          uVar15 = 0;
          do {
            *(void*)(*(int64_t *)(lVar16 + uVar14 * 8 + uVar15 * 8) + uVar17 * 4) =
                 *(void*)(*(int64_t *)(lVar4 + uVar14 * 8 + uVar15 * 8) + uVar13 * 4);
            uVar15 = uVar15 + 1;
          } while ((uVar9 & 3) != uVar15);
        }
        uVar11 = uVar11 + 1;
        uVar17 = uVar11;
      } while (uVar11 < arg1);
    }
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        return;
      }
      uVar11 = *(uint64_t *)(this_ptr + 0xa0);
      if (arg1 <= uVar11) {
        return;
      }
      if (0 < (int)uVar9) {
        do {
          dVar6 = (double)(int64_t)uVar11 * *(double *)(this_ptr + 0xe8);
          uVar17 = (int64_t)(dVar6 - g_023907c8) & (int64_t)dVar6 >> 0x3f | (int64_t)dVar6;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = dVar6;
          roundsd(ZEXT816(0),auVar20,9);
          uVar13 = 0;
          do {
            lVar16 = *(int64_t *)(*(int64_t *)(this_ptr + 0xb0) + uVar13 * 8);
            uVar11 = uVar17 + 1 & (int64_t)*(int *)(this_ptr + 0xc4);
            fVar18 = (float)FUN_00e838c0(*(void*)
                                          (lVar16 + (uVar17 - 1 &
                                                    (int64_t)*(int *)(this_ptr + 0xc4)) * 4),
                                         uVar11,*(void*)(lVar16 + uVar11 * 4));
            fVar19 = g_02390124;
            if ((fVar18 <= g_02390124) && (fVar19 = fVar18, fVar18 < g_02390d00)) {
              fVar19 = g_02390d00;
            }
            uVar11 = *(uint64_t *)(this_ptr + 0xa0);
            *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x98) + uVar13 * 8) +
                      ((int64_t)*(int *)(this_ptr + 0xac) & uVar11) * 4) = fVar19;
            uVar13 = uVar13 + 1;
          } while (uVar9 != uVar13);
          uVar11 = uVar11 + 1;
          *(uint64_t *)(this_ptr + 0xa0) = uVar11;
        } while (uVar11 < arg1);
        return;
      }
      uVar9 = (int)arg1 - (int)uVar11;
      uVar17 = ~uVar11;
      if ((uVar9 & 7) != 0) {
        lVar16 = 0;
        do {
          lVar16 = lVar16 + -1;
        } while (-lVar16 != ((uint64_t)uVar9 & 7));
        uVar11 = uVar11 - lVar16;
      }
      if (6 < uVar17 + arg1) {
        do {
          uVar11 = uVar11 + 8;
        } while (uVar11 < arg1);
      }
      *(uint64_t *)(this_ptr + 0xa0) = uVar11;
      return;
    }
    uVar11 = *(uint64_t *)(this_ptr + 0xa0);
    if (arg1 <= uVar11) {
      return;
    }
    if ((int)uVar9 < 1) {
      uVar17 = uVar11 + 1;
      if (uVar11 + 1 < arg1) {
        uVar17 = arg1;
      }
    }
    else {
      dVar1 = *(double *)(this_ptr + 0xe8);
      lVar16 = *(int64_t *)(this_ptr + 0x98);
      lVar4 = *(int64_t *)(this_ptr + 0xb0);
      iVar2 = *(int *)(this_ptr + 0xc4);
      iVar3 = *(int *)(this_ptr + 0xac);
      do {
        dVar8 = (double)(int64_t)uVar11 * dVar1;
        uVar17 = (int64_t)(dVar8 - dVar6) & (int64_t)dVar8 >> 0x3f | (int64_t)dVar8;
        uVar14 = (int64_t)iVar2 & uVar17;
        uVar13 = uVar17 + 1 & (int64_t)iVar2;
        uVar17 = uVar11 & (int64_t)iVar3;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = dVar8;
        auVar20 = roundsd(ZEXT816(0),auVar7,9);
        fVar19 = (float)(dVar8 - auVar20._0_8_);
        if (uVar9 == 1) {
          uVar15 = 0;
        }
        else {
          uVar15 = 0;
          do {
            lVar5 = *(int64_t *)(lVar4 + uVar15 * 8);
            fVar18 = *(float *)(lVar5 + uVar14 * 4);
            *(float *)(*(int64_t *)(lVar16 + uVar15 * 8) + uVar17 * 4) =
                 (*(float *)(lVar5 + uVar13 * 4) - fVar18) * fVar19 + fVar18;
            lVar5 = *(int64_t *)(lVar4 + 8 + uVar15 * 8);
            fVar18 = *(float *)(lVar5 + uVar14 * 4);
            *(float *)(*(int64_t *)(lVar16 + 8 + uVar15 * 8) + uVar17 * 4) =
                 (*(float *)(lVar5 + uVar13 * 4) - fVar18) * fVar19 + fVar18;
            uVar15 = uVar15 + 2;
          } while ((uVar9 & 0xfffffffe) != uVar15);
        }
        if ((uVar9 & 1) != 0) {
          lVar5 = *(int64_t *)(lVar4 + uVar15 * 8);
          fVar18 = *(float *)(lVar5 + uVar14 * 4);
          *(float *)(*(int64_t *)(lVar16 + uVar15 * 8) + uVar17 * 4) =
               (*(float *)(lVar5 + uVar13 * 4) - fVar18) * fVar19 + fVar18;
        }
        uVar11 = uVar11 + 1;
        uVar17 = uVar11;
      } while (uVar11 < arg1);
    }
  }
  *(uint64_t *)(this_ptr + 0xa0) = uVar17;
  return;
}



// ============================================================
// 00bbef30
// ============================================================
// Function: FUN_00bbef30
// Address: 00bbef30
// Size: 2023 bytes
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


uint64_t FUN_00bbef30(int param_1,int64_t param_2)

{
  int iVar1;
  float *pfVar2;
  char cVar3;
  uint64_t uVar4;
  char cVar5;
  float *pfVar6;
  int64_t arg1;
  int iVar7;
  int64_t this_ptr;
  int iVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint8_t auVar18 [16];
  float fVar19;
  float fVar20;
  float local_88;
  uint64_t local_40;
  int local_38;
  
  local_40 = FUN_00b33130();
  if (*(char *)(this_ptr + 0xe1) == '\0') {
    cVar5 = *(char *)(this_ptr + 0xe0);
    local_38 = *(int *)(this_ptr + 0xfc);
    if (local_38 == 0) {
      if (cVar5 == '\0') {
        fVar12 = *(float *)(this_ptr + 0xc0);
        fVar16 = *(float *)(this_ptr + 0xc4);
        fVar13 = *(float *)(this_ptr + 200);
        goto LAB_00bbf33e;
      }
      *(void*)(this_ptr + 0xe0) = 0;
      local_88 = (float)*(void*)(this_ptr + 0xc0);
      fVar12 = (float)((uint64_t)*(void*)(this_ptr + 0xc0) >> 0x20);
      fVar16 = *(float *)(this_ptr + 200);
      fVar20 = *(float *)(this_ptr + 0x98) * g_023d9210;
      fVar13 = g_0241142c - fVar20;
      fVar13 = fVar13 * fVar13 * fVar13 * g_02391098;
      *(float *)(this_ptr + 0xb0) = fVar13;
      *(float *)(this_ptr + 0xbc) = fVar13 * *(float *)(this_ptr + 0xb4);
      fVar20 = (g_0240f120 / (float)*(double *)(this_ptr + 0x18)) * fVar20 * g_023d9214;
      fVar13 = g_023d9214;
      if (fVar20 <= g_023d9214) {
        fVar13 = fVar20;
      }
      *(float *)(this_ptr + 0xd0) = fVar13;
      *(float *)(this_ptr + 0xac) = fVar13;
      fVar17 = g_024229f0 * fVar13 * fVar13 + g_023d9218 * fVar13 + g_02390d00;
      *(float *)(this_ptr + 0xc0) = fVar17;
      fVar15 = g_02390124;
      fVar20 = g_0239011c;
      fVar14 = (fVar17 + g_02390124) * g_0239011c;
      *(float *)(this_ptr + 0xc4) = fVar14;
      *(float *)(this_ptr + 0xcc) = g_0240e354 * fVar13 * fVar13 + fVar15;
      fVar20 = (*(float *)(this_ptr + 0xb4) * fVar20 + fVar20) *
               (fVar13 * fVar13 * fVar13 * g_024112b4 + g_0239428c * fVar13 + g_02394254) *
               *(float *)(this_ptr + 0xa4) * fVar20;
      *(float *)(this_ptr + 200) = fVar20;
      auVar18 = insertps(ZEXT416((uint)fVar17),ZEXT416((uint)fVar14),0x10);
      fVar15 = auVar18._0_4_ - local_88;
      fVar17 = auVar18._4_4_ - fVar12;
      *(float *)(this_ptr + 0xf0) = fVar15;
      *(float *)(this_ptr + 0xf4) = fVar17;
      fVar20 = fVar20 - fVar16;
      *(float *)(this_ptr + 0xf8) = fVar20;
      fVar13 = (float)((uint)fVar15 & g_02390140);
      if ((float)((uint)fVar15 & g_02390140) <= (float)((uint)fVar17 & _UNK_02390144)) {
        fVar13 = (float)((uint)fVar17 & _UNK_02390144);
      }
      local_38 = (int)(fVar13 / g_023d921c);
      *(int *)(this_ptr + 0xfc) = local_38;
      cVar5 = '\x01';
      cVar3 = '\x01';
      if (0 < local_38) {
        fVar13 = (float)local_38;
        *(float *)(this_ptr + 0xf0) = fVar15 / fVar13;
        *(float *)(this_ptr + 0xf4) = fVar17 / fVar13;
        *(float *)(this_ptr + 0xf8) = fVar20 / fVar13;
        goto LAB_00bbf377;
      }
      goto LAB_00bbf370;
    }
  }
  else {
    fVar16 = *(float *)(this_ptr + 0x98) * g_023d9210;
    fVar12 = g_0241142c - fVar16;
    fVar12 = fVar12 * fVar12 * fVar12 * g_02391098;
    *(float *)(this_ptr + 0xb0) = fVar12;
    *(float *)(this_ptr + 0xbc) = fVar12 * *(float *)(this_ptr + 0xb4);
    fVar12 = (g_0240f120 / (float)*(double *)(this_ptr + 0x18)) * fVar16 * g_023d9214;
    fVar13 = g_023d9214;
    if (fVar12 <= g_023d9214) {
      fVar13 = fVar12;
    }
    *(float *)(this_ptr + 0xd0) = fVar13;
    *(float *)(this_ptr + 0xac) = fVar13;
    fVar12 = g_024229f0 * fVar13 * fVar13 + g_023d9218 * fVar13 + g_02390d00;
    *(float *)(this_ptr + 0xc0) = fVar12;
    fVar15 = g_02390124;
    fVar20 = g_0239011c;
    fVar16 = (fVar12 + g_02390124) * g_0239011c;
    *(float *)(this_ptr + 0xc4) = fVar16;
    *(float *)(this_ptr + 0xcc) = g_0240e354 * fVar13 * fVar13 + fVar15;
    fVar13 = (*(float *)(this_ptr + 0xb4) * fVar20 + fVar20) *
             (fVar13 * fVar13 * fVar13 * g_024112b4 + g_0239428c * fVar13 + g_02394254) *
             *(float *)(this_ptr + 0xa4) * fVar20;
    *(float *)(this_ptr + 200) = fVar13;
    *(void*)(this_ptr + 0xe0) = 0;
    local_38 = *(int *)(this_ptr + 0xfc);
    if (local_38 == 0) {
LAB_00bbf33e:
      *(float *)(this_ptr + 0xe4) = fVar12;
      *(float *)(this_ptr + 0xe8) = fVar16;
      *(float *)(this_ptr + 0xec) = fVar13;
      local_88 = 0.0;
      fVar12 = 0.0;
      fVar16 = 0.0;
      cVar3 = '\0';
LAB_00bbf370:
      cVar5 = cVar3;
      local_38 = 0;
      goto LAB_00bbf377;
    }
    cVar5 = '\0';
  }
  local_88 = *(float *)(this_ptr + 0xe4);
  fVar12 = *(float *)(this_ptr + 0xe8);
  fVar16 = *(float *)(this_ptr + 0xec);
LAB_00bbf377:
  if (0 < (int)local_40) {
    iVar1 = *(int *)(this_ptr + 0x94);
    iVar7 = iVar1 + -1;
    uVar4 = local_40 & 0xffffffff;
    local_40 = 0;
    fVar13 = g_023d9220;
    do {
      if (cVar5 != '\0' || local_38 != 0) {
        *(float *)(this_ptr + 0xe4) = local_88;
        *(float *)(this_ptr + 0xe8) = fVar12;
        *(float *)(this_ptr + 0xec) = fVar16;
        *(int *)(this_ptr + 0xfc) = local_38;
      }
      pfVar6 = *(float **)(param_2 + local_40 * 8);
      *pfVar6 = **(float **)(arg1 + local_40 * 8);
      iVar8 = param_1;
      while (iVar8 != 0) {
        if (2 < *(int *)(this_ptr + 0x94)) {
          uVar9 = (uint64_t)(*(int *)(this_ptr + 0x94) - 1U >> 1);
          fVar20 = *pfVar6;
          lVar10 = uVar9 + 1;
          lVar11 = (uVar4 * uVar9 + local_40) * 8;
          do {
            pfVar2 = *(float **)(*(int64_t *)(this_ptr + 0xd8) + lVar11);
            fVar15 = pfVar2[3];
            fVar14 = (float)FUN_00bbc5a0((fVar15 * fVar15 * fVar15 * fVar13 + fVar15) *
                                         *(float *)(this_ptr + 0xbc));
            fVar17 = g_023d9224;
            fVar15 = g_02390d00;
            fVar13 = g_02390124;
            fVar20 = fVar20 - fVar14;
            pfVar2[4] = fVar20;
            g_02765550 = g_02765550 * 0xbb38435 + 0x3619636b;
            fVar13 = ((float)g_02765550 * fVar17 + fVar15) * *(float *)(this_ptr + 0xec) + fVar13
            ;
            fVar19 = *(float *)(this_ptr + 0xe4) * fVar13;
            fVar13 = fVar13 * *(float *)(this_ptr + 0xe8);
            fVar15 = (pfVar2[9] + fVar20) * fVar13 - *pfVar2 * fVar19;
            *pfVar2 = fVar15;
            fVar17 = (pfVar2[5] + fVar15) * fVar13 - pfVar2[1] * fVar19;
            pfVar2[1] = fVar17;
            fVar14 = (pfVar2[6] + fVar17) * fVar13 - pfVar2[2] * fVar19;
            pfVar2[2] = fVar14;
            fVar19 = (pfVar2[7] + fVar14) * fVar13 - fVar19 * pfVar2[3];
            pfVar2[3] = fVar19;
            pfVar2[9] = pfVar2[4];
            *(void*)(pfVar2 + 5) = *(void*)pfVar2;
            *(void*)(pfVar2 + 7) = *(void*)(pfVar2 + 2);
            pfVar2[0xf] = fVar17;
            pfVar2[0x10] = fVar19;
            pfVar2[0x11] = fVar20 - fVar17;
            pfVar2[0x12] = fVar20 - fVar19;
            fVar13 = g_023d9220;
            pfVar2[0x13] = ((fVar19 - fVar17) + fVar19) - fVar17;
            pfVar2[0x14] = ((fVar20 - fVar17) + fVar14) - fVar15;
            pfVar2[0x15] = fVar14 + fVar20;
            pfVar2[0x16] = fVar15 + fVar20;
            fVar20 = pfVar2[(int64_t)*(int *)(this_ptr + 0x90) * 2 + 0x10];
            *pfVar6 = fVar20;
            lVar10 = lVar10 + -1;
            lVar11 = lVar11 + uVar4 * -8;
          } while (1 < lVar10);
        }
        iVar8 = iVar8 + -1;
        FUN_00bbf730(iVar7 - ((iVar1 - (iVar7 >> 0x1f)) - 1U & 0xfffffffe),
                     *(void*)(*(int64_t *)(this_ptr + 0xd8) + local_40 * 8));
        if (*(int *)(this_ptr + 0xfc) != 0) {
          *(float *)(this_ptr + 0xe4) = *(float *)(this_ptr + 0xf0) + *(float *)(this_ptr + 0xe4)
          ;
          *(float *)(this_ptr + 0xe8) = *(float *)(this_ptr + 0xf4) + *(float *)(this_ptr + 0xe8)
          ;
          *(float *)(this_ptr + 0xec) = *(float *)(this_ptr + 0xf8) + *(float *)(this_ptr + 0xec)
          ;
          *(int *)(this_ptr + 0xfc) = *(int *)(this_ptr + 0xfc) + -1;
        }
        pfVar6 = pfVar6 + 1;
        fVar13 = g_023d9220;
      }
      local_40 = local_40 + 1;
    } while (local_40 != uVar4);
  }
  return local_40;
}



// ============================================================
// 00bbd480
// ============================================================
// Function: FUN_00bbd480
// Address: 00bbd480
// Size: 1386 bytes
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


void FUN_00bbd480(int param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  bool bVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  uint64_t uVar11;
  int64_t arg1;
  int64_t this_ptr;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint64_t uVar16;
  float *pfVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  uint8_t auVar23 [16];
  int64_t lVar24;
  uint8_t auVar25 [16];
  int64_t lVar27;
  uint8_t auVar26 [16];
  double dVar28;
  float fVar29;
  uint8_t in_XMM5 [16];
  int64_t local_98 [12];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  uVar8 = FUN_00b33120();
  uVar16 = (uint64_t)uVar8;
  if (0 < (int)uVar8) {
    plVar3 = *(int64_t **)(this_ptr + 0x90);
    iVar10 = *(int *)(this_ptr + 0x9c);
    if ((uVar8 < 4) || ((local_98 < plVar3 + uVar16 && (plVar3 < local_98 + uVar16)))) {
      uVar11 = 0;
    }
    else {
      uVar11 = (uint64_t)(uVar8 & 0xfffffffc);
      uVar12 = (uVar11 - 4 >> 2) + 1;
      uVar14 = (uint64_t)((uint)uVar12 & 3);
      if (uVar11 - 4 < 0xc) {
        lVar15 = 0;
      }
      else {
        lVar13 = -(uVar12 & 0xfffffffffffffffc);
        lVar15 = 0;
        auVar25._0_8_ = (int64_t)iVar10;
        auVar25._8_4_ = iVar10;
        auVar25._12_4_ = iVar10 >> 0x1f;
        lVar24 = auVar25._0_8_ * 4;
        lVar27 = auVar25._8_8_ * 4;
        do {
          lVar5 = (plVar3 + lVar15)[1];
          lVar6 = plVar3[lVar15 + 2];
          lVar7 = (plVar3 + lVar15 + 2)[1];
          local_98[lVar15] = plVar3[lVar15] + lVar24;
          local_98[lVar15 + 1] = lVar5 + lVar27;
          local_98[lVar15 + 2] = lVar6 + lVar24;
          local_98[lVar15 + 3] = lVar7 + lVar27;
          lVar5 = (plVar3 + lVar15 + 4)[1];
          lVar6 = plVar3[lVar15 + 6];
          lVar7 = (plVar3 + lVar15 + 6)[1];
          local_98[lVar15 + 4] = plVar3[lVar15 + 4] + lVar24;
          local_98[lVar15 + 5] = lVar5 + lVar27;
          local_98[lVar15 + 6] = lVar6 + lVar24;
          local_98[lVar15 + 7] = lVar7 + lVar27;
          lVar5 = (plVar3 + lVar15 + 8)[1];
          lVar6 = plVar3[lVar15 + 10];
          lVar7 = (plVar3 + lVar15 + 10)[1];
          local_98[lVar15 + 8] = plVar3[lVar15 + 8] + lVar24;
          local_98[lVar15 + 9] = lVar5 + lVar27;
          local_98[lVar15 + 10] = lVar6 + lVar24;
          local_98[lVar15 + 0xb] = lVar7 + lVar27;
          lVar5 = (plVar3 + lVar15 + 0xc)[1];
          lVar6 = plVar3[lVar15 + 0xe];
          lVar7 = (plVar3 + lVar15 + 0xe)[1];
          local_98[lVar15 + 0xc] = plVar3[lVar15 + 0xc] + lVar24;
          *(int64_t *)(&stack0xffffffffffffffd0 + lVar15 * 8) = lVar5 + lVar27;
          *(int64_t *)(&stack0xffffffffffffffd8 + lVar15 * 8) = lVar6 + lVar24;
          *(int64_t *)(&stack0xffffffffffffffe0 + lVar15 * 8) = lVar7 + lVar27;
          lVar15 = lVar15 + 0x10;
          lVar13 = lVar13 + 4;
        } while (lVar13 != 0);
      }
      if (uVar14 != 0) {
        lVar13 = 0;
        auVar23._0_8_ = (int64_t)iVar10;
        auVar23._8_4_ = iVar10;
        auVar23._12_4_ = iVar10 >> 0x1f;
        lVar24 = auVar23._8_8_ * 4;
        do {
          plVar2 = (int64_t *)((int64_t)plVar3 + lVar13 + lVar15 * 8);
          plVar1 = (int64_t *)((int64_t)plVar3 + lVar13 + lVar15 * 8 + 0x10);
          lVar27 = *plVar1;
          lVar5 = plVar1[1];
          auVar26._0_8_ = *plVar2 + auVar23._0_8_ * 4;
          auVar26._8_8_ = plVar2[1] + lVar24;
          *(uint8_t (*) [16])((int64_t)local_98 + lVar13 + lVar15 * 8) = auVar26;
          plVar1 = (int64_t *)((int64_t)local_98 + lVar13 + lVar15 * 8 + 0x10);
          *plVar1 = lVar27 + auVar23._0_8_ * 4;
          plVar1[1] = lVar5 + lVar24;
          lVar13 = lVar13 + 0x20;
        } while (uVar14 << 5 != lVar13);
      }
      if (uVar11 == uVar16) goto LAB_00bbd6e2;
    }
    uVar14 = ~uVar11;
    uVar12 = uVar16 & 3;
    if ((uVar8 & 3) != 0) {
      do {
        local_98[uVar11] = plVar3[uVar11] + (int64_t)iVar10 * 4;
        uVar11 = uVar11 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if (2 < uVar14 + uVar16) {
      lVar15 = (int64_t)iVar10 * 4;
      do {
        local_98[uVar11] = plVar3[uVar11] + lVar15;
        local_98[uVar11 + 1] = plVar3[uVar11 + 1] + lVar15;
        local_98[uVar11 + 2] = plVar3[uVar11 + 2] + lVar15;
        local_98[uVar11 + 3] = plVar3[uVar11 + 3] + lVar15;
        uVar11 = uVar11 + 4;
      } while (uVar16 != uVar11);
    }
  }
LAB_00bbd6e2:
  (**(code **)(**(int64_t **)(this_ptr + 0xd0) + 0x400))(param_1,local_98);
  if (0 < (int)uVar8) {
    uVar11 = 0;
    fVar21 = g_02390124;
    do {
      if (param_1 != 0) {
        pfVar9 = *(float **)(param_2 + uVar11 * 8);
        pfVar17 = *(float **)(arg1 + uVar11 * 8);
        uVar12 = (uint64_t)*(uint *)(this_ptr + 0xa0);
        iVar10 = param_1;
        do {
          iVar18 = param_1 - iVar10;
          iVar10 = iVar10 + -1;
          fVar19 = (*pfVar17 -
                   *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x90) + uVar11 * 8) +
                             (int64_t)(*(int *)(this_ptr + 0x9c) + iVar18) * 4)) * g_02394298;
          if (0 < (int)uVar12) {
            lVar15 = 0;
            while ((uVar11 != 1 || (lVar15 != 2))) {
              dVar22 = *(double *)
                        (*(int64_t *)(*(int64_t *)(this_ptr + 0xa8) + 0x10) + lVar15 * 8) *
                       *(double *)
                        (*(int64_t *)(*(int64_t *)(this_ptr + 0xb0) + 0x10) + lVar15 * 8);
              lVar13 = *(int64_t *)(*(int64_t *)(this_ptr + 200) + 0x10);
              uVar12 = -(uint64_t)(*(double *)(lVar13 + lVar15 * 8) < 0.0);
              *(uint64_t *)(lVar13 + lVar15 * 8) =
                   ((uint64_t)dVar22 ^ g_023945b0) & uVar12 | ~uVar12 & (uint64_t)dVar22;
              fVar20 = (float)*(int *)(this_ptr + 0x98);
              for (fVar29 = (float)((double)(*(int *)(this_ptr + 0x9c) + iVar18) -
                                   *(double *)
                                    (*(int64_t *)(*(int64_t *)(this_ptr + 0xc0) + 0x10) +
                                    lVar15 * 8)); fVar29 < fVar21; fVar29 = fVar29 + fVar20) {
              }
              for (; fVar20 < fVar29; fVar29 = fVar29 - fVar20) {
              }
              in_XMM5 = roundss(in_XMM5,ZEXT416((uint)fVar29),9);
              fVar21 = (float)FUN_00e838c0();
              lVar13 = *(int64_t *)(*(int64_t *)(this_ptr + 200) + 0x10);
              lVar24 = *(int64_t *)(*(int64_t *)(this_ptr + 0xc0) + 0x10);
              dVar28 = *(double *)(lVar13 + lVar15 * 8) + *(double *)(lVar24 + lVar15 * 8);
              *(double *)(lVar24 + lVar15 * 8) = dVar28;
              dVar22 = *(double *)(lVar13 + lVar15 * 8);
              if (((0.0 < dVar22) &&
                  (*(double *)(*(int64_t *)(*(int64_t *)(this_ptr + 0xa8) + 0x10) + lVar15 * 8) *
                   g_023934d0 <= dVar28)) || ((dVar22 < 0.0 && (dVar28 <= g_023b3bc0)))) {
                *(uint64_t *)(lVar13 + lVar15 * 8) = (uint64_t)dVar22 ^ g_023945b0;
              }
              fVar19 = fVar19 + fVar21;
              uVar12 = (uint64_t)*(int *)(this_ptr + 0xa0);
              fVar21 = g_02390124;
              if (((int64_t)uVar12 <= lVar15 + 1) ||
                 (bVar4 = lVar15 == 0, lVar15 = lVar15 + 1, bVar4 && uVar11 == 0)) break;
            }
          }
          pfVar17 = pfVar17 + 1;
          *pfVar9 = fVar19;
          pfVar9 = pfVar9 + 1;
        } while (iVar10 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar16);
  }
  param_1 = param_1 + *(int *)(this_ptr + 0x9c);
  *(int *)(this_ptr + 0x9c) = param_1;
  if (*(int *)(this_ptr + 0x98) <= param_1) {
    *(int *)(this_ptr + 0x9c) = param_1 - *(int *)(this_ptr + 0x98);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}



// ============================================================
// 00bc5580
// ============================================================
// Function: FUN_00bc5580
// Address: 00bc5580
// Size: 1689 bytes
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


void FUN_00bc5580(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint32_t uVar6;
  int64_t *plVar7;
  void*puVar8;
  int64_t lVar9;
  int64_t lVar10;
  void*arg1;
  uint64_t uVar11;
  void*this_ptr;
  bool bVar12;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar13;
  double dVar14;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  void*local_38;
  char local_30;
  
  if ((g_028a56f0 == 0) || (g_028a56f9 == '\0')) {
    FUN_00e8cb50();
    if (g_028a56f0 == 0) {
      FUN_00bc5e50();
      puVar8 = (void*)g_028a56d0;
      if ((void*)g_028a56d0 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == (void*)0x0) {
            puVar8 = (void*)0x0;
          }
          else {
            FUN_00d50b00();
            puVar8 = local_38;
          }
        }
        else {
          local_30 = '\0';
          puVar8 = local_38;
        }
        bVar2 = g_028a56d0 != 0;
        g_028a56d0 = (int64_t)puVar8;
        if (bVar2) {
          FUN_00d50b20();
          puVar8 = local_38;
        }
      }
      if ((puVar8 != (void*)0x0) && (g_028a56d8 == '\0')) {
        g_028a56d8 = '\x01';
        FUN_00e8cb90();
        puVar8 = local_38;
      }
      if ((local_30 != '\0') && (puVar8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_02581c90;
      (*g_02581ca8)();
      if (g_028a56e0 == puVar8) {
        bVar1 = false;
        bVar2 = false;
      }
      else {
        bVar1 = true;
        bVar2 = true;
        bVar12 = g_028a56e0 != (void*)0x0;
        g_028a56e0 = puVar8;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (g_028a56e8 == '\0') {
        g_028a56e8 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar1;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      local_58 = 0;
      local_50 = '\0';
      FUN_00da62d0(g_02391038,&local_58);
      puVar8 = (void*)g_028a56f0;
      if ((void*)g_028a56f0 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == (void*)0x0) {
            puVar8 = (void*)0x0;
          }
          else {
            FUN_00d50b00();
            puVar8 = local_38;
          }
        }
        else {
          local_30 = '\0';
          puVar8 = local_38;
        }
        bVar2 = g_028a56f0 != 0;
        g_028a56f0 = (int64_t)puVar8;
        if (bVar2) {
          FUN_00d50b20();
          puVar8 = local_38;
        }
      }
      if ((puVar8 != (void*)0x0) && (g_028a56f8 == '\0')) {
        g_028a56f8 = '\x01';
        FUN_00e8cb90();
        puVar8 = local_38;
      }
      if ((local_30 != '\0') && (puVar8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      g_028a56f9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a56f9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028a5730 == 0) || (g_028a5739 == '\0')) {
    FUN_00e8cb50();
    if (g_028a5730 == 0) {
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_02572358;
      (*g_02572370)();
      if (g_028a5700 == puVar8) {
        bVar1 = false;
        bVar2 = false;
      }
      else {
        bVar1 = true;
        bVar2 = true;
        bVar12 = g_028a5700 != (void*)0x0;
        g_028a5700 = puVar8;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (g_028a5708 == '\0') {
        g_028a5708 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar1;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      plVar7 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar7 = (int64_t)&g_02573318;
      (*g_02573330)();
      if (g_028a5710 == plVar7) {
        bVar1 = false;
        bVar2 = false;
      }
      else {
        bVar1 = true;
        bVar2 = true;
        bVar12 = g_028a5710 != (int64_t *)0x0;
        g_028a5710 = plVar7;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (g_028a5718 == '\0') {
        g_028a5718 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar1;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_02581c90;
      (*g_02581ca8)();
      if (g_028a5720 == puVar8) {
        bVar1 = false;
        bVar2 = false;
      }
      else {
        bVar1 = true;
        bVar2 = true;
        bVar12 = g_028a5720 != (void*)0x0;
        g_028a5720 = puVar8;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (g_028a5728 == '\0') {
        g_028a5728 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar1;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      local_48 = 0;
      local_40 = '\0';
      FUN_00da62d0(g_02391038,&local_48);
      puVar8 = (void*)g_028a5730;
      if ((void*)g_028a5730 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == (void*)0x0) {
            puVar8 = (void*)0x0;
          }
          else {
            FUN_00d50b00();
            puVar8 = local_38;
          }
        }
        else {
          local_30 = '\0';
          puVar8 = local_38;
        }
        bVar2 = g_028a5730 != 0;
        g_028a5730 = (int64_t)puVar8;
        if (bVar2) {
          FUN_00d50b20();
          puVar8 = local_38;
        }
      }
      if ((puVar8 != (void*)0x0) && (g_028a5738 == '\0')) {
        g_028a5738 = '\x01';
        FUN_00e8cb90();
        puVar8 = local_38;
      }
      if ((local_30 != '\0') && (puVar8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      g_028a5739 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a5739 = '\x01';
      FUN_00e8cb70();
    }
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_0254a198;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[4] = 0;
  FUN_00d500e0();
  puVar8[2] = *arg1;
  iVar3 = FUN_00b7a700();
  uVar13 = extraout_XMM0_Qa;
  if (g_028024fc == 0) {
    iVar4 = FUN_00e83090();
    iVar5 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar5 = iVar4;
    }
    g_028024fc = iVar5 >> 2;
    uVar13 = extraout_XMM0_Qa_00;
  }
  *(int *)(puVar8 + 4) = g_028024fc / iVar3;
  if (1 < iVar3) {
    uVar6 = FUN_00e7d930(uVar13,1);
    *(void*)(puVar8 + 4) = uVar6;
  }
  dVar14 = (double)FUN_00e7d6f0();
  lVar9 = FUN_00e7dae0(((dVar14 - g_02765b70) - g_028024d8) * g_02411988);
  lVar10 = 0;
  if (0 < lVar9) {
    lVar10 = lVar9;
  }
  uVar11 = (uint64_t)(lVar10 - lVar9 != 0);
  lVar9 = (((lVar10 - lVar9) - uVar11) / 0xffffffff + uVar11) * 0xffffffff + lVar9;
  lVar10 = 0xffffffff;
  if (lVar9 < 0xffffffff) {
    lVar10 = lVar9;
  }
  *(int *)((int64_t)puVar8 + 0x24) =
       (int)lVar9 + (int)((uint64_t)((lVar9 + 0xfffffffe) - lVar10) / 0xffffffff);
  (**(code **)(*g_028a5710 + 0x368))();
  local_30 = '\0';
  local_38 = puVar8;
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != (void*)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*g_028a5710 + 0x378))();
  FUN_00bc6940();
  *this_ptr = puVar8;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00bc7a00
// ============================================================
// Function: FUN_00bc7a00
// Address: 00bc7a00
// Size: 1116 bytes
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


void FUN_00bc7a00(void)

{
  int64_t lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int iVar10;
  uint uVar11;
  uint64_t arg1;
  uint64_t uVar12;
  int iVar13;
  int64_t this_ptr;
  int64_t lVar14;
  uint64_t uVar15;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  int iVar20;
  int iVar21;
  int iVar22;
  uint8_t auVar19 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint local_838 [2];
  int64_t local_830 [255];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (arg1 >> 0x20 != 0) {
    lVar1 = *(int64_t *)(this_ptr + 0x18);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    iVar10 = (int)(arg1 >> 0x20);
    if (0 < iVar10) {
      lVar8 = (int64_t)(int)arg1;
      do {
        lVar6 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar8 * 8);
        local_838[0] = FUN_00e31390();
LAB_00bc7aa0:
        if (0xf < local_838[0]) {
LAB_00bc7ab3:
          uVar5 = local_838[0];
          if ((local_838[0] & 1) != 0) goto LAB_00bc7af0;
          uVar11 = local_838[0] | 1;
          cVar2 = FUN_00e314a0(2,uVar11);
          if (cVar2 == '\0') goto code_r0x00bc7ad9;
          if (*(int64_t *)(lVar6 + 0x18) == 0) {
            if (g_028024fc == 0) {
              iVar4 = FUN_00e83090();
              iVar13 = iVar4 + 3;
              if (-1 < iVar4) {
                iVar13 = iVar4;
              }
              g_028024fc = iVar13 >> 2;
            }
            lVar6 = FUN_00e83010();
            uVar5 = FUN_00b7a700();
            iVar13 = *(int *)(this_ptr + 0x20);
            uVar15 = (uint64_t)uVar5;
            if ((int)uVar5 < 1) goto LAB_00bc7d4a;
            if (uVar5 < 4) {
              uVar7 = 0;
              goto LAB_00bc7d29;
            }
            uVar7 = (uint64_t)(uVar5 & 0xfffffffc);
            auVar16._4_4_ = iVar13;
            auVar16._0_4_ = iVar13;
            auVar16._8_8_ = 0;
            uVar12 = (uVar7 - 4 >> 2) + 1;
            if (uVar7 - 4 == 0) {
              lVar9 = 0;
              auVar19 = g_02392fe0;
              goto LAB_00bc7cdb;
            }
            lVar14 = -(uVar12 & 0xfffffffffffffffe);
            lVar9 = 0;
            auVar19 = g_02392fe0;
            do {
              iVar4 = auVar19._0_4_;
              auVar24._0_4_ = iVar4 + g_023d92d0;
              iVar20 = auVar19._4_4_;
              auVar24._4_4_ = iVar20 + _UNK_023d92d4;
              iVar21 = auVar19._8_4_;
              iVar22 = auVar19._12_4_;
              auVar24._8_4_ = iVar21 + _UNK_023d92d8;
              auVar24._12_4_ = iVar22 + _UNK_023d92dc;
              auVar23 = pmulld(auVar16,auVar19);
              auVar19 = pmulld(auVar24,auVar16);
              auVar24 = pmovsxdq(auVar23,auVar23);
              auVar19 = pmovsxdq(auVar19,auVar19);
              *(int64_t *)(local_838 + lVar9 * 2) = auVar24._0_8_ * 4 + lVar6;
              local_830[lVar9] = auVar24._8_8_ * 4 + lVar6;
              local_830[lVar9 + 1] = auVar19._0_8_ * 4 + lVar6;
              local_830[lVar9 + 2] = auVar19._8_8_ * 4 + lVar6;
              auVar23._0_4_ = iVar4 + g_023d92e0;
              auVar23._4_4_ = iVar20 + _UNK_023d92e4;
              auVar23._8_4_ = iVar21 + _UNK_023d92e8;
              auVar23._12_4_ = iVar22 + _UNK_023d92ec;
              auVar25._0_4_ = iVar4 + g_023d92f0;
              auVar25._4_4_ = iVar20 + _UNK_023d92f4;
              auVar25._8_4_ = iVar21 + _UNK_023d92f8;
              auVar25._12_4_ = iVar22 + _UNK_023d92fc;
              auVar19 = pmulld(auVar23,auVar16);
              auVar24 = pmulld(auVar25,auVar16);
              auVar19 = pmovsxdq(auVar19,auVar19);
              auVar24 = pmovsxdq(auVar24,auVar24);
              local_830[lVar9 + 3] = auVar19._0_8_ * 4 + lVar6;
              local_830[lVar9 + 4] = auVar19._8_8_ * 4 + lVar6;
              local_830[lVar9 + 5] = auVar24._0_8_ * 4 + lVar6;
              local_830[lVar9 + 6] = auVar24._8_8_ * 4 + lVar6;
              lVar9 = lVar9 + 8;
              auVar19._0_4_ = iVar4 + g_02410ff0;
              auVar19._4_4_ = iVar20 + _UNK_02410ff4;
              auVar19._8_4_ = iVar21 + _UNK_02410ff8;
              auVar19._12_4_ = iVar22 + _UNK_02410ffc;
              lVar14 = lVar14 + 2;
            } while (lVar14 != 0);
            if ((uVar12 & 1) != 0) {
LAB_00bc7cdb:
              auVar24 = pmulld(auVar16,auVar19);
              auVar18._0_4_ = auVar19._0_4_ + g_023d92d0;
              auVar18._4_4_ = auVar19._4_4_ + _UNK_023d92d4;
              auVar18._8_4_ = auVar19._8_4_ + _UNK_023d92d8;
              auVar18._12_4_ = auVar19._12_4_ + _UNK_023d92dc;
              auVar19 = pmulld(auVar18,auVar16);
              auVar16 = pmovsxdq(auVar16,auVar24);
              auVar19 = pmovsxdq(auVar19,auVar19);
              auVar17._8_4_ = (int)lVar6;
              auVar17._0_8_ = lVar6;
              auVar17._12_4_ = (int)((uint64_t)lVar6 >> 0x20);
              *(int64_t *)(local_838 + lVar9 * 2) = auVar16._0_8_ * 4 + lVar6;
              local_830[lVar9] = auVar16._8_8_ * 4 + auVar17._8_8_;
              local_830[lVar9 + 1] = auVar19._0_8_ * 4 + lVar6;
              local_830[lVar9 + 2] = auVar19._8_8_ * 4 + auVar17._8_8_;
            }
            if (uVar7 != uVar15) {
LAB_00bc7d29:
              iVar4 = (int)uVar7 * iVar13;
              do {
                *(int64_t *)(local_838 + uVar7 * 2) = lVar6 + (int64_t)iVar4 * 4;
                uVar7 = uVar7 + 1;
                iVar4 = iVar4 + iVar13;
              } while (uVar15 != uVar7);
            }
LAB_00bc7d4a:
            bVar3 = FUN_00b870b0((int64_t)iVar13,iVar13 * lVar8);
            if ((bVar3 == 0) && (0 < (int)uVar5)) {
              uVar7 = 0;
              do {
                (**(code **)(g_02786500 + 0x40))();
                uVar7 = uVar7 + 1;
              } while (uVar15 != uVar7);
            }
            lVar9 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar8 * 8);
            *(int64_t *)(lVar9 + 0x18) = lVar6;
            *(byte *)(lVar9 + 0xc) = bVar3 ^ 1;
            uVar5 = FUN_00e31390();
            do {
              cVar2 = FUN_00e314a0(3,uVar5 & 0xfffffffe);
            } while (cVar2 == '\0');
            goto LAB_00bc7b53;
          }
          local_838[0] = uVar11;
          cVar2 = FUN_00e314a0(0,uVar5 & 0xfffffffe);
          while (cVar2 == '\0') {
            cVar2 = FUN_00e314a0(0,local_838[0] & 0xfffffffe);
          }
        }
LAB_00bc7b53:
        lVar8 = lVar8 + 1;
        if (iVar10 + (int)arg1 <= lVar8) break;
      } while( true );
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
code_r0x00bc7ad9:
  if (local_838[0] < 0x10) goto LAB_00bc7b53;
  goto LAB_00bc7ab3;
LAB_00bc7af0:
  FUN_00da6800();
  local_838[0] = FUN_00e31390();
  goto LAB_00bc7aa0;
}



// ============================================================
// 00bbc620
// ============================================================
// Function: FUN_00bbc620
// Address: 00bbc620
// Size: 1012 bytes
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


void FUN_00bbc620(int param_1,int64_t param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  uint *puVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint8_t auVar13 [16];
  uint uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t arg1;
  int64_t lVar17;
  int64_t this_ptr;
  uint64_t uVar18;
  int iVar19;
  uint64_t uVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  uint uVar23;
  uint uVar24;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  float fVar29;
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  uint8_t auVar36 [16];
  
  uVar14 = FUN_00b33120();
  auVar13 = g_023b2d50;
  uVar12 = _UNK_023945ec;
  uVar11 = _UNK_023945e8;
  uVar23 = _UNK_023945e4;
  uVar10 = g_023945e0;
  fVar9 = g_02390124;
  if ((0 < (int)uVar14) && (param_1 != 0)) {
    if (param_1 - 1U < 3) {
      uVar15 = 0;
      do {
        pfVar3 = *(float **)(arg1 + uVar15 * 8);
        fVar35 = *pfVar3 * *(float *)(this_ptr + 0x94);
        fVar1 = *(float *)(this_ptr + 0x90);
        uVar23 = -(uint)(fVar35 < 0.0);
        fVar35 = (float)(~uVar23 & (uint)fVar35 | ((uint)fVar35 ^ uVar10) & uVar23);
        if (fVar1 < fVar35) {
          fVar35 = (fVar9 - fVar9 / ((fVar9 / (fVar9 - fVar1)) * (fVar35 - fVar1) + fVar9)) *
                   (fVar9 - fVar1) + fVar1;
        }
        puVar4 = *(uint **)(param_2 + uVar15 * 8);
        *puVar4 = ~uVar23 & (uint)fVar35 | ((uint)fVar35 ^ uVar10) & uVar23;
        if (param_1 != 1) {
          fVar35 = pfVar3[1] * *(float *)(this_ptr + 0x94);
          fVar1 = *(float *)(this_ptr + 0x90);
          uVar23 = -(uint)(fVar35 < 0.0);
          fVar35 = (float)(~uVar23 & (uint)fVar35 | ((uint)fVar35 ^ uVar10) & uVar23);
          if (fVar1 < fVar35) {
            fVar35 = (fVar9 - fVar9 / ((fVar9 / (fVar9 - fVar1)) * (fVar35 - fVar1) + fVar9)) *
                     (fVar9 - fVar1) + fVar1;
          }
          puVar4[1] = ~uVar23 & (uint)fVar35 | ((uint)fVar35 ^ uVar10) & uVar23;
          if (param_1 != 2) {
            fVar35 = pfVar3[2] * *(float *)(this_ptr + 0x94);
            fVar1 = *(float *)(this_ptr + 0x90);
            uVar23 = -(uint)(fVar35 < 0.0);
            fVar35 = (float)(~uVar23 & (uint)fVar35 | ((uint)fVar35 ^ uVar10) & uVar23);
            if (fVar1 < fVar35) {
              fVar35 = (fVar9 - fVar9 / ((fVar9 / (fVar9 - fVar1)) * (fVar35 - fVar1) + fVar9)) *
                       (fVar9 - fVar1) + fVar1;
            }
            puVar4[2] = ~uVar23 & (uint)fVar35 | ((uint)fVar35 ^ uVar10) & uVar23;
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar14 != uVar15);
    }
    else {
      uVar22 = (uint64_t)(param_1 - 1U) + 1;
      uVar15 = uVar22 & 0xfffffffffffffffc;
      uVar21 = 0;
      fVar1 = (float)g_023b2d50;
      fVar35 = g_023b2d50._4_4_;
      fVar7 = g_023b2d50._8_4_;
      fVar8 = g_023b2d50._12_4_;
      do {
        uVar5 = *(uint64_t *)(arg1 + uVar21 * 8);
        uVar6 = *(uint64_t *)(param_2 + uVar21 * 8);
        uVar20 = uVar6 + uVar22 * 4;
        uVar16 = uVar5;
        uVar18 = uVar6;
        iVar19 = param_1;
        if ((uVar6 < uVar5 + uVar22 * 4 && uVar5 < uVar20) ||
           (uVar6 < this_ptr + 0x98U && this_ptr + 0x90U < uVar20)) {
LAB_00bbc989:
          lVar17 = 0;
          do {
            fVar29 = *(float *)(uVar16 + lVar17 * 4) * *(float *)(this_ptr + 0x94);
            fVar2 = *(float *)(this_ptr + 0x90);
            uVar24 = -(uint)(fVar29 < 0.0);
            fVar29 = (float)(~uVar24 & (uint)fVar29 | ((uint)fVar29 ^ uVar10) & uVar24);
            if (fVar2 < fVar29) {
              fVar29 = (fVar9 - fVar9 / ((fVar9 / (fVar9 - fVar2)) * (fVar29 - fVar2) + fVar9)) *
                       (fVar9 - fVar2) + fVar2;
            }
            *(uint *)(uVar18 + lVar17 * 4) =
                 ~uVar24 & (uint)fVar29 | ((uint)fVar29 ^ uVar10) & uVar24;
            lVar17 = lVar17 + 1;
          } while (iVar19 != (int)lVar17);
        }
        else {
          uVar18 = uVar6 + uVar15 * 4;
          uVar16 = uVar5 + uVar15 * 4;
          fVar2 = *(float *)(this_ptr + 0x94);
          fVar29 = *(float *)(this_ptr + 0x90);
          fVar34 = fVar9 - fVar29;
          fVar33 = fVar9 / fVar34;
          uVar20 = 0;
          do {
            pfVar3 = (float *)(uVar5 + uVar20 * 4);
            auVar26._0_4_ = *pfVar3 * fVar2;
            auVar26._4_4_ = pfVar3[1] * fVar2;
            auVar26._8_4_ = pfVar3[2] * fVar2;
            auVar26._12_4_ = pfVar3[3] * fVar2;
            auVar30._0_4_ = (uint)auVar26._0_4_ ^ uVar10;
            auVar30._4_4_ = (uint)auVar26._4_4_ ^ uVar23;
            auVar30._8_4_ = (uint)auVar26._8_4_ ^ uVar11;
            auVar30._12_4_ = (uint)auVar26._12_4_ ^ uVar12;
            auVar27._4_4_ = -(uint)(auVar26._4_4_ < 0.0);
            auVar27._0_4_ = -(uint)(auVar26._0_4_ < 0.0);
            auVar27._8_4_ = -(uint)(auVar26._8_4_ < 0.0);
            auVar27._12_4_ = -(uint)(auVar26._12_4_ < 0.0);
            auVar27 = blendvps(auVar26,auVar30,auVar27);
            auVar25._4_4_ = -(uint)(auVar27._4_4_ <= fVar29);
            auVar25._0_4_ = -(uint)(auVar27._0_4_ <= fVar29);
            auVar25._8_4_ = -(uint)(auVar27._8_4_ <= fVar29);
            auVar25._12_4_ = -(uint)(auVar27._12_4_ <= fVar29);
            auVar31._0_4_ = (auVar27._0_4_ - fVar29) * fVar33 + fVar1;
            auVar31._4_4_ = (auVar27._4_4_ - fVar29) * fVar33 + fVar35;
            auVar31._8_4_ = (auVar27._8_4_ - fVar29) * fVar33 + fVar7;
            auVar31._12_4_ = (auVar27._12_4_ - fVar29) * fVar33 + fVar8;
            auVar36 = divps(auVar13,auVar31);
            auVar32._0_4_ = (fVar1 - auVar36._0_4_) * fVar34 + fVar29;
            auVar32._4_4_ = (fVar35 - auVar36._4_4_) * fVar34 + fVar29;
            auVar32._8_4_ = (fVar7 - auVar36._8_4_) * fVar34 + fVar29;
            auVar32._12_4_ = (fVar8 - auVar36._12_4_) * fVar34 + fVar29;
            auVar27 = blendvps(auVar32,auVar27,auVar25);
            auVar28._0_4_ = auVar27._0_4_ ^ uVar10;
            auVar28._4_4_ = auVar27._4_4_ ^ uVar23;
            auVar28._8_4_ = auVar27._8_4_ ^ uVar11;
            auVar28._12_4_ = auVar27._12_4_ ^ uVar12;
            auVar36._4_4_ = -(uint)(auVar26._4_4_ < 0.0);
            auVar36._0_4_ = -(uint)(auVar26._0_4_ < 0.0);
            auVar36._8_4_ = -(uint)(auVar26._8_4_ < 0.0);
            auVar36._12_4_ = -(uint)(auVar26._12_4_ < 0.0);
            auVar27 = blendvps(auVar27,auVar28,auVar36);
            *(uint8_t (*) [16])(uVar6 + uVar20 * 4) = auVar27;
            uVar20 = uVar20 + 4;
          } while (uVar15 != uVar20);
          iVar19 = param_1 - (int)uVar15;
          if (uVar22 != uVar15) goto LAB_00bbc989;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar14);
    }
  }
  return;
}



// ============================================================
// 00bb72e0
// ============================================================
// Function: FUN_00bb72e0
// Address: 00bb72e0
// Size: 1601 bytes
// Class: GNSoundFileChunk
// String references:
//   "GNSoundFileChunk"
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


int FUN_00bb72e0(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int64_t **pplVar8;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int local_7c;
  int64_t local_78;
  char local_70;
  int local_54;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  int local_38;
  
  if (*arg1 == 0) {
    iVar4 = 0;
  }
  else {
    local_48 = '\0';
    local_50 = 0;
    local_40 = *(int64_t *)(*arg1 + 0x10);
    local_38 = 0;
    if (*(int *)(local_40 + 0xc) < 1) {
      local_54 = 0;
    }
    else {
      local_54 = 0;
      do {
        local_50 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + (int64_t)local_38 * 8);
        param_1 = FUN_00e6fcd0((int64_t)local_38,&local_50);
        plVar1 = local_e0;
        if ((g_0272bc70 == '\0') &&
           (iVar4 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_00, iVar4 != 0)) {
          g_02765778 = FUN_00d4fe50();
          g_02765760 = "GNSoundFileChunk";
          g_02765768 = 0x10;
          g_02765770 = FUN_007b4610;
          g_02765780 = 0;
          ram_0000000002765788 = 0;
          g_02765790 = 0;
          ram_0000000002765798 = 0;
          g_027657a0 = 0;
          ram_00000000027657a8 = 0;
          g_027657b0 = 0;
          ram_00000000027657b8 = 0;
          g_027657c0 = 0;
          ram_00000000027657c8 = 0;
          g_027657d0 = 0;
          ram_00000000027657d8 = 0;
          g_027657e0 = 0;
          ram_00000000027657e8 = 0;
          g_027657f0 = 0;
          ram_00000000027657f8 = 0;
          g_02765800 = 0;
          ram_0000000002765808 = 0;
          g_02765810 = 0;
          ram_0000000002765818 = 0;
          g_02765820 = 0;
          param_1 = ___cxa_guard_release();
        }
        pplVar8 = (int64_t **)&g_02802688;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar8 = &local_e0;
          param_1 = extraout_XMM0_Da;
          if (cVar3 == '\0') {
            pplVar8 = (int64_t **)&g_02802688;
          }
        }
        plVar1 = *pplVar8;
        if (*(char *)(pplVar8 + 1) == '\0') {
          if (plVar1 != (int64_t *)0x0) {
            param_1 = FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar8 + 1) = 0;
        }
        if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
          param_1 = FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          local_70 = 0;
          lVar2 = *(int64_t *)(this_ptr + 0x18);
          if (lVar2 != 0) {
            param_1 = FUN_00d50b00();
          }
          local_70 = '\x01';
          local_78 = lVar2;
          iVar4 = FUN_00bc0a20(param_1,2);
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          param_1 = FUN_00d50b20();
          local_54 = local_54 + iVar4;
        }
        local_38 = local_38 + 1;
      } while (local_38 < *(int *)(local_40 + 0xc));
      if ((local_48 != '\0') && (local_50 != 0)) {
        param_1 = FUN_00d50b20();
      }
    }
    lVar2 = g_02764940;
    if (g_02764940 != 0) {
      param_1 = FUN_00d50b00();
    }
    local_d0 = lVar2;
    local_c8 = '\x01';
    FUN_000175c0(param_1,&local_d0);
    lVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    iVar5 = FUN_00bb4330();
    uVar9 = extraout_XMM0_Da_01;
    if (lVar2 != 0) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    lVar2 = g_02765308;
    if (g_02765308 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_c0 = lVar2;
    local_b8 = '\x01';
    FUN_000175c0(uVar9,&local_c0);
    lVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    iVar6 = FUN_00bb06e0();
    uVar9 = extraout_XMM0_Da_02;
    if (lVar2 != 0) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    lVar2 = g_02765348;
    if (g_02765348 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_b0 = lVar2;
    local_a8 = '\x01';
    FUN_000175c0(uVar9,&local_b0);
    lVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    iVar7 = FUN_00bb43f0();
    uVar9 = extraout_XMM0_Da_03;
    if (lVar2 != 0) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    lVar2 = g_02765268;
    if (g_02765268 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_a0 = lVar2;
    local_98 = '\x01';
    FUN_000175c0(uVar9,&local_a0);
    lVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_7c = FUN_00bb6a00();
    uVar9 = extraout_XMM0_Da_04;
    if (lVar2 != 0) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    lVar2 = g_02765270;
    if (g_02765270 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_90 = lVar2;
    local_88 = '\x01';
    FUN_000175c0(uVar9,&local_90);
    lVar2 = local_50;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    iVar4 = FUN_00bb5b50();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    iVar4 = iVar5 + local_54 + iVar6 + iVar7 + local_7c + iVar4;
  }
  return iVar4;
}



// ============================================================
// 00bc7570
// ============================================================
// Function: FUN_00bc7570
// Address: 00bc7570
// Size: 806 bytes
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


uint64_t FUN_00bc7570(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  char cVar7;
  uint uVar8;
  uint64_t uVar9;
  int iVar10;
  int64_t *arg1;
  int64_t lVar11;
  int64_t this_ptr;
  int64_t lVar12;
  uint64_t uVar13;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint local_838 [2];
  int64_t local_830 [255];
  int64_t local_38;
  int iVar22;
  int iVar23;
  int iVar24;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_838[0] = FUN_00e31390();
  do {
    while( true ) {
      if ((local_838[0] & 10) != 8) {
        if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
          return 0;
        }
        goto LAB_00bc7883;
      }
      if ((local_838[0] & 4) == 0) break;
      FUN_00da6800();
      local_838[0] = FUN_00e31390();
    }
    cVar7 = FUN_00e314a0(2,local_838[0] & 0xfffffff3 | 4);
  } while (cVar7 == '\0');
  lVar2 = *(int64_t *)(*arg1 + 0x18);
  uVar8 = FUN_00b7a700();
  iVar1 = *(int *)(this_ptr + 0x20);
  if ((int)uVar8 < 1) goto LAB_00bc77fa;
  if (uVar8 < 4) {
    uVar9 = 0;
  }
  else {
    uVar9 = (uint64_t)(uVar8 & 0xfffffffc);
    uVar13 = (uVar9 - 4 >> 2) + 1;
    if (uVar9 - 4 == 0) {
      lVar11 = 0;
      auVar14 = g_02392fe0;
LAB_00bc7785:
      auVar5._4_4_ = iVar1;
      auVar5._0_4_ = iVar1;
      auVar5._8_8_ = 0;
      auVar19 = pmulld(auVar5,auVar14);
      auVar16._0_4_ = auVar14._0_4_ + g_023d92d0;
      auVar16._4_4_ = auVar14._4_4_ + _UNK_023d92d4;
      auVar16._8_4_ = auVar14._8_4_ + _UNK_023d92d8;
      auVar16._12_4_ = auVar14._12_4_ + _UNK_023d92dc;
      auVar6._4_4_ = iVar1;
      auVar6._0_4_ = iVar1;
      auVar6._8_8_ = 0;
      auVar17 = pmulld(auVar16,auVar6);
      auVar14 = pmovsxdq(auVar19,auVar19);
      auVar19 = pmovsxdq(auVar17,auVar17);
      auVar21._8_4_ = (int)lVar2;
      auVar21._0_8_ = lVar2;
      auVar21._12_4_ = (int)((uint64_t)lVar2 >> 0x20);
      *(int64_t *)(local_838 + lVar11 * 2) = auVar14._0_8_ * 4 + lVar2;
      local_830[lVar11] = auVar14._8_8_ * 4 + auVar21._8_8_;
      local_830[lVar11 + 1] = auVar19._0_8_ * 4 + lVar2;
      local_830[lVar11 + 2] = auVar19._8_8_ * 4 + auVar21._8_8_;
    }
    else {
      lVar12 = -(uVar13 & 0xfffffffffffffffe);
      lVar11 = 0;
      auVar14 = g_02392fe0;
      do {
        iVar10 = auVar14._0_4_;
        auVar18._0_4_ = iVar10 + g_023d92d0;
        iVar22 = auVar14._4_4_;
        auVar18._4_4_ = iVar22 + _UNK_023d92d4;
        iVar23 = auVar14._8_4_;
        iVar24 = auVar14._12_4_;
        auVar18._8_4_ = iVar23 + _UNK_023d92d8;
        auVar18._12_4_ = iVar24 + _UNK_023d92dc;
        auVar19._4_4_ = iVar1;
        auVar19._0_4_ = iVar1;
        auVar19._8_8_ = 0;
        auVar14 = pmulld(auVar19,auVar14);
        auVar17._4_4_ = iVar1;
        auVar17._0_4_ = iVar1;
        auVar17._8_8_ = 0;
        auVar19 = pmulld(auVar18,auVar17);
        auVar14 = pmovsxdq(auVar14,auVar14);
        auVar19 = pmovsxdq(auVar19,auVar19);
        *(int64_t *)(local_838 + lVar11 * 2) = auVar14._0_8_ * 4 + lVar2;
        local_830[lVar11] = auVar14._8_8_ * 4 + lVar2;
        local_830[lVar11 + 1] = auVar19._0_8_ * 4 + lVar2;
        local_830[lVar11 + 2] = auVar19._8_8_ * 4 + lVar2;
        auVar15._0_4_ = iVar10 + g_023d92e0;
        auVar15._4_4_ = iVar22 + _UNK_023d92e4;
        auVar15._8_4_ = iVar23 + _UNK_023d92e8;
        auVar15._12_4_ = iVar24 + _UNK_023d92ec;
        auVar20._0_4_ = iVar10 + g_023d92f0;
        auVar20._4_4_ = iVar22 + _UNK_023d92f4;
        auVar20._8_4_ = iVar23 + _UNK_023d92f8;
        auVar20._12_4_ = iVar24 + _UNK_023d92fc;
        auVar3._4_4_ = iVar1;
        auVar3._0_4_ = iVar1;
        auVar3._8_8_ = 0;
        auVar14 = pmulld(auVar15,auVar3);
        auVar4._4_4_ = iVar1;
        auVar4._0_4_ = iVar1;
        auVar4._8_8_ = 0;
        auVar19 = pmulld(auVar20,auVar4);
        auVar14 = pmovsxdq(auVar14,auVar14);
        auVar19 = pmovsxdq(auVar19,auVar19);
        local_830[lVar11 + 3] = auVar14._0_8_ * 4 + lVar2;
        local_830[lVar11 + 4] = auVar14._8_8_ * 4 + lVar2;
        local_830[lVar11 + 5] = auVar19._0_8_ * 4 + lVar2;
        local_830[lVar11 + 6] = auVar19._8_8_ * 4 + lVar2;
        lVar11 = lVar11 + 8;
        auVar14._0_4_ = iVar10 + g_02410ff0;
        auVar14._4_4_ = iVar22 + _UNK_02410ff4;
        auVar14._8_4_ = iVar23 + _UNK_02410ff8;
        auVar14._12_4_ = iVar24 + _UNK_02410ffc;
        lVar12 = lVar12 + 2;
      } while (lVar12 != 0);
      if ((uVar13 & 1) != 0) goto LAB_00bc7785;
    }
    if (uVar9 == uVar8) goto LAB_00bc77fa;
  }
  iVar10 = iVar1 * (int)uVar9;
  do {
    *(int64_t *)(local_838 + uVar9 * 2) = lVar2 + (int64_t)iVar10 * 4;
    uVar9 = uVar9 + 1;
    iVar10 = iVar10 + iVar1;
  } while (uVar8 != uVar9);
LAB_00bc77fa:
  FUN_00b87840(iVar1,param_2);
  uVar8 = FUN_00e31390();
  cVar7 = FUN_00e314a0(3,uVar8 & 0xfffffffb);
  while (cVar7 == '\0') {
    cVar7 = FUN_00e314a0(3,uVar8 & 0xfffffffb);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return 1;
  }
LAB_00bc7883:
                      ___stack_chk_fail();
}



// ============================================================
// 00bbb2b0
// ============================================================
// Function: FUN_00bbb2b0
// Address: 00bbb2b0
// Size: 1164 bytes
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


void FUN_00bbb2b0(uint64_t param_1)

{
  void*puVar1;
  int64_t lVar2;
  int64_t *plVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  local_a0 = '\0';
  local_a8 = 0;
  FUN_01e56280(param_1,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e5c730();
  FUN_01e5c680();
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(plVar3 + 0x27) = 0;
  plVar3[0x2e] = 0;
  *(void*)(plVar3 + 0x2f) = 0;
  plVar3[0x30] = 0;
  *(void*)(plVar3 + 0x31) = 0;
  plVar3[0x28] = 0;
  plVar3[0x29] = 0;
  *(void*)(plVar3 + 0x2a) = 0;
  plVar3[0x2b] = 0;
  plVar3[0x2c] = 0;
  *(void*)((int64_t)plVar3 + 0x165) = 0;
  *(void*)((int64_t)plVar3 + 0x18c) = 0;
  *(void*)((int64_t)plVar3 + 0x194) = 0;
  *(void*)((int64_t)plVar3 + 0x199) = 0;
  plVar3[0x35] = 0;
  plVar3[0x36] = 0;
  plVar3[0x37] = 0;
  plVar3[0x38] = 0;
  *plVar3 = (int64_t)&g_02683800;
  plVar3[2] = (int64_t)&g_026842c8;
  plVar3[0x39] = 0;
  plVar3[0x3a] = 0;
  (*g_02683818)();
  (**(code **)(*plVar3 + 0x4d0))(g_023d90e0,g_023d90f0);
  local_98 = g_02765440;
  if (g_02765440 != 0) {
    FUN_00d50b00();
  }
  local_90 = '\x01';
  (**(code **)(*plVar3 + 0x958))();
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  local_80 = '\0';
  local_88 = plVar3;
  FUN_01e5c8b0();
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar4 + 0x27) = 0;
  puVar4[0x2e] = 0;
  *(void*)(puVar4 + 0x2f) = 0;
  puVar4[0x30] = 0;
  *(void*)(puVar4 + 0x31) = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  *(void*)(puVar4 + 0x2a) = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  *(void*)((int64_t)puVar4 + 0x165) = 0;
  *(void*)((int64_t)puVar4 + 0x18c) = 0;
  *(void*)((int64_t)puVar4 + 0x194) = 0;
  *(void*)((int64_t)puVar4 + 0x199) = 0;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0;
  puVar4[0x38] = 0;
  *puVar4 = &g_02686ea8;
  puVar4[2] = &g_02687970;
  *(void*)(puVar4 + 0x39) = 0;
  (*g_02686ec0)();
  puVar1 = *(void**)(this_ptr + 0x80);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x80) = puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x4d0))(g_023d9100,g_023d9110);
  local_40 = 0;
  local_48 = *(int64_t *)(this_ptr + 0x80);
  if (local_48 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\x01';
  FUN_01e5c8b0();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x938))();
  (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x948))();
  (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x918))();
  FUN_01e5bc80(g_023d9120);
  local_78 = g_02765448;
  if (g_02765448 != 0) {
    FUN_00d50b00();
  }
  local_70 = '\x01';
  FUN_01e5a050();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02765450;
  if (g_02765450 != 0) {
    FUN_00d50b00();
  }
  local_68 = lVar2;
  local_60 = '\x01';
  FUN_00d50b00();
  FUN_01e1ea80((int)g_0238fee8,&stack0xffffffffffffffc8);
  lVar2 = *(int64_t *)(this_ptr + 0x90);
  lVar5 = lVar2;
  if (lVar2 == local_58) goto LAB_00bbb6dd;
  if (local_50 == '\0') {
    if (local_58 == 0) {
      lVar5 = 0;
      goto LAB_00bbb692;
    }
    FUN_00d50b00();
    lVar2 = *(int64_t *)(this_ptr + 0x90);
    *(int64_t *)(this_ptr + 0x90) = local_58;
    lVar5 = local_58;
  }
  else {
    local_50 = '\0';
    lVar5 = local_58;
LAB_00bbb692:
    *(int64_t *)(this_ptr + 0x90) = lVar5;
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
    lVar5 = local_58;
  }
LAB_00bbb6dd:
  if ((local_50 != '\0') && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00bbb940();
  FUN_00d50b20();
  return;
}



// ============================================================
// 00bb9440
// ============================================================
// Function: FUN_00bb9440
// Address: 00bb9440
// Size: 1125 bytes
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


void FUN_00bb9440(void)

{
  bool bVar1;
  void*puVar2;
  int unaff_ESI;
  void*this_ptr;
  void*puVar3;
  int64_t local_c0;
  int64_t local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  void*local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  void*local_40;
  char local_38;
  
  if (unaff_ESI == 6) {
    FUN_00d46530();
    FUN_00d46530();
    FUN_00d46530();
    local_c0 = local_a0;
    local_b8 = local_90;
    FUN_002bd7b0(&local_b8,&local_c0,3);
    FUN_00295b80();
    puVar3 = local_40;
    if (local_40 == (void*)0x0) {
      puVar3 = (void*)0x0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    local_80 = (void*)&g_025df260;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_80 = (void*)&g_0253d630;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    local_80 = &g_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    if (bVar1 || puVar3 == (void*)0x0) goto LAB_00bb96b1;
  }
  else {
    FUN_00d46530();
    FUN_00d46530();
    FUN_00d46530();
    local_c0 = local_a0;
    local_b8 = local_90;
    FUN_002bd7b0(&local_b8,&local_c0,3);
    FUN_00295b80();
    puVar3 = local_40;
    if (local_40 == (void*)0x0) {
      puVar3 = (void*)0x0;
      bVar1 = false;
    }
    else {
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_38 == '\0') || (local_40 == (void*)0x0)) goto LAB_00bb96f3;
        FUN_00d50b20();
      }
      else {
        local_38 = '\0';
      }
      bVar1 = true;
    }
LAB_00bb96f3:
    local_80 = (void*)&g_025df260;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_80 = (void*)&g_0253d630;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    local_80 = &g_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_ESI == 2) {
      FUN_00d46530();
      puVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_80 = puVar2;
      local_78 = '\0';
      FUN_00d21140();
      if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d46530();
      puVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_80 = puVar2;
      local_78 = '\0';
      FUN_00d21140();
      if ((local_78 != '\0') && (local_80 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(this_ptr + 1) = 0;
    if (bVar1 || puVar3 == (void*)0x0) goto LAB_00bb96b1;
  }
  FUN_00d50b00();
LAB_00bb96b1:
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00bb9c80
// ============================================================
// Function: FUN_00bb9c80
// Address: 00bb9c80
// Size: 737 bytes
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


void FUN_00bb9c80(uint32_t param_1,uint32_t param_2,uint32_t param_3,int64_t *param_4)

{
  int64_t lVar1;
  void*puVar2;
  int64_t *plVar3;
  uint32_t in_ECX;
  void*this_ptr;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_38;
  uint32_t local_34;
  
  lVar1 = g_02764880;
  local_38 = param_3;
  local_34 = in_ECX;
  switch(param_2) {
  case 1:
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(void*)(plVar3 + 4) = 0;
    puVar2 = &g_02543f20;
    goto LAB_00bb9dec;
  case 2:
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(void*)(plVar3 + 4) = 0;
    puVar2 = &g_025446f0;
    *plVar3 = (int64_t)&g_02544700;
    *(void*)(plVar3 + 9) = 0;
    plVar3[10] = 0;
    plVar3[0xb] = 0;
    *(void*)((int64_t)plVar3 + 0x5e) = 0;
    plVar3[0xd] = 0;
    plVar3[0xe] = 0;
    break;
  case 3:
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(void*)(plVar3 + 4) = 0;
    puVar2 = &g_025415e8;
    goto LAB_00bb9dec;
  default:
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_48 = lVar1;
    local_40 = '\x01';
    FUN_00cc78b0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    plVar3 = (int64_t *)0x0;
    goto LAB_00bb9f13;
  case 5:
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(void*)(plVar3 + 4) = 0;
    puVar2 = &g_0254c838;
LAB_00bb9dec:
    *plVar3 = (int64_t)(puVar2 + 0x10);
    plVar3[9] = 0;
    break;
  case 6:
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(void*)(plVar3 + 4) = 0;
    plVar3[0xb] = 0;
    plVar3[0xc] = 0;
    plVar3[0xd] = 0;
    plVar3[0xe] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    *(void*)((int64_t)plVar3 + 0x44) = 0;
    *(void*)((int64_t)plVar3 + 0x4c) = 0;
    puVar2 = &g_0252c908;
    *plVar3 = (int64_t)&g_0252c918;
    break;
  case 9:
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(void*)(plVar3 + 4) = 0;
    plVar3[0xb] = 0;
    plVar3[0xc] = 0;
    plVar3[0xd] = 0;
    plVar3[0xe] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    *(void*)((int64_t)plVar3 + 0x44) = 0;
    *(void*)((int64_t)plVar3 + 0x4c) = 0;
    puVar2 = &g_02538900;
    *plVar3 = (int64_t)&g_02538910;
    plVar3[0x13] = 0;
    *(void*)(plVar3 + 0x14) = 0;
    plVar3[0x10] = 0;
    plVar3[0x11] = 0;
    *(void*)(plVar3 + 0x12) = 0;
    break;
  case 10:
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar3[2] = 0;
    *plVar3 = (int64_t)&g_02545278;
    FUN_00d500e0();
    goto LAB_00bb9eb1;
  }
  (**(code **)(puVar2 + 0x28))();
LAB_00bb9eb1:
  local_58 = *param_4;
  local_50 = '\0';
  (**(code **)(*plVar3 + 0x368))(param_1,param_2,local_38,&local_58);
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_00bb9f13:
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00bc35d0
// ============================================================
// Function: FUN_00bc35d0
// Address: 00bc35d0
// Size: 1000 bytes
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


void FUN_00bc35d0(void)

{
  int64_t *plVar1;
  int64_t arg1;
  int64_t *this_ptr;
  uint32_t uVar2;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_38;
  char local_30;
  
  FUN_00c8e690();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar1 = (int64_t)&g_0256d868;
  plVar1[2] = 0;
  *(void*)((int64_t)plVar1 + 0x1c) = 0;
  *(void*)((int64_t)plVar1 + 0x24) = 0;
  *(void*)((int64_t)plVar1 + 0x2c) = 0;
  (*g_0256d880)();
  FUN_00cccf90();
  uVar2 = FUN_00ccce80();
  uVar2 = FUN_00ccdee0(uVar2,*(void*)(arg1 + 0xc));
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  uVar2 = FUN_00ccdee0(uVar2,*(void*)(arg1 + 0x10));
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  uVar2 = FUN_00ccdee0(uVar2,*(void*)(arg1 + 0x14));
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  uVar2 = FUN_00ccdee0(uVar2,*(void*)(arg1 + 0x18));
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  uVar2 = FUN_00ccdee0(uVar2,*(void*)(arg1 + 0x1c));
  if ((local_90 != '\0') && (local_98 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  uVar2 = FUN_00ccdee0(uVar2,*(void*)(arg1 + 0x20));
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  uVar2 = FUN_00ccdf10(uVar2,(int)*(short *)(arg1 + 0x24));
  if ((local_70 != '\0') && (local_78 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  uVar2 = FUN_00ccdee0(uVar2,0);
  if ((local_30 != '\0') && (local_38 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  uVar2 = FUN_00ccdee0(uVar2,0);
  if ((local_30 != '\0') && (local_38 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  uVar2 = FUN_00ccdee0(uVar2,0);
  if ((local_30 != '\0') && (local_38 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  uVar2 = FUN_00ccdee0(uVar2,0);
  if ((local_30 != '\0') && (local_38 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  uVar2 = FUN_00ccdee0(uVar2,0);
  if ((local_30 != '\0') && (local_38 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  uVar2 = FUN_00ccdee0(uVar2,0);
  if ((local_30 != '\0') && (local_38 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  uVar2 = FUN_00ccdee0(uVar2,0);
  if ((local_30 != '\0') && (local_38 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  uVar2 = FUN_00ccdee0(uVar2,0);
  if ((local_30 != '\0') && (local_38 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  uVar2 = FUN_00ccdee0(uVar2,0);
  if ((local_30 != '\0') && (local_38 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  uVar2 = FUN_00ccdee0(uVar2,0);
  if ((local_30 != '\0') && (local_38 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  uVar2 = FUN_00ccdee0(uVar2,0);
  if ((local_30 != '\0') && (local_38 != 0)) {
    uVar2 = FUN_00d50b20();
  }
  FUN_00ccdee0(uVar2,0);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar1 + 0x368))();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = local_58;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return;
}



// ============================================================
// 00bc1590
// ============================================================
// Function: FUN_00bc1590
// Address: 00bc1590
// Size: 775 bytes
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


void FUN_00bc1590(void)

{
  int64_t lVar1;
  int iVar2;
  void*puVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  uint8_t local_6c [4];
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  uint32_t local_34;
  short local_2e;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  uint8_t local_24 [4];
  
  lVar1 = g_02765700;
  if (*arg1 == 0) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    FUN_00cc78b0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_02764880;
  if (*(int *)(*arg1 + 0x18) != 0x54) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_58 = lVar1;
    local_50 = '\x01';
    FUN_00cc78b0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_0256d868;
  puVar3[2] = 0;
  *(void*)((int64_t)puVar3 + 0x1c) = 0;
  *(void*)((int64_t)puVar3 + 0x24) = 0;
  *(void*)((int64_t)puVar3 + 0x2c) = 0;
  (*g_0256d880)();
  local_48 = *arg1;
  local_40 = '\0';
  FUN_00cccfe0();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccce80();
  FUN_00ccd540(local_24,local_6c);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd540(local_24,&local_34);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_24,&local_2e);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_24,&local_2c);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_24,&local_2a);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_24,&local_28);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_24,&local_26);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x18) = local_34;
  *(int *)(this_ptr + 0x10) = (int)local_2a;
  *(int *)(this_ptr + 0x14) = (int)local_28;
  if (local_26 == 2) {
    if (*(char *)(this_ptr + 0xc) == '\0') {
      *(void*)(this_ptr + 0x18) = 0;
    }
  }
  else {
    *(void*)(this_ptr + 0xc) = 1;
  }
  iVar2 = (int)local_2c;
  switch(iVar2) {
  case 1:
    break;
  case 2:
    iVar2 = 2;
    break;
  default:
    *(void*)(this_ptr + 0x20) = 0;
    goto LAB_00bc181f;
  case 4:
    *(void*)(this_ptr + 0x20) = 3;
    if (local_2e == 0) goto LAB_00bc181f;
    goto LAB_00bc187a;
  }
  *(int *)(this_ptr + 0x20) = iVar2;
  if (local_2e == 0) {
LAB_00bc181f:
    iVar2 = 0;
  }
  else {
LAB_00bc187a:
    iVar2 = local_2e + -0x30;
  }
  *(int *)(this_ptr + 0x1c) = iVar2;
  FUN_00d50b20();
  return;
}



// ============================================================
// 00bc1160
// ============================================================
// Function: FUN_00bc1160
// Address: 00bc1160
// Size: 792 bytes
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


void FUN_00bc1160(void)

{
  int iVar1;
  int64_t lVar2;
  void*puVar3;
  byte bVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  uint8_t local_78 [4];
  uint8_t local_74 [4];
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  uint8_t local_3e [2];
  uint local_3c;
  uint32_t local_38;
  short local_32;
  short local_30;
  short local_2e;
  uint8_t local_2c [4];
  
  lVar2 = g_02765700;
  if (*arg1 == 0) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    local_70 = lVar2;
    local_68 = '\x01';
    FUN_00cc78b0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = g_02764880;
  if (*(int *)(*arg1 + 0x18) != 0x18) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar2;
    local_58 = '\x01';
    FUN_00cc78b0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_0256d868;
  puVar3[2] = 0;
  *(void*)((int64_t)puVar3 + 0x1c) = 0;
  *(void*)((int64_t)puVar3 + 0x24) = 0;
  *(void*)((int64_t)puVar3 + 0x2c) = 0;
  (*g_0256d880)();
  local_50 = *arg1;
  local_48 = '\0';
  FUN_00cccfe0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccce80();
  FUN_00ccd540(local_2c,&local_3c);
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_2c,&local_32);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_2c,local_3e);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd7e0(local_2c,local_78);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd540(local_2c,&local_38);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_2c,&local_2e);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd330(local_2c,&local_30);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccd7e0(local_2c,local_74);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x18) = local_38;
  *(int *)(this_ptr + 0x10) = (int)local_30;
  *(int *)(this_ptr + 0x14) = (int)local_2e;
  bVar4 = local_32 != 0 & (byte)local_3c >> 1;
  *(uint *)(this_ptr + 0x20) = (uint)bVar4 + (uint)bVar4 * 2;
  if ((local_3c & 1) == 0) {
    *(void*)(this_ptr + 0xc) = 1;
  }
  else {
    *(void*)(this_ptr + 0x18) = 0;
  }
  iVar1 = local_32 + -0x30;
  if (local_32 == 0) {
    iVar1 = 0;
  }
  if (bVar4 == 0) {
    iVar1 = 0;
  }
  *(int *)(this_ptr + 0x1c) = iVar1;
  FUN_00d50b20();
  return;
}



// ============================================================
// 00bbcce0
// ============================================================
// Function: FUN_00bbcce0
// Address: 00bbcce0
// Size: 868 bytes
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


void FUN_00bbcce0(void)

{
  void*puVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t this_ptr;
  int64_t local_28;
  char local_20;
  
  FUN_00b31790();
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar3 + 0x7c) = 0;
  *(void*)((int64_t)puVar3 + 0x84) = 0;
  *(void*)((int64_t)puVar3 + 0x6c) = 0;
  *(void*)((int64_t)puVar3 + 0x74) = 0;
  *(void*)((int64_t)puVar3 + 0x5c) = 0;
  *(void*)((int64_t)puVar3 + 100) = 0;
  *(void*)((int64_t)puVar3 + 0x4c) = 0;
  *(void*)((int64_t)puVar3 + 0x54) = 0;
  *(void*)((int64_t)puVar3 + 0x3c) = 0;
  *(void*)((int64_t)puVar3 + 0x44) = 0;
  *(void*)((int64_t)puVar3 + 0x2c) = 0;
  *(void*)((int64_t)puVar3 + 0x34) = 0;
  *(void*)((int64_t)puVar3 + 0x1c) = 0;
  *(void*)((int64_t)puVar3 + 0x24) = 0;
  *(void*)((int64_t)puVar3 + 0xc) = 0;
  *(void*)((int64_t)puVar3 + 0x14) = 0;
  *(void*)((int64_t)puVar3 + 0x8c) = 0;
  *puVar3 = &g_025357a0;
  (*g_025357b8)();
  puVar1 = *(void**)(this_ptr + 0xd0);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xd0) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00b38ef0(g_02393944);
  FUN_00b38f30(g_02390124);
  FUN_00c8e690();
  if ((local_20 == '\0') && (local_28 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar2 = *(int64_t *)(this_ptr + 0xa8);
  if (lVar2 == local_28) {
    FUN_00d50b20();
  }
  else {
    *(int64_t *)(this_ptr + 0xa8) = local_28;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_20 == '\0') && (local_28 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar2 = *(int64_t *)(this_ptr + 0xb0);
  if (lVar2 == local_28) {
    FUN_00d50b20();
  }
  else {
    *(int64_t *)(this_ptr + 0xb0) = local_28;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_20 == '\0') && (local_28 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar2 = *(int64_t *)(this_ptr + 0xb8);
  if (lVar2 == local_28) {
    FUN_00d50b20();
  }
  else {
    *(int64_t *)(this_ptr + 0xb8) = local_28;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_20 == '\0') && (local_28 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar2 = *(int64_t *)(this_ptr + 0xc0);
  if (lVar2 == local_28) {
    FUN_00d50b20();
  }
  else {
    *(int64_t *)(this_ptr + 0xc0) = local_28;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  if ((local_20 == '\0') && (local_28 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar2 = *(int64_t *)(this_ptr + 200);
  if (lVar2 == local_28) {
    FUN_00d50b20();
  }
  else {
    *(int64_t *)(this_ptr + 200) = local_28;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00bc7190
// ============================================================
// Function: FUN_00bc7190
// Address: 00bc7190
// Size: 905 bytes
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


void FUN_00bc7190(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int64_t lVar9;
  uint unaff_ESI;
  int64_t this_ptr;
  
  uVar6 = FUN_00e31390();
  bVar4 = -(uVar6 - unaff_ESI) < 0x80000001;
  if (unaff_ESI <= uVar6) {
    bVar4 = (int)(uVar6 - unaff_ESI) < 0;
  }
  if (bVar4) {
    return;
  }
  lVar1 = *(int64_t *)(this_ptr + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
    if (unaff_ESI < param_2) {
      if (0 < *(int *)(lVar1 + 0xc)) {
        bVar4 = true;
        lVar9 = 0;
        do {
          lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar9 * 8);
          iVar7 = FUN_00e31390();
          if (iVar7 != 0) goto LAB_00bc750c;
          if ((bVar4) && ((*(byte *)(lVar2 + 0x10) & 8) != 0)) {
            cVar5 = FUN_00bc7570();
            if (cVar5 == '\0') {
              bVar4 = false;
            }
          }
          iVar7 = FUN_00e31390();
          if ((((iVar7 == 0) && (*(int64_t *)(lVar2 + 0x18) != 0)) &&
              (uVar8 = FUN_00e31390(), unaff_ESI <= uVar8)) &&
             ((uVar8 < param_2 && (cVar5 = FUN_00e314a0(2,1), cVar5 != '\0')))) {
            lVar3 = *(int64_t *)(lVar2 + 0x18);
            *(void*)(lVar2 + 0x18) = 0;
            *(void*)(lVar2 + 0xc) = 0;
            FUN_00e313d0();
            if (lVar3 != 0) {
              FUN_00e83070();
            }
          }
          lVar9 = lVar9 + 1;
        } while ((int)lVar9 < *(int *)(lVar1 + 0xc));
      }
    }
    else if (0 < *(int *)(lVar1 + 0xc)) {
      bVar4 = true;
      lVar9 = 0;
      do {
        lVar2 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar9 * 8);
        iVar7 = FUN_00e31390();
        if (iVar7 != 0) goto LAB_00bc750c;
        if ((bVar4) && ((*(byte *)(lVar2 + 0x10) & 8) != 0)) {
          cVar5 = FUN_00bc7570();
          if (cVar5 == '\0') {
            bVar4 = false;
          }
        }
        iVar7 = FUN_00e31390();
        if ((((iVar7 == 0) && (*(int64_t *)(lVar2 + 0x18) != 0)) &&
            ((uVar8 = FUN_00e31390(), uVar8 < param_2 || (unaff_ESI <= uVar8)))) &&
           (cVar5 = FUN_00e314a0(2,1), cVar5 != '\0')) {
          lVar3 = *(int64_t *)(lVar2 + 0x18);
          *(void*)(lVar2 + 0x18) = 0;
          *(void*)(lVar2 + 0xc) = 0;
          FUN_00e313d0();
          if (lVar3 != 0) {
            FUN_00e83070();
          }
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *(int *)(lVar1 + 0xc));
    }
    FUN_00bcda50();
  }
  bVar4 = -(uVar6 - param_2) < 0x80000001;
  if (param_2 <= uVar6) {
    bVar4 = (int)(uVar6 - param_2) < 0;
  }
  if (bVar4) {
    FUN_00e314a0(0,unaff_ESI);
  }
joined_r0x00bc751b:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
LAB_00bc750c:
  FUN_00bcda50();
  goto joined_r0x00bc751b;
}



// ============================================================
// 00bb7ca0
// ============================================================
// Function: FUN_00bb7ca0
// Address: 00bb7ca0
// Size: 605 bytes
// Class: GNSoundFileChunk
// String references:
//   "CELE"
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


void FUN_00bb7ca0(uint64_t param_1)

{
  int64_t lVar1;
  int iVar2;
  int64_t this_ptr;
  int iVar3;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  uint8_t local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  byte local_68 [16];
  uint8_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  iVar3 = *(int *)(this_ptr + 0x38);
  iVar2 = FUN_00ae7ec0();
  iVar3 = iVar2 * iVar3 * *(int *)(this_ptr + 0x30);
  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x3a0))(param_1,0x28);
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccdf50(param_1,iVar3);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((*(int64_t *)(this_ptr + 0x70) != 0) || (*(int64_t *)(this_ptr + 0x58) != 0)) {
    (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x398))(param_1,local_68);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68[0] & 1) != 0) {
      FUN_00ccdee0(param_1,0);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      iVar3 = iVar3 + 1;
    }
    lVar1 = g_02765240;
    if (*(int64_t *)(this_ptr + 0x70) != 0) {
      if (g_02765240 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar1;
      local_48 = '\x01';
      FUN_000175c0(param_1,&local_50);
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_58 = 1;
      iVar2 = FUN_00bb72e0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      iVar3 = iVar3 + iVar2;
    }
    lVar1 = *(int64_t *)(this_ptr + 0x58);
    if (lVar1 != 0) {
      FUN_00d50b00();
      local_90 = 1;
      local_98 = lVar1;
      iVar2 = FUN_00bb0460(param_1,&local_98);
      FUN_00d50b20();
      iVar3 = iVar3 + iVar2;
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x3a0))(param_1,4);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ccdf50(param_1,iVar3 + 0x24);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00bc6940
// ============================================================
// Function: FUN_00bc6940
// Address: 00bc6940
// Size: 597 bytes
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


void FUN_00bc6940(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int iVar8;
  int64_t this_ptr;
  void*puVar9;
  void*local_48;
  char local_40;
  
  lVar6 = FUN_00b7a710();
  uVar7 = lVar6 - 1;
  uVar4 = *(uint *)(this_ptr + 0x20);
  if ((uVar7 | (int64_t)(int)uVar4) >> 0x20 == 0) {
    uVar4 = (uint)((uVar7 & 0xffffffff) / (uint64_t)uVar4);
  }
  else {
    uVar4 = (uint)((int64_t)uVar7 / (int64_t)(int)uVar4);
  }
  iVar5 = uVar4 + 1;
  do {
    lVar6 = FUN_00e313b0();
    puVar9 = local_48;
    if (lVar6 == 0) {
      if (0x7ffffffe < uVar4) {
        return;
      }
      FUN_00bc70f0();
      iVar8 = 0;
      if (local_48 != (void*)0x0) {
        bVar2 = true;
        iVar8 = 0;
        if (local_40 == '\0') {
          FUN_00d50b00();
          iVar8 = 0;
        }
        goto LAB_00bc6abf;
      }
      puVar9 = (void*)0x0;
      bVar2 = false;
      if (0 < iVar5) goto LAB_00bc6ac5;
    }
    else {
      iVar8 = *(int *)(lVar6 + 0xc);
      if (iVar5 <= iVar8) {
        return;
      }
      FUN_00d50b00();
      FUN_00bc7000();
      if (local_48 == (void*)0x0) {
        puVar9 = (void*)0x0;
        bVar2 = false;
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        local_40 = '\0';
        bVar2 = true;
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      FUN_00d21370();
LAB_00bc6abf:
      if (iVar8 < iVar5) {
LAB_00bc6ac5:
        iVar8 = iVar5 - iVar8;
        do {
          local_48 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *local_48 = &g_0254a888;
          *(void*)((int64_t)local_48 + 0xc) = 0;
          local_48[2] = 0;
          local_48[3] = 0;
          FUN_00d500e0();
          local_40 = '\0';
          FUN_00d21140();
          FUN_00d50b20();
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    cVar3 = FUN_00e31450(3,puVar9);
    bVar1 = true;
    if (cVar3 != '\0') {
      FUN_00d50b00();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      bVar1 = false;
    }
    if ((bVar2) && (puVar9 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar1) {
      return;
    }
  } while( true );
}



// ============================================================
// 00bc61d0
// ============================================================
// Function: FUN_00bc61d0
// Address: 00bc61d0
// Size: 1096 bytes
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


void FUN_00bc61d0(void)

{
  uint8_t auVar1 [16];
  bool bVar2;
  code *pcVar3;
  int iVar4;
  void*puVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  double dVar10;
  int local_58;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  do {
    iVar4 = FUN_00e31390();
    if (iVar4 != 0) break;
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &g_02572358;
    (*pcVar3)();
    (**(code **)(*g_028a5710 + 0x368))();
    lVar8 = g_028a5700;
    if (g_028a5700 != 0) {
      FUN_00d50b00();
    }
    FUN_00d243f0();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (puVar5 != (void*)0x0) {
      local_58 = -1;
      while (local_58 = local_58 + 1, local_58 < *(int *)((int64_t)puVar5 + 0xc)) {
        FUN_00d21140();
      }
      FUN_00bcdaf0();
    }
    (**(code **)(*g_028a5710 + 0x378))();
    dVar10 = (double)FUN_00e7d6f0();
    lVar7 = FUN_00e7dae0(((dVar10 - g_02765b70) - g_028024d8) * g_02411988);
    lVar8 = 0;
    if (0 < lVar7) {
      lVar8 = lVar7;
    }
    uVar9 = (uint64_t)(lVar8 - lVar7 != 0);
    lVar7 = (((lVar8 - lVar7) - uVar9) / 0xffffffff + uVar9) * 0xffffffff + lVar7;
    lVar8 = 0xffffffff;
    if (lVar7 < 0xffffffff) {
      lVar8 = lVar7;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = (lVar7 + 0xfffffffe) - lVar8;
    FUN_00e7dae0((dVar10 - g_028024d8) * g_02411988,
                 SUB168(auVar1 * ZEXT816(0x8000000080000001),8));
    if (puVar5 == (void*)0x0) {
LAB_00bc670c:
      FUN_00d216c0();
      FUN_00d216c0();
      FUN_00e8f8c0();
      bVar2 = true;
      FUN_00dee5a0(g_023934c8);
    }
    else {
      local_58 = -1;
      do {
        do {
          local_58 = local_58 + 1;
          if (*(int *)((int64_t)puVar5 + 0xc) <= local_58) {
            FUN_00bcdaf0();
            goto LAB_00bc670c;
          }
          iVar4 = FUN_00b88630();
        } while (iVar4 == 10);
        FUN_00bc7190();
        iVar4 = FUN_00e31390();
      } while (iVar4 == 0);
      FUN_00bcdaf0();
      bVar2 = false;
    }
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
    }
  } while (bVar2);
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00bcad70
// ============================================================
// Function: FUN_00bcad70
// Address: 00bcad70
// Size: 520 bytes
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


uint8_t FUN_00bcad70(uint param_1,int *param_2,uint64_t param_3,uint32_t param_4)

{
  char cVar1;
  uint8_t uVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t *arg1;
  bool bVar7;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint local_3c;
  uint64_t local_38;
  
  FUN_00bc78b0(&local_58,param_4,0);
  cVar1 = FUN_00e7b6c0();
  if (cVar1 == '\0') {
    if ((int)*arg1 == -1) {
      iVar4 = FUN_00bcb0c0();
      *param_2 = iVar4;
    }
    else {
      iVar4 = (int)local_58;
      if (iVar4 == -1) {
        FUN_00bcb330();
        *param_2 = -1;
        uVar5 = FUN_00e7b4e0();
        *arg1 = uVar5;
        return true;
      }
      local_48 = FUN_00e7b5b0();
      if ((int)local_48 == -1) {
        iVar4 = FUN_00bcb0c0();
        *param_2 = iVar4;
        FUN_00bcb330();
      }
      else {
        local_50 = local_58 >> 0x20;
        local_38 = local_48 >> 0x20;
        if (iVar4 < (int)local_48) {
          FUN_00e7b4e0();
          iVar3 = FUN_00bcb0c0();
          if (iVar3 != -1) {
            *param_2 = iVar3;
          }
        }
        if ((int)*arg1 < (int)local_48) {
          FUN_00e7b4e0();
          FUN_00bcb330();
          if ((*param_2 != -1) && (*param_2 < (int)local_48)) {
            *param_2 = (int)local_48;
          }
        }
        uVar6 = (int)local_38 + (int)local_48;
        local_38 = (uint64_t)uVar6;
        iVar3 = *(int *)((int64_t)arg1 + 4);
        uVar5 = *arg1;
        local_3c = param_1 & 0xff;
        if ((int)uVar6 < (int)local_50 + iVar4) {
          FUN_00e7b4e0();
          iVar4 = FUN_00bcb0c0();
          uVar6 = (uint)local_38;
          if ((*param_2 == -1) && (iVar4 != -1)) {
            *param_2 = iVar4;
          }
        }
        if ((int)uVar6 < iVar3 + (int)uVar5) {
          FUN_00e7b4e0();
          FUN_00bcb330();
          if ((*param_2 != -1) && ((int)local_38 <= *param_2)) {
            *param_2 = -1;
          }
        }
      }
    }
    *arg1 = local_58;
    bVar7 = *param_2 == -1;
  }
  else {
    if (*param_2 != -1) {
      uVar2 = FUN_00bcaf80();
      return uVar2;
    }
    bVar7 = true;
  }
  return bVar7;
}



// ============================================================
// 00bc3220
// ============================================================
// Function: FUN_00bc3220
// Address: 00bc3220
// Size: 687 bytes
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


void FUN_00bc3220(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  short local_2a;
  uint8_t local_28 [7];
  char local_21;
  
  lVar1 = g_02765700;
  if (*arg1 == 0) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_02764880;
  if (*(int *)(*arg1 + 0x18) < 8) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_0256d868;
  puVar2[2] = 0;
  *(void*)((int64_t)puVar2 + 0x1c) = 0;
  *(void*)((int64_t)puVar2 + 0x24) = 0;
  *(void*)((int64_t)puVar2 + 0x2c) = 0;
  (*g_0256d880)();
  FUN_00cccfe0();
  FUN_00ccce80();
  FUN_00ccd300(local_28,&local_21);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0xc) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x10) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x14) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x18) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x1c) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x20) = (int)local_21;
  FUN_00ccd330(local_28,&local_2a);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x24) = (int)local_2a;
  FUN_00d50b20();
  return;
}



// ============================================================
// 00bc0a20
// ============================================================
// Function: FUN_00bc0a20
// Address: 00bc0a20
// Size: 622 bytes
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


int FUN_00bc0a20(uint64_t param_1,uint param_2)

{
  int64_t lVar1;
  int iVar2;
  void*arg1;
  int64_t *this_ptr;
  uint64_t local_100;
  uint8_t local_f8;
  uint64_t local_f0;
  uint8_t local_e8;
  uint64_t local_e0;
  uint8_t local_d8;
  uint64_t local_d0;
  uint8_t local_c8;
  uint64_t local_c0;
  uint8_t local_b8;
  uint64_t local_b0;
  uint8_t local_a8;
  uint64_t local_a0;
  uint8_t local_98;
  uint64_t local_90;
  uint8_t local_88;
  uint64_t local_80;
  uint8_t local_78;
  uint64_t local_70;
  uint8_t local_68;
  uint64_t local_50;
  uint64_t local_48;
  
  iVar2 = 0;
  if (((param_2 & 0xfffffffe) == 2) &&
     (lVar1 = (**(code **)(*this_ptr + 0x388))(), iVar2 = 0, lVar1 != 0)) {
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x388))(4,lVar1);
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    FUN_00ccdf50();
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x378))(param_2,local_50);
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 < local_48) {
      (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      iVar2 = (int)local_48 - (int)local_50;
      FUN_00ccdf50();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
      iVar2 = 0;
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return iVar2;
}



// ============================================================
// 00bc2d70
// ============================================================
// Function: FUN_00bc2d70
// Address: 00bc2d70
// Size: 678 bytes
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


void FUN_00bc2d70(void)

{
  int64_t lVar1;
  void*puVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint8_t local_28 [7];
  char local_21;
  
  lVar1 = g_02765700;
  if (*arg1 == 0) {
    if (g_02765700 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_02764880;
  if (*(int *)(*arg1 + 0x18) < 7) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &g_0256d868;
  puVar2[2] = 0;
  *(void*)((int64_t)puVar2 + 0x1c) = 0;
  *(void*)((int64_t)puVar2 + 0x24) = 0;
  *(void*)((int64_t)puVar2 + 0x2c) = 0;
  (*g_0256d880)();
  FUN_00cccfe0();
  FUN_00ccce80();
  FUN_00ccd300(local_28,&local_21);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0xc) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x10) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x24) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x14) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x18) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x1c) = (int)local_21;
  FUN_00ccd300(local_28,&local_21);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x20) = (int)local_21;
  FUN_00d50b20();
  return;
}



// ============================================================
// 00bba6c0
// ============================================================
// Function: FUN_00bba6c0
// Address: 00bba6c0
// Size: 588 bytes
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


void FUN_00bba6c0(uint64_t param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  void*arg1;
  int64_t this_ptr;
  int64_t lVar9;
  int64_t local_48;
  char local_40;
  
  iVar5 = FUN_00ae7ec0();
  uVar1 = *(uint *)(this_ptr + 0x30);
  uVar7 = (uint64_t)uVar1;
  iVar5 = uVar1 * param_2 * iVar5;
  if (uVar7 == 1) {
    if (*(int *)(this_ptr + 0x34) == 0x13) {
      (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))(iVar5,*arg1);
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar9 = g_027653a0;
      if (local_48 == 0) {
        return;
      }
      if (g_027653a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc78b0();
      if (lVar9 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  else if ((int)uVar1 < 1) {
    bVar4 = false;
    goto LAB_00bba7be;
  }
  uVar8 = 1;
  bVar3 = false;
  do {
    lVar9 = uVar8 - 1;
    bVar4 = (bool)(arg1[lVar9] == 0 | bVar3);
    if (uVar7 <= uVar8) break;
    uVar8 = uVar8 + 1;
    bVar2 = !bVar3;
    bVar3 = bVar4;
  } while (arg1[lVar9] != 0 && bVar2);
LAB_00bba7be:
  FUN_00b7be00(uVar7,bVar4);
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  iVar6 = *(int *)(this_ptr + 0x30);
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      if (arg1[lVar9] != 0) {
        FUN_00ae80c0(0,1,*(void*)(local_48 + 0x10),*(void*)(this_ptr + 0x34));
        iVar6 = *(int *)(this_ptr + 0x30);
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar6);
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x18) + 0x388))(iVar5,*(void*)(local_48 + 0x10));
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  lVar9 = g_027653a0;
  if (local_48 != 0) {
    if (g_027653a0 != 0) {
      FUN_00d50b00();
    }
    FUN_00cc78b0();
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00b7c2b0();
  FUN_00d50b20();
  return;
}



// ============================================================
// 00bbfa40
// ============================================================
// Function: FUN_00bbfa40
// Address: 00bbfa40
// Size: 573 bytes
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


void FUN_00bbfa40(void)

{
  double dVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t *this_ptr;
  uint64_t uVar9;
  int64_t lVar10;
  double dVar11;
  
  FUN_00b341c0();
  lVar10 = FUN_00b335d0();
  this_ptr[0x1b] = lVar10;
  dVar11 = (double)FUN_00b335d0();
  this_ptr[0x1c] = (int64_t)dVar11;
  this_ptr[0x17] = 0;
  this_ptr[0x14] = 0;
  this_ptr[0x1a] = 0;
  this_ptr[0x1d] = (int64_t)((double)this_ptr[0x1b] / dVar11);
  uVar4 = FUN_00b33120();
  iVar5 = (**(code **)(*this_ptr + 0x3a8))();
  iVar6 = 1;
  do {
    iVar3 = iVar6 * 2;
    bVar2 = iVar6 <= iVar5;
    iVar6 = iVar3;
  } while (bVar2);
  *(int *)(this_ptr + 0x15) = iVar3;
  *(int *)((int64_t)this_ptr + 0xac) = iVar3 + -1;
  lVar10 = FUN_00e83010();
  this_ptr[0x13] = lVar10;
  uVar9 = (uint64_t)uVar4;
  if (0 < (int)uVar4) {
    uVar8 = 0;
    do {
      uVar7 = FUN_00e83010();
      *(void*)(this_ptr[0x13] + uVar8 * 8) = uVar7;
      ___bzero();
      uVar8 = uVar8 + 1;
    } while (uVar9 != uVar8);
  }
  dVar11 = (double)this_ptr[0x1b];
  dVar1 = (double)this_ptr[0x1c];
  lVar10 = FUN_00e83010();
  this_ptr[0x19] = lVar10;
  if (0 < (int)uVar4) {
    uVar8 = 0;
    do {
      uVar7 = FUN_00e83010();
      *(void*)(this_ptr[0x19] + uVar8 * 8) = uVar7;
      ___bzero();
      uVar8 = uVar8 + 1;
    } while (uVar9 != uVar8);
  }
  iVar6 = 1;
  do {
    iVar3 = iVar6 * 2;
    bVar2 = iVar6 <= (int)(((double)iVar5 * dVar11) / dVar1) + 3;
    iVar6 = iVar3;
  } while (bVar2);
  *(int *)(this_ptr + 0x18) = iVar3;
  *(int *)((int64_t)this_ptr + 0xc4) = iVar3 + -1;
  lVar10 = FUN_00e83010();
  this_ptr[0x16] = lVar10;
  if (0 < (int)uVar4) {
    uVar8 = 0;
    do {
      uVar7 = FUN_00e83010();
      *(void*)(this_ptr[0x16] + uVar8 * 8) = uVar7;
      ___bzero();
      uVar8 = uVar8 + 1;
    } while (uVar9 != uVar8);
  }
  return;
}



// ============================================================
// 00bcb330
// ============================================================
// Function: FUN_00bcb330
// Address: 00bcb330
// Size: 559 bytes
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


void FUN_00bcb330(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int64_t lVar7;
  uint64_t arg1;
  uint64_t uVar8;
  int iVar9;
  int64_t this_ptr;
  int64_t lVar10;
  uint uVar11;
  double dVar12;
  
  lVar1 = *(int64_t *)(this_ptr + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  dVar12 = (double)FUN_00e7d6f0();
  if (param_2 == '\0') {
    dVar12 = dVar12 + g_023b3490;
  }
  lVar7 = FUN_00e7dae0((dVar12 - g_028024d8) * g_02411988);
  lVar10 = 0;
  if (0 < lVar7) {
    lVar10 = lVar7;
  }
  uVar8 = (uint64_t)(lVar10 - lVar7 != 0);
  lVar7 = (((lVar10 - lVar7) - uVar8) / 0xffffffff + uVar8) * 0xffffffff + lVar7;
  lVar10 = 0xffffffff;
  if (lVar7 < 0xffffffff) {
    lVar10 = lVar7;
  }
  uVar11 = (int)lVar7 + (int)((uint64_t)((lVar7 + 0xfffffffe) - lVar10) / 0xffffffff);
  iVar9 = (int)((uint64_t)arg1 >> 0x20);
  if (0 < iVar9) {
    lVar10 = (int64_t)(int)arg1;
    do {
      uVar5 = FUN_00e31390();
      if (uVar5 != uVar11) {
        do {
          bVar2 = -(uVar11 - uVar5) < 0x80000001;
          if (uVar5 <= uVar11) {
            bVar2 = (int)(uVar11 - uVar5) < 0;
          }
          if (bVar2) break;
          bVar3 = FUN_00e314a0(0,uVar11);
        } while ((bVar3 | uVar5 == uVar11) != 1);
      }
      iVar6 = FUN_00e31390();
      do {
        cVar4 = FUN_00e314a0(3,iVar6 + -0x10);
      } while (cVar4 == '\0');
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar9 + (int)arg1);
  }
  uVar5 = FUN_00e31390();
  if (uVar5 != uVar11) {
    do {
      bVar2 = -(uVar11 - uVar5) < 0x80000001;
      if (uVar5 <= uVar11) {
        bVar2 = (int)(uVar11 - uVar5) < 0;
      }
    } while ((!bVar2) && (cVar4 = FUN_00e314a0(0,uVar11), cVar4 == '\0' && uVar5 != uVar11));
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00bbbde0
// ============================================================
// Function: FUN_00bbbde0
// Address: 00bbbde0
// Size: 529 bytes
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


uint64_t FUN_00bbbde0(void)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *arg1;
  
  uVar4 = 0xffffffff;
  if ((*arg1 != 0) && (iVar3 = FUN_00d8c7a0(), lVar1 = g_02781718, iVar3 != 0)) {
    if (g_02781718 != 0) {
      FUN_00d50b00();
    }
    cVar2 = FUN_00d90eb0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_02781750;
    uVar4 = 0x43;
    if (cVar2 == '\0') {
      if (g_02781750 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_00d90eb0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = g_02781790;
      uVar4 = 0x40;
      if (cVar2 == '\0') {
        if (g_02781790 != 0) {
          FUN_00d50b00();
        }
        cVar2 = FUN_00d90eb0();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        lVar1 = g_027817d0;
        uVar4 = 0x41;
        if (cVar2 == '\0') {
          if (g_027817d0 != 0) {
            FUN_00d50b00();
          }
          cVar2 = FUN_00d90eb0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar1 = g_02765478;
          if (cVar2 != '\0') {
            if (g_02765478 != 0) {
              FUN_00d50b00();
            }
            cVar2 = FUN_00d90eb0();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            lVar1 = g_027724f8;
            if (cVar2 != '\0') {
              return 0x42;
            }
            if (g_027724f8 != 0) {
              FUN_00d50b00();
            }
            cVar2 = FUN_00d90eb0();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
            if (cVar2 != '\0') {
              return 0x44;
            }
          }
          uVar4 = 0xffffffff;
        }
      }
    }
  }
  return uVar4;
}



// ============================================================
// 00bc5ef0
// ============================================================
// Function: FUN_00bc5ef0
// Address: 00bc5ef0
// Size: 508 bytes
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


void FUN_00bc5ef0(void)

{
  int64_t lVar1;
  int iVar2;
  double *pdVar3;
  byte bVar4;
  uint64_t uVar5;
  double dVar6;
  double local_48;
  int64_t local_40;
  char local_38;
  
  g_028024f0 = FUN_00e7d6f0();
  do {
    iVar2 = FUN_00e31390();
    if (iVar2 != 0) {
      return;
    }
    local_48 = (double)FUN_00e7d6f0();
    do {
      uVar5 = FUN_00bcac20();
      if (local_38 == '\0') {
        if (local_40 == 0) goto LAB_00bc5f20;
        uVar5 = FUN_00d50b00();
      }
      else if (local_40 == 0) {
LAB_00bc5f20:
        FUN_00e8f8c0();
        FUN_00dee5a0(g_023908c8);
        bVar4 = 0;
        break;
      }
      lVar1 = *(int64_t *)(local_40 + 0x10);
      if (lVar1 != 0) {
        uVar5 = FUN_00d50b00();
      }
      FUN_00b86b80(uVar5,0);
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (local_40 == 0) {
        bVar4 = 4;
      }
      else {
        FUN_00bc7a00();
        dVar6 = (double)FUN_00e7d6f0();
        dVar6 = dVar6 - *(double *)(local_40 + 0x20);
        pdVar3 = &g_02765b68;
        if ((dVar6 < g_02765b68) || (pdVar3 = &g_028024e8, g_028024e8 < dVar6)) {
          *pdVar3 = dVar6;
        }
        dVar6 = (double)FUN_00e7d6f0();
        FUN_00e31570(CONCAT44((int)((uint64_t)(dVar6 - local_48) >> 0x20),(float)(dVar6 - local_48)
                             ));
        iVar2 = FUN_00e31390();
        bVar4 = iVar2 != 0;
        FUN_00d50b20();
        local_48 = dVar6;
      }
      FUN_00d50b20();
    } while ((bVar4 & 3) == 0);
    if (bVar4 != 0) {
      return;
    }
  } while( true );
}

