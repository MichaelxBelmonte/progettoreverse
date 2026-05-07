// Function: FUN_01a763e0
// Address: 01a763e0
// Size: 1799 bytes
// Class: MUChord
// === MUChord properties ===
//                   _tonic
//                   _tuning
//                   _scale
//                   _pitchClasses
//                   _audioSource
//                   _parameterSet


void FUN_01a763e0(uint64_t param_1,uint64_t param_2)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  uint64_t uVar4;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar5;
  float fVar6;
  uint64_t uVar7;
  float fVar15;
  double dVar8;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint32_t uVar16;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint32_t uVar17;
  float fVar18;
  float fVar19;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint8_t in_XMM4 [16];
  float fVar20;
  uint8_t in_XMM5 [16];
  uint8_t auVar21 [16];
  uint64_t uVar22;
  uint8_t local_88 [16];
  float local_78;
  uint32_t local_68;
  float fStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint64_t local_58;
  float fStack_50;
  float fStack_4c;
  int64_t *local_48;
  uint8_t local_40;
  int64_t *local_38;
  char local_30;
  
  fVar19 = (float)((uint64_t)param_2 >> 0x20);
  uVar17 = (uint32_t)param_2;
  (**(code **)(*this_ptr + 0x640))();
  plVar5 = local_38;
  if (local_38 == (int64_t *)0x0) {
    bVar3 = true;
    plVar5 = (int64_t *)0x0;
  }
  else {
    if (local_30 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
      if ((local_30 == '\0') || (bVar3 = false, local_38 == (int64_t *)0x0)) goto LAB_01a76441;
      FUN_00d50b20();
    }
    bVar3 = false;
  }
