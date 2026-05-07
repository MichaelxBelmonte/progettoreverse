// Function: FUN_019ba840
// Address: 019ba840
// Size: 1713 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_019ba840(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint32_t in_EDX;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  uint64_t uVar13;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint8_t auVar14 [16];
  float fVar15;
  uint32_t uVar16;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint32_t uStack_104;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  uint32_t local_c4;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_78;
  uint32_t local_68;
  uint32_t uStack_64;
  int64_t *local_48;
  char local_40;
  
  uVar16 = (uint32_t)((uint64_t)param_2 >> 0x20);
  fVar15 = (float)param_2;
  if (*arg1 != 0) {
    local_c4 = in_EDX;
    (**(code **)(*this_ptr + 0x9b0))(param_1,0);
    local_b8 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    local_b8 = '\x01';
    local_c0 = local_90;
    FUN_019bb310();
    local_98 = local_48;
    if (local_48 == (int64_t *)0x0) {
      bVar5 = true;
      local_98 = (int64_t *)0x0;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar5 = false;
    }
    else {
      local_40 = '\0';
      bVar5 = false;
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_0197dd90();
    local_a8 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    local_a8 = '\x01';
    local_b0 = local_90;
    uVar13 = FUN_00243390();
    local_78 = local_48;
    if (local_48 == (int64_t *)0x0) {
      bVar3 = true;
      local_78 = (int64_t *)0x0;
    }
    else if (local_40 == '\0') {
      uVar13 = FUN_00d50b00();
      bVar3 = false;
    }
    else {
      local_40 = '\0';
      bVar3 = false;
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    uVar8 = *(uint *)((int64_t)local_78 + 0xc);
    uVar9 = (uint64_t)uVar8;
    if ((int)uVar8 < 1) {
      plVar7 = (int64_t *)0x0;
      bVar4 = false;
    }
    else {
      lVar10 = uVar9 + 1;
      bVar4 = false;
      plVar7 = (int64_t *)0x0;
      do {
        uVar8 = uVar8 - 1;
        plVar11 = *(int64_t **)(local_78[2] + (uint64_t)uVar8 * 8);
        local_68 = SUB84(plVar7,0);
        uStack_64 = (uint32_t)((uint64_t)plVar7 >> 0x20);
        if (plVar7 == plVar11) {
          if ((!bVar4) && (plVar7 != (int64_t *)0x0)) {
            bVar4 = true;
            FUN_00d50b00();
            goto LAB_019bab1f;
          }
          if (plVar7 != (int64_t *)0x0) goto LAB_019baae9;
LAB_019baa70:
          plVar7 = (int64_t *)0x0;
LAB_019baa7a:
          uVar13 = FUN_00d23620();
        }
        else {
          if (plVar11 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar4) && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar7 = plVar11;
          bVar4 = true;
          if (plVar11 == (int64_t *)0x0) goto LAB_019baa70;
LAB_019baae9:
          local_68 = SUB84(plVar7,0);
          uStack_64 = (uint32_t)((uint64_t)plVar7 >> 0x20);
LAB_019bab1f:
          plVar7 = (int64_t *)CONCAT44(uStack_64,local_68);
          local_40 = '\0';
          cVar6 = FUN_00e3a2e0();
          uVar13 = extraout_XMM0_Qa;
          local_48 = plVar7;
          if (cVar6 == '\0') goto LAB_019baa7a;
        }
        lVar10 = lVar10 + -1;
      } while (1 < lVar10);
      uVar9 = (uint64_t)*(uint *)((int64_t)local_78 + 0xc);
    }
    bVar1 = false;
    plVar11 = (int64_t *)0x0;
    do {
      if (((char)local_c4 == '\0') || ((int)uVar9 < 1)) goto LAB_019bae78;
      uVar9 = (uint64_t)((int)uVar9 - 1);
      plVar12 = *(int64_t **)(local_78[2] + uVar9 * 8);
      if (plVar7 == plVar12) {
        plVar12 = plVar7;
        bVar2 = bVar4;
        if ((!bVar4) && (plVar7 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b00();
          bVar2 = true;
        }
      }
      else {
        if (plVar12 != (int64_t *)0x0) {
          uVar13 = FUN_00d50b00();
        }
        bVar2 = true;
        if ((bVar4) && (plVar7 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
      bVar4 = bVar2;
      plVar7 = plVar12;
      local_f0 = '\0';
      local_f8 = plVar7;
      uVar13 = (**(code **)(*this_ptr + 0xab0))(uVar13,&local_f8);
      plVar12 = local_48;
      if (local_48 == plVar11) {
        plVar12 = plVar11;
        bVar2 = bVar1;
        if ((!bVar1) && (local_48 != (int64_t *)0x0)) {
          if (local_40 != '\0') goto LAB_019bac94;
          uVar13 = FUN_00d50b00();
          bVar2 = true;
        }
LAB_019bacd9:
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
      else {
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            uVar13 = FUN_00d50b00();
          }
          bVar2 = true;
          if ((bVar1) && (plVar11 != (int64_t *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          goto LAB_019bacd9;
        }
        if ((bVar1) && (plVar11 != (int64_t *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
LAB_019bac94:
        local_40 = '\0';
        bVar2 = true;
      }
      if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
      bVar1 = bVar2;
      if (plVar12 == (int64_t *)0x0) {
        local_e0 = '\0';
        local_e8 = plVar7;
        (**(code **)(*this_ptr + 0xae8))(uVar13,&local_e8);
        if (local_48 == (int64_t *)0x0) {
          plVar12 = (int64_t *)0x0;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          plVar12 = local_48;
        }
        else {
          local_40 = '\0';
          bVar2 = true;
          plVar12 = local_48;
        }
        if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar1 = bVar2;
        if (plVar12 == (int64_t *)0x0) {
          plVar12 = (int64_t *)0x0;
          break;
        }
      }
      FUN_01e436c0();
      (**(code **)(*plVar12 + 0x4d8))();
      cVar6 = FUN_00d05440();
      plVar11 = plVar12;
      uVar13 = extraout_XMM0_Qa_00;
    } while (cVar6 != '\0');
    uVar13 = FUN_0197dd80();
    (**(code **)(*this_ptr + 0xa78))((double)(float)uVar13,SUB84((double)fVar15,0),0);
    auVar14._4_4_ = uVar16;
    auVar14._0_4_ = fVar15;
    auVar14._8_4_ = in_XMM1_Dc;
    auVar14._12_4_ = in_XMM1_Dd;
    uStack_104 = (uint32_t)((uint64_t)uVar13 >> 0x20);
    auVar14 = insertps(auVar14,uStack_104,0xc);
    uVar13 = (**(code **)(*this_ptr + 0xaa0))(auVar14._0_8_);
    plVar11 = plVar12;
LAB_019bae78:
    local_d8 = local_78;
    local_d0 = '\0';
    (**(code **)(*this_ptr + 0xdc8))(uVar13,1);
    if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar1) && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar3) {
      FUN_00d50b20();
    }
    if (!bVar5 && local_98 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

