// Function: FUN_0198e770
// Address: 0198e770
// Size: 3751 bytes
// Class: Unknown

void FUN_0198e770(void)

{
  void*puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  code *pcVar7;
  char cVar8;
  void*puVar9;
  int64_t *plVar10;
  int64_t lVar11;
  int iVar12;
  int64_t *this_ptr;
  uint32_t uVar13;
  float fVar14;
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
  int64_t *local_d0;
  char local_c8;
  int64_t local_90;
  char local_88;
  int64_t local_40;
  char local_38;
  
  FUN_01a195d0();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_026286f0;
  puVar9[2] = &g_02628a78;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  uVar6 = _UNK_0239372c;
  uVar5 = _UNK_02393728;
  uVar13 = _UNK_02393724;
  *(void*)(puVar9 + 6) = g_02393720;
  *(void*)((int64_t)puVar9 + 0x34) = uVar13;
  *(void*)(puVar9 + 7) = uVar5;
  *(void*)((int64_t)puVar9 + 0x3c) = uVar6;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0;
  puVar9[0xe] = 0;
  puVar9[0xf] = 0;
  puVar9[0x10] = 0;
  FUN_00d500e0();
  puVar9[8] = this_ptr;
  puVar1 = (void*)this_ptr[0xa5];
  if (puVar1 == puVar9) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0xa5] = (int64_t)puVar9;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  *(void*)((int64_t)this_ptr + 0x4dd) = 1;
  uVar13 = FUN_00d6f370();
  lVar4 = g_027e1348;
  if (g_027e1348 != 0) {
    uVar13 = FUN_00d50b00();
  }
  uVar13 = FUN_00d708a0(uVar13,1);
  *(void*)(this_ptr + 0x5e) = uVar13;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  iVar12 = 1;
  if ((int)this_ptr[0x5e] != 0) {
    iVar12 = (int)this_ptr[0x5e];
  }
  *(int *)((int64_t)this_ptr + 0x2f4) = iVar12;
  *(void*)(this_ptr + 0x43) = 0x3e4ccccd;
  lVar4 = CONCAT44(g_023dccf4._4_4_,(uint32_t)g_023dccf4);
  this_ptr[0x3f] = CONCAT44(g_023dccec._4_4_,(uint32_t)g_023dccec);
  this_ptr[0x40] = lVar4;
  *(void*)(this_ptr + 0x50) = 1;
  this_ptr[0x53] = 0x7ff8000000000000;
  lVar4 = CONCAT44(g_023dccf4._4_4_,(uint32_t)g_023dccf4);
  this_ptr[0x5c] = CONCAT44(g_023dccec._4_4_,(uint32_t)g_023dccec);
  this_ptr[0x5d] = lVar4;
  *(void*)((int64_t)this_ptr + 0x28c) = g_023dccdc;
  uVar6 = g_023dccf4._4_4_;
  uVar5 = (uint32_t)g_023dccf4;
  uVar13 = g_023dccec._4_4_;
  *(void*)(this_ptr + 100) = (uint32_t)g_023dccec;
  *(void*)((int64_t)this_ptr + 0x324) = uVar13;
  *(void*)(this_ptr + 0x65) = uVar5;
  *(void*)((int64_t)this_ptr + 0x32c) = uVar6;
  *(void*)((int64_t)this_ptr + 0x352) = 0x101;
  *(void*)((int64_t)this_ptr + 0x354) = 1;
  *(void*)((int64_t)this_ptr + 0x35c) = 0;
  this_ptr[0x55] = 0x7ff8000000000000;
  *(void*)(this_ptr + 0x56) = 0x7fc00000;
  this_ptr[0x57] = 0x7ff8000000000000;
  *(void*)(this_ptr + 0x4e) = 0;
  *(void*)(this_ptr + 0x79) = 0x3f800000;
  *(void*)(this_ptr + 0x85) = 0;
  *(void*)((int64_t)this_ptr + 0x42c) = 1;
  fVar14 = (float)(**(code **)(*this_ptr + 0xc40))();
  *(float *)(this_ptr + 0x44) = fVar14 + g_02394218;
  fVar14 = (float)(**(code **)(*this_ptr + 0xc40))();
  *(float *)((int64_t)this_ptr + 0x224) = fVar14 + g_0239394c;
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar9 = &g_026359a0;
  puVar9[2] = &g_02635e60;
  (*g_026359b8)();
  puVar1 = (void*)this_ptr[0x82];
  if (puVar1 == puVar9) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x82] = (int64_t)puVar9;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar9 = &g_02630fb8;
  puVar9[2] = &g_02631478;
  (*g_02630fd0)();
  puVar1 = (void*)this_ptr[0x83];
  if (puVar1 == puVar9) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x83] = (int64_t)puVar9;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar9 = &g_0261bc38;
  puVar9[2] = &g_0261c0f8;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  (*g_0261bc50)();
  puVar1 = (void*)this_ptr[0x84];
  if (puVar1 == puVar9) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x84] = (int64_t)puVar9;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  plVar10 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar10 + 0x18))();
  plVar2 = (int64_t *)this_ptr[0x7a];
  if (plVar2 == plVar10) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x7a] = (int64_t)plVar10;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01ca6970();
  lVar4 = local_e0;
  if (local_d8 == '\0') {
    if (local_e0 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_d8 = '\0';
  }
  FUN_01c92fe0();
  lVar3 = this_ptr[0x77];
  lVar11 = lVar3;
  if (lVar3 == local_40) goto LAB_0198ebe1;
  lVar11 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar11 = 0;
      goto LAB_0198eb96;
    }
    FUN_00d50b00();
    lVar3 = this_ptr[0x77];
    this_ptr[0x77] = local_40;
  }
  else {
    local_38 = '\0';
LAB_0198eb96:
    this_ptr[0x77] = lVar11;
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
    lVar11 = local_40;
  }
