// Function: FUN_00b41dc0
// Address: 00b41dc0
// Size: 2034 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00b41dc0(void)

{
  byte bVar1;
  uint uVar2;
  int64_t lVar3;
  uint *puVar4;
  int64_t lVar5;
  uint uVar6;
  int64_t this_ptr;
  bool bVar7;
  bool bVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qa;
  double dVar10;
  int64_t local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ushort local_46;
  uint local_44;
  int64_t local_40;
  char local_38;
  int local_2c;
  
  FUN_00ccd6d0(&local_2c,&local_58);
  bVar7 = local_40 != 0;
  bVar8 = local_2c != 4;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_02764880;
  if (bVar7 || bVar8) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_158 = lVar3;
    local_150 = '\x01';
    FUN_00cc78b0();
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = g_02764880;
  if (local_58 != 0) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_148 = lVar3;
    local_140 = '\x01';
    FUN_00cc78b0();
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar9 = FUN_00ccd6d0(&local_2c,&local_54);
  bVar7 = local_40 != 0;
  bVar8 = local_2c != 4;
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar3 = g_02764880;
  if (bVar7 || bVar8) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_138 = lVar3;
    local_130 = '\x01';
    uVar9 = FUN_00cc78b0();
    if ((local_130 != '\0') && (local_138 != 0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  lVar3 = g_02764880;
  if (local_54 != 1) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_128 = lVar3;
    local_120 = '\x01';
    uVar9 = FUN_00cc78b0();
    if ((local_120 != '\0') && (local_128 != 0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  lVar5 = FUN_00b429e0(uVar9,0x616c6163);
  lVar3 = g_02764880;
  uVar9 = extraout_XMM0_Qa;
  if (lVar5 < 1) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_118 = lVar3;
    local_110 = '\x01';
    uVar9 = FUN_00cc78b0();
    if ((local_110 != '\0') && (local_118 != 0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  uVar9 = (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x390))(uVar9,&local_170);
  bVar7 = true;
  if (local_40 == 0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x20) + 0x3a0))(uVar9,local_170 + 0x12);
    bVar7 = local_168 != 0;
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_02764880;
  if (bVar7) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_108 = lVar3;
    local_100 = '\x01';
    FUN_00cc78b0();
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd650(&local_2c,&local_46);
  bVar7 = local_40 != 0;
  bVar8 = local_2c != 2;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_02764880;
  if (bVar7 || bVar8) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar3;
    local_f0 = '\x01';
    FUN_00cc78b0();
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd750(&local_2c,&local_170);
  bVar7 = local_40 != 0;
  bVar8 = local_2c != 8;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_02764880;
  if (bVar7 || bVar8) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_e8 = lVar3;
    local_e0 = '\x01';
    FUN_00cc78b0();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd6d0(&local_2c,&local_44);
  bVar7 = local_40 != 0;
  bVar8 = local_2c != 4;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_02764880;
  if (bVar7 || bVar8) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_d8 = lVar3;
    local_d0 = '\x01';
    FUN_00cc78b0();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd6d0(&local_2c,&local_50);
  bVar7 = local_40 != 0;
  bVar8 = local_2c != 4;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_02764880;
  if (bVar7 || bVar8) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_c8 = lVar3;
    local_c0 = '\x01';
    FUN_00cc78b0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00ccd6d0(&local_2c,&local_4c);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = g_02764880;
  if (local_40 != 0 || local_2c != 4) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_b8 = lVar3;
    local_b0 = '\x01';
    FUN_00cc78b0();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = g_02764880;
  if (local_50 != 0x616c6163) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_a8 = lVar3;
    local_a0 = '\x01';
    FUN_00cc78b0();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = g_02764880;
  if (local_4c != 0) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_98 = lVar3;
    local_90 = '\x01';
    FUN_00cc78b0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = g_02764880;
  if (local_44 < 0x24) {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar3;
    local_80 = '\x01';
    FUN_00cc78b0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  local_38 = '\0';
  local_40 = 0;
  local_44 = local_44 - 0xc;
  FUN_00ccd8f0(local_44,&local_40);
  if (local_168 == 0) {
    if (*(uint *)(local_40 + 0x18) == local_44) goto LAB_00b424ad;
  }
  else if (local_160 != '\0') {
    FUN_00d50b20();
  }
  lVar3 = g_02764880;
  if (g_02764880 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar3;
  local_70 = '\x01';
  FUN_00cc78b0();
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_00b424ad:
  lVar5 = local_40;
  lVar3 = *(int64_t *)(this_ptr + 0xa8);
  if (lVar3 != local_40) {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0xa8) = lVar5;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  puVar4 = *(uint **)(local_40 + 0x10);
  bVar1 = *(byte *)((int64_t)puVar4 + 5);
  uVar6 = (uint)bVar1;
  *(uint *)(this_ptr + 0x50) = (uint)bVar1;
  if (bVar1 == 0) {
    uVar6 = (uint)local_46;
    *(uint *)(this_ptr + 0x50) = (uint)local_46;
  }
  uVar2 = *puVar4;
  *(uint *)(this_ptr + 0x68) =
       uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
  *(uint *)(this_ptr + 0x54) = (uint)*(byte *)((int64_t)puVar4 + 9);
  lVar3 = g_02764880;
  uVar2 = uVar6 - 0x10 >> 2;
  uVar6 = uVar6 << 0x1e | uVar2;
  if ((uVar6 < 5) && ((0x17U >> (uVar2 & 0x1f) & 1) != 0)) {
    *(void*)(this_ptr + 0x6c) = *(void*)(&g_023d5f24 + (int64_t)(int)uVar6 * 4);
  }
  else {
    if (g_02764880 != 0) {
      FUN_00d50b00();
    }
    local_68 = lVar3;
    local_60 = '\x01';
    FUN_00cc78b0();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar6 = *(uint *)(*(int64_t *)(local_40 + 0x10) + 0x14);
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
  if (uVar6 != 0) {
    dVar10 = (double)uVar6;
    if ((*(double *)(this_ptr + 0x48) != dVar10) ||
       (NAN(*(double *)(this_ptr + 0x48)) || NAN(dVar10))) {
      *(double *)(this_ptr + 0x48) = dVar10;
    }
  }
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  return;
}

