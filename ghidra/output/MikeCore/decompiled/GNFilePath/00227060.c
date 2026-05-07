// Function: FUN_00227060
// Address: 00227060
// Size: 3171 bytes
// Class: GNFilePath


void FUN_00227060(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined1 local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_c0;
  char local_b8;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  char local_49;
  char local_48 [8];
  longlong *local_40;
  char local_38 [8];
  
  lVar1 = *(longlong *)(unaff_RDI + 0xb8);
  lVar8 = *unaff_RSI;
  if (lVar1 == lVar8) {
    return;
  }
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  *(longlong *)(unaff_RDI + 0xb8) = lVar8;
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar8 = *(longlong *)(unaff_RDI + 0xb8);
  }
  if (lVar8 == 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
    local_38[0] = '\0';
    local_40 = (longlong *)0x0;
  }
  else {
    FUN_006f3f00();
  }
  local_49 = FUN_00751ba0();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar5 = FUN_00440fb0();
  if ((iVar5 == 0) && (cVar3 = FUN_00228480(), cVar3 == '\0')) {
    FUN_00440fa0();
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x90);
  (**(code **)(&UNK_00001550 + *plVar2))();
  plVar7 = local_40;
  local_70 = local_38[0];
  pcVar6 = local_38;
  if (local_38[0] == '\0') {
    pcVar6 = &local_70;
  }
  *pcVar6 = '\0';
  if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 == (longlong *)0x0) {
    plVar7 = *(longlong **)(unaff_RDI + 0x90);
LAB_00227190:
    FUN_00d50b00();
  }
  else if (local_70 == '\0') goto LAB_00227190;
  (**(code **)(*plVar7 + 0x7b8))();
  (**(code **)(*(longlong *)(CONCAT71(uStack_5f,local_60) + 0x1f0) + 0x38))();
  if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_140 = DAT_026f6dc0;
  if (DAT_026f6dc0 != 0) {
    FUN_00d50b00();
  }
  local_138 = '\x01';
  FUN_00d70f90();
  FUN_00228710();
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00440770();
  plVar2 = local_40;
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    plVar2 = *(longlong **)(unaff_RDI + 0x90);
    if (plVar2 == (longlong *)0x0) {
LAB_002272fa:
      plVar7 = (longlong *)0x0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar2))();
      plVar7 = local_40;
      local_48[0] = local_38[0];
      pcVar6 = local_48;
      if (local_38[0] != '\0') {
        pcVar6 = local_38;
      }
      *pcVar6 = '\0';
      if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (longlong *)0x0) {
        plVar7 = *(longlong **)(unaff_RDI + 0x90);
        if (plVar7 == (longlong *)0x0) goto LAB_002272fa;
      }
      else if (local_48[0] != '\0') goto LAB_002272fd;
      FUN_00d50b00();
    }
LAB_002272fd:
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
    FUN_00440770();
    local_90 = local_40;
    local_88 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_88 = '\x01';
    FUN_01a5b5e0(0,&local_90);
    lVar8 = CONCAT71(uStack_5f,local_60);
    if (local_58 == '\0') {
      if (((lVar8 != 0) && (FUN_00d50b00(), local_58 != '\0')) &&
         (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
      FUN_00d50b20();
    }
    if ((plVar2 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      plVar2 = *(longlong **)(unaff_RDI + 0x90);
      (**(code **)(&UNK_00001550 + *plVar2))();
      plVar7 = local_40;
      pcVar6 = &local_60;
      if (local_38[0] != '\0') {
        pcVar6 = local_38;
      }
      local_60 = local_38[0];
      *pcVar6 = '\0';
      if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == (longlong *)0x0) {
        plVar7 = *(longlong **)(unaff_RDI + 0x90);
LAB_002274bd:
        FUN_00d50b00();
      }
      else if (local_60 == '\0') goto LAB_002274bd;
      local_128 = '\0';
      local_130 = lVar8;
      (**(code **)(*plVar7 + 0xec8))();
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x90);
  if (plVar2 == (longlong *)0x0) {
LAB_00227586:
    plVar7 = (longlong *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar2))();
    plVar7 = local_40;
    local_60 = local_38[0];
    pcVar6 = local_38;
    if (local_38[0] == '\0') {
      pcVar6 = &local_60;
    }
    *pcVar6 = '\0';
    if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (longlong *)0x0) {
      plVar7 = *(longlong **)(unaff_RDI + 0x90);
      if (plVar7 == (longlong *)0x0) goto LAB_00227586;
    }
    else if (local_60 != '\0') goto LAB_00227588;
    FUN_00d50b00();
  }
LAB_00227588:
  FUN_00440900();
  (**(code **)(&DAT_000015b8 + *plVar7))();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x90);
  if (plVar2 == (longlong *)0x0) {
LAB_0022761f:
    plVar7 = (longlong *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar2))();
    plVar7 = local_40;
    local_60 = local_38[0];
    pcVar6 = local_38;
    if (local_38[0] == '\0') {
      pcVar6 = &local_60;
    }
    *pcVar6 = '\0';
    if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (longlong *)0x0) {
      plVar7 = *(longlong **)(unaff_RDI + 0x90);
      if (plVar7 == (longlong *)0x0) goto LAB_0022761f;
    }
    else if (local_60 != '\0') goto LAB_00227622;
    FUN_00d50b00();
  }
