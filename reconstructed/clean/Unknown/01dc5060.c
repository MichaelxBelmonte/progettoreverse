// Function: FUN_01dc5060
// Address: 01dc5060
// Size: 2721 bytes
// Class: Unknown

void FUN_01dc5060(uint64_t param_1,float param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  void*puVar7;
  void*puVar8;
  int iVar9;
  int64_t *this_ptr;
  bool bVar10;
  float fVar11;
  float fVar12;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar13;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  uint64_t extraout_XMM0_Qa_05;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  float fVar14;
  float fVar15;
  uint8_t auVar16 [16];
  uint8_t auVar18 [12];
  uint8_t auVar17 [16];
  uint8_t auVar19 [16];
  int64_t *local_c8;
  char local_c0;
  float local_a8;
  uint8_t local_98 [16];
  uint8_t local_78 [16];
  int64_t *local_50;
  float local_44;
  int64_t *local_40;
  char local_38;
  
  local_98._8_8_ = in_XMM0_Qb;
  local_98._0_8_ = param_1;
  FUN_01dc0d60();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  fVar14 = (float)param_1;
  if (g_028b8a58 == -1) {
LAB_01dc515e:
    bVar1 = false;
    local_50 = (int64_t *)0x0;
  }
  else {
    FUN_01dc0d60();
    cVar3 = FUN_01dcca50();
    cVar4 = '\x01';
    uVar13 = extraout_XMM0_Qa;
    if (cVar3 == '\0') {
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_c8 + 0x6c0))();
      uVar13 = extraout_XMM0_Qa_00;
      if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_01dc515e;
    FUN_01dcc290(uVar13,g_028b8a58);
    if (local_40 == (int64_t *)0x0) {
      bVar1 = false;
      local_50 = (int64_t *)0x0;
    }
    else {
      bVar1 = true;
      local_50 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    fVar11 = (float)FUN_01db9a50();
    fVar12 = (float)FUN_01db9a30();
    local_44 = (fVar11 - param_2) + fVar14;
    if (local_44 < fVar12) {
      local_44 = (float)FUN_01db9a30();
    }
    fVar11 = (float)FUN_01db9a40();
    auVar16 = ZEXT416((uint)local_44);
    if (fVar11 < local_44) {
      local_44 = (float)FUN_01db9a40();
    }
    cVar3 = FUN_01dc0ce0();
    if (cVar3 == '\0') {
      FUN_01db96b0();
      (**(code **)(*local_40 + 0x7b0))();
      iVar9 = g_028b8a58;
      if (local_40 != (int64_t *)0x0) {
        iVar6 = FUN_01dca080();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar9 < iVar6 + -1) {
          iVar9 = g_028b8a58 + 1;
          bVar10 = false;
          while( true ) {
            fVar11 = (float)FUN_01dd38e0();
            (**(code **)(*local_40 + 0x7b0))();
            FUN_01e3f820();
            auVar19 = auVar16;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_a8 = auVar16._0_4_;
            auVar16 = auVar19;
            if (local_a8 <= fVar11) break;
            FUN_01dcc290();
            fVar11 = (float)FUN_01db9a50();
            auVar16 = auVar19;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
              auVar16 = auVar19;
            }
            uVar13 = (**(code **)(*local_40 + 0x968))();
            if (fVar11 < (float)uVar13) {
              FUN_01dcc290(uVar13,iVar9);
              FUN_01db96b0(fVar11 + g_02390124);
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              bVar10 = true;
            }
            iVar6 = FUN_01dca080();
            iVar9 = iVar9 + 1;
            if (iVar6 <= iVar9) {
              if (!bVar10) break;
              iVar9 = g_028b8a58 + 1;
              bVar10 = false;
            }
          }
        }
      }
      FUN_01dca080();
      local_78._0_8_ = FUN_01dc1b40();
      local_78._8_8_ = extraout_XMM0_Qb;
      (**(code **)(*local_40 + 0x4d8))();
      blendps(auVar16,local_78,1);
      (**(code **)(*local_40 + 0x4e8))();
    }
    else {
      local_78._0_4_ = FUN_01db9a50();
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_025683c0;
      pcVar2 = g_025683d8;
      (*g_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_025683c0;
      (*pcVar2)();
      FUN_00c92170();
      FUN_00c92160();
      local_78._0_4_ = local_44 - (float)local_78._0_4_;
      iVar9 = g_028b8a58;
      if ((float)local_78._0_4_ <= 0.0) {
        if ((float)local_78._0_4_ < 0.0) {
          do {
            iVar9 = iVar9 + 1;
            iVar6 = FUN_01dca080();
            if (iVar6 <= iVar9) break;
            FUN_01dcc290(extraout_XMM0_Qa_05,iVar9);
            uVar13 = FUN_01db9a50();
            fVar11 = (float)uVar13;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
            FUN_01dcc290(uVar13,iVar9);
            uVar13 = FUN_01db9a40();
            fVar12 = (float)uVar13;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
            FUN_01dcc290(uVar13,iVar9);
            fVar15 = fVar11 - (float)local_78._0_4_;
            if (fVar15 <= fVar12) {
              fVar12 = fVar15;
            }
            FUN_01db96b0();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_78._0_4_ = (float)local_78._0_4_ - (fVar11 - fVar12);
          } while (0.0 < (float)local_78._0_4_);
        }
      }
      else {
        do {
          iVar9 = iVar9 + 1;
          iVar6 = FUN_01dca080();
          if (iVar6 <= iVar9) break;
          FUN_01dcc290(extraout_XMM0_Qa_04,iVar9);
          uVar13 = FUN_01db9a50();
          fVar11 = (float)uVar13;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          FUN_01dcc290(uVar13,iVar9);
          uVar13 = FUN_01db9a30();
          fVar12 = (float)uVar13;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          FUN_01dcc290(uVar13,iVar9);
          fVar15 = fVar11 - (float)local_78._0_4_;
          if (fVar12 <= fVar15) {
            fVar12 = fVar15;
          }
          FUN_01db96b0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_78._0_4_ = (float)local_78._0_4_ - (fVar11 - fVar12);
        } while (0.0 < (float)local_78._0_4_);
      }
      FUN_01db96b0();
      if (puVar8 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (puVar7 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_40 + 0x6c0))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      (**(code **)(*local_40 + 0x7b8))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 == (int64_t *)0x0) {
        FUN_01e42030();
        (**(code **)(MACH_HEADER._0_8_ + 0x620))();
      }
      else {
        (**(code **)(*local_40 + 0x7b8))();
        (**(code **)(*local_40 + 0x620))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01e40eb0();
      (**(code **)(*local_40 + 0x620))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if (g_028b8a5c != -1) {
    cVar3 = FUN_01dcca60();
    if (cVar3 == '\0') {
      FUN_01f27fe0();
      bVar5 = (**(code **)(*local_40 + 0x6c0))();
      bVar10 = g_028b8a48 != 0;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar5 & bVar10) == 0) goto LAB_01dc5980;
    }
    else if (g_028b8a48 == 0) goto LAB_01dc5980;
    fVar11 = (fVar14 - param_2) + g_028b8a60;
    g_028b8a60 = fVar11;
    fVar12 = (float)FUN_01d526f0();
    fVar12 = g_023908ec - fVar12;
    if (fVar11 < fVar12) {
      fVar12 = (float)FUN_01d526f0();
      fVar12 = g_023908ec - fVar12;
      g_028b8a60 = fVar12;
    }
    fVar11 = g_028b8a60;
    auVar16 = ZEXT416((uint)fVar12);
    FUN_01e3f820();
    auVar16._0_4_ = auVar16._0_4_ + g_02394248;
    if (auVar16._0_4_ < fVar11) {
      FUN_01e3f820();
      g_028b8a60 = auVar16._0_4_ + g_02394248;
    }
    auVar16 = ZEXT816(0);
    if (fVar14 < 0.0) {
      auVar19 = insertps(local_98,ZEXT416((uint)g_02390124),0x11);
    }
    else {
      auVar19 = insertps(local_98,ZEXT416((uint)g_02390124),0x10);
    }
    FUN_01e3f820();
    auVar18 = auVar16._4_12_;
    fVar14 = auVar16._0_4_ + g_02390d00;
    local_98._0_4_ = auVar19._0_4_;
    if (fVar14 < (float)local_98._0_4_) {
      FUN_01e3f820();
      auVar17._0_4_ = fVar14 + g_02390d00;
      auVar17._4_12_ = auVar18;
      blendps(auVar19,auVar17,1);
    }
    iVar9 = FUN_01dd3800();
    if (iVar9 != -1) {
      FUN_01dcc290(extraout_XMM0_Qa_01,iVar9);
      cVar3 = FUN_01db9fa0();
      uVar13 = extraout_XMM0_Qa_02;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
      if ((cVar3 != '\0') && (iVar9 != g_028b8a5c)) {
        FUN_01dce080(uVar13,iVar9);
        iVar6 = FUN_01dd3800();
        if (iVar6 == iVar9) {
          (**(code **)(*local_40 + 0x980))();
          g_028b8a5c = iVar9;
          FUN_01f27fe0();
          cVar3 = (**(code **)(*local_40 + 0x6c0))();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') {
            FUN_01e40eb0();
            (**(code **)(*local_40 + 0x620))();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          FUN_01dce080(extraout_XMM0_Qa_03,g_028b8a5c);
        }
      }
    }
    (**(code **)(*this_ptr + 0x620))();
  }
LAB_01dc5980:
  if ((bVar1) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

