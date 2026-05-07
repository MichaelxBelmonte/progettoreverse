// Function: FUN_00226290
// Address: 00226290
// Size: 2130 bytes
// Class: Unknown


void FUN_00226290(undefined8 param_1,double param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  void *pvVar4;
  char *pcVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  longlong unaff_RDI;
  longlong *plVar8;
  double dVar9;
  double dVar10;
  undefined4 extraout_XMM0_Db;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  longlong *local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  char local_48 [8];
  longlong *local_40;
  char local_38 [8];
  
  plVar8 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar8))();
  plVar7 = local_40;
  pcVar5 = local_38;
  local_58 = local_38[0];
  pcVar3 = pcVar5;
  if (local_38[0] == '\0') {
    pcVar3 = &local_58;
  }
  *pcVar3 = '\0';
  if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar6 = (pthread_key_t)pcVar5;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(unaff_RDI + 0x90);
LAB_00226304:
    FUN_00d50b00();
  }
  else if (local_58 == '\0') goto LAB_00226304;
  dVar9 = (double)(**(code **)(*plVar7 + 0xa50))();
  local_60 = (longlong *)param_2;
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (*(int *)(unaff_RDI + 0x198) == 1) {
    FUN_00226f20();
    if (local_38[0] == '\0') {
      if (local_40 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00226f20();
    plVar8 = local_40;
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_01656080(dVar9);
    if ((local_38[0] != '\0') && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00226f20();
    plVar8 = local_40;
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = (longlong *)FUN_01656080(dVar9 + (double)local_60);
    if ((local_38[0] != '\0') && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    local_60 = (longlong *)((double)local_60 - dVar10);
    dVar9 = dVar10;
  }
  FUN_004406d0(dVar9);
  FUN_004406e0(local_60);
  plVar8 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar8))();
  plVar7 = local_40;
  local_58 = local_38[0];
  pcVar5 = local_38;
  if (local_38[0] == '\0') {
    pcVar5 = &local_58;
  }
  *pcVar5 = '\0';
  if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(unaff_RDI + 0x90);
LAB_002264f0:
    FUN_00d50b00();
  }
  else if (local_58 == '\0') goto LAB_002264f0;
  (**(code **)(*plVar7 + 0x4d8))();
  FUN_00440710();
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar8 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar8))();
  plVar7 = local_40;
  local_58 = local_38[0];
  pcVar5 = local_38;
  if (local_38[0] == '\0') {
    pcVar5 = &local_58;
  }
  *pcVar5 = '\0';
  if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(unaff_RDI + 0x90);
LAB_00226578:
    FUN_00d50b00();
  }
  else if (local_58 == '\0') goto LAB_00226578;
  (**(code **)(*plVar7 + 0xa98))();
  FUN_004406f0();
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar8 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar8))();
  plVar7 = local_40;
  pcVar5 = &local_58;
  if (local_38[0] != '\0') {
    pcVar5 = local_38;
  }
  local_58 = local_38[0];
  *pcVar5 = '\0';
  if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(unaff_RDI + 0x90);
LAB_00226602:
    FUN_00d50b00();
  }
  else if (local_58 == '\0') goto LAB_00226602;
  (**(code **)(*plVar7 + 0xa98))();
  FUN_00440700(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Db));
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar8 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar8))();
  plVar7 = local_40;
  local_70 = local_38[0];
  pcVar5 = &local_70;
  if (local_38[0] != '\0') {
    pcVar5 = local_38;
  }
  *pcVar5 = '\0';
  if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(unaff_RDI + 0x90);
LAB_00226692:
    FUN_00d50b00();
  }
  else if (local_70 == '\0') goto LAB_00226692;
  (**(code **)(&UNK_000014c8 + *plVar7))();
  lVar1 = CONCAT71(uStack_57,local_58);
  if (local_50 == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_004407a0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  local_60 = *(longlong **)(unaff_RDI + 0x90);
  if (local_60 == (longlong *)0x0) {
LAB_002267ad:
    plVar8 = (longlong *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *local_60))();
    plVar8 = local_40;
    local_48[0] = local_38[0];
    pcVar5 = local_48;
    if (local_38[0] != '\0') {
      pcVar5 = local_38;
    }
    *pcVar5 = '\0';
    if ((local_38[0] != '\0') && (plVar8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (longlong *)0x0) {
      plVar8 = *(longlong **)(unaff_RDI + 0x90);
      if (plVar8 == (longlong *)0x0) goto LAB_002267ad;
    }
    else if (local_48[0] != '\0') goto LAB_002267b0;
    FUN_00d50b00();
  }
LAB_002267b0:
  FUN_019f0ee0();
  lVar1 = CONCAT71(uStack_6f,local_70);
  if (local_68 == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  FUN_01a5c3e0();
  lVar2 = CONCAT71(uStack_57,local_58);
  if (local_50 == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00440720();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != (longlong *)0x0) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = *(longlong **)(unaff_RDI + 0x90);
  if (plVar8 == (longlong *)0x0) {
LAB_0022693a:
    plVar7 = (longlong *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar8))();
    plVar7 = local_40;
    pcVar5 = &local_70;
    if (local_38[0] != '\0') {
      pcVar5 = local_38;
    }
    local_70 = local_38[0];
    *pcVar5 = '\0';
    if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (longlong *)0x0) {
      plVar7 = *(longlong **)(unaff_RDI + 0x90);
      if (plVar7 == (longlong *)0x0) goto LAB_0022693a;
    }
    else if (local_70 != '\0') goto LAB_0022693d;
    FUN_00d50b00();
  }
LAB_0022693d:
  FUN_019e9aa0();
  lVar1 = CONCAT71(uStack_57,local_58);
  if (local_50 == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00440f50();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  if ((plVar8 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar8))();
  plVar7 = local_40;
  pcVar5 = local_38;
  if (local_38[0] == '\0') {
    pcVar5 = &local_58;
  }
  local_58 = local_38[0];
  *pcVar5 = '\0';
  if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(unaff_RDI + 0x90);
  }
  else if (local_58 != '\0') goto LAB_00226a2e;
  FUN_00d50b00();
LAB_00226a2e:
  (**(code **)(&DAT_000015c0 + *plVar7))();
  FUN_00440820();
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00440fa0();
  FUN_00226f20();
  if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00441090();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