LAB_00227622:
  FUN_00440f20();
  local_80 = local_40;
  local_78 = 0;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_78 = '\x01';
  FUN_019ea7c0();
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar2 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x90);
  if (plVar2 == (longlong *)0x0) {
LAB_00227719:
    plVar7 = (longlong *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar2))();
    plVar7 = local_40;
    pcVar6 = &local_60;
    if (local_38[0] != '\0') {
      pcVar6 = local_38;
    }
    local_60 = local_38[0];
    *pcVar6 = '\0';
    if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (longlong *)0x0) {
      plVar7 = *(longlong **)(unaff_RDI + 0x90);
      if (plVar7 == (longlong *)0x0) goto LAB_00227719;
    }
    else if (local_60 != '\0') goto LAB_0022771b;
    FUN_00d50b00();
  }
LAB_0022771b:
  FUN_019b59b0();
  if ((plVar2 != (longlong *)0x0) && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6f370();
  local_120 = DAT_026f6dc8;
  if (DAT_026f6dc8 != 0) {
    FUN_00d50b00();
  }
  local_118 = '\x01';
  uVar4 = FUN_00d70f90();
  *(undefined1 *)(unaff_RDI + 0x1a0) = uVar4;
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  iVar5 = FUN_00440fb0();
  if (iVar5 == 0) {
    plVar2 = *(longlong **)(unaff_RDI + 0x90);
    (**(code **)(&UNK_00001550 + *plVar2))();
    plVar7 = local_40;
    pcVar6 = local_38;
    if (local_38[0] == '\0') {
      pcVar6 = &local_70;
    }
    local_70 = local_38[0];
    *pcVar6 = '\0';
    if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar7 == (longlong *)0x0) {
      plVar7 = *(longlong **)(unaff_RDI + 0x90);
LAB_0022781e:
      FUN_00d50b00();
    }
    else if (local_70 == '\0') goto LAB_0022781e;
    (**(code **)(&UNK_00001670 + *plVar7))();
    FUN_000bdcb0();
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (local_49 == '\0') {
    FUN_0021a2c0();
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_40 + 0x450))();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      FUN_004f1660();
    }
    else {
      FUN_004f1690();
    }
  }
  else {
    FUN_00440fc0();
    plVar2 = local_40;
    if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
        (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00228980();
    iVar5 = FUN_00440fb0();
    if (iVar5 == *(int *)(unaff_RDI + 0x198)) {
      FUN_0021a2c0();
    }
    else {
      *(int *)(unaff_RDI + 0x1d0) = *(int *)(unaff_RDI + 0x1d0) + 1;
      lVar1 = *(longlong *)(unaff_RDI + 0xb8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00440fb0();
      local_158 = 0;
      local_160 = 0;
      local_150 = 0;
      local_148 = 0;
      FUN_00228b40(&local_150,&local_160);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      *(int *)(unaff_RDI + 0x1d0) = *(int *)(unaff_RDI + 0x1d0) + -1;
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_004f1620();
  }
  FUN_0022d390();
  FUN_0022d800();
  if (*(longlong *)(unaff_RDI + 0xd8) == 0) goto LAB_00227bb9;
  cVar3 = FUN_006487d0();
  if (cVar3 == '\0') {
    FUN_004f17e0();
    goto LAB_00227bb9;
  }
  FUN_00d50b00();
  local_110 = DAT_026f6dd0;
  if (DAT_026f6dd0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026f6dd8;
  local_108 = '\x01';
  if (DAT_026f6dd8 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar1;
  local_f8 = '\x01';
  lVar1 = *(longlong *)(unaff_RDI + 0xd8);
  local_b8 = 0;
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  local_c0 = lVar1;
  FUN_000bf690(&local_100,&local_110,&local_c0);
  plVar2 = *(longlong **)(unaff_RDI + 0x1e0);
  plVar7 = plVar2;
  if (plVar2 != local_40) {
    if (local_38[0] == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        goto LAB_00227ae1;
      }
      FUN_00d50b00();
      plVar2 = *(longlong **)(unaff_RDI + 0x1e0);
      *(longlong **)(unaff_RDI + 0x1e0) = local_40;
      plVar7 = local_40;
    }
    else {
      local_38[0] = '\0';
      plVar7 = local_40;
LAB_00227ae1:
      *(longlong **)(unaff_RDI + 0x1e0) = plVar7;
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar7 = local_40;
    }
  }
  if ((local_38[0] != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
LAB_00227bb9:
  FUN_002257b0();
  FUN_00d403d0();
  local_f0 = DAT_026f6d50;
  if (DAT_026f6d50 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  FUN_00d50b00();
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d40470(&local_e0,&stack0xffffffffffffff50,1,3);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


