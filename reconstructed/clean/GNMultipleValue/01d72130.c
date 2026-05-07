// Function: FUN_01d72130
// Address: 01d72130
// Size: 2148 bytes
// Class: GNMultipleValue

void FUN_01d72130(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  int iVar8;
  uint64_t uVar9;
  uint8_t auVar10 [16];
  uint64_t extraout_XMM0_Qb;
  uint64_t uVar11;
  uint64_t in_XMM1_Qb;
  uint8_t auVar12 [16];
  uint8_t local_168 [16];
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  int64_t local_98;
  char local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  uint64_t local_78;
  float fStack_6c;
  int64_t local_58;
  char local_50;
  
  lVar2 = local_58;
  if (this_ptr[0x44] == 0) {
    return;
  }
  FUN_00d403d0();
  lVar6 = g_027f0ae0;
  if (g_027f0ae0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_140 = 0;
  local_138 = '\0';
  FUN_00d40470(&local_140,&stack0xffffffffffffff28,3,3);
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  bVar1 = false;
  lVar6 = 0;
  for (iVar8 = 0; iVar5 = FUN_01d5b230(), iVar8 < iVar5; iVar8 = iVar8 + 1) {
    FUN_01d5b240();
    if (local_58 == lVar6) {
      if ((bVar1) || (local_58 == 0)) {
joined_r0x01d72318:
        lVar7 = lVar6;
        bVar3 = bVar1;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        lVar7 = lVar6;
        bVar3 = true;
        if (local_50 == '\0') {
          FUN_00d50b00();
          goto LAB_01d72304;
        }
      }
    }
    else {
      lVar7 = local_58;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        if ((bVar1) && (lVar6 != 0)) {
          FUN_00d50b20();
          lVar6 = local_58;
LAB_01d72304:
          bVar1 = true;
          goto joined_r0x01d72318;
        }
      }
      else {
        bVar3 = true;
        if ((bVar1) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    bVar1 = bVar3;
    cVar4 = FUN_01d65330();
    lVar6 = g_027f0ad8;
    if (cVar4 == '\0') {
      if (g_027f0ad8 != 0) {
        FUN_00d50b00();
      }
      local_130 = lVar6;
      local_128 = '\x01';
      FUN_01d65120();
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar6 = lVar7;
  }
  if (this_ptr[0x44] == 0) goto LAB_01d72931;
  local_e0 = this_ptr[0x44];
  FUN_00d50b00();
  FUN_01d5e2b0();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_01d724b7;
    FUN_00d50b00();
LAB_01d72413:
    local_50 = '\0';
    local_58 = 0;
    iVar5 = -1;
    iVar8 = -1;
    while (iVar5 = iVar5 + 1, iVar5 < *(int *)(lVar2 + 0xc)) {
      local_58 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + (int64_t)iVar5 * 8);
      cVar4 = FUN_01d65e30();
      if (cVar4 != '\0') {
        iVar8 = iVar5;
      }
    }
    FUN_002a0a30();
    FUN_00d50b20();
  }
  else {
    if (local_58 != 0) goto LAB_01d72413;
LAB_01d724b7:
    iVar8 = -1;
  }
  FUN_01e3f820();
  uVar11 = param_2;
  uVar9 = in_XMM1_Qb;
  FUN_01e3f820();
  local_168._0_8_ = uVar11;
  local_168._8_8_ = uVar9;
  FUN_01e3f820();
  cVar4 = FUN_01d5e5e0();
  local_78._4_4_ = (float)((uint64_t)uVar11 >> 0x20);
  fStack_6c = (float)((uint64_t)uVar9 >> 0x20);
  local_88 = (float)param_2;
  fStack_84 = (float)((uint64_t)param_2 >> 0x20);
  fStack_80 = (float)in_XMM1_Qb;
  fStack_7c = (float)((uint64_t)in_XMM1_Qb >> 0x20);
  auVar12._4_4_ = fStack_84 - local_78._4_4_;
  auVar12._0_4_ = local_88 - local_78._4_4_;
  auVar12._8_4_ = fStack_80 - fStack_6c;
  auVar12._12_4_ = fStack_7c - fStack_6c;
  auVar12 = blendps(local_168,auVar12,0xd);
  if (cVar4 != '\0') {
    auVar10._4_4_ = fStack_84 - local_78._4_4_;
    auVar10._0_4_ = (local_88 - local_78._4_4_) * g_0239011c;
    auVar10._8_4_ = fStack_80 - fStack_6c;
    auVar10._12_4_ = fStack_7c - fStack_6c;
    auVar10 = roundss(ZEXT816(0),auVar10,9);
    blendps(auVar12,auVar10,1);
  }
  FUN_01d3a560();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  FUN_01e49570();
  FUN_01e3f820();
  FUN_01e46ed0();
  FUN_01f514b0();
  local_78 = local_58;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != 0) &&
     (((iVar5 = FUN_01d3a5a0(), iVar5 == 6 || (iVar5 = FUN_01d3a5a0(), iVar5 == 1)) ||
      (iVar5 = FUN_01d3a5a0(), iVar5 == 5)))) {
    FUN_01e49570();
    FUN_01d3abf0();
    FUN_01f514b0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  local_120 = local_78;
  local_118 = '\0';
  FUN_01edf1a0(&local_120,3);
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_01e3f820();
  uVar9 = (**(code **)(*this_ptr + 0xad0))();
  uVar11 = extraout_XMM0_Qb;
  FUN_00d50b00();
  local_110 = 0;
  local_108 = '\0';
  local_100 = 0;
  local_f8 = '\0';
  FUN_00d50b00();
  local_f0 = local_58;
  local_e8 = '\0';
  FUN_01d5efd0(&local_110,iVar8,&local_100,0,uVar9,uVar11);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01d72931:
  if ((bVar1) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return;
}

