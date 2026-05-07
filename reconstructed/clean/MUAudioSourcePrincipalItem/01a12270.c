// Function: FUN_01a12270
// Address: 01a12270
// Size: 644 bytes
// Class: MUAudioSourcePrincipalItem

void FUN_01a12270(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  int64_t *this_ptr;
  int64_t *plVar2;
  float fVar3;
  uint64_t uVar4;
  double dVar5;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  float fVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t in_XMM1_Qb;
  uint64_t uVar17;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  float local_98;
  float local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  float local_58;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  uint64_t uVar13;
  
  plVar2 = (int64_t *)this_ptr[0x48];
  uVar10 = param_2;
  if (plVar2 == (int64_t *)0x0) {
    FUN_01a18460();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 != (int64_t *)0x0) {
      FUN_01a18460();
      (**(code **)(*local_48 + 0x958))();
      if (local_38 != (int64_t *)0x0) {
        plVar2 = local_38;
        if (local_30 == '\0') {
          FUN_00d50b00();
        }
        else {
          local_30 = '\0';
        }
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
  }
  FUN_01d919a0();
  if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01cf3f40();
  if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x4d8))();
  uVar11 = uVar10;
  uVar17 = in_XMM1_Qb;
  uVar4 = FUN_01cf5cf0();
  (**(code **)(*this_ptr + 0xb00))();
  uVar12 = uVar11;
  (**(code **)(*local_38 + 0x4d8))();
  uVar13 = uVar12;
  fVar3 = (float)(**(code **)(*this_ptr + 0xb00))();
  fVar9 = (float)uVar13;
  (**(code **)(*this_ptr + 0xb00))();
  local_88 = (float)uVar12;
  uStack_84 = (uint)((uint64_t)uVar12 >> 0x20);
  uStack_80 = (uint)uVar17;
  uStack_7c = (uint)((uint64_t)uVar17 >> 0x20);
  local_98 = (float)uVar11;
  local_58 = (float)param_2;
  local_58 = (local_88 * local_98) / local_58;
  auVar6._0_4_ = g_023945e0 & (uint)local_58;
  auVar6._4_4_ = _UNK_023945e4 & uStack_84;
  auVar6._8_4_ = _UNK_023945e8 & uStack_80;
  auVar6._12_4_ = _UNK_023945ec & uStack_7c;
  auVar7._4_12_ = SUB1612(auVar6 | g_023945f0,4);
  auVar7._0_4_ = SUB164(auVar6 | g_023945f0,0) + local_58;
  auVar14._0_12_ = ZEXT812(0);
  auVar14._12_4_ = 0;
  auVar15 = roundss(auVar14,auVar7,0xb);
  auVar1._8_8_ = in_XMM1_Qb;
  auVar1._0_8_ = uVar10;
  auVar8 = blendps(auVar1,auVar15,1);
  (**(code **)(*local_38 + 0x4e8))(auVar8._0_8_);
  auVar8._8_8_ = in_XMM0_Qb;
  auVar8._0_8_ = param_1;
  auVar16._4_12_ = auVar8._4_12_;
  local_58 = auVar15._0_4_;
  auVar16._0_4_ = (((float)param_1 - fVar3) / fVar9) * local_58;
  auVar15._8_8_ = extraout_XMM0_Qb;
  auVar15._0_8_ = uVar4;
  auVar8 = blendps(auVar15,auVar16,1);
  FUN_01cf5c80(auVar8._0_8_);
  dVar5 = (double)(**(code **)(*plVar2 + 0x378))();
  (**(code **)(*plVar2 + 0x3a0))((double)local_58 / dVar5);
  (**(code **)(*local_38 + 0x620))();
  FUN_00d50b20();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}

