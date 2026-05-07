// Function: FUN_0182afb0
// Address: 0182afb0
// Size: 7862 bytes
// Class: Unknown

void FUN_0182afb0(float param_1,float param_2,float param_3,float param_4)

{
  void*puVar1;
  float *pfVar2;
  float *pfVar3;
  uint32_t uVar4;
  double dVar5;
  uint64_t uVar6;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  void *pvVar28;
  int64_t lVar29;
  void*puVar30;
  int64_t *in_RCX;
  int64_t *plVar31;
  int64_t lVar32;
  uint64_t uVar33;
  int64_t *in_RDX;
  uint uVar34;
  int64_t *plVar35;
  int64_t lVar36;
  int64_t lVar37;
  uint64_t uVar38;
  float *pfVar39;
  int64_t lVar40;
  int64_t *arg1;
  uint64_t uVar41;
  int64_t lVar42;
  int iVar43;
  int64_t *this_ptr;
  uint64_t uVar44;
  int64_t lVar45;
  uint64_t uVar46;
  int64_t *in_R8;
  uint64_t uVar47;
  int iVar48;
  int64_t *in_R9;
  uint64_t uVar49;
  uint uVar50;
  int iVar51;
  uint64_t uVar52;
  int64_t lVar53;
  int64_t lVar54;
  int64_t lVar55;
  bool bVar56;
  uint32_t uVar57;
  uint32_t extraout_XMM0_Da;
  float fVar58;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  float fVar59;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dc_01;
  uint32_t extraout_XMM0_Dc_02;
  float fVar60;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t extraout_XMM0_Dd_01;
  uint32_t extraout_XMM0_Dd_02;
  uint8_t auVar61 [16];
  float fVar62;
  float in_XMM4_Da;
  int64_t *local_res8;
  int64_t *local_res10;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_fc;
  uint64_t local_f8;
  float local_ec;
  int64_t *local_e8;
  char local_e0;
  uint8_t local_78 [16];
  int64_t *local_40;
  char local_38;
  
  if (*this_ptr == 0) {
    return;
  }
  if (*(int *)(*this_ptr + 0xc) == 0) {
    return;
  }
  plVar31 = in_RCX;
  local_118 = in_XMM4_Da;
  local_fc = param_3;
  local_ec = param_4;
  pvVar28 = _pthread_getspecific((void*)in_RCX);
  if (pvVar28 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013df6b0();
  pvVar28 = _pthread_getspecific((void*)plVar31);
  plVar35 = local_40;
  if ((pvVar28 != (void *)0x0) && (lVar29 = FUN_00e8b990(), lVar29 != 0)) {
    plVar35 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar29 + 0x154) & 1) + 4];
  }
  dVar5 = (double)(**(code **)(*plVar35 + 0x370))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar34 = *(uint *)(*arg1 + 0x18);
  local_f8 = (uint64_t)uVar34;
  uVar50 = uVar34 + 3;
  if (-1 < (int)uVar34) {
    uVar50 = uVar34;
  }
  lVar29 = FUN_00e7dae0(SUB84(g_023934c8 * dVar5,0));
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar55 = *this_ptr;
  if (0 < *(int *)(lVar55 + 0xc)) {
    lVar36 = 0;
    do {
      lVar55 = *(int64_t *)(*(int64_t *)(lVar55 + 0x10) + lVar36 * 8);
      if (lVar55 != 0) {
        FUN_00d50b00();
      }
      pvVar28 = _pthread_getspecific((void*)plVar31);
      if (pvVar28 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar57 = FUN_013de560();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        uVar57 = FUN_00d50b00();
      }
      local_1b0 = '\0';
      local_1b8 = lVar55;
      FUN_0133ae40(uVar57,&local_1b8);
      iVar22 = FUN_00d45870();
      uVar57 = extraout_XMM0_Da;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar57 = FUN_00d50b20();
      }
      if ((local_1b0 != '\0') && (local_1b8 != 0)) {
        uVar57 = FUN_00d50b20();
      }
      local_1a0 = '\0';
      local_1a8 = lVar55;
      FUN_0133ae40(uVar57,&local_1a8);
      iVar23 = FUN_00d45870();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1a0 != '\0') && (local_1a8 != 0)) {
        FUN_00d50b20();
      }
      if (iVar22 < iVar23) {
        lVar37 = (int64_t)iVar22;
        if (local_40 == (int64_t *)0x0) {
          do {
            fVar58 = (float)(dVar5 / (double)*(float *)(*(int64_t *)(*arg1 + 0x10) +
                                                       lVar37 * 4));
            *(float *)(*(int64_t *)(*in_RDX + 0x10) + lVar37 * 4) = fVar58;
            uVar6 = MACH_HEADER._16_8_;
            fVar58 = (float)_logf(fVar58 * g_02394204);
            *(float *)(uVar6 + lVar37 * 4) = fVar58 * g_02394208 + param_1;
            pvVar28 = _pthread_getspecific((void*)plVar31);
            if (pvVar28 != (void *)0x0) {
              FUN_00e8b990();
            }
            fVar58 = (float)FUN_013de3b0();
            iVar22 = FUN_00e7d780((fVar58 - param_2) / g_023908e0);
            *(float *)(MACH_HEADER._16_8_ + lVar37 * 4) = (float)iVar22 * g_023908e0 + param_1;
            lVar37 = lVar37 + 1;
          } while (iVar23 != lVar37);
        }
        else {
          do {
            fVar58 = (float)(dVar5 / (double)*(float *)(*(int64_t *)(*arg1 + 0x10) +
                                                       lVar37 * 4));
            *(float *)(*(int64_t *)(*in_RDX + 0x10) + lVar37 * 4) = fVar58;
            lVar53 = local_40[2];
            fVar58 = (float)_logf(fVar58 * g_02394204);
            *(float *)(lVar53 + lVar37 * 4) = fVar58 * g_02394208 + param_1;
            pvVar28 = _pthread_getspecific((void*)plVar31);
            if (pvVar28 != (void *)0x0) {
              FUN_00e8b990();
            }
            fVar58 = (float)FUN_013de3b0();
            iVar22 = FUN_00e7d780((fVar58 - param_2) / g_023908e0);
            fVar58 = (float)iVar22 * g_023908e0;
            pvVar28 = _pthread_getspecific((void*)plVar31);
            if (pvVar28 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar22 = FUN_014ed790();
            *(float *)(local_40[2] + lVar37 * 4) = fVar58 + (float)iVar22 * g_023908e0 + param_1;
            lVar37 = lVar37 + 1;
          } while (iVar23 != lVar37);
        }
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar55 != 0) {
        FUN_00d50b20();
      }
      lVar36 = lVar36 + 1;
      lVar55 = *this_ptr;
      plVar31 = (int64_t *)(int64_t)*(int *)(lVar55 + 0xc);
    } while (lVar36 < (int64_t)plVar31);
  }
  uVar50 = (int)uVar50 >> 2;
  if (3 < (int)local_f8) {
    uVar49 = local_40[2];
    uVar33 = *(uint64_t *)(*in_RCX + 0x10);
    uVar44 = *(uint64_t *)(*in_R8 + 0x10);
    uVar47 = (uint64_t)uVar50;
    if (uVar50 < 4) {
      uVar38 = 0;
    }
    else {
      uVar52 = uVar33 + uVar47 * 4;
      uVar41 = uVar47 * 4 + uVar44;
      uVar46 = uVar49 + uVar47 * 4;
      uVar38 = 0;
      if (((uVar41 <= uVar33 || uVar52 <= uVar44) && (uVar46 <= uVar33 || uVar52 <= uVar49)) &&
         (uVar38 = 0, uVar46 <= uVar44 || uVar41 <= uVar49)) {
        uVar38 = (uint64_t)(uVar50 & 0xfffffffc);
        uVar52 = 0;
        do {
          lVar55 = uVar49 + uVar52;
          fVar58 = *(float *)(lVar55 + 4) * _UNK_0240e0f4;
          fVar59 = *(float *)(lVar55 + 8) * _UNK_0240e0f8;
          fVar60 = *(float *)(lVar55 + 0xc) * _UNK_0240e0fc;
          local_78._0_8_ = _exp2f();
          local_78._8_4_ = extraout_XMM0_Dc;
          local_78._12_4_ = extraout_XMM0_Dd;
          uVar6 = _exp2f(fVar58);
          auVar61._8_4_ = extraout_XMM0_Dc_00;
          auVar61._0_8_ = uVar6;
          auVar61._12_4_ = extraout_XMM0_Dd_00;
          auVar61 = insertps(local_78,auVar61,0x10);
          uVar6 = _exp2f(fVar59);
          auVar7._8_4_ = extraout_XMM0_Dc_01;
          auVar7._0_8_ = uVar6;
          auVar7._12_4_ = extraout_XMM0_Dd_01;
          auVar61 = insertps(auVar61,auVar7,0x20);
          uVar6 = _exp2f(fVar60);
          auVar8._8_4_ = extraout_XMM0_Dc_02;
          auVar8._0_8_ = uVar6;
          auVar8._12_4_ = extraout_XMM0_Dd_02;
          auVar61 = insertps(auVar61,auVar8,0x30);
          fVar58 = auVar61._0_4_ * g_0240e1b0;
          fVar59 = auVar61._4_4_ * _UNK_0240e1b4;
          fVar60 = auVar61._8_4_ * _UNK_0240e1b8;
          fVar62 = auVar61._12_4_ * _UNK_0240e1bc;
          pfVar39 = (float *)(uVar33 + uVar52);
          *pfVar39 = fVar58;
          pfVar39[1] = fVar59;
          pfVar39[2] = fVar60;
          pfVar39[3] = fVar62;
          pfVar39 = (float *)(uVar44 + uVar52);
          *pfVar39 = fVar58;
          pfVar39[1] = fVar59;
          pfVar39[2] = fVar60;
          pfVar39[3] = fVar62;
          uVar52 = uVar52 + 0x10;
        } while ((uVar47 * 4 & 0xfffffffffffffff0) != uVar52);
        if (uVar38 == uVar47) goto LAB_0182b864;
      }
    }
    uVar52 = ~uVar38;
    if ((uVar50 & 1) != 0) {
      fVar58 = (float)_exp2f(*(float *)(uVar49 + uVar38 * 4) * g_023941f4);
      fVar58 = fVar58 * g_023941f8;
      *(float *)(uVar33 + uVar38 * 4) = fVar58;
      *(float *)(uVar44 + uVar38 * 4) = fVar58;
      uVar38 = uVar38 | 1;
    }
    if (uVar52 + uVar47 != 0) {
      do {
        fVar58 = (float)_exp2f(*(float *)(uVar49 + uVar38 * 4) * g_023941f4);
        fVar58 = fVar58 * g_023941f8;
        *(float *)(uVar33 + uVar38 * 4) = fVar58;
        *(float *)(uVar44 + uVar38 * 4) = fVar58;
        fVar58 = (float)_exp2f(*(float *)(uVar49 + 4 + uVar38 * 4) * g_023941f4);
        fVar58 = fVar58 * g_023941f8;
        *(float *)(uVar33 + 4 + uVar38 * 4) = fVar58;
        *(float *)(uVar44 + 4 + uVar38 * 4) = fVar58;
        uVar38 = uVar38 + 2;
      } while (uVar47 != uVar38);
    }
  }
