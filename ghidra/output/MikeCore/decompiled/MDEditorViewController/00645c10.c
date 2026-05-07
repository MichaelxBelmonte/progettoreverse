// Function: FUN_00645c10
// Address: 00645c10
// Size: 2973 bytes
// Class: MDEditorViewController
// String references:
//   "MDEditorViewController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_00645c10(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  char *pcVar11;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar12;
  undefined4 uVar13;
  longlong *local_198;
  undefined1 local_190;
  undefined8 *local_188;
  longlong local_170;
  undefined1 local_168;
  longlong local_160;
  char local_158;
  longlong *local_150;
  undefined8 *local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  char local_48 [8];
  longlong *local_40;
  char local_38 [8];
  
  plVar9 = (longlong *)FUN_00e8fc40();
  FUN_000a9310();
  (**(code **)(*plVar9 + 0x18))();
  lVar1 = *(longlong *)(unaff_RSI + 0xe8);
  *(longlong **)(unaff_RSI + 0xe8) = plVar9;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar10 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  *(undefined4 *)(puVar10 + 6) = 0;
  *puVar10 = &DAT_02516280;
  (*DAT_02516298)();
  local_140 = '\x01';
  local_148 = puVar10;
  FUN_006c5420();
  if ((local_140 != '\0') && (local_148 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02725950;
  if (DAT_02725950 != 0) {
    FUN_00d50b00();
  }
  local_138 = lVar1;
  local_130 = '\x01';
  FUN_003b6200();
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RSI + 0xe8) + 0x558))();
  uVar13 = (**(code **)(**(longlong **)(unaff_RSI + 0xe8) + 0x990))();
  plVar9 = *(longlong **)(unaff_RSI + 0x170);
  local_f0 = 0;
  local_f8 = *(longlong *)(unaff_RSI + 0xe8);
  if (local_f8 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_f0 = '\x01';
  (**(code **)(*plVar9 + 0x9e0))(uVar13,0);
  local_188 = param_2;
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  plVar9 = (longlong *)FUN_00018320();
  (**(code **)(*plVar9 + 0x18))();
  local_150 = plVar9;
  FUN_00176c40();
  (**(code **)(*local_40 + 0x918))();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_40 + 0x928))();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_40 + 0x990))();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  plVar9 = local_40;
  FUN_01f27fe0();
  (**(code **)(*(longlong *)CONCAT71(uStack_57,local_58) + 0x450))();
  (**(code **)(*plVar9 + 0x998))();
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_40 + 0x558))();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = *(longlong **)(unaff_RSI + 0xe8);
  FUN_00176c40();
  plVar2 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  (**(code **)(*plVar9 + 0x450))();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_02725958;
  if (DAT_02725958 != 0) {
    FUN_00d50b00();
  }
  lVar5 = DAT_02725960;
  local_128 = lVar1;
  local_120 = '\x01';
  if (DAT_02725960 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar5;
  local_110 = '\x01';
  pplVar12 = &local_40;
  FUN_00176e40(&local_118,&local_128);
  plVar9 = local_40;
  if ((DAT_026f7020 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    _DAT_0270aa58 = FUN_00015ff0();
    _DAT_0270aa40 = "MDEditorViewController";
    _DAT_0270aa48 = 0x1e8;
    _DAT_0270aa50 = FUN_00074eb0;
    _DAT_0270aa60 = 0;
    uRam000000000270aa68 = 0;
    _DAT_0270aa70 = 0;
    _DAT_0270aae8 = 0;
    uRam000000000270aaf0 = 0;
    _DAT_0270aaf8 = 0;
    DAT_0270aafa = 1;
    _DAT_0270aa78 = 0;
    uRam000000000270aa80 = 0;
    _DAT_0270aa88 = 0;
    uRam000000000270aa90 = 0;
    _DAT_0270aa98 = 0;
    uRam000000000270aaa0 = 0;
    _DAT_0270aaa8 = 0;
    uRam000000000270aab0 = 0;
    _DAT_0270aab8 = 0;
    uRam000000000270aac0 = 0;
    _DAT_0270aac8 = 0;
    uRam000000000270aad0 = 0;
    _DAT_0270aad8 = 0;
    uRam000000000270aae0 = 0;
    DAT_0270ab03 = 0;
    _DAT_0270aafb = 0;
    ___cxa_guard_release();
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x360))();
    cVar7 = FUN_00e85ea0();
    if (cVar7 != '\0') goto LAB_00646030;
  }
  pplVar12 = (longlong **)&DAT_02802688;
