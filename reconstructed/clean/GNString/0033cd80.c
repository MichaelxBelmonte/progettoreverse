// Function: FUN_0033cd80
// Address: 0033cd80
// Size: 2146 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0033cd80(uint64_t param_1,uint64_t param_2,uint32_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t in_RCX;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  float fVar8;
  uint64_t uVar9;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint64_t local_1c8;
  uint64_t uStackY_1c0;
  float local_1b8;
  float fStackY_1b4;
  float fStackY_1b0;
  float fStackY_1ac;
  float fVar20;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  uint8_t local_188 [16];
  int64_t *local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int local_11c;
  uint8_t local_a8 [8];
  uint64_t uStack_a0;
  int64_t local_98;
  char local_90;
  uint8_t local_88 [8];
  float fStack_80;
  float fStack_7c;
  int64_t local_78;
  char local_70;
  int local_60;
  int64_t *local_50;
  char local_48;
  int64_t *local_38;
  
  local_11c = (int)param_2;
  fVar20 = (float)param_1;
  fStack_1a4 = (float)((uint64_t)param_1 >> 0x20);
  fStack_1a0 = (float)in_XMM0_Qb;
  fStack_19c = (float)((uint64_t)in_XMM0_Qb >> 0x20);
  _local_a8 = in_XMM1;
  local_188._0_8_ = (**(code **)(*this_ptr + 0x4d8))(in_RCX,param_2,param_3,param_4,fVar20);
  local_188._8_8_ = extraout_XMM0_Qb;
  FUN_01e40eb0();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_78 == 0) {
    FUN_01e53c20();
    FUN_00d50b00();
    (**(code **)(MACH_HEADER._0_8_ + 0x450))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  _local_88 = blendps(ZEXT816(0),in_XMM1,2);
  lVar1 = this_ptr[0x27];
  if (lVar1 == 0) {
    bVar4 = false;
  }
  else {
    FUN_00d50b00();
    local_60 = -1;
    bVar4 = false;
    local_38 = (int64_t *)0x0;
    while( true ) {
      lVar6 = (int64_t)local_60;
      local_60 = local_60 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_60) break;
      plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar6 * 8);
      iVar5 = (**(code **)(*(int64_t *)*arg1 + 0x5f8))();
      if (iVar5 < local_11c) {
        FUN_01e53c20();
        FUN_01e40eb0();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if (local_50 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x4d0))();
        }
      }
      else {
        if (local_38 == (int64_t *)0x0) {
          plVar7 = (int64_t *)*arg1;
          uVar9 = FUN_00d50b00();
          local_158 = '\0';
          local_160 = plVar2;
          fVar8 = (float)(**(code **)(*plVar7 + 0x5d8))(uVar9,&local_160);
          if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_88._0_4_ = local_88._0_4_ + fVar8;
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        plVar7 = (int64_t *)*arg1;
        uVar9 = FUN_00d50b00();
        local_148 = '\0';
        local_150 = plVar2;
        local_1c8 = (**(code **)(*plVar7 + 0x5e8))(uVar9,&local_150);
        uStackY_1c0 = extraout_XMM0_Qb_00;
        if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_01e53c20();
        (**(code **)(*local_50 + 0x4d8))();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        fVar8 = ((float)local_88._4_4_ - (float)local_a8._4_4_) * g_0239011c;
        FUN_01e53c20();
        FUN_01e40eb0();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        auVar14._4_12_ = local_1c8._4_12_;
        auVar15._0_4_ = (float)local_1c8 + (float)local_88._0_4_;
        auVar15._4_12_ = auVar14._4_12_;
        auVar10._0_4_ = (uint)fVar8 & g_023945e0;
        auVar10._4_4_ = (uint)((float)local_88._4_4_ - (float)local_a8._4_4_) & _UNK_023945e4;
        auVar10._8_4_ = (uint)(fStack_7c - uStack_a0._4_4_) & _UNK_023945e8;
        auVar10._12_4_ = (uint)(fStack_7c - uStack_a0._4_4_) & _UNK_023945ec;
        auVar11._4_12_ = SUB1612(auVar10 | g_023945f0,4);
        auVar11._0_4_ = SUB164(auVar10 | g_023945f0,0) + fVar8;
        auVar12 = roundss(auVar11,auVar11,0xb);
        insertps(auVar15,auVar12,0x10);
        if (local_50 == (int64_t *)0x0) {
          FUN_00d50b00();
          (**(code **)(*plVar2 + 0x4c8))();
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          FUN_01e53c20();
          (**(code **)(MACH_HEADER._0_8_ + 0x4d8))();
        }
        FUN_01e53c20();
        (**(code **)(*local_50 + 0x4d0))();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar7 = (int64_t *)*arg1;
        uVar9 = FUN_00d50b00();
        local_138 = '\0';
        local_140 = plVar2;
        fVar8 = (float)(**(code **)(*plVar7 + 0x5f0))(uVar9,&local_140);
        if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (plVar2 == local_38) {
          plVar7 = local_38;
          bVar3 = bVar4;
          if ((!bVar4) && (plVar2 != (int64_t *)0x0)) {
            FUN_00d50b00();
            bVar3 = true;
          }
        }
        else {
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          plVar7 = plVar2;
          if ((bVar4) && (local_38 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar4 = bVar3;
        auVar14._0_4_ = auVar15._0_4_ + (float)local_a8._0_4_ + fVar8;
        _local_88 = blendps(_local_88,auVar14,1);
        _local_a8 = auVar14;
        local_38 = plVar7;
      }
    }
    FUN_000ad7a0();
    uVar9 = FUN_00d50b20();
    if (local_38 != (int64_t *)0x0) {
      plVar2 = (int64_t *)*arg1;
      if (this_ptr != (int64_t *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      local_130 = local_38;
      local_128 = '\0';
      fVar8 = (float)(**(code **)(*plVar2 + 0x5e0))(uVar9,&local_130);
      if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_88._0_4_ = local_88._0_4_ + fVar8;
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      bVar3 = false;
      goto LAB_0033d51e;
    }
  }
  bVar3 = true;
LAB_0033d51e:
  auVar12._4_4_ = fStack_1a4;
  auVar12._0_4_ = fVar20;
  auVar12._8_4_ = fStack_1a0;
  auVar12._12_4_ = fStack_19c;
  auVar12 = blendps(local_188,auVar12,2);
  local_1b8 = in_XMM1._0_4_;
  fStackY_1b4 = in_XMM1._4_4_;
  fStackY_1b0 = in_XMM1._8_4_;
  fStackY_1ac = in_XMM1._12_4_;
  if ((int)this_ptr[0x28] == 2) {
    fVar8 = (local_1b8 - (float)local_88._0_4_) * g_0239011c;
    auVar17._0_4_ = g_023945e0 & (uint)fVar8;
    auVar17._4_4_ = _UNK_023945e4 & (uint)fStackY_1b4;
    auVar17._8_4_ = _UNK_023945e8 & (uint)fStackY_1b0;
    auVar17._12_4_ = _UNK_023945ec & (uint)fStackY_1ac;
    auVar13._4_12_ = SUB1612(auVar17 | g_023945f0,4);
    auVar13._0_4_ = SUB164(auVar17 | g_023945f0,0) + fVar8;
    auVar16._0_12_ = ZEXT812(0);
    auVar16._12_4_ = 0;
    auVar17 = roundss(auVar16,auVar13,0xb);
    auVar18._4_12_ = auVar17._4_12_;
    auVar18._0_4_ = auVar17._0_4_ + fVar20;
    blendps(auVar12,auVar18,1);
  }
  else if ((int)this_ptr[0x28] == 1) {
    auVar19._0_4_ = (local_1b8 - (float)local_88._0_4_) + fVar20;
    auVar19._4_4_ = (fStackY_1b4 - (float)local_88._4_4_) + fStack_1a4;
    auVar19._8_4_ = (fStackY_1b0 - fStack_80) + fStack_1a0;
    auVar19._12_4_ = (fStackY_1ac - fStack_7c) + fStack_19c;
    blendps(auVar12,auVar19,0xd);
  }
  (**(code **)(*this_ptr + 0x4d0))();
  if (bVar4 && !bVar3) {
    FUN_00d50b20();
  }
  return;
}

