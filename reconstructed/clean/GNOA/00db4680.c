// Function: FUN_00db4680
// Address: 00db4680
// Size: 2060 bytes
// Class: GNOA

void FUN_00db4680(void)

{
  int iVar1;
  int64_t *plVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t lVar5;
  char *pcVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  void*puVar10;
  int64_t local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
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
  uint64_t local_f0;
  char local_98;
  undefined7 uStack_97;
  char local_90;
  int64_t local_88;
  void*local_80;
  uint32_t local_74;
  uint64_t local_70;
  uint32_t local_64;
  void*local_60;
  char local_58 [8];
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int *)(this_ptr + 0x34) != 0) {
    return;
  }
  if (*(int *)(*(int64_t *)(this_ptr + 0x10) + 0xc) == 0) {
    return;
  }
  FUN_00db98a0();
  iVar1 = *(int *)((int64_t)local_60 + 0xc);
  if (local_58[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 0) {
    FUN_00db32a0();
  }
  lVar4 = g_02782f78;
  if (g_02782f78 != 0) {
    FUN_00d50b00();
  }
  lVar5 = g_02782f80;
  if (g_02782f80 != 0) {
    FUN_00d50b00();
  }
  local_178 = lVar5;
  FUN_00083ea0(2,&local_178);
  FUN_0036bfe0();
  local_88 = CONCAT71(uStack_97,local_98);
  if (local_90 == '\0') {
    if (((local_88 != 0) && (FUN_00d50b00(), local_90 != '\0')) &&
       (CONCAT71(uStack_97,local_98) != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_90 = '\0';
  }
  local_60 = (void*)&g_0253d630;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &g_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  lVar4 = g_02702300;
  if (g_02702300 != 0) {
    FUN_00d50b00();
  }
  local_170 = lVar4;
  local_168 = '\x01';
  FUN_00d50b00();
  local_160 = local_88;
  local_158 = '\0';
  FUN_00d40470(&local_160,&stack0xffffffffffffff18,3,3);
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23340();
  puVar10 = local_60;
  local_98 = local_58[0];
  pcVar6 = local_58;
  if (local_58[0] == '\0') {
    pcVar6 = &local_98;
  }
  *pcVar6 = '\0';
  if ((local_58[0] != '\0') && (puVar10 != (void*)0x0)) {
    pcVar6 = (char *)FUN_00d50b20();
  }
  if (puVar10 == (void*)0x0) {
    puVar10 = (void*)0x0;
    local_74 = (uint32_t)CONCAT71((int7)((uint64_t)pcVar6 >> 8),1);
    uVar7 = 0;
  }
  else {
    uVar7 = CONCAT71((int7)((uint64_t)lVar4 >> 8),1);
    if (local_98 == '\0') {
      FUN_00d50b00();
    }
    local_74 = 0;
  }
  local_f0 = uVar7;
  local_80 = puVar10;
  uVar7 = FUN_00db98a0();
  puVar10 = local_60;
  if (local_60 == (void*)0x0) {
    local_64 = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
    puVar10 = (void*)0x0;
    local_70 = 0;
  }
  else {
    if (local_58[0] == '\0') {
      uVar7 = FUN_00d50b00();
      if ((local_58[0] == '\0') || (local_60 == (void*)0x0)) {
        local_64 = 0;
        local_70 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
        goto LAB_00db49b8;
      }
      uVar7 = FUN_00d50b20();
    }
    local_70 = CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
    local_64 = 0;
  }
LAB_00db49b8:
  *(void*)(this_ptr + 0x38) = 1;
  for (uVar9 = (uint64_t)*(uint *)((int64_t)puVar10 + 0xc); 0 < (int)uVar9; uVar9 = uVar9 - 1) {
    (**(code **)(**(int64_t **)(puVar10[2] + -8 + uVar9 * 8) + 0x368))();
  }
  FUN_00d403d0();
  local_150 = g_02782f88;
  if (g_02782f88 != 0) {
    FUN_00d50b00();
  }
  local_148 = '\x01';
  FUN_00d50b00();
  local_140 = local_88;
  local_138 = '\0';
  FUN_00d40470(&local_140,&stack0xffffffffffffff28,3,3);
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00db98a0();
  iVar1 = *(int *)((int64_t)local_60 + 0xc);
  if (local_58[0] != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 != 0) {
    FUN_00db9870();
    puVar10 = local_60;
    if (local_58[0] == '\0') {
      if (local_60 != (void*)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58[0] = '\0';
    }
    FUN_00db9820();
    if (puVar10 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    puVar10 = *(void**)(this_ptr + 0x20);
    if (puVar10 != (void*)0x0) {
      FUN_00d50b00();
    }
    local_58[0] = '\0';
    local_60 = puVar10;
    FUN_00d21140();
    if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 != (void*)0x0) {
      FUN_00d50b20();
    }
    plVar8 = (int64_t *)FUN_000679b0();
    (**(code **)(*plVar8 + 0x18))();
    plVar2 = *(int64_t **)(this_ptr + 0x20);
    if (plVar2 == plVar8) {
      FUN_00d50b20();
    }
    else {
      *(int64_t **)(this_ptr + 0x20) = plVar8;
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(int64_t *)(this_ptr + 0x28) != 0) {
    FUN_00d23340();
    puVar10 = local_60;
    pcVar6 = local_58;
    if (local_58[0] == '\0') {
      pcVar6 = &local_98;
    }
    local_98 = local_58[0];
    *pcVar6 = '\0';
    if ((local_58[0] != '\0') && (puVar10 != (void*)0x0)) {
      FUN_00d50b20();
    }
    puVar3 = *(void**)(this_ptr + 0x28);
    if ((local_98 != '\0') && (puVar10 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 == puVar3) {
      *(void*)(this_ptr + 0x28) = 0;
    }
  }
  FUN_00d23740();
  *(void*)(this_ptr + 0x38) = 0;
  FUN_00d403d0();
  local_130 = g_027e3b30;
  if (g_027e3b30 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  FUN_00d50b00();
  local_120 = local_88;
  local_118 = '\0';
  FUN_00d40470(&local_120,&stack0xffffffffffffff38,3,3);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_110 = g_026e0f70;
  if (g_026e0f70 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  FUN_00d50b00();
  local_100 = local_88;
  local_f8 = '\0';
  FUN_00d40470(&local_100,&stack0xffffffffffffff48,3,3);
  puVar10 = local_80;
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if ((char)local_64 == '\0') {
    FUN_00d50b20();
  }
  if ((char)local_74 == '\0' && puVar10 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

