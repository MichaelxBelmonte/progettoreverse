// ===================================================================
// GNMultiRulerView — Complete reconstructed pseudocode
// 20 functions
// ===================================================================


// ============================================================
// 01d9af40
// ============================================================
// Function: FUN_01d9af40
// Address: 01d9af40
// Size: 6351 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"

void FUN_01d9af40(void)

{
  int64_t *plVar1;
  float fVar2;
  uint32_t uVar3;
  uint8_t auVar4 [12];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  bool bVar9;
  uint32_t uVar10;
  uint32_t uVar11;
  uint8_t auVar12 [8];
  char cVar13;
  int iVar14;
  int64_t **pplVar15;
  int64_t lVar16;
  int64_t *this_ptr;
  int64_t *plVar17;
  uint8_t auVar18 [8];
  bool bVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float extraout_XMM0_Db;
  uint64_t uVar23;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  float extraout_XMM0_Dd;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  float extraout_XMM0_Db_00;
  uint64_t extraout_XMM0_Qb_06;
  uint8_t auVar42 [16];
  float fVar64;
  uint8_t in_XMM1 [16];
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  uint8_t auVar47 [16];
  uint8_t auVar48 [16];
  float fVar65;
  uint8_t auVar49 [16];
  uint8_t auVar50 [16];
  uint8_t auVar51 [16];
  uint8_t auVar52 [16];
  uint8_t auVar53 [16];
  uint8_t auVar54 [16];
  uint8_t auVar55 [16];
  uint8_t auVar56 [16];
  uint8_t auVar57 [16];
  uint8_t auVar58 [16];
  uint8_t auVar59 [16];
  uint8_t auVar60 [16];
  uint8_t auVar61 [16];
  uint8_t auVar62 [16];
  uint8_t auVar63 [16];
  float fVar73;
  uint8_t auVar66 [16];
  uint8_t auVar67 [16];
  uint8_t auVar68 [16];
  uint8_t auVar69 [16];
  uint8_t auVar70 [16];
  uint8_t auVar71 [16];
  uint8_t auVar72 [16];
  uint8_t auVar74 [16];
  uint8_t auVar75 [16];
  uint8_t auVar76 [16];
  uint8_t auVar77 [16];
  uint8_t auVar78 [16];
  float fVar79;
  int64_t *local_198;
  char local_190;
  float local_188;
  uint8_t local_168 [16];
  uint8_t local_158 [12];
  uint32_t uStack_14c;
  uint8_t local_148 [8];
  uint64_t uStack_140;
  uint8_t local_138 [8];
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  int64_t *local_110;
  uint8_t local_108 [4];
  uint8_t auStack_104 [8];
  float fStack_fc;
  uint8_t local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  uint8_t local_e8 [12];
  uint32_t uStack_dc;
  uint8_t local_c8 [8];
  float fStack_c0;
  float fStack_bc;
  uint8_t local_a8 [8];
  uint64_t uStack_a0;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  int local_50;
  uint8_t local_48 [8];
  uint64_t uStack_40;
  uint64_t extraout_XMM0_Qb_00;
  
  if ((int)this_ptr[0x35] != 0) {
    return;
  }
  if (this_ptr[0x2a] == 0) {
    local_68 = '\0';
    plVar17 = (int64_t *)0x0;
  }
  else {
    FUN_01cf3f40();
    plVar17 = local_70;
  }
  local_70 = plVar17;
  if ((g_027f1760 == '\0') && (iVar14 = ___cxa_guard_acquire(), iVar14 != 0)) {
    g_027f16b0 = FUN_0006d940();
    g_027f1698 = "GNMultiRulerView";
    g_027f16a0 = 0x140;
    g_027f16a8 = FUN_01da14a0;
    g_027f16b8 = 0;
    ram_00000000027f16c0 = 0;
    g_027f16c8 = 0;
    ram_00000000027f16d0 = 0;
    g_027f16d8 = 0;
    ram_00000000027f16e0 = 0;
    g_027f16e8 = 0;
    ram_00000000027f16f0 = 0;
    g_027f16f8 = 0;
    ram_00000000027f1700 = 0;
    g_027f1708 = 0;
    ram_00000000027f1710 = 0;
    g_027f1718 = 0;
    ram_00000000027f1720 = 0;
    g_027f1728 = 0;
    ram_00000000027f1730 = 0;
    g_027f1738 = 0;
    ram_00000000027f1740 = 0;
    g_027f1748 = 0;
    ram_00000000027f1750 = 0;
    g_027f1758 = 0;
    ___cxa_guard_release();
  }
  if (plVar17 == (int64_t *)0x0) {
LAB_01d9afcc:
    pplVar15 = &g_02802688;
    auVar18 = (uint8_t  [8])g_02802688;
    if (g_02802690 != '\0') goto LAB_01d9afdc;
LAB_01d9afef:
    if (auVar18 != (uint8_t  [8])0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar17 + 0x360))();
    cVar13 = FUN_00e85ea0();
    if (cVar13 == '\0') goto LAB_01d9afcc;
    pplVar15 = &local_70;
    auVar18 = (uint8_t  [8])local_70;
    if (local_68 == '\0') goto LAB_01d9afef;
LAB_01d9afdc:
    *(void*)(pplVar15 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar17 = (int64_t *)this_ptr[0x2e];
  if (plVar17 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_70 = plVar17;
  if ((g_027f1760 == '\0') && (iVar14 = ___cxa_guard_acquire(), iVar14 != 0)) {
    local_48 = auVar18;
    g_027f16b0 = FUN_0006d940();
    g_027f1698 = "GNMultiRulerView";
    g_027f16a0 = 0x140;
    g_027f16a8 = FUN_01da14a0;
    g_027f16b8 = 0;
    ram_00000000027f16c0 = 0;
    g_027f16c8 = 0;
    ram_00000000027f16d0 = 0;
    g_027f16d8 = 0;
    ram_00000000027f16e0 = 0;
    g_027f16e8 = 0;
    ram_00000000027f16f0 = 0;
    g_027f16f8 = 0;
    ram_00000000027f1700 = 0;
    g_027f1708 = 0;
    ram_00000000027f1710 = 0;
    g_027f1718 = 0;
    ram_00000000027f1720 = 0;
    g_027f1728 = 0;
    ram_00000000027f1730 = 0;
    g_027f1738 = 0;
    ram_00000000027f1740 = 0;
    g_027f1748 = 0;
    ram_00000000027f1750 = 0;
    g_027f1758 = 0;
    ___cxa_guard_release();
    auVar18 = local_48;
  }
  if (plVar17 == (int64_t *)0x0) {
LAB_01d9b05e:
    pplVar15 = &g_02802688;
    local_110 = g_02802688;
    if (g_02802690 != '\0') goto LAB_01d9b075;
LAB_01d9b08f:
    if (local_110 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar17 + 0x360))();
    cVar13 = FUN_00e85ea0();
    if (cVar13 == '\0') goto LAB_01d9b05e;
    pplVar15 = &local_70;
    local_110 = local_70;
    if (local_68 == '\0') goto LAB_01d9b08f;
LAB_01d9b075:
    *(void*)(pplVar15 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (auVar18 != (uint8_t  [8])0x0) {
    local_88 = (uint8_t  [8])FUN_01e3f820();
    uStack_80 = extraout_XMM0_Qb;
    lVar16 = *(int64_t *)((int64_t)auVar18 + 0x138);
    _local_48 = in_XMM1;
    if (lVar16 != 0) {
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = lVar16;
      if (local_110 == (int64_t *)0x0) {
        iVar14 = 0;
        while( true ) {
          auVar43 = in_XMM1;
          if (iVar14 != 0) {
            if (iVar14 < 1) {
              iVar14 = -iVar14;
            }
            else {
              local_58 = CONCAT44(local_58._4_4_,(int)local_58 - iVar14);
              FUN_00d23690(iVar14,iVar14);
              local_50 = local_50 + local_58._4_4_;
              iVar14 = 0;
            }
            local_58 = CONCAT44(iVar14,(int)local_58);
            auVar43 = in_XMM1;
          }
          lVar16 = (int64_t)(int)local_58;
          iVar14 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar14);
          if (*(int *)(local_60 + 0xc) <= iVar14) break;
          local_70 = *(int64_t **)(*(int64_t *)(local_60 + 0x10) + 8 + lVar16 * 8);
          (**(code **)(*(int64_t *)local_70[2] + 0x4d8))();
          in_XMM1 = blendps(_local_48,auVar43,2);
          _local_48 = in_XMM1;
          (**(code **)(*(int64_t *)local_70[2] + 0x4d0))();
          if ((int64_t *)local_70[3] != (int64_t *)0x0) {
            auVar25._8_8_ = 0;
            auVar25._0_8_ = g_023dccec;
            auVar56._8_8_ = 0;
            auVar56._0_8_ = g_023dccf4;
            auVar25 = blendps(auVar25,_local_88,2);
            in_XMM1 = blendps(auVar56,auVar43,2);
            (**(code **)(*(int64_t *)local_70[3] + 0x4d0))(auVar25._0_8_);
          }
          auVar74._0_4_ = auVar43._0_4_ + local_88._0_4_;
          auVar74._4_4_ = auVar43._4_4_ + local_88._4_4_;
          auVar74._8_4_ = auVar43._8_4_ + local_88._8_4_;
          auVar74._12_4_ = auVar43._12_4_ + local_88._12_4_;
          _local_88 = blendps(_local_88,auVar74,2);
          iVar14 = local_58._4_4_;
        }
      }
      else {
        local_58._4_4_ = 0;
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar14 = -local_58._4_4_;
            }
            else {
              iVar14 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar14);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar14 = 0;
            }
            local_58 = CONCAT44(iVar14,(int)local_58);
          }
          lVar16 = (int64_t)(int)local_58;
          iVar14 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar14);
          if (*(int *)(local_60 + 0xc) <= iVar14) break;
          local_70 = *(int64_t **)(*(int64_t *)(local_60 + 0x10) + 8 + lVar16 * 8);
          (**(code **)(*(int64_t *)local_70[2] + 0x4d8))();
          auVar43 = blendps(_local_48,in_XMM1,2);
          _local_48 = auVar43;
          (**(code **)(*(int64_t *)local_70[2] + 0x4d0))();
          if (local_70[3] != 0) {
            auVar24._0_8_ = FUN_01e3f820();
            auVar24._8_8_ = extraout_XMM0_Qb_00;
            auVar25 = blendps(auVar24,_local_88,2);
            auVar43 = blendps(auVar43,in_XMM1,2);
            (**(code **)(*(int64_t *)local_70[3] + 0x4d0))(auVar25._0_8_,auVar43._0_8_);
          }
          local_c8._0_4_ = in_XMM1._0_4_;
          local_c8._4_4_ = in_XMM1._4_4_;
          fStack_c0 = in_XMM1._8_4_;
          fStack_bc = in_XMM1._12_4_;
          in_XMM1._0_4_ = (float)local_c8._0_4_ + local_88._0_4_;
          in_XMM1._4_4_ = (float)local_c8._4_4_ + local_88._4_4_;
          in_XMM1._8_4_ = fStack_c0 + local_88._8_4_;
          in_XMM1._12_4_ = fStack_bc + local_88._12_4_;
          _local_88 = blendps(_local_88,in_XMM1,2);
        }
      }
      FUN_01da2210();
    }
    auVar25 = blendps(_local_48,_local_88,2);
    auVar43 = blendps(ZEXT816(0),_local_88,0xd);
    (**(code **)(*(int64_t *)auVar18 + 0x4d0))(auVar43._0_8_);
    (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x4d8))();
    uVar20 = -(uint)(auVar25._4_4_ != (float)local_88._4_4_);
    in_XMM1._4_4_ = (float)uVar20;
    in_XMM1._0_4_ = (float)-(uint)(auVar25._0_4_ != (float)local_88._0_4_);
    in_XMM1._8_4_ = (float)-(uint)(auVar25._8_4_ != (float)uStack_80);
    in_XMM1._12_4_ = (float)-(uint)(auVar25._12_4_ != uStack_80._4_4_);
    if ((uVar20 & 1) != 0) {
      (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x4d8))();
      in_XMM1 = blendps(in_XMM1,_local_88,2);
      (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x4d0))();
    }
  }
  local_48 = (uint8_t  [8])FUN_01e3f820();
  uStack_40 = extraout_XMM0_Qb_01;
  auVar43 = in_XMM1;
  (**(code **)(*this_ptr + 0x640))();
  plVar17 = local_70;
  if (local_70 == (int64_t *)0x0) {
    bVar9 = true;
    plVar17 = (int64_t *)0x0;
  }
  else {
    if (((local_68 == '\0') && (FUN_00d50b00(), local_68 != '\0')) && (local_70 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    bVar9 = false;
  }
  local_a8 = (uint8_t  [8])(**(code **)(*plVar17 + 0x590))();
  uStack_a0 = extraout_XMM0_Qb_02;
  fVar21 = (float)(**(code **)(*plVar17 + 0x598))();
  _local_88 = in_XMM1;
  if ((int)this_ptr[0x33] != 0) {
    local_48 = (uint8_t  [8])(**(code **)(*plVar17 + 0x3d0))();
    uStack_40 = extraout_XMM0_Qb_03;
    auVar43 = in_XMM1;
    _local_88 = in_XMM1;
  }
  if (this_ptr[0x27] != 0) {
    iVar14 = FUN_01cf4050();
    if (iVar14 != 0) {
      fVar22 = local_48._4_4_;
      auVar43._4_4_ = fVar22;
      auVar43._0_4_ = fVar22;
      auVar43._8_4_ = local_48._12_4_;
      auVar43._12_4_ = local_48._12_4_;
      auVar26._4_12_ = auVar43._4_12_;
      auVar26._0_4_ = fVar22 + g_02390124;
      _local_48 = insertps(_local_48,auVar26,0x10);
      fVar22 = local_88._4_4_;
      auVar27._4_4_ = fVar22;
      auVar27._0_4_ = fVar22;
      auVar27._8_4_ = local_88._12_4_;
      auVar27._12_4_ = local_88._12_4_;
      auVar28._4_12_ = auVar27._4_12_;
      auVar28._0_4_ = fVar22 + g_02390d00;
      auVar43 = insertps(_local_88,auVar28,0x10);
      _local_88 = auVar43;
    }
    iVar14 = FUN_01cf4110();
    if (iVar14 != 0) {
      fVar22 = local_88._4_4_;
      auVar29._4_4_ = fVar22;
      auVar29._0_4_ = fVar22;
      auVar29._8_4_ = local_88._12_4_;
      auVar29._12_4_ = local_88._12_4_;
      auVar30._4_12_ = auVar29._4_12_;
      auVar30._0_4_ = fVar22 + g_02390d00;
      auVar43 = insertps(_local_88,auVar30,0x10);
      _local_88 = auVar43;
    }
    iVar14 = FUN_01cf3f80();
    if (iVar14 != 0) {
      local_48._0_4_ = (float)local_48._0_4_ + g_02390124;
      local_88._0_4_ = local_88._0_4_ + g_02390d00;
    }
    iVar14 = FUN_01cf4040();
    if (iVar14 != 0) {
      local_88._0_4_ = local_88._0_4_ + g_02390d00;
    }
  }
  FUN_01e3f820();
  fVar22 = (float)FUN_01e3f820();
  local_148 = (uint8_t  [8])(**(code **)(*plVar17 + 0x580))();
  uStack_140 = extraout_XMM0_Qb_04;
  uVar23 = (**(code **)(*plVar17 + 0x578))();
  local_188 = (float)uVar23;
  uVar3 = local_48._12_4_;
  fVar64 = local_48._4_4_;
  fVar79 = local_88._4_4_;
  fVar65 = SUB84(local_148,0);
  auVar49 = _local_48;
  if (this_ptr[0x28] == 0) {
LAB_01d9b5b3:
    _local_e8 = _local_88;
    _local_108 = _local_88;
    _local_138 = _local_48;
    if (this_ptr[0x29] == 0) goto LAB_01d9b5ee;
LAB_01d9b5c3:
    FUN_01e40eb0();
    bVar19 = local_70 != this_ptr;
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar19) goto LAB_01d9b5ee;
    local_e8._0_4_ = (float)local_e8._0_4_ - fVar65;
    auVar49._4_12_ = local_48._4_12_;
    auVar49._0_4_ = local_48._0_4_ + (local_88._0_4_ - fVar65);
    _local_f8 = blendps(_local_88,_local_148,1);
    iVar14 = (int)this_ptr[0x33];
    _local_158 = auVar49;
  }
  else {
    FUN_01e40eb0();
    plVar1 = local_70;
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != this_ptr) goto LAB_01d9b5b3;
    auVar31._4_4_ = fVar79;
    auVar31._0_4_ = fVar79;
    auVar31._8_4_ = local_88._12_4_;
    auVar31._12_4_ = local_88._12_4_;
    auVar5._8_8_ = extraout_XMM0_Qb_05;
    auVar5._0_8_ = uVar23;
    auVar32._4_12_ = auVar31._4_12_;
    auVar32._0_4_ = fVar79 - local_188;
    _local_e8 = insertps(_local_88,auVar32,0x10);
    auVar33._0_4_ = auVar32._0_4_ + fVar64;
    auVar33._4_12_ = auVar32._4_12_;
    auVar49 = insertps(_local_48,auVar33,0x10);
    _local_108 = insertps(_local_88,auVar5,0x10);
    _local_138 = auVar49;
    if (this_ptr[0x29] != 0) goto LAB_01d9b5c3;
LAB_01d9b5ee:
    iVar14 = (int)this_ptr[0x33];
    _local_f8 = _local_88;
    _local_158 = _local_48;
  }
  if (iVar14 != 0) {
    fVar2 = SUB84(local_a8,0);
    if ((fVar2 != 0.0) || (NAN(fVar2))) {
      local_108 = (uint8_t  [4])((float)local_108 + fVar2 + fVar2);
      fVar73 = local_138._4_4_;
      auVar44._4_4_ = fVar73;
      auVar44._0_4_ = fVar73;
      auVar44._8_4_ = local_138._12_4_;
      auVar44._12_4_ = local_138._12_4_;
      auVar66._4_12_ = local_138._4_12_;
      auVar66._0_4_ = local_138._0_4_ - fVar2;
      auVar45._4_12_ = auVar44._4_12_;
      auVar45._0_4_ = fVar73 + fVar2;
      _local_138 = insertps(auVar66,auVar45,0x10);
      auVar46._4_4_ = local_158._4_4_;
      auVar46._0_4_ = local_158._4_4_;
      auVar46._8_4_ = uStack_14c;
      auVar46._12_4_ = uStack_14c;
      auVar47._4_12_ = auVar46._4_12_;
      auVar47._0_4_ = (float)local_158._4_4_ - fVar2;
      auVar75._0_4_ = fVar2 + (float)local_158._0_4_;
      auVar75._4_12_ = local_a8._4_12_;
      _local_158 = insertps(auVar75,auVar47,0x10);
      fVar73 = local_f8._4_4_;
      auVar48._4_4_ = fVar73;
      auVar48._0_4_ = fVar73;
      auVar48._8_4_ = local_f8._12_4_;
      auVar48._12_4_ = local_f8._12_4_;
      auVar49._4_12_ = auVar48._4_12_;
      auVar49._0_4_ = fVar73 + fVar2 + fVar2;
      _local_f8 = insertps(_local_f8,auVar49,0x10);
    }
  }
  if ((this_ptr[0x28] != 0) && (*(char *)((int64_t)this_ptr + 0x19c) != '\0')) {
    FUN_01e40eb0();
    plVar1 = local_70;
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == this_ptr) {
      auVar49._4_12_ = local_148._4_12_;
      auVar49._0_4_ = fVar65 - fVar21;
      local_108 = (uint8_t  [4])((float)local_108 - auVar49._0_4_);
    }
  }
  if (this_ptr[0x29] != 0) {
    if (this_ptr[0x28] == 0) {
      if (*(char *)((int64_t)this_ptr + 0x19c) != '\0') goto LAB_01d9b86e;
    }
    else {
      FUN_01e40eb0();
      if (local_70 == this_ptr) {
        FUN_01e40eb0();
        if (local_198 == this_ptr) {
          bVar19 = true;
        }
        else if (this_ptr[0x29] == 0) {
          bVar19 = false;
        }
        else {
          bVar19 = *(char *)((int64_t)this_ptr + 0x19c) != '\0';
        }
        if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (this_ptr[0x29] == 0) {
        bVar19 = false;
      }
      else {
        bVar19 = *(char *)((int64_t)this_ptr + 0x19c) != '\0';
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar19) {
LAB_01d9b86e:
        fVar65 = local_f8._4_4_;
        auVar34._4_4_ = fVar65;
        auVar34._0_4_ = fVar65;
        auVar34._8_4_ = local_f8._12_4_;
        auVar34._12_4_ = local_f8._12_4_;
        auVar35._4_12_ = auVar34._4_12_;
        auVar35._0_4_ = fVar65 - (local_188 - fVar21);
        auVar49 = insertps(_local_f8,auVar35,0x10);
        _local_f8 = auVar49;
      }
    }
  }
  if ((int64_t *)this_ptr[0x2a] == (int64_t *)0x0) {
    plVar1 = (int64_t *)this_ptr[0x2b];
    auVar25 = auVar49;
    _local_a8 = _local_48;
  }
  else {
    (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x4d8))();
    auVar25 = auVar49;
    (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x4d8))();
    local_a8._0_4_ = auVar49._0_4_;
    local_a8._4_4_ = auVar49._4_4_;
    uStack_a0._0_4_ = auVar49._8_4_;
    uStack_a0._4_4_ = auVar49._12_4_;
    auVar36._0_4_ = (float)local_a8._0_4_ + local_48._0_4_;
    auVar36._4_4_ = (float)local_a8._4_4_ + local_48._4_4_;
    auVar36._8_4_ = (float)uStack_a0 + local_48._8_4_;
    auVar36._12_4_ = uStack_a0._4_4_ + local_48._12_4_;
    _local_a8 = blendps(auVar36,_local_48,0xd);
    auVar37._0_4_ = local_e8._0_4_ - auVar25._0_4_;
    auVar37._4_4_ = local_e8._4_4_ - auVar25._4_4_;
    auVar37._8_4_ = local_e8._8_4_ - auVar25._8_4_;
    auVar37._12_4_ = local_e8._12_4_ - auVar25._12_4_;
    _local_e8 = blendps(_local_e8,auVar37,2);
    plVar1 = (int64_t *)this_ptr[0x2b];
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x4d8))();
    auVar56 = auVar25;
    (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x4d8))();
    local_148._0_4_ = auVar25._0_4_;
    local_148._4_4_ = auVar25._4_4_;
    uStack_140._0_4_ = auVar25._8_4_;
    uStack_140._4_4_ = auVar25._12_4_;
    auVar67._0_4_ = (float)local_148._0_4_ + local_a8._0_4_;
    auVar67._4_4_ = (float)local_148._4_4_ + local_a8._4_4_;
    auVar67._8_4_ = (float)uStack_140 + local_a8._8_4_;
    auVar67._12_4_ = uStack_140._4_4_ + local_a8._12_4_;
    _local_a8 = blendps(_local_a8,auVar67,0xd);
    auVar38._0_4_ = local_e8._0_4_ - auVar56._0_4_;
    auVar38._4_4_ = local_e8._4_4_ - auVar56._4_4_;
    auVar38._8_4_ = local_e8._8_4_ - auVar56._8_4_;
    auVar38._12_4_ = local_e8._12_4_ - auVar56._12_4_;
    _local_e8 = blendps(_local_e8,auVar38,0xd);
  }
  fStack_124 = auVar43._4_4_;
  fStack_11c = auVar43._12_4_;
  auVar50._4_4_ = extraout_XMM0_Db + fStack_124;
  auVar50._12_4_ = extraout_XMM0_Dd + fStack_11c;
  auVar50._0_4_ = auVar50._4_4_;
  auVar50._8_4_ = auVar50._12_4_;
  auVar51._4_12_ = auVar50._4_12_;
  auVar51._0_4_ = (auVar50._4_4_ + g_02390d00) - ((float)local_48._4_4_ + fVar79 + g_02390d00);
  plVar1 = (int64_t *)this_ptr[0x2a];
  auVar52 = auVar51;
  if (plVar1 != (int64_t *)0x0) {
    auVar43 = auVar51;
    (**(code **)(*plVar1 + 0x4d8))();
    auVar52 = blendps(auVar43,_local_e8,0xd);
    auVar43 = insertps(_local_a8,auVar51._0_4_,0x10);
    (**(code **)(*plVar1 + 0x4d0))(auVar43._0_8_);
  }
  fVar22 = fVar64 - fVar22;
  if (this_ptr[0x36] == 0) {
LAB_01d9bfdf:
    if ((int64_t *)this_ptr[0x2b] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x4d8))();
      auVar7._4_4_ = fVar64;
      auVar7._0_4_ = fVar22;
      auVar7._8_4_ = uVar3;
      auVar7._12_4_ = uVar3;
      auVar43 = blendps(_local_a8,auVar7,1);
      auVar52 = blendps(auVar52,_local_e8,2);
      if ((int64_t *)this_ptr[0x37] != (int64_t *)0x0) {
        auVar25 = auVar52;
        _local_48 = auVar43;
        (**(code **)(*(int64_t *)this_ptr[0x37] + 0x4d8))();
        auVar68._4_4_ = local_a8._4_4_;
        auVar68._0_4_ = local_a8._4_4_;
        auVar68._8_4_ = uStack_a0._4_4_;
        auVar68._12_4_ = uStack_a0._4_4_;
        fVar79 = ((float)local_a8._4_4_ - (extraout_XMM0_Db_00 + auVar25._4_4_ + g_02390d00)) +
                 g_02390d00;
        if (0.0 < fVar79) {
          auVar57._4_4_ = local_e8._4_4_;
          auVar57._0_4_ = local_e8._4_4_;
          auVar57._8_4_ = uStack_dc;
          auVar57._12_4_ = uStack_dc;
          auVar69._4_12_ = auVar68._4_12_;
          auVar69._0_4_ = (float)local_a8._4_4_ - fVar79;
          insertps(_local_48,auVar69,0x10);
          auVar58._4_12_ = auVar57._4_12_;
          auVar58._0_4_ = (float)local_e8._4_4_ + fVar79;
          auVar52 = insertps(auVar52,auVar58,0x10);
        }
      }
      (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x4d0))();
    }
  }
  else {
    local_48 = auVar18;
    uStack_80 = 0;
    local_88 = (uint8_t  [8])g_023dccec;
    local_168._8_8_ = 0;
    local_168._0_8_ = g_023dccf4;
    pplVar15 = &local_70;
    FUN_01cf3f40();
    plVar1 = local_70;
    if ((g_027f1760 == '\0') && (iVar14 = ___cxa_guard_acquire(), iVar14 != 0)) {
      g_027f16b0 = FUN_0006d940();
      g_027f1698 = "GNMultiRulerView";
      g_027f16a0 = 0x140;
      g_027f16a8 = FUN_01da14a0;
      g_027f16b8 = 0;
      ram_00000000027f16c0 = 0;
      g_027f16c8 = 0;
      ram_00000000027f16d0 = 0;
      g_027f16d8 = 0;
      ram_00000000027f16e0 = 0;
      g_027f16e8 = 0;
      ram_00000000027f16f0 = 0;
      g_027f16f8 = 0;
      ram_00000000027f1700 = 0;
      g_027f1708 = 0;
      ram_00000000027f1710 = 0;
      g_027f1718 = 0;
      ram_00000000027f1720 = 0;
      g_027f1728 = 0;
      ram_00000000027f1730 = 0;
      g_027f1738 = 0;
      ram_00000000027f1740 = 0;
      g_027f1748 = 0;
      ram_00000000027f1750 = 0;
      g_027f1758 = 0;
      ___cxa_guard_release();
    }
    auVar12 = local_48;
    if (plVar1 == (int64_t *)0x0) {
      pplVar15 = &g_02802688;
      plVar1 = g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar13 = FUN_00e85ea0();
      if (cVar13 == '\0') {
        pplVar15 = &g_02802688;
      }
      plVar1 = *pplVar15;
    }
    auVar18 = auVar12;
    if (auVar12 != (uint8_t  [8])plVar1) {
      auVar18 = (uint8_t  [8])plVar1;
      if (*(char *)(pplVar15 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if (auVar12 != (uint8_t  [8])0x0) {
          FUN_00d50b20();
        }
      }
      else {
        if (auVar12 != (uint8_t  [8])0x0) {
          FUN_00d50b20();
        }
        *(void*)(pplVar15 + 1) = 0;
      }
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01cf3f40();
    FUN_01e3f820();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    _local_c8 = blendps(auVar52,local_168,2);
    auVar54 = _local_c8;
    if (*(int64_t *)((int64_t)auVar18 + 0x138) != 0) {
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      auVar43 = _local_c8;
      local_60 = *(int64_t *)((int64_t)auVar18 + 0x138);
      _local_48 = _local_c8;
      while( true ) {
        lVar16 = (int64_t)(int)local_58;
        iVar14 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar14);
        if (*(int *)(local_60 + 0xc) <= iVar14) break;
        local_70 = *(int64_t **)(*(int64_t *)(local_60 + 0x10) + 8 + lVar16 * 8);
        FUN_01e3f820();
        auVar53._0_4_ = auVar43._0_4_ + local_48._0_4_;
        auVar53._4_4_ = auVar43._4_4_ + local_48._4_4_;
        auVar53._8_4_ = auVar43._8_4_ + local_48._8_4_;
        auVar53._12_4_ = auVar43._12_4_ + local_48._12_4_;
        _local_48 = blendps(_local_48,auVar53,2);
        auVar43 = auVar53;
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar14 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar14 = 0;
          }
          local_58 = CONCAT44(iVar14,(int)local_58);
          auVar43 = auVar53;
        }
      }
      FUN_01da2210();
      auVar54 = _local_48;
    }
    _local_48 = auVar54;
    (**(code **)(*(int64_t *)auVar18 + 0x4d0))();
    if (*(int64_t *)((int64_t)auVar18 + 0x138) != 0) {
      local_68 = '\0';
      local_70 = (int64_t *)0x0;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_60 = *(int64_t *)((int64_t)auVar18 + 0x138);
      while( true ) {
        lVar16 = (int64_t)(int)local_58;
        iVar14 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar14);
        if (*(int *)(local_60 + 0xc) <= iVar14) break;
        local_70 = *(int64_t **)(*(int64_t *)(local_60 + 0x10) + 8 + lVar16 * 8);
        FUN_01e3f820();
        _local_c8 = blendps(_local_c8,auVar54,2);
        (**(code **)(*(int64_t *)local_70[2] + 0x4d0))();
        local_128 = auVar54._0_4_;
        fStack_124 = auVar54._4_4_;
        fStack_120 = auVar54._8_4_;
        fStack_11c = auVar54._12_4_;
        auVar54._0_4_ = local_128 + local_88._0_4_;
        auVar54._4_4_ = fStack_124 + local_88._4_4_;
        auVar54._8_4_ = fStack_120 + local_88._8_4_;
        auVar54._12_4_ = fStack_11c + local_88._12_4_;
        _local_88 = blendps(_local_88,auVar54,2);
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar14 = -local_58._4_4_;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar14 = 0;
          }
          local_58 = CONCAT44(iVar14,(int)local_58);
        }
      }
      FUN_01da2210();
    }
    blendps(_local_e8,_local_48,2);
    (**(code **)(*(int64_t *)this_ptr[0x36] + 0x4d0))();
    auVar39._0_4_ = local_a8._0_4_ + (float)local_48._0_4_;
    auVar39._4_4_ = local_a8._4_4_ + (float)local_48._4_4_;
    auVar39._8_4_ = local_a8._8_4_ + (float)uStack_40;
    auVar39._12_4_ = local_a8._12_4_ + uStack_40._4_4_;
    auVar43 = blendps(auVar39,_local_a8,0xd);
    auVar40._0_4_ = local_e8._0_4_ - (float)local_48._0_4_;
    auVar40._4_4_ = local_e8._4_4_ - (float)local_48._4_4_;
    auVar40._8_4_ = local_e8._8_4_ - (float)uStack_40;
    auVar40._12_4_ = local_e8._12_4_ - uStack_40._4_4_;
    _local_e8 = blendps(_local_e8,auVar40,2);
    auVar52 = _local_e8;
    if ((int64_t *)this_ptr[0x2b] != (int64_t *)0x0) {
      auVar25 = _local_e8;
      (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x4d8))();
      auVar6._4_4_ = fVar64;
      auVar6._0_4_ = fVar22;
      auVar6._8_4_ = uVar3;
      auVar6._12_4_ = uVar3;
      blendps(_local_a8,auVar6,1);
      auVar52 = blendps(local_168,auVar25,0xd);
      _local_a8 = auVar43;
      if (*(int64_t *)((int64_t)auVar18 + 0x138) != 0) {
        local_68 = '\0';
        local_70 = (int64_t *)0x0;
        local_58 = 0xffffffff;
        local_50 = 0;
        _local_48 = ZEXT816(0);
        local_58._4_4_ = 0;
        _local_88 = ZEXT816(0);
        auVar55 = auVar25;
        local_60 = *(int64_t *)((int64_t)auVar18 + 0x138);
        while( true ) {
          if (local_58._4_4_ != 0) {
            if (local_58._4_4_ < 1) {
              iVar14 = -local_58._4_4_;
            }
            else {
              iVar14 = (int)local_58 - local_58._4_4_;
              local_58 = CONCAT44(local_58._4_4_,iVar14);
              FUN_00d23690();
              local_50 = local_50 + local_58._4_4_;
              iVar14 = 0;
            }
            local_58 = CONCAT44(iVar14,(int)local_58);
          }
          lVar16 = (int64_t)(int)local_58;
          iVar14 = (int)local_58 + 1;
          local_58 = CONCAT44(local_58._4_4_,iVar14);
          if (*(int *)(local_60 + 0xc) <= iVar14) break;
          local_70 = *(int64_t **)(*(int64_t *)(local_60 + 0x10) + 8 + lVar16 * 8);
          FUN_01e3f820();
          fVar79 = auVar55._4_4_;
          auVar55._4_12_ = local_88._4_12_;
          auVar55._0_4_ = local_88._0_4_ + fVar79;
          if (local_70[3] != 0) {
            local_88 = auVar55._0_8_;
            uStack_40 = uStack_80;
            local_48 = local_88;
          }
          _local_88 = auVar55;
        }
        FUN_01da2210();
        if (0.0 < (float)local_48._0_4_) {
          auVar41._4_4_ = local_48._4_4_;
          auVar41._0_4_ = (float)local_48._0_4_ + g_02390d00;
          auVar41._8_4_ = (float)uStack_40;
          auVar41._12_4_ = uStack_40._4_4_;
          auVar52 = insertps(auVar52,auVar41,0x10);
          (**(code **)(*(int64_t *)this_ptr[0x37] + 0x4d0))();
          if (*(int64_t *)((int64_t)auVar18 + 0x138) != 0) {
            local_68 = '\0';
            local_70 = (int64_t *)0x0;
            local_58 = 0xffffffff;
            local_50 = 0;
            _local_88 = ZEXT816(0);
            local_58._4_4_ = 0;
            local_60 = *(int64_t *)((int64_t)auVar18 + 0x138);
            while( true ) {
              if (local_58._4_4_ != 0) {
                if (local_58._4_4_ < 1) {
                  iVar14 = -local_58._4_4_;
                }
                else {
                  iVar14 = (int)local_58 - local_58._4_4_;
                  local_58 = CONCAT44(local_58._4_4_,iVar14);
                  FUN_00d23690();
                  local_50 = local_50 + local_58._4_4_;
                  iVar14 = 0;
                }
                local_58 = CONCAT44(iVar14,(int)local_58);
              }
              lVar16 = (int64_t)(int)local_58;
              iVar14 = (int)local_58 + 1;
              local_58 = CONCAT44(local_58._4_4_,iVar14);
              if (*(int *)(local_60 + 0xc) <= iVar14) break;
              local_70 = *(int64_t **)(*(int64_t *)(local_60 + 0x10) + 8 + lVar16 * 8);
              FUN_01e3f820();
              if ((int64_t *)local_70[3] != (int64_t *)0x0) {
                auVar56 = blendps(auVar25,auVar52,2);
                auVar43 = insertps(auVar52,local_88._0_4_,0x1d);
                _local_48 = auVar52;
                (**(code **)(*(int64_t *)local_70[3] + 0x4d0))(auVar43._0_8_,auVar56._0_8_);
                auVar4._4_8_ = extraout_XMM0_Qb_06;
                auVar4._0_4_ = local_48._4_4_;
                auVar52._0_8_ = auVar4._0_8_ << 0x20;
                auVar52._8_4_ = (float)uStack_40;
                auVar52._12_4_ = uStack_40._4_4_;
              }
              fVar79 = auVar52._4_4_;
              auVar52._4_12_ = local_88._4_12_;
              auVar52._0_4_ = (float)local_88._0_4_ + fVar79;
              _local_88 = auVar52;
            }
            FUN_01da2210();
          }
          goto LAB_01d9bfdf;
        }
      }
      (**(code **)(*(int64_t *)this_ptr[0x37] + 0x4d0))();
      goto LAB_01d9bfdf;
    }
  }
  if (this_ptr[0x28] != 0) {
    FUN_01e40eb0();
    plVar1 = local_70;
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == this_ptr) {
      uVar10 = auStack_104._0_4_;
      uVar11 = auStack_104._4_4_;
      fVar79 = fStack_fc;
      auVar52 = _local_108;
      fVar65 = (float)local_138._0_4_;
      if ((int64_t *)this_ptr[0x32] != (int64_t *)0x0) {
        auVar43 = _local_108;
        (**(code **)(*(int64_t *)this_ptr[0x32] + 0x4d8))();
        auVar59._4_12_ = auVar43._4_12_;
        auVar59._0_4_ = auVar43._0_4_ + g_02420c90;
        if ((float)local_108 <= auVar59._0_4_) {
          (**(code **)(*(int64_t *)this_ptr[0x32] + 0x4f8))();
        }
        else {
          (**(code **)(*(int64_t *)this_ptr[0x32] + 0x4d8))();
          auVar43 = auVar59;
          (**(code **)(*(int64_t *)this_ptr[0x32] + 0x4d8))();
          _local_48 = auVar43;
          (**(code **)(*(int64_t *)this_ptr[0x32] + 0x4d8))();
          blendps(auVar43,_local_108,2);
          (**(code **)(*(int64_t *)this_ptr[0x32] + 0x4d0))();
          local_88._0_4_ = auVar59._0_4_;
          auVar60._0_4_ = (float)local_108 - ((float)local_48._0_4_ - fVar21);
          auVar60._4_12_ = _auStack_104;
          auVar52 = blendps(auVar60,_local_108,0xe);
          fVar65 = (float)local_138._0_4_ + ((float)local_88._0_4_ - fVar21);
        }
      }
      if ((int64_t *)this_ptr[0x31] != (int64_t *)0x0) {
        local_48._4_4_ = local_138._4_4_;
        local_48._0_4_ = fVar65;
        uStack_40._0_4_ = fStack_130;
        uStack_40._4_4_ = fStack_12c;
        auVar43 = auVar52;
        (**(code **)(*(int64_t *)this_ptr[0x31] + 0x4d8))();
        auVar61._4_12_ = auVar43._4_12_;
        auVar61._0_4_ = auVar43._0_4_ + g_02420c90;
        local_88._0_4_ = auVar52._0_4_;
        if ((float)local_88._0_4_ <= auVar61._0_4_) {
          (**(code **)(*(int64_t *)this_ptr[0x31] + 0x4f8))();
        }
        else {
          (**(code **)(*(int64_t *)this_ptr[0x31] + 0x4d8))();
          auVar43 = auVar61;
          (**(code **)(*(int64_t *)this_ptr[0x31] + 0x4d8))();
          blendps(auVar43,_local_108,2);
          auVar42._0_4_ = ((float)local_108 + (float)local_138._0_4_) - auVar43._0_4_;
          auVar42._4_4_ = ((float)uVar10 + (float)local_138._4_4_) - auVar43._4_4_;
          auVar42._8_4_ = ((float)uVar11 + fStack_130) - auVar43._8_4_;
          auVar42._12_4_ = (fVar79 + fStack_12c) - auVar43._12_4_;
          auVar43 = blendps(auVar42,_local_138,2);
          (**(code **)(*(int64_t *)this_ptr[0x31] + 0x4d0))(auVar43._0_8_);
          local_128 = auVar61._0_4_;
          auVar70._4_12_ = auVar52._4_12_;
          auVar70._0_4_ = (float)local_88._0_4_ - (local_128 - fVar21);
          auVar52 = blendps(auVar52,auVar70,1);
        }
      }
      (**(code **)(*(int64_t *)this_ptr[0x28] + 0x4d0))();
      goto LAB_01d9c2d6;
    }
  }
  if ((int64_t *)this_ptr[0x32] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x32] + 0x4f8))();
  }
  if ((int64_t *)this_ptr[0x31] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x31] + 0x4f8))();
  }