LAB_0182b864:
  local_e8 = local_40;
  local_e0 = '\0';
  FUN_00c8e4f0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  puVar30 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar30 = &g_025f0d98;
  puVar30[2] = 0;
  puVar30[3] = 0;
  puVar30[4] = 0;
  puVar30[5] = 0;
  puVar30[6] = 0;
  puVar30[7] = 0;
  (*g_025f0db0)();
  iVar23 = FUN_00e7d780(g_02391094 / local_118);
  iVar22 = 0x7f;
  if (iVar23 < 0x7f) {
    iVar22 = iVar23;
  }
  lVar55 = *this_ptr;
  if (0 < *(int *)(lVar55 + 0xc)) {
    lVar36 = 0;
    do {
      lVar37 = *(int64_t *)(*(int64_t *)(lVar55 + 0x10) + lVar36 * 8);
      if (lVar37 != 0) {
        FUN_00d50b00();
      }
      pvVar28 = _pthread_getspecific((void*)lVar55);
      if (pvVar28 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar58 = (float)FUN_013de3b0();
      local_190 = '\0';
      local_198 = lVar37;
      FUN_0133ae40(fVar58,&local_198);
      iVar24 = FUN_00d45870();
      uVar57 = extraout_XMM0_Da_00;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar57 = FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != 0)) {
        uVar57 = FUN_00d50b20();
      }
      local_180 = '\0';
      local_188 = lVar37;
      FUN_0133ae40(uVar57,&local_188);
      iVar25 = FUN_00d45870();
      uVar57 = extraout_XMM0_Da_01;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar57 = FUN_00d50b20();
      }
      if ((local_180 != '\0') && (local_188 != 0)) {
        uVar57 = FUN_00d50b20();
      }
      local_170 = '\0';
      local_178 = lVar37;
      FUN_0133ae40(uVar57,&local_178);
      iVar26 = FUN_00d45870();
      uVar57 = extraout_XMM0_Da_02;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar57 = FUN_00d50b20();
      }
      if ((local_170 != '\0') && (local_178 != 0)) {
        uVar57 = FUN_00d50b20();
      }
      local_160 = '\0';
      local_168 = lVar37;
      FUN_0133ae40(uVar57,&local_168);
      iVar27 = FUN_00d45870();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
      if (iVar26 != -1) {
        if (iVar26 < iVar27) {
          lVar55 = (int64_t)iVar26;
          pfVar39 = (float *)(lVar55 * 4 + *(int64_t *)(*in_RDX + 0x10));
          iVar51 = iVar26;
          do {
            fVar59 = (float)_logf(*pfVar39 * g_02394204);
            iVar48 = iVar51;
            if ((float)((uint)(fVar59 * g_02394208 - fVar58) & g_02390140) < g_02394240)
            break;
            iVar51 = iVar51 + 1;
            pfVar39 = pfVar39 + 1;
            iVar48 = iVar26;
          } while (iVar27 != iVar51);
          iVar26 = iVar48;
          lVar53 = *(int64_t *)(*in_RDX + 0x10);
          lVar40 = (int64_t)iVar27;
          do {
            fVar59 = (float)_logf(*(float *)(lVar53 + lVar40 * 4) * g_02394204);
            if ((float)((uint)(fVar59 * g_02394208 - fVar58) & g_02390140) < g_02394240) {
              iVar27 = (int)lVar40;
              break;
            }
            lVar40 = lVar40 + -1;
          } while (lVar55 < lVar40);
        }
        lVar53 = (int64_t)iVar26;
        lVar55 = local_40[2];
        lVar40 = (int64_t)iVar27;
        uVar57 = *(void*)(lVar55 + lVar40 * 4);
        if (iVar24 < iVar26) {
          uVar4 = *(void*)(lVar55 + lVar53 * 4);
          lVar32 = (int64_t)iVar24;
          uVar49 = lVar53 - lVar32;
          if (7 < uVar49) {
            uVar47 = uVar49 & 0xfffffffffffffff8;
            uVar44 = (uVar47 - 8 >> 3) + 1;
            uVar33 = (uint64_t)((uint)uVar44 & 3);
            if (uVar47 - 8 < 0x18) {
              lVar42 = 0;
            }
            else {
              lVar45 = lVar55 + lVar32 * 4;
              lVar54 = -(uVar44 & 0xfffffffffffffffc);
              lVar42 = 0;
              do {
                puVar1 = (void*)(lVar45 + lVar42 * 4);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                puVar1 = (void*)(lVar45 + 0x10 + lVar42 * 4);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                puVar1 = (void*)(lVar45 + 0x20 + lVar42 * 4);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                puVar1 = (void*)(lVar45 + 0x30 + lVar42 * 4);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                puVar1 = (void*)(lVar45 + 0x40 + lVar42 * 4);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                puVar1 = (void*)(lVar45 + 0x50 + lVar42 * 4);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                puVar1 = (void*)(lVar45 + 0x60 + lVar42 * 4);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                puVar1 = (void*)(lVar45 + 0x70 + lVar42 * 4);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                lVar42 = lVar42 + 0x20;
                lVar54 = lVar54 + 4;
              } while (lVar54 != 0);
            }
            if (uVar33 != 0) {
              lVar45 = lVar55 + (lVar42 + lVar32) * 4;
              lVar42 = 0;
              do {
                puVar1 = (void*)(lVar45 + lVar42);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                puVar1 = (void*)(lVar45 + 0x10 + lVar42);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                lVar42 = lVar42 + 0x20;
              } while (uVar33 << 5 != lVar42);
            }
            if (uVar49 == uVar47) goto LAB_0182bd4e;
            lVar32 = lVar32 + uVar47;
          }
          do {
            *(void*)(lVar55 + lVar32 * 4) = uVar4;
            lVar32 = lVar32 + 1;
          } while (lVar53 != lVar32);
        }
LAB_0182bd4e:
        if (iVar27 < iVar25) {
          uVar49 = iVar25 - lVar40;
          lVar32 = lVar40;
          if (7 < uVar49) {
            uVar33 = uVar49 & 0xfffffffffffffff8;
            uVar44 = (uVar33 - 8 >> 3) + 1;
            uVar47 = (uint64_t)((uint)uVar44 & 3);
            if (uVar33 - 8 < 0x18) {
              lVar45 = 0;
            }
            else {
              lVar32 = lVar55 + lVar40 * 4;
              lVar42 = -(uVar44 & 0xfffffffffffffffc);
              lVar45 = 0;
              do {
                puVar1 = (void*)(lVar32 + lVar45 * 4);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                puVar1 = (void*)(lVar32 + 0x10 + lVar45 * 4);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                puVar1 = (void*)(lVar32 + 0x20 + lVar45 * 4);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                puVar1 = (void*)(lVar32 + 0x30 + lVar45 * 4);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                puVar1 = (void*)(lVar32 + 0x40 + lVar45 * 4);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                puVar1 = (void*)(lVar32 + 0x50 + lVar45 * 4);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                puVar1 = (void*)(lVar32 + 0x60 + lVar45 * 4);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                puVar1 = (void*)(lVar32 + 0x70 + lVar45 * 4);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                lVar45 = lVar45 + 0x20;
                lVar42 = lVar42 + 4;
              } while (lVar42 != 0);
            }
            if (uVar47 != 0) {
              lVar32 = lVar55 + (lVar45 + lVar40) * 4;
              lVar45 = 0;
              do {
                puVar1 = (void*)(lVar32 + lVar45);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                puVar1 = (void*)(lVar32 + 0x10 + lVar45);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                lVar45 = lVar45 + 0x20;
              } while (uVar47 << 5 != lVar45);
            }
            if (uVar49 == uVar33) goto LAB_0182be3e;
            lVar32 = uVar33 + lVar40;
          }
          do {
            *(void*)(lVar55 + lVar32 * 4) = uVar57;
            lVar32 = lVar32 + 1;
          } while (iVar25 != lVar32);
        }
LAB_0182be3e:
        lVar45 = (int64_t)iVar24;
        FUN_015c15b0((float)iVar22);
        lVar55 = *(int64_t *)(*local_res10 + 0x10);
        lVar53 = *(int64_t *)(lVar55 + lVar53 * 8);
        lVar40 = *(int64_t *)(lVar55 + lVar40 * 8);
        lVar32 = (lVar40 - lVar53) / 3;
        if (lVar29 <= lVar32) {
          lVar32 = lVar29;
        }
        lVar40 = lVar40 - lVar32;
        lVar32 = lVar32 + lVar53;
        iVar51 = *(int *)(*local_res10 + 0x18);
        iVar48 = iVar51 + 7;
        if (-1 < iVar51) {
          iVar48 = iVar51;
        }
        iVar48 = iVar48 >> 3;
        if (iVar26 < 0) {
          iVar26 = 0;
        }
        iVar51 = iVar48 + -1;
        if (iVar48 <= iVar26) {
          iVar26 = iVar51;
        }
        uVar49 = (uint64_t)iVar26;
        if (lVar32 < *(int64_t *)(lVar55 + uVar49 * 8)) {
          do {
            bVar56 = uVar49 == 0;
            uVar49 = uVar49 - 1;
            if (bVar56) {
              iVar26 = 0;
              iVar43 = 0;
              if (iVar51 < 1) goto LAB_0182bf7a;
              goto LAB_0182bf5a;
            }
          } while (lVar32 < *(int64_t *)(lVar55 + uVar49 * 8));
          uVar34 = (uint)uVar49;
        }
        else {
          lVar53 = 0;
          do {
            iVar43 = iVar51;
            if ((int64_t)iVar51 - uVar49 == lVar53) goto LAB_0182bf7a;
            lVar42 = lVar53 + 1;
            lVar54 = lVar53 * 8;
            lVar53 = lVar42;
          } while (*(int64_t *)(lVar55 + uVar49 * 8 + 8 + lVar54) <= lVar32);
          uVar34 = ((int)lVar42 + iVar26) - 1;
          uVar49 = (uint64_t)uVar34;
        }
        iVar26 = (int)uVar49;
        iVar43 = iVar26;
        if ((int)uVar34 < iVar51) {
LAB_0182bf5a:
          iVar43 = iVar26;
          if (*(int64_t *)(lVar55 + 8 + (int64_t)iVar26 * 8) - lVar32 <
              lVar32 - *(int64_t *)(lVar55 + (int64_t)iVar26 * 8)) {
            iVar43 = iVar26 + 1;
          }
        }
LAB_0182bf7a:
        if (iVar27 < 0) {
          iVar27 = 0;
        }
        if (iVar48 <= iVar27) {
          iVar27 = iVar51;
        }
        uVar49 = (uint64_t)iVar27;
        if (lVar40 < *(int64_t *)(lVar55 + uVar49 * 8)) {
          do {
            bVar56 = uVar49 == 0;
            uVar49 = uVar49 - 1;
            if (bVar56) {
              iVar26 = 0;
              lVar53 = 0;
              iVar27 = 0;
              if (iVar51 < 1) goto LAB_0182c030;
              goto LAB_0182c014;
            }
          } while (lVar40 < *(int64_t *)(lVar55 + uVar49 * 8));
          uVar34 = (uint)uVar49;
        }
        else {
          lVar53 = (int64_t)iVar51;
          lVar32 = 0;
          do {
            if (lVar53 - uVar49 == lVar32) {
              lVar55 = local_40[2];
              uVar57 = *(void*)(lVar55 + lVar53 * 4);
              iVar26 = iVar51;
              goto joined_r0x0182c061;
            }
            lVar42 = lVar32 + 1;
            lVar54 = lVar32 * 8;
            lVar32 = lVar42;
          } while (*(int64_t *)(lVar55 + uVar49 * 8 + 8 + lVar54) <= lVar40);
          uVar34 = ((int)lVar42 + iVar27) - 1;
          uVar49 = (uint64_t)uVar34;
        }
        iVar26 = (int)uVar49;
        lVar53 = (int64_t)(int)uVar34;
        iVar27 = iVar26;
        if ((int)uVar34 < iVar51) {
LAB_0182c014:
          iVar26 = iVar27;
          if (*(int64_t *)(lVar55 + 8 + lVar53 * 8) - lVar40 <
              lVar40 - *(int64_t *)(lVar55 + lVar53 * 8)) {
            iVar26 = iVar26 + 1;
            lVar53 = lVar53 + 1;
          }
        }
LAB_0182c030:
        lVar55 = local_40[2];
        uVar57 = *(void*)(lVar55 + lVar53 * 4);
joined_r0x0182c061:
        if (iVar24 < iVar43) {
          lVar40 = (int64_t)iVar43;
          uVar4 = *(void*)(lVar55 + lVar40 * 4);
          uVar49 = lVar40 - lVar45;
          if (7 < uVar49) {
            uVar44 = uVar49 & 0xfffffffffffffff8;
            uVar33 = (uVar44 - 8 >> 3) + 1;
            uVar47 = (uint64_t)((uint)uVar33 & 3);
            if (uVar44 - 8 < 0x18) {
              lVar54 = 0;
            }
            else {
              lVar32 = lVar55 + lVar45 * 4;
              lVar42 = -(uVar33 & 0xfffffffffffffffc);
              lVar54 = 0;
              do {
                puVar1 = (void*)(lVar32 + lVar54 * 4);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                puVar1 = (void*)(lVar32 + 0x10 + lVar54 * 4);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                puVar1 = (void*)(lVar32 + 0x20 + lVar54 * 4);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                puVar1 = (void*)(lVar32 + 0x30 + lVar54 * 4);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                puVar1 = (void*)(lVar32 + 0x40 + lVar54 * 4);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                puVar1 = (void*)(lVar32 + 0x50 + lVar54 * 4);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                puVar1 = (void*)(lVar32 + 0x60 + lVar54 * 4);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                puVar1 = (void*)(lVar32 + 0x70 + lVar54 * 4);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                lVar54 = lVar54 + 0x20;
                lVar42 = lVar42 + 4;
              } while (lVar42 != 0);
            }
            if (uVar47 != 0) {
              lVar32 = lVar55 + (lVar54 + lVar45) * 4;
              lVar42 = 0;
              do {
                puVar1 = (void*)(lVar32 + lVar42);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                puVar1 = (void*)(lVar32 + 0x10 + lVar42);
                *puVar1 = uVar4;
                puVar1[1] = uVar4;
                puVar1[2] = uVar4;
                puVar1[3] = uVar4;
                lVar42 = lVar42 + 0x20;
              } while (uVar47 << 5 != lVar42);
            }
            if (uVar49 == uVar44) goto LAB_0182c14f;
            lVar45 = uVar44 + lVar45;
          }
          do {
            *(void*)(lVar55 + lVar45 * 4) = uVar4;
            lVar45 = lVar45 + 1;
          } while (lVar40 != lVar45);
        }
LAB_0182c14f:
        if (iVar26 < iVar25) {
          uVar49 = iVar25 - lVar53;
          if (7 < uVar49) {
            uVar47 = uVar49 & 0xfffffffffffffff8;
            uVar33 = (uVar47 - 8 >> 3) + 1;
            uVar44 = (uint64_t)((uint)uVar33 & 3);
            if (uVar47 - 8 < 0x18) {
              lVar45 = 0;
            }
            else {
              lVar40 = lVar55 + lVar53 * 4;
              lVar32 = -(uVar33 & 0xfffffffffffffffc);
              lVar45 = 0;
              do {
                puVar1 = (void*)(lVar40 + lVar45 * 4);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                puVar1 = (void*)(lVar40 + 0x10 + lVar45 * 4);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                puVar1 = (void*)(lVar40 + 0x20 + lVar45 * 4);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                puVar1 = (void*)(lVar40 + 0x30 + lVar45 * 4);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                puVar1 = (void*)(lVar40 + 0x40 + lVar45 * 4);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                puVar1 = (void*)(lVar40 + 0x50 + lVar45 * 4);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                puVar1 = (void*)(lVar40 + 0x60 + lVar45 * 4);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                puVar1 = (void*)(lVar40 + 0x70 + lVar45 * 4);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                lVar45 = lVar45 + 0x20;
                lVar32 = lVar32 + 4;
              } while (lVar32 != 0);
            }
            if (uVar44 != 0) {
              lVar40 = lVar55 + (lVar45 + lVar53) * 4;
              lVar32 = 0;
              do {
                puVar1 = (void*)(lVar40 + lVar32);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                puVar1 = (void*)(lVar40 + 0x10 + lVar32);
                *puVar1 = uVar57;
                puVar1[1] = uVar57;
                puVar1[2] = uVar57;
                puVar1[3] = uVar57;
                lVar32 = lVar32 + 0x20;
              } while (uVar44 << 5 != lVar32);
            }
            if (uVar49 == uVar47) goto LAB_0182c22f;
            lVar53 = lVar53 + uVar47;
          }
          do {
            *(void*)(lVar55 + lVar53 * 4) = uVar57;
            lVar53 = lVar53 + 1;
          } while (iVar25 != lVar53);
        }
LAB_0182c22f:
        FUN_015c15b0((float)iVar22,iVar25 - iVar24);
        FUN_015c1480((float)iVar23 + (float)iVar23,iVar25 - iVar24);
      }
      if (lVar37 != 0) {
        FUN_00d50b20();
      }
      lVar36 = lVar36 + 1;
      lVar55 = *this_ptr;
    } while (lVar36 < *(int *)(lVar55 + 0xc));
  }
  iVar23 = FUN_00e7d780(g_02421228 / local_118);
  iVar22 = 0x7f;
  if (iVar23 < 0x7f) {
    iVar22 = iVar23;
  }
  FUN_015c15b0(1,uVar50);
  FUN_015c15b0((float)iVar22,uVar50);
  local_e0 = '\0';
  local_e8 = local_40;
  FUN_00c8e4f0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  fVar58 = g_02390124;
  if (local_ec / g_02394288 <= g_02390124) {
    fVar58 = local_ec / g_02394288;
  }
  if ((g_02394254 < fVar58) && (3 < (int)local_f8)) {
    fVar59 = g_02390124 - fVar58;
    uVar49 = local_40[2];
    uVar33 = local_40[2];
    uVar44 = local_40[2];
    uVar47 = (uint64_t)uVar50;
    if (uVar50 < 8) {
      uVar46 = 0;
    }
    else {
      uVar52 = uVar44 + uVar47 * 4;
      uVar46 = 0;
      if ((uVar49 + uVar47 * 4 <= uVar44 || uVar52 <= uVar49) &&
         (uVar46 = 0, uVar33 + uVar47 * 4 <= uVar44 || uVar52 <= uVar33)) {
        uVar46 = (uint64_t)(uVar50 & 0xfffffff8);
        uVar52 = (uVar46 - 8 >> 3) + 1;
        if (uVar46 - 8 == 0) {
          lVar29 = 0;
        }
        else {
          lVar55 = -(uVar52 & 0xfffffffffffffffe);
          lVar29 = 0;
          do {
            pfVar39 = (float *)(uVar49 + lVar29 * 4);
            fVar60 = pfVar39[1];
            fVar62 = pfVar39[2];
            fVar9 = pfVar39[3];
            pfVar2 = (float *)(uVar49 + 0x10 + lVar29 * 4);
            fVar10 = *pfVar2;
            fVar11 = pfVar2[1];
            fVar12 = pfVar2[2];
            fVar13 = pfVar2[3];
            pfVar2 = (float *)(uVar33 + lVar29 * 4);
            fVar14 = pfVar2[1];
            fVar15 = pfVar2[2];
            fVar16 = pfVar2[3];
            pfVar3 = (float *)(uVar33 + 0x10 + lVar29 * 4);
            fVar17 = *pfVar3;
            fVar18 = pfVar3[1];
            fVar19 = pfVar3[2];
            fVar20 = pfVar3[3];
            pfVar3 = (float *)(uVar44 + lVar29 * 4);
            *pfVar3 = *pfVar2 * fVar58 + *pfVar39 * fVar59;
            pfVar3[1] = fVar14 * fVar58 + fVar60 * fVar59;
            pfVar3[2] = fVar15 * fVar58 + fVar62 * fVar59;
            pfVar3[3] = fVar16 * fVar58 + fVar9 * fVar59;
            pfVar39 = (float *)(uVar44 + 0x10 + lVar29 * 4);
            *pfVar39 = fVar17 * fVar58 + fVar10 * fVar59;
            pfVar39[1] = fVar18 * fVar58 + fVar11 * fVar59;
            pfVar39[2] = fVar19 * fVar58 + fVar12 * fVar59;
            pfVar39[3] = fVar20 * fVar58 + fVar13 * fVar59;
            pfVar39 = (float *)(uVar49 + 0x20 + lVar29 * 4);
            fVar60 = pfVar39[1];
            fVar62 = pfVar39[2];
            fVar9 = pfVar39[3];
            pfVar2 = (float *)(uVar49 + 0x30 + lVar29 * 4);
            fVar10 = *pfVar2;
            fVar11 = pfVar2[1];
            fVar12 = pfVar2[2];
            fVar13 = pfVar2[3];
            pfVar2 = (float *)(uVar33 + 0x20 + lVar29 * 4);
            fVar14 = pfVar2[1];
            fVar15 = pfVar2[2];
            fVar16 = pfVar2[3];
            pfVar3 = (float *)(uVar33 + 0x30 + lVar29 * 4);
            fVar17 = *pfVar3;
            fVar18 = pfVar3[1];
            fVar19 = pfVar3[2];
            fVar20 = pfVar3[3];
            pfVar3 = (float *)(uVar44 + 0x20 + lVar29 * 4);
            *pfVar3 = *pfVar2 * fVar58 + *pfVar39 * fVar59;
            pfVar3[1] = fVar14 * fVar58 + fVar60 * fVar59;
            pfVar3[2] = fVar15 * fVar58 + fVar62 * fVar59;
            pfVar3[3] = fVar16 * fVar58 + fVar9 * fVar59;
            pfVar39 = (float *)(uVar44 + 0x30 + lVar29 * 4);
            *pfVar39 = fVar17 * fVar58 + fVar10 * fVar59;
            pfVar39[1] = fVar18 * fVar58 + fVar11 * fVar59;
            pfVar39[2] = fVar19 * fVar58 + fVar12 * fVar59;
            pfVar39[3] = fVar20 * fVar58 + fVar13 * fVar59;
            lVar29 = lVar29 + 0x10;
            lVar55 = lVar55 + 2;
          } while (lVar55 != 0);
        }
        if ((uVar52 & 1) != 0) {
          pfVar39 = (float *)(uVar49 + lVar29 * 4);
          fVar60 = pfVar39[1];
          fVar62 = pfVar39[2];
          fVar9 = pfVar39[3];
          pfVar2 = (float *)(uVar49 + 0x10 + lVar29 * 4);
          fVar10 = *pfVar2;
          fVar11 = pfVar2[1];
          fVar12 = pfVar2[2];
          fVar13 = pfVar2[3];
          pfVar2 = (float *)(uVar33 + lVar29 * 4);
          fVar14 = pfVar2[1];
          fVar15 = pfVar2[2];
          fVar16 = pfVar2[3];
          pfVar3 = (float *)(uVar33 + 0x10 + lVar29 * 4);
          fVar17 = *pfVar3;
          fVar18 = pfVar3[1];
          fVar19 = pfVar3[2];
          fVar20 = pfVar3[3];
          pfVar3 = (float *)(uVar44 + lVar29 * 4);
          *pfVar3 = *pfVar2 * fVar58 + *pfVar39 * fVar59;
          pfVar3[1] = fVar14 * fVar58 + fVar60 * fVar59;
          pfVar3[2] = fVar15 * fVar58 + fVar62 * fVar59;
          pfVar3[3] = fVar16 * fVar58 + fVar9 * fVar59;
          pfVar39 = (float *)(uVar44 + 0x10 + lVar29 * 4);
          *pfVar39 = fVar17 * fVar58 + fVar10 * fVar59;
          pfVar39[1] = fVar18 * fVar58 + fVar11 * fVar59;
          pfVar39[2] = fVar19 * fVar58 + fVar12 * fVar59;
          pfVar39[3] = fVar20 * fVar58 + fVar13 * fVar59;
        }
        if (uVar46 == uVar47) goto LAB_0182c612;
      }
    }
    uVar52 = ~uVar46;
    if ((uVar50 & 1) != 0) {
      *(float *)(uVar44 + uVar46 * 4) =
           *(float *)(uVar33 + uVar46 * 4) * fVar58 + *(float *)(uVar49 + uVar46 * 4) * fVar59;
      uVar46 = uVar46 | 1;
    }
    if (uVar52 + uVar47 != 0) {
      do {
        *(float *)(uVar44 + uVar46 * 4) =
             *(float *)(uVar33 + uVar46 * 4) * fVar58 + *(float *)(uVar49 + uVar46 * 4) * fVar59;
        *(float *)(uVar44 + 4 + uVar46 * 4) =
             *(float *)(uVar33 + 4 + uVar46 * 4) * fVar58 +
             *(float *)(uVar49 + 4 + uVar46 * 4) * fVar59;
        uVar46 = uVar46 + 2;
      } while (uVar47 != uVar46);
    }
  }
