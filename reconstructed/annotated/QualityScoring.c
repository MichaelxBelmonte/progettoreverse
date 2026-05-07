// ===== QualityScoring — Annotated small functions =====
// 6 readable functions
// Known properties: 19
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

// ==================================================
// @01bff300 (2096 bytes) — calculation
// Known properties of QualityScoring:
// _filterQuality, _detectsBassNote, _detectsChordExtensions, _detectsChurchModes, _omitDoubtedThirds, _detectsDetailedModeChanges, _detectsSingleMode, _reflectsPitchSystem, _detectsPitchSystem, _assumesLowestPitchAsRoot, _assumesClosePosition, _suggestsMissingThird, _suggestsMissingFifth, _reflectsBeatStrength, _reflectsPitch, _reflectsDynamic, _reflectsDetectionQuality, _extensionLimit, _granularity

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  undefined7 uVar9;
  undefined8 uVar8;
  longlong this;
  longlong **pplVar10;
  longlong *plVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pplVar10 = &local_40;
  FUN_01a13070();
  plVar3 = local_40;
  if ((DAT_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_02714a48 = FUN_000914a0();
    _DAT_02714a30 = "MUDetectionEditorView";
    _DAT_02714a38 = 0x600;
    param_1 = 0x34de90;
    _DAT_02714a40 = FUN_0034de90;
    _DAT_02714a50 = 0;
    uRam0000000002714a58 = 0;
    _DAT_02714a60 = 0;
    _DAT_02714ad8 = 0;
    uRam0000000002714ae0 = 0;
    _DAT_02714ae8 = 0;
    DAT_02714aea = 1;
    _DAT_02714a68 = 0;
    uRam0000000002714a70 = 0;
    _DAT_02714a78 = 0;
    uRam0000000002714a80 = 0;
    _DAT_02714a88 = 0;
    uRam0000000002714a90 = 0;
    _DAT_02714a98 = 0;
    uRam0000000002714aa0 = 0;
    _DAT_02714aa8 = 0;
    uRam0000000002714ab0 = 0;
    _DAT_02714ab8 = 0;
    uRam0000000002714ac0 = 0;
    _DAT_02714ac8 = 0;
    uRam0000000002714ad0 = 0;
    DAT_02714af3 = 0;
    _DAT_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar3 == (longlong *)0x0) {
LAB_01bff35c:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_01bff35c;
  }
  plVar3 = *pplVar10;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    local_b8 = 0;
    plVar11 = (longlong *)0x0;
    plVar3 = *(longlong **)(this + 0xe0);
    if (plVar3 == (longlong *)0x0) goto LAB_01bff97c;
  }
  else {
    pplVar10 = &local_f8;
    FUN_01a13070();
    plVar3 = local_f8;
    if ((DAT_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_02714a48 = FUN_000914a0();
      _DAT_02714a30 = "MUDetectionEditorView";
      _DAT_02714a38 = 0x600;
      param_1 = 0x34de90;
      _DAT_02714a40 = FUN_0034de90;
      _DAT_02714a50 = 0;
      uRam0000000002714a58 = 0;
      _DAT_02714a60 = 0;
      _DAT_02714ad8 = 0;
      uRam0000000002714ae0 = 0;
      _DAT_02714ae8 = 0;
      DAT_02714aea = 1;
      _DAT_02714a68 = 0;
      uRam0000000002714a70 = 0;
      _DAT_02714a78 = 0;
      uRam0000000002714a80 = 0;
      _DAT_02714a88 = 0;
      uRam0000000002714a90 = 0;
      _DAT_02714a98 = 0;
      uRam0000000002714aa0 = 0;
      _DAT_02714aa8 = 0;
      uRam0000000002714ab0 = 0;
      _DAT_02714ab8 = 0;
      uRam0000000002714ac0 = 0;
      _DAT_02714ac8 = 0;
      uRam0000000002714ad0 = 0;
      DAT_02714af3 = 0;
      _DAT_02714aeb = 0;
      ___cxa_guard_release();
    }
    if (plVar3 == (longlong *)0x0) {
LAB_01bff3ca:
      pplVar10 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar3 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') goto LAB_01bff3ca;
    }
    (**(code **)(&UNK_00001668 + **pplVar10))();
    plVar11 = local_40;
    if (local_40 == (longlong *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar9 = (undefined7)((ulonglong)plVar3 >> 8);
      if (local_38 == '\0') {
        FUN_00d50b00();
        uVar8 = CONCAT71(uVar9,1);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        uVar8 = CONCAT71(uVar9,1);
      }
    }
    if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = *(longlong **)(this + 0xe0);
    local_b8 = uVar8;
    if (plVar11 == plVar3) goto LAB_01bff97c;
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
    if (plVar11 != (longlong *)0x0) goto LAB_01bff4ea;
  }
  else {
    local_a8 = 0;
    (**(code **)(*(longlong *)(this + 0xb8) + 0x10))();
    FUN_00d50b00();
    local_a8 = '\x01';
    local_b0 = (longlong *)(this + 0xb8);
    FUN_00cbb340();
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      (**(code **)(*local_b0 + 0x10))();
      FUN_00d50b20();
    }
    plVar3 = *(longlong **)(this + 0xe0);
    if (plVar3 != plVar11) {
LAB_01bff4ea:
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(this + 0xe0) = plVar11;
      bVar12 = plVar3 != (longlong *)0x0;
      plVar3 = plVar11;
      if (bVar12) {
        FUN_00d50b20();
        plVar3 = *(longlong **)(this + 0xe0);
      }
    }
  }
  if (plVar3 == (longlong *)0x0) goto LAB_01bff97c;
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
  plVar3 = (longlong *)(this + 0xb8);
  local_98 = 0;
  (**(code **)(*(longlong *)(this + 0xb8) + 0x10))();
  FUN_00d50b00();
  local_98 = '\x01';
  local_e8 = 0;
  local_e0 = '\0';
  local_a0 = plVar3;
  uVar13 = FUN_002771e0();
  lVar5 = FUN_00e85ef0(uVar13,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da,1);
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bff650;
LAB_01bff65e:
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 == 0) goto LAB_01bff65e;
LAB_01bff650:
    local_68 = 0;
    FUN_00d50b00();
  }
  local_68 = '\x01';
  plVar7 = &local_70;
  local_70 = lVar5;
  FUN_00cbad30(plVar7,&local_e8,0x90);
  pVar6 = (pthread_key_t)plVar7;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
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
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bff7a9;
LAB_01bff7b7:
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 == 0) goto LAB_01bff7b7;
LAB_01bff7a9:
    local_58 = 0;
    FUN_00d50b00();
  }
  local_58 = '\x01';
  plVar7 = &local_60;
  local_60 = lVar5;
  FUN_00cbad30(plVar7,&local_d8,0x90);
  pVar6 = (pthread_key_t)plVar7;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
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
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bff8fc;
LAB_01bff90a:
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
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
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
LAB_01bff97c:
  if (((char)local_b8 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01bf95e0 (1720 bytes) — calculation
// Known properties of QualityScoring:
// _filterQuality, _detectsBassNote, _detectsChordExtensions, _detectsChurchModes, _omitDoubtedThirds, _detectsDetailedModeChanges, _detectsSingleMode, _reflectsPitchSystem, _detectsPitchSystem, _assumesLowestPitchAsRoot, _assumesClosePosition, _suggestsMissingThird, _suggestsMissingFifth, _reflectsBeatStrength, _reflectsPitch, _reflectsDynamic, _reflectsDetectionQuality, _extensionLimit, _granularity

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  undefined7 uVar9;
  undefined8 uVar8;
  longlong this;
  longlong **pplVar10;
  longlong *plVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined8 local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pplVar10 = &local_40;
  FUN_01a13070();
  plVar3 = local_40;
  if ((DAT_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_02714a48 = FUN_000914a0();
    _DAT_02714a30 = "MUDetectionEditorView";
    _DAT_02714a38 = 0x600;
    param_1 = 0x34de90;
    _DAT_02714a40 = FUN_0034de90;
    _DAT_02714a50 = 0;
    uRam0000000002714a58 = 0;
    _DAT_02714a60 = 0;
    _DAT_02714ad8 = 0;
    uRam0000000002714ae0 = 0;
    _DAT_02714ae8 = 0;
    DAT_02714aea = 1;
    _DAT_02714a68 = 0;
    uRam0000000002714a70 = 0;
    _DAT_02714a78 = 0;
    uRam0000000002714a80 = 0;
    _DAT_02714a88 = 0;
    uRam0000000002714a90 = 0;
    _DAT_02714a98 = 0;
    uRam0000000002714aa0 = 0;
    _DAT_02714aa8 = 0;
    uRam0000000002714ab0 = 0;
    _DAT_02714ab8 = 0;
    uRam0000000002714ac0 = 0;
    _DAT_02714ac8 = 0;
    uRam0000000002714ad0 = 0;
    DAT_02714af3 = 0;
    _DAT_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar3 == (longlong *)0x0) {
LAB_01bf963c:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_01bf963c;
  }
  plVar3 = *pplVar10;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    local_98 = 0;
    plVar11 = (longlong *)0x0;
    plVar3 = *(longlong **)(this + 0xe8);
    if (plVar3 == (longlong *)0x0) goto LAB_01bf9ae4;
  }
  else {
    pplVar10 = &local_c8;
    FUN_01a13070();
    plVar3 = local_c8;
    if ((DAT_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_02714a48 = FUN_000914a0();
      _DAT_02714a30 = "MUDetectionEditorView";
      _DAT_02714a38 = 0x600;
      param_1 = 0x34de90;
      _DAT_02714a40 = FUN_0034de90;
      _DAT_02714a50 = 0;
      uRam0000000002714a58 = 0;
      _DAT_02714a60 = 0;
      _DAT_02714ad8 = 0;
      uRam0000000002714ae0 = 0;
      _DAT_02714ae8 = 0;
      DAT_02714aea = 1;
      _DAT_02714a68 = 0;
      uRam0000000002714a70 = 0;
      _DAT_02714a78 = 0;
      uRam0000000002714a80 = 0;
      _DAT_02714a88 = 0;
      uRam0000000002714a90 = 0;
      _DAT_02714a98 = 0;
      uRam0000000002714aa0 = 0;
      _DAT_02714aa8 = 0;
      uRam0000000002714ab0 = 0;
      _DAT_02714ab8 = 0;
      uRam0000000002714ac0 = 0;
      _DAT_02714ac8 = 0;
      uRam0000000002714ad0 = 0;
      DAT_02714af3 = 0;
      _DAT_02714aeb = 0;
      ___cxa_guard_release();
    }
    if (plVar3 == (longlong *)0x0) {
LAB_01bf96aa:
      pplVar10 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar3 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') goto LAB_01bf96aa;
    }
    (**(code **)(&UNK_00001668 + **pplVar10))();
    plVar11 = local_40;
    if (local_40 == (longlong *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar9 = (undefined7)((ulonglong)plVar3 >> 8);
      if (local_38 == '\0') {
        FUN_00d50b00();
        uVar8 = CONCAT71(uVar9,1);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        uVar8 = CONCAT71(uVar9,1);
      }
    }
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = *(longlong **)(this + 0xe8);
    local_98 = uVar8;
    if (plVar11 == plVar3) goto LAB_01bf9ae4;
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
    if (plVar11 != (longlong *)0x0) goto LAB_01bf97c1;
  }
  else {
    local_88 = 0;
    (**(code **)(*(longlong *)(this + 0xb8) + 0x10))();
    FUN_00d50b00();
    local_88 = '\x01';
    local_90 = (longlong *)(this + 0xb8);
    FUN_00cbb340();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      (**(code **)(*local_90 + 0x10))();
      FUN_00d50b20();
    }
    plVar3 = *(longlong **)(this + 0xe8);
    if (plVar3 != plVar11) {
LAB_01bf97c1:
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(this + 0xe8) = plVar11;
      bVar12 = plVar3 != (longlong *)0x0;
      plVar3 = plVar11;
      if (bVar12) {
        FUN_00d50b20();
        plVar3 = *(longlong **)(this + 0xe8);
      }
    }
  }
  if (plVar3 == (longlong *)0x0) goto LAB_01bf9ae4;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = FUN_00e8b990();
  if (lVar5 == 0) goto LAB_01bf9ae4;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  plVar3 = (longlong *)(this + 0xb8);
  local_78 = 0;
  (**(code **)(*(longlong *)(this + 0xb8) + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  local_80 = plVar3;
  uVar13 = FUN_002771e0();
  lVar5 = FUN_00e85ef0(uVar13,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da,1);
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bf9917;
LAB_01bf9925:
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 == 0) goto LAB_01bf9925;
LAB_01bf9917:
    local_58 = 0;
    FUN_00d50b00();
  }
  local_58 = '\x01';
  plVar7 = &local_60;
  local_60 = lVar5;
  FUN_00cbad30(plVar7,&local_b8,0x90);
  pVar6 = (pthread_key_t)plVar7;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_68 = 0;
  (**(code **)(*plVar3 + 0x10))();
  FUN_00d50b00();
  local_68 = '\x01';
  local_a8 = 0;
  local_a0 = '\0';
  local_70 = plVar3;
  uVar13 = FUN_002771e0();
  lVar5 = FUN_00e85ef0(uVar13,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da_00,1);
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bf9a64;
LAB_01bf9a72:
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 == 0) goto LAB_01bf9a72;
LAB_01bf9a64:
    local_48 = 0;
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar5;
  FUN_00cbad30(&local_50,&local_a8,0x90);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
LAB_01bf9ae4:
  if (((char)local_98 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01947890 (1667 bytes) — calculation
// Known properties of QualityScoring:
// _filterQuality, _detectsBassNote, _detectsChordExtensions, _detectsChurchModes, _omitDoubtedThirds, _detectsDetailedModeChanges, _detectsSingleMode, _reflectsPitchSystem, _detectsPitchSystem, _assumesLowestPitchAsRoot, _assumesClosePosition, _suggestsMissingThird, _suggestsMissingFifth, _reflectsBeatStrength, _reflectsPitch, _reflectsDynamic, _reflectsDetectionQuality, _extensionLimit, _granularity

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  char *pcVar5;
  int unaff_ESI;
  longlong *this;
  undefined4 uVar6;
  longlong local_d0;
  undefined1 local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_88;
  char local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_ESI == 0) {
    pvVar1 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    pvVar1 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    FUN_00d23310();
    lVar3 = local_48;
    pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_40[0]);
    pcVar5 = local_38;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    local_68 = local_58;
    if (local_50 == '\0') {
      if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_38[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    FUN_0194d210();
    lVar3 = local_48;
    if ((local_40[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    local_60 = lVar3;
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      pVar4 = (pthread_key_t)local_68;
    }
    FUN_01320d00();
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df30();
    lVar2 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_78 = lVar2;
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132b1c0(0);
    lVar2 = local_48;
    if (((local_40[0] == '\0') && (local_48 != 0)) &&
       ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != 0)))) {
      FUN_00d50b20();
    }
    local_70 = lVar2;
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_012e6c30();
    local_d0 = lVar3;
    local_c8 = 0;
    FUN_0194e260(uVar6,&local_d0,param_3,param_4,0);
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      pVar4 = (pthread_key_t)local_60;
    }
    FUN_012e78c0();
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6af0();
    FUN_012c6a90();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      pVar4 = (pthread_key_t)local_60;
    }
    FUN_012e78c0();
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    lVar2 = local_60;
    lVar3 = local_78;
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6a80();
    uVar6 = FUN_012c6a20();
    if ((local_50 != '\0') && (local_58 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if (local_70 != 0) {
      uVar6 = FUN_00d50b20();
    }
    if (lVar3 != 0) {
      uVar6 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      uVar6 = FUN_00d50b20();
    }
    if (local_68 != 0) {
      uVar6 = FUN_00d50b20();
    }
  }
  else {
    uVar6 = FUN_0194dfd0();
  }
  local_88 = *param_2;
  local_80 = '\0';
  (**(code **)(&DAT_000017b0 + *this))(uVar6,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01948420 (986 bytes) — math_loop
// Known properties of QualityScoring:
// _filterQuality, _detectsBassNote, _detectsChordExtensions, _detectsChurchModes, _omitDoubtedThirds, _detectsDetailedModeChanges, _detectsSingleMode, _reflectsPitchSystem, _detectsPitchSystem, _assumesLowestPitchAsRoot, _assumesClosePosition, _suggestsMissingThird, _suggestsMissingFifth, _reflectsBeatStrength, _reflectsPitch, _reflectsDynamic, _reflectsDetectionQuality, _extensionLimit, _granularity

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong *arg1;
  longlong *this;
  bool bVar6;
  longlong local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  int local_48;
  int iStack_44;
  int local_40;
  
  local_50 = *arg1;
  if (*(int *)(local_50 + 0xc) == *(int *)(this[0xbc] + 0xc)) {
    local_58 = 0;
    local_60 = 0;
    local_48 = -1;
    iStack_44 = 0;
    local_40 = 0;
    bVar6 = true;
    while( true ) {
      if (iStack_44 != 0) {
        if (iStack_44 < 1) {
          iStack_44 = -iStack_44;
        }
        else {
          local_48 = local_48 - iStack_44;
          FUN_00d23690();
          local_40 = local_40 + iStack_44;
          iStack_44 = 0;
        }
      }
      lVar2 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(local_50 + 0xc) <= local_48) break;
      local_70 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar2 * 8);
      local_68 = '\0';
      local_60 = local_70;
      cVar1 = FUN_00d23d70();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (cVar1 == '\0') {
        bVar6 = false;
      }
    }
    FUN_00115190();
    if (!bVar6) {
      FUN_00d216c0();
      local_60 = *arg1;
      local_58 = '\0';
      FUN_00d214d0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar5 = 0x2572358;
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3260();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (this[0xbc] != 0) {
        local_58 = '\0';
        local_60 = 0;
        local_48 = -1;
        iStack_44 = 0;
        local_40 = 0;
        local_50 = this[0xbc];
        while( true ) {
          if (iStack_44 != 0) {
            if (iStack_44 < 1) {
              iStack_44 = -iStack_44;
            }
            else {
              local_48 = local_48 - iStack_44;
              FUN_00d23690();
              local_40 = local_40 + iStack_44;
              iStack_44 = 0;
            }
          }
          lVar2 = (longlong)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(local_50 + 0xc) <= local_48) break;
          local_a0 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar2 * 8);
          local_98 = '\0';
          local_60 = local_a0;
          (**(code **)(&UNK_00001698 + *this))(0,&local_a0);
          lVar2 = local_80;
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          local_70 = lVar2;
          local_68 = '\0';
          FUN_00d21140();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar2 = local_50;
        FUN_00115190();
        pVar5 = (pthread_key_t)lVar2;
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3270();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_88 = '\0';
      local_90 = puVar3;
      FUN_019a4000();
      if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @01948a20 (807 bytes) — math_loop
// Known properties of QualityScoring:
// _filterQuality, _detectsBassNote, _detectsChordExtensions, _detectsChurchModes, _omitDoubtedThirds, _detectsDetailedModeChanges, _detectsSingleMode, _reflectsPitchSystem, _detectsPitchSystem, _assumesLowestPitchAsRoot, _assumesClosePosition, _suggestsMissingThird, _suggestsMissingFifth, _reflectsBeatStrength, _reflectsPitch, _reflectsDynamic, _reflectsDetectionQuality, _extensionLimit, _granularity

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  char *pcVar4;
  pthread_key_t pVar5;
  longlong *this;
  longlong lVar6;
  longlong local_d0;
  char local_c8;
  longlong local_b0;
  char local_a8;
  longlong local_90;
  char local_88;
  longlong local_70;
  char local_68;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 == 0) {
LAB_01948cfa:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
  }
  else {
    lVar6 = 0;
    do {
      pVar5 = (pthread_key_t)param_1;
      if (*(int *)(local_70 + 0xc) <= (int)lVar6) {
        FUN_000be170();
        FUN_00d50b20();
        goto LAB_01948cfa;
      }
      lVar1 = *(longlong *)(*(longlong *)(local_70 + 0x10) + lVar6 * 8);
      FUN_01941c70();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      FUN_00d23310();
      local_38[0] = local_40[0];
      param_1 = local_38;
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = param_1;
      }
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      lVar2 = *param_2;
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar2 != local_d0);
    *(undefined1 *)(this + 1) = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *this = lVar1;
    *(undefined1 *)(this + 1) = 1;
    FUN_000be170();
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @01d4e050 (547 bytes) — logic_branch
// Known properties of QualityScoring:
// _filterQuality, _detectsBassNote, _detectsChordExtensions, _detectsChurchModes, _omitDoubtedThirds, _detectsDetailedModeChanges, _detectsSingleMode, _reflectsPitchSystem, _detectsPitchSystem, _assumesLowestPitchAsRoot, _assumesClosePosition, _suggestsMissingThird, _suggestsMissingFifth, _reflectsBeatStrength, _reflectsPitch, _reflectsDynamic, _reflectsDetectionQuality, _extensionLimit, _granularity

{
  int iVar1;
  
  if (DAT_027f04d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f04c0 = _DAT_0238fcc0;
      uRam00000000027f04c4 = _UNK_0238fcc4;
      uRam00000000027f04c8 = _UNK_0238fcc8;
      uRam00000000027f04cc = _UNK_0238fccc;
      DAT_027f04d0 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f0510 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f04e0 = "GNFilterQuality";
      _DAT_027f04e8 = 4;
      DAT_027f04ec = DAT_027f04d0;
      _DAT_027f04f0 = &DAT_027f04c0;
      _DAT_027f04f8 = &DAT_027f0490;
      _DAT_027f0500 = 0;
      uRam00000000027f0508 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027f0488 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027f0040 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027eff90 = FUN_00d4fe50();
          _DAT_027eff78 = "GNGraphicsContextState";
          _DAT_027eff80 = 0x58;
          _DAT_027eff88 = FUN_01d4bf80;
          _DAT_027eff98 = 0;
          uRam00000000027effa0 = 0;
          _DAT_027effa8 = 0;
          _DAT_027f0020 = 0;
          uRam00000000027f0028 = 0;
          _DAT_027f0030 = 0;
          DAT_027f0032 = 1;
          _DAT_027effb0 = 0;
          uRam00000000027effb8 = 0;
          _DAT_027effc0 = 0;
          uRam00000000027effc8 = 0;
          _DAT_027effd0 = 0;
          uRam00000000027effd8 = 0;
          _DAT_027effe0 = 0;
          uRam00000000027effe8 = 0;
          _DAT_027efff0 = 0;
          uRam00000000027efff8 = 0;
          _DAT_027f0000 = 0;
          uRam00000000027f0008 = 0;
          _DAT_027f0010 = 0;
          uRam00000000027f0018 = 0;
          DAT_027f003b = 0;
          _DAT_027f0033 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027f0448 = "_filterQuality";
      _DAT_027f0450 = &DAT_027eff78;
      _DAT_027f0458 = 0;
      _DAT_027f0460 = 0x6500;
      _DAT_027f0468 = "GNFilterQuality";
      _DAT_027f0470 = &DAT_027f04e0;
      _DAT_027f0478 = 0;
      uRam00000000027f0480 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027f0448;
}