LAB_01d9c2d6:
  if (this_ptr[0x29] != 0) {
    FUN_01e40eb0();
    plVar1 = local_70;
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 == this_ptr) {
      auVar43 = _local_158;
      auVar52 = _local_f8;
      if ((int64_t *)this_ptr[0x30] != (int64_t *)0x0) {
        auVar25 = _local_f8;
        (**(code **)(*(int64_t *)this_ptr[0x30] + 0x4d8))();
        auVar62._4_4_ = local_f8._4_4_;
        auVar62._0_4_ = local_f8._4_4_;
        auVar62._8_4_ = fStack_ec;
        auVar62._12_4_ = fStack_ec;
        if ((float)local_f8._4_4_ <= auVar25._4_4_ + g_02420c90) {
          (**(code **)(*(int64_t *)this_ptr[0x30] + 0x4f8))();
        }
        else {
          auVar25 = auVar62;
          (**(code **)(*(int64_t *)this_ptr[0x30] + 0x4d8))();
          _local_48 = auVar25;
          (**(code **)(*(int64_t *)this_ptr[0x30] + 0x4d8))();
          auVar43 = auVar25;
          (**(code **)(*(int64_t *)this_ptr[0x30] + 0x4d8))();
          local_a8._4_4_ = local_158._4_4_;
          local_a8._0_4_ = local_a8._4_4_;
          uStack_a0._0_4_ = (float)local_158._12_4_;
          uStack_a0._4_4_ = (float)local_158._12_4_;
          auVar71._0_4_ = auVar51._0_4_ + (float)local_a8._4_4_;
          auVar71._4_12_ = auVar51._4_12_;
          auVar56 = blendps(auVar43,_local_f8,0xd);
          auVar43 = insertps(_local_158,auVar71,0x10);
          (**(code **)(*(int64_t *)this_ptr[0x30] + 0x4d0))(auVar43._0_8_,auVar56._0_8_);
          auVar72._4_12_ = local_a8._4_12_;
          auVar72._0_4_ = (float)local_a8._4_4_ + ((float)local_48._4_4_ - fVar21);
          auVar43 = insertps(_local_158,auVar72,0x10);
          fStack_124 = auVar25._4_4_;
          auVar76._4_12_ = auVar62._4_12_;
          auVar76._0_4_ = (float)local_f8._4_4_ - (fStack_124 - fVar21);
          auVar52 = insertps(_local_f8,auVar76,0x10);
        }
      }
      if ((int64_t *)this_ptr[0x2f] != (int64_t *)0x0) {
        auVar25 = auVar52;
        _local_48 = auVar43;
        (**(code **)(*(int64_t *)this_ptr[0x2f] + 0x4d8))();
        local_88._4_4_ = auVar52._4_4_;
        uStack_80._4_4_ = auVar52._12_4_;
        auVar63._4_4_ = local_88._4_4_;
        auVar63._0_4_ = local_88._4_4_;
        auVar63._8_4_ = uStack_80._4_4_;
        auVar63._12_4_ = uStack_80._4_4_;
        if ((float)local_88._4_4_ <= auVar25._4_4_ + g_02420c90) {
          (**(code **)(*(int64_t *)this_ptr[0x2f] + 0x4f8))();
        }
        else {
          auVar43 = auVar63;
          (**(code **)(*(int64_t *)this_ptr[0x2f] + 0x4d8))();
          auVar25 = auVar43;
          (**(code **)(*(int64_t *)this_ptr[0x2f] + 0x4d8))();
          blendps(_local_f8,auVar25,2);
          auVar77._0_4_ = (float)local_f8._0_4_ - auVar25._0_4_;
          auVar77._4_4_ = (float)local_f8._4_4_ - auVar25._4_4_;
          auVar77._8_4_ = fStack_f0 - auVar25._8_4_;
          auVar77._12_4_ = fStack_ec - auVar25._12_4_;
          auVar25 = blendps(_local_158,auVar77,2);
          (**(code **)(*(int64_t *)this_ptr[0x2f] + 0x4d0))(auVar25._0_8_);
          local_a8._4_4_ = auVar43._4_4_;
          auVar78._4_12_ = auVar63._4_12_;
          auVar78._0_4_ = (float)local_88._4_4_ - ((float)local_a8._4_4_ - fVar21);
          auVar52 = insertps(auVar52,auVar78,0x10);
        }
      }
      (**(code **)(*(int64_t *)this_ptr[0x29] + 0x4d0))();
    }
  }
  if (((this_ptr[0x2a] == 0) || ((int64_t *)this_ptr[0x2b] == (int64_t *)0x0)) ||
     (plVar1 = (int64_t *)this_ptr[0x2e], plVar1 == (int64_t *)0x0)) {
    if ((int64_t *)this_ptr[0x2e] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)this_ptr[0x2e] + 0x4d8))();
      (**(code **)(*(int64_t *)this_ptr[0x2e] + 0x4d0))();
    }
  }
  else {
    (**(code **)(*(int64_t *)this_ptr[0x2b] + 0x4d8))();
    auVar43 = auVar52;
    (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x4d8))();
    blendps(auVar52,auVar43,2);
    auVar8._4_4_ = fVar64;
    auVar8._0_4_ = fVar22;
    auVar8._8_4_ = uVar3;
    auVar8._12_4_ = uVar3;
    auVar43 = insertps(auVar8,auVar51._0_4_,0x10);
    (**(code **)(*plVar1 + 0x4d0))(auVar43._0_8_);
  }
  (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d0))();
  (**(code **)(*this_ptr + 0x940))();
  if (local_110 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (auVar18 != (uint8_t  [8])0x0) {
    FUN_00d50b20();
  }
  if (!bVar9 && plVar17 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d9e7d0
// ============================================================
// Function: FUN_01d9e7d0
// Address: 01d9e7d0
// Size: 4954 bytes
// Class: GNMultiRulerView

void FUN_01d9e7d0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int64_t *this_ptr;
  int64_t *plVar13;
  bool bVar14;
  float fVar15;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar22;
  uint32_t in_XMM1_Dc;
  uint32_t uVar23;
  uint32_t in_XMM1_Dd;
  uint8_t auVar21 [16];
  int64_t local_78;
  char local_70;
  int64_t *local_48;
  char local_40;
  
  fVar22 = (float)((uint64_t)param_2 >> 0x20);
  fVar20 = (float)param_2;
  (**(code **)(*this_ptr + 0x640))();
  fVar15 = (float)(**(code **)(*local_48 + 0x598))();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x928))();
  if ((g_028b8980 == (int64_t *)0x0) || (g_028b8989 == '\0')) {
    FUN_00e8cb50();
    if (g_028b8980 == (int64_t *)0x0) {
      plVar10 = (int64_t *)FUN_00e8fc40();
      FUN_00152930();
      (**(code **)(*plVar10 + 0x18))();
      if (g_028b8980 == plVar10) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
        bVar14 = g_028b8980 != (int64_t *)0x0;
        g_028b8980 = plVar10;
        if (bVar14) {
          FUN_00d50b20();
        }
      }
      if (g_028b8988 == '\0') {
        g_028b8988 = '\x01';
        FUN_00e8cb90();
      }
      if (!bVar6) {
        FUN_00d50b20();
      }
      FUN_01cfbee0();
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d4eaa0();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52700();
      FUN_01d52740();
      FUN_01d48b40();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      FUN_01cfbee0();
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      FUN_01d488d0();
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x550))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4d8))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      fVar22 = 0.0;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      fVar20 = g_023b160c;
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x558))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x518))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x560))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52770();
      g_028b8989 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b8989 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028b8990 == (int64_t *)0x0) || (g_028b8999 == '\0')) {
    FUN_00e8cb50();
    if (g_028b8990 == (int64_t *)0x0) {
      plVar10 = (int64_t *)FUN_00e8fc40();
      FUN_00152930();
      (**(code **)(*plVar10 + 0x18))();
      if (g_028b8990 == plVar10) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
        bVar14 = g_028b8990 != (int64_t *)0x0;
        g_028b8990 = plVar10;
        if (bVar14) {
          FUN_00d50b20();
        }
      }
      if (g_028b8998 == '\0') {
        g_028b8998 = '\x01';
        FUN_00e8cb90();
      }
      if (!bVar6) {
        FUN_00d50b20();
      }
      FUN_01cfbee0();
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d4eaa0();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52700();
      FUN_01d52740();
      FUN_01d48b40();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      FUN_01cfbee0();
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      FUN_01d488d0();
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x550))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4d8))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      fVar22 = 0.0;
      in_XMM1_Dc = 0;
      in_XMM1_Dd = 0;
      fVar20 = g_023b36b0;
      (**(code **)(*local_48 + 0x4e8))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x558))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x518))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      (**(code **)(*local_48 + 0x560))();
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52770();
      g_028b8999 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b8999 = '\x01';
      FUN_00e8cb70();
    }
  }
  plVar10 = (int64_t *)this_ptr[0x28];
  plVar13 = local_48;
  if (plVar10 == (int64_t *)0x0) {
    bVar6 = false;
    plVar11 = (int64_t *)0x0;
    bVar14 = false;
    plVar13 = (int64_t *)0x0;
  }
  else {
    fVar19 = fVar20;
    fVar20 = fVar22;
    uVar23 = in_XMM1_Dc;
    in_XMM1_Dc = in_XMM1_Dd;
    (**(code **)(*plVar10 + 0x4d8))();
    plVar11 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    (**(code **)(*plVar11 + 0x18))();
    auVar21._4_4_ = fVar20;
    auVar21._0_4_ = fVar20;
    auVar21._8_4_ = in_XMM1_Dc;
    auVar21._12_4_ = in_XMM1_Dc;
    auVar16._4_12_ = auVar21._4_12_;
    auVar16._0_4_ = (fVar20 + fVar20) - fVar15;
    auVar5._4_4_ = fVar20;
    auVar5._0_4_ = fVar19;
    auVar5._8_4_ = uVar23;
    auVar5._12_4_ = in_XMM1_Dc;
    auVar21 = blendps(auVar5,auVar16,1);
    (**(code **)(*plVar11 + 0x4d0))(1,auVar21._0_8_);
    FUN_01d9e650();
    lVar1 = g_026de630;
    if (local_48 == (int64_t *)0x0) {
      bVar6 = true;
      bVar8 = false;
      bVar7 = false;
      bVar9 = false;
      bVar14 = false;
      plVar13 = (int64_t *)0x0;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar8 = true;
      bVar7 = true;
      bVar6 = false;
      bVar9 = true;
      bVar14 = true;
      lVar1 = g_026de630;
    }
    else {
      bVar6 = false;
      bVar8 = true;
      bVar7 = true;
      bVar9 = true;
      bVar14 = true;
    }
    g_026de630 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
      bVar7 = bVar8;
      bVar14 = bVar9;
    }
    (**(code **)(*plVar13 + 0xa10))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    plVar12 = g_028b8980;
    if (g_028b8980 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_01cef3b0();
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar13 + 0x4d0))();
    lVar1 = this_ptr[0x27];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar13 + 0xa20))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar11 + 0x450))();
    FUN_01d9e650();
    lVar1 = g_027f1680;
    if (local_48 == plVar13) {
      if (bVar6) {
        bVar14 = true;
        if (local_40 == '\0') {
          FUN_00d50b00();
          lVar1 = g_027f1680;
        }
      }
      else if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
        lVar1 = g_027f1680;
      }
    }
    else if (local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (bVar7) {
        FUN_00d50b20();
        bVar14 = true;
        lVar1 = g_027f1680;
        plVar13 = local_48;
      }
      else {
        lVar1 = g_027f1680;
        plVar13 = local_48;
        bVar14 = true;
      }
    }
    else {
      plVar13 = local_48;
      bVar14 = true;
      if (bVar7) {
        FUN_00d50b20();
        lVar1 = g_027f1680;
        bVar14 = true;
      }
    }
    g_027f1680 = lVar1;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar13 + 0xa10))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    plVar12 = g_028b8990;
    if (g_028b8990 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    FUN_01cef3b0();
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    lVar1 = this_ptr[0x27];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar13 + 0xa20))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    auVar2._4_4_ = fVar20;
    auVar2._0_4_ = fVar20 - fVar15;
    auVar2._8_4_ = in_XMM1_Dc;
    auVar2._12_4_ = in_XMM1_Dc;
    auVar21 = blendps(ZEXT816(0),auVar2,1);
    fVar22 = fVar20;
    in_XMM1_Dd = in_XMM1_Dc;
    (**(code **)(*plVar13 + 0x4d0))(auVar21._0_8_);
    (**(code **)(*plVar11 + 0x450))();
    FUN_01d9ad20();
    bVar6 = true;
  }
  if ((int64_t *)this_ptr[0x29] == (int64_t *)0x0) goto LAB_01d9faa6;
  (**(code **)(*(int64_t *)this_ptr[0x29] + 0x4d8))();
  plVar12 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar12 + 0x18))();
  if (plVar12 == plVar11) {
    plVar12 = plVar11;
    if (plVar10 == (int64_t *)0x0) {
      bVar6 = true;
    }
    else {
      FUN_00d50b20();
    }
  }
  else {
    bVar6 = true;
    if (plVar10 != (int64_t *)0x0 && plVar11 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  auVar3._4_4_ = fVar22;
  auVar3._0_4_ = fVar20;
  auVar3._8_4_ = in_XMM1_Dc;
  auVar3._12_4_ = in_XMM1_Dd;
  auVar17._4_12_ = auVar3._4_12_;
  auVar17._0_4_ = ((fVar20 + fVar20) - fVar15) + g_02390d00;
  insertps(auVar3,auVar17,0x10);
  (**(code **)(*plVar12 + 0x4d0))();
  FUN_01d9e650();
  if (local_48 == plVar13) {
    lVar1 = g_026de648;
    if ((bVar14) || (local_48 == (int64_t *)0x0)) {
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
        lVar1 = g_026de648;
      }
    }
    else {
      bVar14 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
        lVar1 = g_026de648;
      }
    }
  }
  else if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    if ((!bVar14) || (plVar13 == (int64_t *)0x0)) goto LAB_01d9f72f;
    FUN_00d50b20();
    plVar13 = local_48;
    lVar1 = g_026de648;
    bVar14 = true;
  }
  else if ((bVar14) && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
    plVar13 = local_48;
    lVar1 = g_026de648;
    bVar14 = true;
  }
  else {
LAB_01d9f72f:
    plVar13 = local_48;
    lVar1 = g_026de648;
    bVar14 = true;
  }
  g_026de648 = lVar1;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar13 + 0xa10))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar10 = g_028b8980;
  if (g_028b8980 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01cef3b0();
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar13 + 0x4d0))();
  lVar1 = this_ptr[0x27];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar13 + 0xa20))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar12 + 0x450))();
  FUN_01d9e650();
  if (local_48 == plVar13) {
    if (bVar14) {
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
    }
  }
  else if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    plVar13 = local_48;
    if (bVar14) {
      FUN_00d50b20();
    }
  }
  else {
    plVar13 = local_48;
    if (bVar14) {
      FUN_00d50b20();
    }
  }
  lVar1 = g_027f1690;
  if (g_027f1690 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar13 + 0xa10))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar10 = g_028b8990;
  if (g_028b8990 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  FUN_01cef3b0();
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x27];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar13 + 0xa20))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  auVar4._4_4_ = fVar22;
  auVar4._0_4_ = fVar20;
  auVar4._8_4_ = in_XMM1_Dc;
  auVar4._12_4_ = in_XMM1_Dd;
  auVar18._4_12_ = auVar4._4_12_;
  auVar18._0_4_ = fVar20 - fVar15;
  auVar21 = insertps(auVar18,auVar18,0x1d);
  (**(code **)(*plVar13 + 0x4d0))(auVar21._0_8_);
  (**(code **)(*plVar12 + 0x450))();
  bVar14 = true;
  FUN_01d9ab80();
  plVar11 = plVar12;
