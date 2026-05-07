// Function: FUN_01a9b030
// Address: 01a9b030
// Size: 6458 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01a9b030(void* param_1,uint64_t param_2)

{
  uint uVar1;
  uint8_t auVar2 [16];
  float fVar3;
  int iVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  void *pvVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t lVar11;
  int64_t *plVar12;
  undefined7 uVar15;
  int64_t *plVar13;
  int64_t lVar14;
  char cVar16;
  void* pVar17;
  int64_t *plVar18;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar19;
  char cVar20;
  int64_t *plVar21;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar23 [16];
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  double dVar22;
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  int64_t *local_228;
  uint8_t local_220;
  int64_t *local_218;
  uint8_t local_210;
  int64_t *local_208;
  uint8_t local_200;
  int64_t *local_1f8;
  uint8_t local_1f0;
  int64_t *local_1e8;
  uint8_t local_1e0;
  int64_t local_1d8;
  char local_1d0;
  uint64_t local_1c8;
  uint64_t uStack_1c0;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  int64_t local_190;
  double local_188;
  double local_180;
  uint8_t local_178 [8];
  uint64_t uStack_170;
  int64_t local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  uint8_t local_e8 [8];
  uint64_t uStack_e0;
  uint64_t local_d8;
  uint64_t uStack_d0;
  uint64_t local_c0;
  uint64_t local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  double local_a0;
  uint64_t local_98;
  uint64_t local_90;
  int64_t *local_88;
  double local_80;
  int64_t *local_78;
  int64_t local_70;
  int64_t *local_60;
  char local_58 [8];
  int64_t *local_50;
  int64_t *local_48;
  byte local_31;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  
  local_1c8 = FUN_01e3f820();
  uStack_170 = in_XMM1_Qb;
  local_178 = (uint8_t  [8])param_2;
  if (this_ptr[0x3c] == 0) goto LAB_01a9b14f;
  uStack_1c0 = extraout_XMM0_Qb;
  iVar4 = FUN_01d3a5a0();
  if ((iVar4 != 2) && (iVar4 = FUN_01d3a5a0(), iVar4 != 8)) {
    if (((this_ptr[0x3c] != 0) && (iVar4 = FUN_01d3a5a0(), iVar4 == 1)) &&
       (iVar4 = FUN_01d3b630(), iVar4 == 1)) {
      FUN_01e42250();
      FUN_01d3abf0();
      local_e8 = (uint8_t  [8])FUN_01e466c0();
      uStack_e0 = extraout_XMM0_Qb_01;
      local_60 = (int64_t *)this_ptr[0x3c];
      if (local_60 == (int64_t *)0x0) {
        local_90 = 0;
        local_60 = (int64_t *)0x0;
      }
      else {
        uVar7 = FUN_00d50b00();
        local_90 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      }
      FUN_01a9d1d0();
      plVar21 = local_78;
      if (local_78 == (int64_t *)0x0) {
        FUN_01a9d910();
        iVar4 = FUN_01d3b620();
        if (iVar4 == 2) {
          pvVar8 = _pthread_getspecific(param_1);
          plVar21 = local_60;
          if ((pvVar8 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            plVar21 = (int64_t *)local_60[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
          }
          local_88 = (int64_t *)FUN_01a992b0((double)(float)local_e8._0_4_);
          dVar22 = (double)FUN_01a991f0();
          uVar7 = FUN_01a99c70(dVar22 - (double)(float)local_e8._4_4_);
          (**(code **)(*plVar21 + 0x410))(local_88,uVar7);
          uVar7 = local_90;
          if (local_1d0 != '\0') {
            if (local_1d8 != 0) {
              FUN_00d50b20();
            }
            local_a0 = 0.0;
            plVar21 = (int64_t *)0x0;
            goto LAB_01a9b635;
          }
        }
        local_a0 = 0.0;
        plVar21 = (int64_t *)0x0;
        uVar7 = local_90;
      }
      else {
        if ((char)local_70 == '\0') {
          FUN_00d50b00();
        }
        iVar4 = FUN_01d3b620();
        if (iVar4 == 2) {
          pvVar8 = _pthread_getspecific(param_1);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar7 = local_90;
          local_158 = plVar21;
          local_150 = '\0';
          uVar10 = FUN_013f2ec0();
          local_a0 = (double)CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
          if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar6 = FUN_01d3b590();
          if ((uVar6 & 2) == 0) {
            local_1f8 = plVar21;
            local_1f0 = 0;
            uVar9 = FUN_01a9ad00(extraout_XMM0_Qa_00,&local_1f8);
            plVar18 = local_78;
            uVar10 = extraout_XMM0_Qa_01;
            if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              uVar9 = FUN_00d50b20();
              uVar10 = extraout_XMM0_Qa_02;
            }
            uVar7 = local_90;
            local_a0 = (double)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
            if (plVar18 == (int64_t *)0x0) {
              local_1e8 = plVar21;
              local_1e0 = 0;
              FUN_01a9d6a0(uVar10,0);
            }
          }
          else {
            local_228 = plVar21;
            local_220 = 0;
            uVar10 = FUN_01a9ad00(extraout_XMM0_Qa_00,&local_228);
            plVar18 = local_78;
            if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              uVar10 = FUN_00d50b20();
            }
            uVar7 = local_90;
            if (plVar18 == (int64_t *)0x0) {
              local_208 = plVar21;
              local_200 = 0;
              uVar10 = FUN_01a9d6a0(uVar10,1);
            }
            else {
              local_218 = plVar21;
              local_210 = 0;
              uVar10 = FUN_01a9d480();
            }
            local_a0 = (double)CONCAT71((int7)((uint64_t)uVar10 >> 8),1);
          }
        }
      }
LAB_01a9b635:
      local_b0 = plVar21;
      if (*(int *)(this_ptr[0x3d] + 0xc) == 0) {
        plVar18 = (int64_t *)0x0;
        cVar20 = '\0';
        plVar21 = (int64_t *)0x0;
        local_b8 = 0;
        local_88 = (int64_t *)0x0;
        local_50 = (int64_t *)0x0;
        cVar16 = (char)uVar7;
LAB_01a9c8f4:
        if ((cVar16 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_50 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_b8 != '\0') && (plVar21 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((cVar20 != '\0') && (plVar18 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_a0._0_1_ == '\0') {
          return;
        }
        if (local_b0 == (int64_t *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      *(void*)(this_ptr + 0x3e) = 1;
      fVar3 = local_1c8._4_4_;
      auVar30._0_4_ = (float)local_178._0_4_ + (float)local_1c8;
      auVar30._4_4_ = (float)local_178._4_4_ + local_1c8._4_4_;
      auVar30._8_4_ = (float)uStack_170 + (float)uStack_1c0;
      auVar30._12_4_ = uStack_170._4_4_ + uStack_1c0._4_4_;
      local_1b0 = (double)auVar30._4_4_;
      local_1a8 = (double)local_1c8._4_4_;
      local_1a0 = (double)(float)local_1c8;
      local_198 = (double)auVar30._0_4_;
      local_c0 = 0;
      plVar21 = (int64_t *)0x0;
      local_88 = (int64_t *)0x0;
      local_b8 = 0;
      local_a8 = (int64_t *)0x0;
      local_98 = 0;
      local_48 = (int64_t *)0x0;
      lVar14 = 0;
      _local_178 = auVar30;
LAB_01a9b6f3:
      local_80 = (double)CONCAT71(local_80._1_7_,(char)uVar7);
      local_50 = plVar21;
      do {
        local_d8 = (int64_t)local_e8;
        uStack_d0 = uStack_e0;
        do {
          (**(code **)(*this_ptr + 0x658))();
          plVar13 = local_78;
          plVar18 = (int64_t *)*arg1;
          if (plVar18 == local_78) {
            if (((char)arg1[1] == '\0') && (local_78 != (int64_t *)0x0)) {
              if ((char)local_70 == '\0') {
                FUN_00d50b00();
                goto LAB_01a9b7ac;
              }
              goto LAB_01a9b763;
            }
LAB_01a9b76f:
            if (*arg1 != 0) goto LAB_01a9b7c0;
LAB_01a9c896:
            if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01a9c8aa:
            plVar18 = local_48;
            plVar21 = local_a8;
            cVar20 = (char)local_98;
            if (((byte)local_c0 == '\0') || (lVar14 == 0)) {
              cVar16 = SUB81(local_80,0);
            }
            else {
              FUN_00d50b20();
              cVar16 = SUB81(local_80,0);
            }
            goto LAB_01a9c8f4;
          }
          lVar11 = arg1[1];
          plVar21 = (int64_t *)0x0;
          if ((char)local_70 != '\0') {
            *arg1 = (int64_t)local_78;
            if (((char)lVar11 != '\0') && (plVar18 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_01a9b763:
            *(void*)(arg1 + 1) = 1;
            local_70._0_1_ = '\0';
            goto LAB_01a9b76f;
          }
          if (local_78 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          *arg1 = (int64_t)plVar13;
          if (((char)lVar11 != '\0') && (plVar18 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01a9b7ac:
          *(void*)(arg1 + 1) = 1;
          if (*arg1 == 0) goto LAB_01a9c896;
LAB_01a9b7c0:
          iVar4 = FUN_01d3a5a0();
          if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar4 == 6) goto LAB_01a9c8aa;
          iVar4 = FUN_01d3a5a0();
        } while (iVar4 != 5);
        FUN_01d3abf0();
        local_e8 = (uint8_t  [8])FUN_01e466c0();
        uStack_e0 = extraout_XMM0_Qb_02;
        uVar6 = FUN_01d3b590();
        plVar18 = local_50;
        if (((uVar6 & 8) == 0) || (uVar6 = this_ptr[0x3d], *(int *)(uVar6 + 0xc) < 3))
        goto LAB_01a9b924;
        *(void*)(this_ptr + 0x3e) = 0;
        pvVar8 = _pthread_getspecific((void*)this_ptr);
        plVar18 = local_60;
        if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          plVar18 = (int64_t *)local_60[(uint64_t)(*(uint *)(lVar11 + 0x154) & 1) + 4];
        }
        FUN_01a9dab0();
        plVar13 = local_78;
        local_f0 = 0;
        if ((char)local_70 == '\0') {
          if (local_78 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70._0_1_ = '\0';
        }
        local_f0 = '\x01';
        local_f8 = plVar13;
        FUN_01a99df0((double)((float)local_e8._0_4_ - (float)local_d8));
        (**(code **)(*plVar18 + 0x430))();
        if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      } while( true );
    }
    goto LAB_01a9b14f;
  }
  uVar6 = FUN_01d3b590();
  auVar23._8_8_ = extraout_XMM0_Qb_00;
  auVar23._0_8_ = extraout_XMM0_Qa;
  uVar1 = *(uint *)(&g_0241c4d8 + (uint64_t)((uVar6 & 4) == 0) * 4);
  auVar28 = ZEXT416(uVar1);
  if ((uVar6 & 0x100) == 0) {
    if ((uVar6 & 0x200) != 0) goto LAB_01a9b136;
    if ((uVar6 & 0x400) == 0) {
      if ((uVar6 & 0x800) == 0) {
        local_168 = *arg1;
        local_160 = '\0';
        FUN_01a99330();
        if (local_160 == '\0') {
          return;
        }
        if (local_168 == 0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      auVar29._0_4_ = uVar1 ^ g_023945e0;
      auVar29._4_4_ = _UNK_023945e4;
      auVar29._8_4_ = _UNK_023945e8;
      auVar29._12_4_ = _UNK_023945ec;
      auVar23 = insertps(auVar23,auVar29,0x1d);
      uVar7 = auVar23._0_8_;
    }
    else {
      auVar23 = insertps(auVar23,auVar28,0x1d);
      uVar7 = auVar23._0_8_;
    }
  }
  else {
    auVar28._0_4_ = uVar1 ^ g_023945e0;
    auVar28._4_4_ = _UNK_023945e4;
    auVar28._8_4_ = _UNK_023945e8;
    auVar28._12_4_ = _UNK_023945ec;
LAB_01a9b136:
    auVar23 = blendps(ZEXT816(0),auVar28,1);
    uVar7 = auVar23._0_8_;
  }
  FUN_01a9d0c0(uVar7);
LAB_01a9b14f:
  local_108 = *arg1;
  local_100 = '\0';
  FUN_01a99330();
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  return;
LAB_01a9b924:
  plVar13 = (int64_t *)this_ptr[0x3c];
  uVar15 = (undefined7)(uVar6 >> 8);
  plVar12 = this_ptr;
  if (plVar13 == local_60) {
    if ((local_80._0_1_ == '\0') && (plVar13 != (int64_t *)0x0)) {
      local_90 = CONCAT71(uVar15,1);
      FUN_00d50b00();
      plVar13 = local_60;
    }
    else {
      local_90 = CONCAT71(uVar15,local_80._0_1_);
      plVar13 = local_60;
    }
  }
  else {
    if (plVar13 != (int64_t *)0x0) {
      local_90 = CONCAT71(uVar15,local_80._0_1_);
      uVar6 = FUN_00d50b00();
      plVar21 = plVar18;
    }
    local_90 = CONCAT71((int7)(uVar6 >> 8),1);
    if ((local_80._0_1_ != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_60 = plVar13;
  pvVar8 = _pthread_getspecific((void*)plVar12);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  plVar18 = local_78;
  uVar15 = (undefined7)((uint64_t)plVar21 >> 8);
  if (local_78 == local_88) {
    plVar21 = local_50;
    if (((char)local_50 == '\0') && (local_78 != (int64_t *)0x0)) {
      plVar21 = (int64_t *)CONCAT71(uVar15,1);
      if ((char)local_70 != '\0') goto LAB_01a9ba7d;
      FUN_00d50b00();
      plVar21 = (int64_t *)CONCAT71(uVar15,1);
    }
  }
  else {
    if ((char)local_70 != '\0') {
      plVar21 = (int64_t *)CONCAT71(uVar15,1);
      if (((char)local_50 == '\0') || (local_88 == (int64_t *)0x0)) {
        local_88 = local_78;
      }
      else {
        FUN_00d50b20();
        local_88 = plVar18;
      }
      goto LAB_01a9ba7d;
    }
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    plVar21 = (int64_t *)CONCAT71(uVar15,1);
    if (((char)local_50 == '\0') || (local_88 == (int64_t *)0x0)) {
      local_88 = plVar18;
    }
    else {
      FUN_00d50b20();
      local_88 = plVar18;
    }
  }
  if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a9ba7d:
  dVar22 = (double)(**(code **)(*this_ptr + 0xad0))();
  if (local_1b0 - dVar22 < (double)(float)local_e8._4_4_) {
    dVar22 = (double)(**(code **)(*this_ptr + 0xad0))();
    auVar2._4_4_ = auVar30._4_4_;
    auVar2._0_4_ = auVar30._4_4_;
    auVar2._8_4_ = auVar30._12_4_;
    auVar2._12_4_ = auVar30._12_4_;
    auVar31._4_12_ = auVar2._4_12_;
    auVar31._0_4_ = auVar30._4_4_ - (float)dVar22;
    _local_e8 = insertps(_local_e8,auVar31,0x10);
  }
  dVar22 = (double)(**(code **)(*this_ptr + 0xad0))();
  if ((double)(float)local_e8._4_4_ < dVar22 + local_1a8) {
    auVar24._0_8_ = (double)(**(code **)(*this_ptr + 0xad0))();
    auVar24._8_8_ = extraout_XMM0_Qb_03;
    auVar25._4_12_ = auVar24._4_12_;
    auVar25._0_4_ = (float)auVar24._0_8_ + fVar3;
    _local_e8 = insertps(_local_e8,auVar25,0x10);
  }
  dVar22 = (double)(**(code **)(*this_ptr + 0xad0))();
  if ((double)(float)local_e8._0_4_ < dVar22 + local_1a0) {
    auVar26._0_8_ = (double)(**(code **)(*this_ptr + 0xad0))();
    auVar26._8_8_ = extraout_XMM0_Qb_04;
    auVar27._4_12_ = auVar26._4_12_;
    auVar27._0_4_ = (float)auVar26._0_8_ + (float)local_1c8;
    _local_e8 = blendps(_local_e8,auVar27,1);
  }
  dVar22 = (double)(**(code **)(*this_ptr + 0xad0))();
  if (local_198 - dVar22 < (double)local_e8._0_4_) {
    dVar22 = (double)(**(code **)(*this_ptr + 0xad0))();
    auVar32._4_12_ = local_178._4_12_;
    auVar32._0_4_ = local_178._0_4_ - (float)dVar22;
    _local_e8 = blendps(_local_e8,auVar32,1);
  }
  lVar11 = this_ptr[0x3d];
  uVar7 = local_90;
  if (0 < *(int *)(lVar11 + 0xc)) {
    local_188 = (double)((float)local_e8._0_4_ - (float)local_d8);
    local_180 = (double)(local_d8._4_4_ - (float)local_e8._4_4_);
    lVar19 = 0;
    dVar22 = local_a0;
    do {
      local_a0 = dVar22;
      lVar11 = *(int64_t *)(*(int64_t *)(lVar11 + 0x10) + lVar19 * 8);
      local_190 = lVar19;
      if (lVar14 == lVar11) {
        lVar11 = lVar14;
        if ((byte)local_c0 == 0) {
          local_31 = (byte)local_c0;
          if (lVar14 != 0) {
            local_31 = 1;
            local_c0 = 0;
            FUN_00d50b00();
          }
        }
        else {
          local_31 = (byte)local_c0;
        }
      }
      else {
        if (lVar11 != 0) {
          FUN_00d50b00();
        }
        local_31 = 1;
        if (((byte)local_c0 != '\0') && (lVar14 != 0)) {
          FUN_00d50b20();
          lVar14 = lVar11;
        }
      }
      plVar12 = local_b0;
      plVar18 = (int64_t *)local_88[2];
      plVar13 = (int64_t *)plVar18[*(int *)(lVar11 + 0xc)];
      uVar15 = (undefined7)((uint64_t)lVar14 >> 8);
      local_d8 = lVar11;
      if (local_b0 == plVar13) {
        if ((local_a0._0_1_ == '\0') && (local_b0 != (int64_t *)0x0)) {
          local_a0 = 0.0;
          FUN_00d50b00();
          local_50 = plVar12;
          dVar22 = (double)CONCAT71(uVar15,1);
        }
        else {
          local_50 = local_b0;
          dVar22 = local_a0;
        }
      }
      else {
        plVar18 = plVar13;
        local_50 = plVar13;
        if (plVar13 != (int64_t *)0x0) {
          FUN_00d50b00();
          plVar18 = plVar13;
        }
        dVar22 = (double)CONCAT71(uVar15,1);
        if ((local_a0._0_1_ != '\0') && (local_b0 != (int64_t *)0x0)) {
          local_b0 = local_50;
          FUN_00d50b20();
        }
      }
      local_80 = dVar22;
      local_b0 = (int64_t *)FUN_01a99df0(local_188);
      if ((double)local_b0 <= 0.0) {
        if ((double)local_b0 < 0.0) {
          FUN_00d23340();
          plVar12 = local_78;
          local_58[0] = (char)local_70;
          plVar18 = (int64_t *)local_58;
          plVar13 = &local_70;
          if ((char)local_70 == '\0') {
            plVar13 = plVar18;
          }
          *(void*)plVar13 = 0;
          if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            plVar13 = (int64_t *)FUN_00d50b20();
          }
          if (plVar12 == local_48) {
            plVar13 = (int64_t *)0x0;
            if (((char)local_98 == '\0') && (plVar12 != (int64_t *)0x0)) {
              plVar12 = local_48;
              if (local_58[0] == '\0') {
                plVar13 = (int64_t *)FUN_00d50b00();
                plVar12 = local_48;
              }
              goto LAB_01a9c227;
            }
            if ((local_58[0] != '\0') && (plVar12 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_48 != (int64_t *)0x0) goto LAB_01a9c23d;
LAB_01a9c4b8:
            local_48 = (int64_t *)0x0;
          }
          else {
            if (local_58[0] == '\0') {
              if (plVar12 != (int64_t *)0x0) {
                plVar13 = (int64_t *)FUN_00d50b00();
              }
              if (((char)local_98 != '\0') && (local_48 != (int64_t *)0x0)) {
                plVar13 = (int64_t *)FUN_00d50b20();
              }
            }
            else if (((char)local_98 != '\0') && (local_48 != (int64_t *)0x0)) {
              plVar13 = (int64_t *)FUN_00d50b20();
            }
LAB_01a9c227:
            local_98 = CONCAT71((int7)((uint64_t)plVar13 >> 8),1);
            local_48 = plVar12;
            if (plVar12 == (int64_t *)0x0) goto LAB_01a9c4b8;
LAB_01a9c23d:
            pvVar8 = _pthread_getspecific((void*)plVar18);
            if ((pvVar8 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              plVar18 = local_48;
            }
            local_a0 = (double)FUN_013faed0();
            pvVar8 = _pthread_getspecific((void*)plVar18);
            if ((pvVar8 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              plVar18 = local_50;
            }
            dVar22 = (double)FUN_013faed0();
            if (dVar22 + (double)local_b0 < local_a0) {
              local_78 = local_50;
              local_70._0_1_ = '\0';
              iVar4 = FUN_00d237a0();
              if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (iVar4 != -1) {
                *(void*)(this_ptr + 0x3e) = 0;
                pvVar8 = _pthread_getspecific((void*)plVar18);
                if ((pvVar8 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                  plVar18 = local_60;
                }
                local_128 = local_48;
                local_120 = '\0';
                FUN_013f2cf0();
                if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (iVar4 + 1 < *(int *)((int64_t)local_88 + 0xc)) {
                  FUN_01a9ddc0();
                }
              }
              local_78 = local_48;
              local_70._0_1_ = '\0';
              FUN_00d23f50();
              if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          if (0 < *(int *)(local_d8 + 0xc)) {
            lVar14 = local_88[2];
            plVar18 = (int64_t *)(uint64_t)(*(int *)(local_d8 + 0xc) - 1);
            plVar13 = *(int64_t **)(lVar14 + (int64_t)plVar18 * 8);
            if (local_a8 == plVar13) {
              if (((char)local_b8 == '\0') && (local_a8 != (int64_t *)0x0)) {
                local_b8 = CONCAT71((int7)((uint64_t)lVar14 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if (plVar13 != (int64_t *)0x0) {
                lVar14 = FUN_00d50b00();
              }
              if (((char)local_b8 == '\0') || (local_a8 == (int64_t *)0x0)) {
                local_b8 = CONCAT71((int7)((uint64_t)lVar14 >> 8),1);
                local_a8 = plVar13;
              }
              else {
                local_a8 = plVar13;
                uVar7 = FUN_00d50b20();
                local_b8 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
              }
            }
            pvVar8 = _pthread_getspecific((void*)plVar18);
            if ((pvVar8 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              plVar18 = local_a8;
            }
            local_a0 = (double)FUN_013faed0();
            pvVar8 = _pthread_getspecific((void*)plVar18);
            if ((pvVar8 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              plVar18 = local_50;
            }
            dVar22 = (double)FUN_013faed0();
            if (dVar22 + (double)local_b0 <= local_a0) {
              local_78 = local_a8;
              local_70._0_1_ = '\0';
              FUN_00d21140();
              if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              *(void*)(this_ptr + 0x3e) = 0;
              pvVar8 = _pthread_getspecific((void*)plVar18);
              if ((pvVar8 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
                plVar18 = local_60;
              }
              local_118 = local_a8;
              local_110 = '\0';
              FUN_013f2ec0();
              if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_01a9def0();
            }
          }
        }
      }
      else {
        FUN_00d23340();
        plVar13 = local_78;
        local_58[0] = (char)local_70;
        plVar18 = (int64_t *)local_58;
        plVar12 = &local_70;
        if ((char)local_70 == '\0') {
          plVar12 = plVar18;
        }
        *(void*)plVar12 = 0;
        if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          plVar12 = (int64_t *)FUN_00d50b20();
        }
        pVar17 = (void*)plVar18;
        if (plVar13 == local_48) {
          uVar7 = 0;
          if (((char)local_98 == '\0') && (local_48 != (int64_t *)0x0)) {
            if (local_58[0] == '\0') {
              uVar7 = FUN_00d50b00();
            }
            local_98 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
          }
          else {
            if ((local_58[0] != '\0') && (plVar13 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_48 == (int64_t *)0x0) goto LAB_01a9c046;
          }
LAB_01a9bf69:
          pvVar8 = _pthread_getspecific(pVar17);
          if ((pvVar8 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            pVar17 = (void*)local_48;
          }
          local_a0 = (double)FUN_013faed0();
          pvVar8 = _pthread_getspecific(pVar17);
          if ((pvVar8 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            pVar17 = (void*)local_50;
          }
          dVar22 = (double)FUN_013faed0();
          if (local_a0 < dVar22 + (double)local_b0) {
            *(void*)(this_ptr + 0x3e) = 0;
            pvVar8 = _pthread_getspecific(pVar17);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_148 = local_48;
            local_140 = '\0';
            local_78 = local_50;
            local_70._0_1_ = '\0';
            uVar5 = FUN_00d23d20();
            uVar7 = extraout_XMM0_Qa_03;
            if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              uVar7 = FUN_00d50b20();
            }
            FUN_013f2cf0(uVar7,uVar5);
            if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_78 = local_48;
            local_70._0_1_ = '\0';
            FUN_00d23f50();
            if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01a9ddc0();
          }
        }
        else {
          if (local_58[0] == '\0') {
            if (plVar13 != (int64_t *)0x0) {
              plVar12 = (int64_t *)FUN_00d50b00();
            }
            if (((char)local_98 != '\0') && (local_48 != (int64_t *)0x0)) {
              plVar12 = (int64_t *)FUN_00d50b20();
            }
            uVar15 = (undefined7)((uint64_t)plVar12 >> 8);
          }
          else {
            if (((char)local_98 != '\0') && (local_48 != (int64_t *)0x0)) {
              plVar12 = (int64_t *)FUN_00d50b20();
            }
            uVar15 = (undefined7)((uint64_t)plVar12 >> 8);
          }
          local_98 = CONCAT71(uVar15,1);
          if (plVar13 != (int64_t *)0x0) {
            local_48 = plVar13;
            goto LAB_01a9bf69;
          }
LAB_01a9c046:
          local_48 = (int64_t *)0x0;
        }
        iVar4 = *(int *)(local_d8 + 0xc);
        lVar14 = (int64_t)iVar4;
        plVar18 = local_88;
        if (iVar4 + 1 < *(int *)((int64_t)local_88 + 0xc)) {
          local_c0 = CONCAT44(local_c0._4_4_,iVar4 + 1);
          plVar18 = (int64_t *)local_88[2];
          plVar13 = (int64_t *)plVar18[lVar14 + 1];
          if (local_48 == plVar13) {
            if (((char)local_98 == '\0') && (local_48 != (int64_t *)0x0)) {
              local_98 = CONCAT71((int7)(int3)((uint)iVar4 >> 8),1);
              FUN_00d50b00();
            }
          }
          else {
            if (plVar13 != (int64_t *)0x0) {
              lVar14 = FUN_00d50b00();
            }
            if (((char)local_98 == '\0') || (local_48 == (int64_t *)0x0)) {
              local_98 = CONCAT71((int7)((uint64_t)lVar14 >> 8),1);
              local_48 = plVar13;
            }
            else {
              local_48 = plVar13;
              uVar7 = FUN_00d50b20();
              local_98 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
            }
          }
          pvVar8 = _pthread_getspecific((void*)plVar18);
          if ((pvVar8 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            plVar18 = local_48;
          }
          local_a0 = (double)FUN_013faed0();
          pvVar8 = _pthread_getspecific((void*)plVar18);
          if ((pvVar8 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
            plVar18 = local_50;
          }
          dVar22 = (double)FUN_013faed0();
          if (local_a0 <= dVar22 + (double)local_b0) {
            local_78 = local_48;
            local_70._0_1_ = '\0';
            FUN_00d21140();
            if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            *(void*)(this_ptr + 0x3e) = 0;
            pvVar8 = _pthread_getspecific((void*)plVar18);
            if ((pvVar8 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
              plVar18 = local_60;
            }
            local_138 = local_48;
            local_130 = '\0';
            FUN_013f2ec0();
            if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01a9def0();
          }
        }
      }
      *(void*)(this_ptr + 0x3e) = 0;
      pvVar8 = _pthread_getspecific((void*)plVar18);
      plVar18 = local_60;
      if ((pvVar8 != (void *)0x0) && (lVar14 = FUN_00e8b990(), lVar14 != 0)) {
        plVar18 = (int64_t *)local_60[(uint64_t)(*(uint *)(lVar14 + 0x154) & 1) + 4];
      }
      FUN_01a99d80(local_180);
      (**(code **)(*plVar18 + 0x420))(local_b0);
      lVar19 = local_190 + 1;
      lVar11 = this_ptr[0x3d];
      local_b0 = local_50;
      local_a0 = local_80;
      local_c0 = (uint64_t)local_31;
      lVar14 = local_d8;
      dVar22 = (double)((uint64_t)local_80 & 0xffffffff);
    } while (lVar19 < *(int *)(lVar11 + 0xc));
    local_c0 = (uint64_t)local_31;
    uVar7 = local_90;
  }
  goto LAB_01a9b6f3;
}

