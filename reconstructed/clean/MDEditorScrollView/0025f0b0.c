// Function: FUN_0025f0b0
// Address: 0025f0b0
// Size: 1094 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_0025f0b0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  byte bVar5;
  uint64_t uVar6;
  int64_t this_ptr;
  int64_t **pplVar7;
  double dVar8;
  uint64_t uVar9;
  uint64_t extraout_XMM0_Qa;
  int64_t *local_a8;
  uint8_t local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    return;
  }
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
    return;
  }
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  plVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = g_026e1810;
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  if (g_026e1810 != 0) {
    FUN_00d50b00();
  }
  dVar8 = (double)FUN_00e7d6f0();
  uVar6 = (uint64_t)(dVar8 * g_023907c0);
  dVar8 = dVar8 * g_023907c0 - g_023907c8;
  uVar9 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar9 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  bVar5 = (byte)(((int64_t)dVar8 & (int64_t)uVar6 >> 0x3f | uVar6) / 3);
  local_58 = lVar3;
  local_50 = '\0';
  FUN_000175c0(uVar9,&local_58);
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    local_38 = '\0';
    local_40 = plVar1;
    bVar5 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((plVar1 != (int64_t *)0x0 & bVar5) == 0) {
    return;
  }
  FUN_00d3ed20();
  plVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  uVar9 = FUN_00d3ed20();
  local_78 = g_026f6fe0;
  if (g_026f6fe0 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_70 = '\x01';
  pplVar7 = &local_40;
  FUN_000175c0(uVar9,&local_78);
  plVar1 = local_40;
  FUN_002771e0();
  if (plVar1 == (int64_t *)0x0) {
    pplVar7 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      pplVar7 = (int64_t **)&g_02802688;
    }
  }
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  uVar9 = FUN_00d3ed20();
  local_68 = g_026f6fe8;
  if (g_026f6fe8 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_60 = '\x01';
  pplVar7 = &local_98;
  FUN_000175c0(uVar9,&local_68);
  plVar2 = local_98;
  uVar9 = FUN_002771e0();
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar9 = extraout_XMM0_Qa;
    if (cVar4 != '\0') goto LAB_0025f3f8;
  }
  pplVar7 = (int64_t **)&g_02802688;
LAB_0025f3f8:
  plVar2 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar7 + 1) = 0;
  }
  local_a0 = 1;
  local_a8 = plVar2;
  FUN_0025f7c0(uVar9,&local_a8);
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}