LAB_01d9faa6:
  if ((bVar6) && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar14) && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d9dd30
// ============================================================
// Function: FUN_01d9dd30
// Address: 01d9dd30
// Size: 1502 bytes
// Class: GNMultiRulerView

void FUN_01d9dd30(void)

{
  int64_t *plVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar10 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar11 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  uint8_t local_78 [8];
  uint64_t uStack_70;
  int64_t *local_58;
  int64_t *local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_02;
  
  if (g_028b8979 != '\0') {
    return;
  }
  g_028b8979 = 1;
  (**(code **)(*this_ptr + 0x918))();
  if (local_40 == (int64_t *)0x0) {
    bVar2 = 1;
    plVar8 = (int64_t *)0x0;
    bVar3 = false;
  }
  else {
    plVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = 0;
      bVar3 = true;
    }
    else {
      bVar2 = 0;
      bVar3 = true;
    }
  }
  local_40 = (int64_t *)*arg1;
  cVar4 = FUN_00d24090();
  if (cVar4 != '\0') {
    local_40 = (int64_t *)*arg1;
    FUN_00d23d90();
    if (0 < *(int *)((int64_t)plVar8 + 0xc)) {
      lVar7 = 0;
      plVar9 = (int64_t *)0x0;
      bVar6 = false;
      do {
        plVar1 = *(int64_t **)(plVar8[2] + lVar7 * 8);
        if (plVar9 == plVar1) {
          if ((!bVar6) && (plVar9 != (int64_t *)0x0)) {
            bVar6 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar6) && (plVar9 != (int64_t *)0x0)) {
            FUN_00d50b20();
            bVar6 = true;
            plVar9 = plVar1;
          }
          else {
            bVar6 = true;
            plVar9 = plVar1;
          }
        }
        local_78 = (uint8_t  [8])FUN_01cf5cf0();
        uStack_70 = extraout_XMM0_Qb;
        auVar12._0_8_ = FUN_01cf5cf0();
        auVar12._8_8_ = extraout_XMM0_Qb_00;
        auVar12 = blendps(_local_78,auVar12,2);
        FUN_01cf5c80();
        in_XMM1 = auVar12;
        if (*arg1 == this_ptr[0x27]) {
          FUN_01cf3f40();
          (**(code **)(*local_40 + 0x4d8))();
          auVar10 = auVar12;
          (**(code **)(*plVar9 + 0x4d8))();
          auVar11 = auVar10;
          (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d8))();
          auVar13 = auVar11;
          FUN_01cf3f40();
          (**(code **)(*local_40 + 0x4d8))();
          in_XMM1 = auVar13;
          FUN_01cf3f40();
          local_a8 = auVar10._0_4_;
          fStack_a4 = auVar10._4_4_;
          fStack_a0 = auVar10._8_4_;
          fStack_9c = auVar10._12_4_;
          local_98 = auVar11._0_4_;
          fStack_94 = auVar11._4_4_;
          fStack_90 = auVar11._8_4_;
          fStack_8c = auVar11._12_4_;
          local_78._0_4_ = auVar12._0_4_;
          local_78._4_4_ = auVar12._4_4_;
          uStack_70._0_4_ = auVar12._8_4_;
          uStack_70._4_4_ = auVar12._12_4_;
          auVar10._0_4_ = (local_a8 - local_98) + (float)local_78._0_4_;
          auVar10._4_4_ = (fStack_a4 - fStack_94) + (float)local_78._4_4_;
          auVar10._8_4_ = (fStack_a0 - fStack_90) + (float)uStack_70;
          auVar10._12_4_ = (fStack_9c - fStack_8c) + uStack_70._4_4_;
          auVar12 = blendps(auVar10,auVar13,2);
          (**(code **)(*local_40 + 0x4e8))(auVar12._0_8_);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)((int64_t)plVar8 + 0xc));
      goto LAB_01d9dff1;
    }
  }
  bVar6 = false;
  plVar9 = (int64_t *)0x0;
