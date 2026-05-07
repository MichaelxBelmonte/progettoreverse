// Function: FUN_01dc0e10
// Address: 01dc0e10
// Size: 2033 bytes
// Class: GNValue

void FUN_01dc0e10(void)

{
  uint8_t auVar1 [16];
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  int iVar7;
  uint32_t uVar8;
  int iVar9;
  void*arg1;
  int64_t *plVar10;
  int64_t *this_ptr;
  bool bVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  float fVar15;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar16;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  float local_f8;
  float fStack_f4;
  int64_t local_e8;
  char local_e0;
  uint64_t local_58;
  uint64_t uStack_50;
  int64_t *local_40;
  char local_38;
  
  plVar5 = local_40;
  (**(code **)(*this_ptr + 0x640))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01dc0d60();
  if (local_40 == (int64_t *)0x0) {
    bVar2 = true;
    bVar11 = false;
    plVar14 = (int64_t *)0x0;
    bVar3 = false;
    plVar12 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    FUN_01d48370();
    bVar11 = false;
    bVar3 = false;
    plVar12 = (int64_t *)0x0;
    plVar14 = (int64_t *)0x0;
    for (iVar9 = 0; iVar7 = FUN_01dca080(), iVar9 < iVar7; iVar9 = iVar9 + 1) {
      FUN_01dcc290();
      if (local_40 == plVar12) {
        if ((bVar3) || (local_40 == (int64_t *)0x0)) {
joined_r0x01dc0f9d:
          plVar10 = plVar12;
          bVar2 = bVar3;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar10 = plVar12;
          bVar2 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01dc0f88;
          }
        }
      }
      else {
        plVar10 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          if ((bVar3) && (plVar12 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar12 = local_40;
LAB_01dc0f88:
            bVar3 = true;
            goto joined_r0x01dc0f9d;
          }
        }
        else {
          bVar2 = true;
          if ((bVar3) && (plVar12 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      bVar3 = bVar2;
      FUN_01db99d0();
      if (local_40 == plVar14) {
        if ((bVar11) || (local_40 == (int64_t *)0x0)) {
joined_r0x01dc1090:
          plVar13 = plVar14;
          bVar2 = bVar11;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar13 = plVar14;
          bVar2 = true;
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01dc1078;
          }
        }
      }
      else {
        plVar13 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          if ((bVar11) && (plVar14 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar14 = local_40;
LAB_01dc1078:
            bVar11 = true;
            goto joined_r0x01dc1090;
          }
        }
        else {
          bVar2 = true;
          if ((bVar11) && (plVar14 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      bVar11 = bVar2;
      FUN_01db9ab0();
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar13 + 0x958))();
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      cVar6 = FUN_01dd3d00();
      if (cVar6 == '\0') {
LAB_01dc11d0:
        (**(code **)(*plVar13 + 0x918))();
      }
      else {
        FUN_01dd32b0();
        local_38 = '\0';
        cVar6 = FUN_00d24090();
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        local_40 = plVar10;
        if (cVar6 == '\0') goto LAB_01dc11d0;
        (**(code **)(*plVar13 + 0x918))();
      }
      local_58 = FUN_01db9a50();
      uStack_50 = extraout_XMM0_Qb;
      fVar15 = (float)FUN_01dce580();
      auVar19._0_8_ = (**(code **)(*this_ptr + 0x918))();
      auVar19._8_8_ = extraout_XMM0_Qb_00;
      auVar18._4_12_ = local_58._4_12_;
      auVar18._0_4_ = (float)local_58 + fVar15;
      auVar19 = insertps(auVar18,auVar19,0x10);
      (**(code **)(*plVar13 + 0x4d0))();
      if (iVar9 == g_028b8a5c) {
        (**(code **)(*plVar5 + 0x3a0))();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01d488d0();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar12 = (int64_t *)*arg1;
        FUN_01e3f820();
        (**(code **)(*plVar12 + 0x3b0))();
      }
      else {
        FUN_01e3f820();
        (**(code **)(*plVar13 + 0x610))();
        cVar6 = FUN_01db9b00();
        if (cVar6 != '\0') {
          fVar15 = (float)FUN_01db9a50();
          FUN_01e3f820();
          auVar18 = ZEXT416((uint)fVar15);
          if (auVar19._4_4_ + auVar19._4_4_ < fVar15) {
            cVar6 = FUN_01db9d40();
            plVar12 = local_40;
            if (cVar6 == '\0') {
              (**(code **)(*this_ptr + 0x920))(extraout_XMM0_Qa,0xffffffff);
              if (local_40 == (int64_t *)0x0) {
                plVar12 = (int64_t *)0x0;
              }
              else if (local_38 == '\0') {
                FUN_00d50b00();
              }
            }
            else {
              uVar8 = FUN_01db9f80();
              (**(code **)(*this_ptr + 0x920))(*this_ptr,uVar8);
              if (local_40 == (int64_t *)0x0) goto LAB_01dc13de;
              if (local_38 == '\0') {
                FUN_00d50b00();
              }
            }
            if (plVar12 != (int64_t *)0x0) {
              uVar16 = FUN_01e3f820();
              local_f8 = (float)uVar16;
              fStack_f4 = (float)((uint64_t)uVar16 >> 0x20);
              FUN_01d526f0();
              local_58._0_4_ = auVar18._0_4_;
              local_58._4_4_ = auVar18._4_4_;
              uStack_50._0_4_ = auVar18._8_4_;
              uStack_50._4_4_ = auVar18._12_4_;
              auVar1._8_8_ = extraout_XMM0_Qb_02;
              auVar1._0_8_ = uVar16;
              auVar17._0_4_ = ((float)local_58 - local_58._4_4_) + local_f8;
              auVar17._4_4_ = (local_58._4_4_ - local_58._4_4_) + fStack_f4;
              auVar17._8_4_ = ((float)uStack_50 - uStack_50._4_4_) + (float)extraout_XMM0_Qb_02;
              auVar17._12_4_ =
                   (uStack_50._4_4_ - uStack_50._4_4_) +
                   (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
              auVar19 = blendps(auVar17,auVar1,2);
              FUN_00d05510(auVar19._0_8_);
              (**(code **)(*(int64_t *)*arg1 + 0x400))();
              FUN_00d50b20();
            }
          }
        }
      }
LAB_01dc13de:
      plVar12 = (int64_t *)*arg1;
      local_58 = FUN_01db9a50();
      uStack_50 = extraout_XMM0_Qb_01;
      fVar15 = (float)FUN_01dce580();
      auVar20._4_12_ = local_58._4_12_;
      auVar20._0_4_ = (float)local_58 + fVar15;
      blendps(auVar20,g_0238ff00,0xe);
      (**(code **)(*plVar12 + 0x368))();
      plVar12 = plVar10;
      plVar14 = plVar13;
    }
    FUN_01d48390();
    lVar4 = g_028b8a48;
    bVar2 = false;
    if (g_028b8a5c != -1) {
      if (g_028b8a48 != 0) {
        plVar10 = (int64_t *)*arg1;
        FUN_00d50b00();
        (**(code **)(*plVar10 + 0x400))();
        bVar2 = false;
        if (lVar4 == 0) goto joined_r0x01dc15dd;
        FUN_00d50b20();
      }
      bVar2 = false;
    }
  }
joined_r0x01dc15dd:
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar11) && (plVar14 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (plVar12 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}

