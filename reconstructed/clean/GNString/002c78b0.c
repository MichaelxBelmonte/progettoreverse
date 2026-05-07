// Function: FUN_002c78b0
// Address: 002c78b0
// Size: 1869 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_002c78b0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t lVar6;
  int64_t **pplVar7;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_38;
  char local_30;
  
  FUN_000b6bf0();
  lVar2 = g_026fce40;
  if (g_026fce40 == 0) {
    lVar6 = this_ptr[0x17];
    if (lVar6 != 0) goto LAB_002c7900;
  }
  else {
    FUN_00d50b00();
    lVar6 = this_ptr[0x17];
    if (lVar6 == lVar2) {
      FUN_00d50b20();
    }
    else {
LAB_002c7900:
      this_ptr[0x17] = lVar2;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
  }
  *(void*)(this_ptr + 0x18) = 1;
  *(void*)(this_ptr + 0x26) = 0;
  lVar2 = g_026fce48;
  if (g_026fce48 != 0) {
    FUN_00d50b00();
  }
  FUN_00de4060();
  plVar1 = local_38;
  if ((g_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_026cd0e8 = FUN_00d4fe50();
    g_026cd0d0 = "GNDictionary";
    g_026cd0d8 = 0x28;
    g_026cd0e0 = FUN_00022d20;
    g_026cd0f0 = 0;
    ram_00000000026cd0f8 = 0;
    g_026cd100 = 0;
    g_026cd178 = 0;
    ram_00000000026cd180 = 0;
    g_026cd188 = 0;
    g_026cd18a = 6;
    g_026cd108 = 0;
    ram_00000000026cd110 = 0;
    g_026cd118 = 0;
    ram_00000000026cd120 = 0;
    g_026cd128 = 0;
    ram_00000000026cd130 = 0;
    g_026cd138 = 0;
    ram_00000000026cd140 = 0;
    g_026cd148 = 0;
    ram_00000000026cd150 = 0;
    g_026cd158 = 0;
    ram_00000000026cd160 = 0;
    g_026cd168 = 0;
    ram_00000000026cd170 = 0;
    g_026cd193 = 0;
    g_026cd18b = 0;
    ___cxa_guard_release();
  }
  pplVar7 = (int64_t **)&g_02802688;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') {
      if ((g_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_026d5e58 = FUN_00d4fe50();
        g_026d5e40 = "GNString";
        g_026d5e48 = 0x40;
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
      cVar3 = FUN_00e8db60();
      pplVar7 = &local_38;
      if (cVar3 == '\0') {
        pplVar7 = (int64_t **)&g_02802688;
      }
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
  (**(code **)(*this_ptr + 0x5f0))();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_108 = g_026fce50;
  if (g_026fce50 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026fce58;
  local_100 = '\x01';
  if (g_026fce58 != 0) {
    FUN_00d50b00();
  }
  local_f8 = lVar2;
  local_f0 = '\x01';
  local_e8 = 0;
  local_e0 = '\0';
  FUN_000bf690(&local_f8,&local_108,&local_e8);
  plVar1 = (int64_t *)this_ptr[0x27];
  plVar5 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
        goto LAB_002c7aee;
      }
      FUN_00d50b00();
      plVar1 = (int64_t *)this_ptr[0x27];
      this_ptr[0x27] = (int64_t)local_38;
      plVar5 = local_38;
    }
    else {
      local_30 = '\0';
      plVar5 = local_38;
LAB_002c7aee:
      this_ptr[0x27] = (int64_t)plVar5;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar5 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar5 != (int64_t *)0x0)) {
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
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_d8 = g_026fce50;
  if (g_026fce50 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026fce60;
  local_d0 = '\x01';
  if (g_026fce60 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar2;
  local_c0 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  FUN_000bf690(&local_c8,&local_d8,&local_b8);
  plVar1 = (int64_t *)this_ptr[0x28];
  plVar5 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar5 = (int64_t *)0x0;
        goto LAB_002c7c51;
      }
      FUN_00d50b00();
      plVar1 = (int64_t *)this_ptr[0x28];
      this_ptr[0x28] = (int64_t)local_38;
      plVar5 = local_38;
    }
    else {
      local_30 = '\0';
      plVar5 = local_38;
LAB_002c7c51:
      this_ptr[0x28] = (int64_t)plVar5;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar5 = local_38;
    }
  }
  if ((local_30 != '\0') && (plVar5 != (int64_t *)0x0)) {
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
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_a8 = g_02703fe0;
  if (g_02703fe0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_026fce70;
  local_a0 = '\x01';
  if (g_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar2;
  local_90 = '\x01';
  local_88 = 0;
  local_80 = '\0';
  FUN_000bf690(&local_98,&local_a8,&local_88);
  plVar1 = (int64_t *)this_ptr[0x2b];
  plVar5 = plVar1;
  if (plVar1 == local_38) goto LAB_002c7df6;
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) {
      plVar5 = (int64_t *)0x0;
      goto LAB_002c7dab;
    }
    FUN_00d50b00();
    plVar1 = (int64_t *)this_ptr[0x2b];
    this_ptr[0x2b] = (int64_t)local_38;
    plVar5 = local_38;
  }
  else {
    local_30 = '\0';
    plVar5 = local_38;
LAB_002c7dab:
    this_ptr[0x2b] = (int64_t)plVar5;
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar5 = local_38;
  }
LAB_002c7df6:
  if ((local_30 != '\0') && (plVar5 != (int64_t *)0x0)) {
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
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

