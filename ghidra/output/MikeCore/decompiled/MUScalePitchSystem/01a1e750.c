// Function: FUN_01a1e750
// Address: 01a1e750
// Size: 5981 bytes
// Class: MUScalePitchSystem
// String references:
//   "MUScalePitchSystem"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a1e750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong **pplVar13;
  void *pvVar14;
  longlong lVar15;
  char *pcVar16;
  pthread_key_t pVar17;
  longlong *in_RCX;
  longlong *plVar18;
  ulonglong uVar19;
  char *pcVar20;
  longlong *plVar21;
  char in_DL;
  longlong *plVar22;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar23;
  int iVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined8 in_XMM1_Qb;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 in_XMM2_Qb;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined8 in_XMM3_Qb;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fStack_2b4;
  float fStack_2ac;
  float local_298;
  uint uStack_294;
  uint uStack_290;
  uint uStack_28c;
  float fStack_284;
  float fStack_27c;
  longlong local_248;
  char local_240;
  longlong local_238;
  char local_230;
  longlong *local_228;
  char local_220;
  longlong local_218;
  char local_210;
  longlong *local_208;
  char local_200;
  longlong *local_1f8;
  char local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong *local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  undefined1 local_1a8 [16];
  int local_18c;
  longlong *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong *local_b0;
  char local_a8;
  longlong *local_80;
  char local_58 [8];
  longlong *local_50;
  char local_42;
  char local_41;
  longlong *local_40;
  char local_38 [8];
  
  local_1e8 = (undefined4)param_3;
  uStack_1e4 = (undefined4)((ulonglong)param_3 >> 0x20);
  uStack_1e0 = (undefined4)in_XMM2_Qb;
  uStack_1dc = (undefined4)((ulonglong)in_XMM2_Qb >> 0x20);
  plVar18 = in_RCX;
  uVar29 = (**(code **)(*unaff_RDI + 0x640))();
  plVar4 = local_40;
  pVar17 = (pthread_key_t)plVar18;
  if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
      (uVar29 = FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
    uVar29 = FUN_00d50b20();
  }
  lVar15 = DAT_026e41f0;
  if (DAT_026e41f0 != 0) {
    uVar29 = FUN_00d50b00();
  }
  local_248 = lVar15;
  local_240 = '\x01';
  (**(code **)(*plVar4 + 0x3b0))(uVar29,&local_248);
  plVar18 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  fStack_2ac = (float)((ulonglong)in_XMM1_Qb >> 0x20);
  fStack_27c = (float)((ulonglong)in_XMM0_Qb >> 0x20);
  if ((local_240 != '\0') && (local_248 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  (**(code **)(*unaff_RDI + 0x928))();
  plVar21 = local_40;
  local_e8 = local_40;
  fStack_284 = (float)((ulonglong)param_1 >> 0x20);
  fStack_2b4 = (float)((ulonglong)param_2 >> 0x20);
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      local_e0 = '\x01';
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a1e88f;
    }
    local_e8 = (longlong *)0x0;
    local_e0 = '\x01';
  }
  else {
    local_e0 = '\x01';
LAB_01a1e88f:
    if (plVar21 != (longlong *)0x0) {
      if ((DAT_028b2a40 == (undefined8 *)0x0) || (DAT_028b2a49 == '\0')) {
        FUN_00e8cb50();
        if (DAT_028b2a40 == (undefined8 *)0x0) {
          puVar12 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          pVar17 = 0x26792c0;
          *puVar12 = &DAT_026792c0;
          puVar12[5] = 0;
          *(undefined8 *)((longlong)puVar12 + 0xc) = 0;
          *(undefined8 *)((longlong)puVar12 + 0x14) = 0;
          *(undefined8 *)((longlong)puVar12 + 0x19) = 0;
          (*DAT_026792d8)();
          if (DAT_028b2a40 == puVar12) {
            bVar26 = false;
            bVar25 = false;
          }
          else {
            bVar26 = true;
            bVar25 = true;
            bVar27 = DAT_028b2a40 != (undefined8 *)0x0;
            DAT_028b2a40 = puVar12;
            if (bVar27) {
              FUN_00d50b20();
            }
          }
          if (DAT_028b2a48 == '\0') {
            DAT_028b2a48 = '\x01';
            FUN_00e8cb90();
            bVar25 = bVar26;
          }
          if (!bVar25) {
            FUN_00d50b20();
          }
          puVar12 = DAT_028b2a40;
          if ((*(float *)(DAT_028b2a40 + 2) != DAT_02390128) ||
             (NAN(*(float *)(DAT_028b2a40 + 2)) || NAN(DAT_02390128))) {
            *(undefined4 *)(DAT_028b2a40 + 2) = 0x3f333333;
            *(undefined1 *)((longlong)puVar12 + 0xe) = 0xb3;
          }
          if ((*(float *)((longlong)puVar12 + 0x14) != DAT_02390128) ||
             (NAN(*(float *)((longlong)puVar12 + 0x14)) || NAN(DAT_02390128))) {
            *(undefined4 *)((longlong)puVar12 + 0x14) = 0x3f333333;
            *(undefined1 *)((longlong)puVar12 + 0xd) = 0xb3;
          }
          if ((*(float *)(puVar12 + 3) != DAT_02390128) ||
             (NAN(*(float *)(puVar12 + 3)) || NAN(DAT_02390128))) {
            *(undefined4 *)(puVar12 + 3) = 0x3f333333;
            *(undefined1 *)((longlong)puVar12 + 0xc) = 0xb3;
          }
          DAT_028b2a49 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028b2a49 = '\x01';
          FUN_00e8cb70();
        }
      }
      FUN_01a1d6e0();
      uVar9 = (**(code **)(*local_40 + 0xd08))();
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      FUN_01a20c30();
      plVar5 = local_40;
      if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_18c = (int)unaff_RDI[0x29];
      if ((DAT_027c0160 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
        _DAT_0270ab28 = FUN_0015ea50();
        _DAT_0270ab10 = "MUScalePitchSystem";
        _DAT_0270ab18 = 0x78;
        pVar17 = 0x15ecf0;
        _DAT_0270ab20 = FUN_0015ecf0;
        _DAT_0270ab30 = 0;
        uRam000000000270ab38 = 0;
        _DAT_0270ab40 = 0;
        uRam000000000270ab48 = 0;
        _DAT_0270ab50 = 0;
        uRam000000000270ab58 = 0;
        _DAT_0270ab60 = 0;
        uRam000000000270ab68 = 0;
        _DAT_0270ab70 = 0;
        uRam000000000270ab78 = 0;
        _DAT_0270ab80 = 0;
        uRam000000000270ab88 = 0;
        _DAT_0270ab90 = 0;
        uRam000000000270ab98 = 0;
        _DAT_0270aba0 = 0;
        uRam000000000270aba8 = 0;
        _DAT_0270abb0 = 0;
        uRam000000000270abb8 = 0;
        _DAT_0270abc0 = 0;
        uRam000000000270abc8 = 0;
        _DAT_0270abd0 = 0;
        ___cxa_guard_release();
      }
      (**(code **)(*plVar21 + 0x360))();
      cVar6 = FUN_00e85ea0();
      if (cVar6 == '\0') {
        pplVar13 = (longlong **)&DAT_02802688;
      }
      else {
        pplVar13 = &local_e8;
      }
      plVar21 = *pplVar13;
      cVar6 = *(char *)(pplVar13 + 1);
      if ((cVar6 != '\0') && (plVar21 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      auVar32._4_4_ = fStack_284 + fStack_2b4;
      auVar32._12_4_ = fStack_27c + fStack_2ac;
      auVar32._0_4_ = auVar32._4_4_;
      auVar32._8_4_ = auVar32._12_4_;
      auVar38._4_12_ = auVar32._4_12_;
      auVar38._0_4_ = auVar32._4_4_ + DAT_02390d00;
      uVar28 = (**(code **)(*unaff_RDI + 0x920))(auVar38._0_8_);
      plVar22 = local_e8;
      local_1a8._0_4_ = uVar28;
      pvVar14 = _pthread_getspecific(pVar17);
      plVar23 = plVar22;
      if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        plVar23 = (longlong *)plVar22[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      iVar10 = (**(code **)(*plVar23 + 0x3a8))();
      uVar28 = (**(code **)(*unaff_RDI + 0x920))();
      local_1a8._0_4_ = uVar28;
      pvVar14 = _pthread_getspecific(pVar17);
      if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        plVar22 = (longlong *)plVar22[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      iVar11 = (**(code **)(*plVar22 + 0x3a8))();
      plVar22 = local_e8;
      bVar25 = local_18c == 2;
      bVar26 = local_18c == 4;
      uVar19 = (ulonglong)CONCAT31((int3)((uint)local_18c >> 8),bVar26);
      local_50 = plVar21;
      if (iVar10 + -1 <= iVar11 + 1) {
        do {
          pVar17 = (pthread_key_t)uVar19;
          pvVar14 = _pthread_getspecific(pVar17);
          plVar21 = plVar22;
          if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            plVar21 = (longlong *)plVar22[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          iVar24 = iVar10 + -1;
          (**(code **)(*plVar21 + 0x3a0))();
          local_1a8._0_8_ = (**(code **)(*unaff_RDI + 0x918))();
          local_1a8._8_8_ = extraout_XMM0_Qb;
          pvVar14 = _pthread_getspecific(pVar17);
          plVar21 = plVar22;
          if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            plVar21 = (longlong *)plVar22[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar21 + 0x3a0))();
          local_d8 = (**(code **)(*unaff_RDI + 0x918))();
          uStack_d0 = extraout_XMM0_Qb_00;
          pvVar14 = _pthread_getspecific(pVar17);
          plVar21 = plVar22;
          if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            plVar21 = (longlong *)plVar22[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar21 + 0x3a0))();
          uVar29 = (**(code **)(*unaff_RDI + 0x918))();
          cVar7 = FUN_00e7b510();
          if (uVar9 == 2) {
            bVar27 = false;
            if ((local_18c != 2) && (local_18c != 4)) {
              if (local_50 == (longlong *)0x0) {
                bVar27 = false;
              }
              else {
                pvVar14 = _pthread_getspecific(pVar17);
                if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  pVar17 = (pthread_key_t)local_50;
                }
                FUN_0173b6f0();
                pvVar14 = _pthread_getspecific(pVar17);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01736e70();
                FUN_00d23310();
                plVar21 = local_40;
                local_58[0] = local_38[0];
                pcVar20 = local_58;
                pcVar16 = local_38;
                if (local_38[0] == '\0') {
                  pcVar16 = pcVar20;
                }
                *pcVar16 = '\0';
                if ((local_38[0] != '\0') && (plVar21 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pVar17 = (pthread_key_t)pcVar20;
                pvVar14 = _pthread_getspecific(pVar17);
                if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  pVar17 = (pthread_key_t)local_50;
                }
                FUN_01740240();
                bVar27 = plVar21 == local_40;
                if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_58[0] != '\0') && (plVar21 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_230 != '\0') && (local_238 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
            if (cVar7 == '\0') {
              pvVar14 = _pthread_getspecific(pVar17);
              plVar21 = plVar22;
              if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                plVar21 = (longlong *)plVar22[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
              }
              cVar7 = (**(code **)(*plVar21 + 0x3b8))();
              if (cVar7 != '\0') goto LAB_01a1f255;
              FUN_01a1e380();
              plVar21 = local_40;
              local_1c0 = 0;
              if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              local_1c8 = plVar21;
              local_1c0 = '\x01';
              FUN_01d488d0();
              if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
LAB_01a1f188:
              FUN_01a1dd20();
              plVar21 = local_40;
              local_1d0 = 0;
              if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              local_1d8 = plVar21;
              local_1d0 = '\x01';
              FUN_01d488d0();
              if ((local_1d0 != '\0') && (local_1d8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            bVar27 = false;
            if (cVar7 != '\0') goto LAB_01a1f188;
LAB_01a1f255:
            FUN_01a1e050();
            plVar21 = local_40;
            local_1b0 = 0;
            if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b00();
            }
            local_1b8 = plVar21;
            local_1b0 = '\x01';
            FUN_01d488d0();
            if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          auVar30._0_4_ = local_1a8._0_4_ & _DAT_023945e0;
          auVar30._4_4_ = local_1a8._4_4_ & _UNK_023945e4;
          auVar30._8_4_ = local_1a8._8_4_ & _UNK_023945e8;
          auVar30._12_4_ = local_1a8._12_4_ & _UNK_023945ec;
          auVar31._4_12_ = SUB1612(auVar30 | _DAT_023945f0,4);
          auVar31._0_4_ = SUB164(auVar30 | _DAT_023945f0,0) + (float)local_1a8._0_4_;
          auVar32 = roundss(auVar31,auVar31,0xb);
          auVar36._0_4_ = (uint)(float)local_d8 & _DAT_023945e0;
          auVar36._4_4_ = local_d8._4_4_ & _UNK_023945e4;
          auVar36._8_4_ = (uint)uStack_d0 & _UNK_023945e8;
          auVar36._12_4_ = uStack_d0._4_4_ & _UNK_023945ec;
          auVar37._4_12_ = SUB1612(auVar36 | _DAT_023945f0,4);
          auVar37._0_4_ = SUB164(auVar36 | _DAT_023945f0,0) + (float)local_d8;
          auVar38 = roundss(auVar37,auVar37,0xb);
          local_298 = (float)uVar29;
          uStack_294 = (uint)((ulonglong)uVar29 >> 0x20);
          uStack_290 = (uint)extraout_XMM0_Qb_01;
          uStack_28c = (uint)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
          auVar39._0_4_ = (uint)local_298 & _DAT_023945e0;
          auVar39._4_4_ = uStack_294 & _UNK_023945e4;
          auVar39._8_4_ = uStack_290 & _UNK_023945e8;
          auVar39._12_4_ = uStack_28c & _UNK_023945ec;
          auVar40._4_12_ = SUB1612(auVar39 | ZEXT416(DAT_02394dc8),4);
          auVar40._0_4_ = SUB164(auVar39 | ZEXT416(DAT_02394dc8),0) + local_298;
          auVar41 = roundss(auVar40,auVar40,0xb);
          fVar35 = (auVar38._0_4_ + auVar32._0_4_) * DAT_0239011c;
          auVar43._0_4_ = (uint)fVar35 & _DAT_023945e0;
          auVar43._4_4_ = auVar38._4_4_ & _UNK_023945e4;
          auVar43._8_4_ = auVar38._8_4_ & _UNK_023945e8;
          auVar43._12_4_ = auVar38._12_4_ & _UNK_023945ec;
          auVar44._4_12_ = SUB1612(auVar43 | ZEXT416(DAT_02394dc8),4);
          auVar44._0_4_ = SUB164(auVar43 | ZEXT416(DAT_02394dc8),0) + fVar35;
          auVar38 = roundss(auVar44,auVar44,0xb);
          fVar35 = (auVar41._0_4_ + auVar32._0_4_) * DAT_0239011c;
          auVar33._0_4_ = (uint)fVar35 & _DAT_023945e0;
          auVar33._4_4_ = auVar41._4_4_ & _UNK_023945e4;
          auVar33._8_4_ = auVar41._8_4_ & _UNK_023945e8;
          auVar33._12_4_ = auVar41._12_4_ & _UNK_023945ec;
          auVar34._4_12_ = SUB1612(auVar33 | ZEXT416(DAT_02394dc8),4);
          auVar34._0_4_ = SUB164(auVar33 | ZEXT416(DAT_02394dc8),0) + fVar35;
          auVar42._0_12_ = ZEXT812(0);
          auVar42._12_4_ = 0;
          local_1a8 = roundss(auVar42,auVar34,0xb);
          auVar45._4_12_ = auVar38._4_12_;
          auVar45._0_4_ = auVar38._0_4_ - local_1a8._0_4_;
          auVar1._4_4_ = uStack_1e4;
          auVar1._0_4_ = local_1e8;
          auVar1._8_4_ = uStack_1e0;
          auVar1._12_4_ = uStack_1dc;
          insertps(auVar1,local_1a8,0x10);
          auVar41._8_8_ = in_XMM3_Qb;
          auVar41._0_8_ = param_4;
          insertps(auVar41,auVar45,0x10);
          (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
          if (plVar5 != (longlong *)0x0) {
            local_228 = plVar5;
            local_220 = '\0';
            FUN_01d48a10();
            if ((local_220 != '\0') && (local_228 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            lVar15 = DAT_026e3bc8;
            if (DAT_026e3bc8 != 0) {
              FUN_00d50b00();
            }
            local_d8 = lVar15;
            pvVar14 = _pthread_getspecific(pVar17);
            plVar21 = plVar22;
            if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
              plVar21 = (longlong *)plVar22[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            }
            cVar8 = (**(code **)(*plVar21 + 1000))();
            lVar3 = DAT_027e1380;
            local_42 = '\x01';
            lVar15 = local_d8;
            cVar7 = in_DL;
            if (cVar8 != '\0') {
              lVar15 = *in_RCX;
              if (lVar15 == 0) {
                if (DAT_027e1380 != 0) {
                  FUN_00d50b00();
                }
                if (local_d8 == lVar3) {
                  if (local_d8 == 0) {
                    local_d8 = 0;
                    lVar15 = local_d8;
                    cVar7 = in_DL;
                  }
                  else {
                    FUN_00d50b20();
                    lVar15 = local_d8;
                    cVar7 = in_DL;
                  }
                }
                else {
                  if (local_d8 != 0) {
                    FUN_00d50b20();
                  }
                  local_d8 = lVar3;
                  lVar15 = local_d8;
                  cVar7 = in_DL;
                }
              }
              else {
                local_41 = '\x01';
                if (lVar15 == local_d8) {
                  local_42 = '\x01';
                  lVar15 = local_d8;
                  cVar7 = local_41;
                }
                else {
                  local_42 = (char)in_RCX[1];
                  if (local_42 != '\0') {
                    FUN_00d50b00();
                  }
                  cVar7 = local_41;
                  if (local_d8 != 0) {
                    FUN_00d50b20();
                    cVar7 = local_41;
                  }
                }
              }
            }
            local_41 = cVar7;
            local_d8 = lVar15;
            FUN_01a1d6e0();
            plVar21 = local_40;
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar21 == (longlong *)0x0) {
              local_80 = (longlong *)0x0;
              bVar2 = false;
            }
            else {
              FUN_01a1d6e0();
              local_218 = local_d8;
              local_210 = '\0';
              FUN_01998ff0(&local_218,iVar24,0);
              local_80 = local_40;
              plVar21 = local_40;
              if (local_40 == (longlong *)0x0) {
                bVar2 = false;
              }
              else if (local_38[0] == '\0') {
                FUN_00d50b00();
                bVar2 = true;
                if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38[0] = '\0';
                bVar2 = true;
              }
              pVar17 = (pthread_key_t)plVar21;
              if ((local_210 != '\0') && (local_218 != 0)) {
                FUN_00d50b20();
              }
              if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (uVar9 == 0 || (bVar25 || bVar26)) {
              FUN_01a34870();
              local_188 = local_40;
              local_180 = 0;
              if (local_38[0] == '\0') {
                if (local_40 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38[0] = '\0';
              }
              local_180 = '\x01';
              FUN_01d488d0();
              if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if (uVar9 == 1) {
              FUN_01a34870();
              local_178 = local_40;
              local_170 = 0;
              if (local_38[0] == '\0') {
                if (local_40 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38[0] = '\0';
              }
              local_170 = '\x01';
              FUN_01d488d0();
              if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if (bVar27) {
              (**(code **)(*unaff_RDI + 0x640))();
              (**(code **)(*local_b0 + 0x390))();
              local_168 = local_40;
              local_160 = 0;
              if (local_38[0] == '\0') {
                if (local_40 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38[0] = '\0';
              }
              local_160 = '\x01';
              FUN_01d488d0();
              if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar14 = _pthread_getspecific(pVar17);
              plVar21 = plVar22;
              if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                plVar21 = (longlong *)plVar22[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
              }
              cVar7 = (**(code **)(*plVar21 + 0x3b8))();
              if (cVar7 == '\0') {
                (**(code **)(*unaff_RDI + 0x640))();
                (**(code **)(*local_b0 + 0x3a8))();
                local_148 = local_40;
                local_140 = 0;
                if (local_38[0] == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38[0] = '\0';
                }
                local_140 = '\x01';
                FUN_01d488d0();
                if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                FUN_01cfc6a0();
                local_158 = local_40;
                local_150 = 0;
                if (local_38[0] == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38[0] = '\0';
                }
                local_150 = '\x01';
                FUN_01d488d0();
                if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            if (local_41 != '\0') {
              local_208 = local_80;
              local_200 = '\0';
              (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))();
              if ((local_200 != '\0') && (local_208 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_42 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if ((bVar2) && (local_80 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          uVar19 = (ulonglong)uVar9;
          if (uVar9 == 0) {
            FUN_01cfc6a0();
            local_138 = local_40;
            local_130 = 0;
            if (local_38[0] == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_130 = '\x01';
            FUN_01d488d0();
            if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if ((uVar9 == 2) && (bVar27)) {
            FUN_01cfc6a0();
            local_128 = local_40;
            local_120 = 0;
            if (local_38[0] == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_120 = '\x01';
            FUN_01d488d0();
            if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            bVar27 = true;
          }
          else {
            FUN_01cfc6a0();
            local_118 = local_40;
            local_110 = 0;
            if (local_38[0] == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_110 = '\x01';
            FUN_01d488d0();
            if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_1a8._0_4_ = local_1a8._0_4_ + auVar45._0_4_;
          (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
          if ((uVar9 == 2) && (bVar27)) {
            FUN_01cfc6a0();
            local_108 = local_40;
            local_100 = 0;
            if (local_38[0] == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_100 = '\x01';
            FUN_01d488d0();
            if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
          }
          iVar10 = iVar10 + 1;
        } while (iVar24 <= iVar11);
      }
      if ((cVar6 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_01a1ed23;
    }
  }
  (**(code **)(*plVar4 + 0x398))();
  local_f8 = local_40;
  local_f0 = 0;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_f0 = '\x01';
  FUN_01d488d0();
  if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))();
LAB_01a1ed23:
  local_1f8 = plVar18;
  local_1f0 = '\0';
  FUN_01d488d0();
  if ((local_1f0 != '\0') && (local_1f8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
  if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar18 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