LAB_0182c612:
  FUN_00c8e690();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  lVar29 = *this_ptr;
  if (0 < *(int *)(lVar29 + 0xc)) {
    fVar59 = (local_ec + g_0240e328) / g_02390128;
    fVar58 = 0.0;
    if (0.0 <= fVar59) {
      fVar58 = fVar59;
    }
    fVar58 = g_02390124 - fVar58;
    fVar59 = local_fc / local_118;
    fVar60 = g_023d5000;
    if (fVar59 <= g_023d5000) {
      fVar60 = fVar59;
    }
    lVar55 = 0;
    local_118 = fVar58;
    fStack_114 = fVar58;
    fStack_110 = fVar58;
    fStack_10c = fVar58;
    do {
      lVar29 = *(int64_t *)(*(int64_t *)(lVar29 + 0x10) + lVar55 * 8);
      if (lVar29 != 0) {
        fVar59 = (float)FUN_00d50b00();
      }
      local_150 = '\0';
      local_158 = lVar29;
      FUN_0133ae40(fVar59,&local_158);
      iVar22 = FUN_00d45870();
      uVar57 = extraout_XMM0_Da_03;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar57 = FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != 0)) {
        uVar57 = FUN_00d50b20();
      }
      local_140 = '\0';
      local_148 = lVar29;
      FUN_0133ae40(uVar57,&local_148);
      iVar23 = FUN_00d45870();
      uVar57 = extraout_XMM0_Da_04;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar57 = FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        uVar57 = FUN_00d50b20();
      }
      local_130 = '\0';
      local_138 = lVar29;
      FUN_0133ae40(uVar57,&local_138);
      iVar24 = FUN_00d45870();
      uVar57 = extraout_XMM0_Da_05;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar57 = FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != 0)) {
        uVar57 = FUN_00d50b20();
      }
      local_120 = '\0';
      local_128 = lVar29;
      FUN_0133ae40(uVar57,&local_128);
      iVar25 = FUN_00d45870();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != 0)) {
        FUN_00d50b20();
      }
      if (iVar22 < iVar23) {
        lVar36 = local_40[2];
        lVar37 = local_40[2];
        lVar53 = local_40[2];
        uVar49 = (uint64_t)iVar22;
        uVar44 = (uint64_t)iVar23;
        uVar33 = uVar44 - uVar49;
        if (7 < uVar33) {
          uVar47 = lVar53 + uVar49 * 4;
          uVar52 = lVar53 + uVar44 * 4;
          if ((lVar36 + uVar44 * 4 <= uVar47 || uVar52 <= lVar36 + uVar49 * 4) &&
             (lVar37 + uVar44 * 4 <= uVar47 || uVar52 <= lVar37 + uVar49 * 4)) {
            uVar52 = uVar33 & 0xfffffffffffffff8;
            uVar47 = (uVar52 - 8 >> 3) + 1;
            if (uVar52 - 8 == 0) {
              lVar40 = 0;
LAB_0182c9ed:
              lVar40 = lVar40 + uVar49;
              pfVar39 = (float *)(lVar36 + lVar40 * 4);
              fVar59 = pfVar39[1];
              fVar62 = pfVar39[2];
              fVar9 = pfVar39[3];
              pfVar2 = (float *)(lVar36 + 0x10 + lVar40 * 4);
              fVar10 = *pfVar2;
              fVar11 = pfVar2[1];
              fVar12 = pfVar2[2];
              fVar13 = pfVar2[3];
              pfVar2 = (float *)(lVar37 + lVar40 * 4);
              fVar14 = pfVar2[1];
              fVar15 = pfVar2[2];
              fVar16 = pfVar2[3];
              pfVar3 = (float *)(lVar37 + 0x10 + lVar40 * 4);
              fVar17 = *pfVar3;
              fVar18 = pfVar3[1];
              fVar19 = pfVar3[2];
              fVar20 = pfVar3[3];
              pfVar3 = (float *)(lVar53 + lVar40 * 4);
              *pfVar3 = *pfVar39 - *pfVar2;
              pfVar3[1] = fVar59 - fVar14;
              pfVar3[2] = fVar62 - fVar15;
              pfVar3[3] = fVar9 - fVar16;
              pfVar39 = (float *)(lVar53 + 0x10 + lVar40 * 4);
              *pfVar39 = fVar10 - fVar17;
              pfVar39[1] = fVar11 - fVar18;
              pfVar39[2] = fVar12 - fVar19;
              pfVar39[3] = fVar13 - fVar20;
            }
            else {
              lVar32 = lVar53 + uVar49 * 4;
              lVar45 = lVar37 + uVar49 * 4;
              lVar42 = lVar36 + uVar49 * 4;
              lVar54 = -(uVar47 & 0xfffffffffffffffe);
              lVar40 = 0;
              do {
                pfVar39 = (float *)(lVar42 + lVar40 * 4);
                fVar59 = pfVar39[1];
                fVar62 = pfVar39[2];
                fVar9 = pfVar39[3];
                pfVar2 = (float *)(lVar42 + 0x10 + lVar40 * 4);
                fVar10 = *pfVar2;
                fVar11 = pfVar2[1];
                fVar12 = pfVar2[2];
                fVar13 = pfVar2[3];
                pfVar2 = (float *)(lVar45 + lVar40 * 4);
                fVar14 = pfVar2[1];
                fVar15 = pfVar2[2];
                fVar16 = pfVar2[3];
                pfVar3 = (float *)(lVar45 + 0x10 + lVar40 * 4);
                fVar17 = *pfVar3;
                fVar18 = pfVar3[1];
                fVar19 = pfVar3[2];
                fVar20 = pfVar3[3];
                pfVar3 = (float *)(lVar32 + lVar40 * 4);
                *pfVar3 = *pfVar39 - *pfVar2;
                pfVar3[1] = fVar59 - fVar14;
                pfVar3[2] = fVar62 - fVar15;
                pfVar3[3] = fVar9 - fVar16;
                pfVar39 = (float *)(lVar32 + 0x10 + lVar40 * 4);
                *pfVar39 = fVar10 - fVar17;
                pfVar39[1] = fVar11 - fVar18;
                pfVar39[2] = fVar12 - fVar19;
                pfVar39[3] = fVar13 - fVar20;
                pfVar2 = (float *)(lVar42 + 0x20 + lVar40 * 4);
                fVar59 = pfVar2[1];
                fVar62 = pfVar2[2];
                fVar9 = pfVar2[3];
                pfVar39 = (float *)(lVar42 + 0x30 + lVar40 * 4);
                fVar10 = *pfVar39;
                fVar11 = pfVar39[1];
                fVar12 = pfVar39[2];
                fVar13 = pfVar39[3];
                pfVar3 = (float *)(lVar45 + 0x20 + lVar40 * 4);
                fVar14 = pfVar3[1];
                fVar15 = pfVar3[2];
                fVar16 = pfVar3[3];
                pfVar39 = (float *)(lVar45 + 0x30 + lVar40 * 4);
                fVar17 = *pfVar39;
                fVar18 = pfVar39[1];
                fVar19 = pfVar39[2];
                fVar20 = pfVar39[3];
                pfVar39 = (float *)(lVar32 + 0x20 + lVar40 * 4);
                *pfVar39 = *pfVar2 - *pfVar3;
                pfVar39[1] = fVar59 - fVar14;
                pfVar39[2] = fVar62 - fVar15;
                pfVar39[3] = fVar9 - fVar16;
                pfVar39 = (float *)(lVar32 + 0x30 + lVar40 * 4);
                *pfVar39 = fVar10 - fVar17;
                pfVar39[1] = fVar11 - fVar18;
                pfVar39[2] = fVar12 - fVar19;
                pfVar39[3] = fVar13 - fVar20;
                lVar40 = lVar40 + 0x10;
                lVar54 = lVar54 + 2;
              } while (lVar54 != 0);
              if ((uVar47 & 1) != 0) goto LAB_0182c9ed;
            }
            if (uVar33 == uVar52) goto LAB_0182cace;
            uVar49 = uVar49 + uVar52;
          }
        }
        uVar34 = iVar23 - (int)uVar49;
        uVar47 = ~uVar49;
        uVar33 = (uint64_t)uVar34 & 3;
        if ((uVar34 & 3) != 0) {
          do {
            *(float *)(lVar53 + uVar49 * 4) =
                 *(float *)(lVar36 + uVar49 * 4) - *(float *)(lVar37 + uVar49 * 4);
            uVar49 = uVar49 + 1;
            uVar33 = uVar33 - 1;
          } while (uVar33 != 0);
        }
        if (2 < uVar47 + uVar44) {
          do {
            *(float *)(lVar53 + uVar49 * 4) =
                 *(float *)(lVar36 + uVar49 * 4) - *(float *)(lVar37 + uVar49 * 4);
            *(float *)(lVar53 + 4 + uVar49 * 4) =
                 *(float *)(lVar36 + 4 + uVar49 * 4) - *(float *)(lVar37 + 4 + uVar49 * 4);
            *(float *)(lVar53 + 8 + uVar49 * 4) =
                 *(float *)(lVar36 + 8 + uVar49 * 4) - *(float *)(lVar37 + 8 + uVar49 * 4);
            *(float *)(lVar53 + 0xc + uVar49 * 4) =
                 *(float *)(lVar36 + 0xc + uVar49 * 4) - *(float *)(lVar37 + 0xc + uVar49 * 4);
            uVar49 = uVar49 + 4;
          } while (uVar44 != uVar49);
        }
      }
