// Function: FUN_01b459e0
// Address: 01b459e0
// Size: 1164 bytes
// Class: MUScaleStretchTuningCtrl
// String references:
//   "C%I"

void FUN_01b459e0(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  int iVar2;
  int64_t lVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  void*arg1;
  int64_t *this_ptr;
  uint uVar7;
  uint64_t uVar8;
  uint64_t in_XMM0_Qb;
  uint8_t auVar9 [16];
  uint64_t extraout_XMM0_Qb;
  float fVar10;
  uint64_t uVar11;
  uint64_t in_XMM1_Qb;
  uint32_t uVar15;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  float local_f8;
  float fStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  float fStack_e4;
  int64_t *local_c8;
  char local_c0;
  float local_b8;
  uint64_t local_78;
  uint64_t uStack_70;
  void*local_68;
  uint32_t local_60;
  uint local_5c;
  int64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  uVar15 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  uStack_70 = in_XMM0_Qb;
  local_78 = param_1;
  uVar8 = param_2;
  FUN_01e3f820();
  uVar11 = uVar8;
  FUN_01e3f820();
  FUN_01d48370();
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  FUN_01d48b40();
  FUN_01cfc3c0();
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  FUN_01d488d0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_c8 + 0x370))();
  FUN_01d44d80();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_58 = lVar3;
  FUN_01d48a10();
  fVar10 = (float)uVar11 / g_0241d550;
  auVar12._4_12_ = local_78._4_12_;
  auVar12._0_4_ = (float)param_1 / fVar10;
  uVar4 = FUN_00e7d780(auVar12._0_8_);
  local_b8 = (float)param_2;
  auVar18._0_4_ = ((float)param_1 + local_b8) / fVar10;
  auVar18._4_12_ = auVar12._4_12_;
  iVar5 = FUN_00e7d780(auVar18._0_8_);
  do {
    uVar7 = uVar4;
    uVar4 = uVar7 - 1;
  } while (0x28f5c28 < (uVar7 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar7 * 0x40000000));
  do {
    iVar2 = iVar5;
    iVar5 = iVar2 + 1;
  } while (0x28f5c28 < (iVar2 * -0x3d70a3d7 + 0x51eb850U >> 2 | iVar2 * 0x40000000));
  if ((int)uVar7 <= iVar2) {
    fStack_e4 = (float)((uint64_t)uVar8 >> 0x20);
    auVar9._4_4_ = fStack_e4;
    auVar9._0_4_ = fStack_e4;
    auVar9._8_4_ = uVar15;
    auVar9._12_4_ = uVar15;
    do {
      if (0 < (int)uVar7) {
        auVar12 = ZEXT416((uint)((float)(int)uVar7 * fVar10) & g_023945e0) | g_023945f0;
        auVar13._4_12_ = auVar12._4_12_;
        auVar13._0_4_ = auVar12._0_4_ + (float)(int)uVar7 * fVar10;
        auVar12 = roundss(ZEXT816(0),auVar13,0xb);
        uVar6 = (uint64_t)((int)uVar7 % 0x4b0 == 0);
        auVar14._4_12_ = auVar9._4_12_;
        auVar14._0_4_ = fStack_e4 - *(float *)(&g_0241d558 + uVar6 * 4);
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))(uVar6,auVar14._0_8_,auVar12._0_4_);
        if ((uVar7 - 1 < 0x257f) && ((int)uVar7 % 0x4b0 == 0)) {
          local_5c = (uVar7 & 0xffff) / 0x4b0;
          local_60 = 1;
          local_68 = &g_024cc6f0;
          FUN_00d8cb40(&g_024cc6f0,&local_68);
          lVar3 = local_40;
          if ((local_38 == '\0') &&
             (((local_40 != 0 && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)))) {
            FUN_00d50b20();
          }
          uVar8 = FUN_01d43d10();
          local_f8 = (float)uVar8;
          fStack_f4 = (float)((uint64_t)uVar8 >> 0x20);
          uStack_f0 = (uint)extraout_XMM0_Qb;
          uStack_ec = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
          auVar16._0_4_ = (uint)(local_f8 * g_0239011c) & g_023945e0;
          auVar16._4_4_ = (uint)fStack_f4 & _UNK_023945e4;
          auVar16._8_4_ = uStack_f0 & _UNK_023945e8;
          auVar16._12_4_ = uStack_ec & _UNK_023945ec;
          auVar17._4_12_ = SUB1612(auVar16 | g_023945f0,4);
          auVar17._0_4_ = SUB164(auVar16 | g_023945f0,0) + local_f8 * g_0239011c;
          auVar18 = roundss(auVar17,auVar17,0xb);
          auVar1._4_4_ = fStack_e4;
          auVar1._0_4_ = auVar14._0_4_ - fStack_f4;
          auVar1._8_4_ = uVar15;
          auVar1._12_4_ = uVar15;
          auVar12 = insertps(ZEXT416((uint)(auVar12._0_4_ - auVar18._0_4_)),auVar1,0x10);
          (**(code **)(*(int64_t *)*arg1 + 0x3f8))(auVar12._0_8_,2);
          (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
      }
      uVar7 = uVar7 + 100;
    } while ((int)uVar7 <= iVar2);
  }
  FUN_01d48390();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return;
}

