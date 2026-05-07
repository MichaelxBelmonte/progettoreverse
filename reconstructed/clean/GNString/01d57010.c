// Function: FUN_01d57010
// Address: 01d57010
// Size: 1713 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01d57010(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  bool bVar5;
  void*arg1;
  int64_t *this_ptr;
  float fVar6;
  uint64_t uVar7;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  float fVar11;
  uint64_t in_XMM1_Qb;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  int64_t *local_138;
  char local_130;
  uint8_t local_58 [16];
  uint64_t extraout_XMM0_Qb_00;
  
  (**(code **)(*this_ptr + 0x640))();
  if ((local_130 == '\0') && (local_138 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01d579e0();
  local_58._8_8_ = in_XMM1_Qb;
  local_58._0_8_ = param_2;
  FUN_01d48370();
  lVar2 = this_ptr[0x3c];
  if (lVar2 != 0) {
    FUN_00d50b00();
    FUN_01d488d0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
  }
  lVar2 = this_ptr[0x3b];
  if ((int)lVar2 != 0) {
    uVar7 = FUN_01e3f820();
    (**(code **)(*local_138 + 0x3c0))(uVar7,(int)lVar2);
  }
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  if (this_ptr[0x39] != 0) {
    auVar8._0_8_ = FUN_01d526f0();
    iVar1 = *(int *)((int64_t)this_ptr + 0x1d4);
    if (iVar1 == 3) {
      lVar2 = this_ptr[0x39];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01d530c0();
      FUN_01e3f820();
      FUN_01cdf7f0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      FUN_01d48390();
      goto LAB_01d575dc;
    }
    fVar6 = (float)auVar8._0_8_;
    auVar14._4_4_ = (float)((uint64_t)auVar8._0_8_ >> 0x20);
    auVar8._8_4_ = (uint32_t)extraout_XMM0_Qb;
    auVar14._12_4_ = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
    if (iVar1 == 1) {
      auVar16._8_4_ = auVar8._8_4_;
      auVar16._0_8_ = auVar8._0_8_;
      auVar16._12_4_ = auVar14._12_4_;
      auVar12 = local_58;
      if (fVar6 <= (float)param_2) {
        auVar8._12_4_ = auVar14._12_4_;
        auVar12 = auVar8;
      }
      bVar5 = (float)((uint64_t)param_2 >> 0x20) < auVar14._4_4_;
      if (!bVar5) {
        local_58 = blendps(auVar16,auVar12,0xd);
      }
      bVar5 = bVar5 || (float)param_2 < fVar6;
      blendps(auVar12,local_58,2);
    }
    else {
      if (iVar1 == 0) {
        auVar19._8_4_ = auVar8._8_4_;
        auVar19._0_8_ = auVar8._0_8_;
        auVar19._12_4_ = auVar14._12_4_;
        auVar14._0_4_ = auVar14._4_4_;
        auVar14._8_4_ = auVar14._12_4_;
        auVar15._8_4_ = auVar8._8_4_;
        auVar15._0_8_ = auVar8._0_8_;
        auVar15._12_4_ = auVar14._12_4_;
        auVar16 = insertps(auVar15,local_58,0x4c);
        auVar12 = insertps(local_58,auVar19,0x1c);
        auVar16 = divps(auVar12,auVar16);
        fVar11 = auVar16._0_4_;
        auVar12._4_12_ = auVar14._4_12_;
        if (fVar11 <= auVar16._4_4_) {
          if (fVar11 < auVar16._4_4_) {
            auVar10._0_4_ = auVar14._4_4_ * fVar11;
            auVar10._4_12_ = auVar12._4_12_;
            auVar8 = roundss(auVar10,auVar10,9);
            auVar13._4_12_ = auVar19._4_12_;
            auVar13._0_4_ = (fVar6 - auVar8._0_4_) * g_0239011c;
            auVar14 = roundss(auVar13,auVar13,9);
            blendps(ZEXT816(0),auVar14,1);
            blendps(auVar19,auVar8,1);
          }
        }
        else {
          auVar17._8_4_ = auVar8._8_4_;
          auVar17._0_8_ = auVar8._0_8_;
          auVar17._12_4_ = auVar14._12_4_;
          auVar18._4_12_ = auVar17._4_12_;
          auVar18._0_4_ = fVar6 / fVar11;
          auVar16 = roundss(ZEXT816(0),auVar18,9);
          auVar12._0_4_ = (auVar14._4_4_ - auVar16._0_4_) * g_0239011c;
          auVar8 = roundss(auVar12,auVar12,9);
          insertps(auVar8,auVar8,0x1d);
          insertps(auVar19,auVar16,0x10);
        }
        lVar2 = this_ptr[0x39];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_01d48ff0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        FUN_01d48390();
        goto LAB_01d575dc;
      }
      bVar5 = false;
    }
    auVar9._0_8_ = FUN_00d05510();
    auVar9._8_8_ = extraout_XMM0_Qb_00;
    roundps(auVar9,auVar9,9);
    if (bVar5) {
      cVar4 = FUN_01d53b40();
      if ((cVar4 == '\0') || (lVar2 = this_ptr[0x3d], lVar2 == 0)) {
        lVar2 = this_ptr[0x39];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_01d49070();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d50b00();
        FUN_01d488d0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = this_ptr[0x39];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_01d49240();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01e3f820();
      FUN_00d05360();
      cVar4 = FUN_01d53b40();
      if ((cVar4 == '\0') || (lVar2 = this_ptr[0x3d], lVar2 == 0)) {
        plVar3 = (int64_t *)*arg1;
        lVar2 = this_ptr[0x39];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar3 + 0x408))();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d50b00();
        FUN_01d488d0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = this_ptr[0x39];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        FUN_01d491c0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  FUN_01d48390();
LAB_01d575dc:
  if (local_138 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

