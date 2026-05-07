// Function: FUN_01bff300
// Address: 01bff300
// Size: 2096 bytes
// Class: QualityScoring
// String references:
//   "MUDetectionEditorView"
//   "_attackItemDetectionQualityLimit"
//   "_attackItemDefaultDetectionQualityLimit"
//   "_attackItemDetectionVisualQualityLimit"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bff300(pthread_key_t param_1)

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
  longlong unaff_RDI;
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
    plVar3 = *(longlong **)(unaff_RDI + 0xe0);
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
    plVar3 = *(longlong **)(unaff_RDI + 0xe0);
    local_b8 = uVar8;
    if (plVar11 == plVar3) goto LAB_01bff97c;
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
    if (plVar11 != (longlong *)0x0) goto LAB_01bff4ea;
  }
  else {
    local_a8 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0xb8) + 0x10))();
    FUN_00d50b00();
    local_a8 = '\x01';
    local_b0 = (longlong *)(unaff_RDI + 0xb8);
    FUN_00cbb340();
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      (**(code **)(*local_b0 + 0x10))();
      FUN_00d50b20();
    }
    plVar3 = *(longlong **)(unaff_RDI + 0xe0);
    if (plVar3 != plVar11) {
LAB_01bff4ea:
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0xe0) = plVar11;
      bVar12 = plVar3 != (longlong *)0x0;
      plVar3 = plVar11;
      if (bVar12) {
        FUN_00d50b20();
        plVar3 = *(longlong **)(unaff_RDI + 0xe0);
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
  plVar3 = (longlong *)(unaff_RDI + 0xb8);
  local_98 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0xb8) + 0x10))();
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


