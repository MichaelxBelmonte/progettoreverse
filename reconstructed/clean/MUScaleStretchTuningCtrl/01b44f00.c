// Function: FUN_01b44f00
// Address: 01b44f00
// Size: 2010 bytes
// Class: MUScaleStretchTuningCtrl
// String references:
//   "%I"
//   "+%@"

void FUN_01b44f00(uint64_t param_1,uint64_t param_2)

{
  float fVar1;
  uint8_t auVar2 [16];
  void*puVar3;
  int iVar4;
  int iVar5;
  void*puVar6;
  int iVar7;
  void*arg1;
  int64_t *this_ptr;
  int iVar8;
  float fVar9;
  float extraout_XMM0_Db;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint64_t uVar10;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint64_t uVar16;
  uint64_t in_XMM1_Qb;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  float fVar20;
  float fVar21;
  uint8_t auVar22 [16];
  float fStack_154;
  uint32_t uStack_150;
  uint uStack_14c;
  int64_t *local_130;
  char local_128;
  float local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  float fStack_a4;
  uint32_t uStack_9c;
  uint64_t local_78;
  void*local_68;
  uint local_60;
  void*local_58;
  char local_50;
  void*local_48;
  uint local_40;
  int local_3c;
  int local_38;
  float local_34;
  
  uVar16 = param_2;
  uVar10 = in_XMM1_Qb;
  FUN_01e3f820();
  fStack_154 = (float)((uint64_t)uVar16 >> 0x20);
  uStack_150 = (uint32_t)uVar10;
  uStack_14c = (uint)((uint64_t)uVar10 >> 0x20);
  local_34 = *(float *)(this_ptr + 0x2a);
  FUN_01d48370();
  fStack_a4 = (float)((uint64_t)param_2 >> 0x20);
  uStack_9c = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  FUN_01d48b40();
  FUN_01cfc3c0();
  puVar3 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = local_60 & 0xffffff00;
  }
  FUN_01d488d0();
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_130 + 0x370))();
  FUN_01d44d80();
  puVar3 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 != (void*)0x0) {
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = local_60 & 0xffffff00;
  }
  if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48a10();
  fVar20 = fStack_154 / (local_34 + local_34);
  local_34 = 1.4013e-44;
  local_38 = 10;
  if (g_023908ec * fVar20 <= g_023908d8) {
    fStack_a4 = 0.0;
    uStack_9c = 0;
    local_38 = 0x32;
    if (g_02394240 * fVar20 <= g_023908d8) {
      fStack_a4 = 0.0;
      uStack_9c = 0;
      local_38 = 100;
      if (g_023908e0 * fVar20 <= g_023908d8) {
        fStack_a4 = 0.0;
        uStack_9c = 0;
        local_38 = 200;
        if (g_02390d38 * fVar20 <= g_023908d8) {
          fStack_a4 = 0.0;
          uStack_9c = 0;
          local_38 = 400;
          if (g_02411264 * fVar20 <= g_023908d8) {
            fStack_a4 = 0.0;
            uStack_9c = 0;
            local_38 = 800;
            if (g_0241b65c * fVar20 <= g_023908d8) {
              local_38 = 0x640;
            }
          }
        }
      }
    }
  }
  if (((((g_023908ec * fVar20 <= g_023942a8) &&
        (local_34 = 7.00649e-44, g_02394240 * fVar20 <= g_023942a8)) &&
       (local_34 = 1.4013e-43, g_023908e0 * fVar20 <= g_023942a8)) &&
      ((local_34 = 2.8026e-43, g_02390d38 * fVar20 <= g_023942a8 &&
       (local_34 = 5.60519e-43, g_02411264 * fVar20 <= g_023942a8)))) &&
     (local_34 = 1.12104e-42, g_0241b65c * fVar20 <= g_023942a8)) {
    local_34 = 2.24208e-42;
  }
  FUN_01e3f820();
  auVar19._4_4_ = extraout_XMM0_Db;
  auVar19._0_4_ = extraout_XMM0_Db;
  auVar19._8_4_ = extraout_XMM0_Dd;
  auVar19._12_4_ = extraout_XMM0_Dd;
  auVar11._4_12_ = auVar19._4_12_;
  auVar11._0_4_ = extraout_XMM0_Db / fVar20;
  iVar4 = FUN_00e7d780(auVar11._0_8_);
  auVar12._4_4_ = fStack_a4;
  auVar12._0_4_ = fStack_a4;
  auVar12._8_4_ = uStack_9c;
  auVar12._12_4_ = uStack_9c;
  auVar13._4_12_ = auVar12._4_12_;
  auVar13._0_4_ = fStack_a4 / fVar20 + extraout_XMM0_Db;
  iVar5 = FUN_00e7d780(auVar13._0_8_);
  if (iVar4 <= iVar5) {
    iVar8 = -iVar4;
    do {
      iVar7 = iVar4 % (int)local_34;
      if (0 < iVar4) {
        fVar1 = *(float *)(&g_0241d558 + (uint64_t)(iVar7 == 0) * 4);
        fVar9 = fVar20 * (float)iVar4;
        auVar17._0_4_ = (uint)fVar9 & g_023945e0;
        auVar17._4_4_ = (uint)fStack_154 & _UNK_023945e4;
        auVar17._8_4_ = uStack_14c & _UNK_023945e8;
        auVar17._12_4_ = uStack_14c & _UNK_023945ec;
        auVar18._4_12_ = SUB1612(auVar17 | g_023945f0,4);
        auVar18._0_4_ = SUB164(auVar17 | g_023945f0,0) + fVar9;
        auVar19 = roundss(auVar18,auVar18,0xb);
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        auVar2._8_4_ = uStack_150;
        auVar2._0_8_ = uVar16;
        auVar2._12_4_ = uStack_14c;
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        if ((iVar7 == 0) && (fVar9 = *(float *)(this_ptr + 0x2a), (float)iVar4 < fVar9 + fVar9)) {
          iVar7 = (int)fVar9 + iVar8;
          local_40 = 1;
          local_48 = &g_024cc6f0;
          local_3c = iVar7;
          uVar10 = FUN_00d8cb40();
          puVar6 = local_68;
          if (((char)local_60 == '\0') && (local_68 != (void*)0x0)) {
            uVar10 = FUN_00d50b00();
            if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
              uVar10 = FUN_00d50b20();
            }
          }
          if (0 < iVar7) {
            local_60 = 1;
            local_68 = &g_024c5048;
            local_50 = 0;
            if (puVar6 != (void*)0x0) {
              uVar10 = FUN_00d50b00();
            }
            local_58 = puVar6;
            local_50 = '\x01';
            FUN_00d8cb40(uVar10,&local_68);
            local_78 = local_48;
            if (puVar6 == local_48) {
              local_78 = puVar6;
LAB_01b454c1:
              if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if ((char)local_40 == '\0') {
                if (local_48 != (void*)0x0) {
                  FUN_00d50b00();
                }
                if (puVar6 != (void*)0x0) {
                  FUN_00d50b20();
                }
                goto LAB_01b454c1;
              }
              if (puVar6 != (void*)0x0) {
                FUN_00d50b20();
              }
              local_40 = local_40 & 0xffffff00;
            }
            local_68 = &g_024c5048;
            puVar6 = local_78;
            if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          uVar10 = FUN_01d43d10();
          fVar21 = fVar1 + g_02390d34;
          local_78._0_4_ = (float)uVar10;
          local_78._4_4_ = (float)((uint64_t)uVar10 >> 0x20);
          local_78._4_4_ = local_78._4_4_ * g_02390118;
          if ((int)fVar9 == iVar4) {
            (**(code **)(*(int64_t *)*arg1 + 0x3e0))(fVar21 + (float)local_78 + g_02390d34);
          }
          local_d8 = auVar19._0_4_;
          uStack_d4 = auVar19._4_4_;
          uStack_d0 = auVar19._8_4_;
          uStack_cc = auVar19._12_4_;
          local_d8 = local_d8 + local_78._4_4_;
          auVar14._0_4_ = (uint)local_d8 & g_023945e0;
          auVar14._4_4_ = uStack_d4 & _UNK_023945e4;
          auVar14._8_4_ = uStack_d0 & _UNK_023945e8;
          auVar14._12_4_ = uStack_cc & _UNK_023945ec;
          auVar15._4_12_ = SUB1612(auVar14 | g_023945f0,4);
          auVar15._0_4_ = SUB164(auVar14 | g_023945f0,0) + local_d8;
          auVar19 = roundss(auVar15,auVar15,0xb);
          auVar19 = insertps(ZEXT416((uint)fVar21),auVar19,0x10);
          (**(code **)(*(int64_t *)*arg1 + 0x3f8))();
          auVar22._0_4_ = (((float)uVar16 - fVar1) - (float)local_78) + g_023b1608;
          auVar22._4_12_ = auVar2._4_12_;
          auVar19 = blendps(auVar19,auVar22,1);
          (**(code **)(*(int64_t *)*arg1 + 0x3f8))(auVar19._0_8_,2);
          if (puVar6 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
      }
      iVar4 = iVar4 + local_38;
      iVar8 = iVar8 - local_38;
    } while (iVar4 <= iVar5);
  }
  FUN_01d48390();
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

