// Function: FUN_01dff500
// Address: 01dff500
// Size: 2879 bytes
// Class: GNTabView
// String references:
//   " (%@)"
// === GNTabView properties ===
//   GNTabViewControlMode _controlMode


void FUN_01dff500(void)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  code *pcVar11;
  int64_t *plVar12;
  char cVar13;
  uint8_t uVar14;
  uint32_t uVar15;
  int64_t *plVar16;
  int64_t lVar17;
  int64_t *plVar18;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar19;
  float fVar26;
  uint8_t auVar20 [16];
  uint32_t uVar27;
  uint8_t auVar21 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar22 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint64_t uVar30;
  uint64_t local_1a8;
  uint64_t uStack_1a0;
  float local_158;
  int64_t *local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  uint8_t local_78 [16];
  uint8_t local_68 [16];
  int64_t *local_50;
  uint local_48;
  int64_t local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  
  auVar21 = in_XMM1;
  FUN_01cb4790();
  plVar12 = local_50;
  if (((char)local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  cVar13 = FUN_01e420b0();
  if (cVar13 == '\0') {
    uVar14 = 0;
  }
  else {
    uVar14 = (**(code **)(*this_ptr + 0x878))();
  }
  plVar16 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  *plVar16 = (int64_t)&g_0267ba68;
  plVar16[2] = (int64_t)&g_0267c530;
  *(void*)(plVar16 + 0x27) = 0;
  plVar16[0x2e] = 0;
  *(void*)(plVar16 + 0x2f) = 0;
  plVar16[0x30] = 0;
  *(void*)(plVar16 + 0x31) = 0;
  plVar16[0x28] = 0;
  plVar16[0x29] = 0;
  *(void*)(plVar16 + 0x2a) = 0;
  plVar16[0x2b] = 0;
  plVar16[0x2c] = 0;
  *(void*)((int64_t)plVar16 + 0x165) = 0;
  *(void*)((int64_t)plVar16 + 0x18c) = 0;
  *(void*)((int64_t)plVar16 + 0x194) = 0;
  *(void*)((int64_t)plVar16 + 0x199) = 0;
  plVar16[0x35] = 0;
  plVar16[0x36] = 0;
  plVar16[0x37] = 0;
  plVar16[0x38] = 0;
  (*g_0267ba80)();
  local_98 = plVar16;
  (**(code **)(*plVar16 + 0x9f0))();
  if ((int)this_ptr[0x2a] == 1) {
    if ((char)this_ptr[0x2b] != '\0') {
      auVar22._0_8_ = FUN_01e3f820();
      auVar22._8_8_ = extraout_XMM0_Qb_00;
      if ((int)this_ptr[0x2a] != 0) {
        auVar4._4_4_ = auVar21._4_4_;
        auVar4._0_4_ = auVar21._4_4_ - *(float *)((int64_t)this_ptr + 0x154);
        auVar4._8_4_ = auVar21._12_4_;
        auVar4._12_4_ = auVar21._12_4_;
        auVar21 = insertps(auVar21,auVar4,0x10);
        fVar26 = (float)((uint64_t)auVar22._0_8_ >> 0x20);
        uVar27 = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
        auVar5._4_4_ = fVar26;
        auVar5._0_4_ = fVar26 + *(float *)((int64_t)this_ptr + 0x154);
        auVar5._8_4_ = uVar27;
        auVar5._12_4_ = uVar27;
        auVar22 = insertps(auVar22,auVar5,0x10);
      }
      (**(code **)(*plVar12 + 0x3c0))(auVar22._0_8_,0xb);
    }
    FUN_01e3f820();
    auVar21._0_4_ = auVar21._0_4_ + g_02394248;
    local_68 = insertps(auVar21,*(void*)((int64_t)this_ptr + 0x154),0x10);
    local_1a8 = in_XMM1._0_8_;
    uStack_1a0 = in_XMM1._8_8_;
    cVar13 = FUN_00d054a0();
    if (cVar13 != '\0') {
      local_50 = (int64_t *)this_ptr[0x28];
      uVar27 = *(void*)(this_ptr[0x27] + 0xc);
      local_48 = local_48 & 0xffffff00;
      uVar15 = FUN_00d237a0();
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_1a8 = local_68._0_8_;
      uStack_1a0 = local_68._8_8_;
      (**(code **)(*plVar12 + 0x618))(uVar15,uVar27,uVar14);
    }
    pcVar11 = g_025795c0;
    lVar17 = this_ptr[0x27];
    if (*(int *)(lVar17 + 0xc) < 1) goto LAB_01e00020;
    uVar19 = 0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = extraout_XMM0_Qb_01;
    local_78 = auVar7 << 0x40;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = local_68._8_8_;
    local_68 = auVar8 << 0x40;
    plVar16 = (int64_t *)0x0;
    do {
      lVar17 = *(int64_t *)(lVar17 + 0x10);
      lVar1 = *(int64_t *)(lVar17 + uVar19 * 8);
      if (local_78._0_8_ == lVar1) {
        if ((local_68[0] == '\0') && (local_78._0_8_ != 0)) {
          local_68._1_7_ = (int7)((uint64_t)lVar17 >> 8);
          local_68[0] = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          lVar17 = FUN_00d50b00();
        }
        if ((local_68[0] == '\0') || (local_78._0_8_ == 0)) {
          local_68._1_7_ = (int7)((uint64_t)lVar17 >> 8);
          local_68[0] = 1;
          local_78._0_8_ = lVar1;
        }
        else {
          local_78._0_8_ = lVar1;
          auVar22._0_8_ = FUN_00d50b20();
          local_68._1_7_ = (int7)((uint64_t)auVar22._0_8_ >> 8);
          local_68[0] = 1;
        }
      }
      plVar18 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar18 = (int64_t)&g_025795a8;
      (*pcVar11)();
      if (plVar18 == plVar16) {
        FUN_00d50b20();
LAB_01dff948:
        lVar17 = *(int64_t *)(local_78._0_8_ + 0x28);
        plVar18 = plVar16;
        auVar22._0_8_ = local_1a8;
        uVar30 = uStack_1a0;
      }
      else {
        if (plVar16 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar16 = plVar18;
          goto LAB_01dff948;
        }
        lVar17 = *(int64_t *)(local_78._0_8_ + 0x28);
        auVar22._0_8_ = local_1a8;
        uVar30 = uStack_1a0;
      }
      if (lVar17 != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        lVar17 = *(int64_t *)(local_78._0_8_ + 0x28);
        if (lVar17 != 0) {
          FUN_00d50b00();
        }
        FUN_00d8dbf0();
        if (lVar17 != 0) {
          FUN_00d50b20();
        }
      }
      if (*(int64_t *)(local_78._0_8_ + 0x30) != 0) {
        FUN_00d50b00();
        auVar20._0_8_ = FUN_00d50b20();
        lVar17 = *(int64_t *)(local_78._0_8_ + 0x30);
        if (lVar17 == 0) {
          local_48 = 1;
          local_50 = &g_024c5048;
        }
        else {
          FUN_00d50b00();
          local_48 = 1;
          local_50 = &g_024c5048;
          local_38 = 0;
          auVar20._0_8_ = FUN_00d50b00();
        }
        local_38 = '\x01';
        local_40 = lVar17;
        FUN_00d94d80(auVar20._0_8_,&local_50);
        local_50 = &g_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar17 != 0) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*this_ptr + 0x918))();
      local_158 = (float)auVar22._0_8_;
      local_1a8 = auVar22._0_8_;
      uStack_1a0 = uVar30;
      (**(code **)(*plVar12 + 0x550))();
      cVar13 = FUN_00d054a0();
      plVar16 = plVar18;
      if (cVar13 != '\0') {
        FUN_01d3a630();
        FUN_01e466c0();
        cVar13 = FUN_00d05410();
        if ((*(char *)((int64_t)this_ptr + 0x15a) != '\0') &&
           (1 < *(int *)(this_ptr[0x27] + 0xc))) {
          (**(code **)(*this_ptr + 0x920))();
          lVar17 = g_02703f90;
          if (g_02703f90 != 0) {
            FUN_00d50b00();
          }
          FUN_01d51a40();
          plVar16 = local_50;
          if ((char)local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b00();
              if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_48 = local_48 & 0xffffff00;
          }
          if (lVar17 != 0) {
            FUN_00d50b20();
          }
          if ((plVar16 != (int64_t *)0x0) && (cVar13 == '\x01')) {
            FUN_00d05410();
            FUN_01d526f0();
            FUN_00d05510();
            auVar23._0_8_ = FUN_00d05150();
            auVar23._8_8_ = extraout_XMM0_Qb_02;
            fVar26 = (float)((uint64_t)auVar23._0_8_ >> 0x20);
            uVar27 = (uint32_t)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
            auVar2._4_4_ = fVar26;
            auVar2._0_4_ = fVar26 + g_02390d34;
            auVar2._8_4_ = uVar27;
            auVar2._12_4_ = uVar27;
            auVar21 = insertps(auVar23,auVar2,0x10);
            FUN_01d49110(auVar21._0_8_,3);
          }
          if (plVar16 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*this_ptr + 0x640))();
        (**(code **)(*local_50 + 0x438))();
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (uVar19 != *(uint *)(this_ptr + 0x2d)) {
          (**(code **)(*this_ptr + 0x640))();
          (**(code **)(*local_50 + 0x430))();
          if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_f0 = '\0';
        local_e8 = *arg1;
        local_e0 = '\0';
        auVar6._8_8_ = uVar30;
        auVar6._0_8_ = auVar22._0_8_;
        auVar24._4_12_ = auVar6._4_12_;
        auVar24._0_4_ = local_158 + g_02394248;
        local_f8 = plVar18;
        (**(code **)(*local_98 + 0xa00))(auVar24._0_8_,&local_f8);
        plVar16 = local_50;
        if (local_50 == plVar18) {
LAB_01dffd85:
          plVar16 = plVar18;
          if ((char)local_48 != '\0') {
LAB_01dffd8b:
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          if ((char)local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if (plVar18 != (int64_t *)0x0) {
              FUN_00d50b20();
              plVar18 = plVar16;
              goto LAB_01dffd85;
            }
            if ((char)local_48 == '\0') goto LAB_01dffd99;
            goto LAB_01dffd8b;
          }
          if (plVar18 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          local_48 = local_48 & 0xffffff00;
        }
LAB_01dffd99:
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_d8 = *arg1;
        local_d0 = '\0';
        local_c0 = '\0';
        local_c8 = plVar16;
        FUN_01e00670();
        plVar18 = local_50;
        local_a0 = 0;
        if ((char)local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = local_48 & 0xffffff00;
        }
        local_a0 = '\x01';
        local_a8 = plVar18;
        local_1a8 = auVar22._0_8_;
        uStack_1a0 = uVar30;
        (**(code **)(*plVar12 + 0x400))(&local_c8,0x29,&local_a8,2);
        if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*this_ptr + 0x640))();
        (**(code **)(*local_50 + 0x430))();
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      uVar19 = uVar19 + 1;
      lVar17 = this_ptr[0x27];
    } while ((int64_t)uVar19 < (int64_t)*(int *)(lVar17 + 0xc));
    if (local_98 == (int64_t *)0x0) goto LAB_01e00037;
  }
  else {
    if ((int)this_ptr[0x2a] == 2) {
      auVar20._0_8_ = FUN_01e3f820();
      auVar20._8_8_ = extraout_XMM0_Qb;
      local_68 = auVar21;
      if ((int)this_ptr[0x2a] != 0) {
        auVar3._4_4_ = auVar21._4_4_;
        auVar3._0_4_ = auVar21._4_4_ - *(float *)((int64_t)this_ptr + 0x154);
        auVar3._8_4_ = auVar21._12_4_;
        auVar3._12_4_ = auVar21._12_4_;
        local_68 = insertps(auVar21,auVar3,0x10);
        fVar26 = (float)((uint64_t)auVar20._0_8_ >> 0x20);
        auVar28._4_4_ = fVar26;
        auVar28._0_4_ = fVar26;
        uVar27 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
        auVar28._8_4_ = uVar27;
        auVar28._12_4_ = uVar27;
        auVar29._4_12_ = auVar28._4_12_;
        auVar29._0_4_ = fVar26 + *(float *)((int64_t)this_ptr + 0x154);
        auVar21 = insertps(auVar20,auVar29,0x10);
        auVar20._0_8_ = auVar21._0_8_;
      }
      auVar25._0_8_ = (**(code **)(*plVar12 + 0x3c8))(auVar20._0_8_,1);
      auVar25._8_8_ = extraout_XMM0_Qb_03;
      local_b8 = *arg1;
      local_b0 = '\0';
      insertps(local_68,auVar25,0x10);
      (**(code **)(*plVar12 + 0x3c0))();
      local_78._0_8_ = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_68._8_8_;
      local_68 = auVar9 << 0x40;
      if (local_b0 != '\0') {
        plVar16 = (int64_t *)0x0;
        if (local_b8 == 0) goto LAB_01e0002b;
        FUN_00d50b20();
        goto LAB_01e00020;
      }
    }
    else {
LAB_01e00020:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_68._8_8_;
      local_68 = auVar10 << 0x40;
    }
    local_78._0_8_ = 0;
    plVar16 = (int64_t *)0x0;
  }
LAB_01e0002b:
  FUN_00d50b20();
LAB_01e00037:
  if (plVar16 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68[0] != '\0') && (local_78._0_8_ != 0)) {
    FUN_00d50b20();
  }
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

