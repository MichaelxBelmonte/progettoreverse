// Function: FUN_004b4640
// Address: 004b4640
// Size: 1228 bytes
// Class: MDToolbarLayouter
// === MDToolbarLayouter properties ===
//   MDLayoutAlign   _align
//                   _centerLayout
//                   _rightLayout
//                   _showsEditorBar
//                   _toolbarEditMixCtrl
//                   _toolbarEditModeCtrl
//                   _toolbarQuantizeMacrosCtrl
//                   _toolbarUndoCtrl
//                   _toolbarToolCtrl
//                   _toolbarEditorViewCtrl
//                   _toolbarVersionCtrl
//                   _toolbarTrackMemoryUsageCtrl


void FUN_004b4640(uint64_t param_1,uint64_t param_2)

{
  float fVar1;
  uint8_t auVar2 [16];
  float fVar3;
  char cVar4;
  byte bVar5;
  int64_t this_ptr;
  uint uVar6;
  uint32_t uVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  float extraout_XMM0_Db;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar14 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  float fVar15;
  float fVar16;
  uint64_t uVar17;
  uint64_t in_XMM1_Qb;
  uint64_t uVar20;
  uint64_t uVar21;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  float local_118;
  uint32_t uStack_114;
  uint32_t uStack_110;
  uint32_t uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  int64_t *local_a8;
  char local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  int64_t *local_40;
  char local_38;
  
  FUN_01e53c20();
  FUN_01e3f820();
  uVar13 = param_2;
  uVar20 = in_XMM1_Qb;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_004b4d40();
  uVar11 = (**(code **)(*local_40 + 0x938))();
  FUN_004b4d40();
  (**(code **)(*local_a8 + 0x938))();
  uVar17 = uVar13;
  uVar21 = uVar20;
  if (local_a0 != '\0') {
    FUN_00d50b20();
  }
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  FUN_004b4d40();
  (**(code **)(*local_40 + 0x938))();
  FUN_004b4d40();
  uVar12 = (**(code **)(*local_a8 + 0x938))();
  if (local_a0 != '\0') {
    FUN_00d50b20();
  }
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  FUN_004b4d40();
  (**(code **)(*local_40 + 0x938))();
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  FUN_004b4d40();
  uVar7 = (**(code **)(*local_40 + 0x938))();
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  local_e8 = (float)uVar11;
  fStack_e4 = (float)((uint64_t)uVar11 >> 0x20);
  fStack_e0 = (float)extraout_XMM0_Qb;
  fStack_dc = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
  local_d8 = (float)uVar13;
  fStack_d4 = (float)((uint64_t)uVar13 >> 0x20);
  fStack_d0 = (float)uVar20;
  fStack_cc = (float)((uint64_t)uVar20 >> 0x20);
  local_108 = (float)param_2;
  fStack_104 = (float)((uint64_t)param_2 >> 0x20);
  fStack_100 = (float)in_XMM1_Qb;
  fStack_fc = (float)((uint64_t)in_XMM1_Qb >> 0x20);
  auVar18._0_4_ = local_108 - (local_e8 + local_d8);
  auVar18._4_4_ = fStack_104 - (fStack_e4 + fStack_d4);
  auVar18._8_4_ = fStack_100 - (fStack_e0 + fStack_d0);
  auVar18._12_4_ = fStack_fc - (fStack_dc + fStack_cc);
  local_98 = (float)uVar17;
  fStack_94 = (float)((uint64_t)uVar17 >> 0x20);
  fStack_90 = (float)uVar21;
  fStack_8c = (float)((uint64_t)uVar21 >> 0x20);
  local_88._0_4_ = (uint32_t)uVar12;
  local_88._4_4_ = (uint32_t)((uint64_t)uVar12 >> 0x20);
  uStack_80._0_4_ = (float)extraout_XMM0_Qb_00;
  uStack_80._4_4_ = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  auVar14._0_4_ = local_108 - (local_98 + (float)local_88._0_4_);
  auVar14._4_4_ = fStack_104 - (fStack_94 + (float)local_88._4_4_);
  auVar14._8_4_ = fStack_100 - (fStack_90 + (float)uStack_80);
  auVar14._12_4_ = fStack_fc - (fStack_8c + uStack_80._4_4_);
  auVar18 = blendps(auVar18,auVar14,0xd);
  auVar19._4_4_ = extraout_XMM0_Db;
  auVar19._0_4_ = extraout_XMM0_Db;
  auVar19._8_4_ = extraout_XMM0_Dd;
  auVar19._12_4_ = extraout_XMM0_Dd;
  fVar8 = auVar14._0_4_ + extraout_XMM0_Db + g_02390d00;
  insertps(auVar19,uVar7,0x1c);
  uVar6 = 0;
  do {
    FUN_00d50b00();
    FUN_0033cd80();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    FUN_0033cd80();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b00();
    local_e8 = auVar18._0_4_;
    FUN_0033cd80();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    uVar13 = (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x4d8))();
    fVar15 = local_e8;
    local_88 = (uint8_t  [8])(**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x4d8))();
    uStack_80 = extraout_XMM0_Qb_02;
    fVar16 = fVar15;
    uVar9 = (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x4d8))();
    if (local_e8 <= 0.0) {
LAB_004b4aab:
      if (fVar15 <= 0.0) {
        return;
      }
LAB_004b4ad8:
      if (fVar16 <= 0.0) {
        return;
      }
      bVar5 = FUN_00d054a0();
    }
    else if ((fVar15 <= 0.0) || (cVar4 = FUN_00d054a0(), cVar4 == '\0')) {
joined_r0x004b4acd:
      if (fVar16 <= 0.0) {
        if (fVar15 <= 0.0) {
          return;
        }
        goto LAB_004b4ad8;
      }
      cVar4 = FUN_00d054a0();
      bVar5 = 1;
      if (cVar4 == '\0') goto LAB_004b4aab;
    }
    else {
      fVar1 = SUB84(local_88,0);
      fVar10 = ((float)(~-(uint)(0.0 < fVar16) & (uint)fVar8 | uVar9 & -(uint)(0.0 < fVar16)) -
               (fVar1 + fVar15 + g_02390d00)) + g_02394210;
      fVar3 = 0.0;
      if (0.0 <= fVar10) {
        fVar3 = fVar10;
      }
      local_118 = (float)uVar13;
      uStack_114 = (uint32_t)((uint64_t)uVar13 >> 0x20);
      uStack_110 = (uint32_t)extraout_XMM0_Qb_01;
      uStack_10c = (uint32_t)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
      fVar10 = (local_118 + local_e8 + g_02390d00) - fVar1;
      bVar5 = 1;
      if (fVar10 < fVar3) {
        auVar2._4_4_ = uStack_114;
        auVar2._0_4_ = fVar10 + fVar1;
        auVar2._8_4_ = uStack_110;
        auVar2._12_4_ = uStack_10c;
        blendps(_local_88,auVar2,1);
        (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x4d0))();
        goto joined_r0x004b4acd;
      }
    }
    if (bVar5 == 0) {
      return;
    }
    uVar6 = uVar6 + bVar5;
    if (0xf < uVar6) {
      return;
    }
  } while( true );
}