LAB_01d9dff1:
  (**(code **)(*this_ptr + 0x920))();
  local_58 = local_40;
  if (local_40 == plVar8) {
    local_58 = plVar8;
    if ((bool)(bVar2 & local_40 != (int64_t *)0x0)) {
      bVar3 = true;
      FUN_00d50b00();
    }
  }
  else {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    bVar5 = (bool)(bVar3 & plVar8 != (int64_t *)0x0);
    bVar3 = true;
    if (bVar5) {
      FUN_00d50b20();
    }
  }
  cVar4 = FUN_00d24090();
  if (cVar4 != '\0') {
    plVar8 = (int64_t *)*arg1;
    FUN_00d23d90();
    if (0 < *(int *)((int64_t)local_58 + 0xc)) {
      lVar7 = 0;
      do {
        plVar1 = *(int64_t **)(local_58[2] + lVar7 * 8);
        if (plVar9 == plVar1) {
          if ((!bVar6) && (plVar9 != (int64_t *)0x0)) {
            bVar6 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar1 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar6) && (plVar9 != (int64_t *)0x0)) {
            FUN_00d50b20();
            bVar6 = true;
            plVar9 = plVar1;
          }
          else {
            bVar6 = true;
            plVar9 = plVar1;
          }
        }
        local_78 = (uint8_t  [8])FUN_01cf5cf0();
        uStack_70 = extraout_XMM0_Qb_01;
        auVar11._0_8_ = FUN_01cf5cf0();
        auVar11._8_8_ = extraout_XMM0_Qb_02;
        auVar12 = blendps(auVar11,_local_78,2);
        FUN_01cf5c80(auVar12._0_8_);
        if (*arg1 == this_ptr[0x27]) {
          FUN_01cf3f40();
          (**(code **)(*plVar8 + 0x4d8))();
          auVar12 = in_XMM1;
          (**(code **)(*plVar9 + 0x4d8))();
          auVar10 = auVar12;
          (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d8))();
          auVar11 = auVar10;
          FUN_01cf3f40();
          (**(code **)(*plVar8 + 0x4d8))();
          FUN_01cf3f40();
          local_a8 = auVar12._0_4_;
          fStack_a4 = auVar12._4_4_;
          fStack_a0 = auVar12._8_4_;
          fStack_9c = auVar12._12_4_;
          local_98 = auVar10._0_4_;
          fStack_94 = auVar10._4_4_;
          fStack_90 = auVar10._8_4_;
          fStack_8c = auVar10._12_4_;
          local_78._0_4_ = in_XMM1._0_4_;
          local_78._4_4_ = in_XMM1._4_4_;
          uStack_70._0_4_ = in_XMM1._8_4_;
          uStack_70._4_4_ = in_XMM1._12_4_;
          in_XMM1._0_4_ = (local_a8 - local_98) + (float)local_78._0_4_;
          in_XMM1._4_4_ = (fStack_a4 - fStack_94) + (float)local_78._4_4_;
          in_XMM1._8_4_ = (fStack_a0 - fStack_90) + (float)uStack_70;
          in_XMM1._12_4_ = (fStack_9c - fStack_8c) + uStack_70._4_4_;
          auVar12 = blendps(auVar11,in_XMM1,2);
          (**(code **)(*plVar8 + 0x4e8))(auVar12._0_8_);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)((int64_t)local_58 + 0xc));
    }
  }
  g_028b8979 = 0;
  if ((bVar6) && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d9a0f0
// ============================================================
// Function: FUN_01d9a0f0
// Address: 01d9a0f0
// Size: 1176 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"

void FUN_01d9a0f0(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  bool bVar8;
  int64_t local_70;
  uint8_t local_68;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  int local_40;
  uint64_t local_3c;
  
  if (this_ptr[0x2a] == 0) {
    local_50 = '\0';
    plVar7 = (int64_t *)0x0;
  }
  else {
    FUN_01cf3f40();
    plVar7 = local_58;
  }
  local_58 = plVar7;
  if ((g_027f1760 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027f16b0 = FUN_0006d940();
    g_027f1698 = "GNMultiRulerView";
    g_027f16a0 = 0x140;
    g_027f16a8 = FUN_01da14a0;
    g_027f16b8 = 0;
    ram_00000000027f16c0 = 0;
    g_027f16c8 = 0;
    ram_00000000027f16d0 = 0;
    g_027f16d8 = 0;
    ram_00000000027f16e0 = 0;
    g_027f16e8 = 0;
    ram_00000000027f16f0 = 0;
    g_027f16f8 = 0;
    ram_00000000027f1700 = 0;
    g_027f1708 = 0;
    ram_00000000027f1710 = 0;
    g_027f1718 = 0;
    ram_00000000027f1720 = 0;
    g_027f1728 = 0;
    ram_00000000027f1730 = 0;
    g_027f1738 = 0;
    ram_00000000027f1740 = 0;
    g_027f1748 = 0;
    ram_00000000027f1750 = 0;
    g_027f1758 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_01d9a173:
    pplVar5 = &g_02802688;
    plVar7 = g_02802688;
    if (g_02802690 != '\0') goto LAB_01d9a183;
LAB_01d9a196:
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01d9a173;
    pplVar5 = &local_58;
    plVar7 = local_58;
    if (local_50 == '\0') goto LAB_01d9a196;
LAB_01d9a183:
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar7 == (int64_t *)0x0) || (lVar1 = plVar7[0x27], lVar1 == 0)) {
LAB_01d9a2a1:
    if (this_ptr[0x2b] == 0) {
      local_50 = '\0';
      plVar2 = (int64_t *)0x0;
    }
    else {
      FUN_01cf3f40();
      plVar2 = local_58;
    }
    local_58 = plVar2;
    if ((g_027f1760 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_027f16b0 = FUN_0006d940();
      g_027f1698 = "GNMultiRulerView";
      g_027f16a0 = 0x140;
      g_027f16a8 = FUN_01da14a0;
      g_027f16b8 = 0;
      ram_00000000027f16c0 = 0;
      g_027f16c8 = 0;
      ram_00000000027f16d0 = 0;
      g_027f16d8 = 0;
      ram_00000000027f16e0 = 0;
      g_027f16e8 = 0;
      ram_00000000027f16f0 = 0;
      g_027f16f8 = 0;
      ram_00000000027f1700 = 0;
      g_027f1708 = 0;
      ram_00000000027f1710 = 0;
      g_027f1718 = 0;
      ram_00000000027f1720 = 0;
      g_027f1728 = 0;
      ram_00000000027f1730 = 0;
      g_027f1738 = 0;
      ram_00000000027f1740 = 0;
      g_027f1748 = 0;
      ram_00000000027f1750 = 0;
      g_027f1758 = 0;
      ___cxa_guard_release();
    }
    if (plVar2 == (int64_t *)0x0) {
LAB_01d9a309:
      pplVar5 = &g_02802688;
      plVar2 = g_02802688;
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01d9a309;
      pplVar5 = &local_58;
      plVar2 = local_58;
    }
    if (plVar7 != plVar2) {
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar8 = plVar7 != (int64_t *)0x0;
        plVar7 = plVar2;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      else {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        *(void*)(pplVar5 + 1) = 0;
        plVar7 = plVar2;
      }
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (int64_t *)0x0) {
      return;
    }
    lVar1 = plVar7[0x27];
    if (lVar1 == 0) goto LAB_01d9a40b;
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_3c = 0;
    lVar6 = 0;
    do {
      local_40 = (int)lVar6;
      local_48 = lVar1;
      if (*(int *)(lVar1 + 0xc) <= local_40) goto LAB_01d9a402;
      local_58 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
      lVar6 = lVar6 + 1;
    } while (local_58[2] != *param_2);
    local_40 = (int)lVar6 + -1;
    if (*arg1 != local_58[3]) {
      (**(code **)(*this_ptr + 0x928))();
    }
  }
  else {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_3c = 0;
    lVar6 = 0;
    do {
      local_40 = (int)lVar6;
      local_48 = lVar1;
      if (*(int *)(lVar1 + 0xc) <= local_40) {
        FUN_01da2210();
        goto LAB_01d9a2a1;
      }
      local_58 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
      lVar6 = lVar6 + 1;
    } while (local_58[2] != *param_2);
    local_40 = (int)lVar6 + -1;
    if (*arg1 != local_58[3]) {
      *(int *)(this_ptr + 0x35) = (int)this_ptr[0x35] + 1;
      FUN_01d98b80();
      local_70 = *arg1;
      local_68 = 0;
      FUN_01d98360(&local_70,local_3c._4_4_ + local_40,param_3,param_4,0);
      *(int *)(this_ptr + 0x35) = (int)this_ptr[0x35] + -1;
      (**(code **)(*this_ptr + 0x928))();
    }
  }
LAB_01d9a402:
  FUN_01da2210();
LAB_01d9a40b:
  FUN_00d50b20();
  return;
}



// ============================================================
// 01d9a670
// ============================================================
// Function: FUN_01d9a670
// Address: 01d9a670
// Size: 1119 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"

void FUN_01d9a670(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t **pplVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  bool bVar8;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  int local_40;
  uint64_t local_3c;
  
  if (*(int64_t *)(arg1 + 0x150) == 0) {
    local_50 = '\0';
    plVar7 = (int64_t *)0x0;
  }
  else {
    FUN_01cf3f40();
    plVar7 = local_58;
  }
  local_58 = plVar7;
  if ((g_027f1760 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    g_027f16b0 = FUN_0006d940();
    g_027f1698 = "GNMultiRulerView";
    g_027f16a0 = 0x140;
    g_027f16a8 = FUN_01da14a0;
    g_027f16b8 = 0;
    ram_00000000027f16c0 = 0;
    g_027f16c8 = 0;
    ram_00000000027f16d0 = 0;
    g_027f16d8 = 0;
    ram_00000000027f16e0 = 0;
    g_027f16e8 = 0;
    ram_00000000027f16f0 = 0;
    g_027f16f8 = 0;
    ram_00000000027f1700 = 0;
    g_027f1708 = 0;
    ram_00000000027f1710 = 0;
    g_027f1718 = 0;
    ram_00000000027f1720 = 0;
    g_027f1728 = 0;
    ram_00000000027f1730 = 0;
    g_027f1738 = 0;
    ram_00000000027f1740 = 0;
    g_027f1748 = 0;
    ram_00000000027f1750 = 0;
    g_027f1758 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_01d9a6f2:
    pplVar4 = &g_02802688;
    plVar7 = g_02802688;
    if (g_02802690 != '\0') goto LAB_01d9a702;
LAB_01d9a715:
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01d9a6f2;
    pplVar4 = &local_58;
    plVar7 = local_58;
    if (local_50 == '\0') goto LAB_01d9a715;
LAB_01d9a702:
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar7 == (int64_t *)0x0) || (lVar6 = plVar7[0x27], lVar6 == 0)) {
LAB_01d9a7bf:
    if (*(int64_t *)(arg1 + 0x158) == 0) {
      local_50 = '\0';
      plVar1 = (int64_t *)0x0;
    }
    else {
      FUN_01cf3f40();
      plVar1 = local_58;
    }
    local_58 = plVar1;
    if ((g_027f1760 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      g_027f16b0 = FUN_0006d940();
      g_027f1698 = "GNMultiRulerView";
      g_027f16a0 = 0x140;
      g_027f16a8 = FUN_01da14a0;
      g_027f16b8 = 0;
      ram_00000000027f16c0 = 0;
      g_027f16c8 = 0;
      ram_00000000027f16d0 = 0;
      g_027f16d8 = 0;
      ram_00000000027f16e0 = 0;
      g_027f16e8 = 0;
      ram_00000000027f16f0 = 0;
      g_027f16f8 = 0;
      ram_00000000027f1700 = 0;
      g_027f1708 = 0;
      ram_00000000027f1710 = 0;
      g_027f1718 = 0;
      ram_00000000027f1720 = 0;
      g_027f1728 = 0;
      ram_00000000027f1730 = 0;
      g_027f1738 = 0;
      ram_00000000027f1740 = 0;
      g_027f1748 = 0;
      ram_00000000027f1750 = 0;
      g_027f1758 = 0;
      ___cxa_guard_release();
    }
    if (plVar1 == (int64_t *)0x0) {
LAB_01d9a828:
      pplVar4 = &g_02802688;
      plVar1 = g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_01d9a828;
      pplVar4 = &local_58;
      plVar1 = local_58;
    }
    if (plVar7 != plVar1) {
      if (*(char *)(pplVar4 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar8 = plVar7 != (int64_t *)0x0;
        plVar7 = plVar1;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      else {
        if (plVar7 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        *(void*)(pplVar4 + 1) = 0;
        plVar7 = plVar1;
      }
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar7 == (int64_t *)0x0) || (lVar6 = plVar7[0x27], lVar6 == 0)) {
LAB_01d9a93e:
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      goto joined_r0x01d9a94d;
    }
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_3c = 0;
    lVar5 = 0;
    do {
      local_40 = (int)lVar5;
      local_48 = lVar6;
      if (*(int *)(lVar6 + 0xc) <= local_40) {
        FUN_01da2210();
        goto LAB_01d9a93e;
      }
      local_58 = *(int64_t **)(*(int64_t *)(lVar6 + 0x10) + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while (local_58[2] != *param_2);
    local_40 = (int)lVar5 + -1;
    *(void*)(this_ptr + 1) = 0;
    lVar6 = local_58[3];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_3c = 0;
    lVar5 = 0;
    do {
      local_40 = (int)lVar5;
      local_48 = lVar6;
      if (*(int *)(lVar6 + 0xc) <= local_40) {
        FUN_01da2210();
        goto LAB_01d9a7bf;
      }
      local_58 = *(int64_t **)(*(int64_t *)(lVar6 + 0x10) + lVar5 * 8);
      lVar5 = lVar5 + 1;
    } while (local_58[2] != *param_2);
    local_40 = (int)lVar5 + -1;
    *(void*)(this_ptr + 1) = 0;
    lVar6 = local_58[3];
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
  }
  *this_ptr = lVar6;
  *(void*)(this_ptr + 1) = 1;
  FUN_01da2210();
joined_r0x01d9a94d:
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d98360
// ============================================================
// Function: FUN_01d98360
// Address: 01d98360
// Size: 1315 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"

void FUN_01d98360(int64_t *param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t **pplVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar8;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  if (this_ptr[0x2a] == 0) {
    local_38 = '\0';
    plVar6 = (int64_t *)0x0;
  }
  else {
    FUN_01cf3f40();
    plVar6 = local_40;
  }
  local_40 = plVar6;
  if ((g_027f1760 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027f16b0 = FUN_0006d940();
    g_027f1698 = "GNMultiRulerView";
    g_027f16a0 = 0x140;
    g_027f16a8 = FUN_01da14a0;
    g_027f16b8 = 0;
    ram_00000000027f16c0 = 0;
    g_027f16c8 = 0;
    ram_00000000027f16d0 = 0;
    g_027f16d8 = 0;
    ram_00000000027f16e0 = 0;
    g_027f16e8 = 0;
    ram_00000000027f16f0 = 0;
    g_027f16f8 = 0;
    ram_00000000027f1700 = 0;
    g_027f1708 = 0;
    ram_00000000027f1710 = 0;
    g_027f1718 = 0;
    ram_00000000027f1720 = 0;
    g_027f1728 = 0;
    ram_00000000027f1730 = 0;
    g_027f1738 = 0;
    ram_00000000027f1740 = 0;
    g_027f1748 = 0;
    ram_00000000027f1750 = 0;
    g_027f1758 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01d983e7:
    pplVar5 = &g_02802688;
    plVar6 = g_02802688;
    if (g_02802690 != '\0') goto LAB_01d983f7;
LAB_01d9840a:
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01d983e7;
    pplVar5 = &local_40;
    plVar6 = local_40;
    if (local_38 == '\0') goto LAB_01d9840a;
LAB_01d983f7:
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar7 = (int64_t *)this_ptr[0x2e];
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38 = '\x01';
  local_40 = plVar7;
  if ((g_027f1760 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027f16b0 = FUN_0006d940();
    g_027f1698 = "GNMultiRulerView";
    g_027f16a0 = 0x140;
    g_027f16a8 = FUN_01da14a0;
    g_027f16b8 = 0;
    ram_00000000027f16c0 = 0;
    g_027f16c8 = 0;
    ram_00000000027f16d0 = 0;
    g_027f16d8 = 0;
    ram_00000000027f16e0 = 0;
    g_027f16e8 = 0;
    ram_00000000027f16f0 = 0;
    g_027f16f8 = 0;
    ram_00000000027f1700 = 0;
    g_027f1708 = 0;
    ram_00000000027f1710 = 0;
    g_027f1718 = 0;
    ram_00000000027f1720 = 0;
    g_027f1728 = 0;
    ram_00000000027f1730 = 0;
    g_027f1738 = 0;
    ram_00000000027f1740 = 0;
    g_027f1748 = 0;
    ram_00000000027f1750 = 0;
    g_027f1758 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
      pplVar5 = &local_40;
      local_48 = local_40;
      cVar3 = local_38;
      goto joined_r0x01d9848b;
    }
  }
  pplVar5 = &g_02802688;
  local_48 = g_02802688;
  cVar3 = g_02802690;
joined_r0x01d9848b:
  if (cVar3 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (int64_t *)0x0) {
    plVar6 = (int64_t *)FUN_01da14a0();
    (**(code **)(*plVar6 + 0x18))();
    (**(code **)(*plVar6 + 0x558))();
    (**(code **)(*plVar6 + 0x570))();
    FUN_01d97f00();
  }
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (int64_t)&g_0268eee0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  uVar8 = FUN_00d500e0();
  lVar1 = *arg1;
  lVar2 = plVar7[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      uVar8 = FUN_00d50b00();
    }
    plVar7[2] = lVar1;
    if (lVar2 != 0) {
      uVar8 = FUN_00d50b20();
    }
  }
  lVar1 = *param_1;
  lVar2 = plVar7[3];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      uVar8 = FUN_00d50b00();
    }
    plVar7[3] = lVar1;
    if (lVar2 != 0) {
      uVar8 = FUN_00d50b20();
    }
  }
  local_38 = '\0';
  local_40 = plVar7;
  FUN_00d23370(uVar8,param_2);
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x450))();
  (**(code **)(*(int64_t *)*arg1 + 0x558))();
  if (*(int *)((int64_t)this_ptr + 0x1ac) == 0) {
    if (local_48 == (int64_t *)0x0) {
      local_48 = (int64_t *)FUN_01da14a0();
      (**(code **)(*local_48 + 0x18))();
      (**(code **)(*local_48 + 0x570))();
      FUN_01d98a70();
      lVar1 = *param_1;
    }
    else {
      lVar1 = *param_1;
    }
    if (lVar1 != 0) {
      (**(code **)(*local_48 + 0x450))();
      (**(code **)(*(int64_t *)*param_1 + 0x558))();
    }
  }
  (**(code **)(*this_ptr + 0x928))();
  FUN_00d50b20();
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01d99230
// ============================================================
// Function: FUN_01d99230
// Address: 01d99230
// Size: 1464 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"

void FUN_01d99230(int64_t *param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar8;
  uint32_t uVar9;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  
  if (this_ptr[0x36] == 0) {
    puVar6 = (void*)FUN_00e8fc40();
    FUN_0006daf0();
    *puVar6 = &g_02678958;
    puVar6[2] = &g_02679280;
    puVar6[0x27] = 0;
    *(void*)(puVar6 + 0x28) = 0;
    puVar6[0x29] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x2c] = 0;
    *(void*)((int64_t)puVar6 + 0x164) = 0;
    *(void*)((int64_t)puVar6 + 0x16c) = 0;
    (*g_02678970)();
    lVar1 = this_ptr[0x36];
    this_ptr[0x36] = (int64_t)puVar6;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    plVar7 = (int64_t *)FUN_01da14a0();
    (**(code **)(*plVar7 + 0x18))();
    (**(code **)(*plVar7 + 0x558))();
    (**(code **)(*plVar7 + 0x570))();
    local_40 = plVar7;
    FUN_01cf5bb0();
    lVar1 = this_ptr[0x36];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*this_ptr + 0x450))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    plVar7 = (int64_t *)this_ptr[0x36];
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    local_48 = '\0';
    local_50 = plVar7;
    FUN_00d21140();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar3 = true;
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_01d994c9;
  }
  pplVar8 = &local_50;
  FUN_01cf3f40();
  plVar7 = local_50;
  if ((g_027f1760 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027f16b0 = FUN_0006d940();
    g_027f1698 = "GNMultiRulerView";
    g_027f16a0 = 0x140;
    g_027f16a8 = FUN_01da14a0;
    g_027f16b8 = 0;
    ram_00000000027f16c0 = 0;
    g_027f16c8 = 0;
    ram_00000000027f16d0 = 0;
    g_027f16d8 = 0;
    ram_00000000027f16e0 = 0;
    g_027f16e8 = 0;
    ram_00000000027f16f0 = 0;
    g_027f16f8 = 0;
    ram_00000000027f1700 = 0;
    g_027f1708 = 0;
    ram_00000000027f1710 = 0;
    g_027f1718 = 0;
    ram_00000000027f1720 = 0;
    g_027f1728 = 0;
    ram_00000000027f1730 = 0;
    g_027f1738 = 0;
    ram_00000000027f1740 = 0;
    g_027f1748 = 0;
    ram_00000000027f1750 = 0;
    g_027f1758 = 0;
    ___cxa_guard_release();
  }
  if (plVar7 == (int64_t *)0x0) {
LAB_01d992a0:
    pplVar8 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01d992a0;
  }
  local_40 = *pplVar8;
  if (*pplVar8 == (int64_t *)0x0) {
    bVar3 = false;
    local_40 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar8 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(void*)(pplVar8 + 1) = 0;
    }
    bVar3 = true;
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01d994c9:
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar7 = (int64_t)&g_0268eee0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  uVar9 = FUN_00d500e0();
  lVar1 = *arg1;
  lVar2 = plVar7[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b00();
    }
    plVar7[2] = lVar1;
    if (lVar2 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  lVar1 = *param_1;
  lVar2 = plVar7[3];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b00();
    }
    plVar7[3] = lVar1;
    if (lVar2 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  local_48 = '\0';
  local_50 = plVar7;
  FUN_00d23370(uVar9,param_2);
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_40 + 0x450))();
  (**(code **)(*(int64_t *)*arg1 + 0x558))();
  if (*(int *)((int64_t)this_ptr + 0x1ac) == 0) {
    if (this_ptr[0x37] == 0) {
      plVar7 = (int64_t *)FUN_00e8fc40();
      FUN_0006daf0();
      (**(code **)(*plVar7 + 0x18))();
      lVar1 = this_ptr[0x37];
      this_ptr[0x37] = (int64_t)plVar7;
      if (lVar1 != 0) {
        FUN_00d50b20();
        plVar7 = (int64_t *)this_ptr[0x37];
      }
      (**(code **)(*plVar7 + 0x570))();
      lVar1 = this_ptr[0x37];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*this_ptr + 0x450))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    if (*param_1 != 0) {
      (**(code **)(*(int64_t *)this_ptr[0x37] + 0x450))();
      (**(code **)(*(int64_t *)*param_1 + 0x558))();
    }
  }
  (**(code **)(*this_ptr + 0x928))();
  FUN_00d50b20();
  if (bVar3) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d96260
// ============================================================
// Function: FUN_01d96260
// Address: 01d96260
// Size: 1072 bytes
// Class: GNMultiRulerView

void FUN_01d96260(void)

{
  int64_t lVar1;
  uint8_t uVar2;
  uint32_t uVar3;
  void*arg1;
  int64_t this_ptr;
  int64_t local_28;
  char local_20;
  
  FUN_01e3b960();
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x138);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(void*)(this_ptr + 0x138) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x138);
        *(int64_t *)(this_ptr + 0x138) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(int64_t *)(this_ptr + 0x138) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x140);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(void*)(this_ptr + 0x140) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x140);
        *(int64_t *)(this_ptr + 0x140) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(int64_t *)(this_ptr + 0x140) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x148);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(void*)(this_ptr + 0x148) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x148);
        *(int64_t *)(this_ptr + 0x148) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(int64_t *)(this_ptr + 0x148) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x150);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(void*)(this_ptr + 0x150) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x150);
        *(int64_t *)(this_ptr + 0x150) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(int64_t *)(this_ptr + 0x150) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x158);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(void*)(this_ptr + 0x158) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x158);
        *(int64_t *)(this_ptr + 0x158) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(int64_t *)(this_ptr + 0x158) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  lVar1 = *(int64_t *)(this_ptr + 0x170);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(void*)(this_ptr + 0x170) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(int64_t *)(this_ptr + 0x170);
        *(int64_t *)(this_ptr + 0x170) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(int64_t *)(this_ptr + 0x170) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  *(int64_t *)(this_ptr + 0x178) = local_28;
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  *(int64_t *)(this_ptr + 0x180) = local_28;
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  *(int64_t *)(this_ptr + 0x188) = local_28;
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x470))();
  *(int64_t *)(this_ptr + 400) = local_28;
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
  *(void*)(this_ptr + 0x198) = uVar3;
  uVar2 = (**(code **)(*(int64_t *)*arg1 + 0x418))();
  *(void*)(this_ptr + 0x19c) = uVar2;
  return;
}



