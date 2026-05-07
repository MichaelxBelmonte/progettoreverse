// Function: FUN_016d4550
// Address: 016d4550
// Size: 2732 bytes
// Class: Unknown

void FUN_016d4550(void*param_1,int param_2,uint32_t param_3)

{
  void*puVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t *plVar6;
  int64_t *arg1;
  void*puVar7;
  int64_t lVar8;
  bool bVar9;
  bool bVar10;
  uint64_t uVar11;
  uint64_t extraout_XMM0_Qa;
  double dVar12;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar13 [16];
  int64_t local_180;
  uint8_t local_178;
  int64_t local_170;
  uint8_t local_168;
  int64_t local_160;
  uint8_t local_158;
  int64_t local_150;
  int64_t local_148;
  double local_140;
  double local_138;
  double local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  double local_e8;
  uint64_t uStack_e0;
  int64_t local_d0;
  int64_t local_c8;
  uint64_t local_c0;
  uint32_t local_b4;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int local_80;
  void* local_7c;
  int64_t local_78;
  void*local_70;
  char local_68 [8];
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  int64_t local_38;
  
  local_7c = (void*)param_1;
  local_80 = param_2;
  pvVar2 = _pthread_getspecific(local_7c);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_128 = *arg1;
  local_120 = '\0';
  FUN_01901690();
  puVar7 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (void*)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)((int64_t)puVar7 + 0xc) < 2) goto LAB_016d4fed;
  local_e8 = (double)CONCAT44(local_e8._4_4_,param_3);
  bVar9 = local_80 != 0;
  bVar10 = local_7c != 0;
  if (local_7c == 1) {
    FUN_016d53b0();
    local_78 = (int64_t)local_70;
    param_1 = local_70;
    if (local_70 == (void*)0x0) {
      local_c0 = 0;
    }
    else {
      local_c0 = CONCAT71((int7)((uint64_t)local_70 >> 8),1);
      if (local_68[0] == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    local_c0 = 0;
    local_78 = 0;
  }
  local_b4 = 0xffffffff;
  lVar8 = **(int64_t **)((int64_t)puVar7 + 0x10);
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  local_38 = lVar8;
  FUN_00d23340();
  puVar1 = local_70;
  lVar8 = CONCAT71((int7)((uint64_t)param_1 >> 8),local_68[0]);
  plVar6 = &local_90;
  if (local_68[0] != '\0') {
    plVar6 = (int64_t *)local_68;
  }
  local_90 = CONCAT71(local_90._1_7_,local_68[0]);
  *(char *)plVar6 = '\0';
  if ((local_68[0] != '\0') && (puVar1 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_40 = (int64_t)puVar1;
  if (((char)local_90 == '\0') && (puVar1 != (void*)0x0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific((void*)lVar8);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    lVar8 = local_38;
  }
  uVar11 = FUN_019079b0();
  local_d0 = FUN_016cbad0(uVar11,0);
  pvVar2 = _pthread_getspecific((void*)lVar8);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_118 = local_38;
  local_110 = '\0';
  local_130 = (double)FUN_018fde50();
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific((void*)lVar8);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    lVar8 = local_38;
  }
  uVar11 = FUN_019079b0();
  FUN_016d5810(extraout_XMM0_Qa,uVar11);
  local_c8 = (int64_t)local_70;
  if ((local_68[0] == '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b00();
  }
  pVar5 = (void*)lVar8;
  if ((bVar10 & (bVar9 | local_e8._0_1_)) != 0) {
    if (local_80 == 0) {
      pvVar2 = _pthread_getspecific(pVar5);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar8 = local_40;
      }
      lVar3 = FUN_019079b0();
      pvVar2 = _pthread_getspecific((void*)lVar8);
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        lVar8 = local_38;
      }
      local_a0 = FUN_019079b0();
      local_70 = (void*)lVar3;
      FUN_00e7b970();
      local_90 = (int64_t)local_70;
      pvVar2 = _pthread_getspecific((void*)lVar8);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar8 = local_40;
      }
      local_e8 = (double)FUN_01907950();
      uStack_e0 = extraout_XMM0_Qb;
      pvVar2 = _pthread_getspecific((void*)lVar8);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar8 = local_38;
      }
      pVar5 = (void*)lVar8;
      local_140 = (double)FUN_01907950();
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_108 = local_40;
      local_100 = '\0';
      local_138 = (double)FUN_018fde50();
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      dVar12 = (double)FUN_00e7c860();
      dVar12 = ((local_e8 - local_140) / (g_023b4df8 / ((local_138 + local_130) * g_023942d0)))
               / dVar12;
      auVar13._8_8_ = _UNK_023945b8 & uStack_e0 | _UNK_023945c8;
      auVar13._0_8_ = (double)(g_023945b0 & (uint64_t)dVar12 | g_023945c0) + dVar12;
      auVar13 = roundsd(auVar13,auVar13,0xb);
      local_a0 = CONCAT44(local_a0._4_4_,(int)auVar13._0_8_);
      local_70 = (void*)local_d0;
      FUN_00e7c2a0();
      FUN_00e7b970();
    }
    else {
      local_70 = (void*)local_d0;
      FUN_00e7c2a0();
    }
    local_e8 = (double)local_70;
    if (2 < *(int *)((int64_t)puVar7 + 0xc)) {
      lVar8 = 1;
      do {
        lVar3 = *(int64_t *)(*(int64_t *)((int64_t)puVar7 + 0x10) + lVar8 * 8);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        FUN_016d5920();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int64_t)*(int *)((int64_t)puVar7 + 0xc) + -1);
    }
    local_180 = local_40;
    local_178 = 0;
    pVar5 = 0;
    FUN_016d5bb0(0,&local_180);
  }
  local_170 = (int64_t)puVar7;
  local_168 = 0;
  FUN_016d5ce0();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_150 = local_38;
  local_148 = local_40;
  pVar5 = 2;
  FUN_00083ea0(2,&local_148);
  uVar11 = FUN_016cef10();
  local_b0 = local_a0;
  local_a8 = 0;
  if (local_98 == '\0') {
    if (local_a0 != 0) {
      uVar11 = FUN_00d50b00();
    }
  }
  else {
    local_98 = '\0';
  }
  local_a8 = '\x01';
  FUN_01901690(uVar11,&local_b0);
  if (puVar7 == (void*)local_90) {
LAB_016d4cc1:
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    puVar7 = (void*)local_90;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      goto LAB_016d4cc1;
    }
    FUN_00d50b20();
    local_88 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  local_70 = (void*)&g_0253d630;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_70 = &g_024c5048;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_f0 = '\0';
  pVar5 = local_7c;
  local_f8 = (int64_t)puVar7;
  FUN_01905110(local_130,1);
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if ((pvVar2 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pVar5 = (void*)local_38;
  }
  FUN_019079b0();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar5 = 0;
  local_70 = (void*)FUN_0165cf20(0,0);
  local_90 = CONCAT44(local_90._4_4_,2);
  FUN_00e7c280();
  pvVar2 = _pthread_getspecific(pVar5);
  if ((pvVar2 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    pVar5 = (void*)local_40;
  }
  FUN_019079b0();
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar5 = 0;
  local_70 = (void*)FUN_0165cf20(0,0);
  local_a0 = CONCAT44(local_a0._4_4_,2);
  uVar11 = FUN_00e7c260();
  FUN_016d62b0(uVar11,local_70);
  uVar11 = FUN_016d63b0();
  if (local_7c == 1) {
    local_160 = local_78;
    local_158 = 0;
    FUN_016d6df0(uVar11,1);
  }
  pvVar2 = _pthread_getspecific(pVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018f9310();
  if (local_c8 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_c0 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (puVar7 == (void*)0x0) {
    return;
  }
LAB_016d4fed:
  FUN_00d50b20();
  return;
}

