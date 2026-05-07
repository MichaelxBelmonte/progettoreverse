// Function: FUN_01b17610
// Address: 01b17610
// Size: 521 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_01b17610(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  void *pvVar3;
  int64_t lVar4;
  void* in_ECX;
  int64_t *this_ptr;
  int64_t *plVar5;
  float fVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  float local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  float local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  int64_t *local_38;
  char local_30;
  
  FUN_01ad3cb0();
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_38 == (int64_t *)0x0) {
    return;
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  plVar5 = local_38;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar5 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x3a0))();
  uVar7 = (**(code **)(*this_ptr + 0x918))();
  uVar8 = FUN_01a1da00();
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    local_38 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*local_38 + 0x3a0))();
  uVar9 = (**(code **)(*this_ptr + 0x918))();
  uVar10 = FUN_01a1da00();
  local_58 = (float)uVar8;
  uStack_54 = (uint)((uint64_t)uVar8 >> 0x20);
  uStack_50 = (uint)extraout_XMM0_Qb_00;
  uStack_4c = (uint)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  auVar16._0_4_ = (uint)(local_58 * g_02390438) & g_023945e0;
  auVar16._4_4_ = uStack_54 & _UNK_023945e4;
  auVar16._8_4_ = uStack_50 & _UNK_023945e8;
  auVar16._12_4_ = uStack_4c & _UNK_023945ec;
  auVar19._4_12_ = SUB1612(auVar16 | ZEXT416(g_02394dc8),4);
  auVar19._0_4_ = SUB164(auVar16 | ZEXT416(g_02394dc8),0) + local_58 * g_02390438;
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  auVar16 = roundss(auVar15,auVar19,0xb);
  fVar6 = g_02392fd8;
  if (auVar16._0_4_ <= g_02392fd8) {
    fVar6 = auVar16._0_4_;
  }
  auVar16 = ZEXT416((uint)((float)((uint)(fVar6 * g_0239011c) & g_023945e0 | g_02394dc8) +
                          fVar6 * g_0239011c));
  auVar16 = roundss(auVar16,auVar16,0xb);
  local_68 = (float)uVar7;
  uStack_64 = (uint)((uint64_t)uVar7 >> 0x20);
  uStack_60 = (uint)extraout_XMM0_Qb;
  uStack_5c = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
  local_68 = local_68 - auVar16._0_4_;
  auVar17._0_4_ = (uint)local_68 & g_023945e0;
  auVar17._4_4_ = uStack_64 & _UNK_023945e4;
  auVar17._8_4_ = uStack_60 & _UNK_023945e8;
  auVar17._12_4_ = uStack_5c & _UNK_023945ec;
  auVar18._4_12_ = SUB1612(auVar17 | ZEXT416(g_02394dc8),4);
  auVar18._0_4_ = SUB164(auVar17 | ZEXT416(g_02394dc8),0) + local_68;
  auVar19 = roundss(auVar18,auVar18,0xb);
  fVar6 = (float)uVar10 * g_02390438;
  auVar20._0_4_ = (uint)fVar6 & g_023945e0;
  auVar20._4_4_ = (uint)((uint64_t)uVar10 >> 0x20) & _UNK_023945e4;
  auVar20._8_4_ = (uint)extraout_XMM0_Qb_02 & _UNK_023945e8;
  auVar20._12_4_ = (uint)((uint64_t)extraout_XMM0_Qb_02 >> 0x20) & _UNK_023945ec;
  auVar21._4_12_ = SUB1612(auVar20 | ZEXT416(g_02394dc8),4);
  auVar21._0_4_ = SUB164(auVar20 | ZEXT416(g_02394dc8),0) + fVar6;
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  auVar16 = roundss(auVar11,auVar21,0xb);
  fVar6 = g_02392fd8;
  if (auVar16._0_4_ <= g_02392fd8) {
    fVar6 = auVar16._0_4_;
  }
  auVar16 = ZEXT416((uint)((float)((uint)(fVar6 * g_0239011c) & g_023945e0 | g_02394dc8) +
                          fVar6 * g_0239011c));
  auVar16 = roundss(auVar16,auVar16,0xb);
  fVar6 = (float)uVar9 + auVar16._0_4_;
  auVar13._0_4_ = g_023945e0 & (uint)fVar6;
  auVar13._4_4_ = _UNK_023945e4 & (uint)((uint64_t)uVar9 >> 0x20);
  auVar13._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_01;
  auVar13._12_4_ = _UNK_023945ec & (uint)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
  auVar14._4_12_ = SUB1612(auVar13 | ZEXT416(g_02394dc8),4);
  auVar14._0_4_ = SUB164(auVar13 | ZEXT416(g_02394dc8),0) + fVar6;
  auVar16 = roundss(ZEXT816(0),auVar14,0xb);
  auVar12._4_12_ = auVar16._4_12_;
  auVar12._0_4_ = auVar16._0_4_ - auVar19._0_4_;
  auVar1._8_8_ = in_XMM1_Qb;
  auVar1._0_8_ = param_2;
  auVar15 = insertps(auVar1,auVar12,0x10);
  auVar2._8_8_ = in_XMM0_Qb;
  auVar2._0_8_ = param_1;
  auVar16 = insertps(auVar2,auVar19,0x10);
  (**(code **)(*this_ptr + 0x618))(auVar16._0_8_,auVar15._0_8_);
  FUN_00d50b20();
  return;
}