// ============================================================
// 01d9d760
// ============================================================
// Function: FUN_01d9d760
// Address: 01d9d760
// Size: 1030 bytes
// Class: GNMultiRulerView

void FUN_01d9d760(uint64_t param_1)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  byte bVar3;
  bool bVar4;
  char cVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  bool bVar9;
  bool bVar10;
  float fVar12;
  uint64_t uVar11;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  int64_t local_40;
  char local_38;
  
  fVar12 = (float)((uint64_t)param_1 >> 0x20);
  if (g_028b8978 != '\0') {
    return;
  }
  g_028b8978 = 1;
  (**(code **)(*this_ptr + 0x918))();
  if (local_40 == 0) {
    bVar3 = 1;
    lVar8 = 0;
    bVar4 = false;
  }
  else {
    lVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar3 = 0;
      bVar4 = true;
    }
    else {
      bVar3 = 0;
      bVar4 = true;
    }
  }
  local_40 = *arg1;
  cVar5 = FUN_00d24090();
  if (cVar5 != '\0') {
    local_40 = *arg1;
    FUN_00d23d90();
    if (0 < *(int *)(lVar8 + 0xc)) {
      lVar7 = 0;
      lVar6 = 0;
      bVar9 = false;
      do {
        lVar1 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar7 * 8);
        if (lVar6 == lVar1) {
          lVar1 = lVar6;
          bVar10 = bVar9;
          if ((!bVar9) && (lVar6 != 0)) {
            FUN_00d50b00();
            bVar10 = true;
          }
        }
        else {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          bVar10 = true;
          if ((bVar9) && (lVar6 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar9 = bVar10;
        lVar6 = lVar1;
        uVar11 = FUN_01cf5cf0();
        auVar13._0_4_ = (float)uVar11 + (float)param_1;
        auVar13._4_4_ = (float)((uint64_t)uVar11 >> 0x20) + fVar12;
        auVar13._8_4_ = extraout_XMM0_Dc + in_XMM0_Dc;
        auVar13._12_4_ = extraout_XMM0_Dd + in_XMM0_Dd;
        auVar14._8_4_ = extraout_XMM0_Dc;
        auVar14._0_8_ = uVar11;
        auVar14._12_4_ = extraout_XMM0_Dd;
        auVar14 = blendps(auVar13,auVar14,2);
        FUN_01cf5ff0(auVar14._0_4_);
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar8 + 0xc));
      goto LAB_01d9d938;
    }
  }
  bVar9 = false;
  lVar6 = 0;
LAB_01d9d938:
  (**(code **)(*this_ptr + 0x920))();
  if (local_40 == lVar8) {
    bVar10 = local_40 != 0;
    local_40 = lVar8;
    if ((bool)(bVar3 & bVar10)) {
      bVar4 = true;
      FUN_00d50b00();
    }
  }
  else {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    bVar10 = (bool)(bVar4 & lVar8 != 0);
    bVar4 = true;
    if (bVar10) {
      FUN_00d50b20();
    }
  }
  cVar5 = FUN_00d24090();
  if ((cVar5 != '\0') && (FUN_00d23d90(), 0 < *(int *)(local_40 + 0xc))) {
    lVar8 = 0;
    do {
      lVar7 = *(int64_t *)(*(int64_t *)(local_40 + 0x10) + lVar8 * 8);
      if (lVar6 == lVar7) {
        lVar7 = lVar6;
        bVar10 = bVar9;
        if ((!bVar9) && (lVar6 != 0)) {
          FUN_00d50b00();
          bVar10 = true;
        }
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        bVar10 = true;
        if ((bVar9) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar9 = bVar10;
      lVar6 = lVar7;
      uVar11 = FUN_01cf5cf0();
      auVar15._0_4_ = (float)uVar11 + (float)param_1;
      auVar15._4_4_ = (float)((uint64_t)uVar11 >> 0x20) + fVar12;
      auVar15._8_4_ = extraout_XMM0_Dc_00 + in_XMM0_Dc;
      auVar15._12_4_ = extraout_XMM0_Dd_00 + in_XMM0_Dd;
      auVar2._8_4_ = extraout_XMM0_Dc_00;
      auVar2._0_8_ = uVar11;
      auVar2._12_4_ = extraout_XMM0_Dd_00;
      auVar14 = blendps(auVar15,auVar2,0xd);
      FUN_01cf5ff0(auVar14._0_4_);
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(local_40 + 0xc));
  }
  g_028b8978 = 0;
  if ((bVar9) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar4) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d98e50
// ============================================================
// Function: FUN_01d98e50
// Address: 01d98e50
// Size: 761 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"

void FUN_01d98e50(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t lVar5;
  int64_t **pplVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  int local_38;
  uint64_t local_34;
  
  if (this_ptr[0x36] == 0) {
    return;
  }
  pplVar6 = &local_50;
  FUN_01cf3f40();
  plVar1 = local_50;
  if ((g_027f1760 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_027f16b0 = FUN_0006d940();
    g_027f1698 = "GNMultiRulerView";
    g_027f16a0 = 0x140;
    g_027f16a8 = FUN_01da14a0;
    g_027f16b8 = 0;
    ram_00000000027f16c0 = 0;
    g_027f16c8 = 0;
    ram_00000000027f16d0 = 0;
    g_027f16d8 = 0;
    ram_00000000027f16e0 = 0;
    g_027f16e8 = 0;
    ram_00000000027f16f0 = 0;
    g_027f16f8 = 0;
    ram_00000000027f1700 = 0;
    g_027f1708 = 0;
    ram_00000000027f1710 = 0;
    g_027f1718 = 0;
    ram_00000000027f1720 = 0;
    g_027f1728 = 0;
    ram_00000000027f1730 = 0;
    g_027f1738 = 0;
    ram_00000000027f1740 = 0;
    g_027f1748 = 0;
    ram_00000000027f1750 = 0;
    g_027f1758 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01d98ebe;
  }
  pplVar6 = (int64_t **)&g_02802688;
LAB_01d98ebe:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    lVar2 = plVar1[0x27];
    lVar5 = 0;
    if (lVar2 != 0) {
      local_48 = '\0';
      local_50 = (int64_t *)0x0;
      local_34 = 0;
      lVar5 = 0;
      do {
        local_38 = (int)lVar5;
        local_40 = lVar2;
        if (*(int *)(lVar2 + 0xc) <= local_38) goto LAB_01d98f7f;
        local_50 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar5 * 8);
        lVar5 = lVar5 + 1;
      } while (local_50[2] != *arg1);
      local_38 = (int)lVar5 + -1;
      if ((int64_t *)local_50[3] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)local_50[3] + 0x478))();
      }
      (**(code **)(*(int64_t *)local_50[2] + 0x478))();
      local_34 = CONCAT44(local_34._4_4_,~(uint)local_34);
LAB_01d98f7f:
      FUN_01da2210();
      lVar5 = plVar1[0x27];
    }
    if (*(int *)(lVar5 + 0xc) == 0) {
      FUN_01cf5bb0();
      plVar1 = (int64_t *)this_ptr[0x36];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_48 = '\0';
      local_50 = plVar1;
      FUN_00d23f50();
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)this_ptr[0x36] + 0x478))();
      if (this_ptr[0x36] != 0) {
        this_ptr[0x36] = 0;
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)this_ptr[0x37] + 0x480))();
      (**(code **)(*(int64_t *)this_ptr[0x37] + 0x478))();
      if (this_ptr[0x37] != 0) {
        this_ptr[0x37] = 0;
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0x928))();
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d99a50
// ============================================================
// Function: FUN_01d99a50
// Address: 01d99a50
// Size: 645 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"

