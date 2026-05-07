// Function: FUN_01892930
// Address: 01892930
// Size: 2564 bytes
// Class: GNString
// String references:
//   "GNString"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int64_t * FUN_01892930(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t lVar9;
  void*puVar10;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t **pplVar11;
  uint32_t uVar12;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  FUN_01893ad0();
  local_a0 = local_50;
  local_98 = 0;
  if (local_48 == '\0') {
    if (local_50 != (int64_t *)0x0) {
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
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    iVar6 = FUN_00d8c7a0();
    if (iVar6 != 0) {
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
      return this_ptr;
    }
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(arg1 + 0x68);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(param_1);
  plVar2 = plVar1;
  lVar3 = g_027d8eb0;
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar3 = g_027d8eb0, lVar8 != 0)) {
    plVar2 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  g_027d8eb0 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pplVar11 = &local_50;
  (**(code **)(*plVar2 + 0x98))();
  plVar2 = local_50;
  if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    param_1 = 0x5d920;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_01892adb:
    pplVar11 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01892adb;
  }
  local_88 = 0;
  plVar2 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar11 + 1) = 0;
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
  if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(arg1 + 0x68);
  local_a8 = lVar8;
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(param_1);
  plVar2 = plVar1;
  lVar3 = g_027d8eb8;
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar3 = g_027d8eb8, lVar8 != 0)) {
    plVar2 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  g_027d8eb8 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pplVar11 = &local_50;
  (**(code **)(*plVar2 + 0x98))();
  plVar2 = local_50;
  if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    param_1 = 0x5d920;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_01892c5b:
    pplVar11 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01892c5b;
  }
  local_78 = 0;
  plVar2 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar11 + 1) = 0;
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
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(arg1 + 0x68);
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(param_1);
  plVar2 = plVar1;
  lVar3 = g_027d8ec0;
  if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar3 = g_027d8ec0, lVar9 != 0)) {
    plVar2 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
  }
  g_027d8ec0 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  pplVar11 = &local_50;
  (**(code **)(*plVar2 + 0x98))();
  plVar2 = local_50;
  if ((g_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    g_026d5e58 = FUN_00d4fe50();
    g_026d5e40 = "GNString";
    g_026d5e48 = 0x40;
    param_1 = 0x5d920;
    g_026d5e50 = FUN_0005d920;
    g_026d5e60 = 0;
    ram_00000000026d5e68 = 0;
    g_026d5e70 = 0;
    ram_00000000026d5e78 = 0;
    g_026d5e80 = 0;
    ram_00000000026d5e88 = 0;
    g_026d5e90 = 0;
    ram_00000000026d5e98 = 0;
    g_026d5ea0 = 0;
    ram_00000000026d5ea8 = 0;
    g_026d5eb0 = 0;
    ram_00000000026d5eb8 = 0;
    g_026d5ec0 = 0;
    ram_00000000026d5ec8 = 0;
    g_026d5ed0 = 0;
    ram_00000000026d5ed8 = 0;
    g_026d5ee0 = 0;
    ram_00000000026d5ee8 = 0;
    g_026d5ef0 = 0;
    ram_00000000026d5ef8 = 0;
    g_026d5f00 = 0;
    ___cxa_guard_release();
  }
  if (plVar2 == (int64_t *)0x0) {
LAB_01892dfe:
    pplVar11 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar2 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01892dfe;
  }
  local_68 = 0;
  plVar2 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar11 + 1) = 0;
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
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((lVar9 == 0) && (lVar8 == 0)) && (lVar4 == 0)) {
    if (*(int64_t *)(arg1 + 0x78) == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      goto LAB_018930ef;
    }
    FUN_00d50b00();
    FUN_00d50b20();
    lVar3 = *(int64_t *)(arg1 + 0x78);
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
    puVar10 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar10 = &g_02572358;
    uVar12 = (*g_02572370)();
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
    lVar3 = g_027259e0;
    if (g_027259e0 != 0) {
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
  return this_ptr;
}