LAB_0182cace:
      fVar59 = fVar60;
      if ((g_0239011c < fVar60) && (iVar24 != -1)) {
        fVar59 = (float)FUN_015c15b0(fVar60,iVar25 - iVar24);
      }
      if (iVar22 < iVar23) {
        lVar36 = local_40[2];
        lVar37 = local_40[2];
        lVar53 = local_40[2];
        uVar33 = (uint64_t)iVar22;
        uVar44 = (uint64_t)iVar23;
        uVar49 = uVar44 - uVar33;
        if (7 < uVar49) {
          uVar47 = lVar53 + uVar33 * 4;
          uVar52 = lVar53 + uVar44 * 4;
          if ((lVar36 + uVar44 * 4 <= uVar47 || uVar52 <= lVar36 + uVar33 * 4) &&
             (lVar37 + uVar44 * 4 <= uVar47 || uVar52 <= lVar37 + uVar33 * 4)) {
            uVar52 = uVar49 & 0xfffffffffffffff8;
            uVar47 = (uVar52 - 8 >> 3) + 1;
            if (uVar52 - 8 == 0) {
              lVar40 = 0;
LAB_0182cc51:
              lVar40 = lVar40 + uVar33;
              pfVar39 = (float *)(lVar36 + lVar40 * 4);
              fVar59 = *pfVar39;
              fVar12 = pfVar39[1];
              fVar13 = pfVar39[2];
              fVar14 = pfVar39[3];
              pfVar39 = (float *)(lVar36 + 0x10 + lVar40 * 4);
              fVar62 = *pfVar39;
              fVar9 = pfVar39[1];
              fVar10 = pfVar39[2];
              fVar11 = pfVar39[3];
              pfVar39 = (float *)(lVar37 + lVar40 * 4);
              fVar15 = pfVar39[1];
              fVar16 = pfVar39[2];
              fVar17 = pfVar39[3];
              pfVar2 = (float *)(lVar37 + 0x10 + lVar40 * 4);
              fVar18 = *pfVar2;
              fVar19 = pfVar2[1];
              fVar20 = pfVar2[2];
              fVar21 = pfVar2[3];
              pfVar2 = (float *)(lVar53 + lVar40 * 4);
              *pfVar2 = *pfVar39 * local_118 + fVar59;
              pfVar2[1] = fVar15 * fStack_114 + fVar12;
              pfVar2[2] = fVar16 * fStack_110 + fVar13;
              pfVar2[3] = fVar17 * fStack_10c + fVar14;
              pfVar39 = (float *)(lVar53 + 0x10 + lVar40 * 4);
              *pfVar39 = fVar18 * local_118 + fVar62;
              pfVar39[1] = fVar19 * fStack_114 + fVar9;
              pfVar39[2] = fVar20 * fStack_110 + fVar10;
              pfVar39[3] = fVar21 * fStack_10c + fVar11;
            }
            else {
              lVar32 = lVar53 + uVar33 * 4;
              lVar45 = lVar37 + uVar33 * 4;
              lVar42 = lVar36 + uVar33 * 4;
              lVar54 = -(uVar47 & 0xfffffffffffffffe);
              lVar40 = 0;
              do {
                pfVar39 = (float *)(lVar42 + lVar40 * 4);
                fVar59 = pfVar39[1];
                fVar62 = pfVar39[2];
                fVar9 = pfVar39[3];
                pfVar2 = (float *)(lVar42 + 0x10 + lVar40 * 4);
                fVar10 = *pfVar2;
                fVar11 = pfVar2[1];
                fVar12 = pfVar2[2];
                fVar13 = pfVar2[3];
                pfVar2 = (float *)(lVar45 + lVar40 * 4);
                fVar14 = pfVar2[1];
                fVar15 = pfVar2[2];
                fVar16 = pfVar2[3];
                pfVar3 = (float *)(lVar45 + 0x10 + lVar40 * 4);
                fVar17 = *pfVar3;
                fVar18 = pfVar3[1];
                fVar19 = pfVar3[2];
                fVar20 = pfVar3[3];
                pfVar3 = (float *)(lVar32 + lVar40 * 4);
                *pfVar3 = *pfVar2 * local_118 + *pfVar39;
                pfVar3[1] = fVar14 * fStack_114 + fVar59;
                pfVar3[2] = fVar15 * fStack_110 + fVar62;
                pfVar3[3] = fVar16 * fStack_10c + fVar9;
                pfVar39 = (float *)(lVar32 + 0x10 + lVar40 * 4);
                *pfVar39 = fVar17 * local_118 + fVar10;
                pfVar39[1] = fVar18 * fStack_114 + fVar11;
                pfVar39[2] = fVar19 * fStack_110 + fVar12;
                pfVar39[3] = fVar20 * fStack_10c + fVar13;
                pfVar39 = (float *)(lVar42 + 0x20 + lVar40 * 4);
                fVar59 = *pfVar39;
                fVar62 = pfVar39[1];
                fVar9 = pfVar39[2];
                fVar10 = pfVar39[3];
                pfVar39 = (float *)(lVar42 + 0x30 + lVar40 * 4);
                fVar11 = *pfVar39;
                fVar12 = pfVar39[1];
                fVar13 = pfVar39[2];
                fVar14 = pfVar39[3];
                pfVar2 = (float *)(lVar45 + 0x20 + lVar40 * 4);
                fVar15 = pfVar2[1];
                fVar16 = pfVar2[2];
                fVar17 = pfVar2[3];
                pfVar39 = (float *)(lVar45 + 0x30 + lVar40 * 4);
                fVar18 = *pfVar39;
                fVar19 = pfVar39[1];
                fVar20 = pfVar39[2];
                fVar21 = pfVar39[3];
                pfVar39 = (float *)(lVar32 + 0x20 + lVar40 * 4);
                *pfVar39 = *pfVar2 * local_118 + fVar59;
                pfVar39[1] = fVar15 * fStack_114 + fVar62;
                pfVar39[2] = fVar16 * fStack_110 + fVar9;
                pfVar39[3] = fVar17 * fStack_10c + fVar10;
                pfVar39 = (float *)(lVar32 + 0x30 + lVar40 * 4);
                *pfVar39 = fVar18 * local_118 + fVar11;
                pfVar39[1] = fVar19 * fStack_114 + fVar12;
                pfVar39[2] = fVar20 * fStack_110 + fVar13;
                pfVar39[3] = fVar21 * fStack_10c + fVar14;
                lVar40 = lVar40 + 0x10;
                lVar54 = lVar54 + 2;
              } while (lVar54 != 0);
              if ((uVar47 & 1) != 0) goto LAB_0182cc51;
            }
            if (uVar49 == uVar52) goto LAB_0182cd06;
            uVar33 = uVar33 + uVar52;
          }
        }
        uVar49 = uVar33;
        if ((iVar23 - (int)uVar33 & 1U) != 0) {
          fVar59 = *(float *)(lVar37 + uVar33 * 4) * fVar58 + *(float *)(lVar36 + uVar33 * 4);
          *(float *)(lVar53 + uVar33 * 4) = fVar59;
          uVar49 = uVar33 + 1;
        }
        if (~uVar33 + uVar44 != 0) {
          do {
            *(float *)(lVar53 + uVar49 * 4) =
                 *(float *)(lVar37 + uVar49 * 4) * fVar58 + *(float *)(lVar36 + uVar49 * 4);
            fVar59 = *(float *)(lVar37 + 4 + uVar49 * 4) * fVar58 +
                     *(float *)(lVar36 + 4 + uVar49 * 4);
            *(float *)(lVar53 + 4 + uVar49 * 4) = fVar59;
            uVar49 = uVar49 + 2;
          } while (uVar44 != uVar49);
        }
      }