LAB_0198ebe1:
  if ((local_38 != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  uVar13 = FUN_00d6f370();
  lVar4 = g_02705950;
  if (g_02705950 != 0) {
    uVar13 = FUN_00d50b00();
  }
  uVar13 = FUN_00d708a0(uVar13,0);
  *(void*)(this_ptr + 0x9c) = uVar13;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_025823b0;
  puVar9[4] = 0;
  *(void*)((int64_t)puVar9 + 0xc) = 0;
  *(void*)((int64_t)puVar9 + 0x12) = 0;
  (*g_025823c8)();
  puVar1 = (void*)this_ptr[0x67];
  if (puVar1 == puVar9) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x67] = (int64_t)puVar9;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00df2b00();
  local_c8 = 0;
  (**(code **)(this_ptr[0x29] + 0x10))();
  FUN_00d50b00();
  local_c8 = '\x01';
  local_d0 = this_ptr + 0x29;
  FUN_00df2b40();
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    (**(code **)(*local_d0 + 0x10))();
    FUN_00d50b20();
  }
  FUN_00df2c50();
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_025e2bf8;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  (*g_025e2c10)();
  puVar1 = (void*)this_ptr[0x6f];
  if (puVar1 == puVar9) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x6f] = (int64_t)puVar9;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_0258a670;
  pcVar7 = g_0258a688;
  (*g_0258a688)();
  puVar1 = (void*)this_ptr[0x45];
  if (puVar1 == puVar9) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x45] = (int64_t)puVar9;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e38130(1,1,1);
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_0258a670;
  (*pcVar7)();
  puVar1 = (void*)this_ptr[0x47];
  if (puVar1 == puVar9) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x47] = (int64_t)puVar9;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00e38130(1,1,1);
  uVar13 = FUN_00d6f370();
  if ((local_38 == '\0') && (local_40 != 0)) {
    uVar13 = FUN_00d50b00();
  }
  lVar4 = g_027e1350;
  plVar2 = (int64_t *)this_ptr[0x27];
  if (g_027e1350 != 0) {
    uVar13 = FUN_00d50b00();
  }
  FUN_00d70f90(uVar13,1);
  (**(code **)(*plVar2 + 0x3d0))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(&g_00001480 + *this_ptr))();
  uVar13 = (**(code **)(&UNK_00001498 + *this_ptr))();
  *(void*)(this_ptr + 0x6b) = uVar13;
  *(void*)((int64_t)this_ptr + 0x51c) = 0x3f800000;
  *(void*)((int64_t)this_ptr + 0x2fc) = 0;
  FUN_00d6f370();
  lVar4 = g_027e1358;
  if (g_027e1358 != 0) {
    FUN_00d50b00();
  }
  cVar8 = FUN_00d70700();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar8 != '\0') {
    uVar13 = FUN_00d6f370();
    lVar4 = g_027e1358;
    if (g_027e1358 != 0) {
      uVar13 = FUN_00d50b00();
    }
    uVar13 = FUN_00d708a0(uVar13,0);
    *(void*)((int64_t)this_ptr + 0x2fc) = uVar13;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0x60) = 0;
  FUN_00d6f370();
  lVar4 = g_027e1360;
  if (g_027e1360 != 0) {
    FUN_00d50b00();
  }
  cVar8 = FUN_00d70700();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (cVar8 != '\0') {
    uVar13 = FUN_00d6f370();
    lVar4 = g_027e1360;
    if (g_027e1360 != 0) {
      uVar13 = FUN_00d50b00();
    }
    uVar13 = FUN_00d708a0(uVar13,0);
    *(void*)(this_ptr + 0x60) = uVar13;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_180 = g_02702db8;
  if (g_02702db8 != 0) {
    FUN_00d50b00();
  }
  local_178 = '\x01';
  local_170 = 0;
  local_168 = '\0';
  FUN_00d41430(&local_170,&local_180);
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_160 = g_027e1368;
  if (g_027e1368 != 0) {
    FUN_00d50b00();
  }
  local_158 = '\x01';
  local_150 = 0;
  local_148 = '\0';
  FUN_00d41430(&local_150,&local_160);
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_140 = g_027ebc60;
  if (g_027ebc60 != 0) {
    FUN_00d50b00();
  }
  local_138 = '\x01';
  local_88 = 0;
  lVar4 = this_ptr[0x27];
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  local_90 = lVar4;
  FUN_00d41430(&local_90,&local_140);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_130 = g_026fe3e0;
  if (g_026fe3e0 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  FUN_00d41430(&local_120,&local_130);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_110 = g_027e1370;
  if (g_027e1370 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  local_100 = 0;
  local_f8 = '\0';
  FUN_00d41430(&local_100,&local_110);
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  (**(code **)(this_ptr[0x2a] + 0x10))();
  uVar13 = FUN_00d50b00();
  local_f0 = 0;
  local_e8 = '\0';
  FUN_01f47190(uVar13,&local_f0);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr + 0x2a != (int64_t *)0x0) {
    (**(code **)(this_ptr[0x2a] + 0x10))();
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x9f) = 0;
  if (local_40 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