void* FUN_01d99a50(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t **pplVar7;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar8;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  uint32_t local_38;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  if (*(int64_t *)(arg1 + 0x150) == 0) {
    local_50 = '\0';
    plVar3 = (int64_t *)0x0;
  }
  else {
    FUN_01cf3f40();
    plVar3 = local_58;
  }
  local_58 = plVar3;
  if ((g_027f1760 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027f16b0 = FUN_0006d940();
    g_027f1698 = "GNMultiRulerView";
    g_027f16a0 = 0x140;
    g_027f16a8 = FUN_01da14a0;
    g_027f16b8 = 0;
    ram_00000000027f16c0 = 0;
    g_027f16c8 = 0;
    ram_00000000027f16d0 = 0;
    g_027f16d8 = 0;
    ram_00000000027f16e0 = 0;
    g_027f16e8 = 0;
    ram_00000000027f16f0 = 0;
    g_027f16f8 = 0;
    ram_00000000027f1700 = 0;
    g_027f1708 = 0;
    ram_00000000027f1710 = 0;
    g_027f1718 = 0;
    ram_00000000027f1720 = 0;
    g_027f1728 = 0;
    ram_00000000027f1730 = 0;
    g_027f1738 = 0;
    ram_00000000027f1740 = 0;
    g_027f1748 = 0;
    ram_00000000027f1750 = 0;
    g_027f1758 = 0;
    ___cxa_guard_release();
  }
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') {
      pplVar7 = &local_58;
      plVar3 = local_58;
      cVar4 = local_50;
      goto joined_r0x01d99b07;
    }
  }
  pplVar7 = &g_02802688;
  plVar3 = g_02802688;
  cVar4 = g_02802690;
