// Function: FUN_01a0e240
// Address: 01a0e240
// Size: 2525 bytes
// Class: Unknown

void FUN_01a0e240(uint64_t param_1)

{
  void *pvVar1;
  uint64_t uVar2;
  void* pVar3;
  char *pcVar4;
  uint uVar5;
  int64_t this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plVar9;
  byte bVar10;
  char cVar11;
  undefined7 uVar13;
  uint64_t uVar12;
  bool bVar14;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
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
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_60;
  int64_t local_58;
  int64_t local_50;
  char local_48 [8];
  char local_40 [8];
  uint local_38;
  uint local_34;
  
  FUN_01a18a00();
  FUN_00d23310();
  lVar8 = local_50;
  pVar3 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_48[0]);
  pcVar4 = local_40;
  if (local_48[0] != '\0') {
    pcVar4 = local_48;
  }
  local_40[0] = local_48[0];
  *pcVar4 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pvVar1 = _pthread_getspecific(pVar3);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_58 = FUN_00e8b990();
  if (local_58 != 0) {
    FUN_00d50b00();
  }
  if ((local_40[0] != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 == 0) {
    return;
  }
  FUN_0006e1c0();
  local_60 = FUN_00e86210();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  lVar6 = g_026d83d8;
  if (g_026d83d8 != 0) {
    FUN_00d50b00();
  }
  uVar2 = FUN_00c841b0();
  lVar7 = local_50;
  if (local_50 == 0) {
    uVar13 = (undefined7)((uint64_t)lVar8 >> 8);
    bVar10 = 1;
    local_34 = 0;
  }
  else {
    if (local_48[0] == '\0') {
      uVar2 = FUN_00d50b00();
      bVar10 = 0;
      uVar13 = 0;
      local_34 = (uint)CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
      if ((local_48[0] == '\0') || (local_50 == 0)) goto LAB_01a0e3da;
      uVar2 = FUN_00d50b20();
    }
    else {
      local_48[0] = '\0';
    }
    local_34 = (uint)CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
    bVar10 = 0;
    uVar13 = 0;
  }
LAB_01a0e3da:
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  local_a8 = 0;
  plVar9 = (int64_t *)(this_ptr + 0x1f8);
  (**(code **)(*(int64_t *)(this_ptr + 0x1f8) + 0x10))();
  FUN_00d50b00();
  local_a8 = '\x01';
  local_190 = 0;
  local_188 = '\0';
  local_180 = lVar7;
  local_178 = '\0';
  local_b0 = plVar9;
  FUN_00cbad30(&local_180,&local_190,0xa0);
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    (**(code **)(*local_b0 + 0x10))();
    FUN_00d50b20();
  }
  lVar8 = g_026fe480;
  if (g_026fe480 != 0) {
    FUN_00d50b00();
  }
  local_170 = lVar8;
  local_168 = '\x01';
  FUN_00c841b0();
  uVar5 = local_34;
  lVar6 = local_50;
  if (lVar7 == local_50) {
    if ((bool)(bVar10 & lVar7 != 0)) {
      if (local_48[0] != '\0') goto LAB_01a0e53a;
      FUN_00d50b00();
      uVar5 = (uint)CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
    }
LAB_01a0e591:
    if (local_48[0] == '\0') {
      uVar12 = (uint64_t)uVar5;
    }
    else {
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      uVar12 = (uint64_t)uVar5;
    }
  }
  else {
    bVar10 = (byte)local_34;
    if (local_48[0] == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      bVar14 = lVar7 != 0;
      uVar5 = (uint)CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
      lVar7 = lVar6;
      if ((bVar10 & bVar14) == 1) {
        FUN_00d50b20();
      }
      goto LAB_01a0e591;
    }
    bVar14 = lVar7 != 0;
    lVar7 = lVar6;
    if ((bVar10 & bVar14) == 1) {
      FUN_00d50b20();
    }
LAB_01a0e53a:
    local_48[0] = '\0';
    uVar12 = CONCAT71(uVar13,1);
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  local_98 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_98 = '\x01';
  local_160 = 0;
  local_158 = '\0';
  local_148 = '\0';
  local_150 = lVar7;
  local_a0 = plVar9;
  FUN_00cbad30(&local_150,&local_160,0xa0);
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    (**(code **)(*local_a0 + 0x10))();
    FUN_00d50b20();
  }
  lVar8 = g_026d8400;
  if (g_026d8400 != 0) {
    FUN_00d50b00();
  }
  local_140 = lVar8;
  local_138 = '\x01';
  FUN_00c841b0();
  lVar6 = local_50;
  cVar11 = (char)uVar12;
  uVar13 = (undefined7)((uint64_t)lVar8 >> 8);
  if (lVar7 == local_50) {
    lVar6 = lVar7;
    if ((cVar11 == '\0') && (lVar7 != 0)) {
      if (local_48[0] != '\0') goto LAB_01a0e6fa;
      uVar5 = (uint)CONCAT71(uVar13,1);
      FUN_00d50b00();
    }
    else {
      uVar5 = (uint)uVar12;
    }
LAB_01a0e778:
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_48[0] == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
      uVar5 = (uint)CONCAT71(uVar13,1);
      if ((cVar11 != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01a0e778;
    }
    if ((cVar11 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
LAB_01a0e6fa:
    local_48[0] = '\0';
    uVar5 = (uint)CONCAT71((int7)(uVar12 >> 8),1);
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  local_88 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_88 = '\x01';
  local_130 = 0;
  local_128 = '\0';
  local_118 = '\0';
  local_120 = lVar6;
  local_90 = plVar9;
  FUN_00cbad30(&local_120,&local_130,0xa0);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  lVar8 = g_026d83e8;
  if (g_026d83e8 != 0) {
    FUN_00d50b00();
  }
  local_110 = lVar8;
  local_108 = '\x01';
  uVar2 = FUN_00c841b0();
  lVar8 = local_50;
  if (lVar6 == local_50) {
    lVar8 = lVar6;
    local_38 = uVar5;
    if (((char)uVar5 == '\0') && (lVar6 != 0)) {
      if (local_48[0] != '\0') goto LAB_01a0e8dc;
      local_38 = (uint)CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
      local_34 = uVar5;
      FUN_00d50b00();
    }
LAB_01a0e95f:
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_48[0] == '\0') {
      local_34 = uVar5;
      if (local_50 != 0) {
        uVar2 = FUN_00d50b00();
      }
      local_38 = (uint)CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
      if (((char)local_34 != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01a0e95f;
    }
    if (((char)uVar5 != '\0') && (lVar6 != 0)) {
      local_34 = uVar5;
      uVar2 = FUN_00d50b20();
    }
LAB_01a0e8dc:
    local_48[0] = '\0';
    local_38 = (uint)CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  local_78 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_100 = 0;
  local_f8 = '\0';
  local_e8 = '\0';
  local_f0 = lVar8;
  local_80 = plVar9;
  FUN_00cbad30(&local_f0,&local_100,0xa0);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
  lVar6 = g_026d83e0;
  if (g_026d83e0 != 0) {
    FUN_00d50b00();
  }
  lVar7 = local_60;
  local_e0 = lVar6;
  local_d8 = '\x01';
  uVar2 = FUN_00c841b0();
  lVar6 = local_50;
  if (lVar8 == local_50) {
    lVar6 = lVar8;
    cVar11 = (char)local_38;
    if (((char)local_38 == '\0') && (lVar8 != 0)) {
      if (local_48[0] != '\0') goto LAB_01a0eab5;
      local_38 = 0;
      FUN_00d50b00();
      cVar11 = '\x01';
    }
  }
  else {
    if (local_48[0] != '\0') {
      if (((char)local_38 != '\0') && (lVar8 != 0)) {
        local_38 = (uint)CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
        FUN_00d50b20();
      }
LAB_01a0eab5:
      local_48[0] = '\0';
      cVar11 = '\x01';
      goto LAB_01a0eb1b;
    }
    if (local_50 != 0) {
      uVar2 = FUN_00d50b00();
    }
    cVar11 = '\x01';
    if (((char)local_38 != '\0') && (lVar8 != 0)) {
      local_38 = (uint)CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
      FUN_00d50b20();
      cVar11 = '\x01';
    }
  }
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_01a0eb1b:
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  local_68 = 0;
  (**(code **)(*plVar9 + 0x10))();
  FUN_00d50b00();
  local_68 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  local_b8 = '\0';
  local_c0 = lVar6;
  local_70 = plVar9;
  FUN_00cbad30(&local_c0,&local_d0,0xa0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
  if ((cVar11 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

