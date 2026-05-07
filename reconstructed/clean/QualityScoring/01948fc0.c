// Function: FUN_01948fc0
// Address: 01948fc0
// Size: 4884 bytes
// Class: QualityScoring
// String references:
//   "_decomposedAudioSignalsAreInvalid"
//   "_itemDetectionVisualQualityLimit"
//   "_attackItemDetectionVisualQualityLimit"
//   "_audioSourceAttackItems"
//   "_audioSourcePotentialAttackItems"
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


void FUN_01948fc0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t *plVar7;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar8;
  int64_t local_2e0;
  char local_2d8;
  int64_t local_2d0;
  char local_2c8;
  int64_t local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  int64_t *local_2a0;
  char local_298;
  int64_t local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t local_260;
  char local_258;
  int64_t local_240;
  char local_238;
  int64_t *local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t *local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t *local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t *local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t *local_f0;
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
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar1 = (int64_t *)(this_ptr + 0x538);
  if (*(int64_t *)(this_ptr + 0x538) != 0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_2e0 = g_027bf410;
    if (g_027bf410 != 0) {
      FUN_00d50b00();
    }
    local_2d8 = '\x01';
    local_258 = 0;
    lVar5 = *plVar1;
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_258 = '\x01';
    local_260 = lVar5;
    FUN_00d41040(&local_260,&local_2e0);
    if ((local_258 != '\0') && (local_260 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2d8 != '\0') && (local_2e0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_2d0 = g_027e0908;
    if (g_027e0908 != 0) {
      FUN_00d50b00();
    }
    local_2c8 = '\x01';
    local_238 = 0;
    lVar5 = *plVar1;
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_238 = '\x01';
    plVar8 = &local_240;
    local_240 = lVar5;
    FUN_00d41040(plVar8,&local_2d0);
    pVar6 = (void*)plVar8;
    if ((local_238 != '\0') && (local_240 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2c8 != '\0') && (local_2d0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    plVar8 = (int64_t *)(this_ptr + 0x140);
    local_228 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x140) + 0x10))();
    FUN_00d50b00();
    local_228 = '\x01';
    local_218 = 0;
    local_220 = *plVar1;
    local_230 = plVar8;
    if (local_220 != 0) {
      FUN_00d50b00();
    }
    local_218 = '\x01';
    FUN_002771e0();
    lVar5 = FUN_00e85ef0();
    if (lVar5 == 0) {
      lVar5 = FUN_00e858c0();
      if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_019492e3;
LAB_019492d2:
      local_c8 = 0;
      FUN_00d50b00();
    }
    else {
      lVar5 = *(int64_t *)(lVar5 + 0x30);
      if (lVar5 != 0) goto LAB_019492d2;
LAB_019492e3:
      lVar5 = 0;
    }
    local_c8 = '\x01';
    plVar7 = &local_d0;
    local_d0 = lVar5;
    FUN_00cbadd0(plVar7,&local_220);
    pVar6 = (void*)plVar7;
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    if ((local_228 != '\0') && (local_230 != (int64_t *)0x0)) {
      (**(code **)(*local_230 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_208 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_208 = '\x01';
    local_1f8 = 0;
    local_200 = *plVar1;
    local_210 = plVar8;
    if (local_200 != 0) {
      FUN_00d50b00();
    }
    local_1f8 = '\x01';
    FUN_002771e0();
    lVar5 = FUN_00e85ef0();
    if (lVar5 == 0) {
      lVar5 = FUN_00e858c0();
      if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_01949459;
LAB_01949448:
      local_b8 = 0;
      FUN_00d50b00();
    }
    else {
      lVar5 = *(int64_t *)(lVar5 + 0x30);
      if (lVar5 != 0) goto LAB_01949448;
LAB_01949459:
      lVar5 = 0;
    }
    local_b8 = '\x01';
    plVar7 = &local_c0;
    local_c0 = lVar5;
    FUN_00cbadd0(plVar7,&local_200);
    pVar6 = (void*)plVar7;
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    if ((local_208 != '\0') && (local_210 != (int64_t *)0x0)) {
      (**(code **)(*local_210 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_1e8 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_1e8 = '\x01';
    local_1d8 = 0;
    local_1e0 = *plVar1;
    local_1f0 = plVar8;
    if (local_1e0 != 0) {
      FUN_00d50b00();
    }
    local_1d8 = '\x01';
    FUN_002771e0();
    lVar5 = FUN_00e85ef0();
    if (lVar5 == 0) {
      lVar5 = FUN_00e858c0();
      if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_019495cf;
LAB_019495be:
      local_a8 = 0;
      FUN_00d50b00();
    }
    else {
      lVar5 = *(int64_t *)(lVar5 + 0x30);
      if (lVar5 != 0) goto LAB_019495be;
LAB_019495cf:
      lVar5 = 0;
    }
    local_a8 = '\x01';
    plVar7 = &local_b0;
    local_b0 = lVar5;
    FUN_00cbadd0(plVar7,&local_1e0);
    pVar6 = (void*)plVar7;
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != (int64_t *)0x0)) {
      (**(code **)(*local_1f0 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_1c8 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_1c8 = '\x01';
    local_1b8 = 0;
    local_1c0 = *plVar1;
    local_1d0 = plVar8;
    if (local_1c0 != 0) {
      FUN_00d50b00();
    }
    local_1b8 = '\x01';
    FUN_002771e0();
    lVar5 = FUN_00e85ef0();
    if (lVar5 == 0) {
      lVar5 = FUN_00e858c0();
      if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_01949745;
LAB_01949734:
      local_98 = 0;
      FUN_00d50b00();
    }
    else {
      lVar5 = *(int64_t *)(lVar5 + 0x30);
      if (lVar5 != 0) goto LAB_01949734;
LAB_01949745:
      lVar5 = 0;
    }
    local_98 = '\x01';
    plVar7 = &local_a0;
    local_a0 = lVar5;
    FUN_00cbadd0(plVar7,&local_1c0);
    pVar6 = (void*)plVar7;
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
      (**(code **)(*local_1d0 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_1a8 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_1a8 = '\x01';
    local_198 = 0;
    local_1a0 = *plVar1;
    local_1b0 = plVar8;
    if (local_1a0 != 0) {
      FUN_00d50b00();
    }
    local_198 = '\x01';
    FUN_002771e0();
    lVar5 = FUN_00e85ef0();
    if (lVar5 == 0) {
      lVar5 = FUN_00e858c0();
      if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_019498c0;
LAB_019498b2:
      local_88 = 0;
      FUN_00d50b00();
    }
    else {
      lVar5 = *(int64_t *)(lVar5 + 0x30);
      if (lVar5 != 0) goto LAB_019498b2;
LAB_019498c0:
      lVar5 = 0;
    }
    local_88 = '\x01';
    local_90 = lVar5;
    FUN_00cbadd0(&local_90,&local_1a0);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
      (**(code **)(*local_1b0 + 0x10))();
      FUN_00d50b20();
    }
  }
  lVar5 = *arg1;
  lVar2 = *plVar1;
  lVar3 = lVar2;
  if (lVar2 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *plVar1 = lVar5;
    lVar3 = lVar5;
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar3 = *plVar1;
    }
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_00d403d0();
  local_188 = 0;
  FUN_00d50b00();
  local_2c0 = g_027bf410;
  local_188 = '\x01';
  local_190 = this_ptr;
  if (g_027bf410 != 0) {
    FUN_00d50b00();
  }
  local_2b8 = '\x01';
  local_178 = 0;
  lVar5 = *plVar1;
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_178 = '\x01';
  local_180 = lVar5;
  FUN_00d41430(&local_180,&local_2c0);
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2b8 != '\0') && (local_2c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_168 = 0;
  FUN_00d50b00();
  local_2b0 = g_027e0908;
  local_168 = '\x01';
  local_170 = this_ptr;
  if (g_027e0908 != 0) {
    FUN_00d50b00();
  }
  local_2a8 = '\x01';
  local_158 = 0;
  lVar5 = *plVar1;
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_158 = '\x01';
  plVar8 = &local_160;
  local_160 = lVar5;
  FUN_00d41430(plVar8,&local_2b0);
  pVar6 = (void*)plVar8;
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2a8 != '\0') && (local_2b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = FUN_00e8b990();
  if (lVar5 == 0) {
    return;
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_148 = 0;
  plVar8 = (int64_t *)(this_ptr + 0x140);
  (**(code **)(*(int64_t *)(this_ptr + 0x140) + 0x10))();
  FUN_00d50b00();
  local_148 = '\x01';
  local_138 = 0;
  local_140 = *plVar1;
  local_150 = plVar8;
  if (local_140 != 0) {
    FUN_00d50b00();
  }
  local_138 = '\x01';
  FUN_002771e0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_01949ca2;
LAB_01949c94:
    local_78 = 0;
    FUN_00d50b00();
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
    if (lVar5 != 0) goto LAB_01949c94;
LAB_01949ca2:
    lVar5 = 0;
  }
  local_78 = '\x01';
  plVar7 = &local_80;
  local_80 = lVar5;
  FUN_00cbad30(plVar7,&local_140,0x90);
  pVar6 = (void*)plVar7;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
    (**(code **)(*local_150 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_128 = 0;
  (**(code **)(*plVar8 + 0x10))();
  FUN_00d50b00();
  local_128 = '\x01';
  local_118 = 0;
  local_120 = *plVar1;
  local_130 = plVar8;
  if (local_120 != 0) {
    FUN_00d50b00();
  }
  local_118 = '\x01';
  FUN_002771e0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_01949e07;
LAB_01949df9:
    local_68 = 0;
    FUN_00d50b00();
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
    if (lVar5 != 0) goto LAB_01949df9;
LAB_01949e07:
    lVar5 = 0;
  }
  local_68 = '\x01';
  plVar7 = &local_70;
  local_70 = lVar5;
  FUN_00cbad30(plVar7,&local_120,0x90);
  pVar6 = (void*)plVar7;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
    (**(code **)(*local_130 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_108 = 0;
  (**(code **)(*plVar8 + 0x10))();
  FUN_00d50b00();
  local_108 = '\x01';
  local_f8 = 0;
  local_100 = *plVar1;
  local_110 = plVar8;
  if (local_100 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  FUN_002771e0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_01949f6c;
LAB_01949f5e:
    local_58 = 0;
    FUN_00d50b00();
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
    if (lVar5 != 0) goto LAB_01949f5e;
LAB_01949f6c:
    lVar5 = 0;
  }
  local_58 = '\x01';
  plVar7 = &local_60;
  local_60 = lVar5;
  FUN_00cbad30(plVar7,&local_100,0x90);
  pVar6 = (void*)plVar7;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
    (**(code **)(*local_110 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_e8 = 0;
  (**(code **)(*plVar8 + 0x10))();
  FUN_00d50b00();
  local_e8 = '\x01';
  local_d8 = 0;
  local_e0 = *plVar1;
  local_f0 = plVar8;
  if (local_e0 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  FUN_002771e0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_0194a0d1;
LAB_0194a0c3:
    local_48 = 0;
    FUN_00d50b00();
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
    if (lVar5 != 0) goto LAB_0194a0c3;
LAB_0194a0d1:
    lVar5 = 0;
  }
  local_48 = '\x01';
  plVar7 = &local_50;
  local_50 = lVar5;
  FUN_00cbad30(plVar7,&local_e0,0x90);
  pVar6 = (void*)plVar7;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    (**(code **)(*local_f0 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  (**(code **)(*plVar8 + 0x10))();
  FUN_00d50b00();
  local_298 = '\x01';
  local_288 = 0;
  local_290 = *plVar1;
  local_2a0 = plVar8;
  if (local_290 != 0) {
    FUN_00d50b00();
  }
  local_288 = '\x01';
  FUN_002771e0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if (lVar5 != 0) {
      lVar5 = *(int64_t *)(lVar5 + 0x28);
      goto joined_r0x0194a225;
    }
  }
  else {
    lVar5 = *(int64_t *)(lVar5 + 0x30);
joined_r0x0194a225:
    if (lVar5 != 0) {
      local_278 = 0;
      FUN_00d50b00();
      goto LAB_0194a23a;
    }
  }
  lVar5 = 0;
LAB_0194a23a:
  local_278 = '\x01';
  local_280 = lVar5;
  FUN_00cbad30(&local_280,&local_290,0x90);
  if ((local_278 != '\0') && (local_280 != 0)) {
    FUN_00d50b20();
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    FUN_00d50b20();
  }
  if ((local_298 != '\0') && (local_2a0 != (int64_t *)0x0)) {
    (**(code **)(*local_2a0 + 0x10))();
    FUN_00d50b20();
  }
  return;
}