joined_r0x01d99b07:
  if (cVar4 == '\0') {
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) {
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    lVar1 = plVar3[0x27];
    if (lVar1 != 0) {
      local_50 = '\0';
      local_58 = (int64_t *)0x0;
      local_38 = 0;
      local_40 = 0;
      local_48 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        lVar8 = 0;
        do {
          local_58 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar8 * 8);
          lVar2 = local_58[2];
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
          local_40 = CONCAT44(local_40._4_4_,(int)lVar8);
        } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
      }
      FUN_01da2210();
    }
    *this_ptr = puVar6;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01d98b80
// ============================================================
// Function: FUN_01d98b80
// Address: 01d98b80
// Size: 591 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"

void FUN_01d98b80(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  char cVar4;
  int iVar5;
  int64_t **pplVar6;
  int64_t lVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar8;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  int local_38;
  uint64_t local_34;
  
  if (this_ptr[0x2a] == 0) {
    local_48 = '\0';
    plVar3 = (int64_t *)0x0;
  }
  else {
    FUN_01cf3f40();
    plVar3 = local_50;
  }
  local_50 = plVar3;
  if ((g_027f1760 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027f16b0 = FUN_0006d940();
    g_027f1698 = "GNMultiRulerView";
    g_027f16a0 = 0x140;
    g_027f16a8 = FUN_01da14a0;
    g_027f16b8 = 0;
    ram_00000000027f16c0 = 0;
    g_027f16c8 = 0;
    ram_00000000027f16d0 = 0;
    g_027f16d8 = 0;
    ram_00000000027f16e0 = 0;
    g_027f16e8 = 0;
    ram_00000000027f16f0 = 0;
    g_027f16f8 = 0;
    ram_00000000027f1700 = 0;
    g_027f1708 = 0;
    ram_00000000027f1710 = 0;
    g_027f1718 = 0;
    ram_00000000027f1720 = 0;
    g_027f1728 = 0;
    ram_00000000027f1730 = 0;
    g_027f1738 = 0;
    ram_00000000027f1740 = 0;
    g_027f1748 = 0;
    ram_00000000027f1750 = 0;
    g_027f1758 = 0;
    ___cxa_guard_release();
  }
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') {
      pplVar6 = &local_50;
      plVar3 = local_50;
      cVar4 = local_48;
      goto joined_r0x01d98c1e;
    }
  }
  pplVar6 = &g_02802688;
  plVar3 = g_02802688;
  cVar4 = g_02802690;
