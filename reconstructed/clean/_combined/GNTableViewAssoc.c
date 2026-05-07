// ===================================================================
// GNTableViewAssoc — Complete reconstructed pseudocode
// 3 functions
// ===================================================================


// ============================================================
// 01df1e00
// ============================================================
// Function: FUN_01df1e00
// Address: 01df1e00
// Size: 899 bytes
// Class: GNTableViewAssoc

void FUN_01df1e00(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  uint32_t uVar4;
  int64_t *arg1;
  int64_t *plVar5;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  uint32_t local_44;
  int64_t *local_40;
  char local_38;
  
  FUN_01df0390();
  if (local_40 == (int64_t *)0x0) {
    return;
  }
  FUN_01df0390();
  lVar1 = local_88;
  cVar3 = FUN_01dba0c0();
  if ((local_80 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    return;
  }
  FUN_01df1960();
  plVar2 = local_40;
  if (local_40 == (int64_t *)0x0) {
    return;
  }
  if (local_38 == '\0') {
    FUN_00d50b00();
  }
  lVar1 = g_027e7c20;
  if (g_027e7c20 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccab60();
  plVar5 = local_40;
  if (local_40 == (int64_t *)0x0) {
    uVar4 = (uint32_t)CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
    plVar5 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      uVar4 = 0;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_01df1f10;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    uVar4 = 0;
  }
LAB_01df1f10:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_44 = uVar4;
  if ((plVar5 == (int64_t *)0x0) || (cVar3 = FUN_00d8ca50(), cVar3 == '\0')) {
    FUN_01ccad60();
    local_58 = local_40;
    local_50 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_50 = '\x01';
    local_98 = *arg1;
    local_90 = '\0';
    cVar3 = (char)local_44;
    (**(code **)(*plVar2 + 0x518))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01ccad60();
    local_78 = local_40;
    local_70 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    lVar1 = g_02774da0;
    local_70 = '\x01';
    local_b8 = *arg1;
    local_b0 = '\0';
    if (g_02774da0 != 0) {
      FUN_00d50b00();
    }
    local_a8 = lVar1;
    local_a0 = '\x01';
    FUN_00d99b10();
    local_68 = local_88;
    local_60 = 0;
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_60 = '\x01';
    cVar3 = (char)local_44;
    (**(code **)(*plVar2 + 0x520))(&local_68,&local_b8);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (cVar3 == '\0' && plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01df1960
// ============================================================
// Function: FUN_01df1960
// Address: 01df1960
// Size: 584 bytes
// Class: GNTableViewAssoc
// String references:
//   "GNTableViewAssoc"

void FUN_01df1960(void)

{
  bool bVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t *this_ptr;
  int64_t **pplVar5;
  int64_t *plVar6;
  int64_t *local_40;
  char local_38;
  
  FUN_01ccad60();
  plVar2 = local_40;
  if (local_40 == (int64_t *)0x0) {
    plVar6 = (int64_t *)0x0;
joined_r0x01df19a9:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar6 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      plVar6 = plVar2;
      goto joined_r0x01df19a9;
    }
  }
  if (plVar6 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  FUN_01db9a60();
  if (local_40 == (int64_t *)0x0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    goto LAB_01df1adf;
  }
  if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pplVar5 = &local_40;
  FUN_01ddf1f0();
  plVar6 = local_40;
  if ((g_026f2418 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026f2368 = FUN_001ba850();
    g_026f2350 = "GNTableViewAssoc";
    g_026f2358 = 0x60;
    g_026f2360 = FUN_001f3b20;
    g_026f2370 = 0;
    ram_00000000026f2378 = 0;
    g_026f2380 = 0;
    ram_00000000026f2388 = 0;
    g_026f2390 = 0;
    ram_00000000026f2398 = 0;
    g_026f23a0 = 0;
    ram_00000000026f23a8 = 0;
    g_026f23b0 = 0;
    ram_00000000026f23b8 = 0;
    g_026f23c0 = 0;
    ram_00000000026f23c8 = 0;
    g_026f23d0 = 0;
    ram_00000000026f23d8 = 0;
    g_026f23e0 = 0;
    ram_00000000026f23e8 = 0;
    g_026f23f0 = 0;
    ram_00000000026f23f8 = 0;
    g_026f2400 = 0;
    ram_00000000026f2408 = 0;
    g_026f2410 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (int64_t *)0x0) {
LAB_01df1a4f:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01df1a4f;
  }
  plVar6 = *pplVar5;
  if (plVar6 == (int64_t *)0x0) {
    bVar1 = false;
  }
  else if (*(char *)(pplVar5 + 1) == '\0') {
    bVar1 = true;
    FUN_00d50b00();
  }
  else {
    *(void*)(pplVar5 + 1) = 0;
    bVar1 = true;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  if (!bVar1 && plVar6 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  *this_ptr = (int64_t)plVar6;
  *(void*)(this_ptr + 1) = 1;
  FUN_00d50b20();
LAB_01df1adf:
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00189790
// ============================================================
// Function: FUN_00189790
// Address: 00189790
// Size: 501 bytes
// Class: GNTableViewAssoc
// String references:
//   "GNTableViewAssoc"

void FUN_00189790(void)

{
  int iVar1;
  void*puVar2;
  uint32_t uVar3;
  
  // [STATIC_INIT: property registration]
  if (g_026f240b != '\0') {
    return;
  }
  FUN_001ba5f0();
  FUN_00e87760();
  FUN_00d4ff40();
  if (1 < g_02802630) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
  }
  FUN_00d50c00();
  FUN_001f3c10();
  FUN_00d50c00();
  uVar3 = FUN_00e87770();
  FUN_00e87920(uVar3,0);
  FUN_001bb300();
  FUN_001bb300();
  return;
}

