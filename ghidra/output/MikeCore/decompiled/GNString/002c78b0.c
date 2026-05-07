// Function: FUN_002c78b0
// Address: 002c78b0
// Size: 1869 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002c78b0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong **pplVar7;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_38;
  char local_30;
  
  FUN_000b6bf0();
  lVar2 = DAT_026fce40;
  if (DAT_026fce40 == 0) {
    lVar6 = unaff_RDI[0x17];
    if (lVar6 != 0) goto LAB_002c7900;
  }
  else {
    FUN_00d50b00();
    lVar6 = unaff_RDI[0x17];
    if (lVar6 == lVar2) {
      FUN_00d50b20();
    }
    else {
LAB_002c7900:
      unaff_RDI[0x17] = lVar2;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 0x18) = 1;
  *(undefined1 *)(unaff_RDI + 0x26) = 0;
  lVar2 = DAT_026fce48;
  if (DAT_026fce48 != 0) {
    FUN_00d50b00();
  }
  FUN_00de4060();
  plVar1 = local_38;
  if ((DAT_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026cd0e8 = FUN_00d4fe50();
    DAT_026cd0d0 = "GNDictionary";
    _DAT_026cd0d8 = 0x28;
    _DAT_026cd0e0 = FUN_00022d20;
    _DAT_026cd0f0 = 0;
    uRam00000000026cd0f8 = 0;
    _DAT_026cd100 = 0;
    _DAT_026cd178 = 0;
    uRam00000000026cd180 = 0;
    _DAT_026cd188 = 0;
    DAT_026cd18a = 6;
    _DAT_026cd108 = 0;
    uRam00000000026cd110 = 0;
    _DAT_026cd118 = 0;
    uRam00000000026cd120 = 0;
    _DAT_026cd128 = 0;
    uRam00000000026cd130 = 0;
    _DAT_026cd138 = 0;
    uRam00000000026cd140 = 0;
    _DAT_026cd148 = 0;
    uRam00000000026cd150 = 0;
    _DAT_026cd158 = 0;
    uRam00000000026cd160 = 0;
    _DAT_026cd168 = 0;
    uRam00000000026cd170 = 0;
    DAT_026cd193 = 0;
    _DAT_026cd18b = 0;
    ___cxa_guard_release();
  }
  pplVar7 = (longlong **)&DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
      if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026d5e58 = FUN_00d4fe50();
        DAT_026d5e40 = "GNString";
        _DAT_026d5e48 = 0x40;
        _DAT_026d5e50 = FUN_0005d920;
        _DAT_026d5e60 = 0;
        uRam00000000026d5e68 = 0;
        _DAT_026d5e70 = 0;
        uRam00000000026d5e78 = 0;
        _DAT_026d5e80 = 0;
        uRam00000000026d5e88 = 0;
        _DAT_026d5e90 = 0;
        uRam00000000026d5e98 = 0;
        _DAT_026d5ea0 = 0;
        uRam00000000026d5ea8 = 0;
        _DAT_026d5eb0 = 0;
        uRam00000000026d5eb8 = 0;
        _DAT_026d5ec0 = 0;
        uRam00000000026d5ec8 = 0;
        _DAT_026d5ed0 = 0;
        uRam00000000026d5ed8 = 0;
        _DAT_026d5ee0 = 0;
        uRam00000000026d5ee8 = 0;
        _DAT_026d5ef0 = 0;
        uRam00000000026d5ef8 = 0;
        _DAT_026d5f00 = 0;
        ___cxa_guard_release();
      }
      cVar3 = FUN_00e8db60();
      pplVar7 = &local_38;
      if (cVar3 == '\0') {
        pplVar7 = (longlong **)&DAT_02802688;
      }
    }
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  (**(code **)(*unaff_RDI + 0x5f0))();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_108 = DAT_026fce50;
  if (DAT_026fce50 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026fce58;
  local_100 = '\x01';
  if (DAT_026fce58 != 0) {
    FUN_00d50b00();
  }
  local_f8 = lVar2;
  local_f0 = '\x01';
  local_e8 = 0;
  local_e0 = '\0';
  FUN_000bf690(&local_f8,&local_108,&local_e8);
  plVar1 = (longlong *)unaff_RDI[0x27];
  plVar5 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        goto LAB_002c7aee;
      }
      FUN_00d50b00();
      plVar1 = (longlong *)unaff_RDI[0x27];
      unaff_RDI[0x27] = (longlong)local_38;
      plVar5 = local_38;
    }
    else {
      local_30 = '\0';
      plVar5 = local_38;
LAB_002c7aee:
      unaff_RDI[0x27] = (longlong)plVar5;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar5 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_d8 = DAT_026fce50;
  if (DAT_026fce50 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026fce60;
  local_d0 = '\x01';
  if (DAT_026fce60 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar2;
  local_c0 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  FUN_000bf690(&local_c8,&local_d8,&local_b8);
  plVar1 = (longlong *)unaff_RDI[0x28];
  plVar5 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        goto LAB_002c7c51;
      }
      FUN_00d50b00();
      plVar1 = (longlong *)unaff_RDI[0x28];
      unaff_RDI[0x28] = (longlong)local_38;
      plVar5 = local_38;
    }
    else {
      local_30 = '\0';
      plVar5 = local_38;
LAB_002c7c51:
      unaff_RDI[0x28] = (longlong)plVar5;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar5 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_a8 = DAT_02703fe0;
  if (DAT_02703fe0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026fce70;
  local_a0 = '\x01';
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  local_88 = 0;
  local_80 = '\0';
  FUN_000bf690(&local_98,&local_a8,&local_88);
  plVar1 = (longlong *)unaff_RDI[0x2b];
  plVar5 = plVar1;
  if (plVar1 == local_38) goto LAB_002c7df6;
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      goto LAB_002c7dab;
    }
    FUN_00d50b00();
    plVar1 = (longlong *)unaff_RDI[0x2b];
    unaff_RDI[0x2b] = (longlong)local_38;
    plVar5 = local_38;
  }
  else {
    local_30 = '\0';
    plVar5 = local_38;
LAB_002c7dab:
    unaff_RDI[0x2b] = (longlong)plVar5;
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar5 = local_38;
  }
LAB_002c7df6:
  if ((local_30 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


