// Function: FUN_0197a540
// Address: 0197a540
// Size: 2938 bytes
// Class: GNScrollView
// === GNScrollView properties ===
//   GNBorderStyle   _borderStyle
//   GNRulerHeaderLocation _rulerHeaderLocation


void FUN_0197a540(void)

{
  void*puVar1;
  uint8_t auVar2 [16];
  int64_t *plVar3;
  void*puVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int iVar8;
  uint64_t unaff_RBX;
  int64_t *this_ptr;
  uint64_t unaff_R12;
  uint32_t uVar9;
  float fVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar13 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  float fStack_1a4;
  int64_t *local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t *local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  uint32_t local_f0;
  uint32_t local_ec;
  uint8_t local_e8 [16];
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  uint32_t local_ac;
  int64_t *local_a8;
  uint64_t local_a0;
  uint32_t local_94;
  int64_t *local_90;
  uint64_t local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  uint64_t local_60;
  int local_58;
  uint64_t local_50;
  uint64_t local_48;
  int64_t *local_40;
  int64_t *local_38;
  uint64_t extraout_XMM0_Qb_02;
  
  if (*(char *)((int64_t)this_ptr + 0x1c1) != '\0') {
    FUN_01d9af20();
  }
  FUN_01d9af20();
  (**(code **)(*this_ptr + 0x990))();
  local_a8 = local_78;
  if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x980))();
  local_90 = local_78;
  if (local_78 == (int64_t *)0x0) {
    local_170 = local_a8;
    local_168 = '\0';
    FUN_01d98a70();
    local_90 = (int64_t *)0x0;
    uVar12 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
    local_a0 = 0;
    if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
      FUN_00d50b20();
      local_a0 = 0;
      local_90 = (int64_t *)0x0;
    }
  }
  else {
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    plVar7 = local_90;
    (**(code **)(*local_90 + 0x4d8))();
    blendps(in_XMM1,g_023b4a40,0xd);
    (**(code **)(*plVar7 + 0x4d0))();
    local_180 = local_a8;
    local_178 = '\0';
    FUN_01d98360(&local_180);
    if ((local_178 != '\0') && (local_180 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = 0;
    local_a0 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
  }
  (**(code **)(*this_ptr + 0x988))();
  local_80 = local_78;
  local_f0 = (uint32_t)uVar12;
  if (local_78 == (int64_t *)0x0) {
    local_94 = 1;
    local_88 = 0;
    local_80 = (int64_t *)0x0;
  }
  else {
    plVar7 = local_78;
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    local_88 = CONCAT71((int7)((uint64_t)plVar7 >> 8),1);
    local_50 = 0;
    local_38 = (int64_t *)0x0;
    local_48 = 0;
    local_40 = (int64_t *)0x0;
    uVar11 = (**(code **)(*local_80 + 0x938))();
    auVar14._8_4_ = (int)extraout_XMM0_Qb;
    auVar14._0_8_ = uVar11;
    auVar14._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
    local_50 = 0;
    auVar14 = blendps(auVar14,g_023b4a30,0xe);
    local_38 = (int64_t *)0x0;
    local_48 = 0;
    local_40 = (int64_t *)0x0;
    (**(code **)(*local_80 + 0x4d0))(0,auVar14._0_8_);
    local_160 = local_80;
    local_158 = '\0';
    uVar11 = FUN_01d980f0();
    if ((local_158 == '\0') || (local_160 == (int64_t *)0x0)) {
      local_94 = 0;
      local_88 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
    }
    else {
      uVar11 = FUN_00d50b20();
      local_88 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
      local_94 = 0;
    }
  }
  local_50 = 0;
  local_38 = (int64_t *)0x0;
  local_48 = 0;
  local_40 = (int64_t *)0x0;
  FUN_01d95060();
  local_50 = 0;
  local_38 = (int64_t *)0x0;
  local_48 = 0;
  local_40 = (int64_t *)0x0;
  FUN_01d9a650();
  local_50 = 0;
  local_38 = (int64_t *)0x0;
  local_48 = 0;
  local_40 = (int64_t *)0x0;
  FUN_01d95060();
  local_50 = 0;
  local_38 = (int64_t *)0x0;
  local_48 = 0;
  local_40 = (int64_t *)0x0;
  FUN_01d94ee0();
  (**(code **)(*this_ptr + 0x998))();
  local_40 = local_78;
  if (local_78 == (int64_t *)0x0) {
    uVar9 = 1;
    local_48 = 0;
    local_40 = (int64_t *)0x0;
  }
  else {
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    FUN_01d97ec0();
    (**(code **)(*local_78 + 0x4d8))();
    (**(code **)(*local_40 + 0x4d0))();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_150 = local_40;
    local_148 = '\0';
    uVar11 = FUN_01d97bd0();
    uVar9 = 0;
    local_48 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
    if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
      FUN_00d50b20();
      uVar9 = 0;
    }
  }
  (**(code **)(*this_ptr + 0x9a0))();
  local_38 = local_78;
  if (local_78 == (int64_t *)0x0) {
    local_ac = 1;
    uVar12 = 0;
    local_38 = (int64_t *)0x0;
  }
  else {
    if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    FUN_01d97e80();
    (**(code **)(*local_78 + 0x4d8))();
    (**(code **)(*local_38 + 0x4d0))();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_140 = local_38;
    local_138 = '\0';
    FUN_01d97920();
    local_ac = 0;
    uVar12 = CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
    if ((local_138 != '\0') && (local_140 != (int64_t *)0x0)) {
      FUN_00d50b20();
      local_ac = 0;
    }
  }
  local_ec = uVar9;
  local_50 = uVar12;
  (**(code **)(*this_ptr + 0x640))();
  plVar7 = local_78;
  if (((local_70 == '\0') && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_e8._0_8_ = (**(code **)(*plVar7 + 0x580))();
  local_e8._8_8_ = extraout_XMM0_Qb_00;
  (**(code **)(*plVar7 + 0x578))();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar4 + 0x27) = 0;
  puVar4[0x2e] = 0;
  *(void*)(puVar4 + 0x2f) = 0;
  puVar4[0x30] = 0;
  *(void*)(puVar4 + 0x31) = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  *(void*)(puVar4 + 0x2a) = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  *(void*)((int64_t)puVar4 + 0x165) = 0;
  *(void*)((int64_t)puVar4 + 0x18c) = 0;
  *(void*)((int64_t)puVar4 + 0x194) = 0;
  *(void*)((int64_t)puVar4 + 0x199) = 0;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0;
  puVar4[0x38] = 0;
  puVar4[0x39] = 0;
  puVar4[0x3a] = 0;
  *(void*)(puVar4 + 0x3b) = 0;
  *puVar4 = &g_02623d28;
  puVar4[2] = &g_02624858;
  FUN_00d500e0();
  puVar1 = (void*)this_ptr[0x3a];
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x3a] = (int64_t)puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  blendps(g_0241b3e0,local_e8,1);
  (**(code **)(*(int64_t *)this_ptr[0x3a] + 0x4d0))();
  (**(code **)(*(int64_t *)this_ptr[0x3a] + 0xab8))();
  (**(code **)(*(int64_t *)this_ptr[0x3a] + 0xac8))();
  plVar5 = (int64_t *)this_ptr[0x3a];
  FUN_0197b900();
  local_130 = 0;
  local_128 = '\0';
  (**(code **)("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices" +
              *local_78 + 0x18))();
  (**(code **)(*plVar5 + 0x928))();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != '\0') {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)this_ptr[0x3a];
  FUN_00d46dc0();
  local_c0 = local_78;
  local_b8 = 0;
  if (local_70 == '\0') {
    if (local_78 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  local_b8 = '\x01';
  (**(code **)(*plVar5 + 0x988))();
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)this_ptr[0x3a];
  FUN_0197b900();
  local_d0 = local_78;
  local_c8 = 0;
  if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  (**(code **)(*plVar5 + 0xa20))();
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar6 = g_027e0b78;
  plVar5 = (int64_t *)this_ptr[0x3a];
  if (g_027e0b78 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar6;
  local_118 = '\x01';
  (**(code **)(*plVar5 + 0xa10))();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_0006daf0();
  (**(code **)(*plVar5 + 0x18))();
  auVar15 = blendps(local_e8,ZEXT816(0),2);
  (**(code **)(*plVar5 + 0x4d0))();
  local_108 = '\0';
  local_110 = plVar5;
  (**(code **)(*this_ptr + 0x970))();
  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_e8._0_8_ = (**(code **)(*plVar7 + 0x598))();
  local_e8._8_8_ = extraout_XMM0_Qb_01;
  (**(code **)(*plVar5 + 0x4a0))();
  plVar3 = local_78;
  if (local_70 == '\0') {
    if (local_78 == (int64_t *)0x0) goto LAB_0197afdd;
    FUN_00d50b00();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_78 == (int64_t *)0x0) goto LAB_0197afdd;
  local_70 = '\0';
  local_78 = (int64_t *)0x0;
  local_68 = plVar3;
  local_60 = 0xffffffff;
  local_58 = 0;
  while( true ) {
    lVar6 = (int64_t)(int)local_60;
    iVar8 = (int)local_60 + 1;
    local_60 = CONCAT44(local_60._4_4_,iVar8);
    if (*(int *)((int64_t)local_68 + 0xc) <= iVar8) break;
    local_78 = *(int64_t **)(local_68[2] + 8 + lVar6 * 8);
    fVar10 = (float)(**(code **)(*plVar7 + 0x598))();
    auVar13._0_8_ = (**(code **)(*local_78 + 0x4d8))();
    auVar13._8_8_ = extraout_XMM0_Qb_02;
    local_e8._0_4_ = (float)local_e8._0_4_ - fVar10;
    auVar2._4_4_ = local_e8._4_4_;
    auVar2._0_4_ = local_e8._0_4_;
    auVar2._8_4_ = local_e8._8_4_;
    auVar2._12_4_ = local_e8._12_4_;
    auVar14 = insertps(auVar13,auVar2,0x10);
    (**(code **)(*local_78 + 0x4d0))(auVar14._0_8_);
    fStack_1a4 = auVar15._4_4_;
    auVar15._4_12_ = local_e8._4_12_;
    auVar15._0_4_ = local_e8._0_4_ + fStack_1a4;
    local_e8 = auVar15;
    if (local_60._4_4_ != 0) {
      if (local_60 < 0) {
        iVar8 = -local_60._4_4_;
      }
      else {
        local_60 = CONCAT44(local_60._4_4_,(int)local_60 - local_60._4_4_);
        FUN_00d23690();
        local_58 = local_58 + local_60._4_4_;
        iVar8 = 0;
      }
      local_60 = CONCAT44(iVar8,(int)local_60);
    }
  }
  FUN_000a9680();
  FUN_00d50b20();
LAB_0197afdd:
  uVar12 = (**(code **)(*plVar5 + 0x4d8))();
  auVar14 = insertps(auVar15,local_e8._0_4_,0x10);
  (**(code **)(*plVar5 + 0x4d0))(uVar12,auVar14._0_8_);
  local_f8 = '\0';
  local_100 = plVar5;
  FUN_01d9ab80();
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d9a660();
  (**(code **)(*this_ptr + 0x928))();
  FUN_00d50b20();
  if (local_a8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_ac == '\0') {
    FUN_00d50b20();
  }
  if ((char)local_ec == '\0') {
    FUN_00d50b20();
  }
  if ((char)local_94 == '\0') {
    FUN_00d50b20();
  }
  if ((char)local_f0 == '\0') {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

