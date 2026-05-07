// Function: FUN_01c522e0
// Address: 01c522e0
// Size: 1674 bytes
// Class: MUAdvancedTempoDetectionDialog
// === MUAdvancedTempoDetectionDialog properties ===
//                   _highlightedBeatValuePoint
//                   _setCursorTimeDisabled
//                   _zoomToFitAverageTempoDisabled
//                   _skipZoomToFitAverageTempo


void FUN_01c522e0(void)

{
  int64_t lVar1;
  double dVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint64_t uVar6;
  void*puVar7;
  int64_t *plVar8;
  void*puVar9;
  int64_t lVar10;
  int64_t this_ptr;
  uint64_t uVar11;
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
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_30;
  char local_28;
  
  FUN_01e3b710();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_0266ddf0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  FUN_00d500e0();
  lVar1 = *(int64_t *)(this_ptr + 0x2a0);
  *(void**)(this_ptr + 0x2a0) = puVar7;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 400) = 1;
  plVar8 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar8 + 0x18))();
  lVar1 = *(int64_t *)(this_ptr + 0x1d8);
  *(int64_t **)(this_ptr + 0x1d8) = plVar8;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x22f) = 1;
  *(void*)(this_ptr + 0x1d0) = 1;
  uVar6 = _UNK_0241ea08;
  *(void*)(this_ptr + 0x1b8) = g_0241ea00;
  *(void*)(this_ptr + 0x1c0) = uVar6;
  uVar5 = g_023dccf4._4_4_;
  uVar4 = (uint32_t)g_023dccf4;
  uVar3 = g_023dccec._4_4_;
  *(void*)(this_ptr + 0x21c) = (uint32_t)g_023dccec;
  *(void*)(this_ptr + 0x220) = uVar3;
  *(void*)(this_ptr + 0x224) = uVar4;
  *(void*)(this_ptr + 0x228) = uVar5;
  FUN_016bf040();
  lVar1 = *(int64_t *)(this_ptr + 0x210);
  lVar10 = lVar1;
  if (lVar1 == local_30) goto LAB_01c52423;
  lVar10 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar10 = 0;
      goto LAB_01c523d8;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x210);
    *(int64_t *)(this_ptr + 0x210) = local_30;
  }
  else {
    local_28 = '\0';
LAB_01c523d8:
    *(int64_t *)(this_ptr + 0x210) = lVar10;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar10 = local_30;
  }
LAB_01c52423:
  if ((local_28 != '\0') && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_025823b0;
  puVar9[4] = 0;
  *(void*)((int64_t)puVar9 + 0xc) = 0;
  *(void*)((int64_t)puVar9 + 0x12) = 0;
  (*g_025823c8)();
  puVar7 = *(void**)(this_ptr + 0x150);
  if (puVar7 == puVar9) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x150) = puVar9;
    if (puVar7 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00df2b00();
  local_88 = 0;
  (**(code **)(*(int64_t *)(this_ptr + 0x140) + 0x10))();
  FUN_00d50b00();
  local_88 = '\x01';
  local_90 = (int64_t *)(this_ptr + 0x140);
  FUN_00df2b40();
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  FUN_00df2c50();
  FUN_00d403d0();
  FUN_00d50b00();
  local_130 = g_027e3b30;
  if (g_027e3b30 != 0) {
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
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_110 = g_027f0ae0;
  if (g_027f0ae0 != 0) {
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
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_f0 = g_026fce70;
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d41430(&local_e0,&local_f0);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_d0 = g_02702300;
  if (g_02702300 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d41430(&local_c0,&local_d0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_b0 = g_027ebc50;
  if (g_027ebc50 != 0) {
    FUN_00d50b00();
  }
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d41430(&local_a0,&local_b0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  uVar11 = -(uint64_t)(*(double *)(this_ptr + 0x1c0) == 0.0);
  dVar2 = (double)_log(SUB84(*(double *)(this_ptr + 0x1b8) /
                             (double)(~uVar11 & (uint64_t)*(double *)(this_ptr + 0x1c0) |
                                     g_0238fee8 & uVar11),0));
  *(float *)(this_ptr + 0x2a8) = (float)dVar2;
  return;
}