LAB_00646030:
  plVar9 = *pplVar12;
  if (plVar9 == (longlong *)0x0) {
    bVar4 = false;
    bVar3 = false;
    plVar9 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar12 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar12 + 1) = 0;
    }
    bVar4 = true;
    bVar3 = true;
  }
  if ((local_38[0] != '\0') && (bVar3 = bVar4, local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar7 = (**(code **)(*local_40 + 0x450))();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar7 != '\0') {
    FUN_002539d0();
    plVar2 = local_40;
    local_e0 = 0;
    local_e8 = *(longlong *)(unaff_RSI + 0xe8);
    if (local_e8 != 0) {
      FUN_00d50b00();
    }
    local_e0 = '\x01';
    (**(code **)(*plVar2 + 0x4c8))((int)DAT_023dccec,DAT_023dccf4);
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar2 = *(longlong **)(unaff_RSI + 0xe8);
    FUN_002539d0();
    uVar13 = FUN_01e53c20();
    plVar6 = local_40;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    (**(code **)(*plVar2 + 0x9e8))(uVar13,0);
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e40eb0();
  plVar2 = local_40;
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) {
    plVar2 = *(longlong **)(unaff_RSI + 0xd8);
    local_d0 = 0;
    lVar1 = *(longlong *)(unaff_RSI + 0xe0);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_d0 = '\x01';
    local_d8 = lVar1;
    (**(code **)(*plVar2 + 0x450))();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    FUN_006c4ec0();
  }
  FUN_00d23310();
  plVar2 = local_40;
  local_48[0] = local_38[0];
  pcVar11 = local_48;
  if (local_38[0] != '\0') {
    pcVar11 = local_38;
  }
  *pcVar11 = '\0';
  if ((local_38[0] != '\0') && (plVar2 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_006f3f00();
  FUN_00756eb0();
  lVar1 = CONCAT71(uStack_57,local_58);
  if (local_50 == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00226060();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (plVar2 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  plVar2 = local_40;
  pcVar11 = local_38;
  if (local_38[0] == '\0') {
    pcVar11 = &local_58;
  }
  local_58 = local_38[0];
  *pcVar11 = '\0';
  if ((local_38[0] != '\0') && (plVar2 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = local_150;
  if ((local_58 == '\0') && (plVar2 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_00221970();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  uVar13 = (**(code **)(*(longlong *)*local_188 + 0x628))();
  lVar1 = CONCAT71(uStack_57,local_58);
  if (local_50 == '\0') {
    if (lVar1 != 0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_168 = 1;
  local_170 = lVar1;
  FUN_00642e80(uVar13,&local_170);
  plVar2 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_002358e0();
  if (unaff_RSI != 0) {
    FUN_00d50b20();
  }
  local_38[0] = '\0';
  local_40 = plVar9;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar6 + 0x630))();
  FUN_006c4ec0();
  local_108 = DAT_02725968;
  if (DAT_02725968 != 0) {
    FUN_00d50b00();
  }
  local_100 = '\x01';
  uVar13 = FUN_00179040();
  if ((local_100 != '\0') && (local_108 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  local_198 = plVar2;
  local_190 = 0;
  FUN_0063ffb0(uVar13,&local_198);
  FUN_00223a60();
  plVar6 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  FUN_006c6160();
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (!bVar3 && plVar9 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  *unaff_RDI = (longlong)plVar9;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}