joined_r0x01d98c1e:
  if (cVar4 == '\0') {
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar6 + 1) = 0;
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar3 != (int64_t *)0x0) && (lVar1 = plVar3[0x27], lVar1 != 0)) {
    local_48 = '\0';
    local_50 = (int64_t *)0x0;
    local_34 = 0;
    lVar7 = 0;
    do {
      local_38 = (int)lVar7;
      local_40 = lVar1;
      if (*(int *)(lVar1 + 0xc) <= local_38) goto LAB_01d98cde;
      plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
      plVar8 = (int64_t *)plVar2[2];
      lVar7 = lVar7 + 1;
      local_50 = plVar2;
    } while (plVar8 != (int64_t *)*arg1);
    local_38 = (int)lVar7 + -1;
    if ((int64_t *)plVar2[3] != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)plVar2[3] + 0x478))();
      plVar8 = (int64_t *)plVar2[2];
    }
    (**(code **)(*plVar8 + 0x478))();
    local_34 = CONCAT44(local_34._4_4_,0xffffffff);
    (**(code **)(*this_ptr + 0x928))();
LAB_01d98cde:
    FUN_01da2210();
  }
  FUN_01d98e50();
  (**(code **)(*this_ptr + 0x928))();
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d96f70
// ============================================================
// Function: FUN_01d96f70
// Address: 01d96f70
// Size: 1450 bytes
// Class: GNMultiRulerView

void FUN_01d96f70(void)

{
  char cVar1;
  char *pcVar2;
  int64_t *this_ptr;
  bool bVar3;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  FUN_01e44a80();
  if (*(char *)((int64_t)this_ptr + 0x19d) != '\0') {
    (**(code **)(*this_ptr + 0x640))();
    FUN_01e436c0();
    (**(code **)(*local_50 + 0x518))();
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e42030();
  if (local_50 == (int64_t *)0x0) {
    cVar1 = '\0';
  }
  else {
    FUN_01f27fe0();
    cVar1 = FUN_01f2fa60();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    FUN_01e42030();
    FUN_01d8b220();
    local_40[0] = local_48[0];
    pcVar2 = local_48;
    if (local_48[0] == '\0') {
      pcVar2 = local_40;
    }
    *pcVar2 = '\0';
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (((local_50 != (int64_t *)0x0) && (FUN_01e42030(), local_48[0] != '\0')) &&
       (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e42030();
    FUN_01d8b200();
    local_38[0] = local_48[0];
    pcVar2 = local_48;
    if (local_48[0] == '\0') {
      pcVar2 = local_38;
    }
    *pcVar2 = '\0';
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 == (int64_t *)0x0) {
      bVar3 = false;
    }
    else if (local_50 == this_ptr) {
      bVar3 = true;
    }
    else {
      FUN_01cf3f40();
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x7b8))();
      bVar3 = local_50 == (int64_t *)0x0;
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar3) {
      (**(code **)(*this_ptr + 0x640))();
      FUN_01e3f820();
      FUN_00d05530();
      (**(code **)(*local_50 + 0x508))();
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 01d9d1f0
// ============================================================
// Function: FUN_01d9d1f0
// Address: 01d9d1f0
// Size: 821 bytes
// Class: GNMultiRulerView

void* FUN_01d9d1f0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void*puVar3;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_a0;
  char local_98;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  if (*(int64_t *)(arg1 + 0x138) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  if (*(int64_t *)(arg1 + 0x158) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(arg1 + 0x160);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar4 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar4 * 8);
        (**(code **)(*plVar2 + 0x7b8))();
        if (local_40 == (int64_t *)0x0) {
          bVar5 = false;
        }
        else {
          (**(code **)(*plVar2 + 0x7b8))();
          if (local_68[0x2b] == 0) {
            local_50 = '\0';
            local_58 = 0;
            bVar5 = false;
          }
          else {
            FUN_01cf3f40();
            bVar5 = local_58 != 0;
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar5) {
          (**(code **)(*plVar2 + 0x7b8))();
          FUN_01cf3f40();
          (**(code **)(*local_68 + 0x7b0))();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          FUN_00d235a0();
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
        }
        local_38 = '\0';
        FUN_00d21140();
        lVar4 = lVar4 + 1;
        local_40 = plVar2;
      } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_01da22b0();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01d9cc80
// ============================================================
// Function: FUN_01d9cc80
// Address: 01d9cc80
// Size: 821 bytes
// Class: GNMultiRulerView

void* FUN_01d9cc80(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void*puVar3;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar4;
  bool bVar5;
  int64_t local_a0;
  char local_98;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_40;
  char local_38;
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  if (*(int64_t *)(arg1 + 0x138) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  if (*(int64_t *)(arg1 + 0x150) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(arg1 + 0x168);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar4 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar4 * 8);
        (**(code **)(*plVar2 + 0x7b8))();
        if (local_40 == (int64_t *)0x0) {
          bVar5 = false;
        }
        else {
          (**(code **)(*plVar2 + 0x7b8))();
          if (local_68[0x2a] == 0) {
            local_50 = '\0';
            local_58 = 0;
            bVar5 = false;
          }
          else {
            FUN_01cf3f40();
            bVar5 = local_58 != 0;
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar5) {
          (**(code **)(*plVar2 + 0x7b8))();
          FUN_01cf3f40();
          (**(code **)(*local_68 + 0x7b0))();
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          FUN_00d235a0();
          if (local_58 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
        }
        local_38 = '\0';
        FUN_00d21140();
        lVar4 = lVar4 + 1;
        local_40 = plVar2;
      } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_01da22b0();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01d95980
// ============================================================
// Function: FUN_01d95980
// Address: 01d95980
// Size: 706 bytes
// Class: GNMultiRulerView

void FUN_01d95980(void)

{
  void*puVar1;
  uint64_t uVar2;
  void*puVar3;
  int64_t *this_ptr;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_30;
  char local_28;
  
  FUN_01e3b710();
  uVar2 = g_02420c88;
  *(void*)((int64_t)this_ptr + 0x10c) = 0;
  *(void*)((int64_t)this_ptr + 0x114) = uVar2;
  *(void*)(this_ptr + 5) = 1;
  *(void*)(this_ptr + 0x33) = 0;
  *(void*)((int64_t)this_ptr + 0x19c) = 0;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *puVar3 = &g_02678958;
  puVar3[2] = &g_02679280;
  puVar3[0x27] = 0;
  *(void*)(puVar3 + 0x28) = 0;
  puVar3[0x29] = 0;
  puVar3[0x2a] = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  *(void*)((int64_t)puVar3 + 0x164) = 0;
  *(void*)((int64_t)puVar3 + 0x16c) = 0;
  (*g_02678970)();
  puVar1 = (void*)this_ptr[0x27];
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x27] = (int64_t)puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d0))
            ((int)*(void*)((int64_t)this_ptr + 0x10c),
             *(void*)((int64_t)this_ptr + 0x114));
  (**(code **)(*(int64_t *)this_ptr[0x27] + 0x558))();
  local_58 = 0;
  local_60 = this_ptr[0x27];
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  (**(code **)(*this_ptr + 0x450))();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_a0 = g_027f1660;
  if (g_027f1660 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_00d41430(&local_90,&local_a0);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_80 = g_027f0e30;
  if (g_027f0e30 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_70 = 0;
  local_68 = '\0';
  FUN_00d41430(&local_70,&local_80);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d99db0
// ============================================================
// Function: FUN_01d99db0
// Address: 01d99db0
// Size: 601 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"

void* FUN_01d99db0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void*puVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t **pplVar7;
  int64_t lVar8;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  uint64_t local_58;
  uint32_t local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  if (*(int64_t *)(arg1 + 0x1b0) == 0) goto LAB_01d99f4f;
  pplVar7 = &local_70;
  FUN_01cf3f40();
  plVar1 = local_70;
  // [STATIC_INIT: property registration]
  if (plVar1 == (int64_t *)0x0) {
LAB_01d99e43:
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01d99e43;
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = plVar1[0x27];
  if (lVar2 != 0) {
    local_68 = '\0';
    local_70 = (int64_t *)0x0;
    local_50 = 0;
    local_58 = 0;
    local_60 = lVar2;
    local_38 = plVar1;
    if (0 < *(int *)(lVar2 + 0xc)) {
      lVar8 = 0;
      do {
        local_70 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar8 * 8);
        lVar3 = local_70[2];
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        local_40 = '\0';
        local_48 = lVar3;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar8);
      } while ((int)lVar8 < *(int *)(lVar2 + 0xc));
    }
    FUN_01da2210();
    if (local_38 == (int64_t *)0x0) goto LAB_01d99f4f;
  }
  FUN_00d50b20();
LAB_01d99f4f:
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 01d96800
// ============================================================
// Function: FUN_01d96800
// Address: 01d96800
// Size: 830 bytes
// Class: GNMultiRulerView

void FUN_01d96800(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  void*arg1;
  int64_t this_ptr;
  
  FUN_01e3bcd0();
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x138);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x140);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x148);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x150);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x158);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  lVar2 = *(int64_t *)(this_ptr + 0x170);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x400))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x400))();
  (**(code **)(*(int64_t *)*arg1 + 0x400))();
  (**(code **)(*(int64_t *)*arg1 + 0x400))();
  (**(code **)(*(int64_t *)*arg1 + 0x400))();
  (**(code **)(*(int64_t *)*arg1 + 0x3b8))();
  (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  return;
}



// ============================================================
// 01d95e40
// ============================================================
// Function: FUN_01d95e40
// Address: 01d95e40
// Size: 532 bytes
// Class: GNMultiRulerView

void FUN_01d95e40(void)

{
  int64_t this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_30;
  char local_28;
  
  if (*(int64_t *)(this_ptr + 0x140) != 0) {
    FUN_01d91990();
  }
  if (*(int64_t *)(this_ptr + 0x148) != 0) {
    FUN_01d91990();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_90 = g_027f1660;
  if (g_027f1660 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_00d41040(&local_80,&local_90);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_70 = g_027f0e30;
  if (g_027f0e30 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_60 = 0;
  local_58 = '\0';
  FUN_00d41040(&local_60,&local_70);
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e3b870();
  return;
}



// ============================================================
// 01d954d0
// ============================================================
// Function: FUN_01d954d0
// Address: 01d954d0
// Size: 533 bytes
// Class: GNMultiRulerView
// String references:
//   "GNMultiRulerView"

void FUN_01d954d0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_168;
  void*local_28;
  
  // [STATIC_INIT: property registration]
  if (g_027f1753 == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    local_28 = (void*)0x0;
    if (1 < g_02802630) {
      local_28 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_28 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_000a32b0();
    FUN_01da1d70();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_168 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    if (local_28 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
  }
  return;
}

