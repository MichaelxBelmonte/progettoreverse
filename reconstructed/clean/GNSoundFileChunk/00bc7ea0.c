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