LAB_0182cd06:
      if (lVar29 != 0) {
        fVar59 = (float)FUN_00d50b20();
      }
      lVar55 = lVar55 + 1;
      lVar29 = *this_ptr;
    } while (lVar55 < *(int *)(lVar29 + 0xc));
  }
  if (3 < (int)local_f8) {
    lVar29 = local_40[2];
    lVar55 = *(int64_t *)(*in_R9 + 0x10);
    lVar36 = local_40[2];
    lVar37 = *(int64_t *)(*local_res8 + 0x10);
    lVar53 = local_40[2];
    lVar40 = *(int64_t *)(*in_R8 + 0x10);
    uVar49 = 0;
    do {
      fVar58 = (float)_exp2f((*(float *)(lVar29 + uVar49 * 4) - param_1) * g_023941f4);
      *(float *)(lVar55 + uVar49 * 4) = fVar58 * g_023941f8;
      fVar58 = (float)_exp2f(*(float *)(lVar36 + uVar49 * 4) * g_023941f4);
      *(float *)(lVar37 + uVar49 * 4) = fVar58 * g_023941f8;
      fVar58 = (float)_exp2f(*(float *)(lVar53 + uVar49 * 4) * g_023941f4);
      *(float *)(lVar40 + uVar49 * 4) = fVar58 * g_023941f8;
      uVar49 = uVar49 + 1;
    } while (uVar50 != uVar49);
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if (puVar30 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

