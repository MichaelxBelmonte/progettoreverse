// Function: FUN_01a22d80
// Address: 01a22d80
// Size: 3667 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01a22fb1) */
/* WARNING: Removing unreachable block (ram,0x01a22fbd) */
/* WARNING: Removing unreachable block (ram,0x01a22dce) */
/* WARNING: Removing unreachable block (ram,0x01a22dda) */
/* WARNING: Removing unreachable block (ram,0x01a234b0) */
/* WARNING: Removing unreachable block (ram,0x01a234bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a22d80(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong unaff_RBX;
  longlong *plVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float extraout_XMM0_Db;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar11 [16];
  undefined4 extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb_04;
  float fVar12;
  longlong lVar13;
  undefined4 uVar16;
  undefined8 in_XMM1_Qb;
  undefined8 uVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar18;
  float fVar19;
  float local_1e8;
  float fStack_1e4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_168;
  char local_160;
  float local_154;
  float local_150;
  undefined4 local_14c;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  float local_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a0;
  float local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  char local_80;
  ulonglong local_78;
  longlong *local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  local_b8 = (float)param_1;
  fStack_b4 = (float)((ulonglong)param_1 >> 0x20);
  uStack_b0 = (undefined4)in_XMM0_Qb;
  uStack_ac = (undefined4)((ulonglong)in_XMM0_Qb >> 0x20);
  local_98 = (float)param_2;
  uStack_94 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_90 = (undefined4)in_XMM1_Qb;
  uStack_8c = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  FUN_01d96f70();
  FUN_01d48370();
  uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
  local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1));
  if (unaff_RDI[0x3b] == 0) {
LAB_01a22eee:
    local_60 = (longlong *)0x0;
    uVar4 = 0;
  }
  else {
    FUN_01bcc520();
    local_60 = local_58;
    if (local_58 == (longlong *)0x0) goto LAB_01a22eee;
    if (((local_50 == '\0') && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != (longlong *)0x0))
    {
      FUN_00d50b20();
    }
    plVar6 = (longlong *)(unaff_RBX & 0xffffffffffffff00);
    local_78 = local_78 & 0xffffffff00000000;
    cVar3 = FUN_01bf0b60();
    if (cVar3 != '\0') {
      local_78 = local_78 & 0xffffffff00000000;
      FUN_01d48370();
      plVar6 = (longlong *)*unaff_RSI;
      FUN_01d97870();
      (**(code **)(*local_58 + 0x4d8))();
      (**(code **)(*plVar6 + 0x390))();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d97870();
      plVar6 = local_58;
      local_120 = 0;
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_120 = '\x01';
      local_128 = plVar6;
      local_78 = FUN_01e437f0();
      if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
      (**(code **)(*(longlong *)unaff_RDI[0x3b] + 0x930))();
      FUN_01d48390();
    }
    uVar4 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
    local_78 = local_78 & 0xffffffff00000000;
  }
  FUN_01d48b40();
  local_a0 = uVar4;
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_88 + 0x3a0))();
  local_118 = local_58;
  local_110 = 0;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_110 = '\x01';
  FUN_01d488d0();
  if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d97e80();
  plVar6 = local_58;
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_01d97e80();
    FUN_01e3f820();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (((((*(float *)(unaff_RDI + 0x38) != (float)DAT_023dccec) ||
        (NAN(*(float *)(unaff_RDI + 0x38)) || NAN((float)DAT_023dccec))) ||
       (*(float *)((longlong)unaff_RDI + 0x1c4) != DAT_023dccec._4_4_)) ||
      ((NAN(*(float *)((longlong)unaff_RDI + 0x1c4)) || NAN(DAT_023dccec._4_4_) ||
       (*(float *)(unaff_RDI + 0x39) != (float)DAT_023dccf4)))) ||
     (NAN(*(float *)(unaff_RDI + 0x39)) || NAN((float)DAT_023dccf4))) {
LAB_01a2313f:
    lVar7 = unaff_RDI[0x38];
    lVar13 = unaff_RDI[0x39];
    uVar4 = 0;
    fVar8 = (float)((ulonglong)lVar7 >> 0x20);
    if ((DAT_02390d34 < (DAT_02390d00 + (float)lVar7 + (float)lVar13) - (float)lVar7) &&
       (DAT_02390d34 < (fVar8 + (float)((ulonglong)lVar13 >> 0x20) + DAT_02390d00) - fVar8)) {
      if (unaff_RDI[0x3a] == 0) {
        FUN_01d39800(lVar7,lVar13,DAT_02390124);
        plVar6 = (longlong *)unaff_RDI[0x3a];
        plVar5 = plVar6;
        if (plVar6 != local_58) {
          if (local_50 == '\0') {
            if (local_58 == (longlong *)0x0) {
              plVar5 = (longlong *)0x0;
              goto LAB_01a231ce;
            }
            FUN_00d50b00();
            plVar6 = (longlong *)unaff_RDI[0x3a];
            unaff_RDI[0x3a] = (longlong)local_58;
            plVar5 = local_58;
          }
          else {
            local_50 = '\0';
            plVar5 = local_58;
LAB_01a231ce:
            unaff_RDI[0x3a] = (longlong)plVar5;
          }
          if (plVar6 != (longlong *)0x0) {
            FUN_00d50b20();
            plVar5 = local_58;
          }
        }
        if ((local_50 != '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*unaff_RDI + 0x640))();
      (**(code **)(*local_88 + 0x390))();
      if (local_50 == '\0') {
        if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d97870();
      uVar9 = FUN_01e3f820();
      local_98 = (float)uVar9;
      uStack_94 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_90 = (undefined4)extraout_XMM0_Qb;
      uStack_8c = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
      local_b8 = (float)lVar13;
      fStack_b4 = (float)((ulonglong)lVar13 >> 0x20);
      uStack_b0 = (undefined4)uVar4;
      uStack_ac = (undefined4)((ulonglong)uVar4 >> 0x20);
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d97870();
      local_108 = local_58;
      local_100 = 0;
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_100 = '\x01';
      uVar4 = FUN_01e437f0();
      local_98 = (float)uVar4;
      uStack_94 = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_90 = (undefined4)extraout_XMM0_Qb_00;
      uStack_8c = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
      FUN_01cfcdc0();
      local_f8 = local_58;
      local_f0 = 0;
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_f0 = '\x01';
      FUN_01d488d0();
      if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar6 = (longlong *)*unaff_RSI;
      local_140 = 0;
      lVar7 = unaff_RDI[0x3a];
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_140 = '\x01';
      local_148 = lVar7;
      (**(code **)(*plVar6 + 0x3a0))();
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d488d0();
      plVar6 = (longlong *)*unaff_RSI;
      local_130 = 0;
      local_138 = unaff_RDI[0x3a];
      if (local_138 != 0) {
        FUN_00d50b00();
      }
      local_130 = '\x01';
      (**(code **)(*plVar6 + 0x3a8))();
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  else if ((*(float *)((longlong)unaff_RDI + 0x1cc) != DAT_023dccf4._4_4_) ||
          (NAN(*(float *)((longlong)unaff_RDI + 0x1cc)) || NAN(DAT_023dccf4._4_4_)))
  goto LAB_01a2313f;
  FUN_01d48390();
  if ((char)local_78 != '\0') {
    return;
  }
  cVar3 = FUN_01bf0b60();
  if (cVar3 == '\0') goto LAB_01a23bab;
  uVar4 = FUN_01bf1450();
  uVar9 = 0;
  uVar17 = 0;
  local_98 = (float)uVar4;
  uStack_94 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_90 = (undefined4)extraout_XMM0_Qb_01;
  uStack_8c = (undefined4)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
  if (0.0 < local_98) {
    FUN_01d97870();
    uVar4 = (**(code **)(*local_58 + 0x4d8))();
    local_b8 = (float)uVar4;
    fStack_b4 = (float)((ulonglong)uVar4 >> 0x20);
    uStack_b0 = (undefined4)extraout_XMM0_Qb_02;
    uStack_ac = (undefined4)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar4 = FUN_01e3f820();
    uStack_1a0 = (undefined4)extraout_XMM0_Qb_03;
    uStack_19c = (undefined4)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
    uVar10 = (**(code **)(*unaff_RDI + 0x640))();
    plVar6 = local_88;
    local_168 = DAT_026fe4b8;
    if (DAT_026fe4b8 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_160 = '\x01';
    (**(code **)(*plVar6 + 0x3b0))(uVar10,&local_168);
    local_e8 = local_58;
    local_e0 = 0;
    if (local_50 == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_e0 = '\x01';
    FUN_01d488d0();
    if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar2._4_4_ = uStack_94;
    auVar2._0_4_ = local_98;
    auVar2._8_4_ = uStack_90;
    auVar2._12_4_ = uStack_8c;
    auVar1._4_4_ = fStack_b4;
    auVar1._0_4_ = local_b8;
    auVar1._8_4_ = uStack_b0;
    auVar1._12_4_ = uStack_ac;
    auVar14._4_12_ = auVar1._4_12_;
    auVar14._0_4_ = local_b8 - local_98;
    auVar11._8_4_ = uStack_1a0;
    auVar11._0_8_ = uVar4;
    auVar11._12_4_ = uStack_19c;
    auVar11 = blendps(auVar11,auVar14,1);
    auVar15._8_8_ = uVar17;
    auVar15._0_8_ = uVar9;
    auVar15 = blendps(auVar15,auVar2,1);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3b0))(auVar11._0_8_,auVar15._0_8_);
  }
  cVar3 = FUN_01bf2140();
  if (cVar3 == '\0') goto LAB_01a23bab;
  FUN_01bf2150();
  plVar6 = local_58;
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) goto LAB_01a23bab;
  FUN_01d97870();
  local_d8 = local_58;
  local_d0 = 0;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_d0 = '\x01';
  FUN_01e437f0();
  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d97870();
  fVar8 = (float)FUN_01cf5cf0();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_14c = FUN_01d48a00();
  FUN_01bf2650();
  FUN_01d489d0();
  FUN_01bf2350();
  local_c8 = local_58;
  local_c0 = 0;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_c0 = '\x01';
  FUN_01d488d0();
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  fVar12 = extraout_XMM0_Db;
  fVar19 = extraout_XMM0_Db;
  uVar16 = extraout_XMM0_Dd;
  uVar18 = extraout_XMM0_Dd;
  (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
  FUN_01be8270();
  uVar4 = (**(code **)(*local_58 + 0x4d8))();
  local_98 = (float)uVar4;
  uStack_94 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_90 = (undefined4)extraout_XMM0_Qb_04;
  uStack_8c = (undefined4)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
  local_b8 = fVar12;
  fStack_b4 = fVar19;
  uStack_b0 = uVar16;
  uStack_ac = uVar18;
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d97870();
  uVar4 = FUN_01e3f820();
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01bf2150();
  plVar6 = local_58;
  if (local_50 == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a23978;
    }
  }
  else if (local_58 != (longlong *)0x0) {
LAB_01a23978:
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_48 = plVar6;
    local_38 = 0;
    local_40 = 0;
    if (0 < *(int *)((longlong)plVar6 + 0xc)) {
      local_1e8 = (float)uVar4;
      fStack_1e4 = (float)((ulonglong)uVar4 >> 0x20);
      fVar12 = fVar12 + local_1e8 + DAT_02390d00;
      local_b8 = fStack_1e4 + DAT_02390d2c;
      lVar7 = 0;
      do {
        local_58 = *(longlong **)(plVar6[2] + lVar7 * 8);
        FUN_01be80e0();
        plVar5 = local_88;
        FUN_00d45bc0();
        local_98 = (float)(**(code **)(*plVar5 + 0x390))();
        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        fVar19 = local_98 - fVar8;
        if ((local_1e8 < fVar19) && (fVar19 < fVar12)) {
          local_98 = fVar19;
          (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
          local_154 = local_98 + DAT_023b1614;
          (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
          local_150 = local_98 + DAT_02390d2c;
          (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
          (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        }
        lVar7 = lVar7 + 1;
        local_40 = CONCAT44(local_40._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)((longlong)plVar6 + 0xc));
    }
    FUN_00136b80();
    FUN_00d50b20();
  }
  FUN_01d489d0();
  (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
LAB_01a23bab:
  if ((char)local_78 == '\0') {
    FUN_00d50b20();
  }
  return;
}


