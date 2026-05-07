// Function: FUN_01a9f730
// Address: 01a9f730
// Size: 1922 bytes
// Class: Unknown
// String references:
//   "%02d"
//   "%02I.%@"
//   "-%@"

void* FUN_01a9f730(float param_1)

{
  bool bVar1;
  int64_t lVar2;
  void*puVar3;
  void*puVar4;
  uint8_t uVar5;
  uint8_t uVar6;
  int iVar7;
  void*puVar8;
  void**ppuVar9;
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  void*puVar11;
  byte bVar12;
  bool bVar13;
  uint32_t uVar14;
  float fVar15;
  int64_t local_c0;
  char local_b8;
  void*local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  void*local_90;
  void*local_80;
  uint local_78;
  uint8_t local_74;
  uint8_t local_69;
  void*local_68;
  uint64_t local_60;
  uint64_t local_58;
  char local_50;
  void*local_48;
  char local_40 [8];
  char local_38 [8];
  
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_02572358;
  local_90 = puVar8;
  (*g_02572370)();
  fVar15 = (float)(~-(uint)(param_1 < 0.0) & (uint)param_1 |
                  (g_023945e0 ^ (uint)param_1) & -(uint)(param_1 < 0.0));
  FUN_00b38500(SUB84((double)fVar15,0),0);
  uVar5 = local_58._1_1_;
  uVar6 = local_58._2_1_;
  local_69 = local_58._3_1_;
  local_78 = 1;
  local_80 = (void*)&g_0263cde8;
  local_74 = (uint8_t)local_58;
  FUN_00d8cb40(local_58._3_1_,&local_80);
  puVar8 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_68 = puVar8;
  local_60._0_4_ = (uint)local_60 & 0xffffff00;
  uVar14 = FUN_00d21140();
  if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  if (puVar8 != (void*)0x0) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  local_78 = 1;
  local_80 = (void*)&g_0263cde8;
  local_74 = uVar5;
  FUN_00d8cb40(uVar14,&local_80);
  puVar11 = local_48;
  puVar8 = local_90;
  if (local_40[0] == '\0') {
    if (local_48 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  local_68 = puVar11;
  local_60._0_4_ = (uint)local_60 & 0xffffff00;
  uVar14 = FUN_00d21140();
  if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  if (puVar11 != (void*)0x0) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  if (*(int *)(arg1 + 0xc) == 4) {
    (**(code **)(**(int64_t **)(arg1 + 0x10) + 0x378))(fVar15);
    local_c0 = g_02774da0;
    if (g_02774da0 != 0) {
      FUN_00d50b00();
    }
    local_b8 = '\x01';
    FUN_00d91000(1,&local_c0);
    puVar11 = local_68;
    if ((char)local_60 == '\0') {
      if (local_68 != (void*)0x0) {
        FUN_00d50b00();
        if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_60._0_4_ = (uint)local_60 & 0xffffff00;
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    puVar4 = local_68;
    ppuVar9 = (void**)&local_60;
    if ((char)local_60 == '\0') {
      ppuVar9 = &local_48;
    }
    local_48 = (void*)CONCAT71(local_48._1_7_,(char)local_60);
    *(void*)ppuVar9 = 0;
    if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
    iVar7 = FUN_00d8d560();
    if (((char)local_48 != '\0') && (puVar4 != (void*)0x0)) {
      FUN_00d50b20();
    }
    uVar14 = FUN_00d23340();
    puVar4 = local_48;
    pcVar10 = local_38;
    if (local_40[0] != '\0') {
      pcVar10 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar10 = '\0';
    if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    local_60._4_4_ = iVar7 % 0x3c;
    local_60._0_4_ = 2;
    local_68 = &g_0263cdb0;
    local_50 = 0;
    if (puVar4 != (void*)0x0) {
      uVar14 = FUN_00d50b00();
    }
    local_58 = puVar4;
    local_50 = '\x01';
    FUN_00d8cb40(uVar14,&local_68);
    puVar3 = local_80;
    if ((char)local_78 == '\0') {
      if (local_80 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = local_78 & 0xffffff00;
    }
    local_48 = puVar3;
    local_40[0] = '\0';
    uVar14 = FUN_00d21140();
    if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    if (puVar3 != (void*)0x0) {
      uVar14 = FUN_00d50b20();
    }
    if (((char)local_78 != '\0') && (local_80 != (void*)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    local_68 = &g_0263cdb0;
    if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (puVar4 != (void*)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    if (puVar11 != (void*)0x0) {
      uVar14 = FUN_00d50b20();
    }
  }
  else {
    local_78 = 1;
    local_80 = (void*)&g_0263cde8;
    local_74 = uVar6;
    FUN_00d8cb40(uVar14,&local_80);
    puVar11 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    local_68 = puVar11;
    local_60._0_4_ = (uint)local_60 & 0xffffff00;
    uVar14 = FUN_00d21140();
    if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    if (puVar11 != (void*)0x0) {
      uVar14 = FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    local_78 = 1;
    local_80 = (void*)&g_0263cde8;
    local_74 = local_69;
    FUN_00d8cb40(uVar14,&local_80);
    puVar11 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40[0] = '\0';
    }
    local_68 = puVar11;
    local_60._0_4_ = (uint)local_60 & 0xffffff00;
    uVar14 = FUN_00d21140();
    if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    if (puVar11 != (void*)0x0) {
      uVar14 = FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
      uVar14 = FUN_00d50b20();
    }
  }
  lVar2 = g_027d3890;
  local_b0 = puVar8;
  local_a8 = '\0';
  if (g_027d3890 != 0) {
    uVar14 = FUN_00d50b00();
  }
  local_a0 = lVar2;
  local_98 = '\x01';
  FUN_00d95130(uVar14,&local_a0);
  puVar8 = local_68;
  if (local_68 == (void*)0x0) {
    bVar12 = 1;
    puVar8 = (void*)0x0;
    bVar1 = false;
  }
  else {
    if ((char)local_60 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      bVar12 = 0;
      if (((char)local_60 == '\0') || (bVar12 = 0, local_68 == (void*)0x0))
      goto LAB_01a9fd24;
      FUN_00d50b20();
    }
    else {
      local_60._0_4_ = (uint)local_60 & 0xffffff00;
    }
    bVar1 = true;
    bVar12 = 0;
  }
LAB_01a9fd24:
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (void*)0x0)) {
    FUN_00d50b20();
  }
  uVar14 = 0;
  if (0.0 <= param_1) goto LAB_01a9fe78;
  local_60._0_4_ = 1;
  local_68 = &g_024c5048;
  local_50 = 0;
  if (puVar8 != (void*)0x0) {
    uVar14 = FUN_00d50b00();
  }
  local_50 = '\x01';
  local_58 = puVar8;
  FUN_00d8cb40(uVar14,&local_68);
  puVar11 = local_48;
  if (local_48 == puVar8) {
    puVar11 = puVar8;
    if ((bool)(bVar12 & local_48 != (void*)0x0)) {
      if (local_40[0] != '\0') goto LAB_01a9fdef;
      bVar1 = true;
      FUN_00d50b00();
    }
LAB_01a9fe41:
    if ((local_40[0] != '\0') && (local_48 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40[0] == '\0') {
      if (local_48 != (void*)0x0) {
        FUN_00d50b00();
      }
      bVar13 = (bool)(bVar1 & puVar8 != (void*)0x0);
      bVar1 = true;
      if (bVar13) {
        FUN_00d50b20();
      }
      goto LAB_01a9fe41;
    }
    bVar13 = puVar8 != (void*)0x0;
    puVar8 = puVar11;
    if ((bool)(bVar1 & bVar13)) {
      FUN_00d50b20();
    }
LAB_01a9fdef:
    local_40[0] = '\0';
    bVar1 = true;
    puVar11 = puVar8;
  }
  local_68 = &g_024c5048;
  puVar8 = puVar11;
  if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
    FUN_00d50b20();
  }
LAB_01a9fe78:
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar1) && (puVar8 != (void*)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = puVar8;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
  return this_ptr;
}

