// Function: FUN_01bff300
// Address: 01bff300
// Size: 2096 bytes
// Class: QualityScoring
// String references:
//   "MUDetectionEditorView"
//   "_attackItemDetectionQualityLimit"
//   "_attackItemDefaultDetectionQualityLimit"
//   "_attackItemDetectionVisualQualityLimit"
// === QualityScoring properties ===
//   GNFilterQuality _filterQuality
//   bool            _detectsBassNote
//   bool            _detectsChordExtensions
//   bool            _detectsChurchModes
//   bool            _omitDoubtedThirds
//   bool            _detectsDetailedModeChanges
//   bool            _detectsSingleMode
//   bool            _reflectsPitchSystem
//   bool            _detectsPitchSystem
//   bool            _assumesLowestPitchAsRoot
//   bool            _assumesClosePosition
//   bool            _suggestsMissingThird
//   bool            _suggestsMissingFifth
//   bool            _reflectsBeatStrength
//   bool            _reflectsPitch
//   bool            _reflectsDynamic
//   bool            _reflectsDetectionQuality
//   GNInt           _extensionLimit
//   GNFraction      _granularity


void FUN_01bff300(void* param_1)

{
  char cVar1;
  int iVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *plVar7;
  undefined7 uVar9;
  uint64_t uVar8;
  int64_t this_ptr;
  int64_t **pplVar10;
  int64_t *plVar11;
  bool bVar12;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  int64_t *local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  uint64_t local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  pplVar10 = &local_40;
  FUN_01a13070();
  plVar3 = local_40;
  if ((g_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    g_02714a48 = FUN_000914a0();
    g_02714a30 = "MUDetectionEditorView";
    g_02714a38 = 0x600;
    param_1 = 0x34de90;
    g_02714a40 = FUN_0034de90;
    g_02714a50 = 0;
    ram_0000000002714a58 = 0;
    g_02714a60 = 0;
    g_02714ad8 = 0;
    ram_0000000002714ae0 = 0;
    g_02714ae8 = 0;
    g_02714aea = 1;
    g_02714a68 = 0;
    ram_0000000002714a70 = 0;
    g_02714a78 = 0;
    ram_0000000002714a80 = 0;
    g_02714a88 = 0;
    ram_0000000002714a90 = 0;
    g_02714a98 = 0;
    ram_0000000002714aa0 = 0;
    g_02714aa8 = 0;
    ram_0000000002714ab0 = 0;
    g_02714ab8 = 0;
    ram_0000000002714ac0 = 0;
    g_02714ac8 = 0;
    ram_0000000002714ad0 = 0;
    g_02714af3 = 0;
    g_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar3 == (int64_t *)0x0) {
LAB_01bff35c:
    pplVar10 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_01bff35c;
  }
  plVar3 = *pplVar10;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) {
    local_b8 = 0;
    plVar11 = (int64_t *)0x0;
    plVar3 = *(int64_t **)(this_ptr + 0xe0);
    if (plVar3 == (int64_t *)0x0) goto LAB_01bff97c;
  }
  else {
    pplVar10 = &local_f8;
    FUN_01a13070();
    plVar3 = local_f8;
    if ((g_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      g_02714a48 = FUN_000914a0();
      g_02714a30 = "MUDetectionEditorView";
      g_02714a38 = 0x600;
      param_1 = 0x34de90;
      g_02714a40 = FUN_0034de90;
      g_02714a50 = 0;
      ram_0000000002714a58 = 0;
      g_02714a60 = 0;
      g_02714ad8 = 0;
      ram_0000000002714ae0 = 0;
      g_02714ae8 = 0;
      g_02714aea = 1;
      g_02714a68 = 0;
      ram_0000000002714a70 = 0;
      g_02714a78 = 0;
      ram_0000000002714a80 = 0;
      g_02714a88 = 0;
      ram_0000000002714a90 = 0;
      g_02714a98 = 0;
      ram_0000000002714aa0 = 0;
      g_02714aa8 = 0;
      ram_0000000002714ab0 = 0;
      g_02714ab8 = 0;
      ram_0000000002714ac0 = 0;
      g_02714ac8 = 0;
      ram_0000000002714ad0 = 0;
      g_02714af3 = 0;
      g_02714aeb = 0;
      ___cxa_guard_release();
    }
    if (plVar3 == (int64_t *)0x0) {
LAB_01bff3ca:
      pplVar10 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar3 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') goto LAB_01bff3ca;
    }
    (**(code **)(&UNK_00001668 + **pplVar10))();
    plVar11 = local_40;
    if (local_40 == (int64_t *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar9 = (undefined7)((uint64_t)plVar3 >> 8);
      if (local_38 == '\0') {
        FUN_00d50b00();
        uVar8 = CONCAT71(uVar9,1);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        uVar8 = CONCAT71(uVar9,1);
      }
    }
    if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = *(int64_t **)(this_ptr + 0xe0);
    local_b8 = uVar8;
    if (plVar11 == plVar3) goto LAB_01bff97c;
  }
  if (plVar3 == (int64_t *)0x0) {
    plVar3 = (int64_t *)0x0;
    if (plVar11 != (int64_t *)0x0) goto LAB_01bff4ea;
  }
  else {
    local_a8 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0xb8) + 0x10))();
    FUN_00d50b00();
    local_a8 = '\x01';
    local_b0 = (int64_t *)(this_ptr + 0xb8);
    FUN_00cbb340();
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      (**(code **)(*local_b0 + 0x10))();
      FUN_00d50b20();
    }
    plVar3 = *(int64_t **)(this_ptr + 0xe0);
    if (plVar3 != plVar11) {
LAB_01bff4ea:
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *(int64_t **)(this_ptr + 0xe0) = plVar11;
      bVar12 = plVar3 != (int64_t *)0x0;
      plVar3 = plVar11;
      if (bVar12) {
        FUN_00d50b20();
        plVar3 = *(int64_t **)(this_ptr + 0xe0);
      }
    }
  }
  if (plVar3 == (int64_t *)0x0) goto LAB_01bff97c;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = FUN_00e8b990();
  if (lVar5 == 0) goto LAB_01bff97c;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  plVar3 = (int64_t *)(this_ptr + 0xb8);
  local_98 = 0;
  (**(code **)(*(int64_t *)(this_ptr + 0xb8) + 0x10))();
  FUN_00d50b00();
  local_98 = '\x01';
  local_e8 = 0;
  local_e0 = '\0';
  local_a0 = plVar3;
  uVar13 = FUN_002771e0();
  lVar5 = FUN_00e85ef0(uVar13,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da,1);
    if ((lVar5 != 0) && (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bff650;
LAB_01bff65e:
    lVar5 = 0;
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
    if (lVar5 == 0) goto LAB_01bff65e;
LAB_01bff650:
    local_68 = 0;
    FUN_00d50b00();
  }
  local_68 = '\x01';
  plVar7 = &local_70;
  local_70 = lVar5;
  FUN_00cbad30(plVar7,&local_e8,0x90);
  pVar6 = (void*)plVar7;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    (**(code **)(*local_a0 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_88 = 0;
  (**(code **)(*plVar3 + 0x10))();
  FUN_00d50b00();
  local_88 = '\x01';
  local_d8 = 0;
  local_d0 = '\0';
  local_90 = plVar3;
  uVar13 = FUN_002771e0();
  lVar5 = FUN_00e85ef0(uVar13,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da_00,1);
    if ((lVar5 != 0) && (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bff7a9;
LAB_01bff7b7:
    lVar5 = 0;
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
    if (lVar5 == 0) goto LAB_01bff7b7;
LAB_01bff7a9:
    local_58 = 0;
    FUN_00d50b00();
  }
  local_58 = '\x01';
  plVar7 = &local_60;
  local_60 = lVar5;
  FUN_00cbad30(plVar7,&local_d8,0x90);
  pVar6 = (void*)plVar7;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_78 = 0;
  (**(code **)(*plVar3 + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_c8 = 0;
  local_c0 = '\0';
  local_80 = plVar3;
  uVar13 = FUN_002771e0();
  lVar5 = FUN_00e85ef0(uVar13,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da_01,1);
    if ((lVar5 != 0) && (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bff8fc;
LAB_01bff90a:
    lVar5 = 0;
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
    if (lVar5 == 0) goto LAB_01bff90a;
LAB_01bff8fc:
    local_48 = 0;
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar5;
  FUN_00cbad30(&local_50,&local_c8,0x90);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
LAB_01bff97c:
  if (((char)local_b8 != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

