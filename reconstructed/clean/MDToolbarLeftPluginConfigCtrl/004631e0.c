// Function: FUN_004631e0
// Address: 004631e0
// Size: 3401 bytes
// Class: MDToolbarLeftPluginConfigCtrl
// === MDToolbarLeftPluginConfigCtrl properties ===
//                   _inspectorLeftButton
//                   _multiTrackButton
//                   _spectrumShaperButton
//                   _systemLoadView
//                   _playbackChangedObserver
//                   _jobWillRunNotification
//                   _jobProgressNotification
//                   _jobDidRunNotification
//                   _recordingDidStartNotification
//                   _recordingDidFinishNotification
//                   _selectedDocumentController
//                   _runningRecordings
//                   _groupCount


void FUN_004631e0(void)

{
  void*puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint64_t uVar7;
  void*puVar8;
  int64_t *plVar9;
  int64_t this_ptr;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  uint64_t uVar15;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  int64_t *local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_004b3c80();
  FUN_004b4d40();
  lVar3 = g_027062b0;
  if (g_027062b0 != 0) {
    FUN_00d50b00();
  }
  FUN_003b6200();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_004b4d40();
  plVar2 = local_40;
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_50 + 0x450))();
  uVar10 = g_02394298;
  if (cVar4 == '\0') {
    uVar10 = g_02390124;
  }
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_110 + 0x450))();
  uVar11 = g_02394298;
  if (cVar4 == '\0') {
    uVar11 = g_02390124;
  }
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_100 + 0x450))();
  uVar12 = g_02394298;
  if (cVar4 == '\0') {
    uVar12 = g_02390124;
  }
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_f0 + 0x450))();
  uVar13 = g_02394298;
  if (cVar4 == '\0') {
    uVar13 = g_02390124;
  }
  auVar17 = insertps(ZEXT416(uVar12),ZEXT416(uVar13),0x10);
  auVar16 = insertps(ZEXT416(uVar10),uVar11,0x10);
  (**(code **)(*plVar2 + 0x940))(auVar16._0_8_,auVar17._0_8_);
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar2 = g_02708e90;
  if (g_02708e90 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar7 = (uint64_t)(dVar14 * g_023907c0);
  dVar14 = dVar14 * g_023907c0 - g_023907c8;
  uVar15 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar15 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar15 = FUN_00d50b20();
  }
  bVar5 = (byte)(((int64_t)dVar14 & (int64_t)uVar7 >> 0x3f | uVar7) / 3);
  local_50 = plVar2;
  local_48 = '\0';
  FUN_000175c0(uVar15,&local_50);
  plVar9 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar9;
    bVar5 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((plVar9 != (int64_t *)0x0 & bVar5) == 0) {
    puVar8 = (void*)FUN_00e8fc40();
    FUN_000161a0();
    *puVar8 = &g_024f9e40;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0x10] = 0;
    puVar8[0x11] = 0;
    (*g_024f9e58)();
    puVar1 = *(void**)(this_ptr + 0xe0);
    if (puVar1 == puVar8) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0xe0) = puVar8;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &g_024f0320;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  puVar8[0x16] = 0;
  puVar8[0x17] = 0;
  puVar8[0x18] = 0;
  puVar8[0x19] = 0;
  *(void*)(puVar8 + 0x1a) = 0;
  puVar8[0x1b] = 0;
  puVar8[0x1c] = 0;
  puVar8[0x1d] = 0;
  puVar8[0x1e] = 0;
  (*g_024f0338)();
  puVar1 = *(void**)(this_ptr + 0x98);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x98) = puVar8;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &g_024df420;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  *(void*)(puVar8 + 0x16) = 0;
  *(void*)((int64_t)puVar8 + 0xb4) = 0;
  *(void*)((int64_t)puVar8 + 0xbc) = 0;
  (*g_024df438)();
  puVar1 = *(void**)(this_ptr + 0xa0);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xa0) = puVar8;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &g_024dd430;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  (*g_024dd448)();
  puVar1 = *(void**)(this_ptr + 0x90);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x90) = puVar8;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &g_024cd8a0;
  *(void*)(puVar8 + 0xe) = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  (*g_024cd8b8)();
  puVar1 = *(void**)(this_ptr + 0xd8);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xd8) = puVar8;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &g_024cde70;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  (*g_024cde88)();
  puVar1 = *(void**)(this_ptr + 0xa8);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xa8) = puVar8;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0xb0) == 0) {
    puVar8 = (void*)FUN_00e8fc40();
    FUN_000161a0();
    *puVar8 = &g_024f08f0;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    (*g_024f0908)();
    puVar1 = *(void**)(this_ptr + 0xb0);
    if (puVar1 == puVar8) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0xb0) = puVar8;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &g_02515cb0;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  (*g_02515cc8)();
  puVar1 = *(void**)(this_ptr + 0xc0);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xc0) = puVar8;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &g_024f6e28;
  *(void*)(puVar8 + 0xe) = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  (*g_024f6e40)();
  puVar1 = *(void**)(this_ptr + 200);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 200) = puVar8;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *(void*)(puVar8 + 0xe) = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  *puVar8 = &g_024f7408;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  (*g_024f7420)();
  puVar1 = *(void**)(this_ptr + 0xd0);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xd0) = puVar8;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &g_024d1190;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  puVar8[0x16] = 0;
  puVar8[0x17] = 0;
  puVar8[0x18] = 0;
  puVar8[0x19] = 0;
  puVar8[0x1a] = 0;
  puVar8[0x1b] = 0;
  puVar8[0x1c] = 0;
  uVar15 = _UNK_02393728;
  puVar8[0x1d] = g_02393720;
  puVar8[0x1e] = uVar15;
  puVar8[0x1f] = 0;
  (*g_024d11a8)();
  puVar1 = *(void**)(this_ptr + 0x128);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x128) = puVar8;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  plVar9 = (int64_t *)FUN_00e8fc40();
  FUN_000f58f0();
  (**(code **)(*plVar9 + 0x18))();
  plVar2 = *(int64_t **)(this_ptr + 0xe8);
  if (plVar2 == plVar9) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0xe8) = plVar9;
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &g_02506d48;
  puVar8[0x19] = 0;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  puVar8[0x14] = 0;
  puVar8[0x15] = 0;
  puVar8[0x16] = 0;
  puVar8[0x17] = 0;
  *(void*)(puVar8 + 0x18) = 0;
  (*g_02506d60)();
  puVar1 = *(void**)(this_ptr + 0xf8);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xf8) = puVar8;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &g_0250b3d8;
  (*g_0250b3f0)();
  puVar1 = *(void**)(this_ptr + 0xb8);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xb8) = puVar8;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  iVar6 = FUN_000030b0();
  if (iVar6 != 2) {
    puVar8 = (void*)FUN_00e8fc40();
    FUN_000161a0();
    *puVar8 = &g_024c53f8;
    (*g_024c5410)();
    puVar1 = *(void**)(this_ptr + 0x100);
    if (puVar1 == puVar8) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x100) = puVar8;
      if (puVar1 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b00();
  local_d0 = g_02709de0;
  if (g_02709de0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_026f6cf0;
  local_c8 = '\x01';
  if (g_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar3;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_000bf690(&local_c0,&local_d0,&local_b0);
  plVar2 = *(int64_t **)(this_ptr + 0xf0);
  plVar9 = plVar2;
  if (plVar2 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (int64_t *)0x0) {
        plVar9 = (int64_t *)0x0;
        goto LAB_00463c86;
      }
      FUN_00d50b00();
      plVar2 = *(int64_t **)(this_ptr + 0xf0);
      *(int64_t **)(this_ptr + 0xf0) = local_40;
      plVar9 = local_40;
    }
    else {
      local_38 = '\0';
      plVar9 = local_40;
LAB_00463c86:
      *(int64_t **)(this_ptr + 0xf0) = plVar9;
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar9 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_a0 = g_027062b8;
  if (g_027062b8 != 0) {
    FUN_00d50b00();
  }
  lVar3 = g_026f6d00;
  local_98 = '\x01';
  if (g_026f6d00 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar3;
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_000bf690(&local_90,&local_a0,&local_80);
  plVar2 = *(int64_t **)(this_ptr + 0x108);
  plVar9 = plVar2;
  if (plVar2 == local_40) goto LAB_00463e2f;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      plVar9 = (int64_t *)0x0;
      goto LAB_00463de1;
    }
    FUN_00d50b00();
    plVar2 = *(int64_t **)(this_ptr + 0x108);
    *(int64_t **)(this_ptr + 0x108) = local_40;
    plVar9 = local_40;
  }
  else {
    local_38 = '\0';
    plVar9 = local_40;
LAB_00463de1:
    *(int64_t **)(this_ptr + 0x108) = plVar9;
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar9 = local_40;
  }
LAB_00463e2f:
  if ((local_38 != '\0') && (plVar9 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_000161a0();
  *puVar8 = &g_0250a0d8;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  (*g_0250a0f0)();
  puVar1 = *(void**)(this_ptr + 0x120);
  if (puVar1 == puVar8) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x120) = puVar8;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}

