// Function: FUN_01a0fff0
// Address: 01a0fff0
// Size: 2575 bytes
// Class: GNMultipleValue

void FUN_01a0fff0(void)

{
  int64_t *plVar1;
  float fVar2;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  int64_t lVar6;
  float fVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar11;
  float extraout_XMM0_Da;
  uint64_t uVar12;
  float extraout_XMM0_Db;
  double dVar13;
  double dVar14;
  float extraout_XMM0_Dc;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  float extraout_XMM0_Dd;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar23;
  float fVar26;
  uint8_t in_XMM1 [16];
  float fVar24;
  float fVar25;
  float fVar27;
  float fVar28;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  float local_198;
  int64_t *local_188;
  char local_180;
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
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  float local_e8;
  float fStack_e4;
  uint64_t uStack_e0;
  uint8_t local_d8 [16];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_54;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  float fVar3;
  
  plVar1 = (int64_t *)this_ptr[0x48];
  local_50 = plVar1;
  if (plVar1 == (int64_t *)0x0) {
    FUN_01a18460();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_48 != (int64_t *)0x0) {
      FUN_01a18460();
      (**(code **)(*local_188 + 0x958))();
      local_50 = local_48;
      if (local_48 != (int64_t *)0x0) {
        plVar1 = local_50;
        if (local_40 == '\0') {
          FUN_00d50b00();
        }
        else {
          local_40 = '\0';
        }
      }
      local_50 = plVar1;
      if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
  }
  uVar12 = (**(code **)(*this_ptr + 0xaf8))();
  local_e8 = (float)uVar12;
  fStack_e4 = (float)((uint64_t)uVar12 >> 0x20);
  uStack_e0 = extraout_XMM0_Qb;
  local_d8 = in_XMM1;
  fVar11 = (float)(**(code **)(*this_ptr + 0xb00))();
  auVar17 = in_XMM1;
  FUN_01d3abf0();
  uVar12 = FUN_01e466c0();
  local_c8 = (float)uVar12;
  fStack_c4 = (float)((uint64_t)uVar12 >> 0x20);
  fStack_c0 = (float)extraout_XMM0_Qb_00;
  fStack_bc = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  uVar12 = (**(code **)(*this_ptr + 0xaf8))();
  fVar23 = auVar17._4_4_;
  auVar22._4_4_ = fVar23;
  auVar22._0_4_ = fVar23;
  auVar22._8_4_ = auVar17._12_4_;
  auVar22._12_4_ = auVar17._12_4_;
  if (auVar17._0_4_ < fVar23 + fVar23) {
    auVar29._4_12_ = auVar22._4_12_;
    auVar29._0_4_ = fVar23 * g_0239426c;
    blendps(auVar29,auVar17,0xe);
  }
  auVar17._8_4_ = (int)extraout_XMM0_Qb_01;
  auVar17._0_8_ = uVar12;
  auVar17._12_4_ = (int)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
  cVar8 = FUN_00d05410();
  if (cVar8 == '\0') {
    (**(code **)(*this_ptr + 0xaf8))();
    fVar23 = auVar17._4_4_;
    if (auVar17._0_4_ < fVar23 + fVar23) {
      blendps(ZEXT416((uint)(g_0239426c * fVar23)),auVar17,0xe);
    }
    cVar9 = FUN_00d05410();
    if (cVar9 == '\0') {
      FUN_00d403d0();
      lVar6 = g_027e7c30;
      if (g_027e7c30 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b00();
      local_168 = 0;
      local_160 = '\0';
      FUN_00d40470(&local_168,&stack0xffffffffffffff48,3,3);
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_158 = *arg1;
      local_150 = '\0';
      FUN_01d924f0();
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      local_148 = g_027e7c38;
      if (g_027e7c38 != 0) {
        FUN_00d50b00();
      }
      local_140 = '\x01';
      FUN_00d50b00();
      local_138 = 0;
      local_130 = '\0';
      FUN_00d40470(&local_138,&stack0xffffffffffffff58,3,3);
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a1099f;
    }
    local_54 = 0.0;
    if (0.0 <= g_023941fc + (float)local_d8._0_4_) {
      local_54 = g_023941fc + (float)local_d8._0_4_;
    }
    local_198 = in_XMM1._0_4_;
    fVar11 = (fVar11 + local_198 + g_02390d00) - (local_e8 + (float)local_d8._0_4_ + g_02390d00)
    ;
  }
  else {
    local_54 = 0.0;
    if (0.0 <= local_e8 - fVar11) {
      local_54 = local_e8 - fVar11;
    }
    fVar11 = g_023941fc + (float)local_d8._0_4_;
  }
  FUN_00d403d0();
  local_128 = g_027e7c30;
  if (g_027e7c30 != 0) {
    FUN_00d50b00();
  }
  local_120 = '\x01';
  FUN_00d50b00();
  local_118 = 0;
  local_110 = '\0';
  FUN_00d40470(&local_118,&stack0xffffffffffffff68,3,3);
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  fVar23 = 0.0;
  fVar7 = local_c8;
  if (0.0 <= fVar11) {
    fVar23 = fVar11;
  }
LAB_01a10320:
  fVar11 = fVar7;
  (**(code **)(*this_ptr + 0x658))();
  plVar1 = (int64_t *)*arg1;
  if (plVar1 == local_48) {
    if (((char)arg1[1] != '\0') || (local_48 == (int64_t *)0x0)) goto LAB_01a1037b;
    if (local_40 != '\0') goto LAB_01a10372;
    FUN_00d50b00();
LAB_01a103bc:
    *(void*)(arg1 + 1) = 1;
    lVar6 = *arg1;
  }
  else {
    lVar6 = arg1[1];
    if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_48;
      if (((char)lVar6 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a103bc;
    }
    *arg1 = (int64_t)local_48;
    if (((char)lVar6 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01a10372:
    *(void*)(arg1 + 1) = 1;
    local_40 = '\0';
LAB_01a1037b:
    lVar6 = *arg1;
  }
  if (lVar6 != 0) {
    iVar10 = FUN_01d3a5a0();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar10 == 6) goto LAB_01a106a6;
    iVar10 = FUN_01d3a5a0();
    fVar7 = fVar11;
    if (iVar10 == 5) {
      FUN_01d3abf0();
      FUN_01e466c0();
      if ((extraout_XMM0_Da != fVar11) || (NAN(extraout_XMM0_Da) || NAN(fVar11))) {
        fVar2 = (float)((uint64_t)uStack_e0 >> 0x20);
        fVar18 = local_d8._0_4_;
        fVar24 = local_d8._4_4_;
        fVar26 = local_d8._8_4_;
        fVar3 = local_d8._12_4_;
        if (local_c8 <= extraout_XMM0_Da) {
          fVar7 = extraout_XMM0_Da;
          if (local_c8 < extraout_XMM0_Da) {
            fVar19 = extraout_XMM0_Da - local_c8;
            fVar25 = extraout_XMM0_Db - fStack_c4;
            fVar27 = extraout_XMM0_Dc - fStack_c0;
            fVar28 = extraout_XMM0_Dd - fStack_bc;
            if (cVar8 == '\0') {
              if (fVar19 <= fVar23) {
                fVar7 = extraout_XMM0_Da;
                if (fVar19 <= fVar23) {
                  auVar31._0_4_ = fVar19 + fVar18;
                  auVar31._4_4_ = fVar25 + fVar24;
                  auVar31._8_4_ = fVar27 + fVar26;
                  auVar31._12_4_ = fVar28 + fVar3;
                  blendps(auVar31,local_d8,2);
                  FUN_01a12270();
                  fVar7 = extraout_XMM0_Da;
                }
              }
              else {
                dVar13 = (double)(**(code **)(*local_50 + 0x378))();
                (**(code **)(*local_50 + 0x380))
                          ((double)(fVar19 - (fVar11 - local_c8)) * g_023934c8 + dVar13);
                FUN_01a18180();
                (**(code **)(*this_ptr + 0xaf8))();
                FUN_01a12270();
                fVar7 = extraout_XMM0_Da;
              }
            }
            else {
              fVar7 = extraout_XMM0_Da;
              if (fVar19 < fVar23) {
                auVar4._4_4_ = fStack_e4;
                auVar4._0_4_ = local_e8;
                auVar4._8_8_ = uStack_e0;
                auVar15._0_4_ = local_e8 + fVar19;
                auVar15._4_4_ = fStack_e4 + fVar25;
                auVar15._8_4_ = (float)uStack_e0 + fVar27;
                auVar15._12_4_ = fVar2 + fVar28;
                auVar17 = blendps(auVar15,auVar4,2);
                auVar20._0_4_ = fVar18 - fVar19;
                auVar20._4_4_ = fVar24 - fVar25;
                auVar20._8_4_ = fVar26 - fVar27;
                auVar20._12_4_ = fVar3 - fVar28;
                auVar22 = blendps(auVar20,local_d8,2);
                FUN_01a12270(auVar17._0_8_,auVar22._0_8_);
                fVar7 = extraout_XMM0_Da;
              }
            }
          }
        }
        else {
          fVar19 = local_c8 - extraout_XMM0_Da;
          fVar25 = fStack_c4 - extraout_XMM0_Db;
          fVar27 = fStack_c0 - extraout_XMM0_Dc;
          fVar28 = fStack_bc - extraout_XMM0_Dd;
          if (cVar8 == '\0') {
            fVar7 = extraout_XMM0_Da;
            if (fVar19 < local_54) {
              auVar30._0_4_ = fVar18 - fVar19;
              auVar30._4_4_ = fVar24 - fVar25;
              auVar30._8_4_ = fVar26 - fVar27;
              auVar30._12_4_ = fVar3 - fVar28;
              blendps(auVar30,local_d8,2);
              FUN_01a12270();
              fVar7 = extraout_XMM0_Da;
            }
          }
          else if (fVar19 <= local_54) {
            fVar7 = extraout_XMM0_Da;
            if (fVar19 <= local_54) {
              auVar5._4_4_ = fStack_e4;
              auVar5._0_4_ = local_e8;
              auVar5._8_8_ = uStack_e0;
              auVar16._0_4_ = local_e8 - fVar19;
              auVar16._4_4_ = fStack_e4 - fVar25;
              auVar16._8_4_ = (float)uStack_e0 - fVar27;
              auVar16._12_4_ = fVar2 - fVar28;
              auVar17 = blendps(auVar16,auVar5,2);
              auVar21._0_4_ = fVar19 + fVar18;
              auVar21._4_4_ = fVar25 + fVar24;
              auVar21._8_4_ = fVar27 + fVar26;
              auVar21._12_4_ = fVar28 + fVar3;
              auVar22 = blendps(auVar21,local_d8,2);
              FUN_01a12270(auVar17._0_8_,auVar22._0_8_);
              fVar7 = extraout_XMM0_Da;
            }
          }
          else {
            dVar13 = (double)(fVar19 - (local_c8 - fVar11)) * g_023934c8;
            dVar14 = (double)(**(code **)(*local_50 + 0x368))();
            (**(code **)(*local_50 + 0x370))(dVar14 - dVar13);
            dVar14 = (double)(**(code **)(*local_50 + 0x378))();
            (**(code **)(*local_50 + 0x380))(dVar13 + dVar14);
            FUN_01a18180();
            (**(code **)(*this_ptr + 0xaf8))();
            FUN_01a12270();
            fVar7 = extraout_XMM0_Da;
          }
        }
      }
    }
    goto LAB_01a10320;
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a106a6:
  FUN_00d403d0();
  local_108 = g_027e7c38;
  if (g_027e7c38 != 0) {
    FUN_00d50b00();
  }
  local_100 = '\x01';
  FUN_00d50b00();
  local_f8 = 0;
  local_f0 = '\0';
  FUN_00d40470(&local_f8,&stack0xffffffffffffff78,3,3);
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a1099f:
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

