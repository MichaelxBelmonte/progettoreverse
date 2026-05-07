// Function: FUN_006476b0
// Address: 006476b0
// Size: 1855 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


bool FUN_006476b0(uint64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  char cVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t this_ptr;
  uint32_t uVar8;
  uint64_t uVar9;
  uint64_t in_XMM1_Qb;
  uint8_t local_f8 [16];
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar2 = *(int64_t *)(this_ptr + 0x160);
  if (lVar2 != 0) goto LAB_00647dd7;
  plVar6 = (int64_t *)FUN_00018320();
  (**(code **)(*plVar6 + 0x18))();
  plVar3 = *(int64_t **)(this_ptr + 0x168);
  if (plVar3 == plVar6) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x168) = plVar6;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar4 = g_02725978;
  if (g_02725978 != 0) {
    FUN_00d50b00();
  }
  FUN_00179040();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_40 + 0x918))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_40 + 0x928))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_40 + 0x990))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  FUN_01f27fe0();
  (**(code **)(*local_50 + 0x450))();
  (**(code **)(*local_40 + 0x998))();
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_40 + 0x558))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  (**(code **)(*local_40 + 0x4d8))();
  local_f8._8_8_ = in_XMM1_Qb;
  local_f8._0_8_ = param_2;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00176c40();
  blendps(local_f8,g_023b5ec0,0xd);
  (**(code **)(*local_40 + 0x4d0))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x170) + 0x4a0))();
  iVar1 = *(int *)((int64_t)local_40 + 0xc);
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  plVar3 = *(int64_t **)(this_ptr + 0x170);
  uVar9 = FUN_00176c40();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      uVar9 = FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar3 + 0x9e0))(uVar9,iVar1 != 0);
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = (int64_t *)FUN_00659410();
  (**(code **)(*plVar6 + 0x18))();
  plVar3 = *(int64_t **)(this_ptr + 0x160);
  if (plVar3 == plVar6) {
    FUN_00d50b20();
  }
  else {
    *(int64_t **)(this_ptr + 0x160) = plVar6;
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x160) + 0x4c0))();
  FUN_00d6f370();
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_50 + 0x450))();
  lVar7 = g_02725988;
  lVar4 = g_02725980;
  if (cVar5 == '\0') {
    if (g_02725988 == 0) goto LAB_00647a7f;
    FUN_00d50b00();
  }
  else if (g_02725980 == 0) {
LAB_00647a7f:
    lVar7 = 0;
  }
  else {
    FUN_00d50b00();
    lVar7 = lVar4;
  }
  uVar8 = FUN_00d70af0();
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e53c20();
  insertps(g_023b5ed0,uVar8,0x10);
  (**(code **)(*local_40 + 0x9b8))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e53c20();
  uVar9 = (**(code **)(*local_40 + 0x4e8))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  local_88 = 0;
  lVar4 = *(int64_t *)(this_ptr + 0x160);
  if (lVar4 != 0) {
    uVar9 = FUN_00d50b00();
  }
  lVar7 = g_02725990;
  local_88 = '\x01';
  local_90 = lVar4;
  if (g_02725990 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_c0 = lVar7;
  local_b8 = '\x01';
  FUN_00177000(uVar9,&local_c0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_00637870();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00637870();
    FUN_006e3b60();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01bd0ba0();
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x178) = 1;
  }
  FUN_0063a4a0();
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_40 + 0x450))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_b0 = g_0270b7f0;
    if (g_0270b7f0 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    local_a0 = 0;
    local_98 = '\0';
    FUN_00d41430(&local_a0,&local_b0);
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_00647dd7:
  return lVar2 == 0;
}

