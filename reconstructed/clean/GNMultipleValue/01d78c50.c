// Function: FUN_01d78c50
// Address: 01d78c50
// Size: 1520 bytes
// Class: GNMultipleValue

void FUN_01d78c50(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *this_ptr;
  int64_t lVar4;
  bool bVar5;
  uint64_t extraout_XMM0_Qb;
  float fVar6;
  float fVar8;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  uint8_t auVar7 [16];
  uint8_t local_118 [16];
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
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  fVar8 = (float)((uint64_t)param_2 >> 0x20);
  fVar6 = (float)param_2;
  FUN_00d403d0();
  lVar1 = g_027f0e10;
  if (g_027f0e10 != 0) {
    FUN_00d50b00();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_f8 = 0;
  local_f0 = '\0';
  FUN_00d40470(&local_f8,&stack0xffffffffffffff60,3,3);
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0x2c];
  if ((lVar1 != 0) && (this_ptr[0x44] != 0)) {
    FUN_00d50b00();
    FUN_01d62b10();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (this_ptr[0x44] == 0) goto LAB_01d79201;
  local_118._0_8_ = FUN_01e3f820();
  local_118._8_8_ = extraout_XMM0_Qb;
  FUN_01e3f820();
  auVar7._0_4_ = fVar6 + (float)local_118._0_8_;
  auVar7._4_4_ = fVar8 + (float)((uint64_t)local_118._0_8_ >> 0x20);
  auVar7._8_4_ = in_XMM1_Dc + (float)extraout_XMM0_Qb;
  auVar7._12_4_ = in_XMM1_Dd + (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
  blendps(auVar7,local_118,0xd);
  FUN_01e46ed0();
  FUN_01d3a560();
  lVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_a8 = lVar1;
  FUN_01e49570();
  FUN_01f514b0();
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((lVar1 != 0) &&
     (((iVar3 = FUN_01d3a5a0(), iVar3 == 6 || (iVar3 = FUN_01d3a5a0(), iVar3 == 1)) ||
      (iVar3 = FUN_01d3a5a0(), iVar3 == 5)))) {
    FUN_01e49570();
    FUN_01d3abf0();
    FUN_01f514b0();
    lVar1 = local_40;
    if (lVar4 == local_40) {
LAB_01d78f56:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar5 = lVar4 != 0;
        lVar4 = lVar1;
        if (bVar5) {
          FUN_00d50b20();
        }
        goto LAB_01d78f56;
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      lVar4 = lVar1;
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  local_e0 = '\0';
  local_e8 = lVar4;
  FUN_01edf1a0(&local_e8,2);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01e3f820();
  local_d0 = '\0';
  local_d8 = 0;
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_50 + 0x370))();
  local_60 = local_40;
  local_58 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = '\x01';
  auVar7 = blendps(local_118,ZEXT816(0),2);
  local_c0 = '\0';
  local_c8 = 0;
  local_b8 = lVar1;
  local_b0 = '\0';
  FUN_01d5efd0(&local_d8,auVar7._0_8_,&local_60,0xff);
  lVar2 = local_a8;
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
LAB_01d79201:
  if ((this_ptr[0x2c] != 0) && (this_ptr[0x44] != 0)) {
    FUN_01d62b80();
  }
  return;
}

