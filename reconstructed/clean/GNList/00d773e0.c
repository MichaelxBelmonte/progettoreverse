// Function: FUN_00d773e0
// Address: 00d773e0
// Size: 1159 bytes
// Class: GNList
// === GNList properties ===
//   GNInt           _archiveVersion
//   bool            _awakesObjectsAfterDecoding
//   bool            _isCancelled
//   GNInt           _currentObjectGraphIdx
//   GNInt           _predictedDecodedValuesIndex


void FUN_00d773e0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *arg1;
  void*this_ptr;
  uint32_t uVar5;
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
  
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_000276d0();
  *plVar3 = (int64_t)&g_025783f8;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  *(void*)((int64_t)plVar3 + 0x5b) = 0;
  *(void*)((int64_t)plVar3 + 99) = 0;
  FUN_00d500e0();
  lVar1 = *(int64_t *)(*arg1 + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = lVar1;
  uVar5 = FUN_00d73b40();
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (lVar1 != 0) {
    uVar5 = FUN_00d50b20();
  }
  plVar4 = plVar3 + 10;
  lVar1 = *(int64_t *)(*arg1 + 0x50);
  if (lVar1 == 0) {
    if (*plVar4 != 0) {
      *plVar4 = 0;
LAB_00d774bb:
      uVar5 = FUN_00d50b20();
      if (lVar1 != 0) goto LAB_00d774c8;
    }
  }
  else {
    FUN_00d50b00();
    lVar2 = *plVar4;
    if (lVar2 != lVar1) {
      FUN_00d50b00();
      *plVar4 = lVar1;
      if (lVar2 != 0) goto LAB_00d774bb;
    }
LAB_00d774c8:
    uVar5 = FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(*arg1 + 0x58);
  if (lVar1 == 0) {
    if (plVar3[0xb] == 0) goto LAB_00d77523;
    plVar3[0xb] = 0;
LAB_00d7750e:
    uVar5 = FUN_00d50b20();
    if (lVar1 == 0) goto LAB_00d77523;
  }
  else {
    FUN_00d50b00();
    lVar2 = plVar3[0xb];
    if (lVar2 != lVar1) {
      FUN_00d50b00();
      plVar3[0xb] = lVar1;
      if (lVar2 != 0) goto LAB_00d7750e;
    }
  }
  uVar5 = FUN_00d50b20();
LAB_00d77523:
  plVar3[0xc] = *(int64_t *)(*arg1 + 0x60);
  lVar1 = g_0277e980;
  plVar4 = (int64_t *)*arg1;
  if (g_0277e980 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_d0 = lVar1;
  local_c8 = '\x01';
  uVar5 = (**(code **)(*plVar4 + 0x88))(uVar5,&local_d0);
  local_70 = local_40;
  local_68 = 0;
  local_c0 = g_0277e980;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar5 = FUN_00d50b00();
      local_c0 = g_0277e980;
    }
  }
  else {
    local_38 = '\0';
  }
  local_68 = '\x01';
  g_0277e980 = local_c0;
  if (local_c0 != 0) {
    local_68 = '\x01';
    uVar5 = FUN_00d50b00();
  }
  local_b8 = '\x01';
  uVar5 = (**(code **)(*plVar3 + 0x80))(uVar5,&local_c0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_0277e988;
  plVar4 = (int64_t *)*arg1;
  if (g_0277e988 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_b0 = lVar1;
  local_a8 = '\x01';
  uVar5 = (**(code **)(*plVar4 + 0x88))(uVar5,&local_b0);
  local_60 = local_40;
  local_58 = 0;
  local_a0 = g_0277e988;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar5 = FUN_00d50b00();
      local_a0 = g_0277e988;
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = '\x01';
  g_0277e988 = local_a0;
  if (local_a0 != 0) {
    local_58 = '\x01';
    uVar5 = FUN_00d50b00();
  }
  local_98 = '\x01';
  uVar5 = (**(code **)(*plVar3 + 0x80))(uVar5,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = g_0277e990;
  plVar4 = (int64_t *)*arg1;
  if (g_0277e990 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_90 = lVar1;
  local_88 = '\x01';
  uVar5 = (**(code **)(*plVar4 + 0x88))(uVar5,&local_90);
  local_50 = local_40;
  local_48 = 0;
  local_80 = g_0277e990;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar5 = FUN_00d50b00();
      local_80 = g_0277e990;
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  g_0277e990 = local_80;
  if (local_80 != 0) {
    local_48 = '\x01';
    uVar5 = FUN_00d50b00();
  }
  local_78 = '\x01';
  (**(code **)(*plVar3 + 0x80))(uVar5,&local_80);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}

