// Function: FUN_002b4e40
// Address: 002b4e40
// Size: 1994 bytes
// Class: GNScrollView
// String references:
//   "GNScrollView"
//   "MDScrollViewAddsView"
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_002b4e40(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  bool bVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  char cVar7;
  int iVar8;
  int64_t *plVar9;
  char *pcVar10;
  int64_t **pplVar11;
  int64_t *this_ptr;
  bool bVar12;
  float fVar13;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dd;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint32_t uVar18;
  uint8_t auVar17 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar19 [16];
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  int64_t local_68;
  char local_60;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  
  cVar7 = (**(code **)(*this_ptr + 0x40))();
  if (cVar7 != '\0') {
    plVar9 = (int64_t *)(**(code **)(*this_ptr + 0x10))();
    bVar12 = plVar9 != (int64_t *)0x0;
    if (bVar12) {
      FUN_00d50b00();
    }
    FUN_01d99a50();
    FUN_00d23310();
    plVar1 = local_48;
    local_38[0] = local_40[0];
    pcVar10 = local_40;
    if (local_40[0] == '\0') {
      pcVar10 = local_38;
    }
    *pcVar10 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] == '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 == (int64_t *)0x0) goto LAB_002b5491;
    (**(code **)(*plVar1 + 0x7b0))();
    plVar5 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 != (int64_t *)0x0) {
      FUN_01d97ec0();
      plVar5 = local_48;
      if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x58))();
      plVar6 = local_48;
      if (((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
         ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (int64_t *)0x0)))) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar6 + 0x4d8))();
      local_78 = (uint8_t  [8])param_2;
      uStack_70 = in_XMM1_Qb;
      (**(code **)(*plVar1 + 0x7b0))();
      (**(code **)(*local_48 + 0x4d8))();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_c8 = (float)param_2;
      fStack_c4 = (float)((uint64_t)param_2 >> 0x20);
      fStack_bc = (float)((uint64_t)in_XMM1_Qb >> 0x20);
      if (plVar5 == (int64_t *)0x0) {
        fStack_c0 = (float)in_XMM1_Qb;
        auVar17._0_4_ = SUB84(local_78,0) - local_c8;
        auVar17._4_4_ = (float)((uint64_t)local_78 >> 0x20) - fStack_c4;
        auVar17._8_4_ = (float)uStack_70 - fStack_c0;
        auVar17._12_4_ = (float)((uint64_t)uStack_70 >> 0x20) - fStack_bc;
        auVar19 = blendps(_local_78,auVar17,0xd);
      }
      else {
        (**(code **)(*plVar9 + 0x640))();
        fVar13 = (float)(**(code **)(*local_48 + 0x580))();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        auVar19._4_12_ = local_78._4_12_;
        auVar19._0_4_ = SUB84(local_78,0) - (local_c8 - fVar13);
      }
      (**(code **)(*plVar1 + 0x7b0))();
      (**(code **)(*local_48 + 0x4d0))();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_01d9ad00();
        plVar1 = local_48;
        auVar14._4_4_ = extraout_XMM0_Db + fStack_c4;
        auVar14._12_4_ = extraout_XMM0_Dd + fStack_bc;
        auVar14._0_4_ = auVar14._4_4_;
        auVar14._8_4_ = auVar14._12_4_;
        register0x00001204 = auVar14._4_12_;
        local_78._0_4_ = auVar14._4_4_ + g_02390d00;
        if (local_40[0] == '\0') {
          if (local_48 == (int64_t *)0x0) goto LAB_002b535a;
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_002b530a:
          auVar15._0_8_ = (**(code **)(*plVar1 + 0x4d8))();
          auVar15._8_8_ = extraout_XMM0_Qb;
          fVar13 = (float)((uint64_t)auVar15._0_8_ >> 0x20);
          if ((fVar13 != (float)local_78._0_4_) || (NAN(fVar13) || NAN((float)local_78._0_4_))) {
            auVar17 = insertps(auVar15,_local_78,0x10);
            (**(code **)(*plVar1 + 0x4d0))(auVar17._0_8_);
          }
          local_78._4_4_ = auVar14._4_4_;
          local_78._0_4_ = (float)local_78._0_4_ + auVar19._4_4_;
          uStack_70._0_4_ = auVar14._12_4_;
          uStack_70._4_4_ = auVar14._12_4_;
          bVar4 = false;
        }
        else {
          if (local_48 != (int64_t *)0x0) goto LAB_002b530a;
LAB_002b535a:
          bVar4 = true;
        }
        auVar16._0_8_ = (**(code **)(*plVar5 + 0x4d8))();
        auVar16._8_8_ = extraout_XMM0_Qb_00;
        fVar13 = (float)((uint64_t)auVar16._0_8_ >> 0x20);
        uVar18 = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
        if ((fVar13 != (float)local_78._0_4_) || (NAN(fVar13) || NAN((float)local_78._0_4_))) {
          auVar2._4_4_ = fVar13;
          auVar2._0_4_ = fVar13 + ((float)local_78._0_4_ - fVar13);
          auVar2._8_4_ = uVar18;
          auVar2._12_4_ = uVar18;
          auVar17 = insertps(auVar16,auVar2,0x10);
          auVar3._4_4_ = auVar19._4_4_;
          auVar3._0_4_ = auVar19._4_4_ - ((float)local_78._0_4_ - fVar13);
          auVar3._8_4_ = auVar19._12_4_;
          auVar3._12_4_ = auVar19._12_4_;
          auVar19 = insertps(auVar19,auVar3,0x10);
          (**(code **)(*plVar5 + 0x4d0))(auVar17._0_8_,auVar19._0_8_);
        }
        if (!bVar4) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*plVar9 + 0x4a0))();
      FUN_00d23340();
      pcVar10 = local_40;
      if (local_40[0] == '\0') {
        pcVar10 = local_38;
      }
      local_38[0] = local_40[0];
      *pcVar10 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != plVar6) {
        (**(code **)(*plVar6 + 0x478))();
        (**(code **)(*plVar9 + 0x450))();
      }
      FUN_00d50b20();
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    goto LAB_002b5491;
  }
  pplVar11 = &local_48;
  (**(code **)(*this_ptr + 0x20))();
  plVar1 = local_48;
  if ((g_026fc540 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    g_02710b58 = FUN_0006d940();
    g_02710b40 = "MDScrollViewAddsView";
    g_02710b48 = 0x150;
    g_02710b50 = FUN_002b8980;
    g_02710b60 = 0;
    ram_0000000002710b68 = 0;
    g_02710b70 = 0;
    ram_0000000002710b78 = 0;
    g_02710b80 = 0;
    ram_0000000002710b88 = 0;
    g_02710b90 = 0;
    ram_0000000002710b98 = 0;
    g_02710ba0 = 0;
    ram_0000000002710ba8 = 0;
    g_02710bb0 = 0;
    ram_0000000002710bb8 = 0;
    g_02710bc0 = 0;
    ram_0000000002710bc8 = 0;
    g_02710bd0 = 0;
    ram_0000000002710bd8 = 0;
    g_02710be0 = 0;
    ram_0000000002710be8 = 0;
    g_02710bf0 = 0;
    ram_0000000002710bf8 = 0;
    g_02710c00 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_002b4ec6:
    pplVar11 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 == '\0') goto LAB_002b4ec6;
  }
  plVar1 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar11 + 1) = 0;
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  plVar9 = (int64_t *)(**(code **)(*this_ptr + 0x10))();
  if ((g_026f0e00 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    g_026f8e78 = FUN_0006d940();
    g_026f8e60 = "GNScrollView";
    g_026f8e68 = 0x1c0;
    g_026f8e70 = FUN_00074e80;
    g_026f8e80 = 0;
    ram_00000000026f8e88 = 0;
    g_026f8e90 = 0;
    ram_00000000026f8e98 = 0;
    g_026f8ea0 = 0;
    ram_00000000026f8ea8 = 0;
    g_026f8eb0 = 0;
    ram_00000000026f8eb8 = 0;
    g_026f8ec0 = 0;
    ram_00000000026f8ec8 = 0;
    g_026f8ed0 = 0;
    ram_00000000026f8ed8 = 0;
    g_026f8ee0 = 0;
    ram_00000000026f8ee8 = 0;
    g_026f8ef0 = 0;
    ram_00000000026f8ef8 = 0;
    g_026f8f00 = 0;
    ram_00000000026f8f08 = 0;
    g_026f8f10 = 0;
    ram_00000000026f8f18 = 0;
    g_026f8f20 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (int64_t *)0x0) {
LAB_002b515f:
    bVar12 = false;
    plVar9 = (int64_t *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 == '\0') goto LAB_002b515f;
    bVar12 = true;
    FUN_00d50b00();
  }
  FUN_01d9a650();
  FUN_01e40eb0();
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x478))();
  }
  plVar1[0x27] = 0;
  if (plVar1[0x28] != 0) {
    FUN_01d9ad20();
  }
  FUN_00d50130();
  (**(code **)(*this_ptr + 0x28))();
  FUN_01d9a660();
  FUN_00d50b20();
LAB_002b5491:
  if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

