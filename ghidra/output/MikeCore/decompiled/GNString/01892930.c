// Function: FUN_01892930
// Address: 01892930
// Size: 2564 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x0189307c) */
/* WARNING: Removing unreachable block (ram,0x01893088) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01892930(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar11;
  undefined4 uVar12;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01893ad0();
  local_a0 = local_50;
  local_98 = 0;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_98 = '\x01';
  FUN_018c24d0();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    iVar6 = FUN_00d8c7a0();
    if (iVar6 != 0) {
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return unaff_RDI;
    }
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RSI + 0x68);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(param_1);
  plVar2 = plVar1;
  lVar3 = DAT_027d8eb0;
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar3 = DAT_027d8eb0, lVar8 != 0)) {
    plVar2 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  DAT_027d8eb0 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pplVar11 = &local_50;
  (**(code **)(*plVar2 + 0x98))();
  plVar2 = local_50;
  if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    param_1 = 0x5d920;
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
  if (plVar2 == (longlong *)0x0) {
LAB_01892adb:
    pplVar11 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01892adb;
  }
  local_88 = 0;
  plVar2 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar11 + 1) = 0;
  }
  local_88 = '\x01';
  local_90 = plVar2;
  FUN_018c24d0();
  lVar8 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RSI + 0x68);
  local_a8 = lVar8;
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(param_1);
  plVar2 = plVar1;
  lVar3 = DAT_027d8eb8;
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar3 = DAT_027d8eb8, lVar8 != 0)) {
    plVar2 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  DAT_027d8eb8 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pplVar11 = &local_50;
  (**(code **)(*plVar2 + 0x98))();
  plVar2 = local_50;
  if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    param_1 = 0x5d920;
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
  if (plVar2 == (longlong *)0x0) {
LAB_01892c5b:
    pplVar11 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01892c5b;
  }
  local_78 = 0;
  plVar2 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar11 + 1) = 0;
  }
  local_78 = '\x01';
  local_80 = plVar2;
  FUN_018c24d0();
  lVar8 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RSI + 0x68);
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(param_1);
  plVar2 = plVar1;
  lVar3 = DAT_027d8ec0;
  if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar3 = DAT_027d8ec0, lVar9 != 0)) {
    plVar2 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
  }
  DAT_027d8ec0 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pplVar11 = &local_50;
  (**(code **)(*plVar2 + 0x98))();
  plVar2 = local_50;
  if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_026d5e58 = FUN_00d4fe50();
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    param_1 = 0x5d920;
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
  if (plVar2 == (longlong *)0x0) {
LAB_01892dfe:
    pplVar11 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01892dfe;
  }
  local_68 = 0;
  plVar2 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar11 + 1) = 0;
  }
  lVar9 = local_a8;
  local_68 = '\x01';
  local_70 = plVar2;
  FUN_018c24d0();
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((lVar9 == 0) && (lVar8 == 0)) && (lVar4 == 0)) {
    if (*(longlong *)(unaff_RSI + 0x78) == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      goto LAB_018930ef;
    }
    FUN_00d50b00();
    FUN_00d50b20();
    lVar3 = *(longlong *)(unaff_RSI + 0x78);
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01910920();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    puVar10 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar10 = &DAT_02572358;
    uVar12 = (*DAT_02572370)();
    if (lVar9 != 0) {
      local_40 = lVar9;
      local_38 = '\0';
      uVar12 = FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    if (lVar8 != 0) {
      local_38 = '\0';
      local_40 = lVar8;
      uVar12 = FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    if (lVar4 != 0) {
      local_38 = '\0';
      local_40 = lVar4;
      uVar12 = FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar12 = FUN_00d50b20();
      }
    }
    lVar3 = DAT_027259e0;
    if (DAT_027259e0 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_b8 = lVar3;
    local_b0 = '\x01';
    FUN_00d95130(uVar12,&local_b8);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_018930ef:
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


