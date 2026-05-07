// ===================================================================
// GNTabView — Complete reconstructed pseudocode
// 9 functions
// ===================================================================

// Registered properties (1):
//   GNTabViewControlMode _controlMode


// ============================================================
// 01dff500
// ============================================================
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



// ============================================================
// 01e00730
// ============================================================
// Function: FUN_01e00730
// Address: 01e00730
// Size: 1254 bytes
// Class: GNTabView
// === GNTabView properties ===
//   GNTabViewControlMode _controlMode


void FUN_01e00730(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t *this_ptr;
  uint32_t uVar8;
  uint32_t uVar9;
  int64_t local_38;
  char local_30;
  
  if ((int)this_ptr[0x2a] != 1) goto LAB_01e00aa1;
  FUN_01d3abf0();
  uVar8 = FUN_01e466c0();
  iVar5 = -1;
  if (0 < *(int *)(this_ptr[0x27] + 0xc)) {
    iVar7 = 0;
    uVar9 = param_2;
    do {
      param_2 = (**(code **)(*this_ptr + 0x918))();
      cVar3 = FUN_00d05410(uVar8,param_2,uVar9);
      if (cVar3 != '\0') {
        iVar4 = FUN_01d3a5a0();
        iVar5 = iVar7;
        goto joined_r0x01e007d8;
      }
      iVar7 = iVar7 + 1;
      uVar9 = param_2;
    } while (iVar7 < *(int *)(this_ptr[0x27] + 0xc));
  }
  iVar4 = FUN_01d3a5a0();
joined_r0x01e007d8:
  if ((iVar4 == 1) && (iVar7 = FUN_01d3b630(), iVar7 == 1)) {
    if (iVar5 != -1) {
      if ((*(char *)((int64_t)this_ptr + 0x15a) != '\0') && (1 < *(int *)(this_ptr[0x27] + 0xc)))
      {
        uVar9 = (**(code **)(*this_ptr + 0x920))();
        cVar3 = FUN_00d05410(uVar8,uVar9,param_2);
        if (cVar3 != '\0') {
          plVar1 = (int64_t *)this_ptr[0x29];
          if (plVar1 == (int64_t *)0x0) {
            return;
          }
          uVar8 = FUN_00d50b00();
          (**(code **)(*plVar1 + 0x30))(uVar8,iVar5);
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
            return;
          }
          return;
        }
      }
      FUN_01e00d40();
      return;
    }
  }
  else {
    iVar7 = FUN_01d3a5a0();
    if (iVar7 == 5) {
      if (iVar5 != -1) {
        *(int *)(this_ptr + 0x2d) = iVar5;
        cVar3 = FUN_01e45650();
        if (cVar3 == '\0') {
          (**(code **)(*this_ptr + 0x740))();
        }
      }
      if (*(char *)((int64_t)this_ptr + 0x15a) == '\0') {
        if (((*(char *)((int64_t)this_ptr + 0x159) != '\0') &&
            (1 < *(int *)(this_ptr[0x27] + 0xc))) && (iVar5 != -1)) {
          *(void*)((int64_t)this_ptr + 0x15a) = 1;
          (**(code **)(*this_ptr + 0x740))();
          if (*(char *)((int64_t)this_ptr + 0x15a) != '\0') goto LAB_01e008e0;
        }
        cVar3 = (**(code **)(*this_ptr + 0x750))();
        if (cVar3 != '\0') goto LAB_01e008e0;
      }
      else {
LAB_01e008e0:
        (**(code **)(*this_ptr + 0x620))();
      }
      if ((iVar5 == -1) && (cVar3 = FUN_01e45650(), cVar3 != '\0')) {
        FUN_01e42030();
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        if (local_38 != 0) {
          FUN_01e42030();
          FUN_00d50b00();
          FUN_01d8fc00();
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_30 != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  if ((int)this_ptr[0x2a] == 1) {
    iVar5 = FUN_01d3a5a0();
    if ((((iVar5 == 9) && (uVar6 = FUN_01d3b590(), (uVar6 & 0x100) != 0)) &&
        (cVar3 = (**(code **)(*this_ptr + 0x878))(), cVar3 != '\0')) &&
       (cVar3 = FUN_01e420b0(), cVar3 != '\0')) {
      iVar5 = FUN_01dfe5d0();
      if (iVar5 < 1) {
        if (this_ptr[0x27] != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      FUN_01e00d40();
      return;
    }
    if ((((int)this_ptr[0x2a] == 1) && (iVar5 = FUN_01d3a5a0(), iVar5 == 9)) &&
       ((uVar6 = FUN_01d3b590(), (uVar6 & 0x200) != 0 &&
        ((cVar3 = (**(code **)(*this_ptr + 0x878))(), cVar3 != '\0' &&
         (cVar3 = FUN_01e420b0(), cVar3 != '\0')))))) {
      FUN_01dfe5d0();
      if (this_ptr[0x27] != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      FUN_01e00d40();
      return;
    }
  }
LAB_01e00aa1:
  iVar5 = FUN_01d3a5a0();
  if (((iVar5 == 2) && (cVar3 = (**(code **)(*this_ptr + 0x878))(), cVar3 != '\0')) &&
     (cVar3 = FUN_01e420b0(), cVar3 != '\0')) {
    FUN_01d3b5d0();
    iVar5 = FUN_00d8d560();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (iVar5 != 0) {
      if (iVar5 < 0) {
        iVar5 = 1;
      }
      lVar2 = this_ptr[0x27];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      iVar7 = *(int *)(lVar2 + 0xc);
      FUN_00d50b20();
      if (iVar7 <= iVar5) {
        if (this_ptr[0x27] != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      FUN_01e00d40();
      return;
    }
  }
  FUN_01e459c0();
  return;
}



// ============================================================
// 01e01250
// ============================================================
// Function: FUN_01e01250
// Address: 01e01250
// Size: 923 bytes
// Class: GNTabView
// === GNTabView properties ===
//   GNTabViewControlMode _controlMode


void FUN_01e01250(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar5;
  bool bVar6;
  bool bVar7;
  float fVar9;
  uint64_t extraout_XMM0_Qb;
  uint32_t uVar10;
  uint8_t auVar8 [16];
  uint8_t in_XMM1 [16];
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_40;
  char local_38;
  
  lVar1 = *arg1;
  if (((lVar1 == 0) || (*(char *)(lVar1 + 0x60) != '\0')) && (this_ptr[0x28] != lVar1)) {
    plVar5 = (int64_t *)this_ptr[0x29];
    if (plVar5 != (int64_t *)0x0) {
      auVar8._0_8_ = FUN_00d50b00();
      local_a8 = *arg1;
      local_a0 = '\0';
      (**(code **)(*plVar5 + 0x18))(auVar8._0_8_,&local_a8);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (this_ptr[0x28] != 0) {
      plVar5 = *(int64_t **)(this_ptr[0x28] + 0x20);
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar5 + 0x478))();
      FUN_00d50b20();
    }
    lVar1 = *arg1;
    this_ptr[0x28] = lVar1;
    if (lVar1 == 0) {
      bVar6 = false;
      plVar5 = (int64_t *)0x0;
    }
    else {
      plVar5 = *(int64_t **)(lVar1 + 0x20);
      bVar6 = plVar5 == (int64_t *)0x0;
      if (bVar6) {
        plVar5 = (int64_t *)0x0;
      }
      else {
        FUN_00d50b00();
      }
      bVar6 = !bVar6;
      auVar8._0_8_ = FUN_01e3f820();
      auVar8._8_8_ = extraout_XMM0_Qb;
      if ((int)this_ptr[0x2a] != 0) {
        auVar3._4_4_ = in_XMM1._4_4_;
        auVar3._0_4_ = in_XMM1._4_4_ - *(float *)((int64_t)this_ptr + 0x154);
        auVar3._8_4_ = in_XMM1._12_4_;
        auVar3._12_4_ = in_XMM1._12_4_;
        insertps(in_XMM1,auVar3,0x10);
        fVar9 = (float)((uint64_t)auVar8._0_8_ >> 0x20);
        uVar10 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
        auVar4._4_4_ = fVar9;
        auVar4._0_4_ = fVar9 + *(float *)((int64_t)this_ptr + 0x154);
        auVar4._8_4_ = uVar10;
        auVar4._12_4_ = uVar10;
        auVar8 = insertps(auVar8,auVar4,0x10);
      }
      (**(code **)(*plVar5 + 0x4d0))(auVar8._0_8_);
      local_90 = '\0';
      local_98 = plVar5;
      (**(code **)(*this_ptr + 0x450))();
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (*(int64_t *)(this_ptr[0x28] + 0x48) != 0) {
        FUN_00d50b00();
        FUN_01e42030();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (local_40 != 0) {
          FUN_01e42030();
          local_88 = *(int64_t *)(this_ptr[0x28] + 0x48);
          if (local_88 != 0) {
            FUN_00d50b00();
          }
          local_80 = '\x01';
          FUN_01d8c820();
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    if (((*(uint *)(this_ptr + 0x2a) & 0xfffffffe) == 2) &&
       (plVar2 = (int64_t *)this_ptr[0x2c], plVar2 != (int64_t *)0x0)) {
      FUN_01dfe5d0();
      (**(code **)(*plVar2 + 0x918))();
    }
    plVar2 = (int64_t *)this_ptr[0x29];
    if (plVar2 != (int64_t *)0x0) {
      auVar8._0_8_ = FUN_00d50b00();
      local_78 = *arg1;
      local_70 = '\0';
      (**(code **)(*plVar2 + 0x20))(auVar8._0_8_,&local_78);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_01e42030();
    if (local_40 == 0) {
      bVar7 = false;
    }
    else {
      FUN_01e4c160();
      bVar7 = local_b8 != 0;
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar7) {
      FUN_01e42030();
      FUN_01d86b20();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0x620))();
    if ((bVar6) && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01dff100
// ============================================================
// Function: FUN_01dff100
// Address: 01dff100
// Size: 730 bytes
// Class: GNTabView
// === GNTabView properties ===
//   GNTabViewControlMode _controlMode


void FUN_01dff100(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  uint8_t in_XMM0 [16];
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  int64_t local_78;
  char local_70;
  int64_t *local_48;
  uint8_t auVar10 [12];
  uint64_t extraout_XMM0_Qb_00;
  
  auVar10 = in_XMM0._4_12_;
  lVar1 = this_ptr[0x2c];
  if (lVar1 == 0) {
    iVar4 = (int)this_ptr[0x2a];
joined_r0x01dff16b:
    bVar3 = true;
    local_48 = (int64_t *)0x0;
    if (iVar4 != 2) goto LAB_01dff171;
LAB_01dff2a9:
    if (lVar1 != 0) {
      FUN_01d6f8d0();
      lVar6 = this_ptr[0x27];
      if (0 < *(int *)(lVar6 + 0xc)) {
        lVar5 = 0;
        do {
          lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar5 * 8);
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          lVar6 = *(int64_t *)(lVar6 + 0x28);
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          FUN_01d6f990();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          lVar5 = lVar5 + 1;
          lVar6 = this_ptr[0x27];
        } while (lVar5 < *(int *)(lVar6 + 0xc));
      }
      if (((*(uint *)(this_ptr + 0x2a) & 0xfffffffe) == 2) &&
         (plVar2 = (int64_t *)this_ptr[0x2c], plVar2 != (int64_t *)0x0)) {
        FUN_01dfe5d0();
        (**(code **)(*plVar2 + 0x918))();
      }
    }
  }
  else {
    auVar9._0_8_ = FUN_00d50b00();
    auVar9._8_8_ = extraout_XMM0_Qb;
    auVar10 = auVar9._4_12_;
    local_48 = (int64_t *)this_ptr[0x2c];
    if (local_48 == (int64_t *)0x0) {
      iVar4 = (int)this_ptr[0x2a];
      goto joined_r0x01dff16b;
    }
    auVar7._0_8_ = FUN_00d50b00();
    auVar7._8_8_ = extraout_XMM0_Qb_00;
    auVar10 = auVar7._4_12_;
    bVar3 = false;
    iVar4 = (int)this_ptr[0x2a];
    if (iVar4 == 2) goto LAB_01dff2a9;
LAB_01dff171:
    if (iVar4 == 3) {
      if (bVar3) goto LAB_01dff3c0;
      auVar8._0_4_ = (float)*(int *)(this_ptr[0x27] + 0xc);
      auVar8._4_12_ = auVar10;
      auVar9 = blendps(auVar8,g_023b1620,0xe);
      (**(code **)(*local_48 + 0xad8))(auVar9._0_8_);
      if (0 < *(int *)(this_ptr[0x27] + 0xc)) {
        lVar6 = 0;
        do {
          (**(code **)(*local_48 + 0x4a0))();
          plVar2 = *(int64_t **)(*(int64_t *)(local_78 + 0x10) + lVar6 * 8);
          lVar5 = *(int64_t *)(*(int64_t *)(this_ptr[0x27] + 0x10) + lVar6 * 8);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          lVar5 = *(int64_t *)(lVar5 + 0x28);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar2 + 0x958))();
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(this_ptr[0x27] + 0xc));
      }
      if (((*(uint *)(this_ptr + 0x2a) & 0xfffffffe) == 2) &&
         (plVar2 = (int64_t *)this_ptr[0x2c], plVar2 != (int64_t *)0x0)) {
        FUN_01dfe5d0();
        (**(code **)(*plVar2 + 0x918))();
      }
    }
    else {
      (**(code **)(*this_ptr + 0x620))();
    }
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
LAB_01dff3c0:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01dfebd0
// ============================================================
// Function: FUN_01dfebd0
// Address: 01dfebd0
// Size: 820 bytes
// Class: GNTabView
// === GNTabView properties ===
//   GNTabViewControlMode _controlMode


void FUN_01dfebd0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  void*puVar3;
  void*puVar4;
  int unaff_ESI;
  int64_t *this_ptr;
  
  if ((int)this_ptr[0x2a] == unaff_ESI) {
    return;
  }
  if (((int64_t *)this_ptr[0x2c] != (int64_t *)0x0) &&
     ((**(code **)(*(int64_t *)this_ptr[0x2c] + 0x478))(), this_ptr[0x2c] != 0)) {
    this_ptr[0x2c] = 0;
    FUN_00d50b20();
  }
  *(int *)(this_ptr + 0x2a) = unaff_ESI;
  if (unaff_ESI == 3) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_0006daf0();
    *(void*)(puVar3 + 0x27) = 0;
    puVar3[0x2e] = 0;
    *(void*)(puVar3 + 0x2f) = 0;
    puVar3[0x30] = 0;
    *(void*)(puVar3 + 0x31) = 0;
    puVar3[0x28] = 0;
    puVar3[0x29] = 0;
    *(void*)(puVar3 + 0x2a) = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0;
    *(void*)((int64_t)puVar3 + 0x165) = 0;
    *(void*)((int64_t)puVar3 + 0x18c) = 0;
    *(void*)((int64_t)puVar3 + 0x194) = 0;
    *(void*)((int64_t)puVar3 + 0x199) = 0;
    puVar3[0x35] = 0;
    puVar3[0x36] = 0;
    puVar3[0x37] = 0;
    puVar3[0x38] = 0;
    *puVar3 = &g_026ab048;
    puVar3[2] = &g_026abb78;
    puVar3[0x3d] = 0;
    *(void*)((int64_t)puVar3 + 0x1d4) = 0;
    *(void*)((int64_t)puVar3 + 0x1dc) = 0;
    puVar3[0x39] = 0;
    puVar3[0x3a] = 0;
    (*g_026ab060)();
    puVar4 = (void*)this_ptr[0x2c];
    if (puVar4 == puVar3) {
      FUN_00d50b20();
    }
    else {
      this_ptr[0x2c] = (int64_t)puVar3;
      if (puVar4 != (void*)0x0) {
        FUN_00d50b20();
      }
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
    *puVar4 = &g_02677e10;
    puVar4[2] = &g_026788e8;
    puVar4[0x39] = &g_02678928;
    *(void*)((int64_t)puVar4 + 500) = 0;
    *(void*)(puVar4 + 0x3f) = 0;
    puVar4[0x43] = 0;
    puVar4[0x3c] = 0;
    puVar4[0x3d] = 0;
    puVar4[0x3a] = 0;
    puVar4[0x3b] = 0;
    *(void*)(puVar4 + 0x3e) = 0;
    *(void*)((int64_t)puVar4 + 0x1fc) = 0;
    *(void*)((int64_t)puVar4 + 0x204) = 0;
    *(void*)((int64_t)puVar4 + 0x20c) = 0;
    (*g_02677e28)();
    (**(code **)(*(int64_t *)this_ptr[0x2c] + 0xab8))();
    FUN_00d50b20();
  }
  else if (unaff_ESI == 2) {
    plVar2 = (int64_t *)FUN_00e8fc40();
    FUN_001e3c20();
    (**(code **)(*plVar2 + 0x18))();
    plVar1 = (int64_t *)this_ptr[0x2c];
    if (plVar1 == plVar2) {
      FUN_00d50b20();
    }
    else {
      this_ptr[0x2c] = (int64_t)plVar2;
      if (plVar1 == (int64_t *)0x0) goto LAB_01dfeead;
      FUN_00d50b20();
    }
  }
  plVar2 = (int64_t *)this_ptr[0x2c];
LAB_01dfeead:
  if (plVar2 != (int64_t *)0x0) {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x450))();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    FUN_01dfef90();
    FUN_01dff100();
  }
  return;
}



// ============================================================
// 01dfd890
// ============================================================
// Function: FUN_01dfd890
// Address: 01dfd890
// Size: 2398 bytes
// Class: GNTabView
// String references:
//   "GNTabView"
//   "_editItemIndex"
//   "_editByInsertingItemAtIndex"
//   "_editByRemoveItem"
//   "_editShowsTabs"
//   "_editControlMode"
//   "setSelectedItemIndex"
//   "getSelectedItemIndex"
// === GNTabView properties ===
//   GNTabViewControlMode _controlMode


void FUN_01dfd890(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b8e90 = "_editItemIndex";
      g_028b8e98 = &g_026f24b0;
      g_028b8ea0 = 0;
      g_028b8ea8 = &g_027f3020;
      g_028b8eb0 = FUN_01e04270;
      g_028b8eb8 = FUN_01dfe220;
      g_028b8ec0 = 0;
      ram_00000000028b8ec8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8ed8 = "_editByInsertingItemAtIndex";
      g_028b8ee0 = &g_026f24b0;
      g_028b8ee8 = 0;
      g_028b8ef0 = &g_027f3020;
      g_028b8ef8 = FUN_01e04270;
      g_028b8f00 = FUN_01dfe2d0;
      g_028b8f08 = 0;
      ram_00000000028b8f10 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8f20 = "_editByRemoveItem";
      g_028b8f28 = &g_026f24b0;
      g_028b8f30 = 0;
      g_028b8f38 = &g_027f3024;
      g_028b8f40 = FUN_01e042f0;
      g_028b8f48 = FUN_01dfe3d0;
      g_028b8f50 = 0;
      ram_00000000028b8f58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8f68 = "_editShowsTabs";
      g_028b8f70 = &g_026f24b0;
      g_028b8f78 = 0;
      g_028b8f80 = &g_027f3027;
      g_028b8f88 = FUN_01e04370;
      g_028b8f90 = FUN_01dfe4c0;
      g_028b8f98 = 0;
      ram_00000000028b8fa0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8fb0 = "_editControlMode";
      g_028b8fb8 = &g_026f24b0;
      g_028b8fc0 = 0;
      g_028b8fc8 = &g_027f302a;
      g_028b8fd0 = FUN_01e04390;
      g_028b8fd8 = FUN_01dfe560;
      g_028b8fe0 = 0;
      ram_00000000028b8fe8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8ff8 = "setSelectedItemIndex";
      g_028b9000 = &g_026f24b0;
      g_028b9008 = 0;
      g_028b9010 = &g_027f302a;
      g_028b9018 = FUN_01e04390;
      g_028b9020 = FUN_01dfe5c0;
      g_028b9028 = 0;
      ram_00000000028b9030 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b9040 = "getSelectedItemIndex";
      g_028b9048 = &g_026f24b0;
      g_028b9050 = 0;
      g_028b9058 = &g_027f302d;
      g_028b9060 = FUN_01e043b0;
      g_028b9068 = FUN_01dfe5d0;
      g_028b9070 = 0;
      ram_00000000028b9078 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



// ============================================================
// 001899f0
// ============================================================
// Function: FUN_001899f0
// Address: 001899f0
// Size: 574 bytes
// Class: GNTabView
// String references:
//   "GNTabView"
// === GNTabView properties ===
//   GNTabViewControlMode _controlMode


void FUN_001899f0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_1c8;
  int64_t local_1a0;
  void*local_58;
  
  if ((g_027fa280 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026f24c8 = FUN_0006d940();
    g_026f24b0 = "GNTabView";
    g_026f24b8 = 0x170;
    g_026f24c0 = FUN_001f41f0;
    g_026f24d0 = 0;
    ram_00000000026f24d8 = 0;
    g_026f24e0 = 0;
    ram_00000000026f24e8 = 0;
    g_026f24f0 = 0;
    ram_00000000026f24f8 = 0;
    g_026f2500 = 0;
    ram_00000000026f2508 = 0;
    g_026f2510 = 0;
    ram_00000000026f2518 = 0;
    g_026f2520 = 0;
    ram_00000000026f2528 = 0;
    g_026f2530 = 0;
    ram_00000000026f2538 = 0;
    g_026f2540 = 0;
    ram_00000000026f2548 = 0;
    g_026f2550 = 0;
    ram_00000000026f2558 = 0;
    g_026f2560 = 0;
    _ram_00000000026f2568 = 0;
    g_026f2570 = 0;
    ___cxa_guard_release();
  }
  if (g_026f256b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    local_58 = (void*)0x0;
    if (1 < g_02802630) {
      local_58 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_58 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_001f42d0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01dfd890();
    FUN_00e87920(uVar2,0);
    if (local_1a0 != 0) {
      FUN_00d50b20();
    }
    if (local_1c8 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    if (local_58 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
  }
  return;
}



// ============================================================
// 001f42d0
// ============================================================
// Function: FUN_001f42d0
// Address: 001f42d0
// Size: 1469 bytes
// Class: GNTabView
// String references:
//   "GNTabView"
// === GNTabView properties ===
//   GNTabViewControlMode _controlMode


void FUN_001f42d0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_0269b358;
  this_ptr[2] = &g_0269bca0;
  FUN_001f4910();
  FUN_001f4c20();
  FUN_001f4f00();
  *(void*)(this_ptr + 0x2a) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f256b == '\0') {
    FUN_001f5240();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x154) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f256b == '\0') {
    FUN_001f5470();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x2b) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f256b == '\0') {
    FUN_001f55e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x159) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f256b == '\0') {
    FUN_001f5750();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x15a) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f256b == '\0') {
    FUN_001f58c0();
    FUN_00e87980();
  }
  FUN_001f5a30();
  *(void*)(this_ptr + 0x2d) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f256b == '\0') {
    FUN_001f5d20();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 001f5240
// ============================================================
// Function: FUN_001f5240
// Address: 001f5240
// Size: 519 bytes
// Class: GNTabView
// String references:
//   "GNTabView"
//   "GNTabViewControlMode"
//   "_controlMode"
// === GNTabView properties ===
//   GNTabViewControlMode _controlMode


void* FUN_001f5240(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027fa320 = "_controlMode";
      g_027fa328 = &g_026f24b0;
      g_027fa330 = 0;
      g_027fa338 = 0x6500;
      g_027fa340 = "GNTabViewControlMode";
      g_027fa348 = &g_026f2690;
      g_027fa350 = 0;
      ram_00000000027fa358 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027fa320;
}