LAB_01a76441:
  FUN_01e3f820();
  (**(code **)(*plVar5 + 0x3f0))(8,0x11,1,1);
  FUN_01e3f820();
  uVar7 = (**(code **)(*plVar5 + 0x3d0))();
  fVar15 = (float)(uVar7 >> 0x20);
  local_88._8_4_ = uVar17;
  local_88._0_8_ = uVar7;
  local_88._12_4_ = fVar19;
  if ((int)this_ptr[0x40] == 1) {
    uVar7 = FUN_00d05530();
    fVar15 = (float)(uVar7 >> 0x20);
    uVar16 = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    local_88._12_4_ = fVar19;
    local_88._8_4_ = uVar17;
    local_88._0_8_ = uVar7;
    uVar22 = extraout_XMM0_Qb_00;
    local_68 = uVar17;
    fStack_64 = fVar19;
    uStack_60 = in_XMM1_Dc;
    uStack_5c = in_XMM1_Dd;
  }
  else {
    uVar16 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
    uVar22 = extraout_XMM0_Qb;
    local_68 = uVar17;
    fStack_64 = fVar19;
    uStack_60 = in_XMM1_Dc;
    uStack_5c = in_XMM1_Dd;
  }
  local_78 = fStack_64;
  dVar8 = (double)FUN_00e7d6f0();
  fVar19 = fStack_64;
  uVar17 = local_68;
  auVar21._4_4_ = fStack_64;
  auVar21._0_4_ = local_68;
  auVar21._8_4_ = uStack_60;
  auVar21._12_4_ = uStack_5c;
  uVar4 = extractps(auVar21,0);
  fVar18 = (float)uVar4;
  local_68 = SUB84(dVar8,0);
  fStack_64 = (float)((uint64_t)dVar8 >> 0x20);
  if (*(float *)(this_ptr + 0x23) < *(float *)((int64_t)this_ptr + 0x114) ||
      *(float *)(this_ptr + 0x23) == *(float *)((int64_t)this_ptr + 0x114)) {
    *(float *)(this_ptr + 0x3c) = fVar18;
    if (*(char *)((int64_t)this_ptr + 0x1d4) == '\0') {
      dVar8 = dVar8 - (double)this_ptr[0x3d];
      if (dVar8 < (double)this_ptr[0x3f]) {
        dVar8 = dVar8 / (double)this_ptr[0x3f];
        fVar18 = (g_02390124 - (float)dVar8 * (float)dVar8) * *(float *)(this_ptr + 0x3b);
        auVar21 = ZEXT416(g_023945e0 & (uint)fVar18) | g_023945f0;
        auVar12._4_12_ = auVar21._4_12_;
        auVar12._0_4_ = auVar21._0_4_ + fVar18;
        roundss(auVar12,auVar12,0xb);
      }
      if ((int)this_ptr[0x40] == 0) {
        local_30 = '\0';
        local_68 = uVar17;
        fStack_64 = fVar19;
        local_38 = (int64_t *)*arg1;
        FUN_01a76200(1,local_88);
      }
      else {
        local_68 = uVar17;
        fStack_64 = fVar19;
        if ((int)this_ptr[0x40] == 1) {
          local_30 = '\0';
          local_40 = 0;
          local_48 = (int64_t *)*arg1;
          local_38 = plVar5;
          FUN_01a76150(local_88,&local_48,0,dVar8,uVar7,uVar22,fVar15,uVar16);
        }
      }
    }
    else {
      local_58 = local_88._0_8_;
      auVar21 = roundss(in_XMM4,ZEXT416((uint)(g_0239011c * local_78)),9);
      fVar6 = auVar21._0_4_;
      _fStack_50 = CONCAT44(fVar6,local_88._8_4_);
      dVar2 = dVar8 - (double)this_ptr[0x3d];
      fVar18 = SUB84(dVar2,0);
      dVar1 = (double)this_ptr[0x3f];
      if (dVar2 < dVar1) {
        fVar18 = (g_02390124 - (float)(dVar2 / dVar1) * (float)(dVar2 / dVar1)) *
                 *(float *)(this_ptr + 0x3b);
        auVar21 = ZEXT416(g_023945e0 & (uint)fVar18) | g_023945f0;
        auVar10._4_12_ = auVar21._4_12_;
        auVar10._0_4_ = auVar21._0_4_ + fVar18;
        roundss(auVar10,auVar10,0xb);
      }
      if ((int)this_ptr[0x40] == 0) {
        local_30 = '\0';
        uVar7 = (uint64_t)(uint)fVar6;
        local_38 = (int64_t *)*arg1;
        FUN_01a76200(1,&local_58,SUB84(dVar1,0),dVar8,uVar7);
        fVar6 = (float)uVar7;
        dVar8 = (double)CONCAT44(fStack_64,local_68);
        uVar17 = local_68;
        fVar19 = fStack_64;
      }
      else if ((int)this_ptr[0x40] == 1) {
        local_30 = '\0';
        local_40 = 0;
        uVar7 = (uint64_t)(uint)fVar6;
        local_48 = (int64_t *)*arg1;
        local_38 = plVar5;
        FUN_01a76150(&local_58,fVar18,0,dVar8,uVar7,uVar22,fVar15,uVar16);
        fVar6 = (float)uVar7;
        dVar8 = (double)CONCAT44(fStack_64,local_68);
        uVar17 = local_68;
        fVar19 = fStack_64;
      }
      fStack_64 = fVar19;
      local_68 = uVar17;
      local_58 = CONCAT44((local_78 + fVar15) - fVar6,(uint32_t)local_58);
      dVar8 = dVar8 - (double)this_ptr[0x3e];
      if (dVar8 < (double)this_ptr[0x3f]) {
        dVar8 = dVar8 / (double)this_ptr[0x3f];
        fVar19 = (g_02390124 - (float)dVar8 * (float)dVar8) *
                 *(float *)((int64_t)this_ptr + 0x1dc);
        auVar21 = ZEXT416(g_023945e0 & (uint)fVar19) | g_023945f0;
        auVar14._4_12_ = auVar21._4_12_;
        auVar14._0_4_ = auVar21._0_4_ + fVar19;
        roundss(auVar14,auVar14,0xb);
      }
      if ((int)this_ptr[0x40] == 0) {
        local_30 = '\0';
        local_38 = (int64_t *)*arg1;
        FUN_01a76200(1,&local_58);
      }
      else if ((int)this_ptr[0x40] == 1) {
        local_30 = '\0';
        local_40 = 0;
        local_48 = (int64_t *)*arg1;
        local_38 = plVar5;
        FUN_01a76150(&local_58,&local_48,0,dVar8,uVar7,uVar22,fVar15,uVar16);
      }
    }
  }
  else {
    *(float *)(this_ptr + 0x3c) = local_78;
    if (*(char *)((int64_t)this_ptr + 0x1d4) == '\0') {
      dVar8 = dVar8 - (double)this_ptr[0x3d];
      if (dVar8 < (double)this_ptr[0x3f]) {
        dVar8 = dVar8 / (double)this_ptr[0x3f];
        fVar18 = (g_02390124 - (float)dVar8 * (float)dVar8) * *(float *)(this_ptr + 0x3b);
        auVar21 = ZEXT416(g_023945e0 & (uint)fVar18) | g_023945f0;
        auVar11._4_12_ = auVar21._4_12_;
        auVar11._0_4_ = auVar21._0_4_ + fVar18;
        roundss(auVar11,auVar11,0xb);
      }
      if ((int)this_ptr[0x40] == 0) {
        local_30 = '\0';
        local_68 = uVar17;
        fStack_64 = fVar19;
        local_38 = (int64_t *)*arg1;
        FUN_01a76200(0,local_88);
      }
      else {
        local_68 = uVar17;
        fStack_64 = fVar19;
        if ((int)this_ptr[0x40] == 1) {
          local_30 = '\0';
          local_40 = 0;
          local_48 = (int64_t *)*arg1;
          local_38 = plVar5;
          FUN_01a76150(local_88,&local_48,0,dVar8,uVar7,uVar22,fVar15,uVar16);
        }
      }
    }
    else {
      local_58 = local_88._0_8_;
      auVar21 = roundss(in_XMM5,ZEXT416((uint)(g_0239011c * fVar18)),9);
      fVar20 = auVar21._0_4_;
      _fStack_50 = CONCAT44(local_88._12_4_,fVar20);
      dVar1 = dVar8 - (double)this_ptr[0x3d];
      fVar6 = SUB84(dVar1,0);
      if (dVar1 < (double)this_ptr[0x3f]) {
        fVar6 = (float)(dVar1 / (double)this_ptr[0x3f]);
        fVar6 = (g_02390124 - fVar6 * fVar6) * *(float *)(this_ptr + 0x3b);
        auVar21 = ZEXT416(g_023945e0 & (uint)fVar6) | g_023945f0;
        auVar9._4_12_ = auVar21._4_12_;
        auVar9._0_4_ = auVar21._0_4_ + fVar6;
        roundss(auVar9,auVar9,0xb);
      }
      if ((int)this_ptr[0x40] == 0) {
        local_30 = '\0';
        local_78 = fVar18;
        local_38 = (int64_t *)*arg1;
        FUN_01a76200(0,&local_58);
        dVar8 = (double)CONCAT44(fStack_64,local_68);
        fVar18 = local_78;
        fVar15 = fVar20;
        uVar17 = local_68;
        fVar19 = fStack_64;
      }
      else if ((int)this_ptr[0x40] == 1) {
        local_30 = '\0';
        local_40 = 0;
        local_78 = fVar18;
        local_48 = (int64_t *)*arg1;
        local_38 = plVar5;
        FUN_01a76150(&local_58,fVar6,0,dVar8,uVar7,uVar22,fVar20,uVar16);
        dVar8 = (double)CONCAT44(fStack_64,local_68);
        fVar18 = local_78;
        fVar15 = fVar20;
        uVar17 = local_68;
        fVar19 = fStack_64;
      }
      fStack_64 = fVar19;
      local_68 = uVar17;
      local_58 = CONCAT44(local_58._4_4_,((float)uVar7 + fVar18) - fVar20);
      dVar8 = dVar8 - (double)this_ptr[0x3e];
      if (dVar8 < (double)this_ptr[0x3f]) {
        dVar8 = dVar8 / (double)this_ptr[0x3f];
        fVar19 = (g_02390124 - (float)dVar8 * (float)dVar8) *
                 *(float *)((int64_t)this_ptr + 0x1dc);
        auVar21 = ZEXT416(g_023945e0 & (uint)fVar19) | g_023945f0;
        auVar13._4_12_ = auVar21._4_12_;
        auVar13._0_4_ = auVar21._0_4_ + fVar19;
        roundss(auVar13,auVar13,0xb);
      }
      if ((int)this_ptr[0x40] == 0) {
        local_30 = '\0';
        local_38 = (int64_t *)*arg1;
        FUN_01a76200(0,&local_58);
      }
      else if ((int)this_ptr[0x40] == 1) {
        local_30 = '\0';
        local_40 = 0;
        local_48 = (int64_t *)*arg1;
        local_38 = plVar5;
        FUN_01a76150(&local_58,&local_48,0,dVar8,uVar7,uVar22,fVar15,uVar16);
      }
    }
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  return;
}

