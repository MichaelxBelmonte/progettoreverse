// Function: FUN_01b058e0
// Address: 01b058e0
// Size: 1642 bytes
// Class: MDMetaWindowController

void FUN_01b058e0(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  int64_t *this_ptr;
  int64_t *plVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar9 [16];
  uint64_t uVar8;
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  float fVar23;
  float local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  float local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  float local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint8_t local_e8 [16];
  uint8_t local_d8 [16];
  int64_t *local_c0;
  char local_b8;
  uint8_t local_68 [16];
  
  FUN_01ad3cb0();
  if ((local_b8 == '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((*(int *)((int64_t)this_ptr + 0x284) == 1) || (*(int *)((int64_t)this_ptr + 0x284) == 0))
  {
    local_d8._8_8_ = 0;
    local_d8._0_8_ = g_023dccec;
  }
  else {
    local_68._0_8_ = FUN_01e3f820();
    local_68._8_8_ = extraout_XMM0_Qb;
    if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
      FUN_01e3f820();
      auVar20 = blendps(in_XMM1,g_0241c700,0xd);
    }
    else {
      auVar20._8_8_ = 0;
      auVar20._0_8_ = g_023dccf4;
    }
    auVar16._0_4_ = auVar20._0_4_ + (float)local_68._0_8_;
    auVar16._4_4_ = auVar20._4_4_ + (float)((uint64_t)local_68._0_8_ >> 0x20);
    auVar16._8_4_ = auVar20._8_4_ + (float)extraout_XMM0_Qb;
    auVar16._12_4_ = auVar20._12_4_ + (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
    in_XMM1 = blendps(auVar16,local_68,2);
    local_d8 = in_XMM1;
  }
  pvVar1 = _pthread_getspecific(param_1);
  plVar5 = local_c0;
  if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
    plVar5 = (int64_t *)local_c0[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x3a0))();
  uVar6 = (**(code **)(*this_ptr + 0x918))();
  uVar7 = FUN_01a1da00();
  if ((*(int *)((int64_t)this_ptr + 0x284) == 1) || (*(int *)((int64_t)this_ptr + 0x284) == 0))
  {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = g_023dccf4;
  }
  else {
    FUN_01e3f820();
    if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
      FUN_01e3f820();
    }
    auVar9 = blendps(in_XMM1,g_0241c710,0xd);
  }
  uVar8 = FUN_01a1da00();
  local_68._0_4_ = auVar9._0_4_;
  local_e8 = ZEXT416((uint)(g_0239011c * (float)local_68._0_4_));
  if (((float)local_68._0_4_ == 0.0) && (!NAN((float)local_68._0_4_))) {
    local_e8 = auVar9;
  }
  if (this_ptr[0x52] != 0) {
    FUN_01b1dbf0();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar3 + 0x27) = 0;
  puVar3[0x2e] = 0;
  *(void*)(puVar3 + 0x2f) = 0;
  puVar3[0x30] = 0;
  *(void*)(puVar3 + 0x31) = 0;
  puVar3[0x28] = 0;
  puVar3[0x29] = 0;
  *(void*)(puVar3 + 0x2a) = 0;
  puVar3[0x2b] = 0;
  puVar3[0x2c] = 0;
  *(void*)((int64_t)puVar3 + 0x165) = 0;
  *(void*)((int64_t)puVar3 + 0x18c) = 0;
  *(void*)((int64_t)puVar3 + 0x194) = 0;
  *(void*)((int64_t)puVar3 + 0x199) = 0;
  puVar3[0x35] = 0;
  puVar3[0x36] = 0;
  puVar3[0x37] = 0;
  puVar3[0x38] = 0;
  *puVar3 = &g_0269c118;
  puVar3[2] = &g_0269cc70;
  puVar3[0x39] = &g_0269ccb0;
  puVar3[0x45] = 0;
  *(void*)(puVar3 + 0x46) = 0;
  puVar3[0x47] = 0;
  puVar3[0x3a] = 0;
  puVar3[0x3b] = 0;
  *(void*)(puVar3 + 0x3c) = 0;
  puVar3[0x3f] = 0;
  puVar3[0x40] = 0;
  puVar3[0x3d] = 0;
  puVar3[0x3e] = 0;
  *(void*)((int64_t)puVar3 + 0x205) = 0;
  puVar3[0x42] = 0;
  puVar3[0x43] = 0;
  *(void*)((int64_t)puVar3 + 0x21d) = 0;
  (*g_0269c130)();
  puVar4 = (void*)this_ptr[0x52];
  if (puVar4 == puVar3) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x52] = (int64_t)puVar3;
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  local_108 = (float)uVar7;
  uStack_104 = (uint)((uint64_t)uVar7 >> 0x20);
  uStack_100 = (uint)extraout_XMM0_Qb_01;
  uStack_fc = (uint)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
  auVar10._0_4_ = (uint)(local_108 * g_02390438) & g_023945e0;
  auVar10._4_4_ = uStack_104 & _UNK_023945e4;
  auVar10._8_4_ = uStack_100 & _UNK_023945e8;
  auVar10._12_4_ = uStack_fc & _UNK_023945ec;
  auVar10 = auVar10 | ZEXT416(g_02394dc8);
  auVar11._4_12_ = auVar10._4_12_;
  auVar11._0_4_ = auVar10._0_4_ + local_108 * g_02390438;
  auVar19._0_12_ = ZEXT812(0);
  auVar19._12_4_ = 0;
  auVar20 = roundss(auVar19,auVar11,0xb);
  fVar23 = g_02392fd8;
  if (auVar20._0_4_ <= g_02392fd8) {
    fVar23 = auVar20._0_4_;
  }
  local_118 = (float)uVar6;
  uStack_114 = (uint)((uint64_t)uVar6 >> 0x20);
  uStack_110 = (uint)extraout_XMM0_Qb_00;
  uStack_10c = (uint)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  auVar21._0_4_ = (uint)local_118 & g_023945e0;
  auVar21._4_4_ = uStack_114 & _UNK_023945e4;
  auVar21._8_4_ = uStack_110 & _UNK_023945e8;
  auVar21._12_4_ = uStack_10c & _UNK_023945ec;
  auVar21 = auVar21 | ZEXT416(g_02394dc8);
  auVar22._4_12_ = auVar21._4_12_;
  auVar22._0_4_ = auVar21._0_4_ + local_118;
  auVar20 = ZEXT416((uint)((float)(g_023945e0 & (uint)(fVar23 * g_0239011c) | g_02394dc8) +
                          fVar23 * g_0239011c));
  auVar16 = roundss(ZEXT816(0),auVar22,0xb);
  auVar20 = roundss(auVar20,auVar20,0xb);
  auVar12._4_12_ = local_d8._4_12_;
  auVar12._0_4_ = local_d8._0_4_ + g_023942a8;
  auVar17._4_12_ = auVar16._4_12_;
  auVar17._0_4_ = auVar16._0_4_ - auVar20._0_4_;
  auVar20 = insertps(auVar12,auVar17,0x10);
  local_f8 = (float)uVar8;
  uStack_f4 = (uint)((uint64_t)uVar8 >> 0x20);
  uStack_f0 = (uint)extraout_XMM0_Qb_02;
  uStack_ec = (uint)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
  auVar13._0_4_ = g_023945e0 & (uint)(local_f8 * g_02390438);
  auVar13._4_4_ = _UNK_023945e4 & uStack_f4;
  auVar13._8_4_ = _UNK_023945e8 & uStack_f0;
  auVar13._12_4_ = _UNK_023945ec & uStack_ec;
  auVar14._4_12_ = SUB1612(auVar13 | g_023945f0,4);
  auVar14._0_4_ = SUB164(auVar13 | g_023945f0,0) + local_f8 * g_02390438;
  auVar18._0_12_ = ZEXT812(0);
  auVar18._12_4_ = 0;
  auVar16 = roundss(auVar18,auVar14,0xb);
  auVar15._4_12_ = local_e8._4_12_;
  auVar15._0_4_ = local_e8._0_4_ + g_023b1698;
  fVar23 = g_02392fd8;
  if (auVar16._0_4_ <= g_02392fd8) {
    fVar23 = auVar16._0_4_;
  }
  auVar16 = insertps(auVar15,ZEXT416((uint)fVar23),0x10);
  (**(code **)(*(int64_t *)this_ptr[0x52] + 0x4d0))(auVar20._0_8_,auVar16._0_8_);
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02576110;
  *(void*)((int64_t)puVar4 + 0xc) = 0;
  *(void*)((int64_t)puVar4 + 0x14) = 0;
  *(void*)((int64_t)puVar4 + 0x1a) = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  (*g_02576128)();
  FUN_00d48ac0();
  FUN_01e058f0();
  (**(code **)(*(int64_t *)this_ptr[0x52] + 0x9c8))();
  plVar5 = (int64_t *)this_ptr[0x52];
  FUN_01ad3320();
  if ((local_b8 == '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar5 + 0x9d8))();
  if (local_c0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)this_ptr[0x52];
  FUN_01ae51a0();
  (**(code **)(*plVar5 + 0x928))();
  (**(code **)(*(int64_t *)this_ptr[0x52] + 0x3a0))();
  lVar2 = g_027ebf00;
  plVar5 = (int64_t *)this_ptr[0x52];
  if (g_027ebf00 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar5 + 0xa10))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)this_ptr[0x52];
  FUN_00d50b00();
  (**(code **)(*plVar5 + 0xa20))();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0x52] + 0xa80))();
  lVar2 = this_ptr[0x52];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x450))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)this_ptr[0x52] + 0xac0))();
  FUN_00d50b20();
  if (local_c0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

